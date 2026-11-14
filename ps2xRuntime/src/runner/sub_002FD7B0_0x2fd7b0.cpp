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

// Function: sub_002FD7B0
// Address: 0x2fd7b0 - 0x2fd810
void sub_002FD7B0_0x2fd7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD7B0_0x2fd7b0");
#endif

    switch (ctx->pc) {
        case 0x2fd7b8u: goto label_2fd7b8;
        case 0x2fd7c8u: goto label_2fd7c8;
        case 0x2fd7d8u: goto label_2fd7d8;
        case 0x2fd7e8u: goto label_2fd7e8;
        case 0x2fd7f8u: goto label_2fd7f8;
        case 0x2fd808u: goto label_2fd808;
        default: break;
    }

    ctx->pc = 0x2fd7b0u;

    // 0x2fd7b0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2fd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fd7b4: 0xc  syscall     0
    ctx->pc = 0x2fd7b4u;
    ctx->pc = 0x2FD7B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd7b8:
    // 0x2fd7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD7C0u;
    // 0x2fd7c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2fd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fd7c4: 0xc  syscall     0
    ctx->pc = 0x2fd7c4u;
    ctx->pc = 0x2FD7C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd7c8:
    // 0x2fd7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD7D0u;
    // 0x2fd7d0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2fd7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fd7d4: 0xc  syscall     0
    ctx->pc = 0x2fd7d4u;
    ctx->pc = 0x2FD7D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd7d8:
    // 0x2fd7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD7E0u;
    // 0x2fd7e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fd7e4: 0xc  syscall     0
    ctx->pc = 0x2fd7e4u;
    ctx->pc = 0x2FD7E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd7e8:
    // 0x2fd7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD7F0u;
    // 0x2fd7f0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2fd7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2fd7f4: 0xc  syscall     0
    ctx->pc = 0x2fd7f4u;
    ctx->pc = 0x2FD7F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd7f8:
    // 0x2fd7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD800u;
    // 0x2fd800: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2fd800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2fd804: 0xc  syscall     0
    ctx->pc = 0x2fd804u;
    ctx->pc = 0x2FD808u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd808:
    // 0x2fd808: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD810u;
}
