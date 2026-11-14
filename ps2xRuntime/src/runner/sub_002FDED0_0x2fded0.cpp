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

// Function: sub_002FDED0
// Address: 0x2fded0 - 0x2fdf00
void sub_002FDED0_0x2fded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDED0_0x2fded0");
#endif

    switch (ctx->pc) {
        case 0x2fded8u: goto label_2fded8;
        case 0x2fdee8u: goto label_2fdee8;
        case 0x2fdef8u: goto label_2fdef8;
        default: break;
    }

    ctx->pc = 0x2fded0u;

    // 0x2fded0: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x2fded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2fded4: 0xc  syscall     0
    ctx->pc = 0x2fded4u;
    ctx->pc = 0x2FDED8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fded8:
    // 0x2fded8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDEE0u;
    // 0x2fdee0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x2fdee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2fdee4: 0xc  syscall     0
    ctx->pc = 0x2fdee4u;
    ctx->pc = 0x2FDEE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdee8:
    // 0x2fdee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDEF0u;
    // 0x2fdef0: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x2fdef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2fdef4: 0xc  syscall     0
    ctx->pc = 0x2fdef4u;
    ctx->pc = 0x2FDEF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdef8:
    // 0x2fdef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF00u;
}
