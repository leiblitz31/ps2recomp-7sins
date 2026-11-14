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

// Function: sub_00271620
// Address: 0x271620 - 0x271760
void sub_00271620_0x271620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271620_0x271620");
#endif

    switch (ctx->pc) {
        case 0x271620u: goto label_271620;
        case 0x271624u: goto label_271624;
        case 0x271628u: goto label_271628;
        case 0x27162cu: goto label_27162c;
        case 0x271630u: goto label_271630;
        case 0x271634u: goto label_271634;
        case 0x271638u: goto label_271638;
        case 0x27163cu: goto label_27163c;
        case 0x271640u: goto label_271640;
        case 0x271644u: goto label_271644;
        case 0x271648u: goto label_271648;
        case 0x27164cu: goto label_27164c;
        case 0x271650u: goto label_271650;
        case 0x271654u: goto label_271654;
        case 0x271658u: goto label_271658;
        case 0x27165cu: goto label_27165c;
        case 0x271660u: goto label_271660;
        case 0x271664u: goto label_271664;
        case 0x271668u: goto label_271668;
        case 0x27166cu: goto label_27166c;
        case 0x271670u: goto label_271670;
        case 0x271674u: goto label_271674;
        case 0x271678u: goto label_271678;
        case 0x27167cu: goto label_27167c;
        case 0x271680u: goto label_271680;
        case 0x271684u: goto label_271684;
        case 0x271688u: goto label_271688;
        case 0x27168cu: goto label_27168c;
        case 0x271690u: goto label_271690;
        case 0x271694u: goto label_271694;
        case 0x271698u: goto label_271698;
        case 0x27169cu: goto label_27169c;
        case 0x2716a0u: goto label_2716a0;
        case 0x2716a4u: goto label_2716a4;
        case 0x2716a8u: goto label_2716a8;
        case 0x2716acu: goto label_2716ac;
        case 0x2716b0u: goto label_2716b0;
        case 0x2716b4u: goto label_2716b4;
        case 0x2716b8u: goto label_2716b8;
        case 0x2716bcu: goto label_2716bc;
        case 0x2716c0u: goto label_2716c0;
        case 0x2716c4u: goto label_2716c4;
        case 0x2716c8u: goto label_2716c8;
        case 0x2716ccu: goto label_2716cc;
        case 0x2716d0u: goto label_2716d0;
        case 0x2716d4u: goto label_2716d4;
        case 0x2716d8u: goto label_2716d8;
        case 0x2716dcu: goto label_2716dc;
        case 0x2716e0u: goto label_2716e0;
        case 0x2716e4u: goto label_2716e4;
        case 0x2716e8u: goto label_2716e8;
        case 0x2716ecu: goto label_2716ec;
        case 0x2716f0u: goto label_2716f0;
        case 0x2716f4u: goto label_2716f4;
        case 0x2716f8u: goto label_2716f8;
        case 0x2716fcu: goto label_2716fc;
        case 0x271700u: goto label_271700;
        case 0x271704u: goto label_271704;
        case 0x271708u: goto label_271708;
        case 0x27170cu: goto label_27170c;
        case 0x271710u: goto label_271710;
        case 0x271714u: goto label_271714;
        case 0x271718u: goto label_271718;
        case 0x27171cu: goto label_27171c;
        case 0x271720u: goto label_271720;
        case 0x271724u: goto label_271724;
        case 0x271728u: goto label_271728;
        case 0x27172cu: goto label_27172c;
        case 0x271730u: goto label_271730;
        case 0x271734u: goto label_271734;
        case 0x271738u: goto label_271738;
        case 0x27173cu: goto label_27173c;
        case 0x271740u: goto label_271740;
        case 0x271744u: goto label_271744;
        case 0x271748u: goto label_271748;
        case 0x27174cu: goto label_27174c;
        case 0x271750u: goto label_271750;
        case 0x271754u: goto label_271754;
        case 0x271758u: goto label_271758;
        case 0x27175cu: goto label_27175c;
        default: break;
    }

    ctx->pc = 0x271620u;

label_271620:
    // 0x271620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x271620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_271624:
    // 0x271624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_271628:
    // 0x271628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27162c:
    // 0x27162c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_271630:
    // 0x271630: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x271630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_271634:
    // 0x271634: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x271634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_271638:
    // 0x271638: 0xa0400042  sb          $zero, 0x42($v0)
    ctx->pc = 0x271638u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 66), (uint8_t)GPR_U32(ctx, 0));
label_27163c:
    // 0x27163c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_271640:
    // 0x271640: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x271640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
label_271644:
    // 0x271644: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x271644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_271648:
    // 0x271648: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x271648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_27164c:
    // 0x27164c: 0xc0513f8  jal         func_144FE0
label_271650:
    if (ctx->pc == 0x271650u) {
        ctx->pc = 0x271654u;
        goto label_271654;
    }
    ctx->pc = 0x27164Cu;
    SET_GPR_U32(ctx, 31, 0x271654u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x27164Cu, 0x271654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271654u;
label_271654:
    // 0x271654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271658:
    // 0x271658: 0x1000002b  b           . + 4 + (0x2B << 2)
label_27165c:
    if (ctx->pc == 0x27165Cu) {
        ctx->pc = 0x271660u;
        goto label_271660;
    }
    ctx->pc = 0x271658u;
    {
        const bool branch_taken_0x271658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271658) {
            ctx->pc = 0x271708u;
            goto label_271708;
        }
    }
    ctx->pc = 0x271660u;
label_271660:
    // 0x271660: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x271660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271664:
    // 0x271664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271668:
    // 0x271668: 0xc09d22c  jal         func_2748B0
label_27166c:
    if (ctx->pc == 0x27166Cu) {
        ctx->pc = 0x271670u;
        goto label_271670;
    }
    ctx->pc = 0x271668u;
    SET_GPR_U32(ctx, 31, 0x271670u);
    ctx->pc = 0x2748B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748B0u, 0x271668u, 0x271670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271670u;
label_271670:
    // 0x271670: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x271670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_271674:
    // 0x271674: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x271674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_271678:
    // 0x271678: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x271678u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27167c:
    // 0x27167c: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_271680:
    if (ctx->pc == 0x271680u) {
        ctx->pc = 0x271684u;
        goto label_271684;
    }
    ctx->pc = 0x27167Cu;
    {
        const bool branch_taken_0x27167c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27167c) {
            ctx->pc = 0x271704u;
            goto label_271704;
        }
    }
    ctx->pc = 0x271684u;
label_271684:
    // 0x271684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271688:
    // 0x271688: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x271688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27168c:
    // 0x27168c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x27168cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_271690:
    // 0x271690: 0x320f809  jalr        $t9
label_271694:
    if (ctx->pc == 0x271694u) {
        ctx->pc = 0x271698u;
        goto label_271698;
    }
    ctx->pc = 0x271690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271698u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271690u, 0x271698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271698u;
label_271698:
    // 0x271698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27169c:
    // 0x27169c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27169cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2716a0:
    // 0x2716a0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2716a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2716a4:
    // 0x2716a4: 0x320f809  jalr        $t9
label_2716a8:
    if (ctx->pc == 0x2716A8u) {
        ctx->pc = 0x2716ACu;
        goto label_2716ac;
    }
    ctx->pc = 0x2716A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2716ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2716A4u, 0x2716ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2716ACu;
label_2716ac:
    // 0x2716ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2716acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2716b0:
    // 0x2716b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2716b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2716b4:
    // 0x2716b4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2716b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2716b8:
    // 0x2716b8: 0x320f809  jalr        $t9
label_2716bc:
    if (ctx->pc == 0x2716BCu) {
        ctx->pc = 0x2716C0u;
        goto label_2716c0;
    }
    ctx->pc = 0x2716B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2716C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2716B8u, 0x2716C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2716C0u;
label_2716c0:
    // 0x2716c0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2716c4:
    if (ctx->pc == 0x2716C4u) {
        ctx->pc = 0x2716C8u;
        goto label_2716c8;
    }
    ctx->pc = 0x2716C0u;
    {
        const bool branch_taken_0x2716c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2716c0) {
            ctx->pc = 0x2716E4u;
            goto label_2716e4;
        }
    }
    ctx->pc = 0x2716C8u;
label_2716c8:
    // 0x2716c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2716c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2716cc:
    // 0x2716cc: 0xc051830  jal         func_1460C0
label_2716d0:
    if (ctx->pc == 0x2716D0u) {
        ctx->pc = 0x2716D4u;
        goto label_2716d4;
    }
    ctx->pc = 0x2716CCu;
    SET_GPR_U32(ctx, 31, 0x2716D4u);
    ctx->pc = 0x1460C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1460C0u, 0x2716CCu, 0x2716D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716D4u;
label_2716d4:
    // 0x2716d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2716d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2716d8:
    // 0x2716d8: 0xc119c5c  jal         func_467170
label_2716dc:
    if (ctx->pc == 0x2716DCu) {
        ctx->pc = 0x2716E0u;
        goto label_2716e0;
    }
    ctx->pc = 0x2716D8u;
    SET_GPR_U32(ctx, 31, 0x2716E0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2716D8u, 0x2716E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716E0u;
label_2716e0:
    // 0x2716e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2716e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2716e4:
    // 0x2716e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2716e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2716e8:
    // 0x2716e8: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2716e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_2716ec:
    // 0x2716ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2716ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2716f0:
    // 0x2716f0: 0xc09c1ac  jal         func_2706B0
label_2716f4:
    if (ctx->pc == 0x2716F4u) {
        ctx->pc = 0x2716F8u;
        goto label_2716f8;
    }
    ctx->pc = 0x2716F0u;
    SET_GPR_U32(ctx, 31, 0x2716F8u);
    ctx->pc = 0x2706B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2706B0u, 0x2716F0u, 0x2716F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716F8u;
label_2716f8:
    // 0x2716f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2716f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2716fc:
    // 0x2716fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_271700:
    if (ctx->pc == 0x271700u) {
        ctx->pc = 0x271704u;
        goto label_271704;
    }
    ctx->pc = 0x2716FCu;
    {
        const bool branch_taken_0x2716fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2716fc) {
            ctx->pc = 0x271708u;
            goto label_271708;
        }
    }
    ctx->pc = 0x271704u;
label_271704:
    // 0x271704: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x271704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_271708:
    // 0x271708: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x271708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27170c:
    // 0x27170c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x27170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_271710:
    // 0x271710: 0xc09c064  jal         func_270190
label_271714:
    if (ctx->pc == 0x271714u) {
        ctx->pc = 0x271718u;
        goto label_271718;
    }
    ctx->pc = 0x271710u;
    SET_GPR_U32(ctx, 31, 0x271718u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x271710u, 0x271718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271718u;
label_271718:
    // 0x271718: 0x1622ffd1  bne         $s1, $v0, . + 4 + (-0x2F << 2)
label_27171c:
    if (ctx->pc == 0x27171Cu) {
        ctx->pc = 0x271720u;
        goto label_271720;
    }
    ctx->pc = 0x271718u;
    {
        const bool branch_taken_0x271718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x271718) {
            ctx->pc = 0x271660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271660;
        }
    }
    ctx->pc = 0x271720u;
label_271720:
    // 0x271720: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x271720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_271724:
    // 0x271724: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x271724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_271728:
    // 0x271728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x271728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27172c:
    // 0x27172c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x27172cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
label_271730:
    // 0x271730: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x271730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_271734:
    // 0x271734: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x271734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_271738:
    // 0x271738: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x271738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27173c:
    // 0x27173c: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x27173cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_271740:
    // 0x271740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x271740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_271744:
    // 0x271744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_271748:
    // 0x271748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27174c:
    // 0x27174c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27174cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_271750:
    // 0x271750: 0x3e00008  jr          $ra
label_271754:
    if (ctx->pc == 0x271754u) {
        ctx->pc = 0x271758u;
        goto label_271758;
    }
    ctx->pc = 0x271750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271758u;
label_271758:
    // 0x271758: 0x0  nop
    ctx->pc = 0x271758u;
    // NOP
label_27175c:
    // 0x27175c: 0x0  nop
    ctx->pc = 0x27175cu;
    // NOP
    ctx->pc = 0x271760u;
}
