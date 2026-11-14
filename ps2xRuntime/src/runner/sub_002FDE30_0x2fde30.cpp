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

// Function: sub_002FDE30
// Address: 0x2fde30 - 0x2fde70
void sub_002FDE30_0x2fde30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDE30_0x2fde30");
#endif

    switch (ctx->pc) {
        case 0x2fde38u: goto label_2fde38;
        case 0x2fde48u: goto label_2fde48;
        case 0x2fde58u: goto label_2fde58;
        case 0x2fde68u: goto label_2fde68;
        default: break;
    }

    ctx->pc = 0x2fde30u;

    // 0x2fde30: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x2fde30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x2fde34: 0xc  syscall     0
    ctx->pc = 0x2fde34u;
    ctx->pc = 0x2FDE38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde38:
    // 0x2fde38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE40u;
    // 0x2fde40: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x2fde40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2fde44: 0xc  syscall     0
    ctx->pc = 0x2fde44u;
    ctx->pc = 0x2FDE48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde48:
    // 0x2fde48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE50u;
    // 0x2fde50: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x2fde50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2fde54: 0xc  syscall     0
    ctx->pc = 0x2fde54u;
    ctx->pc = 0x2FDE58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde58:
    // 0x2fde58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE60u;
    // 0x2fde60: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2fde60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2fde64: 0xc  syscall     0
    ctx->pc = 0x2fde64u;
    ctx->pc = 0x2FDE68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde68:
    // 0x2fde68: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE70u;
}
