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

// Function: sub_00290BA0
// Address: 0x290ba0 - 0x290c30
void sub_00290BA0_0x290ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290BA0_0x290ba0");
#endif

    switch (ctx->pc) {
        case 0x290bc8u: goto label_290bc8;
        case 0x290bf4u: goto label_290bf4;
        case 0x290c14u: goto label_290c14;
        default: break;
    }

    ctx->pc = 0x290ba0u;

    // 0x290ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290bac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x290bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x290bb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x290bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x290bb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x290bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290bb8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x290bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x290bbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x290bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290bc0: 0xc09f668  jal         func_27D9A0
    ctx->pc = 0x290BC0u;
    SET_GPR_U32(ctx, 31, 0x290BC8u);
    ctx->pc = 0x27D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D9A0u, 0x290BC0u, 0x290BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BC8u;
label_290bc8:
    // 0x290bc8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290BC8u;
    {
        const bool branch_taken_0x290bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x290bc8) {
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290BD0u;
    // 0x290bd0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290bd4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x290bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290bd8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x290bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x290bdc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x290bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x290be0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x290be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290be4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x290be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290be8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x290be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x290bec: 0xc0a4314  jal         func_290C50
    ctx->pc = 0x290BECu;
    SET_GPR_U32(ctx, 31, 0x290BF4u);
    ctx->pc = 0x290C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290C50u, 0x290BECu, 0x290BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BF4u;
label_290bf4:
    // 0x290bf4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x290bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290bf8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290bfc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x290bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x290c00: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x290c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x290c04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x290c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290c08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x290c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290c0c: 0xc0a430c  jal         func_290C30
    ctx->pc = 0x290C0Cu;
    SET_GPR_U32(ctx, 31, 0x290C14u);
    ctx->pc = 0x290C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290C30u, 0x290C0Cu, 0x290C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C14u;
label_290c14:
    // 0x290c14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x290c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290c20: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x290c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x290c24: 0x3e00008  jr          $ra
    ctx->pc = 0x290C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290C2Cu;
    // 0x290c2c: 0x0  nop
    ctx->pc = 0x290c2cu;
    // NOP
    ctx->pc = 0x290c30u;
}
