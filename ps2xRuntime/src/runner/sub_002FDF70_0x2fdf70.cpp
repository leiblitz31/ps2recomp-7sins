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

// Function: sub_002FDF70
// Address: 0x2fdf70 - 0x2fdf90
void sub_002FDF70_0x2fdf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDF70_0x2fdf70");
#endif

    switch (ctx->pc) {
        case 0x2fdf78u: goto label_2fdf78;
        case 0x2fdf80u: goto label_2fdf80;
        case 0x2fdf88u: goto label_2fdf88;
        default: break;
    }

    ctx->pc = 0x2fdf70u;

    // 0x2fdf70: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x2fdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2fdf74: 0xc  syscall     0
    ctx->pc = 0x2fdf74u;
    ctx->pc = 0x2FDF78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdf78:
    // 0x2fdf78: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF80u;
label_2fdf80:
    // 0x2fdf80: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x2fdf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2fdf84: 0xc  syscall     0
    ctx->pc = 0x2fdf84u;
    ctx->pc = 0x2FDF88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdf88:
    // 0x2fdf88: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF90u;
}
