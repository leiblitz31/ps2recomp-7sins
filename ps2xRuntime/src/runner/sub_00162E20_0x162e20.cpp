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

// Function: sub_00162E20
// Address: 0x162e20 - 0x163030
void sub_00162E20_0x162e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162E20_0x162e20");
#endif

    switch (ctx->pc) {
        case 0x162e64u: goto label_162e64;
        default: break;
    }

    ctx->pc = 0x162e20u;

    // 0x162e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x162e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x162e2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x162e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x162e30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x162e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x162e34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x162e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162e38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x162e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162e40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x162e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x162e44: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x162e44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x162e48: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162E48u;
    {
        const bool branch_taken_0x162e48 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x162e48) {
            ctx->pc = 0x162E58u;
            goto label_162e58;
        }
    }
    ctx->pc = 0x162E50u;
    // 0x162e50: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x162e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x162e54: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x162e54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_162e58:
    // 0x162e58: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x162e58u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x162e5c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x162E5Cu;
    {
        const bool branch_taken_0x162e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162e5c) {
            ctx->pc = 0x162F28u;
            goto label_162f28;
        }
    }
    ctx->pc = 0x162E64u;
label_162e64:
    // 0x162e64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162e6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162e70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162e74: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162E74u;
    {
        const bool branch_taken_0x162e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162e74) {
            ctx->pc = 0x162E88u;
            goto label_162e88;
        }
    }
    ctx->pc = 0x162E7Cu;
    // 0x162e7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e80: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x162E80u;
    {
        const bool branch_taken_0x162e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162e80) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x162E88u;
label_162e88:
    // 0x162e88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x162e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162e90: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x162e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x162e94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162e9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162ea0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ea4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162EA4u;
    {
        const bool branch_taken_0x162ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162ea4) {
            ctx->pc = 0x162EB8u;
            goto label_162eb8;
        }
    }
    ctx->pc = 0x162EACu;
    // 0x162eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162eb0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x162EB0u;
    {
        const bool branch_taken_0x162eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162eb0) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x162EB8u;
label_162eb8:
    // 0x162eb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162ebc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x162ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162ec0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x162ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x162ec4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162ec8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ecc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162ed0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ed4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162ED4u;
    {
        const bool branch_taken_0x162ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162ed4) {
            ctx->pc = 0x162EE8u;
            goto label_162ee8;
        }
    }
    ctx->pc = 0x162EDCu;
    // 0x162edc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162ee0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x162EE0u;
    {
        const bool branch_taken_0x162ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ee0) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x162EE8u;
label_162ee8:
    // 0x162ee8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162eec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x162eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162ef0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x162ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x162ef4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162ef8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162efc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162f00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162f04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162F04u;
    {
        const bool branch_taken_0x162f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162f04) {
            ctx->pc = 0x162F18u;
            goto label_162f18;
        }
    }
    ctx->pc = 0x162F0Cu;
    // 0x162f0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f10: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x162F10u;
    {
        const bool branch_taken_0x162f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f10) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x162F18u;
label_162f18:
    // 0x162f18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162f20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x162f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x162f24: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x162f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_162f28:
    // 0x162f28: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x162F28u;
    {
        const bool branch_taken_0x162f28 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x162f28) {
            ctx->pc = 0x162E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162e64;
        }
    }
    ctx->pc = 0x162F30u;
    // 0x162f30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x162f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162f34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f38: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x162f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162f3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x162f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x162f40: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x162f40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x162f44: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162F44u;
    {
        const bool branch_taken_0x162f44 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x162f44) {
            ctx->pc = 0x162F54u;
            goto label_162f54;
        }
    }
    ctx->pc = 0x162F4Cu;
    // 0x162f4c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x162f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x162f50: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x162f50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_162f54:
    // 0x162f54: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x162F54u;
    {
        const bool branch_taken_0x162f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f54) {
            ctx->pc = 0x163018u;
            goto label_163018;
        }
    }
    ctx->pc = 0x162F5Cu;
    // 0x162f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162f60: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x162F60u;
    {
        const bool branch_taken_0x162f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162f60) {
            ctx->pc = 0x162FE8u;
            goto label_162fe8;
        }
    }
    ctx->pc = 0x162F68u;
    // 0x162f68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162f6c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x162F6Cu;
    {
        const bool branch_taken_0x162f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162f6c) {
            ctx->pc = 0x162FB8u;
            goto label_162fb8;
        }
    }
    ctx->pc = 0x162F74u;
    // 0x162f74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162f78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162F78u;
    {
        const bool branch_taken_0x162f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162f78) {
            ctx->pc = 0x162F88u;
            goto label_162f88;
        }
    }
    ctx->pc = 0x162F80u;
    // 0x162f80: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x162F80u;
    {
        const bool branch_taken_0x162f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f80) {
            ctx->pc = 0x163018u;
            goto label_163018;
        }
    }
    ctx->pc = 0x162F88u;
label_162f88:
    // 0x162f88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162f90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162f94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162f98: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162F98u;
    {
        const bool branch_taken_0x162f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162f98) {
            ctx->pc = 0x162FACu;
            goto label_162fac;
        }
    }
    ctx->pc = 0x162FA0u;
    // 0x162fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162fa4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x162FA4u;
    {
        const bool branch_taken_0x162fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162fa4) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x162FACu;
label_162fac:
    // 0x162fac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162fb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x162fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162fb4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x162fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_162fb8:
    // 0x162fb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162fbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162fc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162fc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162fc8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162FC8u;
    {
        const bool branch_taken_0x162fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162fc8) {
            ctx->pc = 0x162FDCu;
            goto label_162fdc;
        }
    }
    ctx->pc = 0x162FD0u;
    // 0x162fd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162fd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x162FD4u;
    {
        const bool branch_taken_0x162fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162fd4) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x162FDCu;
label_162fdc:
    // 0x162fdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162fe0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x162fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162fe4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x162fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_162fe8:
    // 0x162fe8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162fec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ff0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162ff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ff8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162FF8u;
    {
        const bool branch_taken_0x162ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162ff8) {
            ctx->pc = 0x16300Cu;
            goto label_16300c;
        }
    }
    ctx->pc = 0x163000u;
    // 0x163000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163004u;
    {
        const bool branch_taken_0x163004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163004) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x16300Cu;
label_16300c:
    // 0x16300c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163010: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x163010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x163014: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x163014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_163018:
    // 0x163018: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x163018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16301c:
    // 0x16301c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16301cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163020: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163024: 0x3e00008  jr          $ra
    ctx->pc = 0x163024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16302Cu;
    // 0x16302c: 0x0  nop
    ctx->pc = 0x16302cu;
    // NOP
    ctx->pc = 0x163030u;
}
