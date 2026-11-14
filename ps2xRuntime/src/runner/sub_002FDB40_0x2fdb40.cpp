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

// Function: sub_002FDB40
// Address: 0x2fdb40 - 0x2fdb60
void sub_002FDB40_0x2fdb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDB40_0x2fdb40");
#endif

    switch (ctx->pc) {
        case 0x2fdb48u: goto label_2fdb48;
        case 0x2fdb58u: goto label_2fdb58;
        default: break;
    }

    ctx->pc = 0x2fdb40u;

    // 0x2fdb40: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x2fdb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2fdb44: 0xc  syscall     0
    ctx->pc = 0x2fdb44u;
    ctx->pc = 0x2FDB48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdb48:
    // 0x2fdb48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB50u;
    // 0x2fdb50: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2fdb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2fdb54: 0xc  syscall     0
    ctx->pc = 0x2fdb54u;
    ctx->pc = 0x2FDB58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdb58:
    // 0x2fdb58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB60u;
}
