#include "ps2_runtime.h"
#include "games_database.h"
#if defined(PS2X_ENABLE_DEBUG_UI) && !defined(PLATFORM_VITA)
#include "ps2_debug_panel.h"
#endif

#ifdef _DEBUG
#include "ps2_log.h"
#endif

#include <iostream>
#include <string>
#include <filesystem>
#include <exception>
#include <algorithm>
#include <cstdlib>

#if defined(__ANDROID__)
#include <android/log.h>
#include <unistd.h>
#include <thread>
#include <cstdio>
#include <cstring>
#include <fcntl.h>
#include <csignal>
#include <ucontext.h>
#include <dlfcn.h>
#endif

namespace
{
#if defined(__ANDROID__)
    int g_logcatPipeFds[2]{-1, -1};
    std::thread g_logcatThread;

    // File sink: Android/data/<pkg>/files/ps2x.log — bisa diambil tanpa adb.
    constexpr const char *kLogFile = "/storage/emulated/0/Android/data/com.ps2x.runner/files/ps2x.log";
    constexpr const char *kCrashFile = "/storage/emulated/0/Android/data/com.ps2x.runner/files/crash.txt";
    int g_logFileFd = -1;

    void writeAllFd(int fd, const char *data, size_t size)
    {
        while (size > 0)
        {
            const ssize_t written = write(fd, data, size);
            if (written <= 0)
            {
                return;
            }
            data += written;
            size -= static_cast<size_t>(written);
        }
    }

    void crashSignalHandler(int sig, siginfo_t *info, void *context)
    {
        const int fd = open(kCrashFile, O_WRONLY | O_CREAT | O_APPEND, 0644);
        if (fd >= 0)
        {
            char header[160];
            const void *pc = nullptr;
            if (context != nullptr)
            {
                pc = reinterpret_cast<void *>(static_cast<ucontext_t *>(context)->uc_mcontext.pc);
            }
            const int len = std::snprintf(header, sizeof(header),
                                          "\n[crash] signal %d (%s) addr=%p pc=%p\n",
                                          sig, strsignal(sig), info != nullptr ? info->si_addr : nullptr, pc);
            if (len > 0)
            {
                writeAllFd(fd, header, static_cast<size_t>(len));
            }
            close(fd);
        }
        signal(sig, SIG_DFL);
        raise(sig);
    }

    void installCrashHandlers()
    {
        struct sigaction action
        {
        };
        action.sa_sigaction = crashSignalHandler;
        action.sa_flags = SA_SIGINFO;
        sigemptyset(&action.sa_mask);
        for (const int sig : {SIGSEGV, SIGABRT, SIGBUS, SIGILL, SIGFPE})
        {
            sigaction(sig, &action, nullptr);
        }
    }

    void stopLogcatRedirect()
    {
        std::fflush(stdout);
        std::fflush(stderr);
        close(STDOUT_FILENO);
        close(STDERR_FILENO);
        if (g_logcatPipeFds[1] >= 0)
        {
            close(g_logcatPipeFds[1]);
            g_logcatPipeFds[1] = -1;
        }
        if (g_logcatThread.joinable())
        {
            g_logcatThread.join();
        }
    }

    void redirectStdioToLogcat()
    {
        if (pipe(g_logcatPipeFds) != 0)
        {
            return;
        }

        std::error_code logEc;
        std::filesystem::create_directories(std::filesystem::path(kLogFile).parent_path(), logEc);
        g_logFileFd = open(kLogFile, O_WRONLY | O_CREAT | O_TRUNC, 0644);

        setvbuf(stdout, nullptr, _IOLBF, 0);
        setvbuf(stderr, nullptr, _IONBF, 0);
        dup2(g_logcatPipeFds[1], STDOUT_FILENO);
        dup2(g_logcatPipeFds[1], STDERR_FILENO);

        g_logcatThread = std::thread([]()
                                     {
                                         FILE *reader = fdopen(g_logcatPipeFds[0], "r");
                                         if (!reader)
                                         {
                                             return;
                                         }
                                         char line[1024];
                                         while (fgets(line, sizeof(line), reader))
                                         {
                                             size_t len = std::strlen(line);
                                             if (len > 0 && line[len - 1] == '\n')
                                             {
                                                 line[len - 1] = '\0';
                                             }
                                             __android_log_write(ANDROID_LOG_INFO, "ps2x", line);
                                             if (g_logFileFd >= 0)
                                             {
                                                 writeAllFd(g_logFileFd, line, len);
                                                 writeAllFd(g_logFileFd, "\n", 1);
                                             }
                                         }
                                         fclose(reader);
                                         g_logcatPipeFds[0] = -1;
                                     });
        if (std::atexit(stopLogcatRedirect) != 0)
        {
            close(STDOUT_FILENO);
            close(STDERR_FILENO);
            close(g_logcatPipeFds[1]);
            g_logcatPipeFds[1] = -1;
            if (g_logcatThread.joinable())
            {
                g_logcatThread.join();
            }
        }
    }
#endif

    void setupTerminateLogger() // to help on release build crashs
    {
        std::set_terminate([]()
                           {
                               std::cerr << "[terminate] unhandled exception" << std::endl;
                               const std::exception_ptr ep = std::current_exception();
                               if (ep)
                               {
                                   try
                                   {
                                       std::rethrow_exception(ep);
                                   }
                                   catch (const std::system_error &e)
                                   {
                                       std::cerr << "[terminate] std::system_error code=" << e.code().value()
                                                 << " category=" << e.code().category().name()
                                                 << " message=" << e.what() << std::endl;
                                   }
                                   catch (const std::exception &e)
                                   {
                                       std::cerr << "[terminate] std::exception: " << e.what() << std::endl;
                                   }
                                   catch (...)
                                   {
                                       std::cerr << "[terminate] non-std exception" << std::endl;
                                   }
                               }
                               std::abort(); });
    }

    std::string normalizeGameId(const std::string &folderName)
    {
        std::string result = folderName;

        size_t underscore = result.find('_');
        if (underscore != std::string::npos)
            result[underscore] = '-';

        size_t dot = result.find('.');
        if (dot != std::string::npos)
            result.erase(dot, 1);

        std::ranges::transform(result, result.begin(), [](unsigned char character)
                               { return static_cast<char>(std::toupper(character)); });

        return result;
    }

#if defined(__ANDROID__)
    // ELF game bisa ikut di dalam APK sebagai lib/arm64-v8a/libgame.so.
    // Android mengekstraknya otomatis; kita cari di folder lib milik .so ini.
    std::filesystem::path bundledElfPath()
    {
        Dl_info info{};
        if (dladdr(reinterpret_cast<void *>(&installCrashHandlers), &info) == 0 || info.dli_fname == nullptr)
        {
            return {};
        }
        const std::filesystem::path candidate = std::filesystem::path(info.dli_fname).parent_path() / "libgame.so";
        std::error_code ec;
        if (std::filesystem::exists(candidate, ec))
        {
            return candidate;
        }
        return {};
    }
#endif

    std::filesystem::path getExecutablePath(int argc, char *argv[])
    {
        if (argc >= 2 && argv[1] && argv[1][0] != '\0')
        {
            std::cout << "Using argv boot path" << std::endl;
            return std::filesystem::path(argv[1]);
        }
#if defined(PS2X_DEFAULT_BOOT_ELF)
        std::cout << "Using default boot file" << std::endl;
        const std::filesystem::path configuredPath = std::filesystem::path(PS2X_DEFAULT_BOOT_ELF);
#if defined(PLATFORM_VITA)
        return configuredPath;
#endif
        std::filesystem::path resolved = configuredPath.is_absolute()
                                             ? configuredPath
                                             : (std::filesystem::current_path() / configuredPath).lexically_normal();
#if defined(__ANDROID__)
        std::error_code resolveEc;
        if (!std::filesystem::exists(resolved, resolveEc))
        {
            const std::filesystem::path bundled = bundledElfPath();
            if (!bundled.empty())
            {
                std::cout << "[boot] fallback ke ELF bawaan APK: " << bundled.string() << std::endl;
                return bundled;
            }
        }
#endif
        return resolved;
#else
        throw std::runtime_error("Unable to determine executable path. Pass the guest ELF as argv[1] or define PS2X_DEFAULT_BOOT_ELF.");
#endif
    }
}

int main(int argc, char *argv[])
{
#if defined(__ANDROID__)
    redirectStdioToLogcat();
    installCrashHandlers();
#endif
    setupTerminateLogger();

    try
    {
        std::filesystem::path pathObj = getExecutablePath(argc, argv);

        std::error_code bootEc;
        const bool bootExists = std::filesystem::exists(pathObj, bootEc);
        std::cout << "[boot] elf=" << pathObj.string() << " exists=" << bootExists << std::endl;
        if (!bootExists)
        {
            std::cout << "[boot] FATAL: ELF tidak ada. Push isi disc ke folder app." << std::endl;
        }

        std::string filePathStr = pathObj.string();
        std::string elfName = pathObj.filename().string();
        std::string normalizedId = normalizeGameId(elfName);

        std::string windowTitle = "PS2-Recomp | ";
        const char *gameName = getGameName(normalizedId);

#if !defined(PLATFORM_VITA)
        if (gameName)
        {
            windowTitle += std::string(gameName) + " | " + elfName;
        }
        else
#endif
        {
            windowTitle += elfName;
        }

        PS2Runtime runtime;
        // Gap code (boot stubs, thunks, addresses Ghidra left undefined) runs
        // on the EE interpreter instead of stalling the dispatch loop.
        runtime.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Interpret);
#if defined(PS2X_ENABLE_DEBUG_UI) && !defined(PLATFORM_VITA)
        // This hook is to prevent leak rlimgui deps to recompiler etc
        PS2DebugPanel debugPanel;
        runtime.setDebugUiCallbacks(
            [](PS2Runtime &rt, void *userData)
            {
                (void)rt;
                static_cast<PS2DebugPanel *>(userData)->initialize();
            },
            [](PS2Runtime &rt, void *userData)
            {
                static_cast<PS2DebugPanel *>(userData)->draw(rt);
            },
            [](PS2Runtime &rt, void *userData)
            {
                (void)rt;
                static_cast<PS2DebugPanel *>(userData)->shutdown();
            },
            &debugPanel);
#endif
        if (!runtime.initialize(windowTitle.c_str()))
        {
            std::cerr << "Failed to initialize PS2 runtime" << std::endl;
            return 1;
        }

        if (!runtime.loadELF(filePathStr))
        {
            std::cerr << "Failed to load ELF file: " << filePathStr << std::endl;
            return 1;
        }

        runtime.run();

#ifdef _DEBUG
        ps2_log::print_saved_location();
#endif
        std::cout.flush();
        std::cerr.flush();
        std::_Exit(0);
    }
    catch (const std::exception &e)
    {
        std::cerr << "[main] fatal exception: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "[main] fatal exception: unknown" << std::endl;
    }

    std::cout.flush();
    std::cerr.flush();
    std::_Exit(1);
}
