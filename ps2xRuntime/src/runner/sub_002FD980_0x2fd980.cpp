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

// Function: sub_002FD980
// Address: 0x2fd980 - 0x2fd9a0
void sub_002FD980_0x2fd980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD980_0x2fd980");
#endif

    switch (ctx->pc) {
        case 0x2fd988u: goto label_2fd988;
        case 0x2fd998u: goto label_2fd998;
        default: break;
    }

    ctx->pc = 0x2fd980u;

    // 0x2fd980: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2fd980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2fd984: 0xc  syscall     0
    ctx->pc = 0x2fd984u;
    ctx->pc = 0x2FD988u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd988:
    // 0x2fd988: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD990u;
    // 0x2fd990: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2fd990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2fd994: 0xc  syscall     0
    ctx->pc = 0x2fd994u;
    ctx->pc = 0x2FD998u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd998:
    // 0x2fd998: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD9A0u;
}
