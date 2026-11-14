#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FDA10
// Address: 0x2fda10 - 0x2fda50
void sub_002FDA10_0x2fda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDA10_0x2fda10");
#endif

    switch (ctx->pc) {
        case 0x2fda18u: goto label_2fda18;
        case 0x2fda28u: goto label_2fda28;
        case 0x2fda38u: goto label_2fda38;
        case 0x2fda48u: goto label_2fda48;
        default: break;
    }

    ctx->pc = 0x2fda10u;

    // 0x2fda10: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x2fda10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2fda14: 0xc  syscall     0
    ctx->pc = 0x2fda14u;
    ctx->pc = 0x2FDA18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fda18:
    // 0x2fda18: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA20u;
    // 0x2fda20: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x2fda20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x2fda24: 0xc  syscall     0
    ctx->pc = 0x2fda24u;
    ctx->pc = 0x2FDA28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fda28:
    // 0x2fda28: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA30u;
    // 0x2fda30: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2fda30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2fda34: 0xc  syscall     0
    ctx->pc = 0x2fda34u;
    ctx->pc = 0x2FDA38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fda38:
    // 0x2fda38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA40u;
    // 0x2fda40: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x2fda40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x2fda44: 0xc  syscall     0
    ctx->pc = 0x2fda44u;
    ctx->pc = 0x2FDA48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fda48:
    // 0x2fda48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA50u;
}
