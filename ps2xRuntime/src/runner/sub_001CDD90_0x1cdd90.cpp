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

// Function: sub_001CDD90
// Address: 0x1cdd90 - 0x1cdf40
void sub_001CDD90_0x1cdd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDD90_0x1cdd90");
#endif

    switch (ctx->pc) {
        case 0x1cddbcu: goto label_1cddbc;
        default: break;
    }

    ctx->pc = 0x1cdd90u;

    // 0x1cdd90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1cdd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1cdd94: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1cdd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1cdd98: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1cdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1cdd9c: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1cdd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1cdda0: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1cdda0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1cdda4: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x1cdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x1cdda8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cdda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cddac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cddacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cddb0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDDB0u;
    {
        const bool branch_taken_0x1cddb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cddb0) {
            ctx->pc = 0x1CDDD8u;
            goto label_1cddd8;
        }
    }
    ctx->pc = 0x1CDDB8u;
    // 0x1cddb8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cddbc:
    // 0x1cddbc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cddbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cddc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cddc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cddc8: 0x0  nop
    ctx->pc = 0x1cddc8u;
    // NOP
    // 0x1cddcc: 0x0  nop
    ctx->pc = 0x1cddccu;
    // NOP
    // 0x1cddd0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CDDD0u;
    {
        const bool branch_taken_0x1cddd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cddd0) {
            ctx->pc = 0x1CDDBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cddbc;
        }
    }
    ctx->pc = 0x1CDDD8u;
label_1cddd8:
    // 0x1cddd8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1cddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cdddc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1cdddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdde0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1cdde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cdde4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cdde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdde8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdde8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cddec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1cddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1cddf0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1cddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cddf4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cddf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1cddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cddfc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cde00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cde04: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cde04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cde08: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1cde08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cde0c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1cde0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cde10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1cde10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cde14: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1cde14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cde18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1cde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cde1c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1cde1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cde20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cde20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cde24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cde28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cde28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cde2c: 0x0  nop
    ctx->pc = 0x1cde2cu;
    // NOP
    // 0x1cde30: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cde30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cde34: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1cde34u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cde38: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1cde38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1cde3c: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x1cde3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cde40: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x1cde40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cde44: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1cde44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cde48: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1cde48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cde4c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1cde4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cde50: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1cde50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cde54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cde58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cde58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cde5c: 0x0  nop
    ctx->pc = 0x1cde5cu;
    // NOP
    // 0x1cde60: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cde60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cde64: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1cde64u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cde68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cde68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cde6c: 0x0  nop
    ctx->pc = 0x1cde6cu;
    // NOP
    // 0x1cde70: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cde70u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cde74: 0x4604281d  msub.s      $f0, $f5, $f4
    ctx->pc = 0x1cde74u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1cde78: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1cde78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1cde7c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1cde7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cde80: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1cde80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cde84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cde88: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cde88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cde8c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1cde8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cde90: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1cde90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cde94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cde98: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDE98u;
    {
        const bool branch_taken_0x1cde98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cde98) {
            ctx->pc = 0x1CDEACu;
            goto label_1cdeac;
        }
    }
    ctx->pc = 0x1CDEA0u;
    // 0x1cdea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdea4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CDEA4u;
    {
        const bool branch_taken_0x1cdea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdea4) {
            ctx->pc = 0x1CDF2Cu;
            goto label_1cdf2c;
        }
    }
    ctx->pc = 0x1CDEACu;
label_1cdeac:
    // 0x1cdeac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1cdeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdeb0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1cdeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdeb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdeb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cdeb8: 0x46000004  c1          0x4
    ctx->pc = 0x1cdeb8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cdebc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1cdebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1cdec0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1cdec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdec4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1cdec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cdecc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cdeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1cded0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1cded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cded4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1cded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cded8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdedc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cdedcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cdee0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cdee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cdee4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cdee8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cdee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdeec: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cdeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdef0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cdef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cdef4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1cdef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cdef8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cdefc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1cdefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdf00: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1cdf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdf04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cdf04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdf08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cdf0c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cdf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cdf10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1cdf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cdf14: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cdf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdf18: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1cdf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdf1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cdf1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdf20: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1cdf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cdf24: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cdf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cdf28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdf2c:
    // 0x1cdf2c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1cdf2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cdf30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDF38u;
    // 0x1cdf38: 0x0  nop
    ctx->pc = 0x1cdf38u;
    // NOP
    // 0x1cdf3c: 0x0  nop
    ctx->pc = 0x1cdf3cu;
    // NOP
    ctx->pc = 0x1cdf40u;
}
