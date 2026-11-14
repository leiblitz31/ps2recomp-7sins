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

// Function: sub_00245650
// Address: 0x245650 - 0x2457b0
void sub_00245650_0x245650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245650_0x245650");
#endif

    switch (ctx->pc) {
        case 0x245650u: goto label_245650;
        case 0x245654u: goto label_245654;
        case 0x245658u: goto label_245658;
        case 0x24565cu: goto label_24565c;
        case 0x245660u: goto label_245660;
        case 0x245664u: goto label_245664;
        case 0x245668u: goto label_245668;
        case 0x24566cu: goto label_24566c;
        case 0x245670u: goto label_245670;
        case 0x245674u: goto label_245674;
        case 0x245678u: goto label_245678;
        case 0x24567cu: goto label_24567c;
        case 0x245680u: goto label_245680;
        case 0x245684u: goto label_245684;
        case 0x245688u: goto label_245688;
        case 0x24568cu: goto label_24568c;
        case 0x245690u: goto label_245690;
        case 0x245694u: goto label_245694;
        case 0x245698u: goto label_245698;
        case 0x24569cu: goto label_24569c;
        case 0x2456a0u: goto label_2456a0;
        case 0x2456a4u: goto label_2456a4;
        case 0x2456a8u: goto label_2456a8;
        case 0x2456acu: goto label_2456ac;
        case 0x2456b0u: goto label_2456b0;
        case 0x2456b4u: goto label_2456b4;
        case 0x2456b8u: goto label_2456b8;
        case 0x2456bcu: goto label_2456bc;
        case 0x2456c0u: goto label_2456c0;
        case 0x2456c4u: goto label_2456c4;
        case 0x2456c8u: goto label_2456c8;
        case 0x2456ccu: goto label_2456cc;
        case 0x2456d0u: goto label_2456d0;
        case 0x2456d4u: goto label_2456d4;
        case 0x2456d8u: goto label_2456d8;
        case 0x2456dcu: goto label_2456dc;
        case 0x2456e0u: goto label_2456e0;
        case 0x2456e4u: goto label_2456e4;
        case 0x2456e8u: goto label_2456e8;
        case 0x2456ecu: goto label_2456ec;
        case 0x2456f0u: goto label_2456f0;
        case 0x2456f4u: goto label_2456f4;
        case 0x2456f8u: goto label_2456f8;
        case 0x2456fcu: goto label_2456fc;
        case 0x245700u: goto label_245700;
        case 0x245704u: goto label_245704;
        case 0x245708u: goto label_245708;
        case 0x24570cu: goto label_24570c;
        case 0x245710u: goto label_245710;
        case 0x245714u: goto label_245714;
        case 0x245718u: goto label_245718;
        case 0x24571cu: goto label_24571c;
        case 0x245720u: goto label_245720;
        case 0x245724u: goto label_245724;
        case 0x245728u: goto label_245728;
        case 0x24572cu: goto label_24572c;
        case 0x245730u: goto label_245730;
        case 0x245734u: goto label_245734;
        case 0x245738u: goto label_245738;
        case 0x24573cu: goto label_24573c;
        case 0x245740u: goto label_245740;
        case 0x245744u: goto label_245744;
        case 0x245748u: goto label_245748;
        case 0x24574cu: goto label_24574c;
        case 0x245750u: goto label_245750;
        case 0x245754u: goto label_245754;
        case 0x245758u: goto label_245758;
        case 0x24575cu: goto label_24575c;
        case 0x245760u: goto label_245760;
        case 0x245764u: goto label_245764;
        case 0x245768u: goto label_245768;
        case 0x24576cu: goto label_24576c;
        case 0x245770u: goto label_245770;
        case 0x245774u: goto label_245774;
        case 0x245778u: goto label_245778;
        case 0x24577cu: goto label_24577c;
        case 0x245780u: goto label_245780;
        case 0x245784u: goto label_245784;
        case 0x245788u: goto label_245788;
        case 0x24578cu: goto label_24578c;
        case 0x245790u: goto label_245790;
        case 0x245794u: goto label_245794;
        case 0x245798u: goto label_245798;
        case 0x24579cu: goto label_24579c;
        case 0x2457a0u: goto label_2457a0;
        case 0x2457a4u: goto label_2457a4;
        case 0x2457a8u: goto label_2457a8;
        case 0x2457acu: goto label_2457ac;
        default: break;
    }

    ctx->pc = 0x245650u;

label_245650:
    // 0x245650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x245650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_245654:
    // 0x245654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x245654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_245658:
    // 0x245658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x245658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24565c:
    // 0x24565c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_245660:
    // 0x245660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245664:
    // 0x245664: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x245664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_245668:
    // 0x245668: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x245668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_24566c:
    // 0x24566c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x24566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245670:
    // 0x245670: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_245674:
    if (ctx->pc == 0x245674u) {
        ctx->pc = 0x245678u;
        goto label_245678;
    }
    ctx->pc = 0x245670u;
    {
        const bool branch_taken_0x245670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245670) {
            ctx->pc = 0x245790u;
            goto label_245790;
        }
    }
    ctx->pc = 0x245678u;
label_245678:
    // 0x245678: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x245678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_24567c:
    // 0x24567c: 0xc085530  jal         func_2154C0
label_245680:
    if (ctx->pc == 0x245680u) {
        ctx->pc = 0x245684u;
        goto label_245684;
    }
    ctx->pc = 0x24567Cu;
    SET_GPR_U32(ctx, 31, 0x245684u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x24567Cu, 0x245684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245684u;
label_245684:
    // 0x245684: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x245684u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_245688:
    // 0x245688: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
label_24568c:
    if (ctx->pc == 0x24568Cu) {
        ctx->pc = 0x245690u;
        goto label_245690;
    }
    ctx->pc = 0x245688u;
    {
        const bool branch_taken_0x245688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245688) {
            ctx->pc = 0x245790u;
            goto label_245790;
        }
    }
    ctx->pc = 0x245690u;
label_245690:
    // 0x245690: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_245694:
    // 0x245694: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x245694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_245698:
    // 0x245698: 0xc042290  jal         func_108A40
label_24569c:
    if (ctx->pc == 0x24569Cu) {
        ctx->pc = 0x2456A0u;
        goto label_2456a0;
    }
    ctx->pc = 0x245698u;
    SET_GPR_U32(ctx, 31, 0x2456A0u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x245698u, 0x2456A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2456A0u;
label_2456a0:
    // 0x2456a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2456a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2456a4:
    // 0x2456a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2456a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2456a8:
    // 0x2456a8: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x2456a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_2456ac:
    // 0x2456ac: 0xc042288  jal         func_108A20
label_2456b0:
    if (ctx->pc == 0x2456B0u) {
        ctx->pc = 0x2456B4u;
        goto label_2456b4;
    }
    ctx->pc = 0x2456ACu;
    SET_GPR_U32(ctx, 31, 0x2456B4u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2456ACu, 0x2456B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2456B4u;
label_2456b4:
    // 0x2456b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2456b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2456b8:
    // 0x2456b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2456b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2456bc:
    // 0x2456bc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2456bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2456c0:
    // 0x2456c0: 0xc050540  jal         func_141500
label_2456c4:
    if (ctx->pc == 0x2456C4u) {
        ctx->pc = 0x2456C8u;
        goto label_2456c8;
    }
    ctx->pc = 0x2456C0u;
    SET_GPR_U32(ctx, 31, 0x2456C8u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x2456C0u, 0x2456C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2456C8u;
label_2456c8:
    // 0x2456c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2456c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2456cc:
    // 0x2456cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2456ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2456d0:
    // 0x2456d0: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x2456d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_2456d4:
    // 0x2456d4: 0xc042288  jal         func_108A20
label_2456d8:
    if (ctx->pc == 0x2456D8u) {
        ctx->pc = 0x2456DCu;
        goto label_2456dc;
    }
    ctx->pc = 0x2456D4u;
    SET_GPR_U32(ctx, 31, 0x2456DCu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2456D4u, 0x2456DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2456DCu;
label_2456dc:
    // 0x2456dc: 0x1622002c  bne         $s1, $v0, . + 4 + (0x2C << 2)
label_2456e0:
    if (ctx->pc == 0x2456E0u) {
        ctx->pc = 0x2456E4u;
        goto label_2456e4;
    }
    ctx->pc = 0x2456DCu;
    {
        const bool branch_taken_0x2456dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2456dc) {
            ctx->pc = 0x245790u;
            goto label_245790;
        }
    }
    ctx->pc = 0x2456E4u;
label_2456e4:
    // 0x2456e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2456e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2456e8:
    // 0x2456e8: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x2456e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_2456ec:
    // 0x2456ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2456ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2456f0:
    // 0x2456f0: 0xc042128  jal         func_1084A0
label_2456f4:
    if (ctx->pc == 0x2456F4u) {
        ctx->pc = 0x2456F8u;
        goto label_2456f8;
    }
    ctx->pc = 0x2456F0u;
    SET_GPR_U32(ctx, 31, 0x2456F8u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x2456F0u, 0x2456F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2456F8u;
label_2456f8:
    // 0x2456f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2456f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2456fc:
    // 0x2456fc: 0xc085530  jal         func_2154C0
label_245700:
    if (ctx->pc == 0x245700u) {
        ctx->pc = 0x245704u;
        goto label_245704;
    }
    ctx->pc = 0x2456FCu;
    SET_GPR_U32(ctx, 31, 0x245704u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2456FCu, 0x245704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245704u;
label_245704:
    // 0x245704: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x245704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_245708:
    // 0x245708: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x245708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24570c:
    // 0x24570c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24570cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_245710:
    // 0x245710: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_245714:
    // 0x245714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245718:
    // 0x245718: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x245718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_24571c:
    // 0x24571c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24571cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_245720:
    // 0x245720: 0xc042128  jal         func_1084A0
label_245724:
    if (ctx->pc == 0x245724u) {
        ctx->pc = 0x245728u;
        goto label_245728;
    }
    ctx->pc = 0x245720u;
    SET_GPR_U32(ctx, 31, 0x245728u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x245720u, 0x245728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245728u;
label_245728:
    // 0x245728: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_24572c:
    // 0x24572c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x24572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_245730:
    // 0x245730: 0xc0915f4  jal         func_2457D0
label_245734:
    if (ctx->pc == 0x245734u) {
        ctx->pc = 0x245738u;
        goto label_245738;
    }
    ctx->pc = 0x245730u;
    SET_GPR_U32(ctx, 31, 0x245738u);
    ctx->pc = 0x2457D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457D0u, 0x245730u, 0x245738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245738u;
label_245738:
    // 0x245738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24573c:
    // 0x24573c: 0x1000000b  b           . + 4 + (0xB << 2)
label_245740:
    if (ctx->pc == 0x245740u) {
        ctx->pc = 0x245744u;
        goto label_245744;
    }
    ctx->pc = 0x24573Cu;
    {
        const bool branch_taken_0x24573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24573c) {
            ctx->pc = 0x24576Cu;
            goto label_24576c;
        }
    }
    ctx->pc = 0x245744u;
label_245744:
    // 0x245744: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x245744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_245748:
    // 0x245748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x245748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24574c:
    // 0x24574c: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
label_245750:
    if (ctx->pc == 0x245750u) {
        ctx->pc = 0x245754u;
        goto label_245754;
    }
    ctx->pc = 0x24574Cu;
    {
        const bool branch_taken_0x24574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24574c) {
            ctx->pc = 0x245768u;
            goto label_245768;
        }
    }
    ctx->pc = 0x245754u;
label_245754:
    // 0x245754: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x245754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245758:
    // 0x245758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x245758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24575c:
    // 0x24575c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_245760:
    // 0x245760: 0x40f809  jalr        $v0
label_245764:
    if (ctx->pc == 0x245764u) {
        ctx->pc = 0x245768u;
        goto label_245768;
    }
    ctx->pc = 0x245760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245768u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245760u, 0x245768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245768u;
label_245768:
    // 0x245768: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x245768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24576c:
    // 0x24576c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_245770:
    // 0x245770: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_245774:
    // 0x245774: 0xc0915ec  jal         func_2457B0
label_245778:
    if (ctx->pc == 0x245778u) {
        ctx->pc = 0x24577Cu;
        goto label_24577c;
    }
    ctx->pc = 0x245774u;
    SET_GPR_U32(ctx, 31, 0x24577Cu);
    ctx->pc = 0x2457B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457B0u, 0x245774u, 0x24577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24577Cu;
label_24577c:
    // 0x24577c: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
label_245780:
    if (ctx->pc == 0x245780u) {
        ctx->pc = 0x245784u;
        goto label_245784;
    }
    ctx->pc = 0x24577Cu;
    {
        const bool branch_taken_0x24577c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24577c) {
            ctx->pc = 0x245744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245744;
        }
    }
    ctx->pc = 0x245784u;
label_245784:
    // 0x245784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245788:
    // 0x245788: 0x10000002  b           . + 4 + (0x2 << 2)
label_24578c:
    if (ctx->pc == 0x24578Cu) {
        ctx->pc = 0x245790u;
        goto label_245790;
    }
    ctx->pc = 0x245788u;
    {
        const bool branch_taken_0x245788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245788) {
            ctx->pc = 0x245794u;
            goto label_245794;
        }
    }
    ctx->pc = 0x245790u;
label_245790:
    // 0x245790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245794:
    // 0x245794: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x245794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_245798:
    // 0x245798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24579c:
    // 0x24579c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24579cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2457a0:
    // 0x2457a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2457a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2457a4:
    // 0x2457a4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2457a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2457a8:
    // 0x2457a8: 0x3e00008  jr          $ra
label_2457ac:
    if (ctx->pc == 0x2457ACu) {
        ctx->pc = 0x2457B0u;
        goto label_fallthrough_0x2457a8;
    }
    ctx->pc = 0x2457A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2457A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2457a8:
    ctx->pc = 0x2457B0u;
}
