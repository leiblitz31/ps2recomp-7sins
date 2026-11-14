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

// Function: sub_001C39A0
// Address: 0x1c39a0 - 0x1c3bf0
void sub_001C39A0_0x1c39a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C39A0_0x1c39a0");
#endif

    switch (ctx->pc) {
        case 0x1c39e4u: goto label_1c39e4;
        default: break;
    }

    ctx->pc = 0x1c39a0u;

    // 0x1c39a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c39a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c39a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c39a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c39a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c39a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c39ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c39acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c39b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c39b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1c39b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c39b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c39bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c39c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c39c4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1c39c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c39c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C39C8u;
    {
        const bool branch_taken_0x1c39c8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c39c8) {
            ctx->pc = 0x1C39D8u;
            goto label_1c39d8;
        }
    }
    ctx->pc = 0x1C39D0u;
    // 0x1c39d0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1c39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c39d4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c39d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1c39d8:
    // 0x1c39d8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x1c39d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c39dc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1C39DCu;
    {
        const bool branch_taken_0x1c39dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39dc) {
            ctx->pc = 0x1C3AC8u;
            goto label_1c3ac8;
        }
    }
    ctx->pc = 0x1C39E4u;
label_1c39e4:
    // 0x1c39e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c39e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c39e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c39ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c39f0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c39f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c39f4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c39f8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c39f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c39fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C39FCu;
    {
        const bool branch_taken_0x1c39fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c39fc) {
            ctx->pc = 0x1C3A10u;
            goto label_1c3a10;
        }
    }
    ctx->pc = 0x1C3A04u;
    // 0x1c3a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a08: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1C3A08u;
    {
        const bool branch_taken_0x1c3a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a08) {
            ctx->pc = 0x1C3BD4u;
            goto label_1c3bd4;
        }
    }
    ctx->pc = 0x1C3A10u;
label_1c3a10:
    // 0x1c3a10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3a18: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c3a1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3a24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3a28: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3a28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3a2c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3a30: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3a30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3a34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A34u;
    {
        const bool branch_taken_0x1c3a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3a34) {
            ctx->pc = 0x1C3A48u;
            goto label_1c3a48;
        }
    }
    ctx->pc = 0x1C3A3Cu;
    // 0x1c3a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a40: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1C3A40u;
    {
        const bool branch_taken_0x1c3a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a40) {
            ctx->pc = 0x1C3BD4u;
            goto label_1c3bd4;
        }
    }
    ctx->pc = 0x1C3A48u;
label_1c3a48:
    // 0x1c3a48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3a50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c3a54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3a5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3a60: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3a64: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3a68: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3a68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3a6c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A6Cu;
    {
        const bool branch_taken_0x1c3a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3a6c) {
            ctx->pc = 0x1C3A80u;
            goto label_1c3a80;
        }
    }
    ctx->pc = 0x1C3A74u;
    // 0x1c3a74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a78: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1C3A78u;
    {
        const bool branch_taken_0x1c3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a78) {
            ctx->pc = 0x1C3BD4u;
            goto label_1c3bd4;
        }
    }
    ctx->pc = 0x1C3A80u;
label_1c3a80:
    // 0x1c3a80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3a88: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c3a8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3a94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3a98: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3a98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3a9c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3aa0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3aa4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3AA4u;
    {
        const bool branch_taken_0x1c3aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3aa4) {
            ctx->pc = 0x1C3AB8u;
            goto label_1c3ab8;
        }
    }
    ctx->pc = 0x1C3AACu;
    // 0x1c3aac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3ab0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1C3AB0u;
    {
        const bool branch_taken_0x1c3ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ab0) {
            ctx->pc = 0x1C3BD4u;
            goto label_1c3bd4;
        }
    }
    ctx->pc = 0x1C3AB8u;
label_1c3ab8:
    // 0x1c3ab8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3abc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3ac0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c3ac4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1c3ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1c3ac8:
    // 0x1c3ac8: 0x1e00ffc6  bgtz        $s0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1C3AC8u;
    {
        const bool branch_taken_0x1c3ac8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1c3ac8) {
            ctx->pc = 0x1C39E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c39e4;
        }
    }
    ctx->pc = 0x1C3AD0u;
    // 0x1c3ad0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3ad4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3ad8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3adc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3ae0: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x1c3ae0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1c3ae4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3AE4u;
    {
        const bool branch_taken_0x1c3ae4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1c3ae4) {
            ctx->pc = 0x1C3AF4u;
            goto label_1c3af4;
        }
    }
    ctx->pc = 0x1C3AECu;
    // 0x1c3aec: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1c3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1c3af0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1c3af0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1c3af4:
    // 0x1c3af4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C3AF4u;
    {
        const bool branch_taken_0x1c3af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3af4) {
            ctx->pc = 0x1C3BD0u;
            goto label_1c3bd0;
        }
    }
    ctx->pc = 0x1C3AFCu;
    // 0x1c3afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3b00: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C3B00u;
    {
        const bool branch_taken_0x1c3b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3b00) {
            ctx->pc = 0x1C3B98u;
            goto label_1c3b98;
        }
    }
    ctx->pc = 0x1C3B08u;
    // 0x1c3b08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3b0c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C3B0Cu;
    {
        const bool branch_taken_0x1c3b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3b0c) {
            ctx->pc = 0x1C3B60u;
            goto label_1c3b60;
        }
    }
    ctx->pc = 0x1C3B14u;
    // 0x1c3b14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3b18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3B18u;
    {
        const bool branch_taken_0x1c3b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3b18) {
            ctx->pc = 0x1C3B28u;
            goto label_1c3b28;
        }
    }
    ctx->pc = 0x1C3B20u;
    // 0x1c3b20: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C3B20u;
    {
        const bool branch_taken_0x1c3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b20) {
            ctx->pc = 0x1C3BD0u;
            goto label_1c3bd0;
        }
    }
    ctx->pc = 0x1C3B28u;
label_1c3b28:
    // 0x1c3b28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3b2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3b30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3b34: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3b34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3b38: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3b3c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3b3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3b40: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3B40u;
    {
        const bool branch_taken_0x1c3b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3b40) {
            ctx->pc = 0x1C3B54u;
            goto label_1c3b54;
        }
    }
    ctx->pc = 0x1C3B48u;
    // 0x1c3b48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3b4c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C3B4Cu;
    {
        const bool branch_taken_0x1c3b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b4c) {
            ctx->pc = 0x1C3BD4u;
            goto label_1c3bd4;
        }
    }
    ctx->pc = 0x1C3B54u;
label_1c3b54:
    // 0x1c3b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3b58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3b5c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1c3b60:
    // 0x1c3b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3b64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3b68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3b6c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3b70: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3b74: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3b78: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3B78u;
    {
        const bool branch_taken_0x1c3b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3b78) {
            ctx->pc = 0x1C3B8Cu;
            goto label_1c3b8c;
        }
    }
    ctx->pc = 0x1C3B80u;
    // 0x1c3b80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3b84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C3B84u;
    {
        const bool branch_taken_0x1c3b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b84) {
            ctx->pc = 0x1C3BD4u;
            goto label_1c3bd4;
        }
    }
    ctx->pc = 0x1C3B8Cu;
label_1c3b8c:
    // 0x1c3b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3b90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3b94: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1c3b98:
    // 0x1c3b98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3b9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3ba0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3ba4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3ba8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3bac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3bacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3bb0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3BB0u;
    {
        const bool branch_taken_0x1c3bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3bb0) {
            ctx->pc = 0x1C3BC4u;
            goto label_1c3bc4;
        }
    }
    ctx->pc = 0x1C3BB8u;
    // 0x1c3bb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3bbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3BBCu;
    {
        const bool branch_taken_0x1c3bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3bbc) {
            ctx->pc = 0x1C3BD4u;
            goto label_1c3bd4;
        }
    }
    ctx->pc = 0x1C3BC4u;
label_1c3bc4:
    // 0x1c3bc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3bc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3bcc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1c3bd0:
    // 0x1c3bd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3bd4:
    // 0x1c3bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3bd8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c3bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c3bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3BE4u;
    // 0x1c3be4: 0x0  nop
    ctx->pc = 0x1c3be4u;
    // NOP
    // 0x1c3be8: 0x0  nop
    ctx->pc = 0x1c3be8u;
    // NOP
    // 0x1c3bec: 0x0  nop
    ctx->pc = 0x1c3becu;
    // NOP
    ctx->pc = 0x1c3bf0u;
}
