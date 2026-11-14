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

// Function: sub_0040C550
// Address: 0x40c550 - 0x40c8d8
void sub_0040C550_0x40c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C550_0x40c550");
#endif

    switch (ctx->pc) {
        case 0x40c550u: goto label_40c550;
        case 0x40c554u: goto label_40c554;
        case 0x40c558u: goto label_40c558;
        case 0x40c55cu: goto label_40c55c;
        case 0x40c560u: goto label_40c560;
        case 0x40c564u: goto label_40c564;
        case 0x40c568u: goto label_40c568;
        case 0x40c56cu: goto label_40c56c;
        case 0x40c570u: goto label_40c570;
        case 0x40c574u: goto label_40c574;
        case 0x40c578u: goto label_40c578;
        case 0x40c57cu: goto label_40c57c;
        case 0x40c580u: goto label_40c580;
        case 0x40c584u: goto label_40c584;
        case 0x40c588u: goto label_40c588;
        case 0x40c58cu: goto label_40c58c;
        case 0x40c590u: goto label_40c590;
        case 0x40c594u: goto label_40c594;
        case 0x40c598u: goto label_40c598;
        case 0x40c59cu: goto label_40c59c;
        case 0x40c5a0u: goto label_40c5a0;
        case 0x40c5a4u: goto label_40c5a4;
        case 0x40c5a8u: goto label_40c5a8;
        case 0x40c5acu: goto label_40c5ac;
        case 0x40c5b0u: goto label_40c5b0;
        case 0x40c5b4u: goto label_40c5b4;
        case 0x40c5b8u: goto label_40c5b8;
        case 0x40c5bcu: goto label_40c5bc;
        case 0x40c5c0u: goto label_40c5c0;
        case 0x40c5c4u: goto label_40c5c4;
        case 0x40c5c8u: goto label_40c5c8;
        case 0x40c5ccu: goto label_40c5cc;
        case 0x40c5d0u: goto label_40c5d0;
        case 0x40c5d4u: goto label_40c5d4;
        case 0x40c5d8u: goto label_40c5d8;
        case 0x40c5dcu: goto label_40c5dc;
        case 0x40c5e0u: goto label_40c5e0;
        case 0x40c5e4u: goto label_40c5e4;
        case 0x40c5e8u: goto label_40c5e8;
        case 0x40c5ecu: goto label_40c5ec;
        case 0x40c5f0u: goto label_40c5f0;
        case 0x40c5f4u: goto label_40c5f4;
        case 0x40c5f8u: goto label_40c5f8;
        case 0x40c5fcu: goto label_40c5fc;
        case 0x40c600u: goto label_40c600;
        case 0x40c604u: goto label_40c604;
        case 0x40c608u: goto label_40c608;
        case 0x40c60cu: goto label_40c60c;
        case 0x40c610u: goto label_40c610;
        case 0x40c614u: goto label_40c614;
        case 0x40c618u: goto label_40c618;
        case 0x40c61cu: goto label_40c61c;
        case 0x40c620u: goto label_40c620;
        case 0x40c624u: goto label_40c624;
        case 0x40c628u: goto label_40c628;
        case 0x40c62cu: goto label_40c62c;
        case 0x40c630u: goto label_40c630;
        case 0x40c634u: goto label_40c634;
        case 0x40c638u: goto label_40c638;
        case 0x40c63cu: goto label_40c63c;
        case 0x40c640u: goto label_40c640;
        case 0x40c644u: goto label_40c644;
        case 0x40c648u: goto label_40c648;
        case 0x40c64cu: goto label_40c64c;
        case 0x40c650u: goto label_40c650;
        case 0x40c654u: goto label_40c654;
        case 0x40c658u: goto label_40c658;
        case 0x40c65cu: goto label_40c65c;
        case 0x40c660u: goto label_40c660;
        case 0x40c664u: goto label_40c664;
        case 0x40c668u: goto label_40c668;
        case 0x40c66cu: goto label_40c66c;
        case 0x40c670u: goto label_40c670;
        case 0x40c674u: goto label_40c674;
        case 0x40c678u: goto label_40c678;
        case 0x40c67cu: goto label_40c67c;
        case 0x40c680u: goto label_40c680;
        case 0x40c684u: goto label_40c684;
        case 0x40c688u: goto label_40c688;
        case 0x40c68cu: goto label_40c68c;
        case 0x40c690u: goto label_40c690;
        case 0x40c694u: goto label_40c694;
        case 0x40c698u: goto label_40c698;
        case 0x40c69cu: goto label_40c69c;
        case 0x40c6a0u: goto label_40c6a0;
        case 0x40c6a4u: goto label_40c6a4;
        case 0x40c6a8u: goto label_40c6a8;
        case 0x40c6acu: goto label_40c6ac;
        case 0x40c6b0u: goto label_40c6b0;
        case 0x40c6b4u: goto label_40c6b4;
        case 0x40c6b8u: goto label_40c6b8;
        case 0x40c6bcu: goto label_40c6bc;
        case 0x40c6c0u: goto label_40c6c0;
        case 0x40c6c4u: goto label_40c6c4;
        case 0x40c6c8u: goto label_40c6c8;
        case 0x40c6ccu: goto label_40c6cc;
        case 0x40c6d0u: goto label_40c6d0;
        case 0x40c6d4u: goto label_40c6d4;
        case 0x40c6d8u: goto label_40c6d8;
        case 0x40c6dcu: goto label_40c6dc;
        case 0x40c6e0u: goto label_40c6e0;
        case 0x40c6e4u: goto label_40c6e4;
        case 0x40c6e8u: goto label_40c6e8;
        case 0x40c6ecu: goto label_40c6ec;
        case 0x40c6f0u: goto label_40c6f0;
        case 0x40c6f4u: goto label_40c6f4;
        case 0x40c6f8u: goto label_40c6f8;
        case 0x40c6fcu: goto label_40c6fc;
        case 0x40c700u: goto label_40c700;
        case 0x40c704u: goto label_40c704;
        case 0x40c708u: goto label_40c708;
        case 0x40c70cu: goto label_40c70c;
        case 0x40c710u: goto label_40c710;
        case 0x40c714u: goto label_40c714;
        case 0x40c718u: goto label_40c718;
        case 0x40c71cu: goto label_40c71c;
        case 0x40c720u: goto label_40c720;
        case 0x40c724u: goto label_40c724;
        case 0x40c728u: goto label_40c728;
        case 0x40c72cu: goto label_40c72c;
        case 0x40c730u: goto label_40c730;
        case 0x40c734u: goto label_40c734;
        case 0x40c738u: goto label_40c738;
        case 0x40c73cu: goto label_40c73c;
        case 0x40c740u: goto label_40c740;
        case 0x40c744u: goto label_40c744;
        case 0x40c748u: goto label_40c748;
        case 0x40c74cu: goto label_40c74c;
        case 0x40c750u: goto label_40c750;
        case 0x40c754u: goto label_40c754;
        case 0x40c758u: goto label_40c758;
        case 0x40c75cu: goto label_40c75c;
        case 0x40c760u: goto label_40c760;
        case 0x40c764u: goto label_40c764;
        case 0x40c768u: goto label_40c768;
        case 0x40c76cu: goto label_40c76c;
        case 0x40c770u: goto label_40c770;
        case 0x40c774u: goto label_40c774;
        case 0x40c778u: goto label_40c778;
        case 0x40c77cu: goto label_40c77c;
        case 0x40c780u: goto label_40c780;
        case 0x40c784u: goto label_40c784;
        case 0x40c788u: goto label_40c788;
        case 0x40c78cu: goto label_40c78c;
        case 0x40c790u: goto label_40c790;
        case 0x40c794u: goto label_40c794;
        case 0x40c798u: goto label_40c798;
        case 0x40c79cu: goto label_40c79c;
        case 0x40c7a0u: goto label_40c7a0;
        case 0x40c7a4u: goto label_40c7a4;
        case 0x40c7a8u: goto label_40c7a8;
        case 0x40c7acu: goto label_40c7ac;
        case 0x40c7b0u: goto label_40c7b0;
        case 0x40c7b4u: goto label_40c7b4;
        case 0x40c7b8u: goto label_40c7b8;
        case 0x40c7bcu: goto label_40c7bc;
        case 0x40c7c0u: goto label_40c7c0;
        case 0x40c7c4u: goto label_40c7c4;
        case 0x40c7c8u: goto label_40c7c8;
        case 0x40c7ccu: goto label_40c7cc;
        case 0x40c7d0u: goto label_40c7d0;
        case 0x40c7d4u: goto label_40c7d4;
        case 0x40c7d8u: goto label_40c7d8;
        case 0x40c7dcu: goto label_40c7dc;
        case 0x40c7e0u: goto label_40c7e0;
        case 0x40c7e4u: goto label_40c7e4;
        case 0x40c7e8u: goto label_40c7e8;
        case 0x40c7ecu: goto label_40c7ec;
        case 0x40c7f0u: goto label_40c7f0;
        case 0x40c7f4u: goto label_40c7f4;
        case 0x40c7f8u: goto label_40c7f8;
        case 0x40c7fcu: goto label_40c7fc;
        case 0x40c800u: goto label_40c800;
        case 0x40c804u: goto label_40c804;
        case 0x40c808u: goto label_40c808;
        case 0x40c80cu: goto label_40c80c;
        case 0x40c810u: goto label_40c810;
        case 0x40c814u: goto label_40c814;
        case 0x40c818u: goto label_40c818;
        case 0x40c81cu: goto label_40c81c;
        case 0x40c820u: goto label_40c820;
        case 0x40c824u: goto label_40c824;
        case 0x40c828u: goto label_40c828;
        case 0x40c82cu: goto label_40c82c;
        case 0x40c830u: goto label_40c830;
        case 0x40c834u: goto label_40c834;
        case 0x40c838u: goto label_40c838;
        case 0x40c83cu: goto label_40c83c;
        case 0x40c840u: goto label_40c840;
        case 0x40c844u: goto label_40c844;
        case 0x40c848u: goto label_40c848;
        case 0x40c84cu: goto label_40c84c;
        case 0x40c850u: goto label_40c850;
        case 0x40c854u: goto label_40c854;
        case 0x40c858u: goto label_40c858;
        case 0x40c85cu: goto label_40c85c;
        case 0x40c860u: goto label_40c860;
        case 0x40c864u: goto label_40c864;
        case 0x40c868u: goto label_40c868;
        case 0x40c86cu: goto label_40c86c;
        case 0x40c870u: goto label_40c870;
        case 0x40c874u: goto label_40c874;
        case 0x40c878u: goto label_40c878;
        case 0x40c87cu: goto label_40c87c;
        case 0x40c880u: goto label_40c880;
        case 0x40c884u: goto label_40c884;
        case 0x40c888u: goto label_40c888;
        case 0x40c88cu: goto label_40c88c;
        case 0x40c890u: goto label_40c890;
        case 0x40c894u: goto label_40c894;
        case 0x40c898u: goto label_40c898;
        case 0x40c89cu: goto label_40c89c;
        case 0x40c8a0u: goto label_40c8a0;
        case 0x40c8a4u: goto label_40c8a4;
        case 0x40c8a8u: goto label_40c8a8;
        case 0x40c8acu: goto label_40c8ac;
        case 0x40c8b0u: goto label_40c8b0;
        case 0x40c8b4u: goto label_40c8b4;
        case 0x40c8b8u: goto label_40c8b8;
        case 0x40c8bcu: goto label_40c8bc;
        case 0x40c8c0u: goto label_40c8c0;
        case 0x40c8c4u: goto label_40c8c4;
        case 0x40c8c8u: goto label_40c8c8;
        case 0x40c8ccu: goto label_40c8cc;
        case 0x40c8d0u: goto label_40c8d0;
        case 0x40c8d4u: goto label_40c8d4;
        default: break;
    }

    ctx->pc = 0x40c550u;

label_40c550:
    // 0x40c550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x40c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_40c554:
    // 0x40c554: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x40c554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_40c558:
    // 0x40c558: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x40c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_40c55c:
    // 0x40c55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40c55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c560:
    // 0x40c560: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40c564:
    // 0x40c564: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x40c564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40c568:
    // 0x40c568: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x40c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_40c56c:
    // 0x40c56c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x40c56cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40c570:
    // 0x40c570: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x40c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_40c574:
    // 0x40c574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40c578:
    // 0x40c578: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c57c:
    // 0x40c57c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40c580:
    // 0x40c580: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x40c580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_40c584:
    // 0x40c584: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x40c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_40c588:
    // 0x40c588: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x40c588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_40c58c:
    // 0x40c58c: 0x14820026  bne         $a0, $v0, . + 4 + (0x26 << 2)
label_40c590:
    if (ctx->pc == 0x40C590u) {
        ctx->pc = 0x40C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C58Cu;
        // 0x40c590: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C594u;
        goto label_40c594;
    }
    ctx->pc = 0x40C58Cu;
    {
        const bool branch_taken_0x40c58c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x40C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C58Cu;
        // 0x40c590: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c58c) {
            ctx->pc = 0x40C628u;
            goto label_40c628;
        }
    }
    ctx->pc = 0x40C594u;
label_40c594:
    // 0x40c594: 0xc1032a2  jal         func_40CA88
label_40c598:
    if (ctx->pc == 0x40C598u) {
        ctx->pc = 0x40C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C594u;
        // 0x40c598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C59Cu;
        goto label_40c59c;
    }
    ctx->pc = 0x40C594u;
    SET_GPR_U32(ctx, 31, 0x40C59Cu);
    ctx->pc = 0x40C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C594u;
    // 0x40c598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA88u, 0x40C594u, 0x40C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C59Cu;
label_40c59c:
    // 0x40c59c: 0x24510230  addiu       $s1, $v0, 0x230
    ctx->pc = 0x40c59cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
label_40c5a0:
    // 0x40c5a0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40c5a4:
    // 0x40c5a4: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x40c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_40c5a8:
    // 0x40c5a8: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x40c5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_40c5ac:
    // 0x40c5ac: 0x34c60024  ori         $a2, $a2, 0x24
    ctx->pc = 0x40c5acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36);
label_40c5b0:
    // 0x40c5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c5b4:
    // 0x40c5b4: 0x40f809  jalr        $v0
label_40c5b8:
    if (ctx->pc == 0x40C5B8u) {
        ctx->pc = 0x40C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C5B4u;
        // 0x40c5b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C5BCu;
        goto label_40c5bc;
    }
    ctx->pc = 0x40C5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40C5BCu);
        ctx->pc = 0x40C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C5B4u;
        // 0x40c5b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C5B4u, 0x40C5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C5BCu;
label_40c5bc:
    // 0x40c5bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40c5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c5c0:
    // 0x40c5c0: 0x54c0000d  bnel        $a2, $zero, . + 4 + (0xD << 2)
label_40c5c4:
    if (ctx->pc == 0x40C5C4u) {
        ctx->pc = 0x40C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C5C0u;
        // 0x40c5c4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C5C8u;
        goto label_40c5c8;
    }
    ctx->pc = 0x40C5C0u;
    {
        const bool branch_taken_0x40c5c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c5c0) {
            ctx->pc = 0x40C5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C5C0u;
            // 0x40c5c4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C5F8u;
            goto label_40c5f8;
        }
    }
    ctx->pc = 0x40C5C8u;
label_40c5c8:
    // 0x40c5c8: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x40c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_40c5cc:
    // 0x40c5cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40c5d0:
    // 0x40c5d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_40c5d4:
    // 0x40c5d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40c5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40c5d8:
    // 0x40c5d8: 0xc1035f6  jal         func_40D7D8
label_40c5dc:
    if (ctx->pc == 0x40C5DCu) {
        ctx->pc = 0x40C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C5D8u;
        // 0x40c5dc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C5E0u;
        goto label_40c5e0;
    }
    ctx->pc = 0x40C5D8u;
    SET_GPR_U32(ctx, 31, 0x40C5E0u);
    ctx->pc = 0x40C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C5D8u;
    // 0x40c5dc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40C5D8u, 0x40C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C5E0u;
label_40c5e0:
    // 0x40c5e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40c5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40c5e4:
    // 0x40c5e4: 0xc103628  jal         func_40D8A0
label_40c5e8:
    if (ctx->pc == 0x40C5E8u) {
        ctx->pc = 0x40C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C5E4u;
        // 0x40c5e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C5ECu;
        goto label_40c5ec;
    }
    ctx->pc = 0x40C5E4u;
    SET_GPR_U32(ctx, 31, 0x40C5ECu);
    ctx->pc = 0x40C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C5E4u;
    // 0x40c5e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40C5E4u, 0x40C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C5ECu;
label_40c5ec:
    // 0x40c5ec: 0x10000024  b           . + 4 + (0x24 << 2)
label_40c5f0:
    if (ctx->pc == 0x40C5F0u) {
        ctx->pc = 0x40C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C5ECu;
        // 0x40c5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C5F4u;
        goto label_40c5f4;
    }
    ctx->pc = 0x40C5ECu;
    {
        const bool branch_taken_0x40c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C5ECu;
        // 0x40c5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c5ec) {
            ctx->pc = 0x40C680u;
            goto label_40c680;
        }
    }
    ctx->pc = 0x40C5F4u;
label_40c5f4:
    // 0x40c5f4: 0x0  nop
    ctx->pc = 0x40c5f4u;
    // NOP
label_40c5f8:
    // 0x40c5f8: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x40c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_40c5fc:
    // 0x40c5fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x40c5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40c600:
    // 0x40c600: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x40c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40c604:
    // 0x40c604: 0x24440013  addiu       $a0, $v0, 0x13
    ctx->pc = 0x40c604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
label_40c608:
    // 0x40c608: 0x723818  mult        $a3, $v1, $s2
    ctx->pc = 0x40c608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_40c60c:
    // 0x40c60c: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x40c60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_40c610:
    // 0x40c610: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x40c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_40c614:
    // 0x40c614: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x40c614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_40c618:
    // 0x40c618: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x40c618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_40c61c:
    // 0x40c61c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x40c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40c620:
    // 0x40c620: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x40c620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_40c624:
    // 0x40c624: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x40c624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_40c628:
    // 0x40c628: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x40c628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c62c:
    // 0x40c62c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x40c62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40c630:
    // 0x40c630: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x40c630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_40c634:
    // 0x40c634: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40c634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c638:
    // 0x40c638: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x40c638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_40c63c:
    // 0x40c63c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x40c63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_40c640:
    // 0x40c640: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x40c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_40c644:
    // 0x40c644: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40c644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40c648:
    // 0x40c648: 0x662018  mult        $a0, $v1, $a2
    ctx->pc = 0x40c648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_40c64c:
    // 0x40c64c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x40c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_40c650:
    // 0x40c650: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x40c650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_40c654:
    // 0x40c654: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x40c654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40c658:
    // 0x40c658: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x40c658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_40c65c:
    // 0x40c65c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x40c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_40c660:
    // 0x40c660: 0xac94000c  sw          $s4, 0xC($a0)
    ctx->pc = 0x40c660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 20));
label_40c664:
    // 0x40c664: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x40c664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c668:
    // 0x40c668: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x40c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_40c66c:
    // 0x40c66c: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x40c66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_40c670:
    // 0x40c670: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x40c670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_40c674:
    // 0x40c674: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40c674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40c678:
    // 0x40c678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_40c67c:
    // 0x40c67c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x40c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_40c680:
    // 0x40c680: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x40c680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40c684:
    // 0x40c684: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x40c684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40c688:
    // 0x40c688: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x40c688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40c68c:
    // 0x40c68c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40c68cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40c690:
    // 0x40c690: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x40c690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40c694:
    // 0x40c694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40c694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40c698:
    // 0x40c698: 0x3e00008  jr          $ra
label_40c69c:
    if (ctx->pc == 0x40C69Cu) {
        ctx->pc = 0x40C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C698u;
        // 0x40c69c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C6A0u;
        goto label_40c6a0;
    }
    ctx->pc = 0x40C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C698u;
        // 0x40c69c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C6A0u;
label_40c6a0:
    // 0x40c6a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x40c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_40c6a4:
    // 0x40c6a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40c6a8:
    // 0x40c6a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x40c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_40c6ac:
    // 0x40c6ac: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x40c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_40c6b0:
    // 0x40c6b0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x40c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_40c6b4:
    // 0x40c6b4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x40c6b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40c6b8:
    // 0x40c6b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x40c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_40c6bc:
    // 0x40c6bc: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x40c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_40c6c0:
    // 0x40c6c0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x40c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_40c6c4:
    // 0x40c6c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40c6c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c6c8:
    // 0x40c6c8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x40c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_40c6cc:
    // 0x40c6cc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x40c6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40c6d0:
    // 0x40c6d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x40c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_40c6d4:
    // 0x40c6d4: 0x24040234  addiu       $a0, $zero, 0x234
    ctx->pc = 0x40c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
label_40c6d8:
    // 0x40c6d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x40c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_40c6dc:
    // 0x40c6dc: 0x34a50024  ori         $a1, $a1, 0x24
    ctx->pc = 0x40c6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36);
label_40c6e0:
    // 0x40c6e0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x40c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_40c6e4:
    // 0x40c6e4: 0x40f809  jalr        $v0
label_40c6e8:
    if (ctx->pc == 0x40C6E8u) {
        ctx->pc = 0x40C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C6E4u;
        // 0x40c6e8: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C6ECu;
        goto label_40c6ec;
    }
    ctx->pc = 0x40C6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40C6ECu);
        ctx->pc = 0x40C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C6E4u;
        // 0x40c6e8: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C6E4u, 0x40C6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C6ECu;
label_40c6ec:
    // 0x40c6ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x40c6ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c6f0:
    // 0x40c6f0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_40c6f4:
    if (ctx->pc == 0x40C6F4u) {
        ctx->pc = 0x40C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C6F0u;
        // 0x40c6f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C6F8u;
        goto label_40c6f8;
    }
    ctx->pc = 0x40C6F0u;
    {
        const bool branch_taken_0x40c6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C6F0u;
        // 0x40c6f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c6f0) {
            ctx->pc = 0x40C728u;
            goto label_40c728;
        }
    }
    ctx->pc = 0x40C6F8u;
label_40c6f8:
    // 0x40c6f8: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x40c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_40c6fc:
    // 0x40c6fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40c700:
    // 0x40c700: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x40c700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_40c704:
    // 0x40c704: 0x24050234  addiu       $a1, $zero, 0x234
    ctx->pc = 0x40c704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
label_40c708:
    // 0x40c708: 0xc1035f6  jal         func_40D7D8
label_40c70c:
    if (ctx->pc == 0x40C70Cu) {
        ctx->pc = 0x40C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C708u;
        // 0x40c70c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C710u;
        goto label_40c710;
    }
    ctx->pc = 0x40C708u;
    SET_GPR_U32(ctx, 31, 0x40C710u);
    ctx->pc = 0x40C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C708u;
    // 0x40c70c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40C708u, 0x40C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C710u;
label_40c710:
    // 0x40c710: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x40c710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_40c714:
    // 0x40c714: 0xc103628  jal         func_40D8A0
label_40c718:
    if (ctx->pc == 0x40C718u) {
        ctx->pc = 0x40C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C714u;
        // 0x40c718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C71Cu;
        goto label_40c71c;
    }
    ctx->pc = 0x40C714u;
    SET_GPR_U32(ctx, 31, 0x40C71Cu);
    ctx->pc = 0x40C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C714u;
    // 0x40c718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40C714u, 0x40C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C71Cu;
label_40c71c:
    // 0x40c71c: 0x10000004  b           . + 4 + (0x4 << 2)
label_40c720:
    if (ctx->pc == 0x40C720u) {
        ctx->pc = 0x40C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C71Cu;
        // 0x40c720: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C724u;
        goto label_40c724;
    }
    ctx->pc = 0x40C71Cu;
    {
        const bool branch_taken_0x40c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C71Cu;
        // 0x40c720: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c71c) {
            ctx->pc = 0x40C730u;
            goto label_40c730;
        }
    }
    ctx->pc = 0x40C724u;
label_40c724:
    // 0x40c724: 0x0  nop
    ctx->pc = 0x40c724u;
    // NOP
label_40c728:
    // 0x40c728: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x40c728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_40c72c:
    // 0x40c72c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x40c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_40c730:
    // 0x40c730: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x40c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_40c734:
    // 0x40c734: 0xac400218  sw          $zero, 0x218($v0)
    ctx->pc = 0x40c734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 0));
label_40c738:
    // 0x40c738: 0x10000023  b           . + 4 + (0x23 << 2)
label_40c73c:
    if (ctx->pc == 0x40C73Cu) {
        ctx->pc = 0x40C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C738u;
        // 0x40c73c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C740u;
        goto label_40c740;
    }
    ctx->pc = 0x40C738u;
    {
        const bool branch_taken_0x40c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C738u;
        // 0x40c73c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c738) {
            ctx->pc = 0x40C7C8u;
            goto label_40c7c8;
        }
    }
    ctx->pc = 0x40C740u;
label_40c740:
    // 0x40c740: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x40c740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40c744:
    // 0x40c744: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x40c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_40c748:
    // 0x40c748: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x40c748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_40c74c:
    // 0x40c74c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x40c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_40c750:
    // 0x40c750: 0x27b20044  addiu       $s2, $sp, 0x44
    ctx->pc = 0x40c750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_40c754:
    // 0x40c754: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x40c754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_40c758:
    // 0x40c758: 0x2c830027  sltiu       $v1, $a0, 0x27
    ctx->pc = 0x40c758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_40c75c:
    // 0x40c75c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_40c760:
    if (ctx->pc == 0x40C760u) {
        ctx->pc = 0x40C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C75Cu;
        // 0x40c760: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C764u;
        goto label_40c764;
    }
    ctx->pc = 0x40C75Cu;
    {
        const bool branch_taken_0x40c75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C75Cu;
        // 0x40c760: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c75c) {
            ctx->pc = 0x40C788u;
            goto label_40c788;
        }
    }
    ctx->pc = 0x40C764u;
label_40c764:
    // 0x40c764: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x40c764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_40c768:
    // 0x40c768: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x40c768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40c76c:
    // 0x40c76c: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x40c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
label_40c770:
    // 0x40c770: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40c770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40c774:
    // 0x40c774: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40c774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40c778:
    // 0x40c778: 0x800008  jr          $a0
label_40c77c:
    if (ctx->pc == 0x40C77Cu) {
        ctx->pc = 0x40C780u;
        goto label_40c780;
    }
    ctx->pc = 0x40C778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x40C780u: goto label_40c780;
            case 0x40C788u: goto label_40c788;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C778u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x40C780u;
label_40c780:
    // 0x40c780: 0x10000002  b           . + 4 + (0x2 << 2)
label_40c784:
    if (ctx->pc == 0x40C784u) {
        ctx->pc = 0x40C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C780u;
        // 0x40c784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C788u;
        goto label_40c788;
    }
    ctx->pc = 0x40C780u;
    {
        const bool branch_taken_0x40c780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C780u;
        // 0x40c784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c780) {
            ctx->pc = 0x40C78Cu;
            goto label_40c78c;
        }
    }
    ctx->pc = 0x40C788u;
label_40c788:
    // 0x40c788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40c788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c78c:
    // 0x40c78c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_40c790:
    if (ctx->pc == 0x40C790u) {
        ctx->pc = 0x40C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C78Cu;
        // 0x40c790: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C794u;
        goto label_40c794;
    }
    ctx->pc = 0x40C78Cu;
    {
        const bool branch_taken_0x40c78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c78c) {
            ctx->pc = 0x40C790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C78Cu;
            // 0x40c790: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C7B0u;
            goto label_40c7b0;
        }
    }
    ctx->pc = 0x40C794u;
label_40c794:
    // 0x40c794: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x40c794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c798:
    // 0x40c798: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x40c798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40c79c:
    // 0x40c79c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x40c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c7a0:
    // 0x40c7a0: 0xc103154  jal         func_40C550
label_40c7a4:
    if (ctx->pc == 0x40C7A4u) {
        ctx->pc = 0x40C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7A0u;
        // 0x40c7a4: 0x24c6fff4  addiu       $a2, $a2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C7A8u;
        goto label_40c7a8;
    }
    ctx->pc = 0x40C7A0u;
    SET_GPR_U32(ctx, 31, 0x40C7A8u);
    ctx->pc = 0x40C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C7A0u;
    // 0x40c7a4: 0x24c6fff4  addiu       $a2, $a2, -0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C550u;
    goto label_40c550;
    ctx->pc = 0x40C7A8u;
label_40c7a8:
    // 0x40c7a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x40c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_40c7ac:
    // 0x40c7ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x40c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40c7b0:
    // 0x40c7b0: 0xc1048ec  jal         func_4123B0
label_40c7b4:
    if (ctx->pc == 0x40C7B4u) {
        ctx->pc = 0x40C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7B0u;
        // 0x40c7b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C7B8u;
        goto label_40c7b8;
    }
    ctx->pc = 0x40C7B0u;
    SET_GPR_U32(ctx, 31, 0x40C7B8u);
    ctx->pc = 0x40C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C7B0u;
    // 0x40c7b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x40C7B0u, 0x40C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C7B8u;
label_40c7b8:
    // 0x40c7b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x40c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40c7bc:
    // 0x40c7bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x40c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c7c0:
    // 0x40c7c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40c7c4:
    // 0x40c7c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40c7c8:
    // 0x40c7c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40c7cc:
    // 0x40c7cc: 0xc1033a6  jal         func_40CE98
label_40c7d0:
    if (ctx->pc == 0x40C7D0u) {
        ctx->pc = 0x40C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7CCu;
        // 0x40c7d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C7D4u;
        goto label_40c7d4;
    }
    ctx->pc = 0x40C7CCu;
    SET_GPR_U32(ctx, 31, 0x40C7D4u);
    ctx->pc = 0x40C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C7CCu;
    // 0x40c7d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CE98u, 0x40C7CCu, 0x40C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C7D4u;
label_40c7d4:
    // 0x40c7d4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_40c7d8:
    if (ctx->pc == 0x40C7D8u) {
        ctx->pc = 0x40C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7D4u;
        // 0x40c7d8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C7DCu;
        goto label_40c7dc;
    }
    ctx->pc = 0x40C7D4u;
    {
        const bool branch_taken_0x40c7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7D4u;
        // 0x40c7d8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c7d4) {
            ctx->pc = 0x40C740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40c740;
        }
    }
    ctx->pc = 0x40C7DCu;
label_40c7dc:
    // 0x40c7dc: 0x8fb00044  lw          $s0, 0x44($sp)
    ctx->pc = 0x40c7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_40c7e0:
    // 0x40c7e0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x40c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40c7e4:
    // 0x40c7e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x40c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c7e8:
    // 0x40c7e8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x40c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_40c7ec:
    // 0x40c7ec: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x40c7ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_40c7f0:
    // 0x40c7f0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x40c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_40c7f4:
    // 0x40c7f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x40c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40c7f8:
    // 0x40c7f8: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
label_40c7fc:
    if (ctx->pc == 0x40C7FCu) {
        ctx->pc = 0x40C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7F8u;
        // 0x40c7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C800u;
        goto label_40c800;
    }
    ctx->pc = 0x40C7F8u;
    {
        const bool branch_taken_0x40c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x40C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7F8u;
        // 0x40c7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c7f8) {
            ctx->pc = 0x40C858u;
            goto label_40c858;
        }
    }
    ctx->pc = 0x40C800u;
label_40c800:
    // 0x40c800: 0xc1032a2  jal         func_40CA88
label_40c804:
    if (ctx->pc == 0x40C804u) {
        ctx->pc = 0x40C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C800u;
        // 0x40c804: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C808u;
        goto label_40c808;
    }
    ctx->pc = 0x40C800u;
    SET_GPR_U32(ctx, 31, 0x40C808u);
    ctx->pc = 0x40C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C800u;
    // 0x40c804: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA88u, 0x40C800u, 0x40C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C808u;
label_40c808:
    // 0x40c808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40c808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c80c:
    // 0x40c80c: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x40c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_40c810:
    // 0x40c810: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x40c810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_40c814:
    // 0x40c814: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x40c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_40c818:
    // 0x40c818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c81c:
    // 0x40c81c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40c81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40c820:
    // 0x40c820: 0x40f809  jalr        $v0
label_40c824:
    if (ctx->pc == 0x40C824u) {
        ctx->pc = 0x40C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C820u;
        // 0x40c824: 0x34c60024  ori         $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C828u;
        goto label_40c828;
    }
    ctx->pc = 0x40C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40C828u);
        ctx->pc = 0x40C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C820u;
        // 0x40c824: 0x34c60024  ori         $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C820u, 0x40C828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C828u;
label_40c828:
    // 0x40c828: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_40c82c:
    if (ctx->pc == 0x40C82Cu) {
        ctx->pc = 0x40C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C828u;
        // 0x40c82c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C830u;
        goto label_40c830;
    }
    ctx->pc = 0x40C828u;
    {
        const bool branch_taken_0x40c828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C828u;
        // 0x40c82c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c828) {
            ctx->pc = 0x40C858u;
            goto label_40c858;
        }
    }
    ctx->pc = 0x40C830u;
label_40c830:
    // 0x40c830: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x40c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_40c834:
    // 0x40c834: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40c834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40c838:
    // 0x40c838: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x40c838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_40c83c:
    // 0x40c83c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40c83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40c840:
    // 0x40c840: 0xc1035f6  jal         func_40D7D8
label_40c844:
    if (ctx->pc == 0x40C844u) {
        ctx->pc = 0x40C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C840u;
        // 0x40c844: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C848u;
        goto label_40c848;
    }
    ctx->pc = 0x40C840u;
    SET_GPR_U32(ctx, 31, 0x40C848u);
    ctx->pc = 0x40C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C840u;
    // 0x40c844: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40C840u, 0x40C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C848u;
label_40c848:
    // 0x40c848: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x40c848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_40c84c:
    // 0x40c84c: 0xc103628  jal         func_40D8A0
label_40c850:
    if (ctx->pc == 0x40C850u) {
        ctx->pc = 0x40C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C84Cu;
        // 0x40c850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C854u;
        goto label_40c854;
    }
    ctx->pc = 0x40C84Cu;
    SET_GPR_U32(ctx, 31, 0x40C854u);
    ctx->pc = 0x40C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C84Cu;
    // 0x40c850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40C84Cu, 0x40C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C854u;
label_40c854:
    // 0x40c854: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x40c854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c858:
    // 0x40c858: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_40c85c:
    if (ctx->pc == 0x40C85Cu) {
        ctx->pc = 0x40C860u;
        goto label_40c860;
    }
    ctx->pc = 0x40C858u;
    {
        const bool branch_taken_0x40c858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c858) {
            ctx->pc = 0x40C870u;
            goto label_40c870;
        }
    }
    ctx->pc = 0x40C860u;
label_40c860:
    // 0x40c860: 0xc103290  jal         func_40CA40
label_40c864:
    if (ctx->pc == 0x40C864u) {
        ctx->pc = 0x40C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C860u;
        // 0x40c864: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C868u;
        goto label_40c868;
    }
    ctx->pc = 0x40C860u;
    SET_GPR_U32(ctx, 31, 0x40C868u);
    ctx->pc = 0x40C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C860u;
    // 0x40c864: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA40u, 0x40C860u, 0x40C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C868u;
label_40c868:
    // 0x40c868: 0x10000012  b           . + 4 + (0x12 << 2)
label_40c86c:
    if (ctx->pc == 0x40C86Cu) {
        ctx->pc = 0x40C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C868u;
        // 0x40c86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C870u;
        goto label_40c870;
    }
    ctx->pc = 0x40C868u;
    {
        const bool branch_taken_0x40c868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C868u;
        // 0x40c86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c868) {
            ctx->pc = 0x40C8B4u;
            goto label_40c8b4;
        }
    }
    ctx->pc = 0x40C870u;
label_40c870:
    // 0x40c870: 0xc1032a2  jal         func_40CA88
label_40c874:
    if (ctx->pc == 0x40C874u) {
        ctx->pc = 0x40C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C870u;
        // 0x40c874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C878u;
        goto label_40c878;
    }
    ctx->pc = 0x40C870u;
    SET_GPR_U32(ctx, 31, 0x40C878u);
    ctx->pc = 0x40C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C870u;
    // 0x40c874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA88u, 0x40C870u, 0x40C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C878u;
label_40c878:
    // 0x40c878: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x40c878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_40c87c:
    // 0x40c87c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c880:
    // 0x40c880: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_40c884:
    if (ctx->pc == 0x40C884u) {
        ctx->pc = 0x40C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C880u;
        // 0x40c884: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C888u;
        goto label_40c888;
    }
    ctx->pc = 0x40C880u;
    {
        const bool branch_taken_0x40c880 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x40C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C880u;
        // 0x40c884: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c880) {
            ctx->pc = 0x40C8B0u;
            goto label_40c8b0;
        }
    }
    ctx->pc = 0x40C888u;
label_40c888:
    // 0x40c888: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x40c888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_40c88c:
    // 0x40c88c: 0x0  nop
    ctx->pc = 0x40c88cu;
    // NOP
label_40c890:
    // 0x40c890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40c894:
    // 0x40c894: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x40c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_40c898:
    // 0x40c898: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x40c898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_40c89c:
    // 0x40c89c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x40c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_40c8a0:
    // 0x40c8a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c8a4:
    // 0x40c8a4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x40c8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_40c8a8:
    // 0x40c8a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_40c8ac:
    if (ctx->pc == 0x40C8ACu) {
        ctx->pc = 0x40C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8A8u;
        // 0x40c8ac: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C8B0u;
        goto label_40c8b0;
    }
    ctx->pc = 0x40C8A8u;
    {
        const bool branch_taken_0x40c8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8A8u;
        // 0x40c8ac: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c8a8) {
            ctx->pc = 0x40C890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40c890;
        }
    }
    ctx->pc = 0x40C8B0u;
label_40c8b0:
    // 0x40c8b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40c8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c8b4:
    // 0x40c8b4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x40c8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_40c8b8:
    // 0x40c8b8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x40c8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_40c8bc:
    // 0x40c8bc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x40c8bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40c8c0:
    // 0x40c8c0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x40c8c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40c8c4:
    // 0x40c8c4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x40c8c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40c8c8:
    // 0x40c8c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x40c8c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40c8cc:
    // 0x40c8cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x40c8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_40c8d0:
    // 0x40c8d0: 0x3e00008  jr          $ra
label_40c8d4:
    if (ctx->pc == 0x40C8D4u) {
        ctx->pc = 0x40C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8D0u;
        // 0x40c8d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C8D8u;
        goto label_fallthrough_0x40c8d0;
    }
    ctx->pc = 0x40C8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8D0u;
        // 0x40c8d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40c8d0:
    ctx->pc = 0x40C8D8u;
}
