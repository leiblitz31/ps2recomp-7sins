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

// Function: sub_003719B8
// Address: 0x3719b8 - 0x371b30
void sub_003719B8_0x3719b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003719B8_0x3719b8");
#endif

    ctx->pc = 0x3719b8u;

    // 0x3719b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3719b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719bc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3719bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3719c0: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3719c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3719c4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x3719c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3719c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3719c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3719cc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3719ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3719d0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3719d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3719d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3719d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3719d8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x3719d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3719dc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3719dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3719e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3719e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3719e4: 0xc466000c  lwc1        $f6, 0xC($v1)
    ctx->pc = 0x3719e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3719e8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3719e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3719ec: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x3719ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3719f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3719f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3719f4: 0xc7838100  lwc1        $f3, -0x7F00($gp)
    ctx->pc = 0x3719f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3719f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3719f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3719fc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3719fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x371a00: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x371a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x371a04: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x371a04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371a08: 0x0  nop
    ctx->pc = 0x371a08u;
    // NOP
    // 0x371a0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x371A0Cu;
    {
        const bool branch_taken_0x371a0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x371A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A0Cu;
        // 0x371a10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a0c) {
            ctx->pc = 0x371A28u;
            goto label_371a28;
        }
    }
    ctx->pc = 0x371A14u;
    // 0x371a14: 0xc7808118  lwc1        $f0, -0x7EE8($gp)
    ctx->pc = 0x371a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371a18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x371a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371a1c: 0x0  nop
    ctx->pc = 0x371a1cu;
    // NOP
    // 0x371a20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x371A20u;
    {
        const bool branch_taken_0x371a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371a20) {
            ctx->pc = 0x371A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371A20u;
            // 0x371a24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371A28u;
            goto label_371a28;
        }
    }
    ctx->pc = 0x371A28u;
label_371a28:
    // 0x371a28: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x371A28u;
    {
        const bool branch_taken_0x371a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x371A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A28u;
        // 0x371a2c: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a28) {
            ctx->pc = 0x371B20u;
            goto label_371b20;
        }
    }
    ctx->pc = 0x371A30u;
    // 0x371a30: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x371a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x371a34: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x371a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371a38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x371a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a3c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x371a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x371a40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x371a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a44: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x371a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371a48: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x371a48u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x371a4c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x371a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371a50: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x371a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x371a54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x371a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x371a58: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x371a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x371a5c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x371a5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x371a60: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x371a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371a64: 0xc466000c  lwc1        $f6, 0xC($v1)
    ctx->pc = 0x371a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x371a68: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x371a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x371a6c: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x371a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x371a70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x371a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x371a74: 0xc7838100  lwc1        $f3, -0x7F00($gp)
    ctx->pc = 0x371a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x371a78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x371a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x371a7c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x371a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x371a80: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x371a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x371a84: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x371a84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371a88: 0x0  nop
    ctx->pc = 0x371a88u;
    // NOP
    // 0x371a8c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x371A8Cu;
    {
        const bool branch_taken_0x371a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x371A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A8Cu;
        // 0x371a90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a8c) {
            ctx->pc = 0x371AA8u;
            goto label_371aa8;
        }
    }
    ctx->pc = 0x371A94u;
    // 0x371a94: 0xc7808118  lwc1        $f0, -0x7EE8($gp)
    ctx->pc = 0x371a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371a98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x371a98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371a9c: 0x0  nop
    ctx->pc = 0x371a9cu;
    // NOP
    // 0x371aa0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x371AA0u;
    {
        const bool branch_taken_0x371aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371aa0) {
            ctx->pc = 0x371AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371AA0u;
            // 0x371aa4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371AA8u;
            goto label_371aa8;
        }
    }
    ctx->pc = 0x371AA8u;
label_371aa8:
    // 0x371aa8: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x371AA8u;
    {
        const bool branch_taken_0x371aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x371AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AA8u;
        // 0x371aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371aa8) {
            ctx->pc = 0x371B24u;
            goto label_371b24;
        }
    }
    ctx->pc = 0x371AB0u;
    // 0x371ab0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x371ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x371ab4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x371ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371ab8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x371ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x371abc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x371abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371ac0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x371ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x371ac4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x371ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371ac8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x371ac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x371acc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x371accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x371ad0: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x371ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x371ad4: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x371ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x371ad8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x371ad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x371adc: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x371adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x371ae0: 0xc7848100  lwc1        $f4, -0x7F00($gp)
    ctx->pc = 0x371ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x371ae4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x371ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x371ae8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x371ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x371aec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x371aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x371af0: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x371af0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x371af4: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x371af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371af8: 0x0  nop
    ctx->pc = 0x371af8u;
    // NOP
    // 0x371afc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x371AFCu;
    {
        const bool branch_taken_0x371afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x371B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AFCu;
        // 0x371b00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371afc) {
            ctx->pc = 0x371B18u;
            goto label_371b18;
        }
    }
    ctx->pc = 0x371B04u;
    // 0x371b04: 0xc7808118  lwc1        $f0, -0x7EE8($gp)
    ctx->pc = 0x371b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371b08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x371b08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371b0c: 0x0  nop
    ctx->pc = 0x371b0cu;
    // NOP
    // 0x371b10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x371B10u;
    {
        const bool branch_taken_0x371b10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371b10) {
            ctx->pc = 0x371B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371B10u;
            // 0x371b14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371B18u;
            goto label_371b18;
        }
    }
    ctx->pc = 0x371B18u;
label_371b18:
    // 0x371b18: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x371B18u;
    {
        const bool branch_taken_0x371b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x371B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B18u;
        // 0x371b1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b18) {
            ctx->pc = 0x371B24u;
            goto label_371b24;
        }
    }
    ctx->pc = 0x371B20u;
label_371b20:
    // 0x371b20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371b24:
    // 0x371b24: 0x3e00008  jr          $ra
    ctx->pc = 0x371B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371B2Cu;
    // 0x371b2c: 0x0  nop
    ctx->pc = 0x371b2cu;
    // NOP
    ctx->pc = 0x371b30u;
}
