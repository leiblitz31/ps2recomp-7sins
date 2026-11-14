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

// Function: sub_002FD9B0
// Address: 0x2fd9b0 - 0x2fd9f0
void sub_002FD9B0_0x2fd9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD9B0_0x2fd9b0");
#endif

    switch (ctx->pc) {
        case 0x2fd9b8u: goto label_2fd9b8;
        case 0x2fd9c8u: goto label_2fd9c8;
        case 0x2fd9d8u: goto label_2fd9d8;
        case 0x2fd9e8u: goto label_2fd9e8;
        default: break;
    }

    ctx->pc = 0x2fd9b0u;

    // 0x2fd9b0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x2fd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2fd9b4: 0xc  syscall     0
    ctx->pc = 0x2fd9b4u;
    ctx->pc = 0x2FD9B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd9b8:
    // 0x2fd9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD9C0u;
    // 0x2fd9c0: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x2fd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x2fd9c4: 0xc  syscall     0
    ctx->pc = 0x2fd9c4u;
    ctx->pc = 0x2FD9C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd9c8:
    // 0x2fd9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD9D0u;
    // 0x2fd9d0: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x2fd9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2fd9d4: 0xc  syscall     0
    ctx->pc = 0x2fd9d4u;
    ctx->pc = 0x2FD9D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd9d8:
    // 0x2fd9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD9E0u;
    // 0x2fd9e0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2fd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2fd9e4: 0xc  syscall     0
    ctx->pc = 0x2fd9e4u;
    ctx->pc = 0x2FD9E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd9e8:
    // 0x2fd9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD9F0u;
}
