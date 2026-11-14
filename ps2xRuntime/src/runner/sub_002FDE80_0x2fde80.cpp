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

// Function: sub_002FDE80
// Address: 0x2fde80 - 0x2fdea0
void sub_002FDE80_0x2fde80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDE80_0x2fde80");
#endif

    switch (ctx->pc) {
        case 0x2fde88u: goto label_2fde88;
        case 0x2fde98u: goto label_2fde98;
        default: break;
    }

    ctx->pc = 0x2fde80u;

    // 0x2fde80: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x2fde80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2fde84: 0xc  syscall     0
    ctx->pc = 0x2fde84u;
    ctx->pc = 0x2FDE88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde88:
    // 0x2fde88: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE90u;
    // 0x2fde90: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x2fde90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x2fde94: 0xc  syscall     0
    ctx->pc = 0x2fde94u;
    ctx->pc = 0x2FDE98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde98:
    // 0x2fde98: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDEA0u;
}
