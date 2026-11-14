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

// Function: sub_001FE910
// Address: 0x1fe910 - 0x1feb40
void sub_001FE910_0x1fe910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE910_0x1fe910");
#endif

    ctx->pc = 0x1fe910u;

    // 0x1fe910: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fe910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fe914: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fe914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe924: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1fe924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1fe928: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1fe928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1fe92c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1fe92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1fe930: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1fe930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe934: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE934u;
    {
        const bool branch_taken_0x1fe934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe934) {
            ctx->pc = 0x1FE948u;
            goto label_1fe948;
        }
    }
    ctx->pc = 0x1FE93Cu;
    // 0x1fe93c: 0x8fb10070  lw          $s1, 0x70($sp)
    ctx->pc = 0x1fe93cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe940: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE940u;
    {
        const bool branch_taken_0x1fe940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe940) {
            ctx->pc = 0x1FE94Cu;
            goto label_1fe94c;
        }
    }
    ctx->pc = 0x1FE948u;
label_1fe948:
    // 0x1fe948: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe94c:
    // 0x1fe94c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1fe94cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe950: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fe950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe954: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE954u;
    {
        const bool branch_taken_0x1fe954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe954) {
            ctx->pc = 0x1FE968u;
            goto label_1fe968;
        }
    }
    ctx->pc = 0x1FE95Cu;
    // 0x1fe95c: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x1fe95cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe960: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE960u;
    {
        const bool branch_taken_0x1fe960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe960) {
            ctx->pc = 0x1FE96Cu;
            goto label_1fe96c;
        }
    }
    ctx->pc = 0x1FE968u;
label_1fe968:
    // 0x1fe968: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fe968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe96c:
    // 0x1fe96c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1fe96cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe970: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fe970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fe974: 0xc465bfb8  lwc1        $f5, -0x4048($v1)
    ctx->pc = 0x1fe974u;
    { uint32_t bits = FAST_READ32(0x60BFB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fe978: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE978u;
    {
        const bool branch_taken_0x1fe978 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x1fe978) {
            ctx->pc = 0x1FE994u;
            goto label_1fe994;
        }
    }
    ctx->pc = 0x1FE980u;
    // 0x1fe980: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1fe980u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe984: 0x0  nop
    ctx->pc = 0x1fe984u;
    // NOP
    // 0x1fe988: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1fe988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1fe98c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE98Cu;
    {
        const bool branch_taken_0x1fe98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe98c) {
            ctx->pc = 0x1FE9B0u;
            goto label_1fe9b0;
        }
    }
    ctx->pc = 0x1FE994u;
label_1fe994:
    // 0x1fe994: 0x132042  srl         $a0, $s3, 1
    ctx->pc = 0x1fe994u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x1fe998: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x1fe998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1fe99c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fe99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fe9a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fe9a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe9a4: 0x0  nop
    ctx->pc = 0x1fe9a4u;
    // NOP
    // 0x1fe9a8: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1fe9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1fe9ac: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1fe9acu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1fe9b0:
    // 0x1fe9b0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fe9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fe9b4: 0xc463bfc8  lwc1        $f3, -0x4038($v1)
    ctx->pc = 0x1fe9b4u;
    { uint32_t bits = FAST_READ32(0x60BFC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fe9b8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1fe9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe9bc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE9BCu;
    {
        const bool branch_taken_0x1fe9bc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fe9bc) {
            ctx->pc = 0x1FE9D8u;
            goto label_1fe9d8;
        }
    }
    ctx->pc = 0x1FE9C4u;
    // 0x1fe9c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fe9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe9c8: 0x0  nop
    ctx->pc = 0x1fe9c8u;
    // NOP
    // 0x1fe9cc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fe9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fe9d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE9D0u;
    {
        const bool branch_taken_0x1fe9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe9d0) {
            ctx->pc = 0x1FE9F4u;
            goto label_1fe9f4;
        }
    }
    ctx->pc = 0x1FE9D8u;
label_1fe9d8:
    // 0x1fe9d8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1fe9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1fe9dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fe9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fe9e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fe9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fe9e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fe9e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe9e8: 0x0  nop
    ctx->pc = 0x1fe9e8u;
    // NOP
    // 0x1fe9ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fe9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fe9f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1fe9f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1fe9f4:
    // 0x1fe9f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fe9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fe9f8: 0xc461bfc0  lwc1        $f1, -0x4040($v1)
    ctx->pc = 0x1fe9f8u;
    { uint32_t bits = FAST_READ32(0x60BFC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe9fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fea00: 0x0  nop
    ctx->pc = 0x1fea00u;
    // NOP
    // 0x1fea04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1fea04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1fea08: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x1fea08u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1fea0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1fea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1fea10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fea10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fea14: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fea14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fea18: 0xc460bfc8  lwc1        $f0, -0x4038($v1)
    ctx->pc = 0x1fea18u;
    { uint32_t bits = FAST_READ32(0x60BFC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fea1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fea1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fea20: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1fea20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fea24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fea24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fea28: 0x0  nop
    ctx->pc = 0x1fea28u;
    // NOP
    // 0x1fea2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1fea2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1fea30: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1fea30u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1fea34: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fea34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1fea38: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fea38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fea3c: 0xc465bfbc  lwc1        $f5, -0x4044($v1)
    ctx->pc = 0x1fea3cu;
    { uint32_t bits = FAST_READ32(0x60BFBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fea40: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEA40u;
    {
        const bool branch_taken_0x1fea40 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1fea40) {
            ctx->pc = 0x1FEA5Cu;
            goto label_1fea5c;
        }
    }
    ctx->pc = 0x1FEA48u;
    // 0x1fea48: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1fea48u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fea4c: 0x0  nop
    ctx->pc = 0x1fea4cu;
    // NOP
    // 0x1fea50: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1fea50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1fea54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEA54u;
    {
        const bool branch_taken_0x1fea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea54) {
            ctx->pc = 0x1FEA78u;
            goto label_1fea78;
        }
    }
    ctx->pc = 0x1FEA5Cu;
label_1fea5c:
    // 0x1fea5c: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x1fea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1fea60: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1fea60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1fea64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fea64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fea68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fea68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fea6c: 0x0  nop
    ctx->pc = 0x1fea6cu;
    // NOP
    // 0x1fea70: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1fea70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1fea74: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1fea74u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1fea78:
    // 0x1fea78: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fea78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fea7c: 0xc463bfc8  lwc1        $f3, -0x4038($v1)
    ctx->pc = 0x1fea7cu;
    { uint32_t bits = FAST_READ32(0x60BFC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fea80: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fea84: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEA84u;
    {
        const bool branch_taken_0x1fea84 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fea84) {
            ctx->pc = 0x1FEAA0u;
            goto label_1feaa0;
        }
    }
    ctx->pc = 0x1FEA8Cu;
    // 0x1fea8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fea8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fea90: 0x0  nop
    ctx->pc = 0x1fea90u;
    // NOP
    // 0x1fea94: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fea94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fea98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEA98u;
    {
        const bool branch_taken_0x1fea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea98) {
            ctx->pc = 0x1FEABCu;
            goto label_1feabc;
        }
    }
    ctx->pc = 0x1FEAA0u;
label_1feaa0:
    // 0x1feaa0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1feaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1feaa4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1feaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1feaa8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1feaa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1feaac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1feaacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feab0: 0x0  nop
    ctx->pc = 0x1feab0u;
    // NOP
    // 0x1feab4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1feab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1feab8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1feab8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1feabc:
    // 0x1feabc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1feabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1feac0: 0xc461bfc4  lwc1        $f1, -0x403C($v1)
    ctx->pc = 0x1feac0u;
    { uint32_t bits = FAST_READ32(0x60BFC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1feac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1feac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feac8: 0x0  nop
    ctx->pc = 0x1feac8u;
    // NOP
    // 0x1feacc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1feaccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1fead0: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x1fead0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1fead4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1fead4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1fead8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fead8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1feadc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1feadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1feae0: 0xc460bfc8  lwc1        $f0, -0x4038($v1)
    ctx->pc = 0x1feae0u;
    { uint32_t bits = FAST_READ32(0x60BFC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feae4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1feae4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1feae8: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1feae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1feaec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1feaecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feaf0: 0x0  nop
    ctx->pc = 0x1feaf0u;
    // NOP
    // 0x1feaf4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1feaf4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1feaf8: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1feaf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1feafc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1feafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1feb00: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1feb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1feb04: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1feb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1feb08: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1feb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1feb0c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1feb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feb10: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1feb10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1feb14: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1feb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1feb18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1feb18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1feb1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1feb1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feb20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1feb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feb24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1feb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb28: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1feb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1feb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEB34u;
    // 0x1feb34: 0x0  nop
    ctx->pc = 0x1feb34u;
    // NOP
    // 0x1feb38: 0x0  nop
    ctx->pc = 0x1feb38u;
    // NOP
    // 0x1feb3c: 0x0  nop
    ctx->pc = 0x1feb3cu;
    // NOP
    ctx->pc = 0x1feb40u;
}
