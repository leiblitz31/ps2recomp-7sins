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

// Function: sub_00216110
// Address: 0x216110 - 0x2162b0
void sub_00216110_0x216110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216110_0x216110");
#endif

    ctx->pc = 0x216110u;

    // 0x216110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216114: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x216118: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x216118u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21611c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x21611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216120: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x216120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x216124: 0x3c034561  lui         $v1, 0x4561
    ctx->pc = 0x216124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17761 << 16));
    // 0x216128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x216128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21612c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x21612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216130: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x216130u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x216134: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x216134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x216138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x216138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21613c: 0x0  nop
    ctx->pc = 0x21613cu;
    // NOP
    // 0x216140: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x216140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216144: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x216144u;
    {
        const bool branch_taken_0x216144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x216144) {
            ctx->pc = 0x21615Cu;
            goto label_21615c;
        }
    }
    ctx->pc = 0x21614Cu;
    // 0x21614c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21614cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x216150: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x216150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x216154: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x216154u;
    {
        const bool branch_taken_0x216154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216154) {
            ctx->pc = 0x216170u;
            goto label_216170;
        }
    }
    ctx->pc = 0x21615Cu;
label_21615c:
    // 0x21615c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x21615cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x216160: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x216164: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x216164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x216168: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x216168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x21616c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x21616cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_216170:
    // 0x216170: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x216170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x216174: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x216174u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x216178: 0x1810  mfhi        $v1
    ctx->pc = 0x216178u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21617c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21617Cu;
    {
        const bool branch_taken_0x21617c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x21617c) {
            ctx->pc = 0x216198u;
            goto label_216198;
        }
    }
    ctx->pc = 0x216184u;
    // 0x216184: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x216184u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216188: 0x0  nop
    ctx->pc = 0x216188u;
    // NOP
    // 0x21618c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21618cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216190: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x216190u;
    {
        const bool branch_taken_0x216190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216190) {
            ctx->pc = 0x2161B4u;
            goto label_2161b4;
        }
    }
    ctx->pc = 0x216198u;
label_216198:
    // 0x216198: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x216198u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x21619c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x21619cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2161a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2161a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2161a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2161a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161a8: 0x0  nop
    ctx->pc = 0x2161a8u;
    // NOP
    // 0x2161ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2161acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2161b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2161b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2161b4:
    // 0x2161b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2161b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2161b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2161b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2161bc: 0x3c034561  lui         $v1, 0x4561
    ctx->pc = 0x2161bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17761 << 16));
    // 0x2161c0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2161c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2161c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2161c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2161c8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2161c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2161cc: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2161ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2161d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2161d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161d4: 0x0  nop
    ctx->pc = 0x2161d4u;
    // NOP
    // 0x2161d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2161d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2161dc: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2161dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2161e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2161e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2161e4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2161e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2161e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2161e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2161ec: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2161ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2161f0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2161f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2161f4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2161f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2161f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2161f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161fc: 0x0  nop
    ctx->pc = 0x2161fcu;
    // NOP
    // 0x216200: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x216200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216204: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x216204u;
    {
        const bool branch_taken_0x216204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x216204) {
            ctx->pc = 0x21621Cu;
            goto label_21621c;
        }
    }
    ctx->pc = 0x21620Cu;
    // 0x21620c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21620cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x216210: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x216210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x216214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x216214u;
    {
        const bool branch_taken_0x216214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216214) {
            ctx->pc = 0x216230u;
            goto label_216230;
        }
    }
    ctx->pc = 0x21621Cu;
label_21621c:
    // 0x21621c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x21621cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x216220: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x216224: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x216224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x216228: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x216228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x21622c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x21622cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_216230:
    // 0x216230: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216230u;
    {
        const bool branch_taken_0x216230 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x216230) {
            ctx->pc = 0x21624Cu;
            goto label_21624c;
        }
    }
    ctx->pc = 0x216238u;
    // 0x216238: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x216238u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21623c: 0x0  nop
    ctx->pc = 0x21623cu;
    // NOP
    // 0x216240: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x216244u;
    {
        const bool branch_taken_0x216244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216244) {
            ctx->pc = 0x216268u;
            goto label_216268;
        }
    }
    ctx->pc = 0x21624Cu;
label_21624c:
    // 0x21624c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x21624cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x216250: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x216250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x216254: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x216254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x216258: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x216258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21625c: 0x0  nop
    ctx->pc = 0x21625cu;
    // NOP
    // 0x216260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216264: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x216264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_216268:
    // 0x216268: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x216268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21626c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x216270: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x216270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216274: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x216274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x216278: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x216278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x21627c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x21627cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x216280: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x216280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x216284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216288: 0x0  nop
    ctx->pc = 0x216288u;
    // NOP
    // 0x21628c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x21628cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x216290: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x216290u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x216294: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x216294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x216298: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x216298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21629c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21629cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2162a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2162a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2162a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2162a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2162a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2162A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2162A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2162B0u;
}
