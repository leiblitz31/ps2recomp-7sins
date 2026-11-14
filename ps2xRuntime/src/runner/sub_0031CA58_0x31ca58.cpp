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

// Function: sub_0031CA58
// Address: 0x31ca58 - 0x31cc50
void sub_0031CA58_0x31ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CA58_0x31ca58");
#endif

    switch (ctx->pc) {
        case 0x31ca88u: goto label_31ca88;
        case 0x31cb48u: goto label_31cb48;
        default: break;
    }

    ctx->pc = 0x31ca58u;

    // 0x31ca58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31ca5c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31ca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31ca60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31ca64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31ca64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca68: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31ca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31ca6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31ca6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca70: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31ca70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31ca74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31ca74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31ca7c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x31ca7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31ca80: 0xc1053ce  jal         func_414F38
    ctx->pc = 0x31CA80u;
    SET_GPR_U32(ctx, 31, 0x31CA88u);
    ctx->pc = 0x31CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA80u;
    // 0x31ca84: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414F38u, 0x31CA80u, 0x31CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA88u;
label_31ca88:
    // 0x31ca88: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x31ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31ca8c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x31ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ca90: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x31ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31ca94: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x31ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31ca98: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x31ca98u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x31ca9c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x31ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31caa0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x31caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31caa4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x31caa4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x31caa8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31caa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31caac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31caacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31cab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31cab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cab4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31cab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31cab8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x31cab8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x31cabc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x31cabcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31cac0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x31cac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31cac4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x31cac4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31cac8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x31cac8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31cacc: 0x12000047  beqz        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x31CACCu;
    {
        const bool branch_taken_0x31cacc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CACCu;
        // 0x31cad0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cacc) {
            ctx->pc = 0x31CBECu;
            goto label_31cbec;
        }
    }
    ctx->pc = 0x31CAD4u;
    // 0x31cad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31cad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cad8: 0x46000a06  mov.s       $f8, $f1
    ctx->pc = 0x31cad8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[1]);
    // 0x31cadc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x31cadcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cae0: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31CAE0u;
    {
        const bool branch_taken_0x31cae0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x31CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAE0u;
        // 0x31cae4: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cae0) {
            ctx->pc = 0x31CAF0u;
            goto label_31caf0;
        }
    }
    ctx->pc = 0x31CAE8u;
    // 0x31cae8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x31CAE8u;
    {
        const bool branch_taken_0x31cae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cae8) {
            ctx->pc = 0x31CAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CAE8u;
            // 0x31caec: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CB44u;
            goto label_31cb44;
        }
    }
    ctx->pc = 0x31CAF0u;
label_31caf0:
    // 0x31caf0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x31caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31caf4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x31caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31caf8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x31caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cafc: 0x460401c1  sub.s       $f7, $f0, $f4
    ctx->pc = 0x31cafcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x31cb00: 0x46030981  sub.s       $f6, $f1, $f3
    ctx->pc = 0x31cb00u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x31cb04: 0x46081141  sub.s       $f5, $f2, $f8
    ctx->pc = 0x31cb04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x31cb08: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x31cb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x31cb0c: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x31cb0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x31cb10: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x31cb10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x31cb14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31cb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31cb18: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31cb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31cb1c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31cb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31cb20: 0x0  nop
    ctx->pc = 0x31cb20u;
    // NOP
    // 0x31cb24: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x31CB24u;
    {
        const bool branch_taken_0x31cb24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31cb24) {
            ctx->pc = 0x31CB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CB24u;
            // 0x31cb28: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CB30u;
            goto label_31cb30;
        }
    }
    ctx->pc = 0x31CB2Cu;
    // 0x31cb2c: 0x0  nop
    ctx->pc = 0x31cb2cu;
    // NOP
label_31cb30:
    // 0x31cb30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31cb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cb34: 0xd0102b  sltu        $v0, $a2, $s0
    ctx->pc = 0x31cb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31cb38: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x31CB38u;
    {
        const bool branch_taken_0x31cb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB38u;
        // 0x31cb3c: 0x24a3000c  addiu       $v1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb38) {
            ctx->pc = 0x31CBE0u;
            goto label_31cbe0;
        }
    }
    ctx->pc = 0x31CB40u;
    // 0x31cb40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31cb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31cb44:
    // 0x31cb44: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31cb48:
    // 0x31cb48: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cb4c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x31cb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cb50: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x31cb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cb54: 0x460401c1  sub.s       $f7, $f0, $f4
    ctx->pc = 0x31cb54u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x31cb58: 0x46030981  sub.s       $f6, $f1, $f3
    ctx->pc = 0x31cb58u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x31cb5c: 0x46081141  sub.s       $f5, $f2, $f8
    ctx->pc = 0x31cb5cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x31cb60: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x31cb60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x31cb64: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x31cb64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x31cb68: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x31cb68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x31cb6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31cb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31cb70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31cb70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31cb74: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31cb74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31cb78: 0x0  nop
    ctx->pc = 0x31cb78u;
    // NOP
    // 0x31cb7c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x31CB7Cu;
    {
        const bool branch_taken_0x31cb7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31cb7c) {
            ctx->pc = 0x31CB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CB7Cu;
            // 0x31cb80: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CB88u;
            goto label_31cb88;
        }
    }
    ctx->pc = 0x31CB84u;
    // 0x31cb84: 0x0  nop
    ctx->pc = 0x31cb84u;
    // NOP
label_31cb88:
    // 0x31cb88: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x31cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cb8c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x31cb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cb90: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x31cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cb94: 0x460401c1  sub.s       $f7, $f0, $f4
    ctx->pc = 0x31cb94u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x31cb98: 0x46030981  sub.s       $f6, $f1, $f3
    ctx->pc = 0x31cb98u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x31cb9c: 0x46081141  sub.s       $f5, $f2, $f8
    ctx->pc = 0x31cb9cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x31cba0: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x31cba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x31cba4: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x31cba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x31cba8: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x31cba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x31cbac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31cbacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31cbb0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31cbb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31cbb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31cbb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31cbb8: 0x0  nop
    ctx->pc = 0x31cbb8u;
    // NOP
    // 0x31cbbc: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x31CBBCu;
    {
        const bool branch_taken_0x31cbbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31cbbc) {
            ctx->pc = 0x31CBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CBBCu;
            // 0x31cbc0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CBC8u;
            goto label_31cbc8;
        }
    }
    ctx->pc = 0x31CBC4u;
    // 0x31cbc4: 0x0  nop
    ctx->pc = 0x31cbc4u;
    // NOP
label_31cbc8:
    // 0x31cbc8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x31cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x31cbcc: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x31cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x31cbd0: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x31cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x31cbd4: 0xd0102b  sltu        $v0, $a2, $s0
    ctx->pc = 0x31cbd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31cbd8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x31CBD8u;
    {
        const bool branch_taken_0x31cbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBD8u;
        // 0x31cbdc: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbd8) {
            ctx->pc = 0x31CB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cb48;
        }
    }
    ctx->pc = 0x31CBE0u;
label_31cbe0:
    // 0x31cbe0: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x31cbe0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31cbe4: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x31cbe4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31cbe8: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x31cbe8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_31cbec:
    // 0x31cbec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31cbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cbf0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31cbf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31cbf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31CBF4u;
    {
        const bool branch_taken_0x31cbf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31cbf4) {
            ctx->pc = 0x31CC00u;
            goto label_31cc00;
        }
    }
    ctx->pc = 0x31CBFCu;
    // 0x31cbfc: 0x46140504  c1          0x140504
    ctx->pc = 0x31cbfcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_31cc00:
    // 0x31cc00: 0xc7808230  lwc1        $f0, -0x7DD0($gp)
    ctx->pc = 0x31cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cc04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31cc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc08: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31cc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cc0c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31cc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x31cc10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31cc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31cc14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31cc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cc18: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x31cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31cc1c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x31cc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x31cc20: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x31cc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31cc24: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x31cc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31cc28: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x31cc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x31cc2c: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x31cc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x31cc30: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x31cc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31cc34: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x31cc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31cc38: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x31cc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31cc3c: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x31cc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31cc40: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31cc40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cc44: 0x3e00008  jr          $ra
    ctx->pc = 0x31CC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC44u;
        // 0x31cc48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CC4Cu;
    // 0x31cc4c: 0x0  nop
    ctx->pc = 0x31cc4cu;
    // NOP
    ctx->pc = 0x31cc50u;
}
