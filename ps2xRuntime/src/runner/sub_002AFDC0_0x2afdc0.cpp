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

// Function: sub_002AFDC0
// Address: 0x2afdc0 - 0x2afe50
void sub_002AFDC0_0x2afdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFDC0_0x2afdc0");
#endif

    switch (ctx->pc) {
        case 0x2afde8u: goto label_2afde8;
        case 0x2afe14u: goto label_2afe14;
        case 0x2afe34u: goto label_2afe34;
        default: break;
    }

    ctx->pc = 0x2afdc0u;

    // 0x2afdc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2afdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2afdc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2afdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2afdc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2afdcc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2afdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2afdd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2afdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2afdd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2afdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afdd8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2afdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2afddc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2afddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afde0: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AFDE0u;
    SET_GPR_U32(ctx, 31, 0x2AFDE8u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AFDE0u, 0x2AFDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFDE8u;
label_2afde8:
    // 0x2afde8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AFDE8u;
    {
        const bool branch_taken_0x2afde8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afde8) {
            ctx->pc = 0x2AFE14u;
            goto label_2afe14;
        }
    }
    ctx->pc = 0x2AFDF0u;
    // 0x2afdf0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2afdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afdf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2afdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afdf8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2afdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2afdfc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2afdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2afe00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2afe00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afe04: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2afe04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afe08: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2afe08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2afe0c: 0xc0ab538  jal         func_2AD4E0
    ctx->pc = 0x2AFE0Cu;
    SET_GPR_U32(ctx, 31, 0x2AFE14u);
    ctx->pc = 0x2AD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD4E0u, 0x2AFE0Cu, 0x2AFE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE14u;
label_2afe14:
    // 0x2afe14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2afe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afe18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2afe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2afe1c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2afe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2afe20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2afe20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2afe24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2afe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afe28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2afe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afe2c: 0xc0abf94  jal         func_2AFE50
    ctx->pc = 0x2AFE2Cu;
    SET_GPR_U32(ctx, 31, 0x2AFE34u);
    ctx->pc = 0x2AFE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFE50u, 0x2AFE2Cu, 0x2AFE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE34u;
label_2afe34:
    // 0x2afe34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2afe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afe38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2afe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afe3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2afe3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afe40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2afe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2afe44: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFE4Cu;
    // 0x2afe4c: 0x0  nop
    ctx->pc = 0x2afe4cu;
    // NOP
    ctx->pc = 0x2afe50u;
}
