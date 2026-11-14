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

// Function: sub_00214DB0
// Address: 0x214db0 - 0x214fc0
void sub_00214DB0_0x214db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214DB0_0x214db0");
#endif

    switch (ctx->pc) {
        case 0x214df4u: goto label_214df4;
        default: break;
    }

    ctx->pc = 0x214db0u;

    // 0x214db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x214db4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x214db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x214dbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x214dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x214dc0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x214dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x214dc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x214dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214dc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214dcc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x214dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214dd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x214dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214dd4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x214dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x214dd8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x214DD8u;
    {
        const bool branch_taken_0x214dd8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x214dd8) {
            ctx->pc = 0x214DE8u;
            goto label_214de8;
        }
    }
    ctx->pc = 0x214DE0u;
    // 0x214de0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x214de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x214de4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x214de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_214de8:
    // 0x214de8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x214de8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x214dec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x214DECu;
    {
        const bool branch_taken_0x214dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214dec) {
            ctx->pc = 0x214EB8u;
            goto label_214eb8;
        }
    }
    ctx->pc = 0x214DF4u;
label_214df4:
    // 0x214df4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214df8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214dfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x214dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214e00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214E04u;
    {
        const bool branch_taken_0x214e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214e04) {
            ctx->pc = 0x214E18u;
            goto label_214e18;
        }
    }
    ctx->pc = 0x214E0Cu;
    // 0x214e0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e10: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x214E10u;
    {
        const bool branch_taken_0x214e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214e10) {
            ctx->pc = 0x214FACu;
            goto label_214fac;
        }
    }
    ctx->pc = 0x214E18u;
label_214e18:
    // 0x214e18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x214e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214e20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x214e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x214e24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x214e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214e30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214E34u;
    {
        const bool branch_taken_0x214e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214e34) {
            ctx->pc = 0x214E48u;
            goto label_214e48;
        }
    }
    ctx->pc = 0x214E3Cu;
    // 0x214e3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e40: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x214E40u;
    {
        const bool branch_taken_0x214e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214e40) {
            ctx->pc = 0x214FACu;
            goto label_214fac;
        }
    }
    ctx->pc = 0x214E48u;
label_214e48:
    // 0x214e48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x214e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214e50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x214e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x214e54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x214e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214e60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214E64u;
    {
        const bool branch_taken_0x214e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214e64) {
            ctx->pc = 0x214E78u;
            goto label_214e78;
        }
    }
    ctx->pc = 0x214E6Cu;
    // 0x214e6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e70: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x214E70u;
    {
        const bool branch_taken_0x214e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214e70) {
            ctx->pc = 0x214FACu;
            goto label_214fac;
        }
    }
    ctx->pc = 0x214E78u;
label_214e78:
    // 0x214e78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x214e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214e80: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x214e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x214e84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x214e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214e90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214E94u;
    {
        const bool branch_taken_0x214e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214e94) {
            ctx->pc = 0x214EA8u;
            goto label_214ea8;
        }
    }
    ctx->pc = 0x214E9Cu;
    // 0x214e9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214ea0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x214EA0u;
    {
        const bool branch_taken_0x214ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214ea0) {
            ctx->pc = 0x214FACu;
            goto label_214fac;
        }
    }
    ctx->pc = 0x214EA8u;
label_214ea8:
    // 0x214ea8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214eac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x214eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214eb0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x214eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x214eb4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x214eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_214eb8:
    // 0x214eb8: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x214EB8u;
    {
        const bool branch_taken_0x214eb8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x214eb8) {
            ctx->pc = 0x214DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214df4;
        }
    }
    ctx->pc = 0x214EC0u;
    // 0x214ec0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x214ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214ec4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214ec8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x214ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214ecc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x214eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214ed0: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x214ed0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x214ed4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214ED4u;
    {
        const bool branch_taken_0x214ed4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x214ed4) {
            ctx->pc = 0x214EE4u;
            goto label_214ee4;
        }
    }
    ctx->pc = 0x214EDCu;
    // 0x214edc: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x214edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x214ee0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x214ee0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_214ee4:
    // 0x214ee4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x214EE4u;
    {
        const bool branch_taken_0x214ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x214ee4) {
            ctx->pc = 0x214FA8u;
            goto label_214fa8;
        }
    }
    ctx->pc = 0x214EECu;
    // 0x214eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214ef0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x214EF0u;
    {
        const bool branch_taken_0x214ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214ef0) {
            ctx->pc = 0x214F78u;
            goto label_214f78;
        }
    }
    ctx->pc = 0x214EF8u;
    // 0x214ef8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x214ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214efc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x214EFCu;
    {
        const bool branch_taken_0x214efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214efc) {
            ctx->pc = 0x214F48u;
            goto label_214f48;
        }
    }
    ctx->pc = 0x214F04u;
    // 0x214f04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x214f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x214f08: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214F08u;
    {
        const bool branch_taken_0x214f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214f08) {
            ctx->pc = 0x214F18u;
            goto label_214f18;
        }
    }
    ctx->pc = 0x214F10u;
    // 0x214f10: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x214F10u;
    {
        const bool branch_taken_0x214f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f10) {
            ctx->pc = 0x214FA8u;
            goto label_214fa8;
        }
    }
    ctx->pc = 0x214F18u;
label_214f18:
    // 0x214f18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214f20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x214f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214f24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214f28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214F28u;
    {
        const bool branch_taken_0x214f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214f28) {
            ctx->pc = 0x214F3Cu;
            goto label_214f3c;
        }
    }
    ctx->pc = 0x214F30u;
    // 0x214f30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f34: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x214F34u;
    {
        const bool branch_taken_0x214f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f34) {
            ctx->pc = 0x214FACu;
            goto label_214fac;
        }
    }
    ctx->pc = 0x214F3Cu;
label_214f3c:
    // 0x214f3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x214f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214f44: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x214f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_214f48:
    // 0x214f48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214f50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x214f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214f54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214f58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214F58u;
    {
        const bool branch_taken_0x214f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214f58) {
            ctx->pc = 0x214F6Cu;
            goto label_214f6c;
        }
    }
    ctx->pc = 0x214F60u;
    // 0x214f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x214F64u;
    {
        const bool branch_taken_0x214f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f64) {
            ctx->pc = 0x214FACu;
            goto label_214fac;
        }
    }
    ctx->pc = 0x214F6Cu;
label_214f6c:
    // 0x214f6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x214f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214f74: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x214f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_214f78:
    // 0x214f78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214f80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x214f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214f84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214f88: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214F88u;
    {
        const bool branch_taken_0x214f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214f88) {
            ctx->pc = 0x214F9Cu;
            goto label_214f9c;
        }
    }
    ctx->pc = 0x214F90u;
    // 0x214f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x214F94u;
    {
        const bool branch_taken_0x214f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f94) {
            ctx->pc = 0x214FACu;
            goto label_214fac;
        }
    }
    ctx->pc = 0x214F9Cu;
label_214f9c:
    // 0x214f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214fa0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x214fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214fa4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x214fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_214fa8:
    // 0x214fa8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x214fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_214fac:
    // 0x214fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214fb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x214fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x214fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x214FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214FBCu;
    // 0x214fbc: 0x0  nop
    ctx->pc = 0x214fbcu;
    // NOP
    ctx->pc = 0x214fc0u;
}
