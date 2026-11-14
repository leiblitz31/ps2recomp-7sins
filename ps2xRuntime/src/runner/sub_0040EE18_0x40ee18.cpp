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

// Function: sub_0040EE18
// Address: 0x40ee18 - 0x40f0a0
void sub_0040EE18_0x40ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040EE18_0x40ee18");
#endif

    switch (ctx->pc) {
        case 0x40f07cu: goto label_40f07c;
        case 0x40f088u: goto label_40f088;
        default: break;
    }

    ctx->pc = 0x40ee18u;

    // 0x40ee18: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x40ee18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x40ee1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40ee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40ee20: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x40ee20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x40ee24: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x40ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x40ee28: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x40ee28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ee2c: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x40ee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40ee30: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x40ee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40ee34: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x40ee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40ee38: 0x460529c2  mul.s       $f7, $f5, $f5
    ctx->pc = 0x40ee38u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x40ee3c: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x40ee3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x40ee40: 0x46042182  mul.s       $f6, $f4, $f4
    ctx->pc = 0x40ee40u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x40ee44: 0x460749c1  sub.s       $f7, $f9, $f7
    ctx->pc = 0x40ee44u;
    ctx->f[7] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x40ee48: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x40ee48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x40ee4c: 0x46064981  sub.s       $f6, $f9, $f6
    ctx->pc = 0x40ee4cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x40ee50: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x40ee50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x40ee54: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x40ee54u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x40ee58: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x40ee58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x40ee5c: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x40ee5cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x40ee60: 0xe7a60084  swc1        $f6, 0x84($sp)
    ctx->pc = 0x40ee60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x40ee64: 0xe7a70088  swc1        $f7, 0x88($sp)
    ctx->pc = 0x40ee64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x40ee68: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x40ee68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x40ee6c: 0x46082882  mul.s       $f2, $f5, $f8
    ctx->pc = 0x40ee6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x40ee70: 0x46044042  mul.s       $f1, $f8, $f4
    ctx->pc = 0x40ee70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x40ee74: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x40ee74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x40ee78: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x40ee78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x40ee7c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x40ee7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x40ee80: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x40ee80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x40ee84: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x40ee84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x40ee88: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x40ee88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x40ee8c: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x40ee8cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x40ee90: 0x460d2942  mul.s       $f5, $f5, $f13
    ctx->pc = 0x40ee90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x40ee94: 0xe7a80090  swc1        $f8, 0x90($sp)
    ctx->pc = 0x40ee94u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x40ee98: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x40ee98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x40ee9c: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x40ee9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x40eea0: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x40eea0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x40eea4: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x40eea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x40eea8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x40eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40eeac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40eeb0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x40eeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40eeb4: 0x46050a81  sub.s       $f10, $f1, $f5
    ctx->pc = 0x40eeb4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x40eeb8: 0x460412c0  add.s       $f11, $f2, $f4
    ctx->pc = 0x40eeb8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x40eebc: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x40eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x40eec0: 0x46081801  sub.s       $f0, $f3, $f8
    ctx->pc = 0x40eec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x40eec4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x40eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x40eec8: 0x460749c1  sub.s       $f7, $f9, $f7
    ctx->pc = 0x40eec8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x40eecc: 0xe7aa0010  swc1        $f10, 0x10($sp)
    ctx->pc = 0x40eeccu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40eed0: 0x46064a41  sub.s       $f9, $f9, $f6
    ctx->pc = 0x40eed0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x40eed4: 0xe7ab0020  swc1        $f11, 0x20($sp)
    ctx->pc = 0x40eed4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40eed8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x40eed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x40eedc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x40eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40eee0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x40eee0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x40eee4: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x40eee4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x40eee8: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x40eee8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x40eeec: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x40eeecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40eef0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x40eef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40eef4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x40eef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40eef8: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x40eef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x40eefc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x40eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x40ef00: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x40EF00u;
    {
        const bool branch_taken_0x40ef00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x40EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF00u;
        // 0x40ef04: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef00) {
            ctx->pc = 0x40EF44u;
            goto label_40ef44;
        }
    }
    ctx->pc = 0x40EF08u;
    // 0x40ef08: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x40EF08u;
    {
        const bool branch_taken_0x40ef08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF08u;
        // 0x40ef0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef08) {
            ctx->pc = 0x40EF20u;
            goto label_40ef20;
        }
    }
    ctx->pc = 0x40EF10u;
    // 0x40ef10: 0x10c2002d  beq         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x40EF10u;
    {
        const bool branch_taken_0x40ef10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x40EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF10u;
        // 0x40ef14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef10) {
            ctx->pc = 0x40EFC8u;
            goto label_40efc8;
        }
    }
    ctx->pc = 0x40EF18u;
    // 0x40ef18: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x40EF18u;
    {
        const bool branch_taken_0x40ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF18u;
        // 0x40ef1c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef18) {
            ctx->pc = 0x40F068u;
            goto label_40f068;
        }
    }
    ctx->pc = 0x40EF20u;
label_40ef20:
    // 0x40ef20: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x40ef20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40ef24: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x40ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x40ef28: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x40ef28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40ef2c: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x40ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x40ef30: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x40ef30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40ef34: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x40ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x40ef38: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x40ef38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40ef3c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x40EF3Cu;
    {
        const bool branch_taken_0x40ef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF3Cu;
        // 0x40ef40: 0x7ce30030  sq          $v1, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef3c) {
            ctx->pc = 0x40F090u;
            goto label_40f090;
        }
    }
    ctx->pc = 0x40EF44u;
label_40ef44:
    // 0x40ef44: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x40ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x40ef48: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x40ef48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40ef4c: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x40ef4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40ef50: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x40ef50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40ef54: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x40ef54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40ef58: 0x9fa3000c  lwu         $v1, 0xC($sp)
    ctx->pc = 0x40ef58u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x40ef5c: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x40ef5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40ef60: 0xd8e60010  lqc2        $vf6, 0x10($a3)
    ctx->pc = 0x40ef60u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x40ef64: 0xd8e70020  lqc2        $vf7, 0x20($a3)
    ctx->pc = 0x40ef64u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x40ef68: 0xd8e80030  lqc2        $vf8, 0x30($a3)
    ctx->pc = 0x40ef68u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x40ef6c: 0x9ce4000c  lwu         $a0, 0xC($a3)
    ctx->pc = 0x40ef6cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40ef70: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x40ef70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40ef74: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x40ef74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40ef78: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x40ef78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x40ef7c: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x40ef7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40ef80: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x40ef80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40ef84: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x40ef84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x40ef88: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x40ef88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40ef8c: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x40ef8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40ef90: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x40ef90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x40ef94: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x40ef94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40ef98: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x40ef98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40ef9c: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x40ef9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40efa0: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x40efa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x40efa4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x40efa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x40efa8: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x40efa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x40efac: 0xf84a0010  sqc2        $vf10, 0x10($v0)
    ctx->pc = 0x40efacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x40efb0: 0xf84b0020  sqc2        $vf11, 0x20($v0)
    ctx->pc = 0x40efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x40efb4: 0xf84c0030  sqc2        $vf12, 0x30($v0)
    ctx->pc = 0x40efb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x40efb8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x40efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x40efbc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x40EFBCu;
    {
        const bool branch_taken_0x40efbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFBCu;
        // 0x40efc0: 0x7ba50040  lq          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40efbc) {
            ctx->pc = 0x40F048u;
            goto label_40f048;
        }
    }
    ctx->pc = 0x40EFC4u;
    // 0x40efc4: 0x0  nop
    ctx->pc = 0x40efc4u;
    // NOP
label_40efc8:
    // 0x40efc8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x40efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x40efcc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x40efccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40efd0: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x40efd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x40efd4: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x40efd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x40efd8: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x40efd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x40efdc: 0x9ce3000c  lwu         $v1, 0xC($a3)
    ctx->pc = 0x40efdcu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40efe0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x40efe0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40efe4: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x40efe4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40efe8: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x40efe8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40efec: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x40efecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40eff0: 0x9fa4000c  lwu         $a0, 0xC($sp)
    ctx->pc = 0x40eff0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x40eff4: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x40eff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40eff8: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x40eff8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40effc: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x40effcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x40f000: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x40f000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f004: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x40f004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f008: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x40f008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x40f00c: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x40f00cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f010: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x40f010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f014: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x40f014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x40f018: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x40f018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f01c: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x40f01cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f020: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x40f020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f024: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x40f024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x40f028: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x40f028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x40f02c: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x40f02cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x40f030: 0xf84a0010  sqc2        $vf10, 0x10($v0)
    ctx->pc = 0x40f030u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x40f034: 0xf84b0020  sqc2        $vf11, 0x20($v0)
    ctx->pc = 0x40f034u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x40f038: 0xf84c0030  sqc2        $vf12, 0x30($v0)
    ctx->pc = 0x40f038u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x40f03c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x40f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x40f040: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x40f040u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40f044: 0x0  nop
    ctx->pc = 0x40f044u;
    // NOP
label_40f048:
    // 0x40f048: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x40f048u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x40f04c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x40f04cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40f050: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x40f050u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x40f054: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x40f054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40f058: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x40f058u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x40f05c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x40f05cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40f060: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x40F060u;
    {
        const bool branch_taken_0x40f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F060u;
        // 0x40f064: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f060) {
            ctx->pc = 0x40F090u;
            goto label_40f090;
        }
    }
    ctx->pc = 0x40F068u;
label_40f068:
    // 0x40f068: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40f068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40f06c: 0x24a50628  addiu       $a1, $a1, 0x628
    ctx->pc = 0x40f06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1576));
    // 0x40f070: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x40f070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x40f074: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40F074u;
    SET_GPR_U32(ctx, 31, 0x40F07Cu);
    ctx->pc = 0x40F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F074u;
    // 0x40f078: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40F074u, 0x40F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F07Cu;
label_40f07c:
    // 0x40f07c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x40f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x40f080: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40F080u;
    SET_GPR_U32(ctx, 31, 0x40F088u);
    ctx->pc = 0x40F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F080u;
    // 0x40f084: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40F080u, 0x40F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F088u;
label_40f088:
    // 0x40f088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f08c: 0x0  nop
    ctx->pc = 0x40f08cu;
    // NOP
label_40f090:
    // 0x40f090: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x40f090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x40f094: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x40f094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f098: 0x3e00008  jr          $ra
    ctx->pc = 0x40F098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F098u;
        // 0x40f09c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40F0A0u;
}
