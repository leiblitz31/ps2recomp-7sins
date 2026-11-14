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

// Function: sub_00358678
// Address: 0x358678 - 0x358a50
void sub_00358678_0x358678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358678_0x358678");
#endif

    switch (ctx->pc) {
        case 0x3586f8u: goto label_3586f8;
        case 0x358710u: goto label_358710;
        case 0x358800u: goto label_358800;
        case 0x3588c8u: goto label_3588c8;
        case 0x3589ccu: goto label_3589cc;
        case 0x3589e4u: goto label_3589e4;
        case 0x358a08u: goto label_358a08;
        case 0x358a18u: goto label_358a18;
        default: break;
    }

    ctx->pc = 0x358678u;

    // 0x358678: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x358678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x35867c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x35867cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x358680: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x358680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x358684: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x358684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x358688: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x358688u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35868c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x35868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x358690: 0x245eb310  addiu       $fp, $v0, -0x4CF0
    ctx->pc = 0x358690u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x358694: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x358694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x358698: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x358698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x35869c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x35869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3586a0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3586a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3586a4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3586a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3586a8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3586a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3586ac: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3586acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x3586b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3586b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3586b4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3586b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3586b8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3586b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3586bc: 0x10c000d6  beqz        $a2, . + 4 + (0xD6 << 2)
    ctx->pc = 0x3586BCu;
    {
        const bool branch_taken_0x3586bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3586C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586BCu;
        // 0x3586c0: 0xafa7001c  sw          $a3, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3586bc) {
            ctx->pc = 0x358A18u;
            goto label_358a18;
        }
    }
    ctx->pc = 0x3586C4u;
    // 0x3586c4: 0x8ec2006c  lw          $v0, 0x6C($s6)
    ctx->pc = 0x3586c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x3586c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3586c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3586ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3586d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3586d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586d4: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x3586D4u;
    {
        const bool branch_taken_0x3586d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3586D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586D4u;
        // 0x3586d8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3586d4) {
            ctx->pc = 0x3589F8u;
            goto label_3589f8;
        }
    }
    ctx->pc = 0x3586DCu;
    // 0x3586dc: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x3586dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x3586e0: 0xc7948054  lwc1        $f20, -0x7FAC($gp)
    ctx->pc = 0x3586e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3586e4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3586e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3586e8: 0x26d4001c  addiu       $s4, $s6, 0x1C
    ctx->pc = 0x3586e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    // 0x3586ec: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x3586ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x3586f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3586f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3586f4: 0x0  nop
    ctx->pc = 0x3586f4u;
    // NOP
label_3586f8:
    // 0x3586f8: 0x158180  sll         $s0, $s5, 6
    ctx->pc = 0x3586f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x3586fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3586fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358700: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x358700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358704: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x358704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x358708: 0xc104d64  jal         func_413590
    ctx->pc = 0x358708u;
    SET_GPR_U32(ctx, 31, 0x358710u);
    ctx->pc = 0x35870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358708u;
    // 0x35870c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x358708u, 0x358710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358710u;
label_358710:
    // 0x358710: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x358710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x358714: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x358714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x358718: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x358718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35871c: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x35871Cu;
    {
        const bool branch_taken_0x35871c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x358720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35871Cu;
        // 0x358720: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35871c) {
            ctx->pc = 0x3587A0u;
            goto label_3587a0;
        }
    }
    ctx->pc = 0x358724u;
    // 0x358724: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x358724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x358728: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x358728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35872c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x35872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358730: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x358730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x358734: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x358734u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x358738: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x358738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35873c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x35873cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x358740: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x358740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358744: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x358744u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x358748: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x358748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x35874c: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x35874cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x358750: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x358750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x358754: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x358754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x358758: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x358758u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x35875c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x35875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358760: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x358760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358764: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x358764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x358768: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x358768u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x35876c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x35876cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x358770: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x358770u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x358774: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x358774u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x358778: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x358778u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x35877c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x35877cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x358780: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x358780u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x358784: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x358784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x358788: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x358788u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x35878c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x35878cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x358790: 0x46010044  c1          0x10044
    ctx->pc = 0x358790u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x358794: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x358794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x358798u;
    {
        const bool branch_taken_0x358798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358798u;
        // 0x35879c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358798) {
            ctx->pc = 0x3587A4u;
            goto label_3587a4;
        }
    }
    ctx->pc = 0x3587A0u;
label_3587a0:
    // 0x3587a0: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x3587a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3587a4:
    // 0x3587a4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3587a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3587a8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3587a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3587ac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3587acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3587b0: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x3587b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E880u));
    // 0x3587b4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3587b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587b8: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3587b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3587bc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3587bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3587c0: 0x24430094  addiu       $v1, $v0, 0x94
    ctx->pc = 0x3587c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x3587c4: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x3587c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3587c8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3587c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3587cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3587ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3587d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3587d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3587d4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3587d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3587d8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3587d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3587dc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3587dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3587e0: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x3587e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3587e4: 0x26b10001  addiu       $s1, $s5, 0x1
    ctx->pc = 0x3587e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3587e8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3587e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3587ec: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x3587ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3587f0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3587f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3587f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3587F4u;
    {
        const bool branch_taken_0x3587f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587F4u;
        // 0x3587f8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587f4) {
            ctx->pc = 0x358838u;
            goto label_358838;
        }
    }
    ctx->pc = 0x3587FCu;
    // 0x3587fc: 0x0  nop
    ctx->pc = 0x3587fcu;
    // NOP
label_358800:
    // 0x358800: 0x10d70014  beq         $a2, $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x358800u;
    {
        const bool branch_taken_0x358800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 23));
        ctx->pc = 0x358804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358800u;
        // 0x358804: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358800) {
            ctx->pc = 0x358854u;
            goto label_358854;
        }
    }
    ctx->pc = 0x358808u;
    // 0x358808: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x358808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35880c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x35880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358810: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x358810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358814: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x358814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358818: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x358818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35881c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x35881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358820: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x358820u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x358824: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x358824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358828: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x358828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35882c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x35882cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x358830: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x358830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358834: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x358834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_358838:
    // 0x358838: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x358838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x35883c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x35883cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x358840: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x358840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358844: 0x0  nop
    ctx->pc = 0x358844u;
    // NOP
    // 0x358848: 0x4502ffed  bc1fl       . + 4 + (-0x13 << 2)
    ctx->pc = 0x358848u;
    {
        const bool branch_taken_0x358848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x358848) {
            ctx->pc = 0x35884Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358848u;
            // 0x35884c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358800;
        }
    }
    ctx->pc = 0x358850u;
    // 0x358850: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x358850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_358854:
    // 0x358854: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x358854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x358858: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x358858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35885c: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x35885Cu;
    {
        const bool branch_taken_0x35885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x358860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35885Cu;
        // 0x358860: 0x8ca2e880  lw          $v0, -0x1780($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35885c) {
            ctx->pc = 0x358910u;
            goto label_358910;
        }
    }
    ctx->pc = 0x358864u;
    // 0x358864: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x358864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358868: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x358868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x35886c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x35886cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x358870: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x358870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x358874: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x358874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x358878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x358878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35887c: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x35887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x358880: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x358880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x358884: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x358884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358888: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x358888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35888c: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x35888cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x358890: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x358890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x358894: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x358894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x358898: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x358898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35889c: 0xc7a5000c  lwc1        $f5, 0xC($sp)
    ctx->pc = 0x35889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3588a0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3588a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3588a4: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x3588a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3588a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3588a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3588ac: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x3588acu;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x3588b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3588b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3588b4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3588b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3588b8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3588b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3588bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3588BCu;
    {
        const bool branch_taken_0x3588bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3588C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588BCu;
        // 0x3588c0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588bc) {
            ctx->pc = 0x358904u;
            goto label_358904;
        }
    }
    ctx->pc = 0x3588C4u;
    // 0x3588c4: 0x0  nop
    ctx->pc = 0x3588c4u;
    // NOP
label_3588c8:
    // 0x3588c8: 0x10c50011  beq         $a2, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3588C8u;
    {
        const bool branch_taken_0x3588c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3588CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588C8u;
        // 0x3588cc: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588c8) {
            ctx->pc = 0x358910u;
            goto label_358910;
        }
    }
    ctx->pc = 0x3588D0u;
    // 0x3588d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3588d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3588d4: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x3588d4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
    // 0x3588d8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3588d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3588dc: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x3588dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x3588e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3588e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3588e4: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x3588e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x3588e8: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x3588e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3588ec: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3588ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3588f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3588f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3588f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3588f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3588f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3588f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3588fc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3588fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358900: 0x0  nop
    ctx->pc = 0x358900u;
    // NOP
label_358904:
    // 0x358904: 0x4502fff0  bc1fl       . + 4 + (-0x10 << 2)
    ctx->pc = 0x358904u;
    {
        const bool branch_taken_0x358904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x358904) {
            ctx->pc = 0x358908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358904u;
            // 0x358908: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3588C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3588c8;
        }
    }
    ctx->pc = 0x35890Cu;
    // 0x35890c: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x35890cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
label_358910:
    // 0x358910: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x358910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358914: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x358914u;
    {
        const bool branch_taken_0x358914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358914u;
        // 0x358918: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358914) {
            ctx->pc = 0x3589E4u;
            goto label_3589e4;
        }
    }
    ctx->pc = 0x35891Cu;
    // 0x35891c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x35891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x358920: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x358920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x358924: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x358924u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x358928: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x358928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x35892c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35892cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x358930: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x358930u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x358934: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x358934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x358938: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x358938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x35893c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x35893cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x358940: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x358940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x358944: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x358944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x358948: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x358948u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x35894c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x35894cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x358950: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x358950u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x358954: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x358954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x358958: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x358958u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x35895c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x35895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358960: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x358960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x358964: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x358964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x358968: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x358968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x35896c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x35896cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x358970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x358970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x358974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x358978: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x358978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x35897c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x35897cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x358980: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x358980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x358984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x358984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x358988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35898c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x35898cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x358990: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x358990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x358994: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x358994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x358998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x358998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35899c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35899cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3589a0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3589a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3589a4: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x3589a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x3589a8: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x3589a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3589ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3589acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3589b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3589b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3589b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3589b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3589b8: 0x1663000a  bne         $s3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3589B8u;
    {
        const bool branch_taken_0x3589b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x3589BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589B8u;
        // 0x3589bc: 0xe4a0004c  swc1        $f0, 0x4C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589b8) {
            ctx->pc = 0x3589E4u;
            goto label_3589e4;
        }
    }
    ctx->pc = 0x3589C0u;
    // 0x3589c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3589c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589c4: 0xc0cb58c  jal         func_32D630
    ctx->pc = 0x3589C4u;
    SET_GPR_U32(ctx, 31, 0x3589CCu);
    ctx->pc = 0x3589C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589C4u;
    // 0x3589c8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D630u, 0x3589C4u, 0x3589CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589CCu;
label_3589cc:
    // 0x3589cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3589ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3589d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3589d4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3589d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3589d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589dc: 0xc111718  jal         func_445C60
    ctx->pc = 0x3589DCu;
    SET_GPR_U32(ctx, 31, 0x3589E4u);
    ctx->pc = 0x3589E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589DCu;
    // 0x3589e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x3589DCu, 0x3589E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589E4u;
label_3589e4:
    // 0x3589e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3589e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3589e8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x3589e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589ec: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x3589ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3589f0: 0x1440ff41  bnez        $v0, . + 4 + (-0xBF << 2)
    ctx->pc = 0x3589F0u;
    {
        const bool branch_taken_0x3589f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3589F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589F0u;
        // 0x3589f4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589f0) {
            ctx->pc = 0x3586F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3586f8;
        }
    }
    ctx->pc = 0x3589F8u;
label_3589f8:
    // 0x3589f8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3589F8u;
    {
        const bool branch_taken_0x3589f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589F8u;
        // 0x3589fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589f8) {
            ctx->pc = 0x358A18u;
            goto label_358a18;
        }
    }
    ctx->pc = 0x358A00u;
    // 0x358a00: 0xc0cb58c  jal         func_32D630
    ctx->pc = 0x358A00u;
    SET_GPR_U32(ctx, 31, 0x358A08u);
    ctx->pc = 0x358A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A00u;
    // 0x358a04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D630u, 0x358A00u, 0x358A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A08u;
label_358a08:
    // 0x358a08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x358a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358a0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x358a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a10: 0xc111718  jal         func_445C60
    ctx->pc = 0x358A10u;
    SET_GPR_U32(ctx, 31, 0x358A18u);
    ctx->pc = 0x358A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A10u;
    // 0x358a14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x358A10u, 0x358A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A18u;
label_358a18:
    // 0x358a18: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x358a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a1c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x358a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x358a20: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x358a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x358a24: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x358a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x358a28: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x358a28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x358a2c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x358a2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x358a30: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x358a30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x358a34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x358a34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x358a38: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x358a38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x358a3c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x358a3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x358a40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x358a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358a44: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x358a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358a48: 0x3e00008  jr          $ra
    ctx->pc = 0x358A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A48u;
        // 0x358a4c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358A50u;
}
