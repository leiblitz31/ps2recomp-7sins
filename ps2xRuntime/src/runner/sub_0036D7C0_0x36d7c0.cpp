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

// Function: sub_0036D7C0
// Address: 0x36d7c0 - 0x36da00
void sub_0036D7C0_0x36d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D7C0_0x36d7c0");
#endif

    switch (ctx->pc) {
        case 0x36d918u: goto label_36d918;
        default: break;
    }

    ctx->pc = 0x36d7c0u;

    // 0x36d7c0: 0xc5080068  lwc1        $f8, 0x68($t0)
    ctx->pc = 0x36d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x36d7c4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36d7c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36d7c8: 0xc500006c  lwc1        $f0, 0x6C($t0)
    ctx->pc = 0x36d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d7cc: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x36d7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36d7d0: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x36d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36d7d4: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x36d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36d7d8: 0x46074382  mul.s       $f14, $f8, $f7
    ctx->pc = 0x36d7d8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x36d7dc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x36d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36d7e0: 0x46050242  mul.s       $f9, $f0, $f5
    ctx->pc = 0x36d7e0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x36d7e4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x36d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36d7e8: 0x46064342  mul.s       $f13, $f8, $f6
    ctx->pc = 0x36d7e8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x36d7ec: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x36d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36d7f0: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x36d7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36d7f4: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x36d7f4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x36d7f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x36d7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36d7fc: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x36d7fcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x36d800: 0x46097380  add.s       $f14, $f14, $f9
    ctx->pc = 0x36d800u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[9]);
    // 0x36d804: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x36d804u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x36d808: 0xe7ad0030  swc1        $f13, 0x30($sp)
    ctx->pc = 0x36d808u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36d80c: 0xe7ae0038  swc1        $f14, 0x38($sp)
    ctx->pc = 0x36d80cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36d810: 0xe7a80034  swc1        $f8, 0x34($sp)
    ctx->pc = 0x36d810u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36d814: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36d814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36d818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d81c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x36d81cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x36d820: 0xc5010070  lwc1        $f1, 0x70($t0)
    ctx->pc = 0x36d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d824: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x36d824u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x36d828: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x36d828u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x36d82c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x36d82cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x36d830: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x36d830u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x36d834: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x36d834u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x36d838: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x36d838u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36d83c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x36d83cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36d840: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x36d840u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36d844: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x36d844u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x36d848: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x36d848u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x36d84c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x36d84cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36d850: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x36d850u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x36d854: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x36d854u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x36d858: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x36d858u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x36d85c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x36d85cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x36d860: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x36d860u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x36d864: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x36d864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x36d868: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x36d868u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x36d86c: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x36d86cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x36d870: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36d870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36d874: 0x46003a47  neg.s       $f9, $f7
    ctx->pc = 0x36d874u;
    ctx->f[9] = FPU_NEG_S(ctx->f[7]);
    // 0x36d878: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x36d878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x36d87c: 0x46030280  add.s       $f10, $f0, $f3
    ctx->pc = 0x36d87cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x36d880: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x36d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x36d884: 0x46020ac0  add.s       $f11, $f1, $f2
    ctx->pc = 0x36d884u;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36d888: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36d888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d88c: 0x46054b00  add.s       $f12, $f9, $f5
    ctx->pc = 0x36d88cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x36d890: 0x460333c0  add.s       $f15, $f6, $f3
    ctx->pc = 0x36d890u;
    ctx->f[15] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x36d894: 0x46022400  add.s       $f16, $f4, $f2
    ctx->pc = 0x36d894u;
    ctx->f[16] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x36d898: 0x46053c40  add.s       $f17, $f7, $f5
    ctx->pc = 0x36d898u;
    ctx->f[17] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x36d89c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36d89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36d8a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36d8a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36d8a4: 0x46054a41  sub.s       $f9, $f9, $f5
    ctx->pc = 0x36d8a4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x36d8a8: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x36d8a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x36d8ac: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x36d8acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x36d8b0: 0x460539c1  sub.s       $f7, $f7, $f5
    ctx->pc = 0x36d8b0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x36d8b4: 0x460d5280  add.s       $f10, $f10, $f13
    ctx->pc = 0x36d8b4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x36d8b8: 0x46085ac0  add.s       $f11, $f11, $f8
    ctx->pc = 0x36d8b8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
    // 0x36d8bc: 0x460e6300  add.s       $f12, $f12, $f14
    ctx->pc = 0x36d8bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x36d8c0: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x36d8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x36d8c4: 0xe7aa0024  swc1        $f10, 0x24($sp)
    ctx->pc = 0x36d8c4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36d8c8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x36d8c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x36d8cc: 0xe7ab0028  swc1        $f11, 0x28($sp)
    ctx->pc = 0x36d8ccu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36d8d0: 0x460e4a40  add.s       $f9, $f9, $f14
    ctx->pc = 0x36d8d0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[14]);
    // 0x36d8d4: 0xe7ac002c  swc1        $f12, 0x2C($sp)
    ctx->pc = 0x36d8d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36d8d8: 0x460d3180  add.s       $f6, $f6, $f13
    ctx->pc = 0x36d8d8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x36d8dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36d8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36d8e0: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x36d8e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x36d8e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36d8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36d8e8: 0x460e39c0  add.s       $f7, $f7, $f14
    ctx->pc = 0x36d8e8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[14]);
    // 0x36d8ec: 0xe7a90008  swc1        $f9, 0x8($sp)
    ctx->pc = 0x36d8ecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36d8f0: 0x460d7bc0  add.s       $f15, $f15, $f13
    ctx->pc = 0x36d8f0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[13]);
    // 0x36d8f4: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x36d8f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x36d8f8: 0x46088400  add.s       $f16, $f16, $f8
    ctx->pc = 0x36d8f8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[8]);
    // 0x36d8fc: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x36d8fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36d900: 0x460e8c40  add.s       $f17, $f17, $f14
    ctx->pc = 0x36d900u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[14]);
    // 0x36d904: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x36d904u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36d908: 0xe7af0018  swc1        $f15, 0x18($sp)
    ctx->pc = 0x36d908u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36d90c: 0xe7b0001c  swc1        $f16, 0x1C($sp)
    ctx->pc = 0x36d90cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x36d910: 0x18e00038  blez        $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x36D910u;
    {
        const bool branch_taken_0x36d910 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D910u;
        // 0x36d914: 0xe7b10020  swc1        $f17, 0x20($sp) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d910) {
            ctx->pc = 0x36D9F4u;
            goto label_36d9f4;
        }
    }
    ctx->pc = 0x36D918u;
label_36d918:
    // 0x36d918: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x36d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d91c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36d91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36d920: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d924: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d924u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d928: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36d928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36d92c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d930: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d934: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d938: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36d938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36d93c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36d93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d940: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d944: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d944u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d948: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36d948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36d94c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36d950: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36d950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d954: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x36d954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d958: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d95c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36d95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36d960: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d964: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x36d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d968: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d96c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36d96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36d970: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d974: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36d974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d978: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d97c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36d97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36d980: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36d980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36d984: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36d984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d988: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x36d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d98c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d990: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36d990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36d994: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36d994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d998: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x36d998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d99c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d99cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d9a0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36d9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36d9a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d9a8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x36d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d9ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d9b0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36d9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36d9b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36d9b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d9bc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x36d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d9c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d9c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36d9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36d9c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d9cc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d9d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d9d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d9d4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36d9d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36d9d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d9dc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x36d9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d9e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36d9e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d9e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d9e8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36d9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36d9ec: 0x14e0ffca  bnez        $a3, . + 4 + (-0x36 << 2)
    ctx->pc = 0x36D9ECu;
    {
        const bool branch_taken_0x36d9ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D9ECu;
        // 0x36d9f0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d9ec) {
            ctx->pc = 0x36D918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d918;
        }
    }
    ctx->pc = 0x36D9F4u;
label_36d9f4:
    // 0x36d9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D9F4u;
        // 0x36d9f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D9FCu;
    // 0x36d9fc: 0x0  nop
    ctx->pc = 0x36d9fcu;
    // NOP
    ctx->pc = 0x36da00u;
}
