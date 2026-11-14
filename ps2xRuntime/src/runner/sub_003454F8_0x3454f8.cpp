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

// Function: sub_003454F8
// Address: 0x3454f8 - 0x3455a0
void sub_003454F8_0x3454f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003454F8_0x3454f8");
#endif

    switch (ctx->pc) {
        case 0x3454f8u: goto label_3454f8;
        case 0x3454fcu: goto label_3454fc;
        case 0x345500u: goto label_345500;
        case 0x345504u: goto label_345504;
        case 0x345508u: goto label_345508;
        case 0x34550cu: goto label_34550c;
        case 0x345510u: goto label_345510;
        case 0x345514u: goto label_345514;
        case 0x345518u: goto label_345518;
        case 0x34551cu: goto label_34551c;
        case 0x345520u: goto label_345520;
        case 0x345524u: goto label_345524;
        case 0x345528u: goto label_345528;
        case 0x34552cu: goto label_34552c;
        case 0x345530u: goto label_345530;
        case 0x345534u: goto label_345534;
        case 0x345538u: goto label_345538;
        case 0x34553cu: goto label_34553c;
        case 0x345540u: goto label_345540;
        case 0x345544u: goto label_345544;
        case 0x345548u: goto label_345548;
        case 0x34554cu: goto label_34554c;
        case 0x345550u: goto label_345550;
        case 0x345554u: goto label_345554;
        case 0x345558u: goto label_345558;
        case 0x34555cu: goto label_34555c;
        case 0x345560u: goto label_345560;
        case 0x345564u: goto label_345564;
        case 0x345568u: goto label_345568;
        case 0x34556cu: goto label_34556c;
        case 0x345570u: goto label_345570;
        case 0x345574u: goto label_345574;
        case 0x345578u: goto label_345578;
        case 0x34557cu: goto label_34557c;
        case 0x345580u: goto label_345580;
        case 0x345584u: goto label_345584;
        case 0x345588u: goto label_345588;
        case 0x34558cu: goto label_34558c;
        case 0x345590u: goto label_345590;
        case 0x345594u: goto label_345594;
        case 0x345598u: goto label_345598;
        case 0x34559cu: goto label_34559c;
        default: break;
    }

    ctx->pc = 0x3454f8u;

label_3454f8:
    // 0x3454f8: 0x3e00008  jr          $ra
label_3454fc:
    if (ctx->pc == 0x3454FCu) {
        ctx->pc = 0x3454FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454F8u;
        // 0x3454fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345500u;
        goto label_345500;
    }
    ctx->pc = 0x3454F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3454FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454F8u;
        // 0x3454fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3454F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345500u;
label_345500:
    // 0x345500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x345500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_345504:
    // 0x345504: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x345504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_345508:
    // 0x345508: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x345508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_34550c:
    // 0x34550c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x34550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_345510:
    // 0x345510: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x345510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_345514:
    // 0x345514: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x345514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_345518:
    // 0x345518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34551c:
    // 0x34551c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x34551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_345520:
    // 0x345520: 0xc0d120c  jal         func_344830
label_345524:
    if (ctx->pc == 0x345524u) {
        ctx->pc = 0x345524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345520u;
        // 0x345524: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345528u;
        goto label_345528;
    }
    ctx->pc = 0x345520u;
    SET_GPR_U32(ctx, 31, 0x345528u);
    ctx->pc = 0x345524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345520u;
    // 0x345524: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x345520u, 0x345528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345528u;
label_345528:
    // 0x345528: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x345528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_34552c:
    // 0x34552c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x34552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_345530:
    // 0x345530: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_345534:
    if (ctx->pc == 0x345534u) {
        ctx->pc = 0x345534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345530u;
        // 0x345534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345538u;
        goto label_345538;
    }
    ctx->pc = 0x345530u;
    {
        const bool branch_taken_0x345530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345530u;
        // 0x345534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345530) {
            ctx->pc = 0x34555Cu;
            goto label_34555c;
        }
    }
    ctx->pc = 0x345538u;
label_345538:
    // 0x345538: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x345538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34553c:
    // 0x34553c: 0xc0e2686  jal         func_389A18
label_345540:
    if (ctx->pc == 0x345540u) {
        ctx->pc = 0x345540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34553Cu;
        // 0x345540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345544u;
        goto label_345544;
    }
    ctx->pc = 0x34553Cu;
    SET_GPR_U32(ctx, 31, 0x345544u);
    ctx->pc = 0x345540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34553Cu;
    // 0x345540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x34553Cu, 0x345544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345544u;
label_345544:
    // 0x345544: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_345548:
    if (ctx->pc == 0x345548u) {
        ctx->pc = 0x34554Cu;
        goto label_34554c;
    }
    ctx->pc = 0x345544u;
    {
        const bool branch_taken_0x345544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x345544) {
            ctx->pc = 0x345554u;
            goto label_345554;
        }
    }
    ctx->pc = 0x34554Cu;
label_34554c:
    // 0x34554c: 0xc1067c6  jal         func_419F18
label_345550:
    if (ctx->pc == 0x345550u) {
        ctx->pc = 0x345550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34554Cu;
        // 0x345550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345554u;
        goto label_345554;
    }
    ctx->pc = 0x34554Cu;
    SET_GPR_U32(ctx, 31, 0x345554u);
    ctx->pc = 0x345550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34554Cu;
    // 0x345550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x34554Cu, 0x345554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345554u;
label_345554:
    // 0x345554: 0xc0e27ae  jal         func_389EB8
label_345558:
    if (ctx->pc == 0x345558u) {
        ctx->pc = 0x345558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345554u;
        // 0x345558: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34555Cu;
        goto label_34555c;
    }
    ctx->pc = 0x345554u;
    SET_GPR_U32(ctx, 31, 0x34555Cu);
    ctx->pc = 0x345558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345554u;
    // 0x345558: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x345554u, 0x34555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34555Cu;
label_34555c:
    // 0x34555c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x34555cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_345560:
    // 0x345560: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_345564:
    if (ctx->pc == 0x345564u) {
        ctx->pc = 0x345564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345560u;
        // 0x345564: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345568u;
        goto label_345568;
    }
    ctx->pc = 0x345560u;
    {
        const bool branch_taken_0x345560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x345564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345560u;
        // 0x345564: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345560) {
            ctx->pc = 0x345578u;
            goto label_345578;
        }
    }
    ctx->pc = 0x345568u;
label_345568:
    // 0x345568: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x345568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_34556c:
    // 0x34556c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x34556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_345570:
    // 0x345570: 0x40f809  jalr        $v0
label_345574:
    if (ctx->pc == 0x345574u) {
        ctx->pc = 0x345578u;
        goto label_345578;
    }
    ctx->pc = 0x345570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x345578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345570u, 0x345578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345578u;
label_345578:
    // 0x345578: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x345578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_34557c:
    // 0x34557c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x34557cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_345580:
    // 0x345580: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x345580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_345584:
    // 0x345584: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x345584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_345588:
    // 0x345588: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x345588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34558c:
    // 0x34558c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34558cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_345590:
    // 0x345590: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x345590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345594:
    // 0x345594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345598:
    // 0x345598: 0x3e00008  jr          $ra
label_34559c:
    if (ctx->pc == 0x34559Cu) {
        ctx->pc = 0x34559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345598u;
        // 0x34559c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3455A0u;
        goto label_fallthrough_0x345598;
    }
    ctx->pc = 0x345598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345598u;
        // 0x34559c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x345598:
    ctx->pc = 0x3455A0u;
}
