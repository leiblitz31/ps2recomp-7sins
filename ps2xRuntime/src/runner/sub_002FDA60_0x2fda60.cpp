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

// Function: sub_002FDA60
// Address: 0x2fda60 - 0x2fda80
void sub_002FDA60_0x2fda60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDA60_0x2fda60");
#endif

    switch (ctx->pc) {
        case 0x2fda68u: goto label_2fda68;
        case 0x2fda78u: goto label_2fda78;
        default: break;
    }

    ctx->pc = 0x2fda60u;

    // 0x2fda60: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2fda60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2fda64: 0xc  syscall     0
    ctx->pc = 0x2fda64u;
    ctx->pc = 0x2FDA68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fda68:
    // 0x2fda68: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA70u;
    // 0x2fda70: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x2fda70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2fda74: 0xc  syscall     0
    ctx->pc = 0x2fda74u;
    ctx->pc = 0x2FDA78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fda78:
    // 0x2fda78: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA80u;
}
