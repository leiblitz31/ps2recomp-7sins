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

// Function: sub_00449610
// Address: 0x449610 - 0x449760
void sub_00449610_0x449610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449610_0x449610");
#endif

    switch (ctx->pc) {
        case 0x449610u: goto label_449610;
        case 0x449614u: goto label_449614;
        case 0x449618u: goto label_449618;
        case 0x44961cu: goto label_44961c;
        case 0x449620u: goto label_449620;
        case 0x449624u: goto label_449624;
        case 0x449628u: goto label_449628;
        case 0x44962cu: goto label_44962c;
        case 0x449630u: goto label_449630;
        case 0x449634u: goto label_449634;
        case 0x449638u: goto label_449638;
        case 0x44963cu: goto label_44963c;
        case 0x449640u: goto label_449640;
        case 0x449644u: goto label_449644;
        case 0x449648u: goto label_449648;
        case 0x44964cu: goto label_44964c;
        case 0x449650u: goto label_449650;
        case 0x449654u: goto label_449654;
        case 0x449658u: goto label_449658;
        case 0x44965cu: goto label_44965c;
        case 0x449660u: goto label_449660;
        case 0x449664u: goto label_449664;
        case 0x449668u: goto label_449668;
        case 0x44966cu: goto label_44966c;
        case 0x449670u: goto label_449670;
        case 0x449674u: goto label_449674;
        case 0x449678u: goto label_449678;
        case 0x44967cu: goto label_44967c;
        case 0x449680u: goto label_449680;
        case 0x449684u: goto label_449684;
        case 0x449688u: goto label_449688;
        case 0x44968cu: goto label_44968c;
        case 0x449690u: goto label_449690;
        case 0x449694u: goto label_449694;
        case 0x449698u: goto label_449698;
        case 0x44969cu: goto label_44969c;
        case 0x4496a0u: goto label_4496a0;
        case 0x4496a4u: goto label_4496a4;
        case 0x4496a8u: goto label_4496a8;
        case 0x4496acu: goto label_4496ac;
        case 0x4496b0u: goto label_4496b0;
        case 0x4496b4u: goto label_4496b4;
        case 0x4496b8u: goto label_4496b8;
        case 0x4496bcu: goto label_4496bc;
        case 0x4496c0u: goto label_4496c0;
        case 0x4496c4u: goto label_4496c4;
        case 0x4496c8u: goto label_4496c8;
        case 0x4496ccu: goto label_4496cc;
        case 0x4496d0u: goto label_4496d0;
        case 0x4496d4u: goto label_4496d4;
        case 0x4496d8u: goto label_4496d8;
        case 0x4496dcu: goto label_4496dc;
        case 0x4496e0u: goto label_4496e0;
        case 0x4496e4u: goto label_4496e4;
        case 0x4496e8u: goto label_4496e8;
        case 0x4496ecu: goto label_4496ec;
        case 0x4496f0u: goto label_4496f0;
        case 0x4496f4u: goto label_4496f4;
        case 0x4496f8u: goto label_4496f8;
        case 0x4496fcu: goto label_4496fc;
        case 0x449700u: goto label_449700;
        case 0x449704u: goto label_449704;
        case 0x449708u: goto label_449708;
        case 0x44970cu: goto label_44970c;
        case 0x449710u: goto label_449710;
        case 0x449714u: goto label_449714;
        case 0x449718u: goto label_449718;
        case 0x44971cu: goto label_44971c;
        case 0x449720u: goto label_449720;
        case 0x449724u: goto label_449724;
        case 0x449728u: goto label_449728;
        case 0x44972cu: goto label_44972c;
        case 0x449730u: goto label_449730;
        case 0x449734u: goto label_449734;
        case 0x449738u: goto label_449738;
        case 0x44973cu: goto label_44973c;
        case 0x449740u: goto label_449740;
        case 0x449744u: goto label_449744;
        case 0x449748u: goto label_449748;
        case 0x44974cu: goto label_44974c;
        case 0x449750u: goto label_449750;
        case 0x449754u: goto label_449754;
        case 0x449758u: goto label_449758;
        case 0x44975cu: goto label_44975c;
        default: break;
    }

    ctx->pc = 0x449610u;

label_449610:
    // 0x449610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x449610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_449614:
    // 0x449614: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x449614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_449618:
    // 0x449618: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x449618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_44961c:
    // 0x44961c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44961cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449620:
    // 0x449620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x449620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_449624:
    // 0x449624: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x449624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_449628:
    // 0x449628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x449628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44962c:
    // 0x44962c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x44962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_449630:
    // 0x449630: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_449634:
    if (ctx->pc == 0x449634u) {
        ctx->pc = 0x449634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449630u;
        // 0x449634: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449638u;
        goto label_449638;
    }
    ctx->pc = 0x449630u;
    {
        const bool branch_taken_0x449630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x449634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449630u;
        // 0x449634: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449630) {
            ctx->pc = 0x449650u;
            goto label_449650;
        }
    }
    ctx->pc = 0x449638u;
label_449638:
    // 0x449638: 0x2642e880  addiu       $v0, $s2, -0x1780
    ctx->pc = 0x449638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_44963c:
    // 0x44963c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x44963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_449640:
    // 0x449640: 0x60f809  jalr        $v1
label_449644:
    if (ctx->pc == 0x449644u) {
        ctx->pc = 0x449648u;
        goto label_449648;
    }
    ctx->pc = 0x449640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x449648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449640u, 0x449648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449648u;
label_449648:
    // 0x449648: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x449648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_44964c:
    // 0x44964c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x44964cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_449650:
    // 0x449650: 0x2643e880  addiu       $v1, $s2, -0x1780
    ctx->pc = 0x449650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_449654:
    // 0x449654: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x449654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_449658:
    // 0x449658: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x449658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_44965c:
    // 0x44965c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_449660:
    // 0x449660: 0x40f809  jalr        $v0
label_449664:
    if (ctx->pc == 0x449664u) {
        ctx->pc = 0x449664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449660u;
        // 0x449664: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x449668u;
        goto label_449668;
    }
    ctx->pc = 0x449660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x449668u);
        ctx->pc = 0x449664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449660u;
        // 0x449664: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449660u, 0x449668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449668u;
label_449668:
    // 0x449668: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44966c:
    if (ctx->pc == 0x44966Cu) {
        ctx->pc = 0x44966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449668u;
        // 0x44966c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449670u;
        goto label_449670;
    }
    ctx->pc = 0x449668u;
    {
        const bool branch_taken_0x449668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449668u;
        // 0x44966c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449668) {
            ctx->pc = 0x449678u;
            goto label_449678;
        }
    }
    ctx->pc = 0x449670u;
label_449670:
    // 0x449670: 0x1000000b  b           . + 4 + (0xB << 2)
label_449674:
    if (ctx->pc == 0x449674u) {
        ctx->pc = 0x449674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449670u;
        // 0x449674: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449678u;
        goto label_449678;
    }
    ctx->pc = 0x449670u;
    {
        const bool branch_taken_0x449670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449670u;
        // 0x449674: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449670) {
            ctx->pc = 0x4496A0u;
            goto label_4496a0;
        }
    }
    ctx->pc = 0x449678u;
label_449678:
    // 0x449678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x449678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44967c:
    // 0x44967c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44967cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_449680:
    // 0x449680: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x449680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_449684:
    // 0x449684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x449684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_449688:
    // 0x449688: 0xc1035f6  jal         func_40D7D8
label_44968c:
    if (ctx->pc == 0x44968Cu) {
        ctx->pc = 0x44968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449688u;
        // 0x44968c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x449690u;
        goto label_449690;
    }
    ctx->pc = 0x449688u;
    SET_GPR_U32(ctx, 31, 0x449690u);
    ctx->pc = 0x44968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449688u;
    // 0x44968c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x449688u, 0x449690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449690u;
label_449690:
    // 0x449690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x449690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_449694:
    // 0x449694: 0xc103628  jal         func_40D8A0
label_449698:
    if (ctx->pc == 0x449698u) {
        ctx->pc = 0x449698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449694u;
        // 0x449698: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44969Cu;
        goto label_44969c;
    }
    ctx->pc = 0x449694u;
    SET_GPR_U32(ctx, 31, 0x44969Cu);
    ctx->pc = 0x449698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449694u;
    // 0x449698: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x449694u, 0x44969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44969Cu;
label_44969c:
    // 0x44969c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44969cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4496a0:
    // 0x4496a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4496a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4496a4:
    // 0x4496a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4496a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4496a8:
    // 0x4496a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4496a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4496ac:
    // 0x4496ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4496acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4496b0:
    // 0x4496b0: 0x3e00008  jr          $ra
label_4496b4:
    if (ctx->pc == 0x4496B4u) {
        ctx->pc = 0x4496B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496B0u;
        // 0x4496b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4496B8u;
        goto label_4496b8;
    }
    ctx->pc = 0x4496B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4496B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496B0u;
        // 0x4496b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4496B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4496B8u;
label_4496b8:
    // 0x4496b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4496b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4496bc:
    // 0x4496bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4496bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4496c0:
    // 0x4496c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4496c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4496c4:
    // 0x4496c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4496c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4496c8:
    // 0x4496c8: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_4496cc:
    if (ctx->pc == 0x4496CCu) {
        ctx->pc = 0x4496CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496C8u;
        // 0x4496cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4496D0u;
        goto label_4496d0;
    }
    ctx->pc = 0x4496C8u;
    {
        const bool branch_taken_0x4496c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4496CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496C8u;
        // 0x4496cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4496c8) {
            ctx->pc = 0x449744u;
            goto label_449744;
        }
    }
    ctx->pc = 0x4496D0u;
label_4496d0:
    // 0x4496d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4496d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4496d4:
    // 0x4496d4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_4496d8:
    if (ctx->pc == 0x4496D8u) {
        ctx->pc = 0x4496D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496D4u;
        // 0x4496d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4496DCu;
        goto label_4496dc;
    }
    ctx->pc = 0x4496D4u;
    {
        const bool branch_taken_0x4496d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4496D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496D4u;
        // 0x4496d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4496d4) {
            ctx->pc = 0x449748u;
            goto label_449748;
        }
    }
    ctx->pc = 0x4496DCu;
label_4496dc:
    // 0x4496dc: 0xc1116a2  jal         func_445A88
label_4496e0:
    if (ctx->pc == 0x4496E0u) {
        ctx->pc = 0x4496E4u;
        goto label_4496e4;
    }
    ctx->pc = 0x4496DCu;
    SET_GPR_U32(ctx, 31, 0x4496E4u);
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x4496DCu, 0x4496E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4496E4u;
label_4496e4:
    // 0x4496e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4496e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4496e8:
    // 0x4496e8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_4496ec:
    if (ctx->pc == 0x4496ECu) {
        ctx->pc = 0x4496ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496E8u;
        // 0x4496ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4496F0u;
        goto label_4496f0;
    }
    ctx->pc = 0x4496E8u;
    {
        const bool branch_taken_0x4496e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4496ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496E8u;
        // 0x4496ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4496e8) {
            ctx->pc = 0x449748u;
            goto label_449748;
        }
    }
    ctx->pc = 0x4496F0u;
label_4496f0:
    // 0x4496f0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x4496f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_4496f4:
    // 0x4496f4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x4496f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_4496f8:
    // 0x4496f8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x4496f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_4496fc:
    // 0x4496fc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x4496fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_449700:
    // 0x449700: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x449700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_449704:
    // 0x449704: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_449708:
    if (ctx->pc == 0x449708u) {
        ctx->pc = 0x449708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449704u;
        // 0x449708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44970Cu;
        goto label_44970c;
    }
    ctx->pc = 0x449704u;
    {
        const bool branch_taken_0x449704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449704u;
        // 0x449708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449704) {
            ctx->pc = 0x449748u;
            goto label_449748;
        }
    }
    ctx->pc = 0x44970Cu;
label_44970c:
    // 0x44970c: 0xc112074  jal         func_4481D0
label_449710:
    if (ctx->pc == 0x449710u) {
        ctx->pc = 0x449710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44970Cu;
        // 0x449710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449714u;
        goto label_449714;
    }
    ctx->pc = 0x44970Cu;
    SET_GPR_U32(ctx, 31, 0x449714u);
    ctx->pc = 0x449710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44970Cu;
    // 0x449710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x44970Cu, 0x449714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449714u;
label_449714:
    // 0x449714: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_449718:
    if (ctx->pc == 0x449718u) {
        ctx->pc = 0x449718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449714u;
        // 0x449718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44971Cu;
        goto label_44971c;
    }
    ctx->pc = 0x449714u;
    {
        const bool branch_taken_0x449714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449714u;
        // 0x449718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449714) {
            ctx->pc = 0x44973Cu;
            goto label_44973c;
        }
    }
    ctx->pc = 0x44971Cu;
label_44971c:
    // 0x44971c: 0xc111948  jal         func_446520
label_449720:
    if (ctx->pc == 0x449720u) {
        ctx->pc = 0x449720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44971Cu;
        // 0x449720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449724u;
        goto label_449724;
    }
    ctx->pc = 0x44971Cu;
    SET_GPR_U32(ctx, 31, 0x449724u);
    ctx->pc = 0x449720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44971Cu;
    // 0x449720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446520u, 0x44971Cu, 0x449724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449724u;
label_449724:
    // 0x449724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_449728:
    if (ctx->pc == 0x449728u) {
        ctx->pc = 0x44972Cu;
        goto label_44972c;
    }
    ctx->pc = 0x449724u;
    {
        const bool branch_taken_0x449724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449724) {
            ctx->pc = 0x44973Cu;
            goto label_44973c;
        }
    }
    ctx->pc = 0x44972Cu;
label_44972c:
    // 0x44972c: 0xc111dea  jal         func_4477A8
label_449730:
    if (ctx->pc == 0x449730u) {
        ctx->pc = 0x449730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44972Cu;
        // 0x449730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449734u;
        goto label_449734;
    }
    ctx->pc = 0x44972Cu;
    SET_GPR_U32(ctx, 31, 0x449734u);
    ctx->pc = 0x449730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44972Cu;
    // 0x449730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x44972Cu, 0x449734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449734u;
label_449734:
    // 0x449734: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_449738:
    if (ctx->pc == 0x449738u) {
        ctx->pc = 0x449738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449734u;
        // 0x449738: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44973Cu;
        goto label_44973c;
    }
    ctx->pc = 0x449734u;
    {
        const bool branch_taken_0x449734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449734u;
        // 0x449738: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449734) {
            ctx->pc = 0x449748u;
            goto label_449748;
        }
    }
    ctx->pc = 0x44973Cu;
label_44973c:
    // 0x44973c: 0xc1116c6  jal         func_445B18
label_449740:
    if (ctx->pc == 0x449740u) {
        ctx->pc = 0x449740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44973Cu;
        // 0x449740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449744u;
        goto label_449744;
    }
    ctx->pc = 0x44973Cu;
    SET_GPR_U32(ctx, 31, 0x449744u);
    ctx->pc = 0x449740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44973Cu;
    // 0x449740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x44973Cu, 0x449744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449744u;
label_449744:
    // 0x449744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x449744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449748:
    // 0x449748: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x449748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44974c:
    // 0x44974c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44974cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449750:
    // 0x449750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x449750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_449754:
    // 0x449754: 0x3e00008  jr          $ra
label_449758:
    if (ctx->pc == 0x449758u) {
        ctx->pc = 0x449758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449754u;
        // 0x449758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44975Cu;
        goto label_44975c;
    }
    ctx->pc = 0x449754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449754u;
        // 0x449758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44975Cu;
label_44975c:
    // 0x44975c: 0x0  nop
    ctx->pc = 0x44975cu;
    // NOP
    ctx->pc = 0x449760u;
}
