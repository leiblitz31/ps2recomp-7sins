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

// Function: sub_002BBB00
// Address: 0x2bbb00 - 0x2bbd10
void sub_002BBB00_0x2bbb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBB00_0x2bbb00");
#endif

    switch (ctx->pc) {
        case 0x2bbb44u: goto label_2bbb44;
        default: break;
    }

    ctx->pc = 0x2bbb00u;

    // 0x2bbb00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bbb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bbb04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bbb08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bbb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bbb0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bbb10: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2bbb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2bbb14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2bbb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbb18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2bbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bbb20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bbb24: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2bbb24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2bbb28: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBB28u;
    {
        const bool branch_taken_0x2bbb28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2bbb28) {
            ctx->pc = 0x2BBB38u;
            goto label_2bbb38;
        }
    }
    ctx->pc = 0x2BBB30u;
    // 0x2bbb30: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2bbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2bbb34: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2bbb34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2bbb38:
    // 0x2bbb38: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x2bbb38u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2bbb3c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2BBB3Cu;
    {
        const bool branch_taken_0x2bbb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb3c) {
            ctx->pc = 0x2BBC08u;
            goto label_2bbc08;
        }
    }
    ctx->pc = 0x2BBB44u;
label_2bbb44:
    // 0x2bbb44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbb4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbb50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbb54: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBB54u;
    {
        const bool branch_taken_0x2bbb54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbb54) {
            ctx->pc = 0x2BBB68u;
            goto label_2bbb68;
        }
    }
    ctx->pc = 0x2BBB5Cu;
    // 0x2bbb5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb60: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2BBB60u;
    {
        const bool branch_taken_0x2bbb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb60) {
            ctx->pc = 0x2BBCFCu;
            goto label_2bbcfc;
        }
    }
    ctx->pc = 0x2BBB68u;
label_2bbb68:
    // 0x2bbb68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbb70: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bbb74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbb7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbb80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbb84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBB84u;
    {
        const bool branch_taken_0x2bbb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbb84) {
            ctx->pc = 0x2BBB98u;
            goto label_2bbb98;
        }
    }
    ctx->pc = 0x2BBB8Cu;
    // 0x2bbb8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb90: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2BBB90u;
    {
        const bool branch_taken_0x2bbb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb90) {
            ctx->pc = 0x2BBCFCu;
            goto label_2bbcfc;
        }
    }
    ctx->pc = 0x2BBB98u;
label_2bbb98:
    // 0x2bbb98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbba0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bbba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbba8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbbac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbbb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbbb4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBBB4u;
    {
        const bool branch_taken_0x2bbbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbbb4) {
            ctx->pc = 0x2BBBC8u;
            goto label_2bbbc8;
        }
    }
    ctx->pc = 0x2BBBBCu;
    // 0x2bbbbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbbc0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2BBBC0u;
    {
        const bool branch_taken_0x2bbbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbbc0) {
            ctx->pc = 0x2BBCFCu;
            goto label_2bbcfc;
        }
    }
    ctx->pc = 0x2BBBC8u;
label_2bbbc8:
    // 0x2bbbc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbbcc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbbd0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bbbd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbbd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbbdc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbbe0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbbe4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBBE4u;
    {
        const bool branch_taken_0x2bbbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbbe4) {
            ctx->pc = 0x2BBBF8u;
            goto label_2bbbf8;
        }
    }
    ctx->pc = 0x2BBBECu;
    // 0x2bbbec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbbf0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2BBBF0u;
    {
        const bool branch_taken_0x2bbbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbbf0) {
            ctx->pc = 0x2BBCFCu;
            goto label_2bbcfc;
        }
    }
    ctx->pc = 0x2BBBF8u;
label_2bbbf8:
    // 0x2bbbf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbbfc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbc00: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bbc04: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2bbc04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2bbc08:
    // 0x2bbc08: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2BBC08u;
    {
        const bool branch_taken_0x2bbc08 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2bbc08) {
            ctx->pc = 0x2BBB44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbb44;
        }
    }
    ctx->pc = 0x2BBC10u;
    // 0x2bbc10: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2bbc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbc14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbc18: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2bbc18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bbc1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bbc20: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x2bbc20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2bbc24: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBC24u;
    {
        const bool branch_taken_0x2bbc24 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2bbc24) {
            ctx->pc = 0x2BBC34u;
            goto label_2bbc34;
        }
    }
    ctx->pc = 0x2BBC2Cu;
    // 0x2bbc2c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2bbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2bbc30: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2bbc30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2bbc34:
    // 0x2bbc34: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2BBC34u;
    {
        const bool branch_taken_0x2bbc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc34) {
            ctx->pc = 0x2BBCF8u;
            goto label_2bbcf8;
        }
    }
    ctx->pc = 0x2BBC3Cu;
    // 0x2bbc3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbc40: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2BBC40u;
    {
        const bool branch_taken_0x2bbc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbc40) {
            ctx->pc = 0x2BBCC8u;
            goto label_2bbcc8;
        }
    }
    ctx->pc = 0x2BBC48u;
    // 0x2bbc48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bbc4c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BBC4Cu;
    {
        const bool branch_taken_0x2bbc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbc4c) {
            ctx->pc = 0x2BBC98u;
            goto label_2bbc98;
        }
    }
    ctx->pc = 0x2BBC54u;
    // 0x2bbc54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bbc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bbc58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBC58u;
    {
        const bool branch_taken_0x2bbc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbc58) {
            ctx->pc = 0x2BBC68u;
            goto label_2bbc68;
        }
    }
    ctx->pc = 0x2BBC60u;
    // 0x2bbc60: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2BBC60u;
    {
        const bool branch_taken_0x2bbc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc60) {
            ctx->pc = 0x2BBCF8u;
            goto label_2bbcf8;
        }
    }
    ctx->pc = 0x2BBC68u;
label_2bbc68:
    // 0x2bbc68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbc6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbc70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbc74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbc78: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBC78u;
    {
        const bool branch_taken_0x2bbc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbc78) {
            ctx->pc = 0x2BBC8Cu;
            goto label_2bbc8c;
        }
    }
    ctx->pc = 0x2BBC80u;
    // 0x2bbc80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbc84: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2BBC84u;
    {
        const bool branch_taken_0x2bbc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc84) {
            ctx->pc = 0x2BBCFCu;
            goto label_2bbcfc;
        }
    }
    ctx->pc = 0x2BBC8Cu;
label_2bbc8c:
    // 0x2bbc8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbc90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbc94: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2bbc98:
    // 0x2bbc98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbc9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbca0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbca4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbca8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBCA8u;
    {
        const bool branch_taken_0x2bbca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbca8) {
            ctx->pc = 0x2BBCBCu;
            goto label_2bbcbc;
        }
    }
    ctx->pc = 0x2BBCB0u;
    // 0x2bbcb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbcb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BBCB4u;
    {
        const bool branch_taken_0x2bbcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbcb4) {
            ctx->pc = 0x2BBCFCu;
            goto label_2bbcfc;
        }
    }
    ctx->pc = 0x2BBCBCu;
label_2bbcbc:
    // 0x2bbcbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbcc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbcc4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2bbcc8:
    // 0x2bbcc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bbcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbcd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbcd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbcd8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBCD8u;
    {
        const bool branch_taken_0x2bbcd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbcd8) {
            ctx->pc = 0x2BBCECu;
            goto label_2bbcec;
        }
    }
    ctx->pc = 0x2BBCE0u;
    // 0x2bbce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBCE4u;
    {
        const bool branch_taken_0x2bbce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbce4) {
            ctx->pc = 0x2BBCFCu;
            goto label_2bbcfc;
        }
    }
    ctx->pc = 0x2BBCECu;
label_2bbcec:
    // 0x2bbcec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbcf0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bbcf4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bbcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2bbcf8:
    // 0x2bbcf8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2bbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbcfc:
    // 0x2bbcfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbd00: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bbd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bbd04: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBD0Cu;
    // 0x2bbd0c: 0x0  nop
    ctx->pc = 0x2bbd0cu;
    // NOP
    ctx->pc = 0x2bbd10u;
}
