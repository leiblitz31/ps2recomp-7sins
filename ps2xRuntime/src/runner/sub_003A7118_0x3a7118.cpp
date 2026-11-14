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

// Function: sub_003A7118
// Address: 0x3a7118 - 0x3a7360
void sub_003A7118_0x3a7118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7118_0x3a7118");
#endif

    ctx->pc = 0x3a7118u;

    // 0x3a7118: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a7118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a711c: 0xc5080000  lwc1        $f8, 0x0($t0)
    ctx->pc = 0x3a711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3a7120: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3a7120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3a7124: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a7124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a7128: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x3a7128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a712c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x3a712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7130: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x3a7130u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x3a7134: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3a7134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a7138: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x3a7138u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x3a713c: 0x46044229  min.s       $f8, $f8, $f4
    ctx->pc = 0x3a713cu;
    ctx->f[8] = std::min(ctx->f[8], ctx->f[4]);
    // 0x3a7140: 0x46034228  max.s       $f8, $f8, $f3
    ctx->pc = 0x3a7140u;
    ctx->f[8] = std::max(ctx->f[8], ctx->f[3]);
    // 0x3a7144: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x3a7144u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a7148: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x3a7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a714c: 0xc5070004  lwc1        $f7, 0x4($t0)
    ctx->pc = 0x3a714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3a7150: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x3a7150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7154: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x3a7154u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x3a7158: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x3a7158u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x3a715c: 0x460439e9  min.s       $f7, $f7, $f4
    ctx->pc = 0x3a715cu;
    ctx->f[7] = std::min(ctx->f[7], ctx->f[4]);
    // 0x3a7160: 0x460339e8  max.s       $f7, $f7, $f3
    ctx->pc = 0x3a7160u;
    ctx->f[7] = std::max(ctx->f[7], ctx->f[3]);
    // 0x3a7164: 0xe4470004  swc1        $f7, 0x4($v0)
    ctx->pc = 0x3a7164u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3a7168: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x3a7168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a716c: 0xc5060008  lwc1        $f6, 0x8($t0)
    ctx->pc = 0x3a716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3a7170: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x3a7170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7174: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3a7174u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a7178: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x3a7178u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x3a717c: 0x460431a9  min.s       $f6, $f6, $f4
    ctx->pc = 0x3a717cu;
    ctx->f[6] = std::min(ctx->f[6], ctx->f[4]);
    // 0x3a7180: 0x460331a8  max.s       $f6, $f6, $f3
    ctx->pc = 0x3a7180u;
    ctx->f[6] = std::max(ctx->f[6], ctx->f[3]);
    // 0x3a7184: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x3a7184u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3a7188: 0xc505000c  lwc1        $f5, 0xC($t0)
    ctx->pc = 0x3a7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a718c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3a718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7190: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x3a7190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7194: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3a7194u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a7198: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3a7198u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x3a719c: 0x46042969  min.s       $f5, $f5, $f4
    ctx->pc = 0x3a719cu;
    ctx->f[5] = std::min(ctx->f[5], ctx->f[4]);
    // 0x3a71a0: 0x46032968  max.s       $f5, $f5, $f3
    ctx->pc = 0x3a71a0u;
    ctx->f[5] = std::max(ctx->f[5], ctx->f[3]);
    // 0x3a71a4: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x3a71a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3a71a8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3a71a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a71ac: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x3a71acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a71b0: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x3a71b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a71b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a71b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a71b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a71b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a71bc: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x3a71bcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x3a71c0: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x3a71c0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x3a71c4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x3a71c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3a71c8: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x3a71c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a71cc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3a71ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a71d0: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x3a71d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a71d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a71d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a71d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a71d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a71dc: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x3a71dcu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x3a71e0: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x3a71e0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x3a71e4: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x3a71e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x3a71e8: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x3a71e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a71ec: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3a71ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a71f0: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x3a71f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a71f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a71f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a71f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a71f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a71fc: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x3a71fcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x3a7200: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x3a7200u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x3a7204: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3a7204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3a7208: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x3a7208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a720c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3a720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7210: 0xc542000c  lwc1        $f2, 0xC($t2)
    ctx->pc = 0x3a7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7214: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a7214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a7218: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a7218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a721c: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x3a721cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x3a7220: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x3a7220u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x3a7224: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x3a7224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3a7228: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3a7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a722c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x3a722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7230: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x3a7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7234: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a7234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a7238: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a7238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a723c: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x3a723cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x3a7240: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x3a7240u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x3a7244: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3a7244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3a7248: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x3a7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a724c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3a724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7250: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x3a7250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7254: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a7254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a7258: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a7258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a725c: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x3a725cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x3a7260: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x3a7260u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x3a7264: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x3a7264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3a7268: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x3a7268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a726c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3a726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7270: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x3a7270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7274: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a7274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a7278: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a7278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a727c: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x3a727cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x3a7280: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x3a7280u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x3a7284: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3a7284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3a7288: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3a7288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a728c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3a728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7290: 0xc542000c  lwc1        $f2, 0xC($t2)
    ctx->pc = 0x3a7290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7294: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a7294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a7298: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a7298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a729c: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x3a729cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x3a72a0: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x3a72a0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x3a72a4: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x3a72a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x3a72a8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3a72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a72ac: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x3a72acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a72b0: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x3a72b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a72b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a72b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a72b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a72b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a72bc: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x3a72bcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x3a72c0: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x3a72c0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x3a72c4: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x3a72c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x3a72c8: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x3a72c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a72cc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3a72ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a72d0: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x3a72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a72d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a72d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a72d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a72d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a72dc: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x3a72dcu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x3a72e0: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x3a72e0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x3a72e4: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x3a72e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x3a72e8: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x3a72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a72ec: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3a72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a72f0: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x3a72f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a72f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a72f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a72f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a72f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a72fc: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x3a72fcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x3a7300: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x3a7300u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x3a7304: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x3a7304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x3a7308: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x3a7308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a730c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3a730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7310: 0xc542000c  lwc1        $f2, 0xC($t2)
    ctx->pc = 0x3a7310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7314: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a7314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a7318: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a7318u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a731c: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x3a731cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x3a7320: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x3a7320u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x3a7324: 0xe4410054  swc1        $f1, 0x54($v0)
    ctx->pc = 0x3a7324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x3a7328: 0x46004024  .word       0x46004024                   # cvt.w.s     $f0, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a732c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a732cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a7330: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7334: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a7334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3a7338: 0xa0430060  sb          $v1, 0x60($v0)
    ctx->pc = 0x3a7338u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a733c: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a733cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7340: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a7340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a7344: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7348: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a7348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a734c: 0xa0450061  sb          $a1, 0x61($v0)
    ctx->pc = 0x3a734cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a7350: 0xa0440062  sb          $a0, 0x62($v0)
    ctx->pc = 0x3a7350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 98), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a7354: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7354u;
        // 0x3a7358: 0xa0430063  sb          $v1, 0x63($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 99), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A735Cu;
    // 0x3a735c: 0x0  nop
    ctx->pc = 0x3a735cu;
    // NOP
    ctx->pc = 0x3a7360u;
}
