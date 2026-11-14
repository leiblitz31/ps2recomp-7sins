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

// Function: sub_003C78F0
// Address: 0x3c78f0 - 0x3c7e28
void sub_003C78F0_0x3c78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C78F0_0x3c78f0");
#endif

    switch (ctx->pc) {
        case 0x3c7a38u: goto label_3c7a38;
        case 0x3c7c20u: goto label_3c7c20;
        default: break;
    }

    ctx->pc = 0x3c78f0u;

    // 0x3c78f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c78f4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3c78f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c78f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c78fc: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3c78fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x3c7900: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c7900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c7904: 0x24e8e320  addiu       $t0, $a3, -0x1CE0
    ctx->pc = 0x3c7904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959904));
    // 0x3c7908: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c7908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c790c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3c790cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7910: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c7910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c7914: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3c7914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3c7918: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3c7918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3c791c: 0x7fb60000  sq          $s6, 0x0($sp)
    ctx->pc = 0x3c791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 22));
    // 0x3c7920: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c7920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3c7924: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c7924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3c7928: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x3c7928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c792c: 0xc5490024  lwc1        $f9, 0x24($t2)
    ctx->pc = 0x3c792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c7930: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7934: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c7934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c7938: 0xc5470028  lwc1        $f7, 0x28($t2)
    ctx->pc = 0x3c7938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c793c: 0x460c12c0  add.s       $f11, $f2, $f12
    ctx->pc = 0x3c793cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x3c7940: 0xc548002c  lwc1        $f8, 0x2C($t2)
    ctx->pc = 0x3c7940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c7944: 0xc5450014  lwc1        $f5, 0x14($t2)
    ctx->pc = 0x3c7944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c794c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c794cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c7950: 0xc5410018  lwc1        $f1, 0x18($t2)
    ctx->pc = 0x3c7950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7954: 0xc546001c  lwc1        $f6, 0x1C($t2)
    ctx->pc = 0x3c7954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c7958: 0x8ceee320  lw          $t6, -0x1CE0($a3)
    ctx->pc = 0x3c7958u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294959904)));
    // 0x3c795c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3c795cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c7960: 0x8d190008  lw          $t9, 0x8($t0)
    ctx->pc = 0x3c7960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3c7964: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x3c7964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7968: 0xc5440000  lwc1        $f4, 0x0($t2)
    ctx->pc = 0x3c7968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c796c: 0x46026881  sub.s       $f2, $f13, $f2
    ctx->pc = 0x3c796cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x3c7970: 0xc543000c  lwc1        $f3, 0xC($t2)
    ctx->pc = 0x3c7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7974: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3c7974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3c7978: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x3c7978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x3c797c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x3c797cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x3c7980: 0x460c18c1  sub.s       $f3, $f3, $f12
    ctx->pc = 0x3c7980u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x3c7984: 0xe54b0008  swc1        $f11, 0x8($t2)
    ctx->pc = 0x3c7984u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x3c7988: 0x46091242  mul.s       $f9, $f2, $f9
    ctx->pc = 0x3c7988u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x3c798c: 0x460711c2  mul.s       $f7, $f2, $f7
    ctx->pc = 0x3c798cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x3c7990: 0x46081202  mul.s       $f8, $f2, $f8
    ctx->pc = 0x3c7990u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x3c7994: 0xe543000c  swc1        $f3, 0xC($t2)
    ctx->pc = 0x3c7994u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x3c7998: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x3c7998u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x3c799c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x3c799cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x3c79a0: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x3c79a0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x3c79a4: 0xe5450014  swc1        $f5, 0x14($t2)
    ctx->pc = 0x3c79a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x3c79a8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3c79a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3c79ac: 0xe5410018  swc1        $f1, 0x18($t2)
    ctx->pc = 0x3c79acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x3c79b0: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x3c79b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x3c79b4: 0xe546001c  swc1        $f6, 0x1C($t2)
    ctx->pc = 0x3c79b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x3c79b8: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x3c79b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x3c79bc: 0xe5440000  swc1        $f4, 0x0($t2)
    ctx->pc = 0x3c79bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x3c79c0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3c79c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c79c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c79c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c79c8: 0x8ce6e320  lw          $a2, -0x1CE0($a3)
    ctx->pc = 0x3c79c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294959904)));
    // 0x3c79cc: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3c79ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c79d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c79d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c79d4: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3c79d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3c79d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c79d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c79dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c79dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c79e0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c79e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c79e4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3c79e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c79e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c79e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c79ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c79ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c79f0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3c79f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3c79f4: 0xace6e320  sw          $a2, -0x1CE0($a3)
    ctx->pc = 0x3c79f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294959904), GPR_U32(ctx, 6));
    // 0x3c79f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3c79f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c79fc: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x3c79fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x3c7a00: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7a00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7a04: 0xe5400010  swc1        $f0, 0x10($t2)
    ctx->pc = 0x3c7a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x3c7a08: 0x10a000fd  beqz        $a1, . + 4 + (0xFD << 2)
    ctx->pc = 0x3C7A08u;
    {
        const bool branch_taken_0x3c7a08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A08u;
        // 0x3c7a0c: 0x24afffff  addiu       $t7, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a08) {
            ctx->pc = 0x3C7E00u;
            goto label_3c7e00;
        }
    }
    ctx->pc = 0x3C7A10u;
    // 0x3c7a10: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x3c7a10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7a14: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3c7a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7a18: 0x8f8cbda8  lw          $t4, -0x4258($gp)
    ctx->pc = 0x3c7a18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950312)));
    // 0x3c7a1c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3c7a1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7a20: 0x1a0882d  daddu       $s1, $t5, $zero
    ctx->pc = 0x3c7a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7a24: 0x46006986  mov.s       $f6, $f13
    ctx->pc = 0x3c7a24u;
    ctx->f[6] = FPU_MOV_S(ctx->f[13]);
    // 0x3c7a28: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x3c7a28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3c7a2c: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x3c7a2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x3c7a30: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3c7a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7a34: 0x25580014  addiu       $t8, $t2, 0x14
    ctx->pc = 0x3c7a34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
label_3c7a38:
    // 0x3c7a38: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7A38u;
    {
        const bool branch_taken_0x3c7a38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A38u;
        // 0x3c7a3c: 0x8e0be320  lw          $t3, -0x1CE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a38) {
            ctx->pc = 0x3C7A5Cu;
            goto label_3c7a5c;
        }
    }
    ctx->pc = 0x3C7A40u;
    // 0x3c7a40: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x3c7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3c7a44: 0x46066301  sub.s       $f12, $f12, $f6
    ctx->pc = 0x3c7a44u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x3c7a48: 0x8da3000c  lw          $v1, 0xC($t5)
    ctx->pc = 0x3c7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x3c7a4c: 0x8da40008  lw          $a0, 0x8($t5)
    ctx->pc = 0x3c7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3c7a50: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3c7a50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3c7a54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C7A54u;
    {
        const bool branch_taken_0x3c7a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A54u;
        // 0x3c7a58: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a54) {
            ctx->pc = 0x3C7A88u;
            goto label_3c7a88;
        }
    }
    ctx->pc = 0x3C7A5Cu;
label_3c7a5c:
    // 0x3c7a5c: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x3c7a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7a60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c7a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c7a64: 0x8da40008  lw          $a0, 0x8($t5)
    ctx->pc = 0x3c7a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3c7a68: 0xc5a0000c  lwc1        $f0, 0xC($t5)
    ctx->pc = 0x3c7a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7a6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c7a70: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3c7a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x3c7a74: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3c7a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3c7a78: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c7a7c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3c7a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c7a80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7a80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c7a84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c7a84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c7a88:
    // 0x3c7a88: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x3c7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3c7a8c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3c7a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c7a90: 0xae42e320  sw          $v0, -0x1CE0($s2)
    ctx->pc = 0x3c7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294959904), GPR_U32(ctx, 2));
    // 0x3c7a94: 0xada40008  sw          $a0, 0x8($t5)
    ctx->pc = 0x3c7a94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 4));
    // 0x3c7a98: 0x8e05e320  lw          $a1, -0x1CE0($s0)
    ctx->pc = 0x3c7a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959904)));
    // 0x3c7a9c: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x3c7a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7aa0: 0x8da60008  lw          $a2, 0x8($t5)
    ctx->pc = 0x3c7aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3c7aa4: 0x26290040  addiu       $t1, $s1, 0x40
    ctx->pc = 0x3c7aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c7aa8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3c7aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7aac: 0x1c5402a  slt         $t0, $t6, $a1
    ctx->pc = 0x3c7aacu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3c7ab0: 0x1c7182a  slt         $v1, $t6, $a3
    ctx->pc = 0x3c7ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c7ab4: 0xd9202a  slt         $a0, $a2, $t9
    ctx->pc = 0x3c7ab4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3c7ab8: 0xe3100a  movz        $v0, $a3, $v1
    ctx->pc = 0x3c7ab8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x3c7abc: 0x324300b  movn        $a2, $t9, $a0
    ctx->pc = 0x3c7abcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 25));
    // 0x3c7ac0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3c7ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x3c7ac4: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x3c7ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x3c7ac8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3c7ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3c7acc: 0x1c8280b  movn        $a1, $t6, $t0
    ctx->pc = 0x3c7accu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 14));
    // 0x3c7ad0: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x3c7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3c7ad4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3c7ad4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3c7ad8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3c7ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3c7adc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3c7adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3c7ae0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3c7ae0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3c7ae4: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x3c7ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x3c7ae8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3c7ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c7aec: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3c7aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7af0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x3c7af0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3c7af4: 0x25e7ffff  addiu       $a3, $t7, -0x1
    ctx->pc = 0x3c7af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x3c7af8: 0xc520ffe0  lwc1        $f0, -0x20($t1)
    ctx->pc = 0x3c7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7afc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c7afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c7b00: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x3c7b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7b04: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3c7b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3c7b08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c7b08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c7b0c: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x3c7b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x3c7b10: 0xc440ffe4  lwc1        $f0, -0x1C($v0)
    ctx->pc = 0x3c7b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7b14: 0xc7020004  lwc1        $f2, 0x4($t8)
    ctx->pc = 0x3c7b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7b18: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c7b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c7b1c: 0xc441ffe8  lwc1        $f1, -0x18($v0)
    ctx->pc = 0x3c7b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7b20: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3c7b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3c7b24: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3c7b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3c7b28: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3c7b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3c7b2c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c7b2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c7b30: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3c7b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3c7b34: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x3c7b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7b38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c7b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c7b3c: 0x18c00084  blez        $a2, . + 4 + (0x84 << 2)
    ctx->pc = 0x3C7B3Cu;
    {
        const bool branch_taken_0x3c7b3c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3C7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B3Cu;
        // 0x3c7b40: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b3c) {
            ctx->pc = 0x3C7D50u;
            goto label_3c7d50;
        }
    }
    ctx->pc = 0x3C7B44u;
    // 0x3c7b44: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3c7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x3c7b48: 0x26c3e320  addiu       $v1, $s6, -0x1CE0
    ctx->pc = 0x3c7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959904));
    // 0x3c7b4c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3c7b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3c7b50: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3C7B50u;
    {
        const bool branch_taken_0x3c7b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B50u;
        // 0x3c7b54: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b50) {
            ctx->pc = 0x3C7C20u;
            goto label_3c7c20;
        }
    }
    ctx->pc = 0x3C7B58u;
    // 0x3c7b58: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3c7b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c7b5c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3C7B5Cu;
    {
        const bool branch_taken_0x3c7b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B5Cu;
        // 0x3c7b60: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b5c) {
            ctx->pc = 0x3C7C0Cu;
            goto label_3c7c0c;
        }
    }
    ctx->pc = 0x3C7B64u;
    // 0x3c7b64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C7B64u;
    {
        const bool branch_taken_0x3c7b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B64u;
        // 0x3c7b68: 0xc4610040  lwc1        $f1, 0x40($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b64) {
            ctx->pc = 0x3C7BC0u;
            goto label_3c7bc0;
        }
    }
    ctx->pc = 0x3C7B6Cu;
    // 0x3c7b6c: 0x2585000c  addiu       $a1, $t4, 0xC
    ctx->pc = 0x3c7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x3c7b70: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3c7b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3c7b74: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x3c7b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x3c7b78: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7b7c: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x3c7b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x3c7b80: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7b84: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x3c7b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x3c7b88: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x3c7b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7b8c: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x3c7b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7b90: 0xc4620048  lwc1        $f2, 0x48($v1)
    ctx->pc = 0x3c7b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7b94: 0xc4630050  lwc1        $f3, 0x50($v1)
    ctx->pc = 0x3c7b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7b98: 0xc4640054  lwc1        $f4, 0x54($v1)
    ctx->pc = 0x3c7b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7b9c: 0xc4650058  lwc1        $f5, 0x58($v1)
    ctx->pc = 0x3c7b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7ba0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c7ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c7ba4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c7ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c7ba8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3c7ba8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3c7bac: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x3c7bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3c7bb0: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x3c7bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x3c7bb4: 0xe4620048  swc1        $f2, 0x48($v1)
    ctx->pc = 0x3c7bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x3c7bb8: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x3c7bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7bbc: 0x0  nop
    ctx->pc = 0x3c7bbcu;
    // NOP
label_3c7bc0:
    // 0x3c7bc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3c7bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3c7bc4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x3c7bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3c7bc8: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7bcc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3c7bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3c7bd0: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7bd4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3c7bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3c7bd8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3c7bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3c7bdc: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x3c7bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7be0: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x3c7be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7be4: 0xc4620048  lwc1        $f2, 0x48($v1)
    ctx->pc = 0x3c7be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7be8: 0xc4630050  lwc1        $f3, 0x50($v1)
    ctx->pc = 0x3c7be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7bec: 0xc4640054  lwc1        $f4, 0x54($v1)
    ctx->pc = 0x3c7becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7bf0: 0xc4650058  lwc1        $f5, 0x58($v1)
    ctx->pc = 0x3c7bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7bf4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c7bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c7bf8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c7bf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c7bfc: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3c7bfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3c7c00: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x3c7c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3c7c04: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x3c7c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x3c7c08: 0xe4620048  swc1        $f2, 0x48($v1)
    ctx->pc = 0x3c7c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
label_3c7c0c:
    // 0x3c7c0c: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x3c7c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7c10: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3c7c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3c7c14: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3C7C14u;
    {
        const bool branch_taken_0x3c7c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C14u;
        // 0x3c7c18: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c14) {
            ctx->pc = 0x3C7D04u;
            goto label_3c7d04;
        }
    }
    ctx->pc = 0x3C7C1Cu;
    // 0x3c7c1c: 0x0  nop
    ctx->pc = 0x3c7c1cu;
    // NOP
label_3c7c20:
    // 0x3c7c20: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x3c7c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7c24: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3c7c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x3c7c28: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x3c7c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3c7c2c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7c30: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3c7c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3c7c34: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7c38: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3c7c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3c7c3c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3c7c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3c7c40: 0xc4650040  lwc1        $f5, 0x40($v1)
    ctx->pc = 0x3c7c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7c44: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7c48: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7c4c: 0xc4620050  lwc1        $f2, 0x50($v1)
    ctx->pc = 0x3c7c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7c50: 0xc4630054  lwc1        $f3, 0x54($v1)
    ctx->pc = 0x3c7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7c54: 0xc4640058  lwc1        $f4, 0x58($v1)
    ctx->pc = 0x3c7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7c58: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x3c7c58u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x3c7c5c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c7c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c7c60: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c7c60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c7c64: 0xe4650040  swc1        $f5, 0x40($v1)
    ctx->pc = 0x3c7c64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3c7c68: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x3c7c6c: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x3c7c70: 0xe4a50000  swc1        $f5, 0x0($a1)
    ctx->pc = 0x3c7c70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3c7c74: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7c78: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3c7c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3c7c7c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7c80: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3c7c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3c7c84: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3c7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3c7c88: 0xc4650040  lwc1        $f5, 0x40($v1)
    ctx->pc = 0x3c7c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7c8c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7c90: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7c94: 0xc4620050  lwc1        $f2, 0x50($v1)
    ctx->pc = 0x3c7c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7c98: 0xc4630054  lwc1        $f3, 0x54($v1)
    ctx->pc = 0x3c7c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7c9c: 0xc4640058  lwc1        $f4, 0x58($v1)
    ctx->pc = 0x3c7c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7ca0: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x3c7ca0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x3c7ca4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c7ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c7ca8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c7ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c7cac: 0xe4650040  swc1        $f5, 0x40($v1)
    ctx->pc = 0x3c7cacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3c7cb0: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x3c7cb4: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x3c7cb8: 0xe4a50000  swc1        $f5, 0x0($a1)
    ctx->pc = 0x3c7cb8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3c7cbc: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7cc0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3c7cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3c7cc4: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7cc8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3c7cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3c7ccc: 0xc4650040  lwc1        $f5, 0x40($v1)
    ctx->pc = 0x3c7cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7cd0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3c7cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3c7cd4: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7cd8: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7cdc: 0xc4620050  lwc1        $f2, 0x50($v1)
    ctx->pc = 0x3c7cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7ce0: 0xc4630054  lwc1        $f3, 0x54($v1)
    ctx->pc = 0x3c7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7ce4: 0xc4640058  lwc1        $f4, 0x58($v1)
    ctx->pc = 0x3c7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7ce8: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x3c7ce8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x3c7cec: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c7cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c7cf0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c7cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c7cf4: 0xe4650040  swc1        $f5, 0x40($v1)
    ctx->pc = 0x3c7cf4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3c7cf8: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x3c7cfc: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x3c7d00: 0xe4a50000  swc1        $f5, 0x0($a1)
    ctx->pc = 0x3c7d00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3c7d04:
    // 0x3c7d04: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x3c7d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7d08: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3c7d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3c7d0c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c7d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7d10: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3c7d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3c7d14: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3c7d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3c7d18: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x3c7d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7d1c: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x3c7d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7d20: 0xc4620048  lwc1        $f2, 0x48($v1)
    ctx->pc = 0x3c7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7d24: 0xc4630050  lwc1        $f3, 0x50($v1)
    ctx->pc = 0x3c7d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7d28: 0xc4640054  lwc1        $f4, 0x54($v1)
    ctx->pc = 0x3c7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7d2c: 0xc4650058  lwc1        $f5, 0x58($v1)
    ctx->pc = 0x3c7d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7d30: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c7d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c7d34: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c7d34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c7d38: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3c7d38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3c7d3c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x3c7d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3c7d40: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x3c7d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x3c7d44: 0x1cc0ffb6  bgtz        $a2, . + 4 + (-0x4A << 2)
    ctx->pc = 0x3C7D44u;
    {
        const bool branch_taken_0x3c7d44 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3C7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D44u;
        // 0x3c7d48: 0xe4620048  swc1        $f2, 0x48($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d44) {
            ctx->pc = 0x3C7C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7c20;
        }
    }
    ctx->pc = 0x3C7D4Cu;
    // 0x3c7d4c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3c7d4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d50:
    // 0x3c7d50: 0x51e00019  beql        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C7D50u;
    {
        const bool branch_taken_0x3c7d50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7d50) {
            ctx->pc = 0x3C7D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7D50u;
            // 0x3c7d54: 0xc5430024  lwc1        $f3, 0x24($t2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7DB8u;
            goto label_3c7db8;
        }
    }
    ctx->pc = 0x3C7D58u;
    // 0x3c7d58: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x3c7d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3c7d5c: 0x46066301  sub.s       $f12, $f12, $f6
    ctx->pc = 0x3c7d5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x3c7d60: 0x8e0ee320  lw          $t6, -0x1CE0($s0)
    ctx->pc = 0x3c7d60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959904)));
    // 0x3c7d64: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x3c7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x3c7d68: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3c7d68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3c7d6c: 0x8db90008  lw          $t9, 0x8($t5)
    ctx->pc = 0x3c7d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3c7d70: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x3c7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x3c7d74: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3c7d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3c7d78: 0xae03e320  sw          $v1, -0x1CE0($s0)
    ctx->pc = 0x3c7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959904), GPR_U32(ctx, 3));
    // 0x3c7d7c: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x3c7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3c7d80: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x3c7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x3c7d84: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x3c7d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7d88: 0xc5410018  lwc1        $f1, 0x18($t2)
    ctx->pc = 0x3c7d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7d8c: 0xc542001c  lwc1        $f2, 0x1C($t2)
    ctx->pc = 0x3c7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7d90: 0xc5430024  lwc1        $f3, 0x24($t2)
    ctx->pc = 0x3c7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7d94: 0xc5440028  lwc1        $f4, 0x28($t2)
    ctx->pc = 0x3c7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7d98: 0xc545002c  lwc1        $f5, 0x2C($t2)
    ctx->pc = 0x3c7d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7d9c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c7d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c7da0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c7da0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c7da4: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3c7da4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3c7da8: 0xe5400014  swc1        $f0, 0x14($t2)
    ctx->pc = 0x3c7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x3c7dac: 0xe5410018  swc1        $f1, 0x18($t2)
    ctx->pc = 0x3c7dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x3c7db0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3C7DB0u;
    {
        const bool branch_taken_0x3c7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DB0u;
        // 0x3c7db4: 0xe542001c  swc1        $f2, 0x1C($t2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7db0) {
            ctx->pc = 0x3C7DF0u;
            goto label_3c7df0;
        }
    }
    ctx->pc = 0x3C7DB8u;
label_3c7db8:
    // 0x3c7db8: 0xc5440028  lwc1        $f4, 0x28($t2)
    ctx->pc = 0x3c7db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7dbc: 0xc545002c  lwc1        $f5, 0x2C($t2)
    ctx->pc = 0x3c7dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7dc0: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x3c7dc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x3c7dc4: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x3c7dc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x3c7dc8: 0xc5420014  lwc1        $f2, 0x14($t2)
    ctx->pc = 0x3c7dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7dcc: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x3c7dccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x3c7dd0: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x3c7dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7dd4: 0xc541001c  lwc1        $f1, 0x1C($t2)
    ctx->pc = 0x3c7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7dd8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3c7dd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3c7ddc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3c7ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3c7de0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3c7de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3c7de4: 0xe5420014  swc1        $f2, 0x14($t2)
    ctx->pc = 0x3c7de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x3c7de8: 0xe5400018  swc1        $f0, 0x18($t2)
    ctx->pc = 0x3c7de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x3c7dec: 0xe541001c  swc1        $f1, 0x1C($t2)
    ctx->pc = 0x3c7decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
label_3c7df0:
    // 0x3c7df0: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x3c7df0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7df4: 0x15f3ff10  bne         $t7, $s3, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x3C7DF4u;
    {
        const bool branch_taken_0x3c7df4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 19));
        if (branch_taken_0x3c7df4) {
            ctx->pc = 0x3C7A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7a38;
        }
    }
    ctx->pc = 0x3C7DFCu;
    // 0x3c7dfc: 0xaf8cbda8  sw          $t4, -0x4258($gp)
    ctx->pc = 0x3c7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950312), GPR_U32(ctx, 12));
label_3c7e00:
    // 0x3c7e00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c7e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c7e04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c7e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c7e08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c7e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c7e0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c7e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7e10: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3c7e10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7e14: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3c7e14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7e18: 0x7bb60000  lq          $s6, 0x0($sp)
    ctx->pc = 0x3c7e18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E1Cu;
        // 0x3c7e20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7E24u;
    // 0x3c7e24: 0x0  nop
    ctx->pc = 0x3c7e24u;
    // NOP
    ctx->pc = 0x3c7e28u;
}
