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

// Function: sub_004593F0
// Address: 0x4593f0 - 0x459570
void sub_004593F0_0x4593f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004593F0_0x4593f0");
#endif

    switch (ctx->pc) {
        case 0x45941cu: goto label_45941c;
        case 0x459444u: goto label_459444;
        case 0x45945cu: goto label_45945c;
        case 0x459474u: goto label_459474;
        case 0x45948cu: goto label_45948c;
        case 0x4594b8u: goto label_4594b8;
        case 0x4594dcu: goto label_4594dc;
        case 0x4594fcu: goto label_4594fc;
        case 0x45953cu: goto label_45953c;
        case 0x459558u: goto label_459558;
        default: break;
    }

    ctx->pc = 0x4593f0u;

    // 0x4593f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4593f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4593f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4593f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4593f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4593f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4593fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4593fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x459400: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x459400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x459404: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459408: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x459408u;
    {
        const bool branch_taken_0x459408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459408) {
            ctx->pc = 0x459428u;
            goto label_459428;
        }
    }
    ctx->pc = 0x459410u;
    // 0x459410: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x459410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459414: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x459414u;
    SET_GPR_U32(ctx, 31, 0x45941Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x459414u, 0x45941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45941Cu;
label_45941c:
    // 0x45941c: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x45941cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x459420: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x459420u;
    {
        const bool branch_taken_0x459420 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x459420) {
            ctx->pc = 0x459434u;
            goto label_459434;
        }
    }
    ctx->pc = 0x459428u;
label_459428:
    // 0x459428: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x459428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45942c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x45942Cu;
    {
        const bool branch_taken_0x45942c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45942c) {
            ctx->pc = 0x45955Cu;
            goto label_45955c;
        }
    }
    ctx->pc = 0x459434u;
label_459434:
    // 0x459434: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x459434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459438: 0x2785b100  addiu       $a1, $gp, -0x4F00
    ctx->pc = 0x459438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947072));
    // 0x45943c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x45943Cu;
    SET_GPR_U32(ctx, 31, 0x459444u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x45943Cu, 0x459444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459444u;
label_459444:
    // 0x459444: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x459444u;
    {
        const bool branch_taken_0x459444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459444) {
            ctx->pc = 0x459494u;
            goto label_459494;
        }
    }
    ctx->pc = 0x45944Cu;
    // 0x45944c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459450: 0x2785b108  addiu       $a1, $gp, -0x4EF8
    ctx->pc = 0x459450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947080));
    // 0x459454: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x459454u;
    SET_GPR_U32(ctx, 31, 0x45945Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x459454u, 0x45945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45945Cu;
label_45945c:
    // 0x45945c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x45945Cu;
    {
        const bool branch_taken_0x45945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45945c) {
            ctx->pc = 0x459494u;
            goto label_459494;
        }
    }
    ctx->pc = 0x459464u;
    // 0x459464: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x459464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459468: 0x2785b110  addiu       $a1, $gp, -0x4EF0
    ctx->pc = 0x459468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947088));
    // 0x45946c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x45946Cu;
    SET_GPR_U32(ctx, 31, 0x459474u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x45946Cu, 0x459474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459474u;
label_459474:
    // 0x459474: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x459474u;
    {
        const bool branch_taken_0x459474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459474) {
            ctx->pc = 0x459494u;
            goto label_459494;
        }
    }
    ctx->pc = 0x45947Cu;
    // 0x45947c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459480: 0x2785b118  addiu       $a1, $gp, -0x4EE8
    ctx->pc = 0x459480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947096));
    // 0x459484: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x459484u;
    SET_GPR_U32(ctx, 31, 0x45948Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x459484u, 0x45948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45948Cu;
label_45948c:
    // 0x45948c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x45948Cu;
    {
        const bool branch_taken_0x45948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45948c) {
            ctx->pc = 0x4594C0u;
            goto label_4594c0;
        }
    }
    ctx->pc = 0x459494u;
label_459494:
    // 0x459494: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x459494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459498: 0x2785b120  addiu       $a1, $gp, -0x4EE0
    ctx->pc = 0x459498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947104));
    // 0x45949c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x45949cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x4594a0: 0x24c640c0  addiu       $a2, $a2, 0x40C0
    ctx->pc = 0x4594a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16576));
    // 0x4594a4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x4594a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x4594a8: 0x24e741cc  addiu       $a3, $a3, 0x41CC
    ctx->pc = 0x4594a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16844));
    // 0x4594ac: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x4594acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4594b0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x4594B0u;
    SET_GPR_U32(ctx, 31, 0x4594B8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4594B0u, 0x4594B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4594B8u;
label_4594b8:
    // 0x4594b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4594B8u;
    {
        const bool branch_taken_0x4594b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4594b8) {
            ctx->pc = 0x4594DCu;
            goto label_4594dc;
        }
    }
    ctx->pc = 0x4594C0u;
label_4594c0:
    // 0x4594c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4594c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4594c4: 0x2785b128  addiu       $a1, $gp, -0x4ED8
    ctx->pc = 0x4594c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947112));
    // 0x4594c8: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x4594c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x4594cc: 0x24c640c0  addiu       $a2, $a2, 0x40C0
    ctx->pc = 0x4594ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16576));
    // 0x4594d0: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4594d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4594d4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x4594D4u;
    SET_GPR_U32(ctx, 31, 0x4594DCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4594D4u, 0x4594DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4594DCu;
label_4594dc:
    // 0x4594dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4594dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4594e0: 0x8c4341c4  lw          $v1, 0x41C4($v0)
    ctx->pc = 0x4594e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6241C4u));
    // 0x4594e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4594e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4594e8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4594E8u;
    {
        const bool branch_taken_0x4594e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4594e8) {
            ctx->pc = 0x459558u;
            goto label_459558;
        }
    }
    ctx->pc = 0x4594F0u;
    // 0x4594f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4594f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4594f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4594F4u;
    {
        const bool branch_taken_0x4594f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4594f4) {
            ctx->pc = 0x459530u;
            goto label_459530;
        }
    }
    ctx->pc = 0x4594FCu;
label_4594fc:
    // 0x4594fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4594fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459500: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x459500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x459504: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x459504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x459508: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x459508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x45950c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x45950cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x459510: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x459510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x459514: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x459514u;
    {
        const bool branch_taken_0x459514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x459514) {
            ctx->pc = 0x45952Cu;
            goto label_45952c;
        }
    }
    ctx->pc = 0x45951Cu;
    // 0x45951c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x45951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x459520: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x459520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459524: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x459524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x459528: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x459528u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_45952c:
    // 0x45952c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45952cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_459530:
    // 0x459530: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x459530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459534: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x459534u;
    SET_GPR_U32(ctx, 31, 0x45953Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x459534u, 0x45953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45953Cu;
label_45953c:
    // 0x45953c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x45953cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x459540: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x459540u;
    {
        const bool branch_taken_0x459540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459540) {
            ctx->pc = 0x4594FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4594fc;
        }
    }
    ctx->pc = 0x459548u;
    // 0x459548: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x459548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45954c: 0x2785b130  addiu       $a1, $gp, -0x4ED0
    ctx->pc = 0x45954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947120));
    // 0x459550: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x459550u;
    SET_GPR_U32(ctx, 31, 0x459558u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x459550u, 0x459558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459558u;
label_459558:
    // 0x459558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x459558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45955c:
    // 0x45955c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459564: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x459564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x459568: 0x3e00008  jr          $ra
    ctx->pc = 0x459568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459570u;
}
