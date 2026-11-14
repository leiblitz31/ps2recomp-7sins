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

// Function: sub_00456740
// Address: 0x456740 - 0x456860
void sub_00456740_0x456740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456740_0x456740");
#endif

    switch (ctx->pc) {
        case 0x456740u: goto label_456740;
        case 0x456744u: goto label_456744;
        case 0x456748u: goto label_456748;
        case 0x45674cu: goto label_45674c;
        case 0x456750u: goto label_456750;
        case 0x456754u: goto label_456754;
        case 0x456758u: goto label_456758;
        case 0x45675cu: goto label_45675c;
        case 0x456760u: goto label_456760;
        case 0x456764u: goto label_456764;
        case 0x456768u: goto label_456768;
        case 0x45676cu: goto label_45676c;
        case 0x456770u: goto label_456770;
        case 0x456774u: goto label_456774;
        case 0x456778u: goto label_456778;
        case 0x45677cu: goto label_45677c;
        case 0x456780u: goto label_456780;
        case 0x456784u: goto label_456784;
        case 0x456788u: goto label_456788;
        case 0x45678cu: goto label_45678c;
        case 0x456790u: goto label_456790;
        case 0x456794u: goto label_456794;
        case 0x456798u: goto label_456798;
        case 0x45679cu: goto label_45679c;
        case 0x4567a0u: goto label_4567a0;
        case 0x4567a4u: goto label_4567a4;
        case 0x4567a8u: goto label_4567a8;
        case 0x4567acu: goto label_4567ac;
        case 0x4567b0u: goto label_4567b0;
        case 0x4567b4u: goto label_4567b4;
        case 0x4567b8u: goto label_4567b8;
        case 0x4567bcu: goto label_4567bc;
        case 0x4567c0u: goto label_4567c0;
        case 0x4567c4u: goto label_4567c4;
        case 0x4567c8u: goto label_4567c8;
        case 0x4567ccu: goto label_4567cc;
        case 0x4567d0u: goto label_4567d0;
        case 0x4567d4u: goto label_4567d4;
        case 0x4567d8u: goto label_4567d8;
        case 0x4567dcu: goto label_4567dc;
        case 0x4567e0u: goto label_4567e0;
        case 0x4567e4u: goto label_4567e4;
        case 0x4567e8u: goto label_4567e8;
        case 0x4567ecu: goto label_4567ec;
        case 0x4567f0u: goto label_4567f0;
        case 0x4567f4u: goto label_4567f4;
        case 0x4567f8u: goto label_4567f8;
        case 0x4567fcu: goto label_4567fc;
        case 0x456800u: goto label_456800;
        case 0x456804u: goto label_456804;
        case 0x456808u: goto label_456808;
        case 0x45680cu: goto label_45680c;
        case 0x456810u: goto label_456810;
        case 0x456814u: goto label_456814;
        case 0x456818u: goto label_456818;
        case 0x45681cu: goto label_45681c;
        case 0x456820u: goto label_456820;
        case 0x456824u: goto label_456824;
        case 0x456828u: goto label_456828;
        case 0x45682cu: goto label_45682c;
        case 0x456830u: goto label_456830;
        case 0x456834u: goto label_456834;
        case 0x456838u: goto label_456838;
        case 0x45683cu: goto label_45683c;
        case 0x456840u: goto label_456840;
        case 0x456844u: goto label_456844;
        case 0x456848u: goto label_456848;
        case 0x45684cu: goto label_45684c;
        case 0x456850u: goto label_456850;
        case 0x456854u: goto label_456854;
        case 0x456858u: goto label_456858;
        case 0x45685cu: goto label_45685c;
        default: break;
    }

    ctx->pc = 0x456740u;

label_456740:
    // 0x456740: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x456740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_456744:
    // 0x456744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x456744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_456748:
    // 0x456748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45674c:
    // 0x45674c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456750:
    // 0x456750: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x456750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_456754:
    // 0x456754: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x456754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_456758:
    // 0x456758: 0x8fb10170  lw          $s1, 0x170($sp)
    ctx->pc = 0x456758u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45675c:
    // 0x45675c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45675cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_456760:
    // 0x456760: 0xc1159c4  jal         func_456710
label_456764:
    if (ctx->pc == 0x456764u) {
        ctx->pc = 0x456768u;
        goto label_456768;
    }
    ctx->pc = 0x456760u;
    SET_GPR_U32(ctx, 31, 0x456768u);
    ctx->pc = 0x456710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456710u, 0x456760u, 0x456768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456768u;
label_456768:
    // 0x456768: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x456768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_45676c:
    // 0x45676c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_456770:
    if (ctx->pc == 0x456770u) {
        ctx->pc = 0x456774u;
        goto label_456774;
    }
    ctx->pc = 0x45676Cu;
    {
        const bool branch_taken_0x45676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45676c) {
            ctx->pc = 0x456830u;
            goto label_456830;
        }
    }
    ctx->pc = 0x456774u;
label_456774:
    // 0x456774: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x456774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456778:
    // 0x456778: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_45677c:
    if (ctx->pc == 0x45677Cu) {
        ctx->pc = 0x456780u;
        goto label_456780;
    }
    ctx->pc = 0x456778u;
    {
        const bool branch_taken_0x456778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x456778) {
            ctx->pc = 0x456824u;
            goto label_456824;
        }
    }
    ctx->pc = 0x456780u;
label_456780:
    // 0x456780: 0x8f82b090  lw          $v0, -0x4F70($gp)
    ctx->pc = 0x456780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946960)));
label_456784:
    // 0x456784: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_456788:
    if (ctx->pc == 0x456788u) {
        ctx->pc = 0x45678Cu;
        goto label_45678c;
    }
    ctx->pc = 0x456784u;
    {
        const bool branch_taken_0x456784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456784) {
            ctx->pc = 0x456824u;
            goto label_456824;
        }
    }
    ctx->pc = 0x45678Cu;
label_45678c:
    // 0x45678c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45678cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_456790:
    // 0x456790: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_456794:
    // 0x456794: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x456794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_456798:
    // 0x456798: 0xc115ee8  jal         func_457BA0
label_45679c:
    if (ctx->pc == 0x45679Cu) {
        ctx->pc = 0x4567A0u;
        goto label_4567a0;
    }
    ctx->pc = 0x456798u;
    SET_GPR_U32(ctx, 31, 0x4567A0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x456798u, 0x4567A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4567A0u;
label_4567a0:
    // 0x4567a0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4567a4:
    if (ctx->pc == 0x4567A4u) {
        ctx->pc = 0x4567A8u;
        goto label_4567a8;
    }
    ctx->pc = 0x4567A0u;
    {
        const bool branch_taken_0x4567a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4567a0) {
            ctx->pc = 0x456824u;
            goto label_456824;
        }
    }
    ctx->pc = 0x4567A8u;
label_4567a8:
    // 0x4567a8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x4567a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_4567ac:
    // 0x4567ac: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4567b0:
    if (ctx->pc == 0x4567B0u) {
        ctx->pc = 0x4567B4u;
        goto label_4567b4;
    }
    ctx->pc = 0x4567ACu;
    {
        const bool branch_taken_0x4567ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4567ac) {
            ctx->pc = 0x456824u;
            goto label_456824;
        }
    }
    ctx->pc = 0x4567B4u;
label_4567b4:
    // 0x4567b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4567b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4567b8:
    // 0x4567b8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4567b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4567bc:
    // 0x4567bc: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x4567bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_4567c0:
    // 0x4567c0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4567c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4567c4:
    // 0x4567c4: 0x24e7e390  addiu       $a3, $a3, -0x1C70
    ctx->pc = 0x4567c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960016));
label_4567c8:
    // 0x4567c8: 0x2408003b  addiu       $t0, $zero, 0x3B
    ctx->pc = 0x4567c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4567cc:
    // 0x4567cc: 0x2789b098  addiu       $t1, $gp, -0x4F68
    ctx->pc = 0x4567ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946968));
label_4567d0:
    // 0x4567d0: 0xc113940  jal         func_44E500
label_4567d4:
    if (ctx->pc == 0x4567D4u) {
        ctx->pc = 0x4567D8u;
        goto label_4567d8;
    }
    ctx->pc = 0x4567D0u;
    SET_GPR_U32(ctx, 31, 0x4567D8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4567D0u, 0x4567D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4567D8u;
label_4567d8:
    // 0x4567d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4567d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4567dc:
    // 0x4567dc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4567dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4567e0:
    // 0x4567e0: 0x24a5e3b0  addiu       $a1, $a1, -0x1C50
    ctx->pc = 0x4567e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960048));
label_4567e4:
    // 0x4567e4: 0xc115c24  jal         func_457090
label_4567e8:
    if (ctx->pc == 0x4567E8u) {
        ctx->pc = 0x4567ECu;
        goto label_4567ec;
    }
    ctx->pc = 0x4567E4u;
    SET_GPR_U32(ctx, 31, 0x4567ECu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4567E4u, 0x4567ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4567ECu;
label_4567ec:
    // 0x4567ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4567ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4567f0:
    // 0x4567f0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x4567f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_4567f4:
    // 0x4567f4: 0x40f809  jalr        $v0
label_4567f8:
    if (ctx->pc == 0x4567F8u) {
        ctx->pc = 0x4567FCu;
        goto label_4567fc;
    }
    ctx->pc = 0x4567F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4567FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4567F4u, 0x4567FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4567FCu;
label_4567fc:
    // 0x4567fc: 0xaf82b090  sw          $v0, -0x4F70($gp)
    ctx->pc = 0x4567fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946960), GPR_U32(ctx, 2));
label_456800:
    // 0x456800: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x456800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_456804:
    // 0x456804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_456808:
    if (ctx->pc == 0x456808u) {
        ctx->pc = 0x45680Cu;
        goto label_45680c;
    }
    ctx->pc = 0x456804u;
    {
        const bool branch_taken_0x456804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456804) {
            ctx->pc = 0x456814u;
            goto label_456814;
        }
    }
    ctx->pc = 0x45680Cu;
label_45680c:
    // 0x45680c: 0xd  break       0
    ctx->pc = 0x45680cu;
    runtime->handleBreak(rdram, ctx);
label_456810:
    // 0x456810: 0x0  nop
    ctx->pc = 0x456810u;
    // NOP
label_456814:
    // 0x456814: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x456814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_456818:
    // 0x456818: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x456818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45681c:
    // 0x45681c: 0xc11392c  jal         func_44E4B0
label_456820:
    if (ctx->pc == 0x456820u) {
        ctx->pc = 0x456824u;
        goto label_456824;
    }
    ctx->pc = 0x45681Cu;
    SET_GPR_U32(ctx, 31, 0x456824u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45681Cu, 0x456824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456824u;
label_456824:
    // 0x456824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x456824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456828:
    // 0x456828: 0x10000007  b           . + 4 + (0x7 << 2)
label_45682c:
    if (ctx->pc == 0x45682Cu) {
        ctx->pc = 0x456830u;
        goto label_456830;
    }
    ctx->pc = 0x456828u;
    {
        const bool branch_taken_0x456828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456828) {
            ctx->pc = 0x456848u;
            goto label_456848;
        }
    }
    ctx->pc = 0x456830u;
label_456830:
    // 0x456830: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x456830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_456834:
    // 0x456834: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x456834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_456838:
    // 0x456838: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x456838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45683c:
    // 0x45683c: 0xc11451c  jal         func_451470
label_456840:
    if (ctx->pc == 0x456840u) {
        ctx->pc = 0x456844u;
        goto label_456844;
    }
    ctx->pc = 0x45683Cu;
    SET_GPR_U32(ctx, 31, 0x456844u);
    ctx->pc = 0x451470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451470u, 0x45683Cu, 0x456844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456844u;
label_456844:
    // 0x456844: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x456844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_456848:
    // 0x456848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x456848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45684c:
    // 0x45684c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45684cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_456850:
    // 0x456850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456854:
    // 0x456854: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x456854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_456858:
    // 0x456858: 0x3e00008  jr          $ra
label_45685c:
    if (ctx->pc == 0x45685Cu) {
        ctx->pc = 0x456860u;
        goto label_fallthrough_0x456858;
    }
    ctx->pc = 0x456858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x456858:
    ctx->pc = 0x456860u;
}
