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

// Function: sub_002B0AE0
// Address: 0x2b0ae0 - 0x2b0cf0
void sub_002B0AE0_0x2b0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0AE0_0x2b0ae0");
#endif

    switch (ctx->pc) {
        case 0x2b0b24u: goto label_2b0b24;
        default: break;
    }

    ctx->pc = 0x2b0ae0u;

    // 0x2b0ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b0ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b0ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b0aec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b0af0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2b0af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2b0af4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0af8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0afc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0b00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b0b04: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2b0b04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b0b08: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0B08u;
    {
        const bool branch_taken_0x2b0b08 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b0b08) {
            ctx->pc = 0x2B0B18u;
            goto label_2b0b18;
        }
    }
    ctx->pc = 0x2B0B10u;
    // 0x2b0b10: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2b0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b0b14: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2b0b14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2b0b18:
    // 0x2b0b18: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x2b0b18u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2b0b1c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2B0B1Cu;
    {
        const bool branch_taken_0x2b0b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0b1c) {
            ctx->pc = 0x2B0BE8u;
            goto label_2b0be8;
        }
    }
    ctx->pc = 0x2B0B24u;
label_2b0b24:
    // 0x2b0b24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0b28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0b2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0b30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0b34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B34u;
    {
        const bool branch_taken_0x2b0b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0b34) {
            ctx->pc = 0x2B0B48u;
            goto label_2b0b48;
        }
    }
    ctx->pc = 0x2B0B3Cu;
    // 0x2b0b3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0b40: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2B0B40u;
    {
        const bool branch_taken_0x2b0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0b40) {
            ctx->pc = 0x2B0CDCu;
            goto label_2b0cdc;
        }
    }
    ctx->pc = 0x2B0B48u;
label_2b0b48:
    // 0x2b0b48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0b4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b0b50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b0b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0b5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0b60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0b64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B64u;
    {
        const bool branch_taken_0x2b0b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0b64) {
            ctx->pc = 0x2B0B78u;
            goto label_2b0b78;
        }
    }
    ctx->pc = 0x2B0B6Cu;
    // 0x2b0b6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0b70: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2B0B70u;
    {
        const bool branch_taken_0x2b0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0b70) {
            ctx->pc = 0x2B0CDCu;
            goto label_2b0cdc;
        }
    }
    ctx->pc = 0x2B0B78u;
label_2b0b78:
    // 0x2b0b78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0b7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b0b80: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b0b84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0b88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0b8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0b90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0b94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B94u;
    {
        const bool branch_taken_0x2b0b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0b94) {
            ctx->pc = 0x2B0BA8u;
            goto label_2b0ba8;
        }
    }
    ctx->pc = 0x2B0B9Cu;
    // 0x2b0b9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0ba0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2B0BA0u;
    {
        const bool branch_taken_0x2b0ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ba0) {
            ctx->pc = 0x2B0CDCu;
            goto label_2b0cdc;
        }
    }
    ctx->pc = 0x2B0BA8u;
label_2b0ba8:
    // 0x2b0ba8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0bac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b0bb0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b0bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b0bb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0bbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0bc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0bc4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0BC4u;
    {
        const bool branch_taken_0x2b0bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0bc4) {
            ctx->pc = 0x2B0BD8u;
            goto label_2b0bd8;
        }
    }
    ctx->pc = 0x2B0BCCu;
    // 0x2b0bcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0bd0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2B0BD0u;
    {
        const bool branch_taken_0x2b0bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0bd0) {
            ctx->pc = 0x2B0CDCu;
            goto label_2b0cdc;
        }
    }
    ctx->pc = 0x2B0BD8u;
label_2b0bd8:
    // 0x2b0bd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0bdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b0be0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b0be4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b0be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b0be8:
    // 0x2b0be8: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2B0BE8u;
    {
        const bool branch_taken_0x2b0be8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2b0be8) {
            ctx->pc = 0x2B0B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0b24;
        }
    }
    ctx->pc = 0x2B0BF0u;
    // 0x2b0bf0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0bf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0bf8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2b0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0bfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b0c00: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x2b0c00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2b0c04: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0C04u;
    {
        const bool branch_taken_0x2b0c04 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2b0c04) {
            ctx->pc = 0x2B0C14u;
            goto label_2b0c14;
        }
    }
    ctx->pc = 0x2B0C0Cu;
    // 0x2b0c0c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2b0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2b0c10: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2b0c10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2b0c14:
    // 0x2b0c14: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2B0C14u;
    {
        const bool branch_taken_0x2b0c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0c14) {
            ctx->pc = 0x2B0CD8u;
            goto label_2b0cd8;
        }
    }
    ctx->pc = 0x2B0C1Cu;
    // 0x2b0c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0c20: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B0C20u;
    {
        const bool branch_taken_0x2b0c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b0c20) {
            ctx->pc = 0x2B0CA8u;
            goto label_2b0ca8;
        }
    }
    ctx->pc = 0x2B0C28u;
    // 0x2b0c28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b0c2c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B0C2Cu;
    {
        const bool branch_taken_0x2b0c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b0c2c) {
            ctx->pc = 0x2B0C78u;
            goto label_2b0c78;
        }
    }
    ctx->pc = 0x2B0C34u;
    // 0x2b0c34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0c38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0C38u;
    {
        const bool branch_taken_0x2b0c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b0c38) {
            ctx->pc = 0x2B0C48u;
            goto label_2b0c48;
        }
    }
    ctx->pc = 0x2B0C40u;
    // 0x2b0c40: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2B0C40u;
    {
        const bool branch_taken_0x2b0c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0c40) {
            ctx->pc = 0x2B0CD8u;
            goto label_2b0cd8;
        }
    }
    ctx->pc = 0x2B0C48u;
label_2b0c48:
    // 0x2b0c48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0c4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0c50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0c54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0c58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0C58u;
    {
        const bool branch_taken_0x2b0c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0c58) {
            ctx->pc = 0x2B0C6Cu;
            goto label_2b0c6c;
        }
    }
    ctx->pc = 0x2B0C60u;
    // 0x2b0c60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0c64: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B0C64u;
    {
        const bool branch_taken_0x2b0c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0c64) {
            ctx->pc = 0x2B0CDCu;
            goto label_2b0cdc;
        }
    }
    ctx->pc = 0x2B0C6Cu;
label_2b0c6c:
    // 0x2b0c6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0c70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b0c74: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2b0c78:
    // 0x2b0c78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0c7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0c80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0c84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0c88: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0C88u;
    {
        const bool branch_taken_0x2b0c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0c88) {
            ctx->pc = 0x2B0C9Cu;
            goto label_2b0c9c;
        }
    }
    ctx->pc = 0x2B0C90u;
    // 0x2b0c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0c94: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B0C94u;
    {
        const bool branch_taken_0x2b0c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0c94) {
            ctx->pc = 0x2B0CDCu;
            goto label_2b0cdc;
        }
    }
    ctx->pc = 0x2B0C9Cu;
label_2b0c9c:
    // 0x2b0c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0ca0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b0ca4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2b0ca8:
    // 0x2b0ca8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0cac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0cb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0cb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0cb8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0CB8u;
    {
        const bool branch_taken_0x2b0cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0cb8) {
            ctx->pc = 0x2B0CCCu;
            goto label_2b0ccc;
        }
    }
    ctx->pc = 0x2B0CC0u;
    // 0x2b0cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0cc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0CC4u;
    {
        const bool branch_taken_0x2b0cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0cc4) {
            ctx->pc = 0x2B0CDCu;
            goto label_2b0cdc;
        }
    }
    ctx->pc = 0x2B0CCCu;
label_2b0ccc:
    // 0x2b0ccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0cd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b0cd4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b0cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2b0cd8:
    // 0x2b0cd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0cdc:
    // 0x2b0cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0ce0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b0ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b0ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0CECu;
    // 0x2b0cec: 0x0  nop
    ctx->pc = 0x2b0cecu;
    // NOP
    ctx->pc = 0x2b0cf0u;
}
