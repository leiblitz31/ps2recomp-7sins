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

// Function: sub_002826D0
// Address: 0x2826d0 - 0x282700
void sub_002826D0_0x2826d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002826D0_0x2826d0");
#endif

    switch (ctx->pc) {
        case 0x2826e8u: goto label_2826e8;
        default: break;
    }

    ctx->pc = 0x2826d0u;

    // 0x2826d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2826d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2826d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2826d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2826d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2826d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2826dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2826dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2826e0: 0xc0a09c0  jal         func_282700
    ctx->pc = 0x2826E0u;
    SET_GPR_U32(ctx, 31, 0x2826E8u);
    ctx->pc = 0x282700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282700u, 0x2826E0u, 0x2826E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826E8u;
label_2826e8:
    // 0x2826e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2826e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2826ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2826ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2826f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2826F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2826F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2826F8u;
    // 0x2826f8: 0x0  nop
    ctx->pc = 0x2826f8u;
    // NOP
    // 0x2826fc: 0x0  nop
    ctx->pc = 0x2826fcu;
    // NOP
    ctx->pc = 0x282700u;
}
