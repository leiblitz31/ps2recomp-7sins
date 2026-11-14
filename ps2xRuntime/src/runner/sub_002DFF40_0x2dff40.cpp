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

// Function: sub_002DFF40
// Address: 0x2dff40 - 0x2dffd0
void sub_002DFF40_0x2dff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFF40_0x2dff40");
#endif

    switch (ctx->pc) {
        case 0x2dff7cu: goto label_2dff7c;
        case 0x2dffbcu: goto label_2dffbc;
        default: break;
    }

    ctx->pc = 0x2dff40u;

    // 0x2dff40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dff44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dff48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2dff48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2dff4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2dff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2dff50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dff54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2dff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dff58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dff5c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2dff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dff60: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DFF60u;
    {
        const bool branch_taken_0x2dff60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dff60) {
            ctx->pc = 0x2DFF94u;
            goto label_2dff94;
        }
    }
    ctx->pc = 0x2DFF68u;
    // 0x2dff68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dff6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2dff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dff70: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2dff70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dff74: 0xc0b8098  jal         func_2E0260
    ctx->pc = 0x2DFF74u;
    SET_GPR_U32(ctx, 31, 0x2DFF7Cu);
    ctx->pc = 0x2E0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0260u, 0x2DFF74u, 0x2DFF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF7Cu;
label_2dff7c:
    // 0x2dff7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dff80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2dff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dff84: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2dff84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2dff88: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2dff88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2dff8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DFF8Cu;
    {
        const bool branch_taken_0x2dff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dff8c) {
            ctx->pc = 0x2DFFBCu;
            goto label_2dffbc;
        }
    }
    ctx->pc = 0x2DFF94u;
label_2dff94:
    // 0x2dff94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dff98: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2dff98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dff9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dffa0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2dffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dffa4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2dffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dffa8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2dffa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2dffac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dffacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dffb0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2dffb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dffb4: 0xc0b7ff4  jal         func_2DFFD0
    ctx->pc = 0x2DFFB4u;
    SET_GPR_U32(ctx, 31, 0x2DFFBCu);
    ctx->pc = 0x2DFFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFFD0u, 0x2DFFB4u, 0x2DFFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFFBCu;
label_2dffbc:
    // 0x2dffbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dffc0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFFCCu;
    // 0x2dffcc: 0x0  nop
    ctx->pc = 0x2dffccu;
    // NOP
    ctx->pc = 0x2dffd0u;
}
