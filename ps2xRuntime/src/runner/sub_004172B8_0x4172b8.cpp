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

// Function: sub_004172B8
// Address: 0x4172b8 - 0x417490
void sub_004172B8_0x4172b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004172B8_0x4172b8");
#endif

    switch (ctx->pc) {
        case 0x41747cu: goto label_41747c;
        default: break;
    }

    ctx->pc = 0x4172b8u;

    // 0x4172b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4172b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4172bc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x4172bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x4172c0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x4172c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x4172c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4172c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4172c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4172c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4172cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4172ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4172d0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x4172d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4172d4: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x4172d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4172d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4172d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4172dc: 0x46070202  mul.s       $f8, $f0, $f7
    ctx->pc = 0x4172dcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x4172e0: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x4172e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x4172e4: 0xc4440050  lwc1        $f4, 0x50($v0)
    ctx->pc = 0x4172e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4172e8: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x4172e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x4172ec: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x4172ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4172f0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x4172f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4172f4: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x4172f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x4172f8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x4172f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4172fc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x4172fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417300: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x417300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x417304: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x417304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x417308: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x417308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41730c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x41730cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x417310: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x417310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x417314: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x417314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x417318: 0x46013201  sub.s       $f8, $f6, $f1
    ctx->pc = 0x417318u;
    ctx->f[8] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x41731c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x41731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417320: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417324: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x417324u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x417328: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x417328u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x41732c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x41732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417330: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417334: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x417334u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x417338: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x417338u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x41733c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x41733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417340: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417344: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x417344u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x417348: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x417348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x41734c: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x41734cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x417350: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x417350u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x417354: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x417354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x417358: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x417358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41735c: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x41735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417360: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x417360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x417364: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x417364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417368: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x417368u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x41736c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x41736cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x417370: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x417370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x417374: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x417374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x417378: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x417378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x41737c: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x41737cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x417380: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x417380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x417384: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x417384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417388: 0x46070a02  mul.s       $f8, $f1, $f7
    ctx->pc = 0x417388u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x41738c: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x41738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417390: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x417390u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x417394: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x417394u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x417398: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x417398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41739c: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x41739cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x4173a0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x4173a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4173a4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4173a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4173a8: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x4173a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x4173ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x4173acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4173b0: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x4173b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4173b4: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x4173b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x4173b8: 0x46060a00  add.s       $f8, $f1, $f6
    ctx->pc = 0x4173b8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x4173bc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x4173bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4173c0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x4173c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x4173c4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4173c4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4173c8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x4173c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4173cc: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x4173ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4173d0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x4173d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x4173d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4173d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4173d8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x4173d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4173dc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x4173dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4173e0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x4173e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x4173e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4173e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4173e8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x4173e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4173ec: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x4173ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4173f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4173f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4173f4: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x4173f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x4173f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4173f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4173fc: 0xe4c20024  swc1        $f2, 0x24($a2)
    ctx->pc = 0x4173fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x417400: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x417400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417404: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x417404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417408: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x417408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x41740c: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x41740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417410: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x417410u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x417414: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x417414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x417418: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x417418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x41741c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x41741cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x417420: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x417420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x417424: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x417424u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x417428: 0xe4c60034  swc1        $f6, 0x34($a2)
    ctx->pc = 0x417428u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x41742c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x41742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417430: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x417430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x417434: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x417434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417438: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x417438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x41743c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x41743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417440: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x417440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x417444: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x417444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417448: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x417448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41744c: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x41744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417450: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x417450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x417454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x417454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x417458: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x417458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41745c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x41745cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x417460: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x417460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417464: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x417464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x417468: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x417468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x41746c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x41746cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x417470: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x417470u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x417474: 0xc103afe  jal         func_40EBF8
    ctx->pc = 0x417474u;
    SET_GPR_U32(ctx, 31, 0x41747Cu);
    ctx->pc = 0x417478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417474u;
    // 0x417478: 0xe4c10038  swc1        $f1, 0x38($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40EBF8u, 0x417474u, 0x41747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41747Cu;
label_41747c:
    // 0x41747c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41747cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x417480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417484: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x417484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x417488: 0x3e00008  jr          $ra
    ctx->pc = 0x417488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417488u;
        // 0x41748c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417490u;
}
