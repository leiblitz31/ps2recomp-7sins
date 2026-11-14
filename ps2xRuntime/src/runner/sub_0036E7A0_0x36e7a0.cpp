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

// Function: sub_0036E7A0
// Address: 0x36e7a0 - 0x36eb40
void sub_0036E7A0_0x36e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E7A0_0x36e7a0");
#endif

    switch (ctx->pc) {
        case 0x36e830u: goto label_36e830;
        case 0x36e838u: goto label_36e838;
        case 0x36e844u: goto label_36e844;
        default: break;
    }

    ctx->pc = 0x36e7a0u;

    // 0x36e7a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x36e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x36e7a4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x36e7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x36e7a8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x36e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x36e7ac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x36e7acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7b0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x36e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x36e7b4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x36e7b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7b8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x36e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x36e7bc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x36e7bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7c0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x36e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x36e7c4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x36e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x36e7c8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x36e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x36e7cc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x36e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x36e7d0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x36e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x36e7d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36e7d8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x36e7d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x36e7dc: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x36e7dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x36e7e0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x36e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x36e7e4: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x36e7e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e7e8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x36e7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x36e7ec: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x36e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x36e7f0: 0x8e860038  lw          $a2, 0x38($s4)
    ctx->pc = 0x36e7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x36e7f4: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x36e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x36e7f8: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x36e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x36e7fc: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x36e7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x36e800: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x36e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x36e804: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x36e804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x36e808: 0x18e000bf  blez        $a3, . + 4 + (0xBF << 2)
    ctx->pc = 0x36E808u;
    {
        const bool branch_taken_0x36e808 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E808u;
        // 0x36e80c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e808) {
            ctx->pc = 0x36EB08u;
            goto label_36eb08;
        }
    }
    ctx->pc = 0x36E810u;
    // 0x36e810: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36e810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36e814: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x36e814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x36e818: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x36e818u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e81c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36e81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e824: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36e824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e828: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x36e828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e82c: 0x0  nop
    ctx->pc = 0x36e82cu;
    // NOP
label_36e830:
    // 0x36e830: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x36E830u;
    SET_GPR_U32(ctx, 31, 0x36E838u);
    ctx->pc = 0x36E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E830u;
    // 0x36e834: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x36E830u, 0x36E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E838u;
label_36e838:
    // 0x36e838: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x36e838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36e83c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x36E83Cu;
    SET_GPR_U32(ctx, 31, 0x36E844u);
    ctx->pc = 0x36E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E83Cu;
    // 0x36e840: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x36E83Cu, 0x36E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E844u;
label_36e844:
    // 0x36e844: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x36e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x36e848: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x36e848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x36e84c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x36e84cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36e850: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x36e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e854: 0x4600a147  neg.s       $f5, $f20
    ctx->pc = 0x36e854u;
    ctx->f[5] = FPU_NEG_S(ctx->f[20]);
    // 0x36e858: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x36e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e85c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x36e85cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x36e860: 0xc6e60000  lwc1        $f6, 0x0($s7)
    ctx->pc = 0x36e860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36e864: 0x4602a1c2  mul.s       $f7, $f20, $f2
    ctx->pc = 0x36e864u;
    ctx->f[7] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x36e868: 0xc6eb0004  lwc1        $f11, 0x4($s7)
    ctx->pc = 0x36e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x36e86c: 0x4603a202  mul.s       $f8, $f20, $f3
    ctx->pc = 0x36e86cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x36e870: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x36e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e874: 0x46060382  mul.s       $f14, $f0, $f6
    ctx->pc = 0x36e874u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x36e878: 0xc7ca0008  lwc1        $f10, 0x8($fp)
    ctx->pc = 0x36e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x36e87c: 0x460b0342  mul.s       $f13, $f0, $f11
    ctx->pc = 0x36e87cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x36e880: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x36e880u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36e884: 0xc6840068  lwc1        $f4, 0x68($s4)
    ctx->pc = 0x36e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36e888: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x36e888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36e88c: 0xc689006c  lwc1        $f9, 0x6C($s4)
    ctx->pc = 0x36e88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x36e890: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x36e890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36e894: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x36e894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x36e898: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x36e898u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x36e89c: 0x460aa502  mul.s       $f20, $f20, $f10
    ctx->pc = 0x36e89cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
    // 0x36e8a0: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x36e8a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x36e8a4: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x36e8a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x36e8a8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x36e8a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x36e8ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e8b0: 0x460e39c0  add.s       $f7, $f7, $f14
    ctx->pc = 0x36e8b0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[14]);
    // 0x36e8b4: 0x460ca500  add.s       $f20, $f20, $f12
    ctx->pc = 0x36e8b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x36e8b8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x36e8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36e8bc: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x36e8bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x36e8c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x36e8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36e8c4: 0x460d4200  add.s       $f8, $f8, $f13
    ctx->pc = 0x36e8c4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[13]);
    // 0x36e8c8: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x36e8c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36e8cc: 0x46074842  mul.s       $f1, $f9, $f7
    ctx->pc = 0x36e8ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x36e8d0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x36e8d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36e8d4: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x36e8d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x36e8d8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x36e8d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36e8dc: 0x46022282  mul.s       $f10, $f4, $f2
    ctx->pc = 0x36e8dcu;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x36e8e0: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x36e8e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e8e4: 0x46144982  mul.s       $f6, $f9, $f20
    ctx->pc = 0x36e8e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
    // 0x36e8e8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x36e8e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x36e8ec: 0x46084a42  mul.s       $f9, $f9, $f8
    ctx->pc = 0x36e8ecu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x36e8f0: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x36e8f0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x36e8f4: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x36e8f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x36e8f8: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x36e8f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x36e8fc: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x36e8fcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36e900: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x36e900u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x36e904: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x36e904u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36e908: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x36e908u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x36e90c: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x36e90cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36e910: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x36e910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x36e914: 0x461539c2  mul.s       $f7, $f7, $f21
    ctx->pc = 0x36e914u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
    // 0x36e918: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x36e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e91c: 0x46154202  mul.s       $f8, $f8, $f21
    ctx->pc = 0x36e91cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[21]);
    // 0x36e920: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x36e920u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x36e924: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x36e924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x36e928: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x36e928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36e92c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x36e92cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x36e930: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x36e930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e934: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x36e934u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x36e938: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x36e938u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36e93c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x36e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36e940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36e944: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x36e944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36e948: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36e948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e94c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x36e94cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x36e950: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x36e950u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36e954: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x36e954u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x36e958: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e95c: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x36e95cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x36e960: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x36e960u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e964: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e968: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x36e968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x36e96c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x36e96cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x36e970: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x36e970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36e974: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36e974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e978: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x36e978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x36e97c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e97cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e980: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36e980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e984: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36e984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e988: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x36e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e98c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e98cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e990: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x36e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e994: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x36e994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e998: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e99c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x36e99cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x36e9a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e9a4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36e9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e9a8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36e9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e9ac: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x36e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e9b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e9b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e9b4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x36e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e9b8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x36e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e9bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e9bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e9c0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x36e9c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x36e9c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e9c8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36e9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e9cc: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x36e9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x36e9d0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x36e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e9d4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x36e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e9d8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e9dc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e9e0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e9e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e9e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e9e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e9e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e9e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e9ec: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x36e9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e9f0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x36e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e9f4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x36e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e9f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e9fc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ea00: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x36ea00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x36ea04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ea04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ea08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36ea08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36ea0c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x36ea0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36ea10: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x36ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ea14: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ea18: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ea1c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ea20: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36ea20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36ea24: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36ea24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36ea28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36ea28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36ea2c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x36ea2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36ea30: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x36ea30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x36ea34: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x36ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ea38: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x36ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ea3c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36ea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ea40: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ea44: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36ea44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36ea48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36ea48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36ea4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36ea4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36ea50: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x36ea50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36ea54: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x36ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ea58: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x36ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ea5c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36ea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ea60: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ea64: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x36ea64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x36ea68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ea68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ea6c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36ea6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36ea70: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x36ea70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36ea74: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x36ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ea78: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36ea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ea7c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36ea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ea80: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ea84: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36ea84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36ea88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36ea88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36ea8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36ea8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36ea90: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x36ea90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36ea94: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x36ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ea98: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x36ea98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x36ea9c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x36ea9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36eaa0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x36eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36eaa4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x36eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36eaa8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x36eaa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x36eaac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36eaacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36eab0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36eab0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36eab4: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x36eab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36eab8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x36eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36eabc: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x36eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36eac0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x36eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36eac4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x36eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36eac8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36eac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36eacc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36eaccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36ead0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36ead0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36ead4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x36ead4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36ead8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x36ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36eadc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36eae0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36eae4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x36eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36eae8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x36eae8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x36eaec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x36eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36eaf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36eaf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36eaf4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x36eaf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x36eaf8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36eaf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36eafc: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x36eafcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36eb00: 0x16c0ff4b  bnez        $s6, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x36EB00u;
    {
        const bool branch_taken_0x36eb00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB00u;
        // 0x36eb04: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eb00) {
            ctx->pc = 0x36E830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e830;
        }
    }
    ctx->pc = 0x36EB08u;
label_36eb08:
    // 0x36eb08: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x36eb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36eb0c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x36eb0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36eb10: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x36eb10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36eb14: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x36eb14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36eb18: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x36eb18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36eb1c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x36eb1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36eb20: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x36eb20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36eb24: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x36eb24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36eb28: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x36eb28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36eb2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36eb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36eb30: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x36eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36eb34: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x36eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36eb38: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB38u;
        // 0x36eb3c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB40u;
}
