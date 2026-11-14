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

// Function: sub_002AFD30
// Address: 0x2afd30 - 0x2afdc0
void sub_002AFD30_0x2afd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFD30_0x2afd30");
#endif

    switch (ctx->pc) {
        case 0x2afd58u: goto label_2afd58;
        case 0x2afd84u: goto label_2afd84;
        case 0x2afda4u: goto label_2afda4;
        default: break;
    }

    ctx->pc = 0x2afd30u;

    // 0x2afd30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2afd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2afd34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2afd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2afd38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2afd3c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2afd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2afd40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2afd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2afd44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2afd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afd48: 0x24500070  addiu       $s0, $v0, 0x70
    ctx->pc = 0x2afd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2afd4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2afd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afd50: 0xc08f548  jal         func_23D520
    ctx->pc = 0x2AFD50u;
    SET_GPR_U32(ctx, 31, 0x2AFD58u);
    ctx->pc = 0x23D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D520u, 0x2AFD50u, 0x2AFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD58u;
label_2afd58:
    // 0x2afd58: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AFD58u;
    {
        const bool branch_taken_0x2afd58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afd58) {
            ctx->pc = 0x2AFD84u;
            goto label_2afd84;
        }
    }
    ctx->pc = 0x2AFD60u;
    // 0x2afd60: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2afd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afd64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2afd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afd68: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2afd68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2afd6c: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x2afd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2afd70: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2afd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afd74: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2afd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afd78: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2afd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2afd7c: 0xc08f4d0  jal         func_23D340
    ctx->pc = 0x2AFD7Cu;
    SET_GPR_U32(ctx, 31, 0x2AFD84u);
    ctx->pc = 0x23D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D340u, 0x2AFD7Cu, 0x2AFD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD84u;
label_2afd84:
    // 0x2afd84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2afd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afd88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2afd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2afd8c: 0x2442ff90  addiu       $v0, $v0, -0x70
    ctx->pc = 0x2afd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x2afd90: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2afd90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2afd94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2afd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afd98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2afd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afd9c: 0xc08f0d8  jal         func_23C360
    ctx->pc = 0x2AFD9Cu;
    SET_GPR_U32(ctx, 31, 0x2AFDA4u);
    ctx->pc = 0x23C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C360u, 0x2AFD9Cu, 0x2AFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFDA4u;
label_2afda4:
    // 0x2afda4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2afda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2afda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afdac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2afdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afdb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2afdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2afdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFDBCu;
    // 0x2afdbc: 0x0  nop
    ctx->pc = 0x2afdbcu;
    // NOP
    ctx->pc = 0x2afdc0u;
}
