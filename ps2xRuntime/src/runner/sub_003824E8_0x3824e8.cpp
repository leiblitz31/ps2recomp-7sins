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

// Function: sub_003824E8
// Address: 0x3824e8 - 0x382698
void sub_003824E8_0x3824e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003824E8_0x3824e8");
#endif

    switch (ctx->pc) {
        case 0x3824e8u: goto label_3824e8;
        case 0x3824ecu: goto label_3824ec;
        case 0x3824f0u: goto label_3824f0;
        case 0x3824f4u: goto label_3824f4;
        case 0x3824f8u: goto label_3824f8;
        case 0x3824fcu: goto label_3824fc;
        case 0x382500u: goto label_382500;
        case 0x382504u: goto label_382504;
        case 0x382508u: goto label_382508;
        case 0x38250cu: goto label_38250c;
        case 0x382510u: goto label_382510;
        case 0x382514u: goto label_382514;
        case 0x382518u: goto label_382518;
        case 0x38251cu: goto label_38251c;
        case 0x382520u: goto label_382520;
        case 0x382524u: goto label_382524;
        case 0x382528u: goto label_382528;
        case 0x38252cu: goto label_38252c;
        case 0x382530u: goto label_382530;
        case 0x382534u: goto label_382534;
        case 0x382538u: goto label_382538;
        case 0x38253cu: goto label_38253c;
        case 0x382540u: goto label_382540;
        case 0x382544u: goto label_382544;
        case 0x382548u: goto label_382548;
        case 0x38254cu: goto label_38254c;
        case 0x382550u: goto label_382550;
        case 0x382554u: goto label_382554;
        case 0x382558u: goto label_382558;
        case 0x38255cu: goto label_38255c;
        case 0x382560u: goto label_382560;
        case 0x382564u: goto label_382564;
        case 0x382568u: goto label_382568;
        case 0x38256cu: goto label_38256c;
        case 0x382570u: goto label_382570;
        case 0x382574u: goto label_382574;
        case 0x382578u: goto label_382578;
        case 0x38257cu: goto label_38257c;
        case 0x382580u: goto label_382580;
        case 0x382584u: goto label_382584;
        case 0x382588u: goto label_382588;
        case 0x38258cu: goto label_38258c;
        case 0x382590u: goto label_382590;
        case 0x382594u: goto label_382594;
        case 0x382598u: goto label_382598;
        case 0x38259cu: goto label_38259c;
        case 0x3825a0u: goto label_3825a0;
        case 0x3825a4u: goto label_3825a4;
        case 0x3825a8u: goto label_3825a8;
        case 0x3825acu: goto label_3825ac;
        case 0x3825b0u: goto label_3825b0;
        case 0x3825b4u: goto label_3825b4;
        case 0x3825b8u: goto label_3825b8;
        case 0x3825bcu: goto label_3825bc;
        case 0x3825c0u: goto label_3825c0;
        case 0x3825c4u: goto label_3825c4;
        case 0x3825c8u: goto label_3825c8;
        case 0x3825ccu: goto label_3825cc;
        case 0x3825d0u: goto label_3825d0;
        case 0x3825d4u: goto label_3825d4;
        case 0x3825d8u: goto label_3825d8;
        case 0x3825dcu: goto label_3825dc;
        case 0x3825e0u: goto label_3825e0;
        case 0x3825e4u: goto label_3825e4;
        case 0x3825e8u: goto label_3825e8;
        case 0x3825ecu: goto label_3825ec;
        case 0x3825f0u: goto label_3825f0;
        case 0x3825f4u: goto label_3825f4;
        case 0x3825f8u: goto label_3825f8;
        case 0x3825fcu: goto label_3825fc;
        case 0x382600u: goto label_382600;
        case 0x382604u: goto label_382604;
        case 0x382608u: goto label_382608;
        case 0x38260cu: goto label_38260c;
        case 0x382610u: goto label_382610;
        case 0x382614u: goto label_382614;
        case 0x382618u: goto label_382618;
        case 0x38261cu: goto label_38261c;
        case 0x382620u: goto label_382620;
        case 0x382624u: goto label_382624;
        case 0x382628u: goto label_382628;
        case 0x38262cu: goto label_38262c;
        case 0x382630u: goto label_382630;
        case 0x382634u: goto label_382634;
        case 0x382638u: goto label_382638;
        case 0x38263cu: goto label_38263c;
        case 0x382640u: goto label_382640;
        case 0x382644u: goto label_382644;
        case 0x382648u: goto label_382648;
        case 0x38264cu: goto label_38264c;
        case 0x382650u: goto label_382650;
        case 0x382654u: goto label_382654;
        case 0x382658u: goto label_382658;
        case 0x38265cu: goto label_38265c;
        case 0x382660u: goto label_382660;
        case 0x382664u: goto label_382664;
        case 0x382668u: goto label_382668;
        case 0x38266cu: goto label_38266c;
        case 0x382670u: goto label_382670;
        case 0x382674u: goto label_382674;
        case 0x382678u: goto label_382678;
        case 0x38267cu: goto label_38267c;
        case 0x382680u: goto label_382680;
        case 0x382684u: goto label_382684;
        case 0x382688u: goto label_382688;
        case 0x38268cu: goto label_38268c;
        case 0x382690u: goto label_382690;
        case 0x382694u: goto label_382694;
        default: break;
    }

    ctx->pc = 0x3824e8u;

label_3824e8:
    // 0x3824e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3824e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3824ec:
    // 0x3824ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3824ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3824f0:
    // 0x3824f0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3824f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3824f4:
    // 0x3824f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3824f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3824f8:
    // 0x3824f8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3824f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3824fc:
    // 0x3824fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3824fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_382500:
    // 0x382500: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x382500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_382504:
    // 0x382504: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x382504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_382508:
    // 0x382508: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x382508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_38250c:
    // 0x38250c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x38250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_382510:
    // 0x382510: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x382510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_382514:
    // 0x382514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_382518:
    // 0x382518: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x382518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38251c:
    // 0x38251c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_382520:
    if (ctx->pc == 0x382520u) {
        ctx->pc = 0x382520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38251Cu;
        // 0x382520: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382524u;
        goto label_382524;
    }
    ctx->pc = 0x38251Cu;
    {
        const bool branch_taken_0x38251c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38251Cu;
        // 0x382520: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38251c) {
            ctx->pc = 0x3825FCu;
            goto label_3825fc;
        }
    }
    ctx->pc = 0x382524u;
label_382524:
    // 0x382524: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x382524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_382528:
    // 0x382528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x382528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38252c:
    // 0x38252c: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
label_382530:
    if (ctx->pc == 0x382530u) {
        ctx->pc = 0x382530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38252Cu;
        // 0x382530: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382534u;
        goto label_382534;
    }
    ctx->pc = 0x38252Cu;
    {
        const bool branch_taken_0x38252c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x382530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38252Cu;
        // 0x382530: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38252c) {
            ctx->pc = 0x3825ECu;
            goto label_3825ec;
        }
    }
    ctx->pc = 0x382534u;
label_382534:
    // 0x382534: 0x27d6e880  addiu       $s6, $fp, -0x1780
    ctx->pc = 0x382534u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_382538:
    // 0x382538: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x382538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38253c:
    // 0x38253c: 0x0  nop
    ctx->pc = 0x38253cu;
    // NOP
label_382540:
    // 0x382540: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x382540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_382544:
    // 0x382544: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x382544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_382548:
    // 0x382548: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x382548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38254c:
    // 0x38254c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_382550:
    if (ctx->pc == 0x382550u) {
        ctx->pc = 0x382550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38254Cu;
        // 0x382550: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382554u;
        goto label_382554;
    }
    ctx->pc = 0x38254Cu;
    {
        const bool branch_taken_0x38254c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38254c) {
            ctx->pc = 0x382550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38254Cu;
            // 0x382550: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382568u;
            goto label_382568;
        }
    }
    ctx->pc = 0x382554u;
label_382554:
    // 0x382554: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x382554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_382558:
    // 0x382558: 0x40f809  jalr        $v0
label_38255c:
    if (ctx->pc == 0x38255Cu) {
        ctx->pc = 0x382560u;
        goto label_382560;
    }
    ctx->pc = 0x382558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382560u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382558u, 0x382560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382560u;
label_382560:
    // 0x382560: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x382560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_382564:
    // 0x382564: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x382564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_382568:
    // 0x382568: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x382568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38256c:
    // 0x38256c: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_382570:
    if (ctx->pc == 0x382570u) {
        ctx->pc = 0x382570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38256Cu;
        // 0x382570: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382574u;
        goto label_382574;
    }
    ctx->pc = 0x38256Cu;
    {
        const bool branch_taken_0x38256c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x382570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38256Cu;
        // 0x382570: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38256c) {
            ctx->pc = 0x3825BCu;
            goto label_3825bc;
        }
    }
    ctx->pc = 0x382574u;
label_382574:
    // 0x382574: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x382574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_382578:
    // 0x382578: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x382578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38257c:
    // 0x38257c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_382580:
    if (ctx->pc == 0x382580u) {
        ctx->pc = 0x382580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38257Cu;
        // 0x382580: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382584u;
        goto label_382584;
    }
    ctx->pc = 0x38257Cu;
    {
        const bool branch_taken_0x38257c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x382580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38257Cu;
        // 0x382580: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38257c) {
            ctx->pc = 0x3825BCu;
            goto label_3825bc;
        }
    }
    ctx->pc = 0x382584u;
label_382584:
    // 0x382584: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x382584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_382588:
    // 0x382588: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x382588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38258c:
    // 0x38258c: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x38258cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_382590:
    // 0x382590: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x382590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382594:
    // 0x382594: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_382598:
    if (ctx->pc == 0x382598u) {
        ctx->pc = 0x382598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382594u;
        // 0x382598: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38259Cu;
        goto label_38259c;
    }
    ctx->pc = 0x382594u;
    {
        const bool branch_taken_0x382594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x382594) {
            ctx->pc = 0x382598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382594u;
            // 0x382598: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3825ACu;
            goto label_3825ac;
        }
    }
    ctx->pc = 0x38259Cu;
label_38259c:
    // 0x38259c: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_3825a0:
    // 0x3825a0: 0x40f809  jalr        $v0
label_3825a4:
    if (ctx->pc == 0x3825A4u) {
        ctx->pc = 0x3825A8u;
        goto label_3825a8;
    }
    ctx->pc = 0x3825A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3825A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3825A0u, 0x3825A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3825A8u;
label_3825a8:
    // 0x3825a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3825a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3825ac:
    // 0x3825ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3825acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3825b0:
    // 0x3825b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3825b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3825b4:
    // 0x3825b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3825b8:
    if (ctx->pc == 0x3825B8u) {
        ctx->pc = 0x3825B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825B4u;
        // 0x3825b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3825BCu;
        goto label_3825bc;
    }
    ctx->pc = 0x3825B4u;
    {
        const bool branch_taken_0x3825b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3825B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825B4u;
        // 0x3825b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3825b4) {
            ctx->pc = 0x382590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382590;
        }
    }
    ctx->pc = 0x3825BCu;
label_3825bc:
    // 0x3825bc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3825bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3825c0:
    // 0x3825c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3825c4:
    if (ctx->pc == 0x3825C4u) {
        ctx->pc = 0x3825C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825C0u;
        // 0x3825c4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3825C8u;
        goto label_3825c8;
    }
    ctx->pc = 0x3825C0u;
    {
        const bool branch_taken_0x3825c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3825c0) {
            ctx->pc = 0x3825C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3825C0u;
            // 0x3825c4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3825DCu;
            goto label_3825dc;
        }
    }
    ctx->pc = 0x3825C8u;
label_3825c8:
    // 0x3825c8: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x3825c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_3825cc:
    // 0x3825cc: 0x40f809  jalr        $v0
label_3825d0:
    if (ctx->pc == 0x3825D0u) {
        ctx->pc = 0x3825D4u;
        goto label_3825d4;
    }
    ctx->pc = 0x3825CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3825D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3825CCu, 0x3825D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3825D4u;
label_3825d4:
    // 0x3825d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3825d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3825d8:
    // 0x3825d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3825d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3825dc:
    // 0x3825dc: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3825dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3825e0:
    // 0x3825e0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3825e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3825e4:
    // 0x3825e4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_3825e8:
    if (ctx->pc == 0x3825E8u) {
        ctx->pc = 0x3825E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825E4u;
        // 0x3825e8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3825ECu;
        goto label_3825ec;
    }
    ctx->pc = 0x3825E4u;
    {
        const bool branch_taken_0x3825e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3825e4) {
            ctx->pc = 0x3825E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3825E4u;
            // 0x3825e8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382540;
        }
    }
    ctx->pc = 0x3825ECu;
label_3825ec:
    // 0x3825ec: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x3825ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_3825f0:
    // 0x3825f0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3825f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3825f4:
    // 0x3825f4: 0x40f809  jalr        $v0
label_3825f8:
    if (ctx->pc == 0x3825F8u) {
        ctx->pc = 0x3825F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825F4u;
        // 0x3825f8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3825FCu;
        goto label_3825fc;
    }
    ctx->pc = 0x3825F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3825FCu);
        ctx->pc = 0x3825F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825F4u;
        // 0x3825f8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3825F4u, 0x3825FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3825FCu;
label_3825fc:
    // 0x3825fc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3825fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_382600:
    // 0x382600: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x382600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_382604:
    // 0x382604: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x382604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_382608:
    // 0x382608: 0x18800017  blez        $a0, . + 4 + (0x17 << 2)
label_38260c:
    if (ctx->pc == 0x38260Cu) {
        ctx->pc = 0x38260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382608u;
        // 0x38260c: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382610u;
        goto label_382610;
    }
    ctx->pc = 0x382608u;
    {
        const bool branch_taken_0x382608 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x38260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382608u;
        // 0x38260c: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382608) {
            ctx->pc = 0x382668u;
            goto label_382668;
        }
    }
    ctx->pc = 0x382610u;
label_382610:
    // 0x382610: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x382610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_382614:
    // 0x382614: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x382614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_382618:
    // 0x382618: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x382618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38261c:
    // 0x38261c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x38261cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_382620:
    // 0x382620: 0x34a5011f  ori         $a1, $a1, 0x11F
    ctx->pc = 0x382620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
label_382624:
    // 0x382624: 0x40f809  jalr        $v0
label_382628:
    if (ctx->pc == 0x382628u) {
        ctx->pc = 0x382628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382624u;
        // 0x382628: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38262Cu;
        goto label_38262c;
    }
    ctx->pc = 0x382624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38262Cu);
        ctx->pc = 0x382628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382624u;
        // 0x382628: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382624u, 0x38262Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38262Cu;
label_38262c:
    // 0x38262c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_382630:
    // 0x382630: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_382634:
    if (ctx->pc == 0x382634u) {
        ctx->pc = 0x382634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382630u;
        // 0x382634: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382638u;
        goto label_382638;
    }
    ctx->pc = 0x382630u;
    {
        const bool branch_taken_0x382630 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x382634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382630u;
        // 0x382634: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382630) {
            ctx->pc = 0x382668u;
            goto label_382668;
        }
    }
    ctx->pc = 0x382638u;
label_382638:
    // 0x382638: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x382638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38263c:
    // 0x38263c: 0x0  nop
    ctx->pc = 0x38263cu;
    // NOP
label_382640:
    // 0x382640: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x382640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_382644:
    // 0x382644: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x382644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_382648:
    // 0x382648: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x382648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_38264c:
    // 0x38264c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x38264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_382650:
    // 0x382650: 0xc0e07cc  jal         func_381F30
label_382654:
    if (ctx->pc == 0x382654u) {
        ctx->pc = 0x382654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382650u;
        // 0x382654: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382658u;
        goto label_382658;
    }
    ctx->pc = 0x382650u;
    SET_GPR_U32(ctx, 31, 0x382658u);
    ctx->pc = 0x382654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382650u;
    // 0x382654: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381F30u, 0x382650u, 0x382658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382658u;
label_382658:
    // 0x382658: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x382658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38265c:
    // 0x38265c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x38265cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_382660:
    // 0x382660: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_382664:
    if (ctx->pc == 0x382664u) {
        ctx->pc = 0x382664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382660u;
        // 0x382664: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382668u;
        goto label_382668;
    }
    ctx->pc = 0x382660u;
    {
        const bool branch_taken_0x382660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382660u;
        // 0x382664: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382660) {
            ctx->pc = 0x382640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382640;
        }
    }
    ctx->pc = 0x382668u;
label_382668:
    // 0x382668: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x382668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38266c:
    // 0x38266c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x38266cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_382670:
    // 0x382670: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x382670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_382674:
    // 0x382674: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x382674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_382678:
    // 0x382678: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x382678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38267c:
    // 0x38267c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x38267cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_382680:
    // 0x382680: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x382680u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_382684:
    // 0x382684: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x382684u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_382688:
    // 0x382688: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x382688u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38268c:
    // 0x38268c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38268cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_382690:
    // 0x382690: 0x3e00008  jr          $ra
label_382694:
    if (ctx->pc == 0x382694u) {
        ctx->pc = 0x382694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382690u;
        // 0x382694: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382698u;
        goto label_fallthrough_0x382690;
    }
    ctx->pc = 0x382690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382690u;
        // 0x382694: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x382690:
    ctx->pc = 0x382698u;
}
