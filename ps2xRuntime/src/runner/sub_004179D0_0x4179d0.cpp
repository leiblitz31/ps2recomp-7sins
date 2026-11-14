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

// Function: sub_004179D0
// Address: 0x4179d0 - 0x417ba8
void sub_004179D0_0x4179d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004179D0_0x4179d0");
#endif

    switch (ctx->pc) {
        case 0x417b90u: goto label_417b90;
        default: break;
    }

    ctx->pc = 0x4179d0u;

    // 0x4179d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4179d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4179d4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x4179d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x4179d8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x4179d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x4179dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4179dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4179e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4179e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4179e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4179e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4179e8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x4179e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4179ec: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x4179ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4179f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4179f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4179f4: 0x46070202  mul.s       $f8, $f0, $f7
    ctx->pc = 0x4179f4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x4179f8: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x4179f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x4179fc: 0xc4440050  lwc1        $f4, 0x50($v0)
    ctx->pc = 0x4179fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417a00: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x417a00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x417a04: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x417a04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x417a08: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x417a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x417a0c: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x417a0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x417a10: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x417a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x417a14: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x417a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417a18: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x417a18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x417a1c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x417a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x417a20: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x417a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417a24: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x417a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x417a28: 0x46000a07  neg.s       $f8, $f1
    ctx->pc = 0x417a28u;
    ctx->f[8] = FPU_NEG_S(ctx->f[1]);
    // 0x417a2c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x417a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417a30: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417a34: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x417a34u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x417a38: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x417a38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x417a3c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x417a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417a40: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417a44: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x417a44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x417a48: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x417a48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x417a4c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x417a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417a50: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417a54: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x417a54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x417a58: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x417a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x417a5c: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x417a5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x417a60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x417a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x417a64: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x417a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x417a68: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x417a68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x417a6c: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x417a6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x417a70: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x417a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417a74: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x417a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417a78: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x417a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x417a7c: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x417a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417a80: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x417a80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x417a84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x417a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x417a88: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x417a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x417a8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x417a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x417a90: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x417a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x417a94: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x417a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x417a98: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x417a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x417a9c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x417a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417aa0: 0x46070a02  mul.s       $f8, $f1, $f7
    ctx->pc = 0x417aa0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x417aa4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x417aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x417aa8: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x417aa8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x417aac: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x417aacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x417ab0: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x417ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417ab4: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x417ab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x417ab8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x417ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x417abc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x417abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417ac0: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x417ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x417ac4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x417ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x417ac8: 0xc604007c  lwc1        $f4, 0x7C($s0)
    ctx->pc = 0x417ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417acc: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x417accu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x417ad0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x417ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417ad4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417ad8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x417ad8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x417adc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x417adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x417ae0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x417ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417ae4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417ae8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x417ae8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x417aec: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x417aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x417af0: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x417af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417af4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x417af8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x417af8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x417afc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x417afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x417b00: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x417b00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x417b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x417b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417b08: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x417b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x417b0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x417b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417b10: 0xe4c10024  swc1        $f1, 0x24($a2)
    ctx->pc = 0x417b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x417b14: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x417b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417b18: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x417b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417b1c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x417b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x417b20: 0xc4640038  lwc1        $f4, 0x38($v1)
    ctx->pc = 0x417b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417b24: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x417b24u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x417b28: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x417b28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x417b2c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x417b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x417b30: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x417b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x417b34: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x417b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x417b38: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x417b38u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x417b3c: 0xe4c60034  swc1        $f6, 0x34($a2)
    ctx->pc = 0x417b3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x417b40: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x417b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417b44: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x417b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x417b48: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x417b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417b4c: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x417b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x417b50: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x417b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417b54: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x417b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x417b58: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x417b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417b5c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x417b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417b60: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x417b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417b64: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x417b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x417b68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x417b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x417b6c: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x417b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417b70: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x417b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x417b74: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x417b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417b78: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x417b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x417b7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x417b7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x417b80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x417b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x417b84: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x417b84u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x417b88: 0xc103afe  jal         func_40EBF8
    ctx->pc = 0x417B88u;
    SET_GPR_U32(ctx, 31, 0x417B90u);
    ctx->pc = 0x417B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417B88u;
    // 0x417b8c: 0xe4c10038  swc1        $f1, 0x38($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40EBF8u, 0x417B88u, 0x417B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417B90u;
label_417b90:
    // 0x417b90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x417b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417b98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x417b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x417b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x417B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417B9Cu;
        // 0x417ba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417BA4u;
    // 0x417ba4: 0x0  nop
    ctx->pc = 0x417ba4u;
    // NOP
    ctx->pc = 0x417ba8u;
}
