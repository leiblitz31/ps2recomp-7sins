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

// Function: sub_002AFE50
// Address: 0x2afe50 - 0x2affb0
void sub_002AFE50_0x2afe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFE50_0x2afe50");
#endif

    switch (ctx->pc) {
        case 0x2afe50u: goto label_2afe50;
        case 0x2afe54u: goto label_2afe54;
        case 0x2afe58u: goto label_2afe58;
        case 0x2afe5cu: goto label_2afe5c;
        case 0x2afe60u: goto label_2afe60;
        case 0x2afe64u: goto label_2afe64;
        case 0x2afe68u: goto label_2afe68;
        case 0x2afe6cu: goto label_2afe6c;
        case 0x2afe70u: goto label_2afe70;
        case 0x2afe74u: goto label_2afe74;
        case 0x2afe78u: goto label_2afe78;
        case 0x2afe7cu: goto label_2afe7c;
        case 0x2afe80u: goto label_2afe80;
        case 0x2afe84u: goto label_2afe84;
        case 0x2afe88u: goto label_2afe88;
        case 0x2afe8cu: goto label_2afe8c;
        case 0x2afe90u: goto label_2afe90;
        case 0x2afe94u: goto label_2afe94;
        case 0x2afe98u: goto label_2afe98;
        case 0x2afe9cu: goto label_2afe9c;
        case 0x2afea0u: goto label_2afea0;
        case 0x2afea4u: goto label_2afea4;
        case 0x2afea8u: goto label_2afea8;
        case 0x2afeacu: goto label_2afeac;
        case 0x2afeb0u: goto label_2afeb0;
        case 0x2afeb4u: goto label_2afeb4;
        case 0x2afeb8u: goto label_2afeb8;
        case 0x2afebcu: goto label_2afebc;
        case 0x2afec0u: goto label_2afec0;
        case 0x2afec4u: goto label_2afec4;
        case 0x2afec8u: goto label_2afec8;
        case 0x2afeccu: goto label_2afecc;
        case 0x2afed0u: goto label_2afed0;
        case 0x2afed4u: goto label_2afed4;
        case 0x2afed8u: goto label_2afed8;
        case 0x2afedcu: goto label_2afedc;
        case 0x2afee0u: goto label_2afee0;
        case 0x2afee4u: goto label_2afee4;
        case 0x2afee8u: goto label_2afee8;
        case 0x2afeecu: goto label_2afeec;
        case 0x2afef0u: goto label_2afef0;
        case 0x2afef4u: goto label_2afef4;
        case 0x2afef8u: goto label_2afef8;
        case 0x2afefcu: goto label_2afefc;
        case 0x2aff00u: goto label_2aff00;
        case 0x2aff04u: goto label_2aff04;
        case 0x2aff08u: goto label_2aff08;
        case 0x2aff0cu: goto label_2aff0c;
        case 0x2aff10u: goto label_2aff10;
        case 0x2aff14u: goto label_2aff14;
        case 0x2aff18u: goto label_2aff18;
        case 0x2aff1cu: goto label_2aff1c;
        case 0x2aff20u: goto label_2aff20;
        case 0x2aff24u: goto label_2aff24;
        case 0x2aff28u: goto label_2aff28;
        case 0x2aff2cu: goto label_2aff2c;
        case 0x2aff30u: goto label_2aff30;
        case 0x2aff34u: goto label_2aff34;
        case 0x2aff38u: goto label_2aff38;
        case 0x2aff3cu: goto label_2aff3c;
        case 0x2aff40u: goto label_2aff40;
        case 0x2aff44u: goto label_2aff44;
        case 0x2aff48u: goto label_2aff48;
        case 0x2aff4cu: goto label_2aff4c;
        case 0x2aff50u: goto label_2aff50;
        case 0x2aff54u: goto label_2aff54;
        case 0x2aff58u: goto label_2aff58;
        case 0x2aff5cu: goto label_2aff5c;
        case 0x2aff60u: goto label_2aff60;
        case 0x2aff64u: goto label_2aff64;
        case 0x2aff68u: goto label_2aff68;
        case 0x2aff6cu: goto label_2aff6c;
        case 0x2aff70u: goto label_2aff70;
        case 0x2aff74u: goto label_2aff74;
        case 0x2aff78u: goto label_2aff78;
        case 0x2aff7cu: goto label_2aff7c;
        case 0x2aff80u: goto label_2aff80;
        case 0x2aff84u: goto label_2aff84;
        case 0x2aff88u: goto label_2aff88;
        case 0x2aff8cu: goto label_2aff8c;
        case 0x2aff90u: goto label_2aff90;
        case 0x2aff94u: goto label_2aff94;
        case 0x2aff98u: goto label_2aff98;
        case 0x2aff9cu: goto label_2aff9c;
        case 0x2affa0u: goto label_2affa0;
        case 0x2affa4u: goto label_2affa4;
        case 0x2affa8u: goto label_2affa8;
        case 0x2affacu: goto label_2affac;
        default: break;
    }

    ctx->pc = 0x2afe50u;

label_2afe50:
    // 0x2afe50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2afe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2afe54:
    // 0x2afe54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2afe54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2afe58:
    // 0x2afe58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2afe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2afe5c:
    // 0x2afe5c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2afe5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2afe60:
    // 0x2afe60: 0x3e00008  jr          $ra
label_2afe64:
    if (ctx->pc == 0x2AFE64u) {
        ctx->pc = 0x2AFE68u;
        goto label_2afe68;
    }
    ctx->pc = 0x2AFE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFE68u;
label_2afe68:
    // 0x2afe68: 0x0  nop
    ctx->pc = 0x2afe68u;
    // NOP
label_2afe6c:
    // 0x2afe6c: 0x0  nop
    ctx->pc = 0x2afe6cu;
    // NOP
label_2afe70:
    // 0x2afe70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2afe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2afe74:
    // 0x2afe74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2afe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2afe78:
    // 0x2afe78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2afe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2afe7c:
    // 0x2afe7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2afe80:
    // 0x2afe80: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2afe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2afe84:
    // 0x2afe84: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2afe84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2afe88:
    // 0x2afe88: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2afe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2afe8c:
    // 0x2afe8c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2afe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2afe90:
    // 0x2afe90: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2afe94:
    if (ctx->pc == 0x2AFE94u) {
        ctx->pc = 0x2AFE98u;
        goto label_2afe98;
    }
    ctx->pc = 0x2AFE90u;
    {
        const bool branch_taken_0x2afe90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afe90) {
            ctx->pc = 0x2AFEA0u;
            goto label_2afea0;
        }
    }
    ctx->pc = 0x2AFE98u;
label_2afe98:
    // 0x2afe98: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2afe9c:
    if (ctx->pc == 0x2AFE9Cu) {
        ctx->pc = 0x2AFEA0u;
        goto label_2afea0;
    }
    ctx->pc = 0x2AFE98u;
    {
        const bool branch_taken_0x2afe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afe98) {
            ctx->pc = 0x2AFF04u;
            goto label_2aff04;
        }
    }
    ctx->pc = 0x2AFEA0u;
label_2afea0:
    // 0x2afea0: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x2afea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2afea4:
    // 0x2afea4: 0xc119b68  jal         func_466DA0
label_2afea8:
    if (ctx->pc == 0x2AFEA8u) {
        ctx->pc = 0x2AFEACu;
        goto label_2afeac;
    }
    ctx->pc = 0x2AFEA4u;
    SET_GPR_U32(ctx, 31, 0x2AFEACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2AFEA4u, 0x2AFEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFEACu;
label_2afeac:
    // 0x2afeac: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x2afeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2afeb0:
    // 0x2afeb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2afeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afeb4:
    // 0x2afeb4: 0xc0400e0  jal         func_100380
label_2afeb8:
    if (ctx->pc == 0x2AFEB8u) {
        ctx->pc = 0x2AFEBCu;
        goto label_2afebc;
    }
    ctx->pc = 0x2AFEB4u;
    SET_GPR_U32(ctx, 31, 0x2AFEBCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2AFEB4u, 0x2AFEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFEBCu;
label_2afebc:
    // 0x2afebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2afebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afec0:
    // 0x2afec0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2afec4:
    if (ctx->pc == 0x2AFEC4u) {
        ctx->pc = 0x2AFEC8u;
        goto label_2afec8;
    }
    ctx->pc = 0x2AFEC0u;
    {
        const bool branch_taken_0x2afec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afec0) {
            ctx->pc = 0x2AFED8u;
            goto label_2afed8;
        }
    }
    ctx->pc = 0x2AFEC8u;
label_2afec8:
    // 0x2afec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afecc:
    // 0x2afecc: 0xc0ac56c  jal         func_2B15B0
label_2afed0:
    if (ctx->pc == 0x2AFED0u) {
        ctx->pc = 0x2AFED4u;
        goto label_2afed4;
    }
    ctx->pc = 0x2AFECCu;
    SET_GPR_U32(ctx, 31, 0x2AFED4u);
    ctx->pc = 0x2B15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B15B0u, 0x2AFECCu, 0x2AFED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFED4u;
label_2afed4:
    // 0x2afed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2afed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afed8:
    // 0x2afed8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2afed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afedc:
    // 0x2afedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2afedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2afee0:
    // 0x2afee0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2afee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2afee4:
    // 0x2afee4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2afee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2afee8:
    // 0x2afee8: 0x320f809  jalr        $t9
label_2afeec:
    if (ctx->pc == 0x2AFEECu) {
        ctx->pc = 0x2AFEF0u;
        goto label_2afef0;
    }
    ctx->pc = 0x2AFEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AFEF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFEE8u, 0x2AFEF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AFEF0u;
label_2afef0:
    // 0x2afef0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2afef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2afef4:
    // 0x2afef4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2afef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_2afef8:
    // 0x2afef8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2afef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2afefc:
    // 0x2afefc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2aff00:
    if (ctx->pc == 0x2AFF00u) {
        ctx->pc = 0x2AFF04u;
        goto label_2aff04;
    }
    ctx->pc = 0x2AFEFCu;
    {
        const bool branch_taken_0x2afefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afefc) {
            ctx->pc = 0x2AFF08u;
            goto label_2aff08;
        }
    }
    ctx->pc = 0x2AFF04u;
label_2aff04:
    // 0x2aff04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aff04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aff08:
    // 0x2aff08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aff0c:
    // 0x2aff0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aff0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aff10:
    // 0x2aff10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aff10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aff14:
    // 0x2aff14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2aff14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2aff18:
    // 0x2aff18: 0x3e00008  jr          $ra
label_2aff1c:
    if (ctx->pc == 0x2AFF1Cu) {
        ctx->pc = 0x2AFF20u;
        goto label_2aff20;
    }
    ctx->pc = 0x2AFF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFF20u;
label_2aff20:
    // 0x2aff20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2aff24:
    // 0x2aff24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2aff28:
    // 0x2aff28: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2aff28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2aff2c:
    // 0x2aff2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2aff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2aff30:
    // 0x2aff30: 0xc084efc  jal         func_213BF0
label_2aff34:
    if (ctx->pc == 0x2AFF34u) {
        ctx->pc = 0x2AFF38u;
        goto label_2aff38;
    }
    ctx->pc = 0x2AFF30u;
    SET_GPR_U32(ctx, 31, 0x2AFF38u);
    ctx->pc = 0x213BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BF0u, 0x2AFF30u, 0x2AFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF38u;
label_2aff38:
    // 0x2aff38: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2aff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2aff3c:
    // 0x2aff3c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2aff40:
    if (ctx->pc == 0x2AFF40u) {
        ctx->pc = 0x2AFF44u;
        goto label_2aff44;
    }
    ctx->pc = 0x2AFF3Cu;
    {
        const bool branch_taken_0x2aff3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aff3c) {
            ctx->pc = 0x2AFF4Cu;
            goto label_2aff4c;
        }
    }
    ctx->pc = 0x2AFF44u;
label_2aff44:
    // 0x2aff44: 0x10000013  b           . + 4 + (0x13 << 2)
label_2aff48:
    if (ctx->pc == 0x2AFF48u) {
        ctx->pc = 0x2AFF4Cu;
        goto label_2aff4c;
    }
    ctx->pc = 0x2AFF44u;
    {
        const bool branch_taken_0x2aff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff44) {
            ctx->pc = 0x2AFF94u;
            goto label_2aff94;
        }
    }
    ctx->pc = 0x2AFF4Cu;
label_2aff4c:
    // 0x2aff4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2aff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2aff50:
    // 0x2aff50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aff50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aff54:
    // 0x2aff54: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2aff54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2aff58:
    // 0x2aff58: 0x320f809  jalr        $t9
label_2aff5c:
    if (ctx->pc == 0x2AFF5Cu) {
        ctx->pc = 0x2AFF60u;
        goto label_2aff60;
    }
    ctx->pc = 0x2AFF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AFF60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFF58u, 0x2AFF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AFF60u;
label_2aff60:
    // 0x2aff60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2aff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2aff64:
    // 0x2aff64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2aff68:
    if (ctx->pc == 0x2AFF68u) {
        ctx->pc = 0x2AFF6Cu;
        goto label_2aff6c;
    }
    ctx->pc = 0x2AFF64u;
    {
        const bool branch_taken_0x2aff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff64) {
            ctx->pc = 0x2AFF88u;
            goto label_2aff88;
        }
    }
    ctx->pc = 0x2AFF6Cu;
label_2aff6c:
    // 0x2aff6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2aff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2aff70:
    // 0x2aff70: 0xc090500  jal         func_241400
label_2aff74:
    if (ctx->pc == 0x2AFF74u) {
        ctx->pc = 0x2AFF78u;
        goto label_2aff78;
    }
    ctx->pc = 0x2AFF70u;
    SET_GPR_U32(ctx, 31, 0x2AFF78u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x2AFF70u, 0x2AFF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF78u;
label_2aff78:
    // 0x2aff78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2aff78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2aff7c:
    // 0x2aff7c: 0xc119c5c  jal         func_467170
label_2aff80:
    if (ctx->pc == 0x2AFF80u) {
        ctx->pc = 0x2AFF84u;
        goto label_2aff84;
    }
    ctx->pc = 0x2AFF7Cu;
    SET_GPR_U32(ctx, 31, 0x2AFF84u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2AFF7Cu, 0x2AFF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF84u;
label_2aff84:
    // 0x2aff84: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2aff84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2aff88:
    // 0x2aff88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aff8c:
    // 0x2aff8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2aff90:
    if (ctx->pc == 0x2AFF90u) {
        ctx->pc = 0x2AFF94u;
        goto label_2aff94;
    }
    ctx->pc = 0x2AFF8Cu;
    {
        const bool branch_taken_0x2aff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff8c) {
            ctx->pc = 0x2AFF98u;
            goto label_2aff98;
        }
    }
    ctx->pc = 0x2AFF94u;
label_2aff94:
    // 0x2aff94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aff94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aff98:
    // 0x2aff98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aff98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aff9c:
    // 0x2aff9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2aff9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2affa0:
    // 0x2affa0: 0x3e00008  jr          $ra
label_2affa4:
    if (ctx->pc == 0x2AFFA4u) {
        ctx->pc = 0x2AFFA8u;
        goto label_2affa8;
    }
    ctx->pc = 0x2AFFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFFA8u;
label_2affa8:
    // 0x2affa8: 0x0  nop
    ctx->pc = 0x2affa8u;
    // NOP
label_2affac:
    // 0x2affac: 0x0  nop
    ctx->pc = 0x2affacu;
    // NOP
    ctx->pc = 0x2affb0u;
}
