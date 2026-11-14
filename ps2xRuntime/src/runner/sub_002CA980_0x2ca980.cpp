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

// Function: sub_002CA980
// Address: 0x2ca980 - 0x2cab90
void sub_002CA980_0x2ca980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA980_0x2ca980");
#endif

    switch (ctx->pc) {
        case 0x2ca9c4u: goto label_2ca9c4;
        default: break;
    }

    ctx->pc = 0x2ca980u;

    // 0x2ca980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ca980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ca984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ca988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ca98c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ca98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ca990: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2ca990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2ca994: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ca994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca998: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ca998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca99c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ca99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca9a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ca9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ca9a4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2ca9a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2ca9a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA9A8u;
    {
        const bool branch_taken_0x2ca9a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2ca9a8) {
            ctx->pc = 0x2CA9B8u;
            goto label_2ca9b8;
        }
    }
    ctx->pc = 0x2CA9B0u;
    // 0x2ca9b0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2ca9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2ca9b4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2ca9b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2ca9b8:
    // 0x2ca9b8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x2ca9b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2ca9bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2CA9BCu;
    {
        const bool branch_taken_0x2ca9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9bc) {
            ctx->pc = 0x2CAA88u;
            goto label_2caa88;
        }
    }
    ctx->pc = 0x2CA9C4u;
label_2ca9c4:
    // 0x2ca9c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ca9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca9c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ca9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca9cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ca9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca9d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca9d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA9D4u;
    {
        const bool branch_taken_0x2ca9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca9d4) {
            ctx->pc = 0x2CA9E8u;
            goto label_2ca9e8;
        }
    }
    ctx->pc = 0x2CA9DCu;
    // 0x2ca9dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ca9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca9e0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2CA9E0u;
    {
        const bool branch_taken_0x2ca9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9e0) {
            ctx->pc = 0x2CAB7Cu;
            goto label_2cab7c;
        }
    }
    ctx->pc = 0x2CA9E8u;
label_2ca9e8:
    // 0x2ca9e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ca9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca9ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2ca9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ca9f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2ca9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2ca9f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ca9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca9f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ca9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca9fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ca9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caa00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2caa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2caa04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAA04u;
    {
        const bool branch_taken_0x2caa04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caa04) {
            ctx->pc = 0x2CAA18u;
            goto label_2caa18;
        }
    }
    ctx->pc = 0x2CAA0Cu;
    // 0x2caa0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa10: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2CAA10u;
    {
        const bool branch_taken_0x2caa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa10) {
            ctx->pc = 0x2CAB7Cu;
            goto label_2cab7c;
        }
    }
    ctx->pc = 0x2CAA18u;
label_2caa18:
    // 0x2caa18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2caa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2caa20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2caa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2caa24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2caa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2caa2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2caa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caa30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2caa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2caa34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAA34u;
    {
        const bool branch_taken_0x2caa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caa34) {
            ctx->pc = 0x2CAA48u;
            goto label_2caa48;
        }
    }
    ctx->pc = 0x2CAA3Cu;
    // 0x2caa3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa40: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2CAA40u;
    {
        const bool branch_taken_0x2caa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa40) {
            ctx->pc = 0x2CAB7Cu;
            goto label_2cab7c;
        }
    }
    ctx->pc = 0x2CAA48u;
label_2caa48:
    // 0x2caa48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2caa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2caa50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2caa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2caa54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2caa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2caa5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2caa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caa60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2caa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2caa64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAA64u;
    {
        const bool branch_taken_0x2caa64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caa64) {
            ctx->pc = 0x2CAA78u;
            goto label_2caa78;
        }
    }
    ctx->pc = 0x2CAA6Cu;
    // 0x2caa6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa70: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2CAA70u;
    {
        const bool branch_taken_0x2caa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa70) {
            ctx->pc = 0x2CAB7Cu;
            goto label_2cab7c;
        }
    }
    ctx->pc = 0x2CAA78u;
label_2caa78:
    // 0x2caa78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2caa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2caa80: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2caa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2caa84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2caa84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2caa88:
    // 0x2caa88: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2CAA88u;
    {
        const bool branch_taken_0x2caa88 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2caa88) {
            ctx->pc = 0x2CA9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca9c4;
        }
    }
    ctx->pc = 0x2CAA90u;
    // 0x2caa90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caa94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa98: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2caa98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2caa9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2caaa0: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x2caaa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2caaa4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAAA4u;
    {
        const bool branch_taken_0x2caaa4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2caaa4) {
            ctx->pc = 0x2CAAB4u;
            goto label_2caab4;
        }
    }
    ctx->pc = 0x2CAAACu;
    // 0x2caaac: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2caaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2caab0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2caab0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2caab4:
    // 0x2caab4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2CAAB4u;
    {
        const bool branch_taken_0x2caab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caab4) {
            ctx->pc = 0x2CAB78u;
            goto label_2cab78;
        }
    }
    ctx->pc = 0x2CAABCu;
    // 0x2caabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2caabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caac0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CAAC0u;
    {
        const bool branch_taken_0x2caac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2caac0) {
            ctx->pc = 0x2CAB48u;
            goto label_2cab48;
        }
    }
    ctx->pc = 0x2CAAC8u;
    // 0x2caac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2caac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2caacc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CAACCu;
    {
        const bool branch_taken_0x2caacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2caacc) {
            ctx->pc = 0x2CAB18u;
            goto label_2cab18;
        }
    }
    ctx->pc = 0x2CAAD4u;
    // 0x2caad4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2caad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2caad8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAAD8u;
    {
        const bool branch_taken_0x2caad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2caad8) {
            ctx->pc = 0x2CAAE8u;
            goto label_2caae8;
        }
    }
    ctx->pc = 0x2CAAE0u;
    // 0x2caae0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2CAAE0u;
    {
        const bool branch_taken_0x2caae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caae0) {
            ctx->pc = 0x2CAB78u;
            goto label_2cab78;
        }
    }
    ctx->pc = 0x2CAAE8u;
label_2caae8:
    // 0x2caae8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caaec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2caaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2caaf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2caaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caaf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2caaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2caaf8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAAF8u;
    {
        const bool branch_taken_0x2caaf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caaf8) {
            ctx->pc = 0x2CAB0Cu;
            goto label_2cab0c;
        }
    }
    ctx->pc = 0x2CAB00u;
    // 0x2cab00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab04: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2CAB04u;
    {
        const bool branch_taken_0x2cab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab04) {
            ctx->pc = 0x2CAB7Cu;
            goto label_2cab7c;
        }
    }
    ctx->pc = 0x2CAB0Cu;
label_2cab0c:
    // 0x2cab0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab10: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2cab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cab14: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2cab14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2cab18:
    // 0x2cab18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cab20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cab24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cab28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAB28u;
    {
        const bool branch_taken_0x2cab28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cab28) {
            ctx->pc = 0x2CAB3Cu;
            goto label_2cab3c;
        }
    }
    ctx->pc = 0x2CAB30u;
    // 0x2cab30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab34: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CAB34u;
    {
        const bool branch_taken_0x2cab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab34) {
            ctx->pc = 0x2CAB7Cu;
            goto label_2cab7c;
        }
    }
    ctx->pc = 0x2CAB3Cu;
label_2cab3c:
    // 0x2cab3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2cab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cab44: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2cab44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2cab48:
    // 0x2cab48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cab50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cab54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cab58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAB58u;
    {
        const bool branch_taken_0x2cab58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cab58) {
            ctx->pc = 0x2CAB6Cu;
            goto label_2cab6c;
        }
    }
    ctx->pc = 0x2CAB60u;
    // 0x2cab60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CAB64u;
    {
        const bool branch_taken_0x2cab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab64) {
            ctx->pc = 0x2CAB7Cu;
            goto label_2cab7c;
        }
    }
    ctx->pc = 0x2CAB6Cu;
label_2cab6c:
    // 0x2cab6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2cab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cab74: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2cab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2cab78:
    // 0x2cab78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2cab7c:
    // 0x2cab7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cab7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cab80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cab84: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAB8Cu;
    // 0x2cab8c: 0x0  nop
    ctx->pc = 0x2cab8cu;
    // NOP
    ctx->pc = 0x2cab90u;
}
