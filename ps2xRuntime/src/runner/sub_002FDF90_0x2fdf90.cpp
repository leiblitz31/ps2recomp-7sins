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

// Function: sub_002FDF90
// Address: 0x2fdf90 - 0x2fdfc0
void sub_002FDF90_0x2fdf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDF90_0x2fdf90");
#endif

    switch (ctx->pc) {
        case 0x2fdf98u: goto label_2fdf98;
        case 0x2fdfa8u: goto label_2fdfa8;
        case 0x2fdfb8u: goto label_2fdfb8;
        default: break;
    }

    ctx->pc = 0x2fdf90u;

    // 0x2fdf90: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x2fdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2fdf94: 0xc  syscall     0
    ctx->pc = 0x2fdf94u;
    ctx->pc = 0x2FDF98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdf98:
    // 0x2fdf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDFA0u;
    // 0x2fdfa0: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x2fdfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2fdfa4: 0xc  syscall     0
    ctx->pc = 0x2fdfa4u;
    ctx->pc = 0x2FDFA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdfa8:
    // 0x2fdfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDFB0u;
    // 0x2fdfb0: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x2fdfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2fdfb4: 0xc  syscall     0
    ctx->pc = 0x2fdfb4u;
    ctx->pc = 0x2FDFB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdfb8:
    // 0x2fdfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDFC0u;
}
