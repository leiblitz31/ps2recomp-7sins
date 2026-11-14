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

// Function: sub_00411658
// Address: 0x411658 - 0x411790
void sub_00411658_0x411658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411658_0x411658");
#endif

    switch (ctx->pc) {
        case 0x411658u: goto label_411658;
        case 0x41165cu: goto label_41165c;
        case 0x411660u: goto label_411660;
        case 0x411664u: goto label_411664;
        case 0x411668u: goto label_411668;
        case 0x41166cu: goto label_41166c;
        case 0x411670u: goto label_411670;
        case 0x411674u: goto label_411674;
        case 0x411678u: goto label_411678;
        case 0x41167cu: goto label_41167c;
        case 0x411680u: goto label_411680;
        case 0x411684u: goto label_411684;
        case 0x411688u: goto label_411688;
        case 0x41168cu: goto label_41168c;
        case 0x411690u: goto label_411690;
        case 0x411694u: goto label_411694;
        case 0x411698u: goto label_411698;
        case 0x41169cu: goto label_41169c;
        case 0x4116a0u: goto label_4116a0;
        case 0x4116a4u: goto label_4116a4;
        case 0x4116a8u: goto label_4116a8;
        case 0x4116acu: goto label_4116ac;
        case 0x4116b0u: goto label_4116b0;
        case 0x4116b4u: goto label_4116b4;
        case 0x4116b8u: goto label_4116b8;
        case 0x4116bcu: goto label_4116bc;
        case 0x4116c0u: goto label_4116c0;
        case 0x4116c4u: goto label_4116c4;
        case 0x4116c8u: goto label_4116c8;
        case 0x4116ccu: goto label_4116cc;
        case 0x4116d0u: goto label_4116d0;
        case 0x4116d4u: goto label_4116d4;
        case 0x4116d8u: goto label_4116d8;
        case 0x4116dcu: goto label_4116dc;
        case 0x4116e0u: goto label_4116e0;
        case 0x4116e4u: goto label_4116e4;
        case 0x4116e8u: goto label_4116e8;
        case 0x4116ecu: goto label_4116ec;
        case 0x4116f0u: goto label_4116f0;
        case 0x4116f4u: goto label_4116f4;
        case 0x4116f8u: goto label_4116f8;
        case 0x4116fcu: goto label_4116fc;
        case 0x411700u: goto label_411700;
        case 0x411704u: goto label_411704;
        case 0x411708u: goto label_411708;
        case 0x41170cu: goto label_41170c;
        case 0x411710u: goto label_411710;
        case 0x411714u: goto label_411714;
        case 0x411718u: goto label_411718;
        case 0x41171cu: goto label_41171c;
        case 0x411720u: goto label_411720;
        case 0x411724u: goto label_411724;
        case 0x411728u: goto label_411728;
        case 0x41172cu: goto label_41172c;
        case 0x411730u: goto label_411730;
        case 0x411734u: goto label_411734;
        case 0x411738u: goto label_411738;
        case 0x41173cu: goto label_41173c;
        case 0x411740u: goto label_411740;
        case 0x411744u: goto label_411744;
        case 0x411748u: goto label_411748;
        case 0x41174cu: goto label_41174c;
        case 0x411750u: goto label_411750;
        case 0x411754u: goto label_411754;
        case 0x411758u: goto label_411758;
        case 0x41175cu: goto label_41175c;
        case 0x411760u: goto label_411760;
        case 0x411764u: goto label_411764;
        case 0x411768u: goto label_411768;
        case 0x41176cu: goto label_41176c;
        case 0x411770u: goto label_411770;
        case 0x411774u: goto label_411774;
        case 0x411778u: goto label_411778;
        case 0x41177cu: goto label_41177c;
        case 0x411780u: goto label_411780;
        case 0x411784u: goto label_411784;
        case 0x411788u: goto label_411788;
        case 0x41178cu: goto label_41178c;
        default: break;
    }

    ctx->pc = 0x411658u;

label_411658:
    // 0x411658: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x411658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41165c:
    // 0x41165c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41165cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_411660:
    // 0x411660: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x411660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_411664:
    // 0x411664: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x411664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_411668:
    // 0x411668: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x411668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41166c:
    // 0x41166c: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41166cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_411670:
    // 0x411670: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x411670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_411674:
    // 0x411674: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x411674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411678:
    // 0x411678: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x411678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_41167c:
    // 0x41167c: 0xb28021  addu        $s0, $a1, $s2
    ctx->pc = 0x41167cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_411680:
    // 0x411680: 0x8e510128  lw          $s1, 0x128($s2)
    ctx->pc = 0x411680u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_411684:
    // 0x411684: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_411688:
    if (ctx->pc == 0x411688u) {
        ctx->pc = 0x411688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411684u;
        // 0x411688: 0xaf85bdd0  sw          $a1, -0x4230($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41168Cu;
        goto label_41168c;
    }
    ctx->pc = 0x411684u;
    {
        const bool branch_taken_0x411684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x411688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411684u;
        // 0x411688: 0xaf85bdd0  sw          $a1, -0x4230($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411684) {
            ctx->pc = 0x411720u;
            goto label_411720;
        }
    }
    ctx->pc = 0x41168Cu;
label_41168c:
    // 0x41168c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x41168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_411690:
    // 0x411690: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x411690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_411694:
    // 0x411694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411698:
    // 0x411698: 0x40f809  jalr        $v0
label_41169c:
    if (ctx->pc == 0x41169Cu) {
        ctx->pc = 0x41169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411698u;
        // 0x41169c: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116A0u;
        goto label_4116a0;
    }
    ctx->pc = 0x411698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4116A0u);
        ctx->pc = 0x41169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411698u;
        // 0x41169c: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411698u, 0x4116A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4116A0u;
label_4116a0:
    // 0x4116a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_4116a4:
    if (ctx->pc == 0x4116A4u) {
        ctx->pc = 0x4116A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116A0u;
        // 0x4116a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116A8u;
        goto label_4116a8;
    }
    ctx->pc = 0x4116A0u;
    {
        const bool branch_taken_0x4116a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4116A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116A0u;
        // 0x4116a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4116a0) {
            ctx->pc = 0x4116D0u;
            goto label_4116d0;
        }
    }
    ctx->pc = 0x4116A8u;
label_4116a8:
    // 0x4116a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4116a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4116ac:
    // 0x4116ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4116acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4116b0:
    // 0x4116b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4116b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4116b4:
    // 0x4116b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4116b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4116b8:
    // 0x4116b8: 0xc1035f6  jal         func_40D7D8
label_4116bc:
    if (ctx->pc == 0x4116BCu) {
        ctx->pc = 0x4116BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116B8u;
        // 0x4116bc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116C0u;
        goto label_4116c0;
    }
    ctx->pc = 0x4116B8u;
    SET_GPR_U32(ctx, 31, 0x4116C0u);
    ctx->pc = 0x4116BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4116B8u;
    // 0x4116bc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4116B8u, 0x4116C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4116C0u;
label_4116c0:
    // 0x4116c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4116c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4116c4:
    // 0x4116c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_4116c8:
    if (ctx->pc == 0x4116C8u) {
        ctx->pc = 0x4116C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116C4u;
        // 0x4116c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116CCu;
        goto label_4116cc;
    }
    ctx->pc = 0x4116C4u;
    {
        const bool branch_taken_0x4116c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4116C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116C4u;
        // 0x4116c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4116c4) {
            ctx->pc = 0x411710u;
            goto label_411710;
        }
    }
    ctx->pc = 0x4116CCu;
label_4116cc:
    // 0x4116cc: 0x0  nop
    ctx->pc = 0x4116ccu;
    // NOP
label_4116d0:
    // 0x4116d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4116d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4116d4:
    // 0x4116d4: 0xc10505c  jal         func_414170
label_4116d8:
    if (ctx->pc == 0x4116D8u) {
        ctx->pc = 0x4116D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116D4u;
        // 0x4116d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116DCu;
        goto label_4116dc;
    }
    ctx->pc = 0x4116D4u;
    SET_GPR_U32(ctx, 31, 0x4116DCu);
    ctx->pc = 0x4116D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4116D4u;
    // 0x4116d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414170u, 0x4116D4u, 0x4116DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4116DCu;
label_4116dc:
    // 0x4116dc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_4116e0:
    if (ctx->pc == 0x4116E0u) {
        ctx->pc = 0x4116E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116DCu;
        // 0x4116e0: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116E4u;
        goto label_4116e4;
    }
    ctx->pc = 0x4116DCu;
    {
        const bool branch_taken_0x4116dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4116E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116DCu;
        // 0x4116e0: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4116dc) {
            ctx->pc = 0x411728u;
            goto label_411728;
        }
    }
    ctx->pc = 0x4116E4u;
label_4116e4:
    // 0x4116e4: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x4116e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_4116e8:
    // 0x4116e8: 0x60f809  jalr        $v1
label_4116ec:
    if (ctx->pc == 0x4116ECu) {
        ctx->pc = 0x4116ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116E8u;
        // 0x4116ec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116F0u;
        goto label_4116f0;
    }
    ctx->pc = 0x4116E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4116F0u);
        ctx->pc = 0x4116ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116E8u;
        // 0x4116ec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4116E8u, 0x4116F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4116F0u;
label_4116f0:
    // 0x4116f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4116f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4116f4:
    // 0x4116f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4116f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4116f8:
    // 0x4116f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4116f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4116fc:
    // 0x4116fc: 0xc1035f6  jal         func_40D7D8
label_411700:
    if (ctx->pc == 0x411700u) {
        ctx->pc = 0x411700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116FCu;
        // 0x411700: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411704u;
        goto label_411704;
    }
    ctx->pc = 0x4116FCu;
    SET_GPR_U32(ctx, 31, 0x411704u);
    ctx->pc = 0x411700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4116FCu;
    // 0x411700: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4116FCu, 0x411704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411704u;
label_411704:
    // 0x411704: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x411704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_411708:
    // 0x411708: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x411708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_41170c:
    // 0x41170c: 0x0  nop
    ctx->pc = 0x41170cu;
    // NOP
label_411710:
    // 0x411710: 0xc103628  jal         func_40D8A0
label_411714:
    if (ctx->pc == 0x411714u) {
        ctx->pc = 0x411718u;
        goto label_411718;
    }
    ctx->pc = 0x411710u;
    SET_GPR_U32(ctx, 31, 0x411718u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x411710u, 0x411718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411718u;
label_411718:
    // 0x411718: 0x1000000e  b           . + 4 + (0xE << 2)
label_41171c:
    if (ctx->pc == 0x41171Cu) {
        ctx->pc = 0x41171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411718u;
        // 0x41171c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411720u;
        goto label_411720;
    }
    ctx->pc = 0x411718u;
    {
        const bool branch_taken_0x411718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411718u;
        // 0x41171c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411718) {
            ctx->pc = 0x411754u;
            goto label_411754;
        }
    }
    ctx->pc = 0x411720u;
label_411720:
    // 0x411720: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x411720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_411724:
    // 0x411724: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x411724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_411728:
    // 0x411728: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x411728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_41172c:
    // 0x41172c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x41172cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_411730:
    // 0x411730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x411730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411734:
    // 0x411734: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x411734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_411738:
    // 0x411738: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x411738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_41173c:
    // 0x41173c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x41173cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_411740:
    // 0x411740: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x411740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_411744:
    // 0x411744: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x411744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_411748:
    // 0x411748: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x411748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_41174c:
    // 0x41174c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x41174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_411750:
    // 0x411750: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x411750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_411754:
    // 0x411754: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_411758:
    if (ctx->pc == 0x411758u) {
        ctx->pc = 0x411758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411754u;
        // 0x411758: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41175Cu;
        goto label_41175c;
    }
    ctx->pc = 0x411754u;
    {
        const bool branch_taken_0x411754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x411758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411754u;
        // 0x411758: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411754) {
            ctx->pc = 0x411770u;
            goto label_411770;
        }
    }
    ctx->pc = 0x41175Cu;
label_41175c:
    // 0x41175c: 0x8f83bdd4  lw          $v1, -0x422C($gp)
    ctx->pc = 0x41175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950356)));
label_411760:
    // 0x411760: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x411760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_411764:
    // 0x411764: 0xaf83bdd4  sw          $v1, -0x422C($gp)
    ctx->pc = 0x411764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950356), GPR_U32(ctx, 3));
label_411768:
    // 0x411768: 0x10000003  b           . + 4 + (0x3 << 2)
label_41176c:
    if (ctx->pc == 0x41176Cu) {
        ctx->pc = 0x41176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411768u;
        // 0x41176c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411770u;
        goto label_411770;
    }
    ctx->pc = 0x411768u;
    {
        const bool branch_taken_0x411768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411768u;
        // 0x41176c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411768) {
            ctx->pc = 0x411778u;
            goto label_411778;
        }
    }
    ctx->pc = 0x411770u;
label_411770:
    // 0x411770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x411770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411774:
    // 0x411774: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x411774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_411778:
    // 0x411778: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x411778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41177c:
    // 0x41177c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x41177cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411780:
    // 0x411780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x411780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411784:
    // 0x411784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411788:
    // 0x411788: 0x3e00008  jr          $ra
label_41178c:
    if (ctx->pc == 0x41178Cu) {
        ctx->pc = 0x41178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411788u;
        // 0x41178c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411790u;
        goto label_fallthrough_0x411788;
    }
    ctx->pc = 0x411788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411788u;
        // 0x41178c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x411788:
    ctx->pc = 0x411790u;
}
