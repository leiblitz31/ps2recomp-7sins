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

// Function: sub_00284C20
// Address: 0x284c20 - 0x284c60
void sub_00284C20_0x284c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284C20_0x284c20");
#endif

    switch (ctx->pc) {
        case 0x284c48u: goto label_284c48;
        default: break;
    }

    ctx->pc = 0x284c20u;

    // 0x284c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x284c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x284c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284c28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x284c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x284c2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x284c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x284c30: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x284c30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x284c34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284c38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x284c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284c3c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x284c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x284c40: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x284C40u;
    SET_GPR_U32(ctx, 31, 0x284C48u);
    ctx->pc = 0x284C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284C60u, 0x284C40u, 0x284C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C48u;
label_284c48:
    // 0x284c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284c4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x284c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x284c50: 0x3e00008  jr          $ra
    ctx->pc = 0x284C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284C58u;
    // 0x284c58: 0x0  nop
    ctx->pc = 0x284c58u;
    // NOP
    // 0x284c5c: 0x0  nop
    ctx->pc = 0x284c5cu;
    // NOP
    ctx->pc = 0x284c60u;
}
