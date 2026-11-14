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

// Function: sub_003C5CB0
// Address: 0x3c5cb0 - 0x3c7220
void sub_003C5CB0_0x3c5cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5CB0_0x3c5cb0");
#endif

    ctx->pc = 0x3c5cb0u;

    // 0x3c5cb0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3c5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5cb4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3c5cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5cb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c5cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5cbc: 0x0  nop
    ctx->pc = 0x3c5cbcu;
    // NOP
    // 0x3c5cc0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5CC0u;
    {
        const bool branch_taken_0x3c5cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CC0u;
        // 0x3c5cc4: 0x27bdff00  addiu       $sp, $sp, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5cc0) {
            ctx->pc = 0x3C5CE4u;
            goto label_3c5ce4;
        }
    }
    ctx->pc = 0x3C5CC8u;
    // 0x3c5cc8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5cd0: 0x0  nop
    ctx->pc = 0x3c5cd0u;
    // NOP
    // 0x3c5cd4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5CD4u;
    {
        const bool branch_taken_0x3c5cd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CD4u;
        // 0x3c5cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5cd4) {
            ctx->pc = 0x3C5CE8u;
            goto label_3c5ce8;
        }
    }
    ctx->pc = 0x3C5CDCu;
    // 0x3c5cdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5CDCu;
    {
        const bool branch_taken_0x3c5cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CDCu;
        // 0x3c5ce0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5cdc) {
            ctx->pc = 0x3C5CE8u;
            goto label_3c5ce8;
        }
    }
    ctx->pc = 0x3C5CE4u;
label_3c5ce4:
    // 0x3c5ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c5ce8:
    // 0x3c5ce8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3c5ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5cec: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3c5cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5cf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c5cf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5cf4: 0x0  nop
    ctx->pc = 0x3c5cf4u;
    // NOP
    // 0x3c5cf8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5CF8u;
    {
        const bool branch_taken_0x3c5cf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CF8u;
        // 0x3c5cfc: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5cf8) {
            ctx->pc = 0x3C5D1Cu;
            goto label_3c5d1c;
        }
    }
    ctx->pc = 0x3C5D00u;
    // 0x3c5d00: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3c5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5d04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5d08: 0x0  nop
    ctx->pc = 0x3c5d08u;
    // NOP
    // 0x3c5d0c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5D0Cu;
    {
        const bool branch_taken_0x3c5d0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5d0c) {
            ctx->pc = 0x3C5D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5D0Cu;
            // 0x3c5d10: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5D20u;
            goto label_3c5d20;
        }
    }
    ctx->pc = 0x3C5D14u;
    // 0x3c5d14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5D14u;
    {
        const bool branch_taken_0x3c5d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D14u;
        // 0x3c5d18: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d14) {
            ctx->pc = 0x3C5D24u;
            goto label_3c5d24;
        }
    }
    ctx->pc = 0x3C5D1Cu;
label_3c5d1c:
    // 0x3c5d1c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3c5d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3c5d20:
    // 0x3c5d20: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3c5d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5d24:
    // 0x3c5d24: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3c5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5d28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c5d28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5d2c: 0x0  nop
    ctx->pc = 0x3c5d2cu;
    // NOP
    // 0x3c5d30: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5D30u;
    {
        const bool branch_taken_0x3c5d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D30u;
        // 0x3c5d34: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d30) {
            ctx->pc = 0x3C5D54u;
            goto label_3c5d54;
        }
    }
    ctx->pc = 0x3C5D38u;
    // 0x3c5d38: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3c5d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5d40: 0x0  nop
    ctx->pc = 0x3c5d40u;
    // NOP
    // 0x3c5d44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5D44u;
    {
        const bool branch_taken_0x3c5d44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D44u;
        // 0x3c5d48: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d44) {
            ctx->pc = 0x3C5D58u;
            goto label_3c5d58;
        }
    }
    ctx->pc = 0x3C5D4Cu;
    // 0x3c5d4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5D4Cu;
    {
        const bool branch_taken_0x3c5d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D4Cu;
        // 0x3c5d50: 0x35080020  ori         $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d4c) {
            ctx->pc = 0x3C5D58u;
            goto label_3c5d58;
        }
    }
    ctx->pc = 0x3C5D54u;
label_3c5d54:
    // 0x3c5d54: 0x34480010  ori         $t0, $v0, 0x10
    ctx->pc = 0x3c5d54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3c5d58:
    // 0x3c5d58: 0x1100052f  beqz        $t0, . + 4 + (0x52F << 2)
    ctx->pc = 0x3C5D58u;
    {
        const bool branch_taken_0x3c5d58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D58u;
        // 0x3c5d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d58) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C5D60u;
    // 0x3c5d60: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x3c5d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5d64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3c5d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5d68: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x3c5d68u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x3c5d6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c5d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5d70: 0x0  nop
    ctx->pc = 0x3c5d70u;
    // NOP
    // 0x3c5d74: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5D74u;
    {
        const bool branch_taken_0x3c5d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D74u;
        // 0x3c5d78: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d74) {
            ctx->pc = 0x3C5D94u;
            goto label_3c5d94;
        }
    }
    ctx->pc = 0x3C5D7Cu;
    // 0x3c5d7c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c5d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5d80: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3c5d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5d84: 0x0  nop
    ctx->pc = 0x3c5d84u;
    // NOP
    // 0x3c5d88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5D88u;
    {
        const bool branch_taken_0x3c5d88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D88u;
        // 0x3c5d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d88) {
            ctx->pc = 0x3C5D94u;
            goto label_3c5d94;
        }
    }
    ctx->pc = 0x3C5D90u;
    // 0x3c5d90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c5d94:
    // 0x3c5d94: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3c5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5d98: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x3c5d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5d9c: 0x0  nop
    ctx->pc = 0x3c5d9cu;
    // NOP
    // 0x3c5da0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5DA0u;
    {
        const bool branch_taken_0x3c5da0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5da0) {
            ctx->pc = 0x3C5DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5DA0u;
            // 0x3c5da4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5DC4u;
            goto label_3c5dc4;
        }
    }
    ctx->pc = 0x3C5DA8u;
    // 0x3c5da8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3c5da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5dac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5db0: 0x0  nop
    ctx->pc = 0x3c5db0u;
    // NOP
    // 0x3c5db4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5DB4u;
    {
        const bool branch_taken_0x3c5db4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5db4) {
            ctx->pc = 0x3C5DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5DB4u;
            // 0x3c5db8: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5DC4u;
            goto label_3c5dc4;
        }
    }
    ctx->pc = 0x3C5DBCu;
    // 0x3c5dbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5DBCu;
    {
        const bool branch_taken_0x3c5dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DBCu;
        // 0x3c5dc0: 0xc4c10008  lwc1        $f1, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5dbc) {
            ctx->pc = 0x3C5DC8u;
            goto label_3c5dc8;
        }
    }
    ctx->pc = 0x3C5DC4u;
label_3c5dc4:
    // 0x3c5dc4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3c5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5dc8:
    // 0x3c5dc8: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x3c5dc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5dcc: 0x0  nop
    ctx->pc = 0x3c5dccu;
    // NOP
    // 0x3c5dd0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5DD0u;
    {
        const bool branch_taken_0x3c5dd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5dd0) {
            ctx->pc = 0x3C5DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5DD0u;
            // 0x3c5dd4: 0x344a0010  ori         $t2, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5DF0u;
            goto label_3c5df0;
        }
    }
    ctx->pc = 0x3C5DD8u;
    // 0x3c5dd8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3c5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5de0: 0x0  nop
    ctx->pc = 0x3c5de0u;
    // NOP
    // 0x3c5de4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5DE4u;
    {
        const bool branch_taken_0x3c5de4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DE4u;
        // 0x3c5de8: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5de4) {
            ctx->pc = 0x3C5DF0u;
            goto label_3c5df0;
        }
    }
    ctx->pc = 0x3C5DECu;
    // 0x3c5dec: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x3c5decu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
label_3c5df0:
    // 0x3c5df0: 0x11400509  beqz        $t2, . + 4 + (0x509 << 2)
    ctx->pc = 0x3C5DF0u;
    {
        const bool branch_taken_0x3c5df0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DF0u;
        // 0x3c5df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5df0) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C5DF8u;
    // 0x3c5df8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x3c5df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5dfc: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x3c5dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5e00: 0x0  nop
    ctx->pc = 0x3c5e00u;
    // NOP
    // 0x3c5e04: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5E04u;
    {
        const bool branch_taken_0x3c5e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5e04) {
            ctx->pc = 0x3C5E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5E04u;
            // 0x3c5e08: 0xc4e10004  lwc1        $f1, 0x4($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5E28u;
            goto label_3c5e28;
        }
    }
    ctx->pc = 0x3C5E0Cu;
    // 0x3c5e0c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c5e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5e14: 0x0  nop
    ctx->pc = 0x3c5e14u;
    // NOP
    // 0x3c5e18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5E18u;
    {
        const bool branch_taken_0x3c5e18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E18u;
        // 0x3c5e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e18) {
            ctx->pc = 0x3C5E24u;
            goto label_3c5e24;
        }
    }
    ctx->pc = 0x3C5E20u;
    // 0x3c5e20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c5e24:
    // 0x3c5e24: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3c5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5e28:
    // 0x3c5e28: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x3c5e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5e2c: 0x0  nop
    ctx->pc = 0x3c5e2cu;
    // NOP
    // 0x3c5e30: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5E30u;
    {
        const bool branch_taken_0x3c5e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5e30) {
            ctx->pc = 0x3C5E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5E30u;
            // 0x3c5e34: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5E54u;
            goto label_3c5e54;
        }
    }
    ctx->pc = 0x3C5E38u;
    // 0x3c5e38: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3c5e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5e3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5e40: 0x0  nop
    ctx->pc = 0x3c5e40u;
    // NOP
    // 0x3c5e44: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5E44u;
    {
        const bool branch_taken_0x3c5e44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5e44) {
            ctx->pc = 0x3C5E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5E44u;
            // 0x3c5e48: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5E54u;
            goto label_3c5e54;
        }
    }
    ctx->pc = 0x3C5E4Cu;
    // 0x3c5e4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5E4Cu;
    {
        const bool branch_taken_0x3c5e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E4Cu;
        // 0x3c5e50: 0xc4e10008  lwc1        $f1, 0x8($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e4c) {
            ctx->pc = 0x3C5E58u;
            goto label_3c5e58;
        }
    }
    ctx->pc = 0x3C5E54u;
label_3c5e54:
    // 0x3c5e54: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3c5e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5e58:
    // 0x3c5e58: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x3c5e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5e5c: 0x0  nop
    ctx->pc = 0x3c5e5cu;
    // NOP
    // 0x3c5e60: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5E60u;
    {
        const bool branch_taken_0x3c5e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5e60) {
            ctx->pc = 0x3C5E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5E60u;
            // 0x3c5e64: 0x34490010  ori         $t1, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5E80u;
            goto label_3c5e80;
        }
    }
    ctx->pc = 0x3C5E68u;
    // 0x3c5e68: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3c5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5e70: 0x0  nop
    ctx->pc = 0x3c5e70u;
    // NOP
    // 0x3c5e74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5E74u;
    {
        const bool branch_taken_0x3c5e74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E74u;
        // 0x3c5e78: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e74) {
            ctx->pc = 0x3C5E80u;
            goto label_3c5e80;
        }
    }
    ctx->pc = 0x3C5E7Cu;
    // 0x3c5e7c: 0x35290020  ori         $t1, $t1, 0x20
    ctx->pc = 0x3c5e7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
label_3c5e80:
    // 0x3c5e80: 0x112004af  beqz        $t1, . + 4 + (0x4AF << 2)
    ctx->pc = 0x3C5E80u;
    {
        const bool branch_taken_0x3c5e80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E80u;
        // 0x3c5e84: 0x10a1824  and         $v1, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e80) {
            ctx->pc = 0x3C7140u;
            goto label_3c7140;
        }
    }
    ctx->pc = 0x3C5E88u;
    // 0x3c5e88: 0x691024  and         $v0, $v1, $t1
    ctx->pc = 0x3c5e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x3c5e8c: 0x144004e2  bnez        $v0, . + 4 + (0x4E2 << 2)
    ctx->pc = 0x3C5E8Cu;
    {
        const bool branch_taken_0x3c5e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E8Cu;
        // 0x3c5e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e8c) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C5E94u;
    // 0x3c5e94: 0x1460015e  bnez        $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x3C5E94u;
    {
        const bool branch_taken_0x3c5e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E94u;
        // 0x3c5e98: 0x1091024  and         $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e94) {
            ctx->pc = 0x3C6410u;
            goto label_3c6410;
        }
    }
    ctx->pc = 0x3C5E9Cu;
    // 0x3c5e9c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3c5e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ea0: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x3c5ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c5ea4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3c5ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5ea8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x3c5ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c5eac: 0x46040201  sub.s       $f8, $f0, $f4
    ctx->pc = 0x3c5eacu;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3c5eb0: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x3c5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c5eb4: 0x46030a81  sub.s       $f10, $f1, $f3
    ctx->pc = 0x3c5eb4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3c5eb8: 0x46051181  sub.s       $f6, $f2, $f5
    ctx->pc = 0x3c5eb8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x3c5ebc: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x3c5ebcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c5ec0: 0xe7aa0008  swc1        $f10, 0x8($sp)
    ctx->pc = 0x3c5ec0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c5ec4: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x3c5ec4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c5ec8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c5ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ecc: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x3c5eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5ed0: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x3c5ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x3c5ed4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x3c5ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5ed8: 0x460221c1  sub.s       $f7, $f4, $f2
    ctx->pc = 0x3c5ed8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3c5edc: 0x46011ac1  sub.s       $f11, $f3, $f1
    ctx->pc = 0x3c5edcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c5ee0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3c5ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3c5ee4: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x3c5ee4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3c5ee8: 0xe7ab0018  swc1        $f11, 0x18($sp)
    ctx->pc = 0x3c5ee8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3c5eec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3c5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ef0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3c5ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5ef4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3c5ef4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x3c5ef8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3c5ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5efc: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x3c5efcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3c5f00: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3c5f00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c5f04: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x3c5f04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3c5f08: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x3c5f08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3c5f0c: 0x10a1026  xor         $v0, $t0, $t2
    ctx->pc = 0x3c5f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 10));
    // 0x3c5f10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c5f10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5f14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c5f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c5f18: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C5F18u;
    {
        const bool branch_taken_0x3c5f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F18u;
        // 0x3c5f1c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f18) {
            ctx->pc = 0x3C5FD4u;
            goto label_3c5fd4;
        }
    }
    ctx->pc = 0x3C5F20u;
    // 0x3c5f20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c5f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c5f24: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x3c5f24u;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x3c5f28: 0x46002a46  mov.s       $f9, $f5
    ctx->pc = 0x3c5f28u;
    ctx->f[9] = FPU_MOV_S(ctx->f[5]);
    // 0x3c5f2c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3c5f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5f30: 0x0  nop
    ctx->pc = 0x3c5f30u;
    // NOP
    // 0x3c5f34: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x3C5F34u;
    {
        const bool branch_taken_0x3c5f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F34u;
        // 0x3c5f38: 0x46084882  mul.s       $f2, $f9, $f8 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f34) {
            ctx->pc = 0x3C5F88u;
            goto label_3c5f88;
        }
    }
    ctx->pc = 0x3C5F3Cu;
    // 0x3c5f3c: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x3c5f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3c5f40: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3c5f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5f44: 0x0  nop
    ctx->pc = 0x3c5f44u;
    // NOP
    // 0x3c5f48: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C5F48u;
    {
        const bool branch_taken_0x3c5f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F48u;
        // 0x3c5f4c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f48) {
            ctx->pc = 0x3C5FD8u;
            goto label_3c5fd8;
        }
    }
    ctx->pc = 0x3C5F50u;
    // 0x3c5f50: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x3c5f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x3c5f54: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c5f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5f58: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x3C5F58u;
    {
        const bool branch_taken_0x3c5f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5f58) {
            ctx->pc = 0x3C5FD8u;
            goto label_3c5fd8;
        }
    }
    ctx->pc = 0x3C5F60u;
    // 0x3c5f60: 0x460a4882  mul.s       $f2, $f9, $f10
    ctx->pc = 0x3c5f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x3c5f64: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x3c5f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3c5f68: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3c5f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5f6c: 0x0  nop
    ctx->pc = 0x3c5f6cu;
    // NOP
    // 0x3c5f70: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x3C5F70u;
    {
        const bool branch_taken_0x3c5f70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F70u;
        // 0x3c5f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f70) {
            ctx->pc = 0x3C5FD4u;
            goto label_3c5fd4;
        }
    }
    ctx->pc = 0x3C5F78u;
    // 0x3c5f78: 0x46035802  mul.s       $f0, $f11, $f3
    ctx->pc = 0x3c5f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x3c5f7c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c5f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5f80: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C5F80u;
    {
        const bool branch_taken_0x3c5f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5f80) {
            ctx->pc = 0x3C5FCCu;
            goto label_3c5fcc;
        }
    }
    ctx->pc = 0x3C5F88u;
label_3c5f88:
    // 0x3c5f88: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x3c5f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x3c5f8c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c5f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5f90: 0x0  nop
    ctx->pc = 0x3c5f90u;
    // NOP
    // 0x3c5f94: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x3C5F94u;
    {
        const bool branch_taken_0x3c5f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F94u;
        // 0x3c5f98: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f94) {
            ctx->pc = 0x3C5FD8u;
            goto label_3c5fd8;
        }
    }
    ctx->pc = 0x3C5F9Cu;
    // 0x3c5f9c: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x3c5f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x3c5fa0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3c5fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5fa4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3C5FA4u;
    {
        const bool branch_taken_0x3c5fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5fa4) {
            ctx->pc = 0x3C5FD8u;
            goto label_3c5fd8;
        }
    }
    ctx->pc = 0x3C5FACu;
    // 0x3c5fac: 0x460a2882  mul.s       $f2, $f5, $f10
    ctx->pc = 0x3c5facu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x3c5fb0: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x3c5fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x3c5fb4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c5fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5fb8: 0x0  nop
    ctx->pc = 0x3c5fb8u;
    // NOP
    // 0x3c5fbc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C5FBCu;
    {
        const bool branch_taken_0x3c5fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5FBCu;
        // 0x3c5fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5fbc) {
            ctx->pc = 0x3C5FD4u;
            goto label_3c5fd4;
        }
    }
    ctx->pc = 0x3C5FC4u;
    // 0x3c5fc4: 0x46065802  mul.s       $f0, $f11, $f6
    ctx->pc = 0x3c5fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x3c5fc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3c5fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5fcc:
    // 0x3c5fcc: 0x45010492  bc1t        . + 4 + (0x492 << 2)
    ctx->pc = 0x3C5FCCu;
    {
        const bool branch_taken_0x3c5fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5fcc) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C5FD4u;
label_3c5fd4:
    // 0x3c5fd4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3c5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3c5fd8:
    // 0x3c5fd8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C5FD8u;
    {
        const bool branch_taken_0x3c5fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5FD8u;
        // 0x3c5fdc: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5fd8) {
            ctx->pc = 0x3C60ACu;
            goto label_3c60ac;
        }
    }
    ctx->pc = 0x3C5FE0u;
    // 0x3c5fe0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c5fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5fe4: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x3c5fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c5fe8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c5fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5fec: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3c5fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ff0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C5FF0u;
    {
        const bool branch_taken_0x3c5ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5FF0u;
        // 0x3c5ff4: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ff0) {
            ctx->pc = 0x3C6050u;
            goto label_3c6050;
        }
    }
    ctx->pc = 0x3C5FF8u;
    // 0x3c5ff8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3c5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ffc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c5ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6004: 0x0  nop
    ctx->pc = 0x3c6004u;
    // NOP
    // 0x3c6008: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6008u;
    {
        const bool branch_taken_0x3c6008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6008u;
        // 0x3c600c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6008) {
            ctx->pc = 0x3C60ACu;
            goto label_3c60ac;
        }
    }
    ctx->pc = 0x3C6010u;
    // 0x3c6010: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6014: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6018: 0x0  nop
    ctx->pc = 0x3c6018u;
    // NOP
    // 0x3c601c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C601Cu;
    {
        const bool branch_taken_0x3c601c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C601Cu;
        // 0x3c6020: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c601c) {
            ctx->pc = 0x3C60ACu;
            goto label_3c60ac;
        }
    }
    ctx->pc = 0x3C6024u;
    // 0x3c6024: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3c6024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6028: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c602c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c602cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6030: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6034: 0x0  nop
    ctx->pc = 0x3c6034u;
    // NOP
    // 0x3c6038: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6038u;
    {
        const bool branch_taken_0x3c6038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6038u;
        // 0x3c603c: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6038) {
            ctx->pc = 0x3C60ACu;
            goto label_3c60ac;
        }
    }
    ctx->pc = 0x3C6040u;
    // 0x3c6040: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6044: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6048: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6048u;
    {
        const bool branch_taken_0x3c6048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6048u;
        // 0x3c604c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6048) {
            ctx->pc = 0x3C60A4u;
            goto label_3c60a4;
        }
    }
    ctx->pc = 0x3C6050u;
label_3c6050:
    // 0x3c6050: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3c6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6054: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6058: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c605c: 0x0  nop
    ctx->pc = 0x3c605cu;
    // NOP
    // 0x3c6060: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6060u;
    {
        const bool branch_taken_0x3c6060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6060u;
        // 0x3c6064: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6060) {
            ctx->pc = 0x3C60ACu;
            goto label_3c60ac;
        }
    }
    ctx->pc = 0x3C6068u;
    // 0x3c6068: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c606c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c606cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6070: 0x0  nop
    ctx->pc = 0x3c6070u;
    // NOP
    // 0x3c6074: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C6074u;
    {
        const bool branch_taken_0x3c6074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6074u;
        // 0x3c6078: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6074) {
            ctx->pc = 0x3C60ACu;
            goto label_3c60ac;
        }
    }
    ctx->pc = 0x3C607Cu;
    // 0x3c607c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3c607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6080: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6084: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6088: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c608c: 0x0  nop
    ctx->pc = 0x3c608cu;
    // NOP
    // 0x3c6090: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6090u;
    {
        const bool branch_taken_0x3c6090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6090u;
        // 0x3c6094: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6090) {
            ctx->pc = 0x3C60ACu;
            goto label_3c60ac;
        }
    }
    ctx->pc = 0x3C6098u;
    // 0x3c6098: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c609c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c609cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c60a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c60a4:
    // 0x3c60a4: 0x4501045c  bc1t        . + 4 + (0x45C << 2)
    ctx->pc = 0x3C60A4u;
    {
        const bool branch_taken_0x3c60a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c60a4) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C60ACu;
label_3c60ac:
    // 0x3c60ac: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3c60acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3c60b0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C60B0u;
    {
        const bool branch_taken_0x3c60b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C60B0u;
        // 0x3c60b4: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c60b0) {
            ctx->pc = 0x3C6184u;
            goto label_3c6184;
        }
    }
    ctx->pc = 0x3C60B8u;
    // 0x3c60b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c60b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c60bc: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x3c60bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c60c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c60c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c60c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3c60c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c60c8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C60C8u;
    {
        const bool branch_taken_0x3c60c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C60C8u;
        // 0x3c60cc: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c60c8) {
            ctx->pc = 0x3C6128u;
            goto label_3c6128;
        }
    }
    ctx->pc = 0x3C60D0u;
    // 0x3c60d0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3c60d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c60d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c60d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c60d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c60d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c60dc: 0x0  nop
    ctx->pc = 0x3c60dcu;
    // NOP
    // 0x3c60e0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C60E0u;
    {
        const bool branch_taken_0x3c60e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C60E0u;
        // 0x3c60e4: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c60e0) {
            ctx->pc = 0x3C6184u;
            goto label_3c6184;
        }
    }
    ctx->pc = 0x3C60E8u;
    // 0x3c60e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c60e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c60ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c60ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c60f0: 0x0  nop
    ctx->pc = 0x3c60f0u;
    // NOP
    // 0x3c60f4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C60F4u;
    {
        const bool branch_taken_0x3c60f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C60F4u;
        // 0x3c60f8: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c60f4) {
            ctx->pc = 0x3C6184u;
            goto label_3c6184;
        }
    }
    ctx->pc = 0x3C60FCu;
    // 0x3c60fc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c60fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6100: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6104: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6108: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c610c: 0x0  nop
    ctx->pc = 0x3c610cu;
    // NOP
    // 0x3c6110: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6110u;
    {
        const bool branch_taken_0x3c6110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6110u;
        // 0x3c6114: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6110) {
            ctx->pc = 0x3C6184u;
            goto label_3c6184;
        }
    }
    ctx->pc = 0x3C6118u;
    // 0x3c6118: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c611c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c611cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6120: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6120u;
    {
        const bool branch_taken_0x3c6120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6120u;
        // 0x3c6124: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6120) {
            ctx->pc = 0x3C617Cu;
            goto label_3c617c;
        }
    }
    ctx->pc = 0x3C6128u;
label_3c6128:
    // 0x3c6128: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3c6128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c612c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c612cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6130: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6134: 0x0  nop
    ctx->pc = 0x3c6134u;
    // NOP
    // 0x3c6138: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6138u;
    {
        const bool branch_taken_0x3c6138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6138u;
        // 0x3c613c: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6138) {
            ctx->pc = 0x3C6184u;
            goto label_3c6184;
        }
    }
    ctx->pc = 0x3C6140u;
    // 0x3c6140: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6148: 0x0  nop
    ctx->pc = 0x3c6148u;
    // NOP
    // 0x3c614c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C614Cu;
    {
        const bool branch_taken_0x3c614c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C614Cu;
        // 0x3c6150: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c614c) {
            ctx->pc = 0x3C6184u;
            goto label_3c6184;
        }
    }
    ctx->pc = 0x3C6154u;
    // 0x3c6154: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c6154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6158: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c615c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c615cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6160: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6164: 0x0  nop
    ctx->pc = 0x3c6164u;
    // NOP
    // 0x3c6168: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6168u;
    {
        const bool branch_taken_0x3c6168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6168u;
        // 0x3c616c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6168) {
            ctx->pc = 0x3C6184u;
            goto label_3c6184;
        }
    }
    ctx->pc = 0x3C6170u;
    // 0x3c6170: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c617c:
    // 0x3c617c: 0x45010426  bc1t        . + 4 + (0x426 << 2)
    ctx->pc = 0x3C617Cu;
    {
        const bool branch_taken_0x3c617c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c617c) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6184u;
label_3c6184:
    // 0x3c6184: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3c6184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3c6188: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6188u;
    {
        const bool branch_taken_0x3c6188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6188u;
        // 0x3c618c: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6188) {
            ctx->pc = 0x3C625Cu;
            goto label_3c625c;
        }
    }
    ctx->pc = 0x3C6190u;
    // 0x3c6190: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6194: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3c6194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6198: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c619c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3c619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c61a0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C61A0u;
    {
        const bool branch_taken_0x3c61a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61A0u;
        // 0x3c61a4: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c61a0) {
            ctx->pc = 0x3C6200u;
            goto label_3c6200;
        }
    }
    ctx->pc = 0x3C61A8u;
    // 0x3c61a8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3c61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c61ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c61acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c61b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c61b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c61b4: 0x0  nop
    ctx->pc = 0x3c61b4u;
    // NOP
    // 0x3c61b8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C61B8u;
    {
        const bool branch_taken_0x3c61b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61B8u;
        // 0x3c61bc: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c61b8) {
            ctx->pc = 0x3C625Cu;
            goto label_3c625c;
        }
    }
    ctx->pc = 0x3C61C0u;
    // 0x3c61c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c61c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c61c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c61c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c61c8: 0x0  nop
    ctx->pc = 0x3c61c8u;
    // NOP
    // 0x3c61cc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C61CCu;
    {
        const bool branch_taken_0x3c61cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61CCu;
        // 0x3c61d0: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c61cc) {
            ctx->pc = 0x3C625Cu;
            goto label_3c625c;
        }
    }
    ctx->pc = 0x3C61D4u;
    // 0x3c61d4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c61d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c61d8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c61d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c61dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c61dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c61e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c61e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c61e4: 0x0  nop
    ctx->pc = 0x3c61e4u;
    // NOP
    // 0x3c61e8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C61E8u;
    {
        const bool branch_taken_0x3c61e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61E8u;
        // 0x3c61ec: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c61e8) {
            ctx->pc = 0x3C625Cu;
            goto label_3c625c;
        }
    }
    ctx->pc = 0x3C61F0u;
    // 0x3c61f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c61f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c61f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c61f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c61f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C61F8u;
    {
        const bool branch_taken_0x3c61f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61F8u;
        // 0x3c61fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c61f8) {
            ctx->pc = 0x3C6254u;
            goto label_3c6254;
        }
    }
    ctx->pc = 0x3C6200u;
label_3c6200:
    // 0x3c6200: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3c6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6204: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6208: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c620c: 0x0  nop
    ctx->pc = 0x3c620cu;
    // NOP
    // 0x3c6210: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6210u;
    {
        const bool branch_taken_0x3c6210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6210u;
        // 0x3c6214: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6210) {
            ctx->pc = 0x3C625Cu;
            goto label_3c625c;
        }
    }
    ctx->pc = 0x3C6218u;
    // 0x3c6218: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c621c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c621cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6220: 0x0  nop
    ctx->pc = 0x3c6220u;
    // NOP
    // 0x3c6224: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C6224u;
    {
        const bool branch_taken_0x3c6224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6224u;
        // 0x3c6228: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6224) {
            ctx->pc = 0x3C625Cu;
            goto label_3c625c;
        }
    }
    ctx->pc = 0x3C622Cu;
    // 0x3c622c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6230: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6234: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6238: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c623c: 0x0  nop
    ctx->pc = 0x3c623cu;
    // NOP
    // 0x3c6240: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6240u;
    {
        const bool branch_taken_0x3c6240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6240u;
        // 0x3c6244: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6240) {
            ctx->pc = 0x3C625Cu;
            goto label_3c625c;
        }
    }
    ctx->pc = 0x3C6248u;
    // 0x3c6248: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c624c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c624cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6254:
    // 0x3c6254: 0x450103f0  bc1t        . + 4 + (0x3F0 << 2)
    ctx->pc = 0x3C6254u;
    {
        const bool branch_taken_0x3c6254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6254) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C625Cu;
label_3c625c:
    // 0x3c625c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3c625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3c6260: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6260u;
    {
        const bool branch_taken_0x3c6260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6260u;
        // 0x3c6264: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6260) {
            ctx->pc = 0x3C6334u;
            goto label_3c6334;
        }
    }
    ctx->pc = 0x3C6268u;
    // 0x3c6268: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c626c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x3c626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6270: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6274: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3c6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6278: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6278u;
    {
        const bool branch_taken_0x3c6278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6278u;
        // 0x3c627c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6278) {
            ctx->pc = 0x3C62D8u;
            goto label_3c62d8;
        }
    }
    ctx->pc = 0x3C6280u;
    // 0x3c6280: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c6280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6284: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c628c: 0x0  nop
    ctx->pc = 0x3c628cu;
    // NOP
    // 0x3c6290: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6290u;
    {
        const bool branch_taken_0x3c6290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6290u;
        // 0x3c6294: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6290) {
            ctx->pc = 0x3C6334u;
            goto label_3c6334;
        }
    }
    ctx->pc = 0x3C6298u;
    // 0x3c6298: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c629c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c629cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c62a0: 0x0  nop
    ctx->pc = 0x3c62a0u;
    // NOP
    // 0x3c62a4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C62A4u;
    {
        const bool branch_taken_0x3c62a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62A4u;
        // 0x3c62a8: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c62a4) {
            ctx->pc = 0x3C6334u;
            goto label_3c6334;
        }
    }
    ctx->pc = 0x3C62ACu;
    // 0x3c62ac: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3c62acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c62b0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c62b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c62b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c62b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c62b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c62b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c62bc: 0x0  nop
    ctx->pc = 0x3c62bcu;
    // NOP
    // 0x3c62c0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C62C0u;
    {
        const bool branch_taken_0x3c62c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62C0u;
        // 0x3c62c4: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c62c0) {
            ctx->pc = 0x3C6334u;
            goto label_3c6334;
        }
    }
    ctx->pc = 0x3C62C8u;
    // 0x3c62c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c62c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c62cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c62ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c62d0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C62D0u;
    {
        const bool branch_taken_0x3c62d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62D0u;
        // 0x3c62d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c62d0) {
            ctx->pc = 0x3C632Cu;
            goto label_3c632c;
        }
    }
    ctx->pc = 0x3C62D8u;
label_3c62d8:
    // 0x3c62d8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c62dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c62dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c62e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c62e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c62e4: 0x0  nop
    ctx->pc = 0x3c62e4u;
    // NOP
    // 0x3c62e8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C62E8u;
    {
        const bool branch_taken_0x3c62e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62E8u;
        // 0x3c62ec: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c62e8) {
            ctx->pc = 0x3C6334u;
            goto label_3c6334;
        }
    }
    ctx->pc = 0x3C62F0u;
    // 0x3c62f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c62f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c62f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c62f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c62f8: 0x0  nop
    ctx->pc = 0x3c62f8u;
    // NOP
    // 0x3c62fc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C62FCu;
    {
        const bool branch_taken_0x3c62fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62FCu;
        // 0x3c6300: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c62fc) {
            ctx->pc = 0x3C6334u;
            goto label_3c6334;
        }
    }
    ctx->pc = 0x3C6304u;
    // 0x3c6304: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3c6304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6308: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c630c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c630cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6310: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6314: 0x0  nop
    ctx->pc = 0x3c6314u;
    // NOP
    // 0x3c6318: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6318u;
    {
        const bool branch_taken_0x3c6318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6318u;
        // 0x3c631c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6318) {
            ctx->pc = 0x3C6334u;
            goto label_3c6334;
        }
    }
    ctx->pc = 0x3C6320u;
    // 0x3c6320: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c632c:
    // 0x3c632c: 0x450103ba  bc1t        . + 4 + (0x3BA << 2)
    ctx->pc = 0x3C632Cu;
    {
        const bool branch_taken_0x3c632c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c632c) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6334u;
label_3c6334:
    // 0x3c6334: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x3c6334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3c6338: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6338u;
    {
        const bool branch_taken_0x3c6338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6338u;
        // 0x3c633c: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6338) {
            ctx->pc = 0x3C640Cu;
            goto label_3c640c;
        }
    }
    ctx->pc = 0x3C6340u;
    // 0x3c6340: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6344: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x3c6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6348: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c634c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3c634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6350: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6350u;
    {
        const bool branch_taken_0x3c6350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6350u;
        // 0x3c6354: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6350) {
            ctx->pc = 0x3C63B0u;
            goto label_3c63b0;
        }
    }
    ctx->pc = 0x3C6358u;
    // 0x3c6358: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c6358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c635c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c635cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6364: 0x0  nop
    ctx->pc = 0x3c6364u;
    // NOP
    // 0x3c6368: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6368u;
    {
        const bool branch_taken_0x3c6368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6368u;
        // 0x3c636c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6368) {
            ctx->pc = 0x3C640Cu;
            goto label_3c640c;
        }
    }
    ctx->pc = 0x3C6370u;
    // 0x3c6370: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6374: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6378: 0x0  nop
    ctx->pc = 0x3c6378u;
    // NOP
    // 0x3c637c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C637Cu;
    {
        const bool branch_taken_0x3c637c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C637Cu;
        // 0x3c6380: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c637c) {
            ctx->pc = 0x3C640Cu;
            goto label_3c640c;
        }
    }
    ctx->pc = 0x3C6384u;
    // 0x3c6384: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3c6384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6388: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c638c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c638cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6394: 0x0  nop
    ctx->pc = 0x3c6394u;
    // NOP
    // 0x3c6398: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6398u;
    {
        const bool branch_taken_0x3c6398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6398u;
        // 0x3c639c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6398) {
            ctx->pc = 0x3C640Cu;
            goto label_3c640c;
        }
    }
    ctx->pc = 0x3C63A0u;
    // 0x3c63a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c63a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c63a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c63a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c63a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C63A8u;
    {
        const bool branch_taken_0x3c63a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63A8u;
        // 0x3c63ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c63a8) {
            ctx->pc = 0x3C6404u;
            goto label_3c6404;
        }
    }
    ctx->pc = 0x3C63B0u;
label_3c63b0:
    // 0x3c63b0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c63b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c63b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c63b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c63b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c63b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c63bc: 0x0  nop
    ctx->pc = 0x3c63bcu;
    // NOP
    // 0x3c63c0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C63C0u;
    {
        const bool branch_taken_0x3c63c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63C0u;
        // 0x3c63c4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c63c0) {
            ctx->pc = 0x3C640Cu;
            goto label_3c640c;
        }
    }
    ctx->pc = 0x3C63C8u;
    // 0x3c63c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c63c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c63cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c63ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c63d0: 0x0  nop
    ctx->pc = 0x3c63d0u;
    // NOP
    // 0x3c63d4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C63D4u;
    {
        const bool branch_taken_0x3c63d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63D4u;
        // 0x3c63d8: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c63d4) {
            ctx->pc = 0x3C640Cu;
            goto label_3c640c;
        }
    }
    ctx->pc = 0x3C63DCu;
    // 0x3c63dc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3c63dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c63e0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c63e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c63e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c63e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c63e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c63e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c63ec: 0x0  nop
    ctx->pc = 0x3c63ecu;
    // NOP
    // 0x3c63f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C63F0u;
    {
        const bool branch_taken_0x3c63f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63F0u;
        // 0x3c63f4: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c63f0) {
            ctx->pc = 0x3C640Cu;
            goto label_3c640c;
        }
    }
    ctx->pc = 0x3C63F8u;
    // 0x3c63f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c63f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c63fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c63fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6404:
    // 0x3c6404: 0x45010384  bc1t        . + 4 + (0x384 << 2)
    ctx->pc = 0x3C6404u;
    {
        const bool branch_taken_0x3c6404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6404) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C640Cu;
label_3c640c:
    // 0x3c640c: 0x1091024  and         $v0, $t0, $t1
    ctx->pc = 0x3c640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_3c6410:
    // 0x3c6410: 0x1440015f  bnez        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x3C6410u;
    {
        const bool branch_taken_0x3c6410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6410u;
        // 0x3c6414: 0x1491024  and         $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6410) {
            ctx->pc = 0x3C6990u;
            goto label_3c6990;
        }
    }
    ctx->pc = 0x3C6418u;
    // 0x3c6418: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3c6418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c641c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x3c641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c6420: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3c6420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6424: 0x46050181  sub.s       $f6, $f0, $f5
    ctx->pc = 0x3c6424u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3c6428: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x3c6428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c642c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3c642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6430: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x3c6430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6434: 0x46040a01  sub.s       $f8, $f1, $f4
    ctx->pc = 0x3c6434u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3c6438: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x3c6438u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3c643c: 0x46030281  sub.s       $f10, $f0, $f3
    ctx->pc = 0x3c643cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3c6440: 0xe7a80034  swc1        $f8, 0x34($sp)
    ctx->pc = 0x3c6440u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3c6444: 0xe7aa0038  swc1        $f10, 0x38($sp)
    ctx->pc = 0x3c6444u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3c6448: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c6448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c644c: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x3c644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c6450: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x3c6450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x3c6454: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x3c6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6458: 0x460221c1  sub.s       $f7, $f4, $f2
    ctx->pc = 0x3c6458u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3c645c: 0x46011ac1  sub.s       $f11, $f3, $f1
    ctx->pc = 0x3c645cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c6460: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3c6460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c6464: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x3c6464u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c6468: 0xe7ab0048  swc1        $f11, 0x48($sp)
    ctx->pc = 0x3c6468u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3c646c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3c646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6470: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3c6470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c6474: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3c6474u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x3c6478: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3c6478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c647c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x3c647cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3c6480: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x3c6480u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c6484: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x3c6484u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3c6488: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x3c6488u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3c648c: 0x1091026  xor         $v0, $t0, $t1
    ctx->pc = 0x3c648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 9));
    // 0x3c6490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c6490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c6498: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C6498u;
    {
        const bool branch_taken_0x3c6498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6498u;
        // 0x3c649c: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6498) {
            ctx->pc = 0x3C6554u;
            goto label_3c6554;
        }
    }
    ctx->pc = 0x3C64A0u;
    // 0x3c64a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c64a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c64a4: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x3c64a4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x3c64a8: 0x46002a46  mov.s       $f9, $f5
    ctx->pc = 0x3c64a8u;
    ctx->f[9] = FPU_MOV_S(ctx->f[5]);
    // 0x3c64ac: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3c64acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c64b0: 0x0  nop
    ctx->pc = 0x3c64b0u;
    // NOP
    // 0x3c64b4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x3C64B4u;
    {
        const bool branch_taken_0x3c64b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64B4u;
        // 0x3c64b8: 0x46084842  mul.s       $f1, $f9, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c64b4) {
            ctx->pc = 0x3C6508u;
            goto label_3c6508;
        }
    }
    ctx->pc = 0x3C64BCu;
    // 0x3c64bc: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x3c64bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3c64c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c64c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c64c4: 0x0  nop
    ctx->pc = 0x3c64c4u;
    // NOP
    // 0x3c64c8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C64C8u;
    {
        const bool branch_taken_0x3c64c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64C8u;
        // 0x3c64cc: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c64c8) {
            ctx->pc = 0x3C6558u;
            goto label_3c6558;
        }
    }
    ctx->pc = 0x3C64D0u;
    // 0x3c64d0: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x3c64d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x3c64d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c64d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c64d8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x3C64D8u;
    {
        const bool branch_taken_0x3c64d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c64d8) {
            ctx->pc = 0x3C6558u;
            goto label_3c6558;
        }
    }
    ctx->pc = 0x3C64E0u;
    // 0x3c64e0: 0x460a4842  mul.s       $f1, $f9, $f10
    ctx->pc = 0x3c64e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x3c64e4: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3c64e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3c64e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c64e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c64ec: 0x0  nop
    ctx->pc = 0x3c64ecu;
    // NOP
    // 0x3c64f0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x3C64F0u;
    {
        const bool branch_taken_0x3c64f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64F0u;
        // 0x3c64f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c64f0) {
            ctx->pc = 0x3C6554u;
            goto label_3c6554;
        }
    }
    ctx->pc = 0x3C64F8u;
    // 0x3c64f8: 0x46035802  mul.s       $f0, $f11, $f3
    ctx->pc = 0x3c64f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x3c64fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c64fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6500: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6500u;
    {
        const bool branch_taken_0x3c6500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6500) {
            ctx->pc = 0x3C654Cu;
            goto label_3c654c;
        }
    }
    ctx->pc = 0x3C6508u;
label_3c6508:
    // 0x3c6508: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x3c6508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x3c650c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c650cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6510: 0x0  nop
    ctx->pc = 0x3c6510u;
    // NOP
    // 0x3c6514: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x3C6514u;
    {
        const bool branch_taken_0x3c6514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6514u;
        // 0x3c6518: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6514) {
            ctx->pc = 0x3C6558u;
            goto label_3c6558;
        }
    }
    ctx->pc = 0x3C651Cu;
    // 0x3c651c: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x3c651cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x3c6520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6524: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3C6524u;
    {
        const bool branch_taken_0x3c6524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6524) {
            ctx->pc = 0x3C6558u;
            goto label_3c6558;
        }
    }
    ctx->pc = 0x3C652Cu;
    // 0x3c652c: 0x460a2842  mul.s       $f1, $f5, $f10
    ctx->pc = 0x3c652cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x3c6530: 0x46061002  mul.s       $f0, $f2, $f6
    ctx->pc = 0x3c6530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c6534: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6538: 0x0  nop
    ctx->pc = 0x3c6538u;
    // NOP
    // 0x3c653c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C653Cu;
    {
        const bool branch_taken_0x3c653c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C653Cu;
        // 0x3c6540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c653c) {
            ctx->pc = 0x3C6554u;
            goto label_3c6554;
        }
    }
    ctx->pc = 0x3C6544u;
    // 0x3c6544: 0x46065802  mul.s       $f0, $f11, $f6
    ctx->pc = 0x3c6544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x3c6548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c654c:
    // 0x3c654c: 0x45010332  bc1t        . + 4 + (0x332 << 2)
    ctx->pc = 0x3C654Cu;
    {
        const bool branch_taken_0x3c654c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c654c) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6554u;
label_3c6554:
    // 0x3c6554: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3c6554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3c6558:
    // 0x3c6558: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6558u;
    {
        const bool branch_taken_0x3c6558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6558u;
        // 0x3c655c: 0xc7a20030  lwc1        $f2, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6558) {
            ctx->pc = 0x3C662Cu;
            goto label_3c662c;
        }
    }
    ctx->pc = 0x3C6560u;
    // 0x3c6560: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6564: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3c6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6568: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c656c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3c656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6570: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6570u;
    {
        const bool branch_taken_0x3c6570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6570u;
        // 0x3c6574: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6570) {
            ctx->pc = 0x3C65D0u;
            goto label_3c65d0;
        }
    }
    ctx->pc = 0x3C6578u;
    // 0x3c6578: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3c6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c657c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c657cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6584: 0x0  nop
    ctx->pc = 0x3c6584u;
    // NOP
    // 0x3c6588: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6588u;
    {
        const bool branch_taken_0x3c6588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6588u;
        // 0x3c658c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6588) {
            ctx->pc = 0x3C662Cu;
            goto label_3c662c;
        }
    }
    ctx->pc = 0x3C6590u;
    // 0x3c6590: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6594: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6598: 0x0  nop
    ctx->pc = 0x3c6598u;
    // NOP
    // 0x3c659c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C659Cu;
    {
        const bool branch_taken_0x3c659c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C659Cu;
        // 0x3c65a0: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c659c) {
            ctx->pc = 0x3C662Cu;
            goto label_3c662c;
        }
    }
    ctx->pc = 0x3C65A4u;
    // 0x3c65a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3c65a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c65a8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c65a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c65ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c65acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c65b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c65b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c65b4: 0x0  nop
    ctx->pc = 0x3c65b4u;
    // NOP
    // 0x3c65b8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C65B8u;
    {
        const bool branch_taken_0x3c65b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C65B8u;
        // 0x3c65bc: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c65b8) {
            ctx->pc = 0x3C662Cu;
            goto label_3c662c;
        }
    }
    ctx->pc = 0x3C65C0u;
    // 0x3c65c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c65c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c65c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c65c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c65c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C65C8u;
    {
        const bool branch_taken_0x3c65c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C65C8u;
        // 0x3c65cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c65c8) {
            ctx->pc = 0x3C6624u;
            goto label_3c6624;
        }
    }
    ctx->pc = 0x3C65D0u;
label_3c65d0:
    // 0x3c65d0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3c65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c65d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c65d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c65d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c65d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c65dc: 0x0  nop
    ctx->pc = 0x3c65dcu;
    // NOP
    // 0x3c65e0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C65E0u;
    {
        const bool branch_taken_0x3c65e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C65E0u;
        // 0x3c65e4: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c65e0) {
            ctx->pc = 0x3C662Cu;
            goto label_3c662c;
        }
    }
    ctx->pc = 0x3C65E8u;
    // 0x3c65e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c65e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c65ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c65ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c65f0: 0x0  nop
    ctx->pc = 0x3c65f0u;
    // NOP
    // 0x3c65f4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C65F4u;
    {
        const bool branch_taken_0x3c65f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C65F4u;
        // 0x3c65f8: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c65f4) {
            ctx->pc = 0x3C662Cu;
            goto label_3c662c;
        }
    }
    ctx->pc = 0x3C65FCu;
    // 0x3c65fc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3c65fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6600: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6604: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6608: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c660c: 0x0  nop
    ctx->pc = 0x3c660cu;
    // NOP
    // 0x3c6610: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6610u;
    {
        const bool branch_taken_0x3c6610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6610u;
        // 0x3c6614: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6610) {
            ctx->pc = 0x3C662Cu;
            goto label_3c662c;
        }
    }
    ctx->pc = 0x3C6618u;
    // 0x3c6618: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c661c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c661cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6624:
    // 0x3c6624: 0x450102fc  bc1t        . + 4 + (0x2FC << 2)
    ctx->pc = 0x3C6624u;
    {
        const bool branch_taken_0x3c6624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6624) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C662Cu;
label_3c662c:
    // 0x3c662c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3c662cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3c6630: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6630u;
    {
        const bool branch_taken_0x3c6630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6630u;
        // 0x3c6634: 0xc7a20034  lwc1        $f2, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6630) {
            ctx->pc = 0x3C6704u;
            goto label_3c6704;
        }
    }
    ctx->pc = 0x3C6638u;
    // 0x3c6638: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c663c: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x3c663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6640: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6644: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3c6644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6648: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6648u;
    {
        const bool branch_taken_0x3c6648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6648u;
        // 0x3c664c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6648) {
            ctx->pc = 0x3C66A8u;
            goto label_3c66a8;
        }
    }
    ctx->pc = 0x3C6650u;
    // 0x3c6650: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3c6650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6654: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c665c: 0x0  nop
    ctx->pc = 0x3c665cu;
    // NOP
    // 0x3c6660: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6660u;
    {
        const bool branch_taken_0x3c6660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6660u;
        // 0x3c6664: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6660) {
            ctx->pc = 0x3C6704u;
            goto label_3c6704;
        }
    }
    ctx->pc = 0x3C6668u;
    // 0x3c6668: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c666c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c666cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6670: 0x0  nop
    ctx->pc = 0x3c6670u;
    // NOP
    // 0x3c6674: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C6674u;
    {
        const bool branch_taken_0x3c6674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6674u;
        // 0x3c6678: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6674) {
            ctx->pc = 0x3C6704u;
            goto label_3c6704;
        }
    }
    ctx->pc = 0x3C667Cu;
    // 0x3c667c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3c667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6680: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6684: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c668c: 0x0  nop
    ctx->pc = 0x3c668cu;
    // NOP
    // 0x3c6690: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6690u;
    {
        const bool branch_taken_0x3c6690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6690u;
        // 0x3c6694: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6690) {
            ctx->pc = 0x3C6704u;
            goto label_3c6704;
        }
    }
    ctx->pc = 0x3C6698u;
    // 0x3c6698: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c669c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c669cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c66a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C66A0u;
    {
        const bool branch_taken_0x3c66a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66A0u;
        // 0x3c66a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c66a0) {
            ctx->pc = 0x3C66FCu;
            goto label_3c66fc;
        }
    }
    ctx->pc = 0x3C66A8u;
label_3c66a8:
    // 0x3c66a8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3c66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c66ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c66acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c66b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c66b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c66b4: 0x0  nop
    ctx->pc = 0x3c66b4u;
    // NOP
    // 0x3c66b8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C66B8u;
    {
        const bool branch_taken_0x3c66b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66B8u;
        // 0x3c66bc: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c66b8) {
            ctx->pc = 0x3C6704u;
            goto label_3c6704;
        }
    }
    ctx->pc = 0x3C66C0u;
    // 0x3c66c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c66c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c66c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c66c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c66c8: 0x0  nop
    ctx->pc = 0x3c66c8u;
    // NOP
    // 0x3c66cc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C66CCu;
    {
        const bool branch_taken_0x3c66cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66CCu;
        // 0x3c66d0: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c66cc) {
            ctx->pc = 0x3C6704u;
            goto label_3c6704;
        }
    }
    ctx->pc = 0x3C66D4u;
    // 0x3c66d4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3c66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c66d8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c66d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c66dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c66dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c66e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c66e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c66e4: 0x0  nop
    ctx->pc = 0x3c66e4u;
    // NOP
    // 0x3c66e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C66E8u;
    {
        const bool branch_taken_0x3c66e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66E8u;
        // 0x3c66ec: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c66e8) {
            ctx->pc = 0x3C6704u;
            goto label_3c6704;
        }
    }
    ctx->pc = 0x3C66F0u;
    // 0x3c66f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c66f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c66f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c66f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c66f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c66fc:
    // 0x3c66fc: 0x450102c6  bc1t        . + 4 + (0x2C6 << 2)
    ctx->pc = 0x3C66FCu;
    {
        const bool branch_taken_0x3c66fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c66fc) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6704u;
label_3c6704:
    // 0x3c6704: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3c6704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3c6708: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6708u;
    {
        const bool branch_taken_0x3c6708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6708u;
        // 0x3c670c: 0xc7a20034  lwc1        $f2, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6708) {
            ctx->pc = 0x3C67DCu;
            goto label_3c67dc;
        }
    }
    ctx->pc = 0x3C6710u;
    // 0x3c6710: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6714: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3c6714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6718: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c671c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3c671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6720: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6720u;
    {
        const bool branch_taken_0x3c6720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6720u;
        // 0x3c6724: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6720) {
            ctx->pc = 0x3C6780u;
            goto label_3c6780;
        }
    }
    ctx->pc = 0x3C6728u;
    // 0x3c6728: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3c6728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c672c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c672cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6730: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6734: 0x0  nop
    ctx->pc = 0x3c6734u;
    // NOP
    // 0x3c6738: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6738u;
    {
        const bool branch_taken_0x3c6738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6738u;
        // 0x3c673c: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6738) {
            ctx->pc = 0x3C67DCu;
            goto label_3c67dc;
        }
    }
    ctx->pc = 0x3C6740u;
    // 0x3c6740: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6744: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6748: 0x0  nop
    ctx->pc = 0x3c6748u;
    // NOP
    // 0x3c674c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C674Cu;
    {
        const bool branch_taken_0x3c674c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C674Cu;
        // 0x3c6750: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c674c) {
            ctx->pc = 0x3C67DCu;
            goto label_3c67dc;
        }
    }
    ctx->pc = 0x3C6754u;
    // 0x3c6754: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3c6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6758: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c675c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c675cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6760: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6764: 0x0  nop
    ctx->pc = 0x3c6764u;
    // NOP
    // 0x3c6768: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6768u;
    {
        const bool branch_taken_0x3c6768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6768u;
        // 0x3c676c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6768) {
            ctx->pc = 0x3C67DCu;
            goto label_3c67dc;
        }
    }
    ctx->pc = 0x3C6770u;
    // 0x3c6770: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6774: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6778: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6778u;
    {
        const bool branch_taken_0x3c6778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6778u;
        // 0x3c677c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6778) {
            ctx->pc = 0x3C67D4u;
            goto label_3c67d4;
        }
    }
    ctx->pc = 0x3C6780u;
label_3c6780:
    // 0x3c6780: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3c6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6784: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6788: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c678c: 0x0  nop
    ctx->pc = 0x3c678cu;
    // NOP
    // 0x3c6790: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6790u;
    {
        const bool branch_taken_0x3c6790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6790u;
        // 0x3c6794: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6790) {
            ctx->pc = 0x3C67DCu;
            goto label_3c67dc;
        }
    }
    ctx->pc = 0x3C6798u;
    // 0x3c6798: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c679c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c679cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c67a0: 0x0  nop
    ctx->pc = 0x3c67a0u;
    // NOP
    // 0x3c67a4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C67A4u;
    {
        const bool branch_taken_0x3c67a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67A4u;
        // 0x3c67a8: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67a4) {
            ctx->pc = 0x3C67DCu;
            goto label_3c67dc;
        }
    }
    ctx->pc = 0x3C67ACu;
    // 0x3c67ac: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3c67acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c67b0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c67b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c67b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c67b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c67b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c67b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c67bc: 0x0  nop
    ctx->pc = 0x3c67bcu;
    // NOP
    // 0x3c67c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C67C0u;
    {
        const bool branch_taken_0x3c67c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67C0u;
        // 0x3c67c4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67c0) {
            ctx->pc = 0x3C67DCu;
            goto label_3c67dc;
        }
    }
    ctx->pc = 0x3C67C8u;
    // 0x3c67c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c67c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c67cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c67ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c67d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c67d4:
    // 0x3c67d4: 0x45010290  bc1t        . + 4 + (0x290 << 2)
    ctx->pc = 0x3C67D4u;
    {
        const bool branch_taken_0x3c67d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c67d4) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C67DCu;
label_3c67dc:
    // 0x3c67dc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3c67dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3c67e0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C67E0u;
    {
        const bool branch_taken_0x3c67e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67E0u;
        // 0x3c67e4: 0xc7a20038  lwc1        $f2, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67e0) {
            ctx->pc = 0x3C68B4u;
            goto label_3c68b4;
        }
    }
    ctx->pc = 0x3C67E8u;
    // 0x3c67e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c67e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c67ec: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x3c67ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c67f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c67f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c67f4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3c67f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c67f8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C67F8u;
    {
        const bool branch_taken_0x3c67f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67F8u;
        // 0x3c67fc: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67f8) {
            ctx->pc = 0x3C6858u;
            goto label_3c6858;
        }
    }
    ctx->pc = 0x3C6800u;
    // 0x3c6800: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3c6800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6804: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6808: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c680c: 0x0  nop
    ctx->pc = 0x3c680cu;
    // NOP
    // 0x3c6810: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6810u;
    {
        const bool branch_taken_0x3c6810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6810u;
        // 0x3c6814: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6810) {
            ctx->pc = 0x3C68B4u;
            goto label_3c68b4;
        }
    }
    ctx->pc = 0x3C6818u;
    // 0x3c6818: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c681c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c681cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6820: 0x0  nop
    ctx->pc = 0x3c6820u;
    // NOP
    // 0x3c6824: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C6824u;
    {
        const bool branch_taken_0x3c6824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6824u;
        // 0x3c6828: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6824) {
            ctx->pc = 0x3C68B4u;
            goto label_3c68b4;
        }
    }
    ctx->pc = 0x3C682Cu;
    // 0x3c682c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3c682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6830: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6834: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6838: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c683c: 0x0  nop
    ctx->pc = 0x3c683cu;
    // NOP
    // 0x3c6840: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6840u;
    {
        const bool branch_taken_0x3c6840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6840u;
        // 0x3c6844: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6840) {
            ctx->pc = 0x3C68B4u;
            goto label_3c68b4;
        }
    }
    ctx->pc = 0x3C6848u;
    // 0x3c6848: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c684c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c684cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6850: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6850u;
    {
        const bool branch_taken_0x3c6850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6850u;
        // 0x3c6854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6850) {
            ctx->pc = 0x3C68ACu;
            goto label_3c68ac;
        }
    }
    ctx->pc = 0x3C6858u;
label_3c6858:
    // 0x3c6858: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3c6858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c685c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c685cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6860: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6864: 0x0  nop
    ctx->pc = 0x3c6864u;
    // NOP
    // 0x3c6868: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6868u;
    {
        const bool branch_taken_0x3c6868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6868u;
        // 0x3c686c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6868) {
            ctx->pc = 0x3C68B4u;
            goto label_3c68b4;
        }
    }
    ctx->pc = 0x3C6870u;
    // 0x3c6870: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6878: 0x0  nop
    ctx->pc = 0x3c6878u;
    // NOP
    // 0x3c687c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C687Cu;
    {
        const bool branch_taken_0x3c687c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C687Cu;
        // 0x3c6880: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c687c) {
            ctx->pc = 0x3C68B4u;
            goto label_3c68b4;
        }
    }
    ctx->pc = 0x3C6884u;
    // 0x3c6884: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3c6884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6888: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c688c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c688cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6890: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6894: 0x0  nop
    ctx->pc = 0x3c6894u;
    // NOP
    // 0x3c6898: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6898u;
    {
        const bool branch_taken_0x3c6898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6898u;
        // 0x3c689c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6898) {
            ctx->pc = 0x3C68B4u;
            goto label_3c68b4;
        }
    }
    ctx->pc = 0x3C68A0u;
    // 0x3c68a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c68a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c68a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c68a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c68a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c68ac:
    // 0x3c68ac: 0x4501025a  bc1t        . + 4 + (0x25A << 2)
    ctx->pc = 0x3C68ACu;
    {
        const bool branch_taken_0x3c68ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c68ac) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C68B4u;
label_3c68b4:
    // 0x3c68b4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x3c68b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3c68b8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C68B8u;
    {
        const bool branch_taken_0x3c68b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68B8u;
        // 0x3c68bc: 0xc7a20038  lwc1        $f2, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68b8) {
            ctx->pc = 0x3C698Cu;
            goto label_3c698c;
        }
    }
    ctx->pc = 0x3C68C0u;
    // 0x3c68c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c68c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c68c4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x3c68c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c68c8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c68c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c68cc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3c68ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c68d0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C68D0u;
    {
        const bool branch_taken_0x3c68d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68D0u;
        // 0x3c68d4: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68d0) {
            ctx->pc = 0x3C6930u;
            goto label_3c6930;
        }
    }
    ctx->pc = 0x3C68D8u;
    // 0x3c68d8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3c68d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c68dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c68dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c68e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c68e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c68e4: 0x0  nop
    ctx->pc = 0x3c68e4u;
    // NOP
    // 0x3c68e8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C68E8u;
    {
        const bool branch_taken_0x3c68e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68E8u;
        // 0x3c68ec: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68e8) {
            ctx->pc = 0x3C698Cu;
            goto label_3c698c;
        }
    }
    ctx->pc = 0x3C68F0u;
    // 0x3c68f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c68f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c68f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c68f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c68f8: 0x0  nop
    ctx->pc = 0x3c68f8u;
    // NOP
    // 0x3c68fc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C68FCu;
    {
        const bool branch_taken_0x3c68fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68FCu;
        // 0x3c6900: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68fc) {
            ctx->pc = 0x3C698Cu;
            goto label_3c698c;
        }
    }
    ctx->pc = 0x3C6904u;
    // 0x3c6904: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3c6904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6908: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c690c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c690cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6910: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6914: 0x0  nop
    ctx->pc = 0x3c6914u;
    // NOP
    // 0x3c6918: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6918u;
    {
        const bool branch_taken_0x3c6918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6918u;
        // 0x3c691c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6918) {
            ctx->pc = 0x3C698Cu;
            goto label_3c698c;
        }
    }
    ctx->pc = 0x3C6920u;
    // 0x3c6920: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6924: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6928: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6928u;
    {
        const bool branch_taken_0x3c6928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6928u;
        // 0x3c692c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6928) {
            ctx->pc = 0x3C6984u;
            goto label_3c6984;
        }
    }
    ctx->pc = 0x3C6930u;
label_3c6930:
    // 0x3c6930: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3c6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6934: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c693c: 0x0  nop
    ctx->pc = 0x3c693cu;
    // NOP
    // 0x3c6940: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6940u;
    {
        const bool branch_taken_0x3c6940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6940u;
        // 0x3c6944: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6940) {
            ctx->pc = 0x3C698Cu;
            goto label_3c698c;
        }
    }
    ctx->pc = 0x3C6948u;
    // 0x3c6948: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c694c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c694cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6950: 0x0  nop
    ctx->pc = 0x3c6950u;
    // NOP
    // 0x3c6954: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C6954u;
    {
        const bool branch_taken_0x3c6954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6954u;
        // 0x3c6958: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6954) {
            ctx->pc = 0x3C698Cu;
            goto label_3c698c;
        }
    }
    ctx->pc = 0x3C695Cu;
    // 0x3c695c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3c695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6960: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6964: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6968: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c696c: 0x0  nop
    ctx->pc = 0x3c696cu;
    // NOP
    // 0x3c6970: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6970u;
    {
        const bool branch_taken_0x3c6970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6970u;
        // 0x3c6974: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6970) {
            ctx->pc = 0x3C698Cu;
            goto label_3c698c;
        }
    }
    ctx->pc = 0x3C6978u;
    // 0x3c6978: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c697c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c697cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6984:
    // 0x3c6984: 0x45010224  bc1t        . + 4 + (0x224 << 2)
    ctx->pc = 0x3C6984u;
    {
        const bool branch_taken_0x3c6984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6984) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C698Cu;
label_3c698c:
    // 0x3c698c: 0x1491024  and         $v0, $t2, $t1
    ctx->pc = 0x3c698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_3c6990:
    // 0x3c6990: 0x5440015f  bnel        $v0, $zero, . + 4 + (0x15F << 2)
    ctx->pc = 0x3C6990u;
    {
        const bool branch_taken_0x3c6990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6990) {
            ctx->pc = 0x3C6994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6990u;
            // 0x3c6994: 0xc4c60008  lwc1        $f6, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6F10u;
            goto label_3c6f10;
        }
    }
    ctx->pc = 0x3C6998u;
    // 0x3c6998: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3c6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c699c: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x3c699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c69a0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3c69a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c69a4: 0x46050181  sub.s       $f6, $f0, $f5
    ctx->pc = 0x3c69a4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3c69a8: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x3c69a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c69ac: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3c69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c69b0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x3c69b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c69b4: 0x46040a01  sub.s       $f8, $f1, $f4
    ctx->pc = 0x3c69b4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3c69b8: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x3c69b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3c69bc: 0x46030281  sub.s       $f10, $f0, $f3
    ctx->pc = 0x3c69bcu;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3c69c0: 0xe7a80064  swc1        $f8, 0x64($sp)
    ctx->pc = 0x3c69c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3c69c4: 0xe7aa0068  swc1        $f10, 0x68($sp)
    ctx->pc = 0x3c69c4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3c69c8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c69c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c69cc: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x3c69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c69d0: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x3c69d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x3c69d4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x3c69d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c69d8: 0x460221c1  sub.s       $f7, $f4, $f2
    ctx->pc = 0x3c69d8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3c69dc: 0x46011ac1  sub.s       $f11, $f3, $f1
    ctx->pc = 0x3c69dcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c69e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3c69e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3c69e4: 0xe7a70074  swc1        $f7, 0x74($sp)
    ctx->pc = 0x3c69e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3c69e8: 0xe7ab0078  swc1        $f11, 0x78($sp)
    ctx->pc = 0x3c69e8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3c69ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3c69ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c69f0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3c69f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c69f4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3c69f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x3c69f8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3c69f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c69fc: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x3c69fcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3c6a00: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x3c6a00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c6a04: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x3c6a04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3c6a08: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x3c6a08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3c6a0c: 0x1491026  xor         $v0, $t2, $t1
    ctx->pc = 0x3c6a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x3c6a10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c6a10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c6a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c6a18: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C6A18u;
    {
        const bool branch_taken_0x3c6a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A18u;
        // 0x3c6a1c: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6a18) {
            ctx->pc = 0x3C6AD4u;
            goto label_3c6ad4;
        }
    }
    ctx->pc = 0x3C6A20u;
    // 0x3c6a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c6a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c6a24: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x3c6a24u;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x3c6a28: 0x46002a46  mov.s       $f9, $f5
    ctx->pc = 0x3c6a28u;
    ctx->f[9] = FPU_MOV_S(ctx->f[5]);
    // 0x3c6a2c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3c6a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6a30: 0x0  nop
    ctx->pc = 0x3c6a30u;
    // NOP
    // 0x3c6a34: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x3C6A34u;
    {
        const bool branch_taken_0x3c6a34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A34u;
        // 0x3c6a38: 0x46084842  mul.s       $f1, $f9, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6a34) {
            ctx->pc = 0x3C6A88u;
            goto label_3c6a88;
        }
    }
    ctx->pc = 0x3C6A3Cu;
    // 0x3c6a3c: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x3c6a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3c6a40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6a44: 0x0  nop
    ctx->pc = 0x3c6a44u;
    // NOP
    // 0x3c6a48: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C6A48u;
    {
        const bool branch_taken_0x3c6a48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A48u;
        // 0x3c6a4c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6a48) {
            ctx->pc = 0x3C6AD8u;
            goto label_3c6ad8;
        }
    }
    ctx->pc = 0x3C6A50u;
    // 0x3c6a50: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x3c6a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x3c6a54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6a58: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x3C6A58u;
    {
        const bool branch_taken_0x3c6a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6a58) {
            ctx->pc = 0x3C6AD8u;
            goto label_3c6ad8;
        }
    }
    ctx->pc = 0x3C6A60u;
    // 0x3c6a60: 0x460a4842  mul.s       $f1, $f9, $f10
    ctx->pc = 0x3c6a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x3c6a64: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3c6a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3c6a68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6a6c: 0x0  nop
    ctx->pc = 0x3c6a6cu;
    // NOP
    // 0x3c6a70: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x3C6A70u;
    {
        const bool branch_taken_0x3c6a70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A70u;
        // 0x3c6a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6a70) {
            ctx->pc = 0x3C6AD4u;
            goto label_3c6ad4;
        }
    }
    ctx->pc = 0x3C6A78u;
    // 0x3c6a78: 0x46035802  mul.s       $f0, $f11, $f3
    ctx->pc = 0x3c6a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x3c6a7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6a80: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6A80u;
    {
        const bool branch_taken_0x3c6a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6a80) {
            ctx->pc = 0x3C6ACCu;
            goto label_3c6acc;
        }
    }
    ctx->pc = 0x3C6A88u;
label_3c6a88:
    // 0x3c6a88: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x3c6a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x3c6a8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6a8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6a90: 0x0  nop
    ctx->pc = 0x3c6a90u;
    // NOP
    // 0x3c6a94: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x3C6A94u;
    {
        const bool branch_taken_0x3c6a94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A94u;
        // 0x3c6a98: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6a94) {
            ctx->pc = 0x3C6AD8u;
            goto label_3c6ad8;
        }
    }
    ctx->pc = 0x3C6A9Cu;
    // 0x3c6a9c: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x3c6a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x3c6aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6aa4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3C6AA4u;
    {
        const bool branch_taken_0x3c6aa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6aa4) {
            ctx->pc = 0x3C6AD8u;
            goto label_3c6ad8;
        }
    }
    ctx->pc = 0x3C6AACu;
    // 0x3c6aac: 0x460a2842  mul.s       $f1, $f5, $f10
    ctx->pc = 0x3c6aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x3c6ab0: 0x46061002  mul.s       $f0, $f2, $f6
    ctx->pc = 0x3c6ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c6ab4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6ab8: 0x0  nop
    ctx->pc = 0x3c6ab8u;
    // NOP
    // 0x3c6abc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C6ABCu;
    {
        const bool branch_taken_0x3c6abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6ABCu;
        // 0x3c6ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6abc) {
            ctx->pc = 0x3C6AD4u;
            goto label_3c6ad4;
        }
    }
    ctx->pc = 0x3C6AC4u;
    // 0x3c6ac4: 0x46065802  mul.s       $f0, $f11, $f6
    ctx->pc = 0x3c6ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x3c6ac8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6acc:
    // 0x3c6acc: 0x450101d2  bc1t        . + 4 + (0x1D2 << 2)
    ctx->pc = 0x3C6ACCu;
    {
        const bool branch_taken_0x3c6acc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6acc) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6AD4u;
label_3c6ad4:
    // 0x3c6ad4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3c6ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3c6ad8:
    // 0x3c6ad8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6AD8u;
    {
        const bool branch_taken_0x3c6ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AD8u;
        // 0x3c6adc: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ad8) {
            ctx->pc = 0x3C6BACu;
            goto label_3c6bac;
        }
    }
    ctx->pc = 0x3C6AE0u;
    // 0x3c6ae0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6ae4: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x3c6ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6ae8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6aec: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x3c6aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6af0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6AF0u;
    {
        const bool branch_taken_0x3c6af0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AF0u;
        // 0x3c6af4: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6af0) {
            ctx->pc = 0x3C6B50u;
            goto label_3c6b50;
        }
    }
    ctx->pc = 0x3C6AF8u;
    // 0x3c6af8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3c6af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6afc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6b00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6b04: 0x0  nop
    ctx->pc = 0x3c6b04u;
    // NOP
    // 0x3c6b08: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6B08u;
    {
        const bool branch_taken_0x3c6b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B08u;
        // 0x3c6b0c: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b08) {
            ctx->pc = 0x3C6BACu;
            goto label_3c6bac;
        }
    }
    ctx->pc = 0x3C6B10u;
    // 0x3c6b10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6b14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6b18: 0x0  nop
    ctx->pc = 0x3c6b18u;
    // NOP
    // 0x3c6b1c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C6B1Cu;
    {
        const bool branch_taken_0x3c6b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B1Cu;
        // 0x3c6b20: 0xc7a10068  lwc1        $f1, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b1c) {
            ctx->pc = 0x3C6BACu;
            goto label_3c6bac;
        }
    }
    ctx->pc = 0x3C6B24u;
    // 0x3c6b24: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3c6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6b28: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6b2c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6b30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6b34: 0x0  nop
    ctx->pc = 0x3c6b34u;
    // NOP
    // 0x3c6b38: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6B38u;
    {
        const bool branch_taken_0x3c6b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B38u;
        // 0x3c6b3c: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b38) {
            ctx->pc = 0x3C6BACu;
            goto label_3c6bac;
        }
    }
    ctx->pc = 0x3C6B40u;
    // 0x3c6b40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6b44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6b48: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6B48u;
    {
        const bool branch_taken_0x3c6b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B48u;
        // 0x3c6b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b48) {
            ctx->pc = 0x3C6BA4u;
            goto label_3c6ba4;
        }
    }
    ctx->pc = 0x3C6B50u;
label_3c6b50:
    // 0x3c6b50: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3c6b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6b54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6b58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6b5c: 0x0  nop
    ctx->pc = 0x3c6b5cu;
    // NOP
    // 0x3c6b60: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6B60u;
    {
        const bool branch_taken_0x3c6b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B60u;
        // 0x3c6b64: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b60) {
            ctx->pc = 0x3C6BACu;
            goto label_3c6bac;
        }
    }
    ctx->pc = 0x3C6B68u;
    // 0x3c6b68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6b6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6b70: 0x0  nop
    ctx->pc = 0x3c6b70u;
    // NOP
    // 0x3c6b74: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C6B74u;
    {
        const bool branch_taken_0x3c6b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B74u;
        // 0x3c6b78: 0xc7a10068  lwc1        $f1, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b74) {
            ctx->pc = 0x3C6BACu;
            goto label_3c6bac;
        }
    }
    ctx->pc = 0x3C6B7Cu;
    // 0x3c6b7c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3c6b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6b80: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6b84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6b88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6b8c: 0x0  nop
    ctx->pc = 0x3c6b8cu;
    // NOP
    // 0x3c6b90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6B90u;
    {
        const bool branch_taken_0x3c6b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B90u;
        // 0x3c6b94: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b90) {
            ctx->pc = 0x3C6BACu;
            goto label_3c6bac;
        }
    }
    ctx->pc = 0x3C6B98u;
    // 0x3c6b98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6ba4:
    // 0x3c6ba4: 0x4501019c  bc1t        . + 4 + (0x19C << 2)
    ctx->pc = 0x3C6BA4u;
    {
        const bool branch_taken_0x3c6ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6ba4) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6BACu;
label_3c6bac:
    // 0x3c6bac: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3c6bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3c6bb0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6BB0u;
    {
        const bool branch_taken_0x3c6bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BB0u;
        // 0x3c6bb4: 0xc7a20064  lwc1        $f2, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6bb0) {
            ctx->pc = 0x3C6C84u;
            goto label_3c6c84;
        }
    }
    ctx->pc = 0x3C6BB8u;
    // 0x3c6bb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6bbc: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x3c6bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6bc0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6bc4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x3c6bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6bc8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6BC8u;
    {
        const bool branch_taken_0x3c6bc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BC8u;
        // 0x3c6bcc: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6bc8) {
            ctx->pc = 0x3C6C28u;
            goto label_3c6c28;
        }
    }
    ctx->pc = 0x3C6BD0u;
    // 0x3c6bd0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3c6bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6bd4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6bdc: 0x0  nop
    ctx->pc = 0x3c6bdcu;
    // NOP
    // 0x3c6be0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6BE0u;
    {
        const bool branch_taken_0x3c6be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BE0u;
        // 0x3c6be4: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6be0) {
            ctx->pc = 0x3C6C84u;
            goto label_3c6c84;
        }
    }
    ctx->pc = 0x3C6BE8u;
    // 0x3c6be8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6bec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6bf0: 0x0  nop
    ctx->pc = 0x3c6bf0u;
    // NOP
    // 0x3c6bf4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C6BF4u;
    {
        const bool branch_taken_0x3c6bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BF4u;
        // 0x3c6bf8: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6bf4) {
            ctx->pc = 0x3C6C84u;
            goto label_3c6c84;
        }
    }
    ctx->pc = 0x3C6BFCu;
    // 0x3c6bfc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3c6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6c00: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6c04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6c0c: 0x0  nop
    ctx->pc = 0x3c6c0cu;
    // NOP
    // 0x3c6c10: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6C10u;
    {
        const bool branch_taken_0x3c6c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C10u;
        // 0x3c6c14: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c10) {
            ctx->pc = 0x3C6C84u;
            goto label_3c6c84;
        }
    }
    ctx->pc = 0x3C6C18u;
    // 0x3c6c18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6c1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6c20: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6C20u;
    {
        const bool branch_taken_0x3c6c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C20u;
        // 0x3c6c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c20) {
            ctx->pc = 0x3C6C7Cu;
            goto label_3c6c7c;
        }
    }
    ctx->pc = 0x3C6C28u;
label_3c6c28:
    // 0x3c6c28: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3c6c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6c2c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6c30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6c34: 0x0  nop
    ctx->pc = 0x3c6c34u;
    // NOP
    // 0x3c6c38: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6C38u;
    {
        const bool branch_taken_0x3c6c38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C38u;
        // 0x3c6c3c: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c38) {
            ctx->pc = 0x3C6C84u;
            goto label_3c6c84;
        }
    }
    ctx->pc = 0x3C6C40u;
    // 0x3c6c40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6c48: 0x0  nop
    ctx->pc = 0x3c6c48u;
    // NOP
    // 0x3c6c4c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C6C4Cu;
    {
        const bool branch_taken_0x3c6c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C4Cu;
        // 0x3c6c50: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c4c) {
            ctx->pc = 0x3C6C84u;
            goto label_3c6c84;
        }
    }
    ctx->pc = 0x3C6C54u;
    // 0x3c6c54: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3c6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6c58: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6c58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6c5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6c60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6c64: 0x0  nop
    ctx->pc = 0x3c6c64u;
    // NOP
    // 0x3c6c68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6C68u;
    {
        const bool branch_taken_0x3c6c68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C68u;
        // 0x3c6c6c: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c68) {
            ctx->pc = 0x3C6C84u;
            goto label_3c6c84;
        }
    }
    ctx->pc = 0x3C6C70u;
    // 0x3c6c70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6c74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6c74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6c7c:
    // 0x3c6c7c: 0x45010166  bc1t        . + 4 + (0x166 << 2)
    ctx->pc = 0x3C6C7Cu;
    {
        const bool branch_taken_0x3c6c7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6c7c) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6C84u;
label_3c6c84:
    // 0x3c6c84: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3c6c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3c6c88: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6C88u;
    {
        const bool branch_taken_0x3c6c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C88u;
        // 0x3c6c8c: 0xc7a20064  lwc1        $f2, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c88) {
            ctx->pc = 0x3C6D5Cu;
            goto label_3c6d5c;
        }
    }
    ctx->pc = 0x3C6C90u;
    // 0x3c6c90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6c94: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x3c6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6c98: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6c9c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x3c6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6ca0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6CA0u;
    {
        const bool branch_taken_0x3c6ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CA0u;
        // 0x3c6ca4: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ca0) {
            ctx->pc = 0x3C6D00u;
            goto label_3c6d00;
        }
    }
    ctx->pc = 0x3C6CA8u;
    // 0x3c6ca8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3c6ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6cac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6cb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6cb4: 0x0  nop
    ctx->pc = 0x3c6cb4u;
    // NOP
    // 0x3c6cb8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6CB8u;
    {
        const bool branch_taken_0x3c6cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CB8u;
        // 0x3c6cbc: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6cb8) {
            ctx->pc = 0x3C6D5Cu;
            goto label_3c6d5c;
        }
    }
    ctx->pc = 0x3C6CC0u;
    // 0x3c6cc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6cc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6cc8: 0x0  nop
    ctx->pc = 0x3c6cc8u;
    // NOP
    // 0x3c6ccc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C6CCCu;
    {
        const bool branch_taken_0x3c6ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CCCu;
        // 0x3c6cd0: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ccc) {
            ctx->pc = 0x3C6D5Cu;
            goto label_3c6d5c;
        }
    }
    ctx->pc = 0x3C6CD4u;
    // 0x3c6cd4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3c6cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6cd8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6cdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6ce0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6ce4: 0x0  nop
    ctx->pc = 0x3c6ce4u;
    // NOP
    // 0x3c6ce8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6CE8u;
    {
        const bool branch_taken_0x3c6ce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CE8u;
        // 0x3c6cec: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ce8) {
            ctx->pc = 0x3C6D5Cu;
            goto label_3c6d5c;
        }
    }
    ctx->pc = 0x3C6CF0u;
    // 0x3c6cf0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6cf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6cf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6CF8u;
    {
        const bool branch_taken_0x3c6cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CF8u;
        // 0x3c6cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6cf8) {
            ctx->pc = 0x3C6D54u;
            goto label_3c6d54;
        }
    }
    ctx->pc = 0x3C6D00u;
label_3c6d00:
    // 0x3c6d00: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3c6d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6d04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6d08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6d0c: 0x0  nop
    ctx->pc = 0x3c6d0cu;
    // NOP
    // 0x3c6d10: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6D10u;
    {
        const bool branch_taken_0x3c6d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D10u;
        // 0x3c6d14: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d10) {
            ctx->pc = 0x3C6D5Cu;
            goto label_3c6d5c;
        }
    }
    ctx->pc = 0x3C6D18u;
    // 0x3c6d18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6d1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6d20: 0x0  nop
    ctx->pc = 0x3c6d20u;
    // NOP
    // 0x3c6d24: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C6D24u;
    {
        const bool branch_taken_0x3c6d24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D24u;
        // 0x3c6d28: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d24) {
            ctx->pc = 0x3C6D5Cu;
            goto label_3c6d5c;
        }
    }
    ctx->pc = 0x3C6D2Cu;
    // 0x3c6d2c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3c6d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6d30: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6d30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6d34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6d38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6d38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6d3c: 0x0  nop
    ctx->pc = 0x3c6d3cu;
    // NOP
    // 0x3c6d40: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6D40u;
    {
        const bool branch_taken_0x3c6d40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D40u;
        // 0x3c6d44: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d40) {
            ctx->pc = 0x3C6D5Cu;
            goto label_3c6d5c;
        }
    }
    ctx->pc = 0x3C6D48u;
    // 0x3c6d48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6d4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6d54:
    // 0x3c6d54: 0x45010130  bc1t        . + 4 + (0x130 << 2)
    ctx->pc = 0x3C6D54u;
    {
        const bool branch_taken_0x3c6d54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6d54) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6D5Cu;
label_3c6d5c:
    // 0x3c6d5c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3c6d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3c6d60: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6D60u;
    {
        const bool branch_taken_0x3c6d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D60u;
        // 0x3c6d64: 0xc7a20068  lwc1        $f2, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d60) {
            ctx->pc = 0x3C6E34u;
            goto label_3c6e34;
        }
    }
    ctx->pc = 0x3C6D68u;
    // 0x3c6d68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6d6c: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x3c6d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6d70: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6d74: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3c6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6d78: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6D78u;
    {
        const bool branch_taken_0x3c6d78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D78u;
        // 0x3c6d7c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d78) {
            ctx->pc = 0x3C6DD8u;
            goto label_3c6dd8;
        }
    }
    ctx->pc = 0x3C6D80u;
    // 0x3c6d80: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3c6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6d84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6d88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6d8c: 0x0  nop
    ctx->pc = 0x3c6d8cu;
    // NOP
    // 0x3c6d90: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6D90u;
    {
        const bool branch_taken_0x3c6d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D90u;
        // 0x3c6d94: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d90) {
            ctx->pc = 0x3C6E34u;
            goto label_3c6e34;
        }
    }
    ctx->pc = 0x3C6D98u;
    // 0x3c6d98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6d9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6da0: 0x0  nop
    ctx->pc = 0x3c6da0u;
    // NOP
    // 0x3c6da4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C6DA4u;
    {
        const bool branch_taken_0x3c6da4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DA4u;
        // 0x3c6da8: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6da4) {
            ctx->pc = 0x3C6E34u;
            goto label_3c6e34;
        }
    }
    ctx->pc = 0x3C6DACu;
    // 0x3c6dac: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3c6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6db0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6db4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6db8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6dbc: 0x0  nop
    ctx->pc = 0x3c6dbcu;
    // NOP
    // 0x3c6dc0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6DC0u;
    {
        const bool branch_taken_0x3c6dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DC0u;
        // 0x3c6dc4: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6dc0) {
            ctx->pc = 0x3C6E34u;
            goto label_3c6e34;
        }
    }
    ctx->pc = 0x3C6DC8u;
    // 0x3c6dc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6dcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6dd0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6DD0u;
    {
        const bool branch_taken_0x3c6dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DD0u;
        // 0x3c6dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6dd0) {
            ctx->pc = 0x3C6E2Cu;
            goto label_3c6e2c;
        }
    }
    ctx->pc = 0x3C6DD8u;
label_3c6dd8:
    // 0x3c6dd8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3c6dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6ddc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6de0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6de4: 0x0  nop
    ctx->pc = 0x3c6de4u;
    // NOP
    // 0x3c6de8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6DE8u;
    {
        const bool branch_taken_0x3c6de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DE8u;
        // 0x3c6dec: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6de8) {
            ctx->pc = 0x3C6E34u;
            goto label_3c6e34;
        }
    }
    ctx->pc = 0x3C6DF0u;
    // 0x3c6df0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6df4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6df8: 0x0  nop
    ctx->pc = 0x3c6df8u;
    // NOP
    // 0x3c6dfc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C6DFCu;
    {
        const bool branch_taken_0x3c6dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DFCu;
        // 0x3c6e00: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6dfc) {
            ctx->pc = 0x3C6E34u;
            goto label_3c6e34;
        }
    }
    ctx->pc = 0x3C6E04u;
    // 0x3c6e04: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3c6e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6e08: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6e0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6e0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6e10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6e14: 0x0  nop
    ctx->pc = 0x3c6e14u;
    // NOP
    // 0x3c6e18: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6E18u;
    {
        const bool branch_taken_0x3c6e18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E18u;
        // 0x3c6e1c: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e18) {
            ctx->pc = 0x3C6E34u;
            goto label_3c6e34;
        }
    }
    ctx->pc = 0x3C6E20u;
    // 0x3c6e20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6e2c:
    // 0x3c6e2c: 0x450100fa  bc1t        . + 4 + (0xFA << 2)
    ctx->pc = 0x3C6E2Cu;
    {
        const bool branch_taken_0x3c6e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6e2c) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6E34u;
label_3c6e34:
    // 0x3c6e34: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x3c6e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3c6e38: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C6E38u;
    {
        const bool branch_taken_0x3c6e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E38u;
        // 0x3c6e3c: 0xc7a20068  lwc1        $f2, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e38) {
            ctx->pc = 0x3C6F0Cu;
            goto label_3c6f0c;
        }
    }
    ctx->pc = 0x3C6E40u;
    // 0x3c6e40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6e44: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x3c6e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6e48: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c6e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6e4c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3c6e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6e50: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6E50u;
    {
        const bool branch_taken_0x3c6e50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E50u;
        // 0x3c6e54: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e50) {
            ctx->pc = 0x3C6EB0u;
            goto label_3c6eb0;
        }
    }
    ctx->pc = 0x3C6E58u;
    // 0x3c6e58: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3c6e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6e5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6e60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6e64: 0x0  nop
    ctx->pc = 0x3c6e64u;
    // NOP
    // 0x3c6e68: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6E68u;
    {
        const bool branch_taken_0x3c6e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E68u;
        // 0x3c6e6c: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e68) {
            ctx->pc = 0x3C6F0Cu;
            goto label_3c6f0c;
        }
    }
    ctx->pc = 0x3C6E70u;
    // 0x3c6e70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6e74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6e78: 0x0  nop
    ctx->pc = 0x3c6e78u;
    // NOP
    // 0x3c6e7c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3C6E7Cu;
    {
        const bool branch_taken_0x3c6e7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E7Cu;
        // 0x3c6e80: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e7c) {
            ctx->pc = 0x3C6F0Cu;
            goto label_3c6f0c;
        }
    }
    ctx->pc = 0x3C6E84u;
    // 0x3c6e84: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3c6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6e88: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6e8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6e94: 0x0  nop
    ctx->pc = 0x3c6e94u;
    // NOP
    // 0x3c6e98: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C6E98u;
    {
        const bool branch_taken_0x3c6e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E98u;
        // 0x3c6e9c: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e98) {
            ctx->pc = 0x3C6F0Cu;
            goto label_3c6f0c;
        }
    }
    ctx->pc = 0x3C6EA0u;
    // 0x3c6ea0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6ea4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6ea8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C6EA8u;
    {
        const bool branch_taken_0x3c6ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6ea8) {
            ctx->pc = 0x3C6F04u;
            goto label_3c6f04;
        }
    }
    ctx->pc = 0x3C6EB0u;
label_3c6eb0:
    // 0x3c6eb0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3c6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6eb4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6eb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6ebc: 0x0  nop
    ctx->pc = 0x3c6ebcu;
    // NOP
    // 0x3c6ec0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6EC0u;
    {
        const bool branch_taken_0x3c6ec0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6EC0u;
        // 0x3c6ec4: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ec0) {
            ctx->pc = 0x3C6F0Cu;
            goto label_3c6f0c;
        }
    }
    ctx->pc = 0x3C6EC8u;
    // 0x3c6ec8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6ecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6ed0: 0x0  nop
    ctx->pc = 0x3c6ed0u;
    // NOP
    // 0x3c6ed4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C6ED4u;
    {
        const bool branch_taken_0x3c6ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6ED4u;
        // 0x3c6ed8: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ed4) {
            ctx->pc = 0x3C6F0Cu;
            goto label_3c6f0c;
        }
    }
    ctx->pc = 0x3C6EDCu;
    // 0x3c6edc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3c6edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6ee0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c6ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c6ee4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6ee8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6eec: 0x0  nop
    ctx->pc = 0x3c6eecu;
    // NOP
    // 0x3c6ef0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6EF0u;
    {
        const bool branch_taken_0x3c6ef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6EF0u;
        // 0x3c6ef4: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ef0) {
            ctx->pc = 0x3C6F0Cu;
            goto label_3c6f0c;
        }
    }
    ctx->pc = 0x3C6EF8u;
    // 0x3c6ef8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c6ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c6efc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6f00: 0x0  nop
    ctx->pc = 0x3c6f00u;
    // NOP
label_3c6f04:
    // 0x3c6f04: 0x450100c4  bc1t        . + 4 + (0xC4 << 2)
    ctx->pc = 0x3C6F04u;
    {
        const bool branch_taken_0x3c6f04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F04u;
        // 0x3c6f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6f04) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C6F0Cu;
label_3c6f0c:
    // 0x3c6f0c: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x3c6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3c6f10:
    // 0x3c6f10: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x3c6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c6f14: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x3c6f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c6f18: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x3c6f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6f1c: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x3c6f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c6f20: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x3c6f20u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x3c6f24: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x3c6f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c6f28: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x3c6f28u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x3c6f2c: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x3c6f2cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x3c6f30: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x3c6f30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3c6f34: 0xe7a60098  swc1        $f6, 0x98($sp)
    ctx->pc = 0x3c6f34u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3c6f38: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x3c6f38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3c6f3c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3c6f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6f40: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x3c6f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c6f44: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x3c6f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x3c6f48: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3c6f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6f4c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3c6f4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3c6f50: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x3c6f50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x3c6f54: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3c6f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3c6f58: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x3c6f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3c6f5c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x3c6f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3c6f60: 0x460221c2  mul.s       $f7, $f4, $f2
    ctx->pc = 0x3c6f60u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3c6f64: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3c6f64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3c6f68: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x3c6f68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3c6f6c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3c6f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3c6f70: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3c6f70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3c6f74: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x3c6f74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3c6f78: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x3c6f78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x3c6f7c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3c6f7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3c6f80: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x3c6f80u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x3c6f84: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x3c6f84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3c6f88: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3c6f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3c6f8c: 0xe7a700b0  swc1        $f7, 0xB0($sp)
    ctx->pc = 0x3c6f8cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3c6f90: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3c6f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6f94: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3c6f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6f98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3c6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3c6f9c: 0x46080a01  sub.s       $f8, $f1, $f8
    ctx->pc = 0x3c6f9cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x3c6fa0: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x3c6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3c6fa4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c6fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c6fa8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3c6fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3c6fac: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x3c6facu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3c6fb0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C6FB0u;
    {
        const bool branch_taken_0x3c6fb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FB0u;
        // 0x3c6fb4: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6fb0) {
            ctx->pc = 0x3C6FC8u;
            goto label_3c6fc8;
        }
    }
    ctx->pc = 0x3C6FB8u;
    // 0x3c6fb8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3c6fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C6FBCu;
    {
        const bool branch_taken_0x3c6fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FBCu;
        // 0x3c6fc0: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6fbc) {
            ctx->pc = 0x3C6FD0u;
            goto label_3c6fd0;
        }
    }
    ctx->pc = 0x3C6FC4u;
    // 0x3c6fc4: 0x0  nop
    ctx->pc = 0x3c6fc4u;
    // NOP
label_3c6fc8:
    // 0x3c6fc8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3c6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6fcc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3c6fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c6fd0:
    // 0x3c6fd0: 0x46090081  sub.s       $f2, $f0, $f9
    ctx->pc = 0x3c6fd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x3c6fd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c6fd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c6fd8: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x3c6fd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3c6fdc: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x3c6fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3c6fe0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3c6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3c6fe4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3c6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3c6fe8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3c6fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3c6fec: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C6FECu;
    {
        const bool branch_taken_0x3c6fec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3c6fec) {
            ctx->pc = 0x3C6FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6FECu;
            // 0x3c6ff0: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7004u;
            goto label_3c7004;
        }
    }
    ctx->pc = 0x3C6FF4u;
    // 0x3c6ff4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3c6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6ff8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3c6ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6ffc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C6FFCu;
    {
        const bool branch_taken_0x3c6ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FFCu;
        // 0x3c7000: 0xc4820014  lwc1        $f2, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ffc) {
            ctx->pc = 0x3C700Cu;
            goto label_3c700c;
        }
    }
    ctx->pc = 0x3C7004u;
label_3c7004:
    // 0x3c7004: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3c7004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7008: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3c7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c700c:
    // 0x3c700c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3c700cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c7010: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3c7010u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c7014: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x3c7014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3c7018: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x3c7018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3c701c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x3c701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7020: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x3c7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7024: 0xc7a800c0  lwc1        $f8, 0xC0($sp)
    ctx->pc = 0x3c7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c7028: 0xc7ab00c4  lwc1        $f11, 0xC4($sp)
    ctx->pc = 0x3c7028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3c702c: 0x46014002  mul.s       $f0, $f8, $f1
    ctx->pc = 0x3c702cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x3c7030: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x3c7030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7034: 0x46025902  mul.s       $f4, $f11, $f2
    ctx->pc = 0x3c7034u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x3c7038: 0xc7aa00c8  lwc1        $f10, 0xC8($sp)
    ctx->pc = 0x3c7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c703c: 0xc7a600d0  lwc1        $f6, 0xD0($sp)
    ctx->pc = 0x3c703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c7040: 0x46035142  mul.s       $f5, $f10, $f3
    ctx->pc = 0x3c7040u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x3c7044: 0xc7a700d4  lwc1        $f7, 0xD4($sp)
    ctx->pc = 0x3c7044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c7048: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3c7048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3c704c: 0xc7a900d8  lwc1        $f9, 0xD8($sp)
    ctx->pc = 0x3c704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c7050: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3c7050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3c7054: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x3c7054u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x3c7058: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3c7058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3c705c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c705cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c7060: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c7060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c7064: 0x46000147  neg.s       $f5, $f0
    ctx->pc = 0x3c7064u;
    ctx->f[5] = FPU_NEG_S(ctx->f[0]);
    // 0x3c7068: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x3c7068u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x3c706c: 0x460c2834  c.lt.s      $f5, $f12
    ctx->pc = 0x3c706cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7070: 0x0  nop
    ctx->pc = 0x3c7070u;
    // NOP
    // 0x3c7074: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x3C7074u;
    {
        const bool branch_taken_0x3c7074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7074u;
        // 0x3c7078: 0x46030840  add.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7074) {
            ctx->pc = 0x3C7148u;
            goto label_3c7148;
        }
    }
    ctx->pc = 0x3C707Cu;
    // 0x3c707c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x3c707cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7080: 0x0  nop
    ctx->pc = 0x3c7080u;
    // NOP
    // 0x3c7084: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x3C7084u;
    {
        const bool branch_taken_0x3c7084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7084u;
        // 0x3c7088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7084) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C708Cu;
    // 0x3c708c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x3c708cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7090: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x3C7090u;
    {
        const bool branch_taken_0x3c7090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7090) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C7098u;
    // 0x3c7098: 0x460b3082  mul.s       $f2, $f6, $f11
    ctx->pc = 0x3c7098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x3c709c: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x3c709cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x3c70a0: 0x460848c2  mul.s       $f3, $f9, $f8
    ctx->pc = 0x3c70a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x3c70a4: 0x460a3042  mul.s       $f1, $f6, $f10
    ctx->pc = 0x3c70a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x3c70a8: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x3c70a8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c70ac: 0x460a3902  mul.s       $f4, $f7, $f10
    ctx->pc = 0x3c70acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x3c70b0: 0x460b4802  mul.s       $f0, $f9, $f11
    ctx->pc = 0x3c70b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x3c70b4: 0x46011981  sub.s       $f6, $f3, $f1
    ctx->pc = 0x3c70b4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c70b8: 0xe7a800e8  swc1        $f8, 0xE8($sp)
    ctx->pc = 0x3c70b8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3c70bc: 0x460020c1  sub.s       $f3, $f4, $f0
    ctx->pc = 0x3c70bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3c70c0: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x3c70c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3c70c4: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x3c70c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3c70c8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x3c70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c70cc: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x3c70ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c70d0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3c70d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3c70d4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x3c70d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c70d8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c70d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c70dc: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x3c70dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3c70e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c70e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c70e4: 0x460009c0  add.s       $f7, $f1, $f0
    ctx->pc = 0x3c70e4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c70e8: 0x460c3834  c.lt.s      $f7, $f12
    ctx->pc = 0x3c70e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c70ec: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
    ctx->pc = 0x3C70ECu;
    {
        const bool branch_taken_0x3c70ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c70ec) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C70F4u;
    // 0x3c70f4: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x3c70f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c70f8: 0x0  nop
    ctx->pc = 0x3c70f8u;
    // NOP
    // 0x3c70fc: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x3C70FCu;
    {
        const bool branch_taken_0x3c70fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70FCu;
        // 0x3c7100: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c70fc) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C7104u;
    // 0x3c7104: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x3c7104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7108: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c7108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c710c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x3c710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7110: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c7110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c7114: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x3c7114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x3c7118: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c7118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c711c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c711cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c7120: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3c7120u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3c7124: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3c7124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7128: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x3C7128u;
    {
        const bool branch_taken_0x3c7128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7128) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C7130u;
    // 0x3c7130: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x3c7130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x3c7134: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x3c7134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7138: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x3C7138u;
    {
        const bool branch_taken_0x3c7138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7138) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C7140u;
label_3c7140:
    // 0x3c7140: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3C7140u;
    {
        const bool branch_taken_0x3c7140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7140u;
        // 0x3c7144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7140) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C7148u;
label_3c7148:
    // 0x3c7148: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x3c7148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c714c: 0x0  nop
    ctx->pc = 0x3c714cu;
    // NOP
    // 0x3c7150: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x3C7150u;
    {
        const bool branch_taken_0x3c7150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7150u;
        // 0x3c7154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7150) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C7158u;
    // 0x3c7158: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x3c7158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c715c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x3C715Cu;
    {
        const bool branch_taken_0x3c715c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c715c) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C7164u;
    // 0x3c7164: 0x460b3082  mul.s       $f2, $f6, $f11
    ctx->pc = 0x3c7164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x3c7168: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x3c7168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x3c716c: 0x460848c2  mul.s       $f3, $f9, $f8
    ctx->pc = 0x3c716cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x3c7170: 0x460a3042  mul.s       $f1, $f6, $f10
    ctx->pc = 0x3c7170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x3c7174: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x3c7174u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c7178: 0x460a3902  mul.s       $f4, $f7, $f10
    ctx->pc = 0x3c7178u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x3c717c: 0x460b4802  mul.s       $f0, $f9, $f11
    ctx->pc = 0x3c717cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x3c7180: 0x46011981  sub.s       $f6, $f3, $f1
    ctx->pc = 0x3c7180u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c7184: 0xe7a800f8  swc1        $f8, 0xF8($sp)
    ctx->pc = 0x3c7184u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3c7188: 0x460020c1  sub.s       $f3, $f4, $f0
    ctx->pc = 0x3c7188u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3c718c: 0xe7a600f4  swc1        $f6, 0xF4($sp)
    ctx->pc = 0x3c718cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3c7190: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x3c7190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3c7194: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x3c7194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7198: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x3c7198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c719c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3c719cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3c71a0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x3c71a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c71a4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c71a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c71a8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x3c71a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3c71ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c71acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c71b0: 0x460009c0  add.s       $f7, $f1, $f0
    ctx->pc = 0x3c71b0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c71b4: 0x46076034  c.lt.s      $f12, $f7
    ctx->pc = 0x3c71b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c71b8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3C71B8u;
    {
        const bool branch_taken_0x3c71b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c71b8) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C71C0u;
    // 0x3c71c0: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x3c71c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c71c4: 0x0  nop
    ctx->pc = 0x3c71c4u;
    // NOP
    // 0x3c71c8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x3C71C8u;
    {
        const bool branch_taken_0x3c71c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71C8u;
        // 0x3c71cc: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c71c8) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C71D0u;
    // 0x3c71d0: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x3c71d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c71d4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c71d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c71d8: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x3c71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c71dc: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c71dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c71e0: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x3c71e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x3c71e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c71e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c71e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c71e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c71ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3c71ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3c71f0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3c71f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c71f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3C71F4u;
    {
        const bool branch_taken_0x3c71f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c71f4) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C71FCu;
    // 0x3c71fc: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x3c71fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x3c7200: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x3c7200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7204: 0x0  nop
    ctx->pc = 0x3c7204u;
    // NOP
    // 0x3c7208: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7208u;
    {
        const bool branch_taken_0x3c7208 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7208u;
        // 0x3c720c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7208) {
            ctx->pc = 0x3C7218u;
            goto label_3c7218;
        }
    }
    ctx->pc = 0x3C7210u;
    // 0x3c7210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c7210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7214: 0x0  nop
    ctx->pc = 0x3c7214u;
    // NOP
label_3c7218:
    // 0x3c7218: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7218u;
        // 0x3c721c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7220u;
}
