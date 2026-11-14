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

// Function: sub_001C3C30
// Address: 0x1c3c30 - 0x1c3e80
void sub_001C3C30_0x1c3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3C30_0x1c3c30");
#endif

    switch (ctx->pc) {
        case 0x1c3c74u: goto label_1c3c74;
        default: break;
    }

    ctx->pc = 0x1c3c30u;

    // 0x1c3c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c3c34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c3c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c3c3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c3c40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c3c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1c3c44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3c48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3c4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3c50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3c54: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1c3c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c3c58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3C58u;
    {
        const bool branch_taken_0x1c3c58 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c3c58) {
            ctx->pc = 0x1C3C68u;
            goto label_1c3c68;
        }
    }
    ctx->pc = 0x1C3C60u;
    // 0x1c3c60: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1c3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c3c64: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c3c64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1c3c68:
    // 0x1c3c68: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x1c3c68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c3c6c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1C3C6Cu;
    {
        const bool branch_taken_0x1c3c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c6c) {
            ctx->pc = 0x1C3D58u;
            goto label_1c3d58;
        }
    }
    ctx->pc = 0x1C3C74u;
label_1c3c74:
    // 0x1c3c74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3c78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3c7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3c80: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3c84: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3c88: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3c88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3c8c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3C8Cu;
    {
        const bool branch_taken_0x1c3c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3c8c) {
            ctx->pc = 0x1C3CA0u;
            goto label_1c3ca0;
        }
    }
    ctx->pc = 0x1C3C94u;
    // 0x1c3c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3c98: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1C3C98u;
    {
        const bool branch_taken_0x1c3c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c98) {
            ctx->pc = 0x1C3E64u;
            goto label_1c3e64;
        }
    }
    ctx->pc = 0x1C3CA0u;
label_1c3ca0:
    // 0x1c3ca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3ca4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3ca8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c3cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3cb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3cb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3cb8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3cb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3cbc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3cc0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3cc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3cc4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3CC4u;
    {
        const bool branch_taken_0x1c3cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3cc4) {
            ctx->pc = 0x1C3CD8u;
            goto label_1c3cd8;
        }
    }
    ctx->pc = 0x1C3CCCu;
    // 0x1c3ccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3cd0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1C3CD0u;
    {
        const bool branch_taken_0x1c3cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3cd0) {
            ctx->pc = 0x1C3E64u;
            goto label_1c3e64;
        }
    }
    ctx->pc = 0x1C3CD8u;
label_1c3cd8:
    // 0x1c3cd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3cdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3ce0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c3ce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3ce8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3cec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3cf0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3cf4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3cf8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3cfc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3CFCu;
    {
        const bool branch_taken_0x1c3cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3cfc) {
            ctx->pc = 0x1C3D10u;
            goto label_1c3d10;
        }
    }
    ctx->pc = 0x1C3D04u;
    // 0x1c3d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3d08: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1C3D08u;
    {
        const bool branch_taken_0x1c3d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d08) {
            ctx->pc = 0x1C3E64u;
            goto label_1c3e64;
        }
    }
    ctx->pc = 0x1C3D10u;
label_1c3d10:
    // 0x1c3d10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3d14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3d18: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c3d1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3d20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3d24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3d28: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3d28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3d2c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3d30: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3d30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3d34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3D34u;
    {
        const bool branch_taken_0x1c3d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3d34) {
            ctx->pc = 0x1C3D48u;
            goto label_1c3d48;
        }
    }
    ctx->pc = 0x1C3D3Cu;
    // 0x1c3d3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3d40: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1C3D40u;
    {
        const bool branch_taken_0x1c3d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d40) {
            ctx->pc = 0x1C3E64u;
            goto label_1c3e64;
        }
    }
    ctx->pc = 0x1C3D48u;
label_1c3d48:
    // 0x1c3d48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3d4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3d50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c3d54: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1c3d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1c3d58:
    // 0x1c3d58: 0x1e00ffc6  bgtz        $s0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1C3D58u;
    {
        const bool branch_taken_0x1c3d58 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1c3d58) {
            ctx->pc = 0x1C3C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3c74;
        }
    }
    ctx->pc = 0x1C3D60u;
    // 0x1c3d60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3d68: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1c3d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3d6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3d70: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x1c3d70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1c3d74: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D74u;
    {
        const bool branch_taken_0x1c3d74 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1c3d74) {
            ctx->pc = 0x1C3D84u;
            goto label_1c3d84;
        }
    }
    ctx->pc = 0x1C3D7Cu;
    // 0x1c3d7c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1c3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1c3d80: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1c3d80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1c3d84:
    // 0x1c3d84: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C3D84u;
    {
        const bool branch_taken_0x1c3d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d84) {
            ctx->pc = 0x1C3E60u;
            goto label_1c3e60;
        }
    }
    ctx->pc = 0x1C3D8Cu;
    // 0x1c3d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3d90: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C3D90u;
    {
        const bool branch_taken_0x1c3d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3d90) {
            ctx->pc = 0x1C3E28u;
            goto label_1c3e28;
        }
    }
    ctx->pc = 0x1C3D98u;
    // 0x1c3d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3d9c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C3D9Cu;
    {
        const bool branch_taken_0x1c3d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3d9c) {
            ctx->pc = 0x1C3DF0u;
            goto label_1c3df0;
        }
    }
    ctx->pc = 0x1C3DA4u;
    // 0x1c3da4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3da8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3DA8u;
    {
        const bool branch_taken_0x1c3da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3da8) {
            ctx->pc = 0x1C3DB8u;
            goto label_1c3db8;
        }
    }
    ctx->pc = 0x1C3DB0u;
    // 0x1c3db0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C3DB0u;
    {
        const bool branch_taken_0x1c3db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3db0) {
            ctx->pc = 0x1C3E60u;
            goto label_1c3e60;
        }
    }
    ctx->pc = 0x1C3DB8u;
label_1c3db8:
    // 0x1c3db8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3dbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3dc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3dc4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3dc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3dc8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3dcc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3dccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3dd0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3DD0u;
    {
        const bool branch_taken_0x1c3dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3dd0) {
            ctx->pc = 0x1C3DE4u;
            goto label_1c3de4;
        }
    }
    ctx->pc = 0x1C3DD8u;
    // 0x1c3dd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3ddc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C3DDCu;
    {
        const bool branch_taken_0x1c3ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ddc) {
            ctx->pc = 0x1C3E64u;
            goto label_1c3e64;
        }
    }
    ctx->pc = 0x1C3DE4u;
label_1c3de4:
    // 0x1c3de4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3de8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3dec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1c3df0:
    // 0x1c3df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3df8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3dfc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3dfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3e00: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3e04: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3e04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3e08: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3E08u;
    {
        const bool branch_taken_0x1c3e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3e08) {
            ctx->pc = 0x1C3E1Cu;
            goto label_1c3e1c;
        }
    }
    ctx->pc = 0x1C3E10u;
    // 0x1c3e10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3e14: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C3E14u;
    {
        const bool branch_taken_0x1c3e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e14) {
            ctx->pc = 0x1C3E64u;
            goto label_1c3e64;
        }
    }
    ctx->pc = 0x1C3E1Cu;
label_1c3e1c:
    // 0x1c3e1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3e20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3e24: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1c3e28:
    // 0x1c3e28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3e2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3e30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3e34: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c3e34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3e38: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c3e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3e3c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c3e3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c3e40: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3E40u;
    {
        const bool branch_taken_0x1c3e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3e40) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3E48u;
    // 0x1c3e48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3e4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3E4Cu;
    {
        const bool branch_taken_0x1c3e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e4c) {
            ctx->pc = 0x1C3E64u;
            goto label_1c3e64;
        }
    }
    ctx->pc = 0x1C3E54u;
label_1c3e54:
    // 0x1c3e54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3e58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c3e5c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1c3e60:
    // 0x1c3e60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3e64:
    // 0x1c3e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3e68: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c3e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3E74u;
    // 0x1c3e74: 0x0  nop
    ctx->pc = 0x1c3e74u;
    // NOP
    // 0x1c3e78: 0x0  nop
    ctx->pc = 0x1c3e78u;
    // NOP
    // 0x1c3e7c: 0x0  nop
    ctx->pc = 0x1c3e7cu;
    // NOP
    ctx->pc = 0x1c3e80u;
}
