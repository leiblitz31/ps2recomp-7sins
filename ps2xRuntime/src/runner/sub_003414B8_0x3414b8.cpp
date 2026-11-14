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

// Function: sub_003414B8
// Address: 0x3414b8 - 0x341740
void sub_003414B8_0x3414b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003414B8_0x3414b8");
#endif

    switch (ctx->pc) {
        case 0x3414b8u: goto label_3414b8;
        case 0x3414bcu: goto label_3414bc;
        case 0x3414c0u: goto label_3414c0;
        case 0x3414c4u: goto label_3414c4;
        case 0x3414c8u: goto label_3414c8;
        case 0x3414ccu: goto label_3414cc;
        case 0x3414d0u: goto label_3414d0;
        case 0x3414d4u: goto label_3414d4;
        case 0x3414d8u: goto label_3414d8;
        case 0x3414dcu: goto label_3414dc;
        case 0x3414e0u: goto label_3414e0;
        case 0x3414e4u: goto label_3414e4;
        case 0x3414e8u: goto label_3414e8;
        case 0x3414ecu: goto label_3414ec;
        case 0x3414f0u: goto label_3414f0;
        case 0x3414f4u: goto label_3414f4;
        case 0x3414f8u: goto label_3414f8;
        case 0x3414fcu: goto label_3414fc;
        case 0x341500u: goto label_341500;
        case 0x341504u: goto label_341504;
        case 0x341508u: goto label_341508;
        case 0x34150cu: goto label_34150c;
        case 0x341510u: goto label_341510;
        case 0x341514u: goto label_341514;
        case 0x341518u: goto label_341518;
        case 0x34151cu: goto label_34151c;
        case 0x341520u: goto label_341520;
        case 0x341524u: goto label_341524;
        case 0x341528u: goto label_341528;
        case 0x34152cu: goto label_34152c;
        case 0x341530u: goto label_341530;
        case 0x341534u: goto label_341534;
        case 0x341538u: goto label_341538;
        case 0x34153cu: goto label_34153c;
        case 0x341540u: goto label_341540;
        case 0x341544u: goto label_341544;
        case 0x341548u: goto label_341548;
        case 0x34154cu: goto label_34154c;
        case 0x341550u: goto label_341550;
        case 0x341554u: goto label_341554;
        case 0x341558u: goto label_341558;
        case 0x34155cu: goto label_34155c;
        case 0x341560u: goto label_341560;
        case 0x341564u: goto label_341564;
        case 0x341568u: goto label_341568;
        case 0x34156cu: goto label_34156c;
        case 0x341570u: goto label_341570;
        case 0x341574u: goto label_341574;
        case 0x341578u: goto label_341578;
        case 0x34157cu: goto label_34157c;
        case 0x341580u: goto label_341580;
        case 0x341584u: goto label_341584;
        case 0x341588u: goto label_341588;
        case 0x34158cu: goto label_34158c;
        case 0x341590u: goto label_341590;
        case 0x341594u: goto label_341594;
        case 0x341598u: goto label_341598;
        case 0x34159cu: goto label_34159c;
        case 0x3415a0u: goto label_3415a0;
        case 0x3415a4u: goto label_3415a4;
        case 0x3415a8u: goto label_3415a8;
        case 0x3415acu: goto label_3415ac;
        case 0x3415b0u: goto label_3415b0;
        case 0x3415b4u: goto label_3415b4;
        case 0x3415b8u: goto label_3415b8;
        case 0x3415bcu: goto label_3415bc;
        case 0x3415c0u: goto label_3415c0;
        case 0x3415c4u: goto label_3415c4;
        case 0x3415c8u: goto label_3415c8;
        case 0x3415ccu: goto label_3415cc;
        case 0x3415d0u: goto label_3415d0;
        case 0x3415d4u: goto label_3415d4;
        case 0x3415d8u: goto label_3415d8;
        case 0x3415dcu: goto label_3415dc;
        case 0x3415e0u: goto label_3415e0;
        case 0x3415e4u: goto label_3415e4;
        case 0x3415e8u: goto label_3415e8;
        case 0x3415ecu: goto label_3415ec;
        case 0x3415f0u: goto label_3415f0;
        case 0x3415f4u: goto label_3415f4;
        case 0x3415f8u: goto label_3415f8;
        case 0x3415fcu: goto label_3415fc;
        case 0x341600u: goto label_341600;
        case 0x341604u: goto label_341604;
        case 0x341608u: goto label_341608;
        case 0x34160cu: goto label_34160c;
        case 0x341610u: goto label_341610;
        case 0x341614u: goto label_341614;
        case 0x341618u: goto label_341618;
        case 0x34161cu: goto label_34161c;
        case 0x341620u: goto label_341620;
        case 0x341624u: goto label_341624;
        case 0x341628u: goto label_341628;
        case 0x34162cu: goto label_34162c;
        case 0x341630u: goto label_341630;
        case 0x341634u: goto label_341634;
        case 0x341638u: goto label_341638;
        case 0x34163cu: goto label_34163c;
        case 0x341640u: goto label_341640;
        case 0x341644u: goto label_341644;
        case 0x341648u: goto label_341648;
        case 0x34164cu: goto label_34164c;
        case 0x341650u: goto label_341650;
        case 0x341654u: goto label_341654;
        case 0x341658u: goto label_341658;
        case 0x34165cu: goto label_34165c;
        case 0x341660u: goto label_341660;
        case 0x341664u: goto label_341664;
        case 0x341668u: goto label_341668;
        case 0x34166cu: goto label_34166c;
        case 0x341670u: goto label_341670;
        case 0x341674u: goto label_341674;
        case 0x341678u: goto label_341678;
        case 0x34167cu: goto label_34167c;
        case 0x341680u: goto label_341680;
        case 0x341684u: goto label_341684;
        case 0x341688u: goto label_341688;
        case 0x34168cu: goto label_34168c;
        case 0x341690u: goto label_341690;
        case 0x341694u: goto label_341694;
        case 0x341698u: goto label_341698;
        case 0x34169cu: goto label_34169c;
        case 0x3416a0u: goto label_3416a0;
        case 0x3416a4u: goto label_3416a4;
        case 0x3416a8u: goto label_3416a8;
        case 0x3416acu: goto label_3416ac;
        case 0x3416b0u: goto label_3416b0;
        case 0x3416b4u: goto label_3416b4;
        case 0x3416b8u: goto label_3416b8;
        case 0x3416bcu: goto label_3416bc;
        case 0x3416c0u: goto label_3416c0;
        case 0x3416c4u: goto label_3416c4;
        case 0x3416c8u: goto label_3416c8;
        case 0x3416ccu: goto label_3416cc;
        case 0x3416d0u: goto label_3416d0;
        case 0x3416d4u: goto label_3416d4;
        case 0x3416d8u: goto label_3416d8;
        case 0x3416dcu: goto label_3416dc;
        case 0x3416e0u: goto label_3416e0;
        case 0x3416e4u: goto label_3416e4;
        case 0x3416e8u: goto label_3416e8;
        case 0x3416ecu: goto label_3416ec;
        case 0x3416f0u: goto label_3416f0;
        case 0x3416f4u: goto label_3416f4;
        case 0x3416f8u: goto label_3416f8;
        case 0x3416fcu: goto label_3416fc;
        case 0x341700u: goto label_341700;
        case 0x341704u: goto label_341704;
        case 0x341708u: goto label_341708;
        case 0x34170cu: goto label_34170c;
        case 0x341710u: goto label_341710;
        case 0x341714u: goto label_341714;
        case 0x341718u: goto label_341718;
        case 0x34171cu: goto label_34171c;
        case 0x341720u: goto label_341720;
        case 0x341724u: goto label_341724;
        case 0x341728u: goto label_341728;
        case 0x34172cu: goto label_34172c;
        case 0x341730u: goto label_341730;
        case 0x341734u: goto label_341734;
        case 0x341738u: goto label_341738;
        case 0x34173cu: goto label_34173c;
        default: break;
    }

    ctx->pc = 0x3414b8u;

label_3414b8:
    // 0x3414b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3414b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3414bc:
    // 0x3414bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3414bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3414c0:
    // 0x3414c0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3414c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3414c4:
    // 0x3414c4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3414c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3414c8:
    // 0x3414c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3414c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3414cc:
    // 0x3414cc: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x3414ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_3414d0:
    // 0x3414d0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3414d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3414d4:
    // 0x3414d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3414d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3414d8:
    // 0x3414d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3414d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3414dc:
    // 0x3414dc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x3414dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3414e0:
    // 0x3414e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3414e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3414e4:
    // 0x3414e4: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3414e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3414e8:
    // 0x3414e8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3414e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3414ec:
    // 0x3414ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3414ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3414f0:
    // 0x3414f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3414f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3414f4:
    // 0x3414f4: 0x8eb1000c  lw          $s1, 0xC($s5)
    ctx->pc = 0x3414f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3414f8:
    // 0x3414f8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3414f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3414fc:
    // 0x3414fc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3414fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_341500:
    // 0x341500: 0x40f809  jalr        $v0
label_341504:
    if (ctx->pc == 0x341504u) {
        ctx->pc = 0x341504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341500u;
        // 0x341504: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341508u;
        goto label_341508;
    }
    ctx->pc = 0x341500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341508u);
        ctx->pc = 0x341504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341500u;
        // 0x341504: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341500u, 0x341508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341508u;
label_341508:
    // 0x341508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x341508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34150c:
    // 0x34150c: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_341510:
    if (ctx->pc == 0x341510u) {
        ctx->pc = 0x341510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34150Cu;
        // 0x341510: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341514u;
        goto label_341514;
    }
    ctx->pc = 0x34150Cu;
    {
        const bool branch_taken_0x34150c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x341510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34150Cu;
        // 0x341510: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34150c) {
            ctx->pc = 0x3415CCu;
            goto label_3415cc;
        }
    }
    ctx->pc = 0x341514u;
label_341514:
    // 0x341514: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x341514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_341518:
    // 0x341518: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x341518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_34151c:
    // 0x34151c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34151cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341520:
    // 0x341520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x341520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_341524:
    // 0x341524: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x341524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_341528:
    // 0x341528: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x341528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_34152c:
    // 0x34152c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x34152cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_341530:
    // 0x341530: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x341530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_341534:
    // 0x341534: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x341534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_341538:
    // 0x341538: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x341538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_34153c:
    // 0x34153c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x34153cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_341540:
    // 0x341540: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x341540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_341544:
    // 0x341544: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x341544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_341548:
    // 0x341548: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x341548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_34154c:
    // 0x34154c: 0xc0bb7e6  jal         func_2EDF98
label_341550:
    if (ctx->pc == 0x341550u) {
        ctx->pc = 0x341550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34154Cu;
        // 0x341550: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341554u;
        goto label_341554;
    }
    ctx->pc = 0x34154Cu;
    SET_GPR_U32(ctx, 31, 0x341554u);
    ctx->pc = 0x341550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34154Cu;
    // 0x341550: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x34154Cu, 0x341554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341554u;
label_341554:
    // 0x341554: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x341554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_341558:
    // 0x341558: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x341558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_34155c:
    // 0x34155c: 0xc0d120c  jal         func_344830
label_341560:
    if (ctx->pc == 0x341560u) {
        ctx->pc = 0x341560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34155Cu;
        // 0x341560: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341564u;
        goto label_341564;
    }
    ctx->pc = 0x34155Cu;
    SET_GPR_U32(ctx, 31, 0x341564u);
    ctx->pc = 0x341560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34155Cu;
    // 0x341560: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34155Cu, 0x341564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341564u;
label_341564:
    // 0x341564: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_341568:
    if (ctx->pc == 0x341568u) {
        ctx->pc = 0x341568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341564u;
        // 0x341568: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34156Cu;
        goto label_34156c;
    }
    ctx->pc = 0x341564u;
    {
        const bool branch_taken_0x341564 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x341564) {
            ctx->pc = 0x341568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341564u;
            // 0x341568: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341578u;
            goto label_341578;
        }
    }
    ctx->pc = 0x34156Cu;
label_34156c:
    // 0x34156c: 0xc0d1454  jal         func_345150
label_341570:
    if (ctx->pc == 0x341570u) {
        ctx->pc = 0x341570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34156Cu;
        // 0x341570: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341574u;
        goto label_341574;
    }
    ctx->pc = 0x34156Cu;
    SET_GPR_U32(ctx, 31, 0x341574u);
    ctx->pc = 0x341570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34156Cu;
    // 0x341570: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345150u, 0x34156Cu, 0x341574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341574u;
label_341574:
    // 0x341574: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x341574u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_341578:
    // 0x341578: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x341578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_34157c:
    // 0x34157c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_341580:
    if (ctx->pc == 0x341580u) {
        ctx->pc = 0x341580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34157Cu;
        // 0x341580: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341584u;
        goto label_341584;
    }
    ctx->pc = 0x34157Cu;
    {
        const bool branch_taken_0x34157c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x341580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34157Cu;
        // 0x341580: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34157c) {
            ctx->pc = 0x3415CCu;
            goto label_3415cc;
        }
    }
    ctx->pc = 0x341584u;
label_341584:
    // 0x341584: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x341584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341588:
    // 0x341588: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x341588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_34158c:
    // 0x34158c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x34158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_341590:
    // 0x341590: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x341590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_341594:
    // 0x341594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_341598:
    if (ctx->pc == 0x341598u) {
        ctx->pc = 0x341598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341594u;
        // 0x341598: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34159Cu;
        goto label_34159c;
    }
    ctx->pc = 0x341594u;
    {
        const bool branch_taken_0x341594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341594u;
        // 0x341598: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341594) {
            ctx->pc = 0x3415B8u;
            goto label_3415b8;
        }
    }
    ctx->pc = 0x34159Cu;
label_34159c:
    // 0x34159c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34159cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3415a0:
    // 0x3415a0: 0x40f809  jalr        $v0
label_3415a4:
    if (ctx->pc == 0x3415A4u) {
        ctx->pc = 0x3415A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415A0u;
        // 0x3415a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3415A8u;
        goto label_3415a8;
    }
    ctx->pc = 0x3415A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3415A8u);
        ctx->pc = 0x3415A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415A0u;
        // 0x3415a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3415A0u, 0x3415A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3415A8u;
label_3415a8:
    // 0x3415a8: 0x50500004  beql        $v0, $s0, . + 4 + (0x4 << 2)
label_3415ac:
    if (ctx->pc == 0x3415ACu) {
        ctx->pc = 0x3415ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415A8u;
        // 0x3415ac: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3415B0u;
        goto label_3415b0;
    }
    ctx->pc = 0x3415A8u;
    {
        const bool branch_taken_0x3415a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3415a8) {
            ctx->pc = 0x3415ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3415A8u;
            // 0x3415ac: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3415BCu;
            goto label_3415bc;
        }
    }
    ctx->pc = 0x3415B0u;
label_3415b0:
    // 0x3415b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3415b4:
    if (ctx->pc == 0x3415B4u) {
        ctx->pc = 0x3415B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415B0u;
        // 0x3415b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3415B8u;
        goto label_3415b8;
    }
    ctx->pc = 0x3415B0u;
    {
        const bool branch_taken_0x3415b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3415B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415B0u;
        // 0x3415b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415b0) {
            ctx->pc = 0x3415CCu;
            goto label_3415cc;
        }
    }
    ctx->pc = 0x3415B8u;
label_3415b8:
    // 0x3415b8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3415b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3415bc:
    // 0x3415bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3415bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3415c0:
    // 0x3415c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3415c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3415c4:
    // 0x3415c4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3415c8:
    if (ctx->pc == 0x3415C8u) {
        ctx->pc = 0x3415C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415C4u;
        // 0x3415c8: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3415CCu;
        goto label_3415cc;
    }
    ctx->pc = 0x3415C4u;
    {
        const bool branch_taken_0x3415c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3415C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415C4u;
        // 0x3415c8: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415c4) {
            ctx->pc = 0x341588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341588;
        }
    }
    ctx->pc = 0x3415CCu;
label_3415cc:
    // 0x3415cc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3415ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3415d0:
    // 0x3415d0: 0x1280004f  beqz        $s4, . + 4 + (0x4F << 2)
label_3415d4:
    if (ctx->pc == 0x3415D4u) {
        ctx->pc = 0x3415D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415D0u;
        // 0x3415d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3415D8u;
        goto label_3415d8;
    }
    ctx->pc = 0x3415D0u;
    {
        const bool branch_taken_0x3415d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3415D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415D0u;
        // 0x3415d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415d0) {
            ctx->pc = 0x341710u;
            goto label_341710;
        }
    }
    ctx->pc = 0x3415D8u;
label_3415d8:
    // 0x3415d8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3415d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3415dc:
    // 0x3415dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3415dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3415e0:
    // 0x3415e0: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x3415e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3415e4:
    // 0x3415e4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3415e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3415e8:
    // 0x3415e8: 0xc0d0afa  jal         func_342BE8
label_3415ec:
    if (ctx->pc == 0x3415ECu) {
        ctx->pc = 0x3415ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415E8u;
        // 0x3415ec: 0x8ea60014  lw          $a2, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3415F0u;
        goto label_3415f0;
    }
    ctx->pc = 0x3415E8u;
    SET_GPR_U32(ctx, 31, 0x3415F0u);
    ctx->pc = 0x3415ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3415E8u;
    // 0x3415ec: 0x8ea60014  lw          $a2, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BE8u, 0x3415E8u, 0x3415F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3415F0u;
label_3415f0:
    // 0x3415f0: 0x8eb1000c  lw          $s1, 0xC($s5)
    ctx->pc = 0x3415f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3415f4:
    // 0x3415f4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3415f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3415f8:
    // 0x3415f8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_3415fc:
    if (ctx->pc == 0x3415FCu) {
        ctx->pc = 0x3415FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415F8u;
        // 0x3415fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341600u;
        goto label_341600;
    }
    ctx->pc = 0x3415F8u;
    {
        const bool branch_taken_0x3415f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3415FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415F8u;
        // 0x3415fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415f8) {
            ctx->pc = 0x34163Cu;
            goto label_34163c;
        }
    }
    ctx->pc = 0x341600u;
label_341600:
    // 0x341600: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x341600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_341604:
    // 0x341604: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x341604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_341608:
    // 0x341608: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x341608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_34160c:
    // 0x34160c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_341610:
    if (ctx->pc == 0x341610u) {
        ctx->pc = 0x341610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34160Cu;
        // 0x341610: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341614u;
        goto label_341614;
    }
    ctx->pc = 0x34160Cu;
    {
        const bool branch_taken_0x34160c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34160Cu;
        // 0x341610: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34160c) {
            ctx->pc = 0x341628u;
            goto label_341628;
        }
    }
    ctx->pc = 0x341614u;
label_341614:
    // 0x341614: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x341614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_341618:
    // 0x341618: 0x40f809  jalr        $v0
label_34161c:
    if (ctx->pc == 0x34161Cu) {
        ctx->pc = 0x34161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341618u;
        // 0x34161c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341620u;
        goto label_341620;
    }
    ctx->pc = 0x341618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341620u);
        ctx->pc = 0x34161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341618u;
        // 0x34161c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341618u, 0x341620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341620u;
label_341620:
    // 0x341620: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_341624:
    if (ctx->pc == 0x341624u) {
        ctx->pc = 0x341624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341620u;
        // 0x341624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341628u;
        goto label_341628;
    }
    ctx->pc = 0x341620u;
    {
        const bool branch_taken_0x341620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x341624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341620u;
        // 0x341624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341620) {
            ctx->pc = 0x341640u;
            goto label_341640;
        }
    }
    ctx->pc = 0x341628u;
label_341628:
    // 0x341628: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x341628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_34162c:
    // 0x34162c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34162cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_341630:
    // 0x341630: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x341630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341634:
    // 0x341634: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_341638:
    if (ctx->pc == 0x341638u) {
        ctx->pc = 0x341638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341634u;
        // 0x341638: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34163Cu;
        goto label_34163c;
    }
    ctx->pc = 0x341634u;
    {
        const bool branch_taken_0x341634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341634u;
        // 0x341638: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341634) {
            ctx->pc = 0x341600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341600;
        }
    }
    ctx->pc = 0x34163Cu;
label_34163c:
    // 0x34163c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34163cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341640:
    // 0x341640: 0x10500034  beq         $v0, $s0, . + 4 + (0x34 << 2)
label_341644:
    if (ctx->pc == 0x341644u) {
        ctx->pc = 0x341644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341640u;
        // 0x341644: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341648u;
        goto label_341648;
    }
    ctx->pc = 0x341640u;
    {
        const bool branch_taken_0x341640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x341644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341640u;
        // 0x341644: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341640) {
            ctx->pc = 0x341714u;
            goto label_341714;
        }
    }
    ctx->pc = 0x341648u;
label_341648:
    // 0x341648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34164c:
    // 0x34164c: 0xc0d05d0  jal         func_341740
label_341650:
    if (ctx->pc == 0x341650u) {
        ctx->pc = 0x341650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34164Cu;
        // 0x341650: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341654u;
        goto label_341654;
    }
    ctx->pc = 0x34164Cu;
    SET_GPR_U32(ctx, 31, 0x341654u);
    ctx->pc = 0x341650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34164Cu;
    // 0x341650: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341740u, 0x34164Cu, 0x341654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341654u;
label_341654:
    // 0x341654: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x341654u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_341658:
    // 0x341658: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x341658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_34165c:
    // 0x34165c: 0x58400012  blezl       $v0, . + 4 + (0x12 << 2)
label_341660:
    if (ctx->pc == 0x341660u) {
        ctx->pc = 0x341660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34165Cu;
        // 0x341660: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341664u;
        goto label_341664;
    }
    ctx->pc = 0x34165Cu;
    {
        const bool branch_taken_0x34165c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34165c) {
            ctx->pc = 0x341660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34165Cu;
            // 0x341660: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3416A8u;
            goto label_3416a8;
        }
    }
    ctx->pc = 0x341664u;
label_341664:
    // 0x341664: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x341664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341668:
    // 0x341668: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x341668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_34166c:
    // 0x34166c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x34166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_341670:
    // 0x341670: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x341670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_341674:
    // 0x341674: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_341678:
    if (ctx->pc == 0x341678u) {
        ctx->pc = 0x341678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341674u;
        // 0x341678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34167Cu;
        goto label_34167c;
    }
    ctx->pc = 0x341674u;
    {
        const bool branch_taken_0x341674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341674u;
        // 0x341678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341674) {
            ctx->pc = 0x341690u;
            goto label_341690;
        }
    }
    ctx->pc = 0x34167Cu;
label_34167c:
    // 0x34167c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34167cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341680:
    // 0x341680: 0x40f809  jalr        $v0
label_341684:
    if (ctx->pc == 0x341684u) {
        ctx->pc = 0x341684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341680u;
        // 0x341684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341688u;
        goto label_341688;
    }
    ctx->pc = 0x341680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341688u);
        ctx->pc = 0x341684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341680u;
        // 0x341684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341680u, 0x341688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341688u;
label_341688:
    // 0x341688: 0x1450001a  bne         $v0, $s0, . + 4 + (0x1A << 2)
label_34168c:
    if (ctx->pc == 0x34168Cu) {
        ctx->pc = 0x34168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341688u;
        // 0x34168c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341690u;
        goto label_341690;
    }
    ctx->pc = 0x341688u;
    {
        const bool branch_taken_0x341688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x34168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341688u;
        // 0x34168c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341688) {
            ctx->pc = 0x3416F4u;
            goto label_3416f4;
        }
    }
    ctx->pc = 0x341690u;
label_341690:
    // 0x341690: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x341690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_341694:
    // 0x341694: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x341694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_341698:
    // 0x341698: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x341698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34169c:
    // 0x34169c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3416a0:
    if (ctx->pc == 0x3416A0u) {
        ctx->pc = 0x3416A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34169Cu;
        // 0x3416a0: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3416A4u;
        goto label_3416a4;
    }
    ctx->pc = 0x34169Cu;
    {
        const bool branch_taken_0x34169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3416A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34169Cu;
        // 0x3416a0: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34169c) {
            ctx->pc = 0x341668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341668;
        }
    }
    ctx->pc = 0x3416A4u;
label_3416a4:
    // 0x3416a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3416a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3416a8:
    // 0x3416a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3416a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3416ac:
    // 0x3416ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3416acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3416b0:
    // 0x3416b0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3416b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3416b4:
    // 0x3416b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3416b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3416b8:
    // 0x3416b8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3416b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3416bc:
    // 0x3416bc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3416bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3416c0:
    // 0x3416c0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3416c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3416c4:
    // 0x3416c4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3416c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3416c8:
    // 0x3416c8: 0xc0d120c  jal         func_344830
label_3416cc:
    if (ctx->pc == 0x3416CCu) {
        ctx->pc = 0x3416CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416C8u;
        // 0x3416cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3416D0u;
        goto label_3416d0;
    }
    ctx->pc = 0x3416C8u;
    SET_GPR_U32(ctx, 31, 0x3416D0u);
    ctx->pc = 0x3416CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3416C8u;
    // 0x3416cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3416C8u, 0x3416D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3416D0u;
label_3416d0:
    // 0x3416d0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_3416d4:
    if (ctx->pc == 0x3416D4u) {
        ctx->pc = 0x3416D8u;
        goto label_3416d8;
    }
    ctx->pc = 0x3416D0u;
    {
        const bool branch_taken_0x3416d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3416d0) {
            ctx->pc = 0x3416E0u;
            goto label_3416e0;
        }
    }
    ctx->pc = 0x3416D8u;
label_3416d8:
    // 0x3416d8: 0xc0d1466  jal         func_345198
label_3416dc:
    if (ctx->pc == 0x3416DCu) {
        ctx->pc = 0x3416DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416D8u;
        // 0x3416dc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3416E0u;
        goto label_3416e0;
    }
    ctx->pc = 0x3416D8u;
    SET_GPR_U32(ctx, 31, 0x3416E0u);
    ctx->pc = 0x3416DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3416D8u;
    // 0x3416dc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345198u, 0x3416D8u, 0x3416E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3416E0u;
label_3416e0:
    // 0x3416e0: 0xc0d03c8  jal         func_340F20
label_3416e4:
    if (ctx->pc == 0x3416E4u) {
        ctx->pc = 0x3416E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416E0u;
        // 0x3416e4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3416E8u;
        goto label_3416e8;
    }
    ctx->pc = 0x3416E0u;
    SET_GPR_U32(ctx, 31, 0x3416E8u);
    ctx->pc = 0x3416E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3416E0u;
    // 0x3416e4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F20u, 0x3416E0u, 0x3416E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3416E8u;
label_3416e8:
    // 0x3416e8: 0xc0d0ce8  jal         func_3433A0
label_3416ec:
    if (ctx->pc == 0x3416ECu) {
        ctx->pc = 0x3416ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416E8u;
        // 0x3416ec: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3416F0u;
        goto label_3416f0;
    }
    ctx->pc = 0x3416E8u;
    SET_GPR_U32(ctx, 31, 0x3416F0u);
    ctx->pc = 0x3416ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3416E8u;
    // 0x3416ec: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433A0u, 0x3416E8u, 0x3416F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3416F0u;
label_3416f0:
    // 0x3416f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3416f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3416f4:
    // 0x3416f4: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_3416f8:
    if (ctx->pc == 0x3416F8u) {
        ctx->pc = 0x3416F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416F4u;
        // 0x3416f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3416FCu;
        goto label_3416fc;
    }
    ctx->pc = 0x3416F4u;
    {
        const bool branch_taken_0x3416f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3416F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416F4u;
        // 0x3416f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3416f4) {
            ctx->pc = 0x341710u;
            goto label_341710;
        }
    }
    ctx->pc = 0x3416FCu;
label_3416fc:
    // 0x3416fc: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x3416fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_341700:
    // 0x341700: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x341700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_341704:
    // 0x341704: 0x40f809  jalr        $v0
label_341708:
    if (ctx->pc == 0x341708u) {
        ctx->pc = 0x341708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341704u;
        // 0x341708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34170Cu;
        goto label_34170c;
    }
    ctx->pc = 0x341704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34170Cu);
        ctx->pc = 0x341708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341704u;
        // 0x341708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341704u, 0x34170Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34170Cu;
label_34170c:
    // 0x34170c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x34170cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341710:
    // 0x341710: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x341710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_341714:
    // 0x341714: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x341714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_341718:
    // 0x341718: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x341718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34171c:
    // 0x34171c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x34171cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_341720:
    // 0x341720: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x341720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_341724:
    // 0x341724: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x341724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_341728:
    // 0x341728: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x341728u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34172c:
    // 0x34172c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x34172cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341730:
    // 0x341730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341734:
    // 0x341734: 0x3e00008  jr          $ra
label_341738:
    if (ctx->pc == 0x341738u) {
        ctx->pc = 0x341738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341734u;
        // 0x341738: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34173Cu;
        goto label_34173c;
    }
    ctx->pc = 0x341734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341734u;
        // 0x341738: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34173Cu;
label_34173c:
    // 0x34173c: 0x0  nop
    ctx->pc = 0x34173cu;
    // NOP
    ctx->pc = 0x341740u;
}
