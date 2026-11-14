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

// Function: sub_001B77E0
// Address: 0x1b77e0 - 0x1b7a60
void sub_001B77E0_0x1b77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B77E0_0x1b77e0");
#endif

    ctx->pc = 0x1b77e0u;

    // 0x1b77e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b77e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b77e4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b77e8: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1b77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1b77ec: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1b77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1b77f0: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x1b77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x1b77f4: 0xafa90060  sw          $t1, 0x60($sp)
    ctx->pc = 0x1b77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 9));
    // 0x1b77f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b77fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b77fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7800: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7804: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7808: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x1b7808u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b780c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7810: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7814: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7818: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b781c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b781cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7820: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7824: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7828: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b782c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7830: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1b7830u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7834: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7838: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b783c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7840: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7844: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b7844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7848: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1b7848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b784c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b784cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7850: 0x0  nop
    ctx->pc = 0x1b7850u;
    // NOP
    // 0x1b7854: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b7854u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b7858: 0x4604181d  msub.s      $f0, $f3, $f4
    ctx->pc = 0x1b7858u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1b785c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b7860: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b7860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7864: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1b7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7868: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b7868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b786c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B786Cu;
    {
        const bool branch_taken_0x1b786c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b786c) {
            ctx->pc = 0x1B7880u;
            goto label_1b7880;
        }
    }
    ctx->pc = 0x1B7874u;
    // 0x1b7874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7878: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1B7878u;
    {
        const bool branch_taken_0x1b7878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7878) {
            ctx->pc = 0x1B7A54u;
            goto label_1b7a54;
        }
    }
    ctx->pc = 0x1B7880u;
label_1b7880:
    // 0x1b7880: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b7880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7884: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7888: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b788c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7890: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x1b7890u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7894: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7898: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b7898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b789c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b78a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b78a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78a4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b78a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b78a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b78ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b78acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b78b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b78b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78b8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1b78b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b78bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b78c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b78c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b78c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b78c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b78ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b78d0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1b78d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b78d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b78d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b78d8: 0x0  nop
    ctx->pc = 0x1b78d8u;
    // NOP
    // 0x1b78dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b78dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b78e0: 0x4603205d  msub.s      $f1, $f4, $f3
    ctx->pc = 0x1b78e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1b78e4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1b78e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b78e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b78ec: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b78ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b78f0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1b78f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b78f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b78f8: 0x0  nop
    ctx->pc = 0x1b78f8u;
    // NOP
    // 0x1b78fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b78fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7900: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7900u;
    {
        const bool branch_taken_0x1b7900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7900) {
            ctx->pc = 0x1B7924u;
            goto label_1b7924;
        }
    }
    ctx->pc = 0x1B7908u;
    // 0x1b7908: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1b7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b790c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b790cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7914: 0x0  nop
    ctx->pc = 0x1b7914u;
    // NOP
    // 0x1b7918: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b791c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B791Cu;
    {
        const bool branch_taken_0x1b791c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b791c) {
            ctx->pc = 0x1B7930u;
            goto label_1b7930;
        }
    }
    ctx->pc = 0x1B7924u;
label_1b7924:
    // 0x1b7924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7928: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1B7928u;
    {
        const bool branch_taken_0x1b7928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7928) {
            ctx->pc = 0x1B7A54u;
            goto label_1b7a54;
        }
    }
    ctx->pc = 0x1B7930u;
label_1b7930:
    // 0x1b7930: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b7930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7934: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7938: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b793c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7940: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x1b7940u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7944: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7948: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b7948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b794c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7950: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b7950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7954: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b7954u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7958: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b795c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7960: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7964: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7968: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1b7968u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b796c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7970: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7974: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7978: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b797c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b797cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7980: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1b7980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b7984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7988: 0x0  nop
    ctx->pc = 0x1b7988u;
    // NOP
    // 0x1b798c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b798cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b7990: 0x4603205d  msub.s      $f1, $f4, $f3
    ctx->pc = 0x1b7990u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1b7994: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1b7994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7998: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b7998u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b799c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b799cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b79a0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1b79a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b79a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b79a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b79a8: 0x0  nop
    ctx->pc = 0x1b79a8u;
    // NOP
    // 0x1b79ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b79acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b79b0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B79B0u;
    {
        const bool branch_taken_0x1b79b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b79b0) {
            ctx->pc = 0x1B79D4u;
            goto label_1b79d4;
        }
    }
    ctx->pc = 0x1B79B8u;
    // 0x1b79b8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1b79b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b79bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b79c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b79c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b79c4: 0x0  nop
    ctx->pc = 0x1b79c4u;
    // NOP
    // 0x1b79c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b79c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b79cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B79CCu;
    {
        const bool branch_taken_0x1b79cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b79cc) {
            ctx->pc = 0x1B79E0u;
            goto label_1b79e0;
        }
    }
    ctx->pc = 0x1B79D4u;
label_1b79d4:
    // 0x1b79d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b79d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79d8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B79D8u;
    {
        const bool branch_taken_0x1b79d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b79d8) {
            ctx->pc = 0x1B7A54u;
            goto label_1b7a54;
        }
    }
    ctx->pc = 0x1B79E0u;
label_1b79e0:
    // 0x1b79e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b79e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b79e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b79e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b79ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b79ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b79f0: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b79f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b79f4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1b79f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b79f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b79fc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b79fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7a04: 0x0  nop
    ctx->pc = 0x1b7a04u;
    // NOP
    // 0x1b7a08: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b7a08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b7a0c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b7a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b7a10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b7a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b7a18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7a1c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7a20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7a24: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7a28: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b7a28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7a2c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1b7a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7a30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7a34: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7a38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7a38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7a3c: 0x0  nop
    ctx->pc = 0x1b7a3cu;
    // NOP
    // 0x1b7a40: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b7a40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b7a44: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b7a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b7a48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a4c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b7a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7a54:
    // 0x1b7a54: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b7a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b7a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7A60u;
}
