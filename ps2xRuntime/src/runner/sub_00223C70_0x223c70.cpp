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

// Function: sub_00223C70
// Address: 0x223c70 - 0x223d00
void sub_00223C70_0x223c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223C70_0x223c70");
#endif

    switch (ctx->pc) {
        case 0x223cb4u: goto label_223cb4;
        case 0x223cc4u: goto label_223cc4;
        default: break;
    }

    ctx->pc = 0x223c70u;

    // 0x223c70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x223c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x223c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223c7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x223c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x223c80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x223c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x223c84: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x223c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x223c88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x223c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223c8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223c90: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x223c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223c94: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x223c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x223c98: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x223c98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x223c9c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223C9Cu;
    {
        const bool branch_taken_0x223c9c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x223c9c) {
            ctx->pc = 0x223CACu;
            goto label_223cac;
        }
    }
    ctx->pc = 0x223CA4u;
    // 0x223ca4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x223ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x223ca8: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x223ca8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_223cac:
    // 0x223cac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x223CACu;
    {
        const bool branch_taken_0x223cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223cac) {
            ctx->pc = 0x223CE0u;
            goto label_223ce0;
        }
    }
    ctx->pc = 0x223CB4u;
label_223cb4:
    // 0x223cb4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x223cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223cb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x223cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223cbc: 0xc088f40  jal         func_223D00
    ctx->pc = 0x223CBCu;
    SET_GPR_U32(ctx, 31, 0x223CC4u);
    ctx->pc = 0x223D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223D00u, 0x223CBCu, 0x223CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CC4u;
label_223cc4:
    // 0x223cc4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223cc8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x223cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x223ccc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x223cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x223cd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x223cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223cd4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x223cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x223cd8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x223cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x223cdc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x223cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_223ce0:
    // 0x223ce0: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x223CE0u;
    {
        const bool branch_taken_0x223ce0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x223ce0) {
            ctx->pc = 0x223CB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223cb4;
        }
    }
    ctx->pc = 0x223CE8u;
    // 0x223ce8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x223ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223cf4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x223cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x223cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x223CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D00u;
}
