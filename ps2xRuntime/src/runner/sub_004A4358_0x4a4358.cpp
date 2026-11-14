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

// Function: sub_004A4358
// Address: 0x4a4358 - 0x4a4ab0
void sub_004A4358_0x4a4358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4358_0x4a4358");
#endif

    switch (ctx->pc) {
        case 0x4a43b8u: goto label_4a43b8;
        case 0x4a4420u: goto label_4a4420;
        case 0x4a4440u: goto label_4a4440;
        case 0x4a4550u: goto label_4a4550;
        case 0x4a45a4u: goto label_4a45a4;
        case 0x4a45d8u: goto label_4a45d8;
        case 0x4a4714u: goto label_4a4714;
        case 0x4a472cu: goto label_4a472c;
        case 0x4a4740u: goto label_4a4740;
        case 0x4a47d8u: goto label_4a47d8;
        case 0x4a4808u: goto label_4a4808;
        case 0x4a4828u: goto label_4a4828;
        case 0x4a4880u: goto label_4a4880;
        case 0x4a48b0u: goto label_4a48b0;
        case 0x4a48d8u: goto label_4a48d8;
        case 0x4a4904u: goto label_4a4904;
        case 0x4a4918u: goto label_4a4918;
        case 0x4a4938u: goto label_4a4938;
        case 0x4a494cu: goto label_4a494c;
        case 0x4a498cu: goto label_4a498c;
        case 0x4a4994u: goto label_4a4994;
        case 0x4a4a5cu: goto label_4a4a5c;
        case 0x4a4a7cu: goto label_4a4a7c;
        default: break;
    }

    ctx->pc = 0x4a4358u;

    // 0x4a4358: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x4a4358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x4a435c: 0xc785819c  lwc1        $f5, -0x7E64($gp)
    ctx->pc = 0x4a435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4a4360: 0x7fb602d0  sq          $s6, 0x2D0($sp)
    ctx->pc = 0x4a4360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 22));
    // 0x4a4364: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x4a4364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4a4368: 0x7fb702c0  sq          $s7, 0x2C0($sp)
    ctx->pc = 0x4a4368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 23));
    // 0x4a436c: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x4a436cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x4a4370: 0x7fb10320  sq          $s1, 0x320($sp)
    ctx->pc = 0x4a4370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 17));
    // 0x4a4374: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4a4374u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4378: 0x7fb20310  sq          $s2, 0x310($sp)
    ctx->pc = 0x4a4378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 18));
    // 0x4a437c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x4a437cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4380: 0x7fb502e0  sq          $s5, 0x2E0($sp)
    ctx->pc = 0x4a4380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 21));
    // 0x4a4384: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a4384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4388: 0x7fb00330  sq          $s0, 0x330($sp)
    ctx->pc = 0x4a4388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 16));
    // 0x4a438c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4a438cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4390: 0x7fb30300  sq          $s3, 0x300($sp)
    ctx->pc = 0x4a4390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 19));
    // 0x4a4394: 0x240b77ff  addiu       $t3, $zero, 0x77FF
    ctx->pc = 0x4a4394u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 30719));
    // 0x4a4398: 0x7fb402f0  sq          $s4, 0x2F0($sp)
    ctx->pc = 0x4a4398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 20));
    // 0x4a439c: 0x24098800  addiu       $t1, $zero, -0x7800
    ctx->pc = 0x4a439cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294936576));
    // 0x4a43a0: 0x7fbe02b0  sq          $fp, 0x2B0($sp)
    ctx->pc = 0x4a43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 30));
    // 0x4a43a4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x4a43a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a43a8: 0xffbf02a0  sd          $ra, 0x2A0($sp)
    ctx->pc = 0x4a43a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 31));
    // 0x4a43ac: 0x2411001b  addiu       $s1, $zero, 0x1B
    ctx->pc = 0x4a43acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x4a43b0: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x4a43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x4a43b4: 0x0  nop
    ctx->pc = 0x4a43b4u;
    // NOP
label_4a43b8:
    // 0x4a43b8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4a43b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a43bc: 0x28627800  slti        $v0, $v1, 0x7800
    ctx->pc = 0x4a43bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30720) ? 1 : 0);
    // 0x4a43c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A43C0u;
    {
        const bool branch_taken_0x4a43c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A43C0u;
        // 0x4a43c4: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a43c0) {
            ctx->pc = 0x4A43D0u;
            goto label_4a43d0;
        }
    }
    ctx->pc = 0x4A43C8u;
    // 0x4a43c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A43C8u;
    {
        const bool branch_taken_0x4a43c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A43C8u;
        // 0x4a43cc: 0xa50b0000  sh          $t3, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a43c8) {
            ctx->pc = 0x4A43E0u;
            goto label_4a43e0;
        }
    }
    ctx->pc = 0x4A43D0u;
label_4a43d0:
    // 0x4a43d0: 0x28628800  slti        $v0, $v1, -0x7800
    ctx->pc = 0x4a43d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294936576) ? 1 : 0);
    // 0x4a43d4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A43D4u;
    {
        const bool branch_taken_0x4a43d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a43d4) {
            ctx->pc = 0x4A43D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A43D4u;
            // 0x4a43d8: 0xa5050000  sh          $a1, 0x0($t0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A43E0u;
            goto label_4a43e0;
        }
    }
    ctx->pc = 0x4A43DCu;
    // 0x4a43dc: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x4a43dcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
label_4a43e0:
    // 0x4a43e0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4a43e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4a43e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4a43e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4a43e8: 0x621fff3  bgez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x4A43E8u;
    {
        const bool branch_taken_0x4a43e8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4A43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A43E8u;
        // 0x4a43ec: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a43e8) {
            ctx->pc = 0x4A43B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a43b8;
        }
    }
    ctx->pc = 0x4A43F0u;
    // 0x4a43f0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a43f4: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x4a43f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a43f8: 0x24425da8  addiu       $v0, $v0, 0x5DA8
    ctx->pc = 0x4a43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23976));
    // 0x4a43fc: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x4a43fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x4a4400: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4a4400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4a4404: 0x8fae0290  lw          $t6, 0x290($sp)
    ctx->pc = 0x4a4404u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x4a4408: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x4a4408u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a440c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4a440cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4410: 0x26580002  addiu       $t8, $s2, 0x2
    ctx->pc = 0x4a4410u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x4a4414: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a4414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4418: 0x244c0004  addiu       $t4, $v0, 0x4
    ctx->pc = 0x4a4418u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a441c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4a441cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a4420:
    // 0x4a4420: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4a4420u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a4424: 0x16e2021  addu        $a0, $t3, $t6
    ctx->pc = 0x4a4424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x4a4428: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x4a4428u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a442c: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x4a442cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4430: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4a4430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4a4434: 0x2411001b  addiu       $s1, $zero, 0x1B
    ctx->pc = 0x4a4434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x4a4438: 0xc5a40000  lwc1        $f4, 0x0($t5)
    ctx->pc = 0x4a4438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4a443c: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x4a443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a4440:
    // 0x4a4440: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x4a4440u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a4444: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a4444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a4448: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4a4448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a444c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a444cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a4450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a4450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a4454: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a4454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a4458: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a4458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a445c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4a445cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4a4460: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4a4460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4a4464: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a4464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a4468: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4a4468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4a446c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4a446cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4a4470: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x4a4470u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x4a4474: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4a4474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a4478: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4a4478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a447c: 0x0  nop
    ctx->pc = 0x4a447cu;
    // NOP
    // 0x4a4480: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4A4480u;
    {
        const bool branch_taken_0x4a4480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a4480) {
            ctx->pc = 0x4A4484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4480u;
            // 0x4a4484: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4488u;
            goto label_4a4488;
        }
    }
    ctx->pc = 0x4A4488u;
label_4a4488:
    // 0x4a4488: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4a4488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a448c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4a448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4a4490: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x4a4490u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4494: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4a4494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4a4498: 0x621ffe9  bgez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4A4498u;
    {
        const bool branch_taken_0x4a4498 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4A449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4498u;
        // 0x4a449c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4498) {
            ctx->pc = 0x4A4440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4440;
        }
    }
    ctx->pc = 0x4A44A0u;
    // 0x4a44a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4a44a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a44a4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x4a44a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a44a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4A44A8u;
    {
        const bool branch_taken_0x4a44a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a44a8) {
            ctx->pc = 0x4A44B8u;
            goto label_4a44b8;
        }
    }
    ctx->pc = 0x4A44B0u;
    // 0x4a44b0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x4a44b0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x4a44b4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x4a44b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4a44b8:
    // 0x4a44b8: 0x15400006  bnez        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A44B8u;
    {
        const bool branch_taken_0x4a44b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A44B8u;
        // 0x4a44bc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a44b8) {
            ctx->pc = 0x4A44D4u;
            goto label_4a44d4;
        }
    }
    ctx->pc = 0x4A44C0u;
    // 0x4a44c0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4a44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a44c4: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x4a44c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a44c8: 0x0  nop
    ctx->pc = 0x4a44c8u;
    // NOP
    // 0x4a44cc: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x4A44CCu;
    {
        const bool branch_taken_0x4a44cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a44cc) {
            ctx->pc = 0x4A44D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A44CCu;
            // 0x4a44d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A44ECu;
            goto label_4a44ec;
        }
    }
    ctx->pc = 0x4A44D4u;
label_4a44d4:
    // 0x4a44d4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4a44d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4a44d8: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x4a44d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x4a44dc: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x4a44dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x4a44e0: 0x29420005  slti        $v0, $t2, 0x5
    ctx->pc = 0x4a44e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a44e4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x4A44E4u;
    {
        const bool branch_taken_0x4a44e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A44E4u;
        // 0x4a44e8: 0x256b0070  addiu       $t3, $t3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a44e4) {
            ctx->pc = 0x4A4420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4420;
        }
    }
    ctx->pc = 0x4A44ECu;
label_4a44ec:
    // 0x4a44ec: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x4a44ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x4a44f0: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x4a44f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x4a44f4: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x4a44f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x4a44f8: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x4a44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a44fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4a44fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a4500: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a4500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a4504: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4a4504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a4508: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4a4508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4a450c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A450Cu;
    {
        const bool branch_taken_0x4a450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A450Cu;
        // 0x4a4510: 0xace90000  sw          $t1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a450c) {
            ctx->pc = 0x4A451Cu;
            goto label_4a451c;
        }
    }
    ctx->pc = 0x4A4514u;
    // 0x4a4514: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A4514u;
    {
        const bool branch_taken_0x4a4514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4514u;
        // 0x4a4518: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4514) {
            ctx->pc = 0x4A4530u;
            goto label_4a4530;
        }
    }
    ctx->pc = 0x4A451Cu;
label_4a451c:
    // 0x4a451c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a451cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4520: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4a4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4a4524: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x4a4524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x4a4528: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4a4528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4a452c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x4a452cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_4a4530:
    // 0x4a4530: 0x24820800  addiu       $v0, $a0, 0x800
    ctx->pc = 0x4a4530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x4a4534: 0x24114000  addiu       $s1, $zero, 0x4000
    ctx->pc = 0x4a4534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4a4538: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x4a4538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x4a453c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a453cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4540: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x4a4540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x4a4544: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A4544u;
    {
        const bool branch_taken_0x4a4544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4544u;
        // 0x4a4548: 0x15a0c0  sll         $s4, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4544) {
            ctx->pc = 0x4A4570u;
            goto label_4a4570;
        }
    }
    ctx->pc = 0x4A454Cu;
    // 0x4a454c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4a454cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4a4550:
    // 0x4a4550: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x4a4550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x4a4554: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A4554u;
    {
        const bool branch_taken_0x4a4554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4554u;
        // 0x4a4558: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4554) {
            ctx->pc = 0x4A4570u;
            goto label_4a4570;
        }
    }
    ctx->pc = 0x4A455Cu;
    // 0x4a455c: 0x1110c3  sra         $v0, $s1, 3
    ctx->pc = 0x4a455cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 3));
    // 0x4a4560: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4a4560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a4564: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a4564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a4568: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A4568u;
    {
        const bool branch_taken_0x4a4568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4568) {
            ctx->pc = 0x4A456Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4568u;
            // 0x4a456c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4550;
        }
    }
    ctx->pc = 0x4A4570u;
label_4a4570:
    // 0x4a4570: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x4a4570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x4a4574: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x4a4574u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x4a4578: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4a4578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a457c: 0x26105da8  addiu       $s0, $s0, 0x5DA8
    ctx->pc = 0x4a457cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23976));
    // 0x4a4580: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x4a4580u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a4584: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x4a4584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4a4588: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x4a4588u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a458c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4590: 0x283f021  addu        $fp, $s4, $v1
    ctx->pc = 0x4a4590u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x4a4594: 0x300902d  daddu       $s2, $t8, $zero
    ctx->pc = 0x4a4594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4598: 0x2642014  dsllv       $a0, $a0, $s3
    ctx->pc = 0x4a4598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x4a459c: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x4A459Cu;
    SET_GPR_U32(ctx, 31, 0x4A45A4u);
    ctx->pc = 0x4A45A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A459Cu;
    // 0x4a45a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x4A459Cu, 0x4A45A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A45A4u;
label_4a45a4:
    // 0x4a45a4: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x4a45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x4a45a8: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x4a45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x4a45ac: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a45acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a45b0: 0x2903821  addu        $a3, $s4, $s0
    ctx->pc = 0x4a45b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x4a45b4: 0x600013  mtlo        $v1
    ctx->pc = 0x4a45b4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x4a45b8: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x4a45b8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x4a45bc: 0x72a22800  madd        $a1, $s5, $v0
    ctx->pc = 0x4a45bcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a45c0: 0x240b8000  addiu       $t3, $zero, -0x8000
    ctx->pc = 0x4a45c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4a45c4: 0x240af000  addiu       $t2, $zero, -0x1000
    ctx->pc = 0x4a45c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x4a45c8: 0x24097fff  addiu       $t1, $zero, 0x7FFF
    ctx->pc = 0x4a45c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a45cc: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x4a45ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4a45d0: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x4a45d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x4a45d4: 0x0  nop
    ctx->pc = 0x4a45d4u;
    // NOP
label_4a45d8:
    // 0x4a45d8: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x4a45d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a45dc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4a45dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a45e0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x4a45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4a45e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4a45e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4a45e8: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x4a45e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a45ec: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x4a45ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a45f0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4a45f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4a45f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4a45f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4a45f8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x4a45f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x4a45fc: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x4a45fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x4a4600: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a4600u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a4604: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4a4604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a4608: 0x24820800  addiu       $v0, $a0, 0x800
    ctx->pc = 0x4a4608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x4a460c: 0x4a2024  and         $a0, $v0, $t2
    ctx->pc = 0x4a460cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4a4610: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x4a4610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4a4614: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A4614u;
    {
        const bool branch_taken_0x4a4614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4614u;
        // 0x4a4618: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4614) {
            ctx->pc = 0x4A4624u;
            goto label_4a4624;
        }
    }
    ctx->pc = 0x4A461Cu;
    // 0x4a461c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A461Cu;
    {
        const bool branch_taken_0x4a461c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A461Cu;
        // 0x4a4620: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a461c) {
            ctx->pc = 0x4A4628u;
            goto label_4a4628;
        }
    }
    ctx->pc = 0x4A4624u;
label_4a4624:
    // 0x4a4624: 0x162200a  movz        $a0, $t3, $v0
    ctx->pc = 0x4a4624u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 11));
label_4a4628:
    // 0x4a4628: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4a4628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4a462c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A462Cu;
    {
        const bool branch_taken_0x4a462c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A462Cu;
        // 0x4a4630: 0x41203  sra         $v0, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a462c) {
            ctx->pc = 0x4A464Cu;
            goto label_4a464c;
        }
    }
    ctx->pc = 0x4A4634u;
    // 0x4a4634: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x4a4634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a4638: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4a4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4a463c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a463cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a4640: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x4a4640u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a4644: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A4644u;
    {
        const bool branch_taken_0x4a4644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4644u;
        // 0x4a4648: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4644) {
            ctx->pc = 0x4A4658u;
            goto label_4a4658;
        }
    }
    ctx->pc = 0x4A464Cu;
label_4a464c:
    // 0x4a464c: 0x41303  sra         $v0, $a0, 12
    ctx->pc = 0x4a464cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4a4650: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4a4650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4a4654: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x4a4654u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_4a4658:
    // 0x4a4658: 0x2641007  srav        $v0, $a0, $s3
    ctx->pc = 0x4a4658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    // 0x4a465c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x4a465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a4660: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a4660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a4664: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a4664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a4668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a4668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a466c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x4a466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x4a4670: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4a4670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4a4674: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x4a4674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x4a4678: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x4a4678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4a467c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x4A467Cu;
    {
        const bool branch_taken_0x4a467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A467Cu;
        // 0x4a4680: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a467c) {
            ctx->pc = 0x4A45D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a45d8;
        }
    }
    ctx->pc = 0x4A4684u;
    // 0x4a4684: 0x7bb00330  lq          $s0, 0x330($sp)
    ctx->pc = 0x4a4684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x4a4688: 0x7bb10320  lq          $s1, 0x320($sp)
    ctx->pc = 0x4a4688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x4a468c: 0x7bb20310  lq          $s2, 0x310($sp)
    ctx->pc = 0x4a468cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x4a4690: 0x7bb30300  lq          $s3, 0x300($sp)
    ctx->pc = 0x4a4690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x4a4694: 0x7bb402f0  lq          $s4, 0x2F0($sp)
    ctx->pc = 0x4a4694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x4a4698: 0x7bb502e0  lq          $s5, 0x2E0($sp)
    ctx->pc = 0x4a4698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x4a469c: 0x7bb602d0  lq          $s6, 0x2D0($sp)
    ctx->pc = 0x4a469cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x4a46a0: 0x7bb702c0  lq          $s7, 0x2C0($sp)
    ctx->pc = 0x4a46a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x4a46a4: 0x7bbe02b0  lq          $fp, 0x2B0($sp)
    ctx->pc = 0x4a46a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x4a46a8: 0xdfbf02a0  ld          $ra, 0x2A0($sp)
    ctx->pc = 0x4a46a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x4a46ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4A46ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46ACu;
        // 0x4a46b0: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A46ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A46B4u;
    // 0x4a46b4: 0x0  nop
    ctx->pc = 0x4a46b4u;
    // NOP
    // 0x4a46b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4a46b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4a46bc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4a46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4a46c0: 0x3a9480a  movz        $t1, $sp, $t1
    ctx->pc = 0x4a46c0u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 29));
    // 0x4a46c4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4a46c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4a46c8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a46c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a46cc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4a46ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4a46d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a46d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a46d4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4a46d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4a46d8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x4a46d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a46dc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4a46dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4a46e0: 0x24a52610  addiu       $a1, $a1, 0x2610
    ctx->pc = 0x4a46e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    // 0x4a46e4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4a46e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4a46e8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4a46e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4a46ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a46ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4a46f0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4a46f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4a46f4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4a46f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4a46f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a46f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a46fc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4a46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4a4700: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4a4700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4a4704: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x4a4704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x4a4708: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x4a4708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x4a470c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A470Cu;
    SET_GPR_U32(ctx, 31, 0x4A4714u);
    ctx->pc = 0x4A4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A470Cu;
    // 0x4a4710: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A470Cu, 0x4A4714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4714u;
label_4a4714:
    // 0x4a4714: 0x544000a1  bnel        $v0, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x4A4714u;
    {
        const bool branch_taken_0x4a4714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a4714) {
            ctx->pc = 0x4A4718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4714u;
            // 0x4a4718: 0x9283000d  lbu         $v1, 0xD($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A499Cu;
            goto label_4a499c;
        }
    }
    ctx->pc = 0x4A471Cu;
    // 0x4a471c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a471cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a4720: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x4a4720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4a4724: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A4724u;
    SET_GPR_U32(ctx, 31, 0x4A472Cu);
    ctx->pc = 0x4A4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4724u;
    // 0x4a4728: 0x24a52640  addiu       $a1, $a1, 0x2640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A4724u, 0x4A472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A472Cu;
label_4a472c:
    // 0x4a472c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A472Cu;
    {
        const bool branch_taken_0x4a472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A472Cu;
        // 0x4a4730: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a472c) {
            ctx->pc = 0x4A4748u;
            goto label_4a4748;
        }
    }
    ctx->pc = 0x4A4734u;
    // 0x4a4734: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x4a4734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4a4738: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A4738u;
    SET_GPR_U32(ctx, 31, 0x4A4740u);
    ctx->pc = 0x4A473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4738u;
    // 0x4a473c: 0x24a526a0  addiu       $a1, $a1, 0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A4738u, 0x4A4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4740u;
label_4a4740:
    // 0x4a4740: 0x54400096  bnel        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x4A4740u;
    {
        const bool branch_taken_0x4a4740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a4740) {
            ctx->pc = 0x4A4744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4740u;
            // 0x4a4744: 0x9283000d  lbu         $v1, 0xD($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A499Cu;
            goto label_4a499c;
        }
    }
    ctx->pc = 0x4A4748u;
label_4a4748:
    // 0x4a4748: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4a4748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a474c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x4a474cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a4750: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x4a4750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a4754: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x4a4754u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x4a4758: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x4a4758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a475c: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x4a475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x4a4760: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x4a4760u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x4a4764: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A4764u;
    {
        const bool branch_taken_0x4a4764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4764) {
            ctx->pc = 0x4A4768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4764u;
            // 0x4a4768: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A476Cu;
            goto label_4a476c;
        }
    }
    ctx->pc = 0x4A476Cu;
label_4a476c:
    // 0x4a476c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x4a476cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x4a4770: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4a4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4774: 0x2012  mflo        $a0
    ctx->pc = 0x4a4774u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x4a4778: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x4a4778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a477c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a477cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4780: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a4780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4a4784: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x4a4784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x4a4788: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4a4788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4a478c: 0x9285000d  lbu         $a1, 0xD($s4)
    ctx->pc = 0x4a478cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a4790: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4a4790u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x4a4794: 0x46b018  mult        $s6, $v0, $a2
    ctx->pc = 0x4a4794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x4a4798: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4a4798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a479c: 0x2c50018  mult        $zero, $s6, $a1
    ctx->pc = 0x4a479cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4a47a0: 0x1012  mflo        $v0
    ctx->pc = 0x4a47a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a47a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a47a8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4a47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a47ac: 0x106000b3  beqz        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x4A47ACu;
    {
        const bool branch_taken_0x4a47ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A47ACu;
        // 0x4a47b0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a47ac) {
            ctx->pc = 0x4A4A7Cu;
            goto label_4a4a7c;
        }
    }
    ctx->pc = 0x4A47B4u;
    // 0x4a47b4: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a47b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a47b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a47b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a47bc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4A47BCu;
    {
        const bool branch_taken_0x4a47bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A47BCu;
        // 0x4a47c0: 0x8fb70004  lw          $s7, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a47bc) {
            ctx->pc = 0x4A4868u;
            goto label_4a4868;
        }
    }
    ctx->pc = 0x4A47C4u;
    // 0x4a47c4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x4a47c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a47c8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x4a47c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x4a47cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a47ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a47d0: 0xc127cc2  jal         func_49F308
    ctx->pc = 0x4A47D0u;
    SET_GPR_U32(ctx, 31, 0x4A47D8u);
    ctx->pc = 0x4A47D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A47D0u;
    // 0x4a47d4: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4A47D0u, 0x4A47D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A47D8u;
label_4a47d8:
    // 0x4a47d8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4a47d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a47dc: 0x12e000a8  beqz        $s7, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4A47DCu;
    {
        const bool branch_taken_0x4a47dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A47DCu;
        // 0x4a47e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a47dc) {
            ctx->pc = 0x4A4A80u;
            goto label_4a4a80;
        }
    }
    ctx->pc = 0x4A47E4u;
    // 0x4a47e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a47e8: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x4a47e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a47ec: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4a47ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4a47f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a47f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a47f4: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x4a47f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4a47f8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4A47F8u;
    {
        const bool branch_taken_0x4a47f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A47F8u;
        // 0x4a47fc: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a47f8) {
            ctx->pc = 0x4A486Cu;
            goto label_4a486c;
        }
    }
    ctx->pc = 0x4A4800u;
    // 0x4a4800: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4a4800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a4804: 0x0  nop
    ctx->pc = 0x4a4804u;
    // NOP
label_4a4808:
    // 0x4a4808: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x4a4808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x4a480c: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x4a480cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4a4810: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4a4810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4814: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x4a4814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a4818: 0x2531018  mult        $v0, $s2, $s3
    ctx->pc = 0x4a4818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a481c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x4A481Cu;
    {
        const bool branch_taken_0x4a481c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A481Cu;
        // 0x4a4820: 0x578021  addu        $s0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a481c) {
            ctx->pc = 0x4A4848u;
            goto label_4a4848;
        }
    }
    ctx->pc = 0x4A4824u;
    // 0x4a4824: 0x0  nop
    ctx->pc = 0x4a4824u;
    // NOP
label_4a4828:
    // 0x4a4828: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a4828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a482c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x4a482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x4a4830: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a4830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4834: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a4834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a4838: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x4a4838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a483c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a483cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a4840: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A4840u;
    {
        const bool branch_taken_0x4a4840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4840u;
        // 0x4a4844: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4840) {
            ctx->pc = 0x4A4828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4828;
        }
    }
    ctx->pc = 0x4A4848u;
label_4a4848:
    // 0x4a4848: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x4a4848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a484c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x4a484cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4850: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4a4850u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4854: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4a4854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a4858: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4A4858u;
    {
        const bool branch_taken_0x4a4858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4858u;
        // 0x4a485c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4858) {
            ctx->pc = 0x4A4808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4808;
        }
    }
    ctx->pc = 0x4A4860u;
    // 0x4a4860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4860u;
    {
        const bool branch_taken_0x4a4860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4860u;
        // 0x4a4864: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4860) {
            ctx->pc = 0x4A486Cu;
            goto label_4a486c;
        }
    }
    ctx->pc = 0x4A4868u;
label_4a4868:
    // 0x4a4868: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a4868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a486c:
    // 0x4a486c: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4A486Cu;
    {
        const bool branch_taken_0x4a486c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A486Cu;
        // 0x4a4870: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a486c) {
            ctx->pc = 0x4A48E8u;
            goto label_4a48e8;
        }
    }
    ctx->pc = 0x4A4874u;
    // 0x4a4874: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4a4874u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4878: 0x2e32021  addu        $a0, $s7, $v1
    ctx->pc = 0x4a4878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x4a487c: 0x0  nop
    ctx->pc = 0x4a487cu;
    // NOP
label_4a4880:
    // 0x4a4880: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4a4880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a4884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4888: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4a4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a488c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4a488cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4890: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a4890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4894: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4a4894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4a4898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a4898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a489c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a48a0: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x4a48a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4a48a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a48a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a48a8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A48A8u;
    SET_GPR_U32(ctx, 31, 0x4A48B0u);
    ctx->pc = 0x4A48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A48A8u;
    // 0x4a48ac: 0x2b6a821  addu        $s5, $s5, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A48A8u, 0x4A48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A48B0u;
label_4a48b0:
    // 0x4a48b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4a48b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a48b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a48b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a48b8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4a48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a48bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a48bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a48c0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x4a48c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a48c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a48c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a48c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a48c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a48cc: 0x2422823  subu        $a1, $s2, $v0
    ctx->pc = 0x4a48ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4a48d0: 0xc129490  jal         func_4A5240
    ctx->pc = 0x4A48D0u;
    SET_GPR_U32(ctx, 31, 0x4A48D8u);
    ctx->pc = 0x4A48D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A48D0u;
    // 0x4a48d4: 0x2c94823  subu        $t1, $s6, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5240u, 0x4A48D0u, 0x4A48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A48D8u;
label_4a48d8:
    // 0x4a48d8: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x4a48d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a48dc: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x4a48dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a48e0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4A48E0u;
    {
        const bool branch_taken_0x4a48e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A48E0u;
        // 0x4a48e4: 0x2322021  addu        $a0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a48e0) {
            ctx->pc = 0x4A4880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4880;
        }
    }
    ctx->pc = 0x4A48E8u;
label_4a48e8:
    // 0x4a48e8: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a48e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a48ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a48ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a48f0: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4A48F0u;
    {
        const bool branch_taken_0x4a48f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A48F0u;
        // 0x4a48f4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a48f0) {
            ctx->pc = 0x4A4A80u;
            goto label_4a4a80;
        }
    }
    ctx->pc = 0x4A48F8u;
    // 0x4a48f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a48f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a48fc: 0xc1295d8  jal         func_4A5760
    ctx->pc = 0x4A48FCu;
    SET_GPR_U32(ctx, 31, 0x4A4904u);
    ctx->pc = 0x4A4900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A48FCu;
    // 0x4a4900: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5760u, 0x4A48FCu, 0x4A4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4904u;
label_4a4904:
    // 0x4a4904: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4a4904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4908: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a4908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a490c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A490Cu;
    {
        const bool branch_taken_0x4a490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a490c) {
            ctx->pc = 0x4A4910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A490Cu;
            // 0x4a4910: 0x93c6000d  lbu         $a2, 0xD($fp) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4978u;
            goto label_4a4978;
        }
    }
    ctx->pc = 0x4A4914u;
    // 0x4a4914: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4a4914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4a4918:
    // 0x4a4918: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x4a4918u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4a491c: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x4a491cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4920: 0x400013  mtlo        $v0
    ctx->pc = 0x4a4920u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x4a4924: 0x72d38800  madd        $s1, $s6, $s3
    ctx->pc = 0x4a4924u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x4a4928: 0x2931018  mult        $v0, $s4, $s3
    ctx->pc = 0x4a4928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a492c: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x4A492Cu;
    {
        const bool branch_taken_0x4a492c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A492Cu;
        // 0x4a4930: 0x578021  addu        $s0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a492c) {
            ctx->pc = 0x4A4960u;
            goto label_4a4960;
        }
    }
    ctx->pc = 0x4A4934u;
    // 0x4a4934: 0x0  nop
    ctx->pc = 0x4a4934u;
    // NOP
label_4a4938:
    // 0x4a4938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a4938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a493c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a493cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4940: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a4940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4944: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A4944u;
    SET_GPR_U32(ctx, 31, 0x4A494Cu);
    ctx->pc = 0x4A4948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4944u;
    // 0x4a4948: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A4944u, 0x4A494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A494Cu;
label_4a494c:
    // 0x4a494c: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x4a494cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x4a4950: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a4950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a4954: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x4a4954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a4958: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A4958u;
    {
        const bool branch_taken_0x4a4958 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4958u;
        // 0x4a495c: 0x708021  addu        $s0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4958) {
            ctx->pc = 0x4A4938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4938;
        }
    }
    ctx->pc = 0x4A4960u;
label_4a4960:
    // 0x4a4960: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a4960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a4964: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x4a4964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4968: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4a4968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a496c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4A496Cu;
    {
        const bool branch_taken_0x4a496c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A496Cu;
        // 0x4a4970: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a496c) {
            ctx->pc = 0x4A4918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4918;
        }
    }
    ctx->pc = 0x4A4974u;
    // 0x4a4974: 0x93c6000d  lbu         $a2, 0xD($fp)
    ctx->pc = 0x4a4974u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
label_4a4978:
    // 0x4a4978: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4a4978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a497c: 0x2c60018  mult        $zero, $s6, $a2
    ctx->pc = 0x4a497cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4a4980: 0x3012  mflo        $a2
    ctx->pc = 0x4a4980u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4a4984: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A4984u;
    SET_GPR_U32(ctx, 31, 0x4A498Cu);
    ctx->pc = 0x4A4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4984u;
    // 0x4a4988: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A4984u, 0x4A498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A498Cu;
label_4a498c:
    // 0x4a498c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A498Cu;
    SET_GPR_U32(ctx, 31, 0x4A4994u);
    ctx->pc = 0x4A4990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A498Cu;
    // 0x4a4990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A498Cu, 0x4A4994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4994u;
label_4a4994:
    // 0x4a4994: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4A4994u;
    {
        const bool branch_taken_0x4a4994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4994u;
        // 0x4a4998: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4994) {
            ctx->pc = 0x4A4A80u;
            goto label_4a4a80;
        }
    }
    ctx->pc = 0x4A499Cu;
label_4a499c:
    // 0x4a499c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a49a0: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A49A0u;
    {
        const bool branch_taken_0x4a49a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a49a0) {
            ctx->pc = 0x4A49A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A49A0u;
            // 0x4a49a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A49E4u;
            goto label_4a49e4;
        }
    }
    ctx->pc = 0x4A49A8u;
    // 0x4a49a8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4a49a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a49ac: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x4a49acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a49b0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A49B0u;
    {
        const bool branch_taken_0x4a49b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a49b0) {
            ctx->pc = 0x4A49B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A49B0u;
            // 0x4a49b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A49B8u;
            goto label_4a49b8;
        }
    }
    ctx->pc = 0x4A49B8u;
label_4a49b8:
    // 0x4a49b8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4a49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a49bc: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x4a49bcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x4a49c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4a49c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a49c4: 0x1012  mflo        $v0
    ctx->pc = 0x4a49c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a49c8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4a49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x4a49cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a49ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a49d0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4a49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a49d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4a49d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a49d8: 0x1012  mflo        $v0
    ctx->pc = 0x4a49d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a49dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4A49DCu;
    {
        const bool branch_taken_0x4a49dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A49DCu;
        // 0x4a49e0: 0x211c0  sll         $v0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a49dc) {
            ctx->pc = 0x4A4A24u;
            goto label_4a4a24;
        }
    }
    ctx->pc = 0x4A49E4u;
label_4a49e4:
    // 0x4a49e4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A49E4u;
    {
        const bool branch_taken_0x4a49e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A49E4u;
        // 0x4a49e8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a49e4) {
            ctx->pc = 0x4A4A2Cu;
            goto label_4a4a2c;
        }
    }
    ctx->pc = 0x4A49ECu;
    // 0x4a49ec: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4a49ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a49f0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x4a49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x4a49f4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A49F4u;
    {
        const bool branch_taken_0x4a49f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a49f4) {
            ctx->pc = 0x4A49F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A49F4u;
            // 0x4a49f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A49FCu;
            goto label_4a49fc;
        }
    }
    ctx->pc = 0x4A49FCu;
label_4a49fc:
    // 0x4a49fc: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x4a49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x4a4a00: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x4a4a00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x4a4a04: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4a4a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4a08: 0x1012  mflo        $v0
    ctx->pc = 0x4a4a08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a4a0c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a4a10: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a4a10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a4a14: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4a4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a4a18: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4a4a18u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a4a1c: 0x1012  mflo        $v0
    ctx->pc = 0x4a4a1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a4a20: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_4a4a24:
    // 0x4a4a24: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4a4a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4a4a28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4a4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4a4a2c:
    // 0x4a4a2c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x4a4a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4a4a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4a34: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x4a4a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a4a38: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4a4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a4a3c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x4A4A3Cu;
    {
        const bool branch_taken_0x4a4a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4A3Cu;
        // 0x4a4a40: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4a3c) {
            ctx->pc = 0x4A4A7Cu;
            goto label_4a4a7c;
        }
    }
    ctx->pc = 0x4A4A44u;
    // 0x4a4a44: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4a4a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a4a48: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x4a4a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4a4a4c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4a4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x4a4a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a4a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4a54: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A4A54u;
    SET_GPR_U32(ctx, 31, 0x4A4A5Cu);
    ctx->pc = 0x4A4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4A54u;
    // 0x4a4a58: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A4A54u, 0x4A4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4A5Cu;
label_4a4a5c:
    // 0x4a4a5c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4a4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a4a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a4a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4a64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a4a68: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4a4a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a4a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4a70: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4a4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4a4a74: 0xc1294ac  jal         func_4A52B0
    ctx->pc = 0x4A4A74u;
    SET_GPR_U32(ctx, 31, 0x4A4A7Cu);
    ctx->pc = 0x4A4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4A74u;
    // 0x4a4a78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A52B0u, 0x4A4A74u, 0x4A4A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4A7Cu;
label_4a4a7c:
    // 0x4a4a7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4a4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4a4a80:
    // 0x4a4a80: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4a4a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a4a84: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4a4a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a4a88: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4a4a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a4a8c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4a4a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a4a90: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4a4a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a4a94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a4a94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a4a98: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4a4a98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a4a9c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4a4a9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a4aa0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4a4aa0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a4aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4AA8u;
        // 0x4a4aac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4AB0u;
}
