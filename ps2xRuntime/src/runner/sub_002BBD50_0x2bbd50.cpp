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

// Function: sub_002BBD50
// Address: 0x2bbd50 - 0x2bbf60
void sub_002BBD50_0x2bbd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBD50_0x2bbd50");
#endif

    switch (ctx->pc) {
        case 0x2bbd94u: goto label_2bbd94;
        default: break;
    }

    ctx->pc = 0x2bbd50u;

    // 0x2bbd50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bbd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bbd54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bbd58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bbd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bbd5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bbd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bbd60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2bbd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2bbd64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2bbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbd68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbd6c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2bbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bbd70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bbd74: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2bbd74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2bbd78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBD78u;
    {
        const bool branch_taken_0x2bbd78 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2bbd78) {
            ctx->pc = 0x2BBD88u;
            goto label_2bbd88;
        }
    }
    ctx->pc = 0x2BBD80u;
    // 0x2bbd80: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2bbd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2bbd84: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2bbd84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2bbd88:
    // 0x2bbd88: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x2bbd88u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2bbd8c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2BBD8Cu;
    {
        const bool branch_taken_0x2bbd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd8c) {
            ctx->pc = 0x2BBE58u;
            goto label_2bbe58;
        }
    }
    ctx->pc = 0x2BBD94u;
label_2bbd94:
    // 0x2bbd94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbd98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbd9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbda0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbda4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBDA4u;
    {
        const bool branch_taken_0x2bbda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbda4) {
            ctx->pc = 0x2BBDB8u;
            goto label_2bbdb8;
        }
    }
    ctx->pc = 0x2BBDACu;
    // 0x2bbdac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbdb0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2BBDB0u;
    {
        const bool branch_taken_0x2bbdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbdb0) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBDB8u;
label_2bbdb8:
    // 0x2bbdb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbdbc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbdc0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bbdc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbdc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbdcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbdd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbdd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBDD4u;
    {
        const bool branch_taken_0x2bbdd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbdd4) {
            ctx->pc = 0x2BBDE8u;
            goto label_2bbde8;
        }
    }
    ctx->pc = 0x2BBDDCu;
    // 0x2bbddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbde0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2BBDE0u;
    {
        const bool branch_taken_0x2bbde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbde0) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBDE8u;
label_2bbde8:
    // 0x2bbde8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbdec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbdf0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bbdf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbdf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbdfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbe00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbe04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBE04u;
    {
        const bool branch_taken_0x2bbe04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbe04) {
            ctx->pc = 0x2BBE18u;
            goto label_2bbe18;
        }
    }
    ctx->pc = 0x2BBE0Cu;
    // 0x2bbe0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbe10: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2BBE10u;
    {
        const bool branch_taken_0x2bbe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe10) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBE18u;
label_2bbe18:
    // 0x2bbe18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbe1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbe20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bbe24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbe28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbe2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbe30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbe34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBE34u;
    {
        const bool branch_taken_0x2bbe34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbe34) {
            ctx->pc = 0x2BBE48u;
            goto label_2bbe48;
        }
    }
    ctx->pc = 0x2BBE3Cu;
    // 0x2bbe3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbe40: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2BBE40u;
    {
        const bool branch_taken_0x2bbe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe40) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBE48u;
label_2bbe48:
    // 0x2bbe48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbe4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbe50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbe50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bbe54: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2bbe54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2bbe58:
    // 0x2bbe58: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2BBE58u;
    {
        const bool branch_taken_0x2bbe58 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2bbe58) {
            ctx->pc = 0x2BBD94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbd94;
        }
    }
    ctx->pc = 0x2BBE60u;
    // 0x2bbe60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2bbe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbe64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbe68: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bbe6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bbe70: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x2bbe70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2bbe74: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBE74u;
    {
        const bool branch_taken_0x2bbe74 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2bbe74) {
            ctx->pc = 0x2BBE84u;
            goto label_2bbe84;
        }
    }
    ctx->pc = 0x2BBE7Cu;
    // 0x2bbe7c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2bbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2bbe80: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2bbe80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2bbe84:
    // 0x2bbe84: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2BBE84u;
    {
        const bool branch_taken_0x2bbe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe84) {
            ctx->pc = 0x2BBF48u;
            goto label_2bbf48;
        }
    }
    ctx->pc = 0x2BBE8Cu;
    // 0x2bbe8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbe90: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2BBE90u;
    {
        const bool branch_taken_0x2bbe90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbe90) {
            ctx->pc = 0x2BBF18u;
            goto label_2bbf18;
        }
    }
    ctx->pc = 0x2BBE98u;
    // 0x2bbe98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bbe9c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BBE9Cu;
    {
        const bool branch_taken_0x2bbe9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbe9c) {
            ctx->pc = 0x2BBEE8u;
            goto label_2bbee8;
        }
    }
    ctx->pc = 0x2BBEA4u;
    // 0x2bbea4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bbea8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBEA8u;
    {
        const bool branch_taken_0x2bbea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbea8) {
            ctx->pc = 0x2BBEB8u;
            goto label_2bbeb8;
        }
    }
    ctx->pc = 0x2BBEB0u;
    // 0x2bbeb0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2BBEB0u;
    {
        const bool branch_taken_0x2bbeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbeb0) {
            ctx->pc = 0x2BBF48u;
            goto label_2bbf48;
        }
    }
    ctx->pc = 0x2BBEB8u;
label_2bbeb8:
    // 0x2bbeb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbec0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbec4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbec8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBEC8u;
    {
        const bool branch_taken_0x2bbec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbec8) {
            ctx->pc = 0x2BBEDCu;
            goto label_2bbedc;
        }
    }
    ctx->pc = 0x2BBED0u;
    // 0x2bbed0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbed4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2BBED4u;
    {
        const bool branch_taken_0x2bbed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbed4) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBEDCu;
label_2bbedc:
    // 0x2bbedc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbee0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbee4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2bbee8:
    // 0x2bbee8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbeec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbef0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbef8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBEF8u;
    {
        const bool branch_taken_0x2bbef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbef8) {
            ctx->pc = 0x2BBF0Cu;
            goto label_2bbf0c;
        }
    }
    ctx->pc = 0x2BBF00u;
    // 0x2bbf00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BBF04u;
    {
        const bool branch_taken_0x2bbf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf04) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBF0Cu;
label_2bbf0c:
    // 0x2bbf0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf10: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbf14: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2bbf18:
    // 0x2bbf18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbf20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbf24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbf28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBF28u;
    {
        const bool branch_taken_0x2bbf28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbf28) {
            ctx->pc = 0x2BBF3Cu;
            goto label_2bbf3c;
        }
    }
    ctx->pc = 0x2BBF30u;
    // 0x2bbf30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBF34u;
    {
        const bool branch_taken_0x2bbf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf34) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBF3Cu;
label_2bbf3c:
    // 0x2bbf3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbf44: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2bbf48:
    // 0x2bbf48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2bbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbf4c:
    // 0x2bbf4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbf50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bbf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bbf54: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBF5Cu;
    // 0x2bbf5c: 0x0  nop
    ctx->pc = 0x2bbf5cu;
    // NOP
    ctx->pc = 0x2bbf60u;
}
