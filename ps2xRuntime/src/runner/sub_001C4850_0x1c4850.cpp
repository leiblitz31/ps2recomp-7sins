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

// Function: sub_001C4850
// Address: 0x1c4850 - 0x1c4890
void sub_001C4850_0x1c4850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4850_0x1c4850");
#endif

    switch (ctx->pc) {
        case 0x1c4880u: goto label_1c4880;
        default: break;
    }

    ctx->pc = 0x1c4850u;

    // 0x1c4850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c4854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4858: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c4858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c485c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c485cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c4860: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1c4860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1c4864: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1c4864u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4868: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c4868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c486c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4870: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1c4870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4874: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1c4874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c4878: 0xc0711dc  jal         func_1C4770
    ctx->pc = 0x1C4878u;
    SET_GPR_U32(ctx, 31, 0x1C4880u);
    ctx->pc = 0x1C4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4770u, 0x1C4878u, 0x1C4880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4880u;
label_1c4880:
    // 0x1c4880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4884: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c4884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4888: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4890u;
}
