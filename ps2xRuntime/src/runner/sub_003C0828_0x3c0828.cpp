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

// Function: sub_003C0828
// Address: 0x3c0828 - 0x3c0978
void sub_003C0828_0x3c0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0828_0x3c0828");
#endif

    ctx->pc = 0x3c0828u;

    // 0x3c0828: 0xc4a50014  lwc1        $f5, 0x14($a1)
    ctx->pc = 0x3c0828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c082c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3c082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0830: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x3c0830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c0834: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3c0834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0838: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x3c0838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c083c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c083cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c0840: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x3c0840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0844: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3c0844u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3c0848: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x3c0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c084c: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x3c084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c0850: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3c0850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c0854: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c0854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c0858: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3c0858u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x3c085c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c085cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c0860: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3c0860u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x3c0864: 0xe4850014  swc1        $f5, 0x14($a0)
    ctx->pc = 0x3c0864u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3c0868: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x3c0868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c086c: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x3c086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0870: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x3c0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0874: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3c0874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0878: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x3c0878u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3c087c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c087cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c0880: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3c0880u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3c0884: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x3c0884u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3c0888: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x3c0888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c088c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x3c088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0890: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x3c0890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c0894: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3c0894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0898: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3c0898u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c089c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c089cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c08a0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3c08a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3c08a4: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x3c08a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3c08a8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3c08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c08ac: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x3c08acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c08b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3c08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c08b4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3c08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c08b8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3c08b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x3c08bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c08bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c08c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3c08c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c08c4: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x3c08c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3c08c8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3c08c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c08cc: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3c08ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c08d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c08d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c08d4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3c08d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3c08d8: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x3c08d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3c08dc: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3c08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c08e0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3c08e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c08e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c08e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c08e8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c08e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3c08ec: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x3c08ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3c08f0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x3c08f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c08f4: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3c08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c08f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c08f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c08fc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c08fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c0900: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x3c0900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3c0904: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3c0904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0908: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3c0908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c090c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c090cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c0910: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3c0910u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3c0914: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x3c0914u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3c0918: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3c0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c091c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3c091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0920: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c0920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c0924: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c0924u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3c0928: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x3c0928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3c092c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3c092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0930: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3c0930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c0934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c0938: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c0938u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c093c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x3c093cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3c0940: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x3c0940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0944: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x3c0944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c0948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c094c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x3c094cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3c0950: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x3c0950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0954: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x3c0954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0958: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c0958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c095c: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x3c095cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3c0960: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x3c0960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0964: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x3c0964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c0968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c096c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C096Cu;
        // 0x3c0970: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C096Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0974u;
    // 0x3c0974: 0x0  nop
    ctx->pc = 0x3c0974u;
    // NOP
    ctx->pc = 0x3c0978u;
}
