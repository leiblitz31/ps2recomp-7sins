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

// Function: sub_004807D0
// Address: 0x4807d0 - 0x480920
void sub_004807D0_0x4807d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004807D0_0x4807d0");
#endif

    switch (ctx->pc) {
        case 0x4807d0u: goto label_4807d0;
        case 0x4807d4u: goto label_4807d4;
        case 0x4807d8u: goto label_4807d8;
        case 0x4807dcu: goto label_4807dc;
        case 0x4807e0u: goto label_4807e0;
        case 0x4807e4u: goto label_4807e4;
        case 0x4807e8u: goto label_4807e8;
        case 0x4807ecu: goto label_4807ec;
        case 0x4807f0u: goto label_4807f0;
        case 0x4807f4u: goto label_4807f4;
        case 0x4807f8u: goto label_4807f8;
        case 0x4807fcu: goto label_4807fc;
        case 0x480800u: goto label_480800;
        case 0x480804u: goto label_480804;
        case 0x480808u: goto label_480808;
        case 0x48080cu: goto label_48080c;
        case 0x480810u: goto label_480810;
        case 0x480814u: goto label_480814;
        case 0x480818u: goto label_480818;
        case 0x48081cu: goto label_48081c;
        case 0x480820u: goto label_480820;
        case 0x480824u: goto label_480824;
        case 0x480828u: goto label_480828;
        case 0x48082cu: goto label_48082c;
        case 0x480830u: goto label_480830;
        case 0x480834u: goto label_480834;
        case 0x480838u: goto label_480838;
        case 0x48083cu: goto label_48083c;
        case 0x480840u: goto label_480840;
        case 0x480844u: goto label_480844;
        case 0x480848u: goto label_480848;
        case 0x48084cu: goto label_48084c;
        case 0x480850u: goto label_480850;
        case 0x480854u: goto label_480854;
        case 0x480858u: goto label_480858;
        case 0x48085cu: goto label_48085c;
        case 0x480860u: goto label_480860;
        case 0x480864u: goto label_480864;
        case 0x480868u: goto label_480868;
        case 0x48086cu: goto label_48086c;
        case 0x480870u: goto label_480870;
        case 0x480874u: goto label_480874;
        case 0x480878u: goto label_480878;
        case 0x48087cu: goto label_48087c;
        case 0x480880u: goto label_480880;
        case 0x480884u: goto label_480884;
        case 0x480888u: goto label_480888;
        case 0x48088cu: goto label_48088c;
        case 0x480890u: goto label_480890;
        case 0x480894u: goto label_480894;
        case 0x480898u: goto label_480898;
        case 0x48089cu: goto label_48089c;
        case 0x4808a0u: goto label_4808a0;
        case 0x4808a4u: goto label_4808a4;
        case 0x4808a8u: goto label_4808a8;
        case 0x4808acu: goto label_4808ac;
        case 0x4808b0u: goto label_4808b0;
        case 0x4808b4u: goto label_4808b4;
        case 0x4808b8u: goto label_4808b8;
        case 0x4808bcu: goto label_4808bc;
        case 0x4808c0u: goto label_4808c0;
        case 0x4808c4u: goto label_4808c4;
        case 0x4808c8u: goto label_4808c8;
        case 0x4808ccu: goto label_4808cc;
        case 0x4808d0u: goto label_4808d0;
        case 0x4808d4u: goto label_4808d4;
        case 0x4808d8u: goto label_4808d8;
        case 0x4808dcu: goto label_4808dc;
        case 0x4808e0u: goto label_4808e0;
        case 0x4808e4u: goto label_4808e4;
        case 0x4808e8u: goto label_4808e8;
        case 0x4808ecu: goto label_4808ec;
        case 0x4808f0u: goto label_4808f0;
        case 0x4808f4u: goto label_4808f4;
        case 0x4808f8u: goto label_4808f8;
        case 0x4808fcu: goto label_4808fc;
        case 0x480900u: goto label_480900;
        case 0x480904u: goto label_480904;
        case 0x480908u: goto label_480908;
        case 0x48090cu: goto label_48090c;
        case 0x480910u: goto label_480910;
        case 0x480914u: goto label_480914;
        case 0x480918u: goto label_480918;
        case 0x48091cu: goto label_48091c;
        default: break;
    }

    ctx->pc = 0x4807d0u;

label_4807d0:
    // 0x4807d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x4807d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_4807d4:
    // 0x4807d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4807d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4807d8:
    // 0x4807d8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x4807d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_4807dc:
    // 0x4807dc: 0x8f83c0b8  lw          $v1, -0x3F48($gp)
    ctx->pc = 0x4807dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951096)));
label_4807e0:
    // 0x4807e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4807e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4807e4:
    // 0x4807e4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_4807e8:
    if (ctx->pc == 0x4807E8u) {
        ctx->pc = 0x4807ECu;
        goto label_4807ec;
    }
    ctx->pc = 0x4807E4u;
    {
        const bool branch_taken_0x4807e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4807e4) {
            ctx->pc = 0x480818u;
            goto label_480818;
        }
    }
    ctx->pc = 0x4807ECu;
label_4807ec:
    // 0x4807ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4807ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4807f0:
    // 0x4807f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4807f4:
    if (ctx->pc == 0x4807F4u) {
        ctx->pc = 0x4807F8u;
        goto label_4807f8;
    }
    ctx->pc = 0x4807F0u;
    {
        const bool branch_taken_0x4807f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4807f0) {
            ctx->pc = 0x480800u;
            goto label_480800;
        }
    }
    ctx->pc = 0x4807F8u;
label_4807f8:
    // 0x4807f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_4807fc:
    if (ctx->pc == 0x4807FCu) {
        ctx->pc = 0x480800u;
        goto label_480800;
    }
    ctx->pc = 0x4807F8u;
    {
        const bool branch_taken_0x4807f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4807f8) {
            ctx->pc = 0x480830u;
            goto label_480830;
        }
    }
    ctx->pc = 0x480800u;
label_480800:
    // 0x480800: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x480800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_480804:
    // 0x480804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x480804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480808:
    // 0x480808: 0xc11c53c  jal         func_4714F0
label_48080c:
    if (ctx->pc == 0x48080Cu) {
        ctx->pc = 0x480810u;
        goto label_480810;
    }
    ctx->pc = 0x480808u;
    SET_GPR_U32(ctx, 31, 0x480810u);
    ctx->pc = 0x4714F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4714F0u, 0x480808u, 0x480810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480810u;
label_480810:
    // 0x480810: 0x10000038  b           . + 4 + (0x38 << 2)
label_480814:
    if (ctx->pc == 0x480814u) {
        ctx->pc = 0x480818u;
        goto label_480818;
    }
    ctx->pc = 0x480810u;
    {
        const bool branch_taken_0x480810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x480810) {
            ctx->pc = 0x4808F4u;
            goto label_4808f4;
        }
    }
    ctx->pc = 0x480818u;
label_480818:
    // 0x480818: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x480818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48081c:
    // 0x48081c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x48081cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_480820:
    // 0x480820: 0xc11c770  jal         func_471DC0
label_480824:
    if (ctx->pc == 0x480824u) {
        ctx->pc = 0x480828u;
        goto label_480828;
    }
    ctx->pc = 0x480820u;
    SET_GPR_U32(ctx, 31, 0x480828u);
    ctx->pc = 0x471DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DC0u, 0x480820u, 0x480828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480828u;
label_480828:
    // 0x480828: 0x10000032  b           . + 4 + (0x32 << 2)
label_48082c:
    if (ctx->pc == 0x48082Cu) {
        ctx->pc = 0x480830u;
        goto label_480830;
    }
    ctx->pc = 0x480828u;
    {
        const bool branch_taken_0x480828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x480828) {
            ctx->pc = 0x4808F4u;
            goto label_4808f4;
        }
    }
    ctx->pc = 0x480830u;
label_480830:
    // 0x480830: 0x8f82c0b8  lw          $v0, -0x3F48($gp)
    ctx->pc = 0x480830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951096)));
label_480834:
    // 0x480834: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x480834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_480838:
    // 0x480838: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x480838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48083c:
    // 0x48083c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_480840:
    // 0x480840: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_480844:
    if (ctx->pc == 0x480844u) {
        ctx->pc = 0x480848u;
        goto label_480848;
    }
    ctx->pc = 0x480840u;
    {
        const bool branch_taken_0x480840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480840) {
            ctx->pc = 0x4808F4u;
            goto label_4808f4;
        }
    }
    ctx->pc = 0x480848u;
label_480848:
    // 0x480848: 0x8f82b564  lw          $v0, -0x4A9C($gp)
    ctx->pc = 0x480848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948196)));
label_48084c:
    // 0x48084c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_480850:
    if (ctx->pc == 0x480850u) {
        ctx->pc = 0x480854u;
        goto label_480854;
    }
    ctx->pc = 0x48084Cu;
    {
        const bool branch_taken_0x48084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48084c) {
            ctx->pc = 0x4808F4u;
            goto label_4808f4;
        }
    }
    ctx->pc = 0x480854u;
label_480854:
    // 0x480854: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x480854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_480858:
    // 0x480858: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48085c:
    // 0x48085c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48085cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_480860:
    // 0x480860: 0xc115ee8  jal         func_457BA0
label_480864:
    if (ctx->pc == 0x480864u) {
        ctx->pc = 0x480868u;
        goto label_480868;
    }
    ctx->pc = 0x480860u;
    SET_GPR_U32(ctx, 31, 0x480868u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x480860u, 0x480868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480868u;
label_480868:
    // 0x480868: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_48086c:
    if (ctx->pc == 0x48086Cu) {
        ctx->pc = 0x480870u;
        goto label_480870;
    }
    ctx->pc = 0x480868u;
    {
        const bool branch_taken_0x480868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480868) {
            ctx->pc = 0x4808F4u;
            goto label_4808f4;
        }
    }
    ctx->pc = 0x480870u;
label_480870:
    // 0x480870: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x480870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_480874:
    // 0x480874: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_480878:
    if (ctx->pc == 0x480878u) {
        ctx->pc = 0x48087Cu;
        goto label_48087c;
    }
    ctx->pc = 0x480874u;
    {
        const bool branch_taken_0x480874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480874) {
            ctx->pc = 0x4808F4u;
            goto label_4808f4;
        }
    }
    ctx->pc = 0x48087Cu;
label_48087c:
    // 0x48087c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_480880:
    // 0x480880: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480884:
    // 0x480884: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x480884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_480888:
    // 0x480888: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x480888u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_48088c:
    // 0x48088c: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x48088cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_480890:
    // 0x480890: 0x240801e1  addiu       $t0, $zero, 0x1E1
    ctx->pc = 0x480890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
label_480894:
    // 0x480894: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x480894u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_480898:
    // 0x480898: 0x25291bc0  addiu       $t1, $t1, 0x1BC0
    ctx->pc = 0x480898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7104));
label_48089c:
    // 0x48089c: 0xc113940  jal         func_44E500
label_4808a0:
    if (ctx->pc == 0x4808A0u) {
        ctx->pc = 0x4808A4u;
        goto label_4808a4;
    }
    ctx->pc = 0x48089Cu;
    SET_GPR_U32(ctx, 31, 0x4808A4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48089Cu, 0x4808A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4808A4u;
label_4808a4:
    // 0x4808a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4808a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4808a8:
    // 0x4808a8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4808a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4808ac:
    // 0x4808ac: 0x24a51bf0  addiu       $a1, $a1, 0x1BF0
    ctx->pc = 0x4808acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7152));
label_4808b0:
    // 0x4808b0: 0x8f86c0b8  lw          $a2, -0x3F48($gp)
    ctx->pc = 0x4808b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951096)));
label_4808b4:
    // 0x4808b4: 0xc115c24  jal         func_457090
label_4808b8:
    if (ctx->pc == 0x4808B8u) {
        ctx->pc = 0x4808BCu;
        goto label_4808bc;
    }
    ctx->pc = 0x4808B4u;
    SET_GPR_U32(ctx, 31, 0x4808BCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4808B4u, 0x4808BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4808BCu;
label_4808bc:
    // 0x4808bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4808bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4808c0:
    // 0x4808c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x4808c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_4808c4:
    // 0x4808c4: 0x40f809  jalr        $v0
label_4808c8:
    if (ctx->pc == 0x4808C8u) {
        ctx->pc = 0x4808CCu;
        goto label_4808cc;
    }
    ctx->pc = 0x4808C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4808CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4808C4u, 0x4808CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4808CCu;
label_4808cc:
    // 0x4808cc: 0xaf82b564  sw          $v0, -0x4A9C($gp)
    ctx->pc = 0x4808ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948196), GPR_U32(ctx, 2));
label_4808d0:
    // 0x4808d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4808d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4808d4:
    // 0x4808d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4808d8:
    if (ctx->pc == 0x4808D8u) {
        ctx->pc = 0x4808DCu;
        goto label_4808dc;
    }
    ctx->pc = 0x4808D4u;
    {
        const bool branch_taken_0x4808d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4808d4) {
            ctx->pc = 0x4808E4u;
            goto label_4808e4;
        }
    }
    ctx->pc = 0x4808DCu;
label_4808dc:
    // 0x4808dc: 0xd  break       0
    ctx->pc = 0x4808dcu;
    runtime->handleBreak(rdram, ctx);
label_4808e0:
    // 0x4808e0: 0x0  nop
    ctx->pc = 0x4808e0u;
    // NOP
label_4808e4:
    // 0x4808e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4808e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4808e8:
    // 0x4808e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4808e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4808ec:
    // 0x4808ec: 0xc11392c  jal         func_44E4B0
label_4808f0:
    if (ctx->pc == 0x4808F0u) {
        ctx->pc = 0x4808F4u;
        goto label_4808f4;
    }
    ctx->pc = 0x4808ECu;
    SET_GPR_U32(ctx, 31, 0x4808F4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4808ECu, 0x4808F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4808F4u;
label_4808f4:
    // 0x4808f4: 0x8f82b51c  lw          $v0, -0x4AE4($gp)
    ctx->pc = 0x4808f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948124)));
label_4808f8:
    // 0x4808f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4808fc:
    if (ctx->pc == 0x4808FCu) {
        ctx->pc = 0x480900u;
        goto label_480900;
    }
    ctx->pc = 0x4808F8u;
    {
        const bool branch_taken_0x4808f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4808f8) {
            ctx->pc = 0x48090Cu;
            goto label_48090c;
        }
    }
    ctx->pc = 0x480900u;
label_480900:
    // 0x480900: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x480900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_480904:
    // 0x480904: 0xc0f2262  jal         func_3C8988
label_480908:
    if (ctx->pc == 0x480908u) {
        ctx->pc = 0x48090Cu;
        goto label_48090c;
    }
    ctx->pc = 0x480904u;
    SET_GPR_U32(ctx, 31, 0x48090Cu);
    ctx->pc = 0x3C8988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8988u, 0x480904u, 0x48090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48090Cu;
label_48090c:
    // 0x48090c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_480910:
    // 0x480910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_480914:
    // 0x480914: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x480914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_480918:
    // 0x480918: 0x3e00008  jr          $ra
label_48091c:
    if (ctx->pc == 0x48091Cu) {
        ctx->pc = 0x480920u;
        goto label_fallthrough_0x480918;
    }
    ctx->pc = 0x480918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x480918:
    ctx->pc = 0x480920u;
}
