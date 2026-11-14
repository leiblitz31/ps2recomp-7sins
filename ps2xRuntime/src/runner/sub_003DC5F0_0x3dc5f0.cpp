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

// Function: sub_003DC5F0
// Address: 0x3dc5f0 - 0x3dc7c0
void sub_003DC5F0_0x3dc5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC5F0_0x3dc5f0");
#endif

    switch (ctx->pc) {
        case 0x3dc5f0u: goto label_3dc5f0;
        case 0x3dc5f4u: goto label_3dc5f4;
        case 0x3dc5f8u: goto label_3dc5f8;
        case 0x3dc5fcu: goto label_3dc5fc;
        case 0x3dc600u: goto label_3dc600;
        case 0x3dc604u: goto label_3dc604;
        case 0x3dc608u: goto label_3dc608;
        case 0x3dc60cu: goto label_3dc60c;
        case 0x3dc610u: goto label_3dc610;
        case 0x3dc614u: goto label_3dc614;
        case 0x3dc618u: goto label_3dc618;
        case 0x3dc61cu: goto label_3dc61c;
        case 0x3dc620u: goto label_3dc620;
        case 0x3dc624u: goto label_3dc624;
        case 0x3dc628u: goto label_3dc628;
        case 0x3dc62cu: goto label_3dc62c;
        case 0x3dc630u: goto label_3dc630;
        case 0x3dc634u: goto label_3dc634;
        case 0x3dc638u: goto label_3dc638;
        case 0x3dc63cu: goto label_3dc63c;
        case 0x3dc640u: goto label_3dc640;
        case 0x3dc644u: goto label_3dc644;
        case 0x3dc648u: goto label_3dc648;
        case 0x3dc64cu: goto label_3dc64c;
        case 0x3dc650u: goto label_3dc650;
        case 0x3dc654u: goto label_3dc654;
        case 0x3dc658u: goto label_3dc658;
        case 0x3dc65cu: goto label_3dc65c;
        case 0x3dc660u: goto label_3dc660;
        case 0x3dc664u: goto label_3dc664;
        case 0x3dc668u: goto label_3dc668;
        case 0x3dc66cu: goto label_3dc66c;
        case 0x3dc670u: goto label_3dc670;
        case 0x3dc674u: goto label_3dc674;
        case 0x3dc678u: goto label_3dc678;
        case 0x3dc67cu: goto label_3dc67c;
        case 0x3dc680u: goto label_3dc680;
        case 0x3dc684u: goto label_3dc684;
        case 0x3dc688u: goto label_3dc688;
        case 0x3dc68cu: goto label_3dc68c;
        case 0x3dc690u: goto label_3dc690;
        case 0x3dc694u: goto label_3dc694;
        case 0x3dc698u: goto label_3dc698;
        case 0x3dc69cu: goto label_3dc69c;
        case 0x3dc6a0u: goto label_3dc6a0;
        case 0x3dc6a4u: goto label_3dc6a4;
        case 0x3dc6a8u: goto label_3dc6a8;
        case 0x3dc6acu: goto label_3dc6ac;
        case 0x3dc6b0u: goto label_3dc6b0;
        case 0x3dc6b4u: goto label_3dc6b4;
        case 0x3dc6b8u: goto label_3dc6b8;
        case 0x3dc6bcu: goto label_3dc6bc;
        case 0x3dc6c0u: goto label_3dc6c0;
        case 0x3dc6c4u: goto label_3dc6c4;
        case 0x3dc6c8u: goto label_3dc6c8;
        case 0x3dc6ccu: goto label_3dc6cc;
        case 0x3dc6d0u: goto label_3dc6d0;
        case 0x3dc6d4u: goto label_3dc6d4;
        case 0x3dc6d8u: goto label_3dc6d8;
        case 0x3dc6dcu: goto label_3dc6dc;
        case 0x3dc6e0u: goto label_3dc6e0;
        case 0x3dc6e4u: goto label_3dc6e4;
        case 0x3dc6e8u: goto label_3dc6e8;
        case 0x3dc6ecu: goto label_3dc6ec;
        case 0x3dc6f0u: goto label_3dc6f0;
        case 0x3dc6f4u: goto label_3dc6f4;
        case 0x3dc6f8u: goto label_3dc6f8;
        case 0x3dc6fcu: goto label_3dc6fc;
        case 0x3dc700u: goto label_3dc700;
        case 0x3dc704u: goto label_3dc704;
        case 0x3dc708u: goto label_3dc708;
        case 0x3dc70cu: goto label_3dc70c;
        case 0x3dc710u: goto label_3dc710;
        case 0x3dc714u: goto label_3dc714;
        case 0x3dc718u: goto label_3dc718;
        case 0x3dc71cu: goto label_3dc71c;
        case 0x3dc720u: goto label_3dc720;
        case 0x3dc724u: goto label_3dc724;
        case 0x3dc728u: goto label_3dc728;
        case 0x3dc72cu: goto label_3dc72c;
        case 0x3dc730u: goto label_3dc730;
        case 0x3dc734u: goto label_3dc734;
        case 0x3dc738u: goto label_3dc738;
        case 0x3dc73cu: goto label_3dc73c;
        case 0x3dc740u: goto label_3dc740;
        case 0x3dc744u: goto label_3dc744;
        case 0x3dc748u: goto label_3dc748;
        case 0x3dc74cu: goto label_3dc74c;
        case 0x3dc750u: goto label_3dc750;
        case 0x3dc754u: goto label_3dc754;
        case 0x3dc758u: goto label_3dc758;
        case 0x3dc75cu: goto label_3dc75c;
        case 0x3dc760u: goto label_3dc760;
        case 0x3dc764u: goto label_3dc764;
        case 0x3dc768u: goto label_3dc768;
        case 0x3dc76cu: goto label_3dc76c;
        case 0x3dc770u: goto label_3dc770;
        case 0x3dc774u: goto label_3dc774;
        case 0x3dc778u: goto label_3dc778;
        case 0x3dc77cu: goto label_3dc77c;
        case 0x3dc780u: goto label_3dc780;
        case 0x3dc784u: goto label_3dc784;
        case 0x3dc788u: goto label_3dc788;
        case 0x3dc78cu: goto label_3dc78c;
        case 0x3dc790u: goto label_3dc790;
        case 0x3dc794u: goto label_3dc794;
        case 0x3dc798u: goto label_3dc798;
        case 0x3dc79cu: goto label_3dc79c;
        case 0x3dc7a0u: goto label_3dc7a0;
        case 0x3dc7a4u: goto label_3dc7a4;
        case 0x3dc7a8u: goto label_3dc7a8;
        case 0x3dc7acu: goto label_3dc7ac;
        case 0x3dc7b0u: goto label_3dc7b0;
        case 0x3dc7b4u: goto label_3dc7b4;
        case 0x3dc7b8u: goto label_3dc7b8;
        case 0x3dc7bcu: goto label_3dc7bc;
        default: break;
    }

    ctx->pc = 0x3dc5f0u;

label_3dc5f0:
    // 0x3dc5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dc5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dc5f4:
    // 0x3dc5f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3dc5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3dc5f8:
    // 0x3dc5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dc5fc:
    // 0x3dc5fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc600:
    // 0x3dc600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dc604:
    // 0x3dc604: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_3dc608:
    if (ctx->pc == 0x3DC608u) {
        ctx->pc = 0x3DC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC604u;
        // 0x3dc608: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC60Cu;
        goto label_3dc60c;
    }
    ctx->pc = 0x3DC604u;
    {
        const bool branch_taken_0x3dc604 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC604u;
        // 0x3dc608: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc604) {
            ctx->pc = 0x3DC628u;
            goto label_3dc628;
        }
    }
    ctx->pc = 0x3DC60Cu;
label_3dc60c:
    // 0x3dc60c: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3dc60cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3dc610:
    // 0x3dc610: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3dc610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_3dc614:
    // 0x3dc614: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
label_3dc618:
    if (ctx->pc == 0x3DC618u) {
        ctx->pc = 0x3DC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC614u;
        // 0x3dc618: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC61Cu;
        goto label_3dc61c;
    }
    ctx->pc = 0x3DC614u;
    {
        const bool branch_taken_0x3dc614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC614u;
        // 0x3dc618: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc614) {
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC61Cu;
label_3dc61c:
    // 0x3dc61c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x3dc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_3dc620:
    // 0x3dc620: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_3dc624:
    if (ctx->pc == 0x3DC624u) {
        ctx->pc = 0x3DC628u;
        goto label_3dc628;
    }
    ctx->pc = 0x3DC620u;
    {
        const bool branch_taken_0x3dc620 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dc620) {
            ctx->pc = 0x3DC630u;
            goto label_3dc630;
        }
    }
    ctx->pc = 0x3DC628u;
label_3dc628:
    // 0x3dc628: 0x1000005f  b           . + 4 + (0x5F << 2)
label_3dc62c:
    if (ctx->pc == 0x3DC62Cu) {
        ctx->pc = 0x3DC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC628u;
        // 0x3dc62c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC630u;
        goto label_3dc630;
    }
    ctx->pc = 0x3DC628u;
    {
        const bool branch_taken_0x3dc628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC628u;
        // 0x3dc62c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc628) {
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC630u;
label_3dc630:
    // 0x3dc630: 0x1200005d  beqz        $s0, . + 4 + (0x5D << 2)
label_3dc634:
    if (ctx->pc == 0x3DC634u) {
        ctx->pc = 0x3DC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC630u;
        // 0x3dc634: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC638u;
        goto label_3dc638;
    }
    ctx->pc = 0x3DC630u;
    {
        const bool branch_taken_0x3dc630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC630u;
        // 0x3dc634: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc630) {
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC638u;
label_3dc638:
    // 0x3dc638: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3dc638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3dc63c:
    // 0x3dc63c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3dc640:
    if (ctx->pc == 0x3DC640u) {
        ctx->pc = 0x3DC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC63Cu;
        // 0x3dc640: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC644u;
        goto label_3dc644;
    }
    ctx->pc = 0x3DC63Cu;
    {
        const bool branch_taken_0x3dc63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC63Cu;
        // 0x3dc640: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc63c) {
            ctx->pc = 0x3DC654u;
            goto label_3dc654;
        }
    }
    ctx->pc = 0x3DC644u;
label_3dc644:
    // 0x3dc644: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3dc644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3dc648:
    // 0x3dc648: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3dc648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3dc64c:
    // 0x3dc64c: 0x2442c5b0  addiu       $v0, $v0, -0x3A50
    ctx->pc = 0x3dc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952368));
label_3dc650:
    // 0x3dc650: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x3dc650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_3dc654:
    // 0x3dc654: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3dc654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3dc658:
    // 0x3dc658: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3dc65c:
    if (ctx->pc == 0x3DC65Cu) {
        ctx->pc = 0x3DC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC658u;
        // 0x3dc65c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC660u;
        goto label_3dc660;
    }
    ctx->pc = 0x3DC658u;
    {
        const bool branch_taken_0x3dc658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc658) {
            ctx->pc = 0x3DC65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC658u;
            // 0x3dc65c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC670u;
            goto label_3dc670;
        }
    }
    ctx->pc = 0x3DC660u;
label_3dc660:
    // 0x3dc660: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3dc660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3dc664:
    // 0x3dc664: 0x2442c5d0  addiu       $v0, $v0, -0x3A30
    ctx->pc = 0x3dc664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952400));
label_3dc668:
    // 0x3dc668: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3dc668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_3dc66c:
    // 0x3dc66c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3dc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3dc670:
    // 0x3dc670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3dc670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc674:
    // 0x3dc674: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3dc674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3dc678:
    // 0x3dc678: 0x40f809  jalr        $v0
label_3dc67c:
    if (ctx->pc == 0x3DC67Cu) {
        ctx->pc = 0x3DC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC678u;
        // 0x3dc67c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC680u;
        goto label_3dc680;
    }
    ctx->pc = 0x3DC678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC680u);
        ctx->pc = 0x3DC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC678u;
        // 0x3dc67c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC678u, 0x3DC680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC680u;
label_3dc680:
    // 0x3dc680: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3dc680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc684:
    // 0x3dc684: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3dc688:
    if (ctx->pc == 0x3DC688u) {
        ctx->pc = 0x3DC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC684u;
        // 0x3dc688: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC68Cu;
        goto label_3dc68c;
    }
    ctx->pc = 0x3DC684u;
    {
        const bool branch_taken_0x3dc684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC684u;
        // 0x3dc688: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc684) {
            ctx->pc = 0x3DC694u;
            goto label_3dc694;
        }
    }
    ctx->pc = 0x3DC68Cu;
label_3dc68c:
    // 0x3dc68c: 0x10000046  b           . + 4 + (0x46 << 2)
label_3dc690:
    if (ctx->pc == 0x3DC690u) {
        ctx->pc = 0x3DC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC68Cu;
        // 0x3dc690: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC694u;
        goto label_3dc694;
    }
    ctx->pc = 0x3DC68Cu;
    {
        const bool branch_taken_0x3dc68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC68Cu;
        // 0x3dc690: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc68c) {
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC694u;
label_3dc694:
    // 0x3dc694: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x3dc694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_3dc698:
    // 0x3dc698: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_3dc69c:
    if (ctx->pc == 0x3DC69Cu) {
        ctx->pc = 0x3DC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC698u;
        // 0x3dc69c: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6A0u;
        goto label_3dc6a0;
    }
    ctx->pc = 0x3DC698u;
    {
        const bool branch_taken_0x3dc698 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3DC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC698u;
        // 0x3dc69c: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc698) {
            ctx->pc = 0x3DC6ACu;
            goto label_3dc6ac;
        }
    }
    ctx->pc = 0x3DC6A0u;
label_3dc6a0:
    // 0x3dc6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc6a4:
    // 0x3dc6a4: 0x118823  negu        $s1, $s1
    ctx->pc = 0x3dc6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_3dc6a8:
    // 0x3dc6a8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3dc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_3dc6ac:
    // 0x3dc6ac: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x3dc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_3dc6b0:
    // 0x3dc6b0: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3dc6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3dc6b4:
    // 0x3dc6b4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3dc6b8:
    if (ctx->pc == 0x3DC6B8u) {
        ctx->pc = 0x3DC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6B4u;
        // 0x3dc6b8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6BCu;
        goto label_3dc6bc;
    }
    ctx->pc = 0x3DC6B4u;
    {
        const bool branch_taken_0x3dc6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc6b4) {
            ctx->pc = 0x3DC6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC6B4u;
            // 0x3dc6b8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC704u;
            goto label_3dc704;
        }
    }
    ctx->pc = 0x3DC6BCu;
label_3dc6bc:
    // 0x3dc6bc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3dc6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3dc6c0:
    // 0x3dc6c0: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_3dc6c4:
    if (ctx->pc == 0x3DC6C4u) {
        ctx->pc = 0x3DC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6C0u;
        // 0x3dc6c4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6C8u;
        goto label_3dc6c8;
    }
    ctx->pc = 0x3DC6C0u;
    {
        const bool branch_taken_0x3dc6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6C0u;
        // 0x3dc6c4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc6c0) {
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC6C8u;
label_3dc6c8:
    // 0x3dc6c8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3dc6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3dc6cc:
    // 0x3dc6cc: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_3dc6d0:
    if (ctx->pc == 0x3DC6D0u) {
        ctx->pc = 0x3DC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6CCu;
        // 0x3dc6d0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6D4u;
        goto label_3dc6d4;
    }
    ctx->pc = 0x3DC6CCu;
    {
        const bool branch_taken_0x3dc6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc6cc) {
            ctx->pc = 0x3DC6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC6CCu;
            // 0x3dc6d0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC6D4u;
label_3dc6d4:
    // 0x3dc6d4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x3dc6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3dc6d8:
    // 0x3dc6d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3dc6dc:
    if (ctx->pc == 0x3DC6DCu) {
        ctx->pc = 0x3DC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6D8u;
        // 0x3dc6dc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6E0u;
        goto label_3dc6e0;
    }
    ctx->pc = 0x3DC6D8u;
    {
        const bool branch_taken_0x3dc6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc6d8) {
            ctx->pc = 0x3DC6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC6D8u;
            // 0x3dc6dc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC6F0u;
            goto label_3dc6f0;
        }
    }
    ctx->pc = 0x3DC6E0u;
label_3dc6e0:
    // 0x3dc6e0: 0xc0f7946  jal         func_3DE518
label_3dc6e4:
    if (ctx->pc == 0x3DC6E4u) {
        ctx->pc = 0x3DC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6E0u;
        // 0x3dc6e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6E8u;
        goto label_3dc6e8;
    }
    ctx->pc = 0x3DC6E0u;
    SET_GPR_U32(ctx, 31, 0x3DC6E8u);
    ctx->pc = 0x3DC6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC6E0u;
    // 0x3dc6e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE518u, 0x3DC6E0u, 0x3DC6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC6E8u;
label_3dc6e8:
    // 0x3dc6e8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3dc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3dc6ec:
    // 0x3dc6ec: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3dc6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3dc6f0:
    // 0x3dc6f0: 0x40f809  jalr        $v0
label_3dc6f4:
    if (ctx->pc == 0x3DC6F4u) {
        ctx->pc = 0x3DC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6F0u;
        // 0x3dc6f4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6F8u;
        goto label_3dc6f8;
    }
    ctx->pc = 0x3DC6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC6F8u);
        ctx->pc = 0x3DC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6F0u;
        // 0x3dc6f4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC6F0u, 0x3DC6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC6F8u;
label_3dc6f8:
    // 0x3dc6f8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3dc6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3dc6fc:
    // 0x3dc6fc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3dc700:
    if (ctx->pc == 0x3DC700u) {
        ctx->pc = 0x3DC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6FCu;
        // 0x3dc700: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC704u;
        goto label_3dc704;
    }
    ctx->pc = 0x3DC6FCu;
    {
        const bool branch_taken_0x3dc6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6FCu;
        // 0x3dc700: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc6fc) {
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC704u;
label_3dc704:
    // 0x3dc704: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3dc704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3dc708:
    // 0x3dc708: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3dc70c:
    if (ctx->pc == 0x3DC70Cu) {
        ctx->pc = 0x3DC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC708u;
        // 0x3dc70c: 0xac51001c  sw          $s1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC710u;
        goto label_3dc710;
    }
    ctx->pc = 0x3DC708u;
    {
        const bool branch_taken_0x3dc708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC708u;
        // 0x3dc70c: 0xac51001c  sw          $s1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc708) {
            ctx->pc = 0x3DC71Cu;
            goto label_3dc71c;
        }
    }
    ctx->pc = 0x3DC710u;
label_3dc710:
    // 0x3dc710: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3dc710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_3dc714:
    // 0x3dc714: 0x10000002  b           . + 4 + (0x2 << 2)
label_3dc718:
    if (ctx->pc == 0x3DC718u) {
        ctx->pc = 0x3DC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC714u;
        // 0x3dc718: 0x24456e50  addiu       $a1, $v0, 0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC71Cu;
        goto label_3dc71c;
    }
    ctx->pc = 0x3DC714u;
    {
        const bool branch_taken_0x3dc714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC714u;
        // 0x3dc718: 0x24456e50  addiu       $a1, $v0, 0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc714) {
            ctx->pc = 0x3DC720u;
            goto label_3dc720;
        }
    }
    ctx->pc = 0x3DC71Cu;
label_3dc71c:
    // 0x3dc71c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dc71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc720:
    // 0x3dc720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3dc720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc724:
    // 0x3dc724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc728:
    // 0x3dc728: 0xc0f740c  jal         func_3DD030
label_3dc72c:
    if (ctx->pc == 0x3DC72Cu) {
        ctx->pc = 0x3DC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC728u;
        // 0x3dc72c: 0x2263004  sllv        $a2, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC730u;
        goto label_3dc730;
    }
    ctx->pc = 0x3DC728u;
    SET_GPR_U32(ctx, 31, 0x3DC730u);
    ctx->pc = 0x3DC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC728u;
    // 0x3dc72c: 0x2263004  sllv        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD030u, 0x3DC728u, 0x3DC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC730u;
label_3dc730:
    // 0x3dc730: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x3dc730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3dc734:
    // 0x3dc734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dc734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc738:
    // 0x3dc738: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_3dc73c:
    if (ctx->pc == 0x3DC73Cu) {
        ctx->pc = 0x3DC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC738u;
        // 0x3dc73c: 0xacc40020  sw          $a0, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC740u;
        goto label_3dc740;
    }
    ctx->pc = 0x3DC738u;
    {
        const bool branch_taken_0x3dc738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC738u;
        // 0x3dc73c: 0xacc40020  sw          $a0, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc738) {
            ctx->pc = 0x3DC770u;
            goto label_3dc770;
        }
    }
    ctx->pc = 0x3DC740u;
label_3dc740:
    // 0x3dc740: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_3dc744:
    if (ctx->pc == 0x3DC744u) {
        ctx->pc = 0x3DC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC740u;
        // 0x3dc744: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC748u;
        goto label_3dc748;
    }
    ctx->pc = 0x3DC740u;
    {
        const bool branch_taken_0x3dc740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC740u;
        // 0x3dc744: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc740) {
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC748u;
label_3dc748:
    // 0x3dc748: 0x50c00018  beql        $a2, $zero, . + 4 + (0x18 << 2)
label_3dc74c:
    if (ctx->pc == 0x3DC74Cu) {
        ctx->pc = 0x3DC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC748u;
        // 0x3dc74c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC750u;
        goto label_3dc750;
    }
    ctx->pc = 0x3DC748u;
    {
        const bool branch_taken_0x3dc748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc748) {
            ctx->pc = 0x3DC74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC748u;
            // 0x3dc74c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC7ACu;
            goto label_3dc7ac;
        }
    }
    ctx->pc = 0x3DC750u;
label_3dc750:
    // 0x3dc750: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3dc750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3dc754:
    // 0x3dc754: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_3dc758:
    if (ctx->pc == 0x3DC758u) {
        ctx->pc = 0x3DC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC754u;
        // 0x3dc758: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC75Cu;
        goto label_3dc75c;
    }
    ctx->pc = 0x3DC754u;
    {
        const bool branch_taken_0x3dc754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc754) {
            ctx->pc = 0x3DC758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC754u;
            // 0x3dc758: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC75Cu;
label_3dc75c:
    // 0x3dc75c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3dc75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3dc760:
    // 0x3dc760: 0x40f809  jalr        $v0
label_3dc764:
    if (ctx->pc == 0x3DC764u) {
        ctx->pc = 0x3DC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC760u;
        // 0x3dc764: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC768u;
        goto label_3dc768;
    }
    ctx->pc = 0x3DC760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC768u);
        ctx->pc = 0x3DC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC760u;
        // 0x3dc764: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC760u, 0x3DC768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC768u;
label_3dc768:
    // 0x3dc768: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_3dc76c:
    if (ctx->pc == 0x3DC76Cu) {
        ctx->pc = 0x3DC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC768u;
        // 0x3dc76c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC770u;
        goto label_3dc770;
    }
    ctx->pc = 0x3DC768u;
    {
        const bool branch_taken_0x3dc768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC768u;
        // 0x3dc76c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc768) {
            ctx->pc = 0x3DC68Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc68c;
        }
    }
    ctx->pc = 0x3DC770u;
label_3dc770:
    // 0x3dc770: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3dc774:
    if (ctx->pc == 0x3DC774u) {
        ctx->pc = 0x3DC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC770u;
        // 0x3dc774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC778u;
        goto label_3dc778;
    }
    ctx->pc = 0x3DC770u;
    {
        const bool branch_taken_0x3dc770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC770u;
        // 0x3dc774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc770) {
            ctx->pc = 0x3DC7A8u;
            goto label_3dc7a8;
        }
    }
    ctx->pc = 0x3DC778u;
label_3dc778:
    // 0x3dc778: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_3dc77c:
    if (ctx->pc == 0x3DC77Cu) {
        ctx->pc = 0x3DC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC778u;
        // 0x3dc77c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC780u;
        goto label_3dc780;
    }
    ctx->pc = 0x3DC778u;
    {
        const bool branch_taken_0x3dc778 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC778u;
        // 0x3dc77c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc778) {
            ctx->pc = 0x3DC7A4u;
            goto label_3dc7a4;
        }
    }
    ctx->pc = 0x3DC780u;
label_3dc780:
    // 0x3dc780: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3dc780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3dc784:
    // 0x3dc784: 0xfe000018  sd          $zero, 0x18($s0)
    ctx->pc = 0x3dc784u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
label_3dc788:
    // 0x3dc788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dc788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc78c:
    // 0x3dc78c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x3dc78cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3dc790:
    // 0x3dc790: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x3dc790u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
label_3dc794:
    // 0x3dc794: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3dc794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3dc798:
    // 0x3dc798: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3dc798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3dc79c:
    // 0x3dc79c: 0xc0f791a  jal         func_3DE468
label_3dc7a0:
    if (ctx->pc == 0x3DC7A0u) {
        ctx->pc = 0x3DC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC79Cu;
        // 0x3dc7a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC7A4u;
        goto label_3dc7a4;
    }
    ctx->pc = 0x3DC79Cu;
    SET_GPR_U32(ctx, 31, 0x3DC7A4u);
    ctx->pc = 0x3DC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC79Cu;
    // 0x3dc7a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE468u, 0x3DC79Cu, 0x3DC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC7A4u;
label_3dc7a4:
    // 0x3dc7a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dc7a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc7a8:
    // 0x3dc7a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3dc7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc7ac:
    // 0x3dc7ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dc7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dc7b0:
    // 0x3dc7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc7b4:
    // 0x3dc7b4: 0x3e00008  jr          $ra
label_3dc7b8:
    if (ctx->pc == 0x3DC7B8u) {
        ctx->pc = 0x3DC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7B4u;
        // 0x3dc7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC7BCu;
        goto label_3dc7bc;
    }
    ctx->pc = 0x3DC7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7B4u;
        // 0x3dc7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC7BCu;
label_3dc7bc:
    // 0x3dc7bc: 0x0  nop
    ctx->pc = 0x3dc7bcu;
    // NOP
    ctx->pc = 0x3dc7c0u;
}
