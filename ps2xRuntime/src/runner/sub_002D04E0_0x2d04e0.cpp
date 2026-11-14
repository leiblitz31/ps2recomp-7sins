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

// Function: sub_002D04E0
// Address: 0x2d04e0 - 0x2d0520
void sub_002D04E0_0x2d04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D04E0_0x2d04e0");
#endif

    switch (ctx->pc) {
        case 0x2d0508u: goto label_2d0508;
        default: break;
    }

    ctx->pc = 0x2d04e0u;

    // 0x2d04e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d04e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d04e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d04e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d04ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d04f0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2d04f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d04f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d04f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d04fc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2d04fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d0500: 0xc0b4148  jal         func_2D0520
    ctx->pc = 0x2D0500u;
    SET_GPR_U32(ctx, 31, 0x2D0508u);
    ctx->pc = 0x2D0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0520u, 0x2D0500u, 0x2D0508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0508u;
label_2d0508:
    // 0x2d0508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d050c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d050cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0510: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0518u;
    // 0x2d0518: 0x0  nop
    ctx->pc = 0x2d0518u;
    // NOP
    // 0x2d051c: 0x0  nop
    ctx->pc = 0x2d051cu;
    // NOP
    ctx->pc = 0x2d0520u;
}
