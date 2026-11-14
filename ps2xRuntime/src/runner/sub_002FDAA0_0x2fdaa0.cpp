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

// Function: sub_002FDAA0
// Address: 0x2fdaa0 - 0x2fdad0
void sub_002FDAA0_0x2fdaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDAA0_0x2fdaa0");
#endif

    switch (ctx->pc) {
        case 0x2fdaa8u: goto label_2fdaa8;
        case 0x2fdab8u: goto label_2fdab8;
        case 0x2fdac8u: goto label_2fdac8;
        default: break;
    }

    ctx->pc = 0x2fdaa0u;

    // 0x2fdaa0: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x2fdaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x2fdaa4: 0xc  syscall     0
    ctx->pc = 0x2fdaa4u;
    ctx->pc = 0x2FDAA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdaa8:
    // 0x2fdaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDAB0u;
    // 0x2fdab0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x2fdab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2fdab4: 0xc  syscall     0
    ctx->pc = 0x2fdab4u;
    ctx->pc = 0x2FDAB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdab8:
    // 0x2fdab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDAC0u;
    // 0x2fdac0: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x2fdac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x2fdac4: 0xc  syscall     0
    ctx->pc = 0x2fdac4u;
    ctx->pc = 0x2FDAC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdac8:
    // 0x2fdac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDAD0u;
}
