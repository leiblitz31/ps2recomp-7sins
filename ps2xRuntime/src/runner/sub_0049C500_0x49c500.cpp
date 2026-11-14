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

// Function: sub_0049C500
// Address: 0x49c500 - 0x49c8f8
void sub_0049C500_0x49c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C500_0x49c500");
#endif

    switch (ctx->pc) {
        case 0x49c500u: goto label_49c500;
        case 0x49c504u: goto label_49c504;
        case 0x49c508u: goto label_49c508;
        case 0x49c50cu: goto label_49c50c;
        case 0x49c510u: goto label_49c510;
        case 0x49c514u: goto label_49c514;
        case 0x49c518u: goto label_49c518;
        case 0x49c51cu: goto label_49c51c;
        case 0x49c520u: goto label_49c520;
        case 0x49c524u: goto label_49c524;
        case 0x49c528u: goto label_49c528;
        case 0x49c52cu: goto label_49c52c;
        case 0x49c530u: goto label_49c530;
        case 0x49c534u: goto label_49c534;
        case 0x49c538u: goto label_49c538;
        case 0x49c53cu: goto label_49c53c;
        case 0x49c540u: goto label_49c540;
        case 0x49c544u: goto label_49c544;
        case 0x49c548u: goto label_49c548;
        case 0x49c54cu: goto label_49c54c;
        case 0x49c550u: goto label_49c550;
        case 0x49c554u: goto label_49c554;
        case 0x49c558u: goto label_49c558;
        case 0x49c55cu: goto label_49c55c;
        case 0x49c560u: goto label_49c560;
        case 0x49c564u: goto label_49c564;
        case 0x49c568u: goto label_49c568;
        case 0x49c56cu: goto label_49c56c;
        case 0x49c570u: goto label_49c570;
        case 0x49c574u: goto label_49c574;
        case 0x49c578u: goto label_49c578;
        case 0x49c57cu: goto label_49c57c;
        case 0x49c580u: goto label_49c580;
        case 0x49c584u: goto label_49c584;
        case 0x49c588u: goto label_49c588;
        case 0x49c58cu: goto label_49c58c;
        case 0x49c590u: goto label_49c590;
        case 0x49c594u: goto label_49c594;
        case 0x49c598u: goto label_49c598;
        case 0x49c59cu: goto label_49c59c;
        case 0x49c5a0u: goto label_49c5a0;
        case 0x49c5a4u: goto label_49c5a4;
        case 0x49c5a8u: goto label_49c5a8;
        case 0x49c5acu: goto label_49c5ac;
        case 0x49c5b0u: goto label_49c5b0;
        case 0x49c5b4u: goto label_49c5b4;
        case 0x49c5b8u: goto label_49c5b8;
        case 0x49c5bcu: goto label_49c5bc;
        case 0x49c5c0u: goto label_49c5c0;
        case 0x49c5c4u: goto label_49c5c4;
        case 0x49c5c8u: goto label_49c5c8;
        case 0x49c5ccu: goto label_49c5cc;
        case 0x49c5d0u: goto label_49c5d0;
        case 0x49c5d4u: goto label_49c5d4;
        case 0x49c5d8u: goto label_49c5d8;
        case 0x49c5dcu: goto label_49c5dc;
        case 0x49c5e0u: goto label_49c5e0;
        case 0x49c5e4u: goto label_49c5e4;
        case 0x49c5e8u: goto label_49c5e8;
        case 0x49c5ecu: goto label_49c5ec;
        case 0x49c5f0u: goto label_49c5f0;
        case 0x49c5f4u: goto label_49c5f4;
        case 0x49c5f8u: goto label_49c5f8;
        case 0x49c5fcu: goto label_49c5fc;
        case 0x49c600u: goto label_49c600;
        case 0x49c604u: goto label_49c604;
        case 0x49c608u: goto label_49c608;
        case 0x49c60cu: goto label_49c60c;
        case 0x49c610u: goto label_49c610;
        case 0x49c614u: goto label_49c614;
        case 0x49c618u: goto label_49c618;
        case 0x49c61cu: goto label_49c61c;
        case 0x49c620u: goto label_49c620;
        case 0x49c624u: goto label_49c624;
        case 0x49c628u: goto label_49c628;
        case 0x49c62cu: goto label_49c62c;
        case 0x49c630u: goto label_49c630;
        case 0x49c634u: goto label_49c634;
        case 0x49c638u: goto label_49c638;
        case 0x49c63cu: goto label_49c63c;
        case 0x49c640u: goto label_49c640;
        case 0x49c644u: goto label_49c644;
        case 0x49c648u: goto label_49c648;
        case 0x49c64cu: goto label_49c64c;
        case 0x49c650u: goto label_49c650;
        case 0x49c654u: goto label_49c654;
        case 0x49c658u: goto label_49c658;
        case 0x49c65cu: goto label_49c65c;
        case 0x49c660u: goto label_49c660;
        case 0x49c664u: goto label_49c664;
        case 0x49c668u: goto label_49c668;
        case 0x49c66cu: goto label_49c66c;
        case 0x49c670u: goto label_49c670;
        case 0x49c674u: goto label_49c674;
        case 0x49c678u: goto label_49c678;
        case 0x49c67cu: goto label_49c67c;
        case 0x49c680u: goto label_49c680;
        case 0x49c684u: goto label_49c684;
        case 0x49c688u: goto label_49c688;
        case 0x49c68cu: goto label_49c68c;
        case 0x49c690u: goto label_49c690;
        case 0x49c694u: goto label_49c694;
        case 0x49c698u: goto label_49c698;
        case 0x49c69cu: goto label_49c69c;
        case 0x49c6a0u: goto label_49c6a0;
        case 0x49c6a4u: goto label_49c6a4;
        case 0x49c6a8u: goto label_49c6a8;
        case 0x49c6acu: goto label_49c6ac;
        case 0x49c6b0u: goto label_49c6b0;
        case 0x49c6b4u: goto label_49c6b4;
        case 0x49c6b8u: goto label_49c6b8;
        case 0x49c6bcu: goto label_49c6bc;
        case 0x49c6c0u: goto label_49c6c0;
        case 0x49c6c4u: goto label_49c6c4;
        case 0x49c6c8u: goto label_49c6c8;
        case 0x49c6ccu: goto label_49c6cc;
        case 0x49c6d0u: goto label_49c6d0;
        case 0x49c6d4u: goto label_49c6d4;
        case 0x49c6d8u: goto label_49c6d8;
        case 0x49c6dcu: goto label_49c6dc;
        case 0x49c6e0u: goto label_49c6e0;
        case 0x49c6e4u: goto label_49c6e4;
        case 0x49c6e8u: goto label_49c6e8;
        case 0x49c6ecu: goto label_49c6ec;
        case 0x49c6f0u: goto label_49c6f0;
        case 0x49c6f4u: goto label_49c6f4;
        case 0x49c6f8u: goto label_49c6f8;
        case 0x49c6fcu: goto label_49c6fc;
        case 0x49c700u: goto label_49c700;
        case 0x49c704u: goto label_49c704;
        case 0x49c708u: goto label_49c708;
        case 0x49c70cu: goto label_49c70c;
        case 0x49c710u: goto label_49c710;
        case 0x49c714u: goto label_49c714;
        case 0x49c718u: goto label_49c718;
        case 0x49c71cu: goto label_49c71c;
        case 0x49c720u: goto label_49c720;
        case 0x49c724u: goto label_49c724;
        case 0x49c728u: goto label_49c728;
        case 0x49c72cu: goto label_49c72c;
        case 0x49c730u: goto label_49c730;
        case 0x49c734u: goto label_49c734;
        case 0x49c738u: goto label_49c738;
        case 0x49c73cu: goto label_49c73c;
        case 0x49c740u: goto label_49c740;
        case 0x49c744u: goto label_49c744;
        case 0x49c748u: goto label_49c748;
        case 0x49c74cu: goto label_49c74c;
        case 0x49c750u: goto label_49c750;
        case 0x49c754u: goto label_49c754;
        case 0x49c758u: goto label_49c758;
        case 0x49c75cu: goto label_49c75c;
        case 0x49c760u: goto label_49c760;
        case 0x49c764u: goto label_49c764;
        case 0x49c768u: goto label_49c768;
        case 0x49c76cu: goto label_49c76c;
        case 0x49c770u: goto label_49c770;
        case 0x49c774u: goto label_49c774;
        case 0x49c778u: goto label_49c778;
        case 0x49c77cu: goto label_49c77c;
        case 0x49c780u: goto label_49c780;
        case 0x49c784u: goto label_49c784;
        case 0x49c788u: goto label_49c788;
        case 0x49c78cu: goto label_49c78c;
        case 0x49c790u: goto label_49c790;
        case 0x49c794u: goto label_49c794;
        case 0x49c798u: goto label_49c798;
        case 0x49c79cu: goto label_49c79c;
        case 0x49c7a0u: goto label_49c7a0;
        case 0x49c7a4u: goto label_49c7a4;
        case 0x49c7a8u: goto label_49c7a8;
        case 0x49c7acu: goto label_49c7ac;
        case 0x49c7b0u: goto label_49c7b0;
        case 0x49c7b4u: goto label_49c7b4;
        case 0x49c7b8u: goto label_49c7b8;
        case 0x49c7bcu: goto label_49c7bc;
        case 0x49c7c0u: goto label_49c7c0;
        case 0x49c7c4u: goto label_49c7c4;
        case 0x49c7c8u: goto label_49c7c8;
        case 0x49c7ccu: goto label_49c7cc;
        case 0x49c7d0u: goto label_49c7d0;
        case 0x49c7d4u: goto label_49c7d4;
        case 0x49c7d8u: goto label_49c7d8;
        case 0x49c7dcu: goto label_49c7dc;
        case 0x49c7e0u: goto label_49c7e0;
        case 0x49c7e4u: goto label_49c7e4;
        case 0x49c7e8u: goto label_49c7e8;
        case 0x49c7ecu: goto label_49c7ec;
        case 0x49c7f0u: goto label_49c7f0;
        case 0x49c7f4u: goto label_49c7f4;
        case 0x49c7f8u: goto label_49c7f8;
        case 0x49c7fcu: goto label_49c7fc;
        case 0x49c800u: goto label_49c800;
        case 0x49c804u: goto label_49c804;
        case 0x49c808u: goto label_49c808;
        case 0x49c80cu: goto label_49c80c;
        case 0x49c810u: goto label_49c810;
        case 0x49c814u: goto label_49c814;
        case 0x49c818u: goto label_49c818;
        case 0x49c81cu: goto label_49c81c;
        case 0x49c820u: goto label_49c820;
        case 0x49c824u: goto label_49c824;
        case 0x49c828u: goto label_49c828;
        case 0x49c82cu: goto label_49c82c;
        case 0x49c830u: goto label_49c830;
        case 0x49c834u: goto label_49c834;
        case 0x49c838u: goto label_49c838;
        case 0x49c83cu: goto label_49c83c;
        case 0x49c840u: goto label_49c840;
        case 0x49c844u: goto label_49c844;
        case 0x49c848u: goto label_49c848;
        case 0x49c84cu: goto label_49c84c;
        case 0x49c850u: goto label_49c850;
        case 0x49c854u: goto label_49c854;
        case 0x49c858u: goto label_49c858;
        case 0x49c85cu: goto label_49c85c;
        case 0x49c860u: goto label_49c860;
        case 0x49c864u: goto label_49c864;
        case 0x49c868u: goto label_49c868;
        case 0x49c86cu: goto label_49c86c;
        case 0x49c870u: goto label_49c870;
        case 0x49c874u: goto label_49c874;
        case 0x49c878u: goto label_49c878;
        case 0x49c87cu: goto label_49c87c;
        case 0x49c880u: goto label_49c880;
        case 0x49c884u: goto label_49c884;
        case 0x49c888u: goto label_49c888;
        case 0x49c88cu: goto label_49c88c;
        case 0x49c890u: goto label_49c890;
        case 0x49c894u: goto label_49c894;
        case 0x49c898u: goto label_49c898;
        case 0x49c89cu: goto label_49c89c;
        case 0x49c8a0u: goto label_49c8a0;
        case 0x49c8a4u: goto label_49c8a4;
        case 0x49c8a8u: goto label_49c8a8;
        case 0x49c8acu: goto label_49c8ac;
        case 0x49c8b0u: goto label_49c8b0;
        case 0x49c8b4u: goto label_49c8b4;
        case 0x49c8b8u: goto label_49c8b8;
        case 0x49c8bcu: goto label_49c8bc;
        case 0x49c8c0u: goto label_49c8c0;
        case 0x49c8c4u: goto label_49c8c4;
        case 0x49c8c8u: goto label_49c8c8;
        case 0x49c8ccu: goto label_49c8cc;
        case 0x49c8d0u: goto label_49c8d0;
        case 0x49c8d4u: goto label_49c8d4;
        case 0x49c8d8u: goto label_49c8d8;
        case 0x49c8dcu: goto label_49c8dc;
        case 0x49c8e0u: goto label_49c8e0;
        case 0x49c8e4u: goto label_49c8e4;
        case 0x49c8e8u: goto label_49c8e8;
        case 0x49c8ecu: goto label_49c8ec;
        case 0x49c8f0u: goto label_49c8f0;
        case 0x49c8f4u: goto label_49c8f4;
        default: break;
    }

    ctx->pc = 0x49c500u;

label_49c500:
    // 0x49c500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49c500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49c504:
    // 0x49c504: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x49c504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49c508:
    // 0x49c508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49c508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49c50c:
    // 0x49c50c: 0x14c20027  bne         $a2, $v0, . + 4 + (0x27 << 2)
label_49c510:
    if (ctx->pc == 0x49C510u) {
        ctx->pc = 0x49C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C50Cu;
        // 0x49c510: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C514u;
        goto label_49c514;
    }
    ctx->pc = 0x49C50Cu;
    {
        const bool branch_taken_0x49c50c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C50Cu;
        // 0x49c510: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c50c) {
            ctx->pc = 0x49C5ACu;
            goto label_49c5ac;
        }
    }
    ctx->pc = 0x49C514u;
label_49c514:
    // 0x49c514: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x49c514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49c518:
    // 0x49c518: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_49c51c:
    if (ctx->pc == 0x49C51Cu) {
        ctx->pc = 0x49C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C518u;
        // 0x49c51c: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C520u;
        goto label_49c520;
    }
    ctx->pc = 0x49C518u;
    {
        const bool branch_taken_0x49c518 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C518u;
        // 0x49c51c: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c518) {
            ctx->pc = 0x49C560u;
            goto label_49c560;
        }
    }
    ctx->pc = 0x49C520u;
label_49c520:
    // 0x49c520: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49c520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49c524:
    // 0x49c524: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49c528:
    if (ctx->pc == 0x49C528u) {
        ctx->pc = 0x49C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C524u;
        // 0x49c528: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C52Cu;
        goto label_49c52c;
    }
    ctx->pc = 0x49C524u;
    {
        const bool branch_taken_0x49c524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C524u;
        // 0x49c528: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c524) {
            ctx->pc = 0x49C548u;
            goto label_49c548;
        }
    }
    ctx->pc = 0x49C52Cu;
label_49c52c:
    // 0x49c52c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c530:
    // 0x49c530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49c534:
    // 0x49c534: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49c538:
    // 0x49c538: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49c53c:
    // 0x49c53c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49c540:
    // 0x49c540: 0x1000000b  b           . + 4 + (0xB << 2)
label_49c544:
    if (ctx->pc == 0x49C544u) {
        ctx->pc = 0x49C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C540u;
        // 0x49c544: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C548u;
        goto label_49c548;
    }
    ctx->pc = 0x49C540u;
    {
        const bool branch_taken_0x49c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C540u;
        // 0x49c544: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c540) {
            ctx->pc = 0x49C570u;
            goto label_49c570;
        }
    }
    ctx->pc = 0x49C548u;
label_49c548:
    // 0x49c548: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c54c:
    // 0x49c54c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49c550:
    // 0x49c550: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49c554:
    // 0x49c554: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49c558:
    // 0x49c558: 0x10000005  b           . + 4 + (0x5 << 2)
label_49c55c:
    if (ctx->pc == 0x49C55Cu) {
        ctx->pc = 0x49C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C558u;
        // 0x49c55c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C560u;
        goto label_49c560;
    }
    ctx->pc = 0x49C558u;
    {
        const bool branch_taken_0x49c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C558u;
        // 0x49c55c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c558) {
            ctx->pc = 0x49C570u;
            goto label_49c570;
        }
    }
    ctx->pc = 0x49C560u;
label_49c560:
    // 0x49c560: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_49c564:
    // 0x49c564: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49c564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_49c568:
    // 0x49c568: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49c568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_49c56c:
    // 0x49c56c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49c56cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49c570:
    // 0x49c570: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_49c574:
    // 0x49c574: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49c574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c578:
    // 0x49c578: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49c578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49c57c:
    // 0x49c57c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c580:
    // 0x49c580: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49c580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49c584:
    // 0x49c584: 0x10870013  beq         $a0, $a3, . + 4 + (0x13 << 2)
label_49c588:
    if (ctx->pc == 0x49C588u) {
        ctx->pc = 0x49C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C584u;
        // 0x49c588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C58Cu;
        goto label_49c58c;
    }
    ctx->pc = 0x49C584u;
    {
        const bool branch_taken_0x49c584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x49C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C584u;
        // 0x49c588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c584) {
            ctx->pc = 0x49C5D4u;
            goto label_49c5d4;
        }
    }
    ctx->pc = 0x49C58Cu;
label_49c58c:
    // 0x49c58c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49c590:
    // 0x49c590: 0x24e3ffec  addiu       $v1, $a3, -0x14
    ctx->pc = 0x49c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_49c594:
    // 0x49c594: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49c594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49c598:
    // 0x49c598: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49c598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_49c59c:
    // 0x49c59c: 0x8ce4ffec  lw          $a0, -0x14($a3)
    ctx->pc = 0x49c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_49c5a0:
    // 0x49c5a0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x49c5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_49c5a4:
    // 0x49c5a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_49c5a8:
    if (ctx->pc == 0x49C5A8u) {
        ctx->pc = 0x49C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5A4u;
        // 0x49c5a8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C5ACu;
        goto label_49c5ac;
    }
    ctx->pc = 0x49C5A4u;
    {
        const bool branch_taken_0x49c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5A4u;
        // 0x49c5a8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c5a4) {
            ctx->pc = 0x49C5CCu;
            goto label_49c5cc;
        }
    }
    ctx->pc = 0x49C5ACu;
label_49c5ac:
    // 0x49c5ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c5b0:
    // 0x49c5b0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c5b4:
    // 0x49c5b4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c5b8:
    // 0x49c5b8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49c5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49c5bc:
    // 0x49c5bc: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c5c0:
    // 0x49c5c0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x49c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_49c5c4:
    // 0x49c5c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c5c8:
    // 0x49c5c8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c5cc:
    // 0x49c5cc: 0x40f809  jalr        $v0
label_49c5d0:
    if (ctx->pc == 0x49C5D0u) {
        ctx->pc = 0x49C5D4u;
        goto label_49c5d4;
    }
    ctx->pc = 0x49C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C5D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C5CCu, 0x49C5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C5D4u;
label_49c5d4:
    // 0x49c5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49c5d8:
    // 0x49c5d8: 0x3e00008  jr          $ra
label_49c5dc:
    if (ctx->pc == 0x49C5DCu) {
        ctx->pc = 0x49C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5D8u;
        // 0x49c5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C5E0u;
        goto label_49c5e0;
    }
    ctx->pc = 0x49C5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5D8u;
        // 0x49c5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C5E0u;
label_49c5e0:
    // 0x49c5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c5e4:
    // 0x49c5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c5e8:
    // 0x49c5e8: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x49c5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
label_49c5ec:
    // 0x49c5ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c5f0:
    if (ctx->pc == 0x49C5F0u) {
        ctx->pc = 0x49C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5ECu;
        // 0x49c5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C5F4u;
        goto label_49c5f4;
    }
    ctx->pc = 0x49C5ECu;
    {
        const bool branch_taken_0x49c5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5ECu;
        // 0x49c5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c5ec) {
            ctx->pc = 0x49C618u;
            goto label_49c618;
        }
    }
    ctx->pc = 0x49C5F4u;
label_49c5f4:
    // 0x49c5f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c5f8:
    // 0x49c5f8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c5fc:
    // 0x49c5fc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c600:
    // 0x49c600: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c604:
    // 0x49c604: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c608:
    // 0x49c608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c60c:
    // 0x49c60c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c610:
    // 0x49c610: 0x40f809  jalr        $v0
label_49c614:
    if (ctx->pc == 0x49C614u) {
        ctx->pc = 0x49C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C610u;
        // 0x49c614: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C618u;
        goto label_49c618;
    }
    ctx->pc = 0x49C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C618u);
        ctx->pc = 0x49C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C610u;
        // 0x49c614: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C610u, 0x49C618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C618u;
label_49c618:
    // 0x49c618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c61c:
    // 0x49c61c: 0x3e00008  jr          $ra
label_49c620:
    if (ctx->pc == 0x49C620u) {
        ctx->pc = 0x49C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C61Cu;
        // 0x49c620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C624u;
        goto label_49c624;
    }
    ctx->pc = 0x49C61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C61Cu;
        // 0x49c620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C624u;
label_49c624:
    // 0x49c624: 0x0  nop
    ctx->pc = 0x49c624u;
    // NOP
label_49c628:
    // 0x49c628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c62c:
    // 0x49c62c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c630:
    // 0x49c630: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x49c630u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
label_49c634:
    // 0x49c634: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c638:
    if (ctx->pc == 0x49C638u) {
        ctx->pc = 0x49C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C634u;
        // 0x49c638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C63Cu;
        goto label_49c63c;
    }
    ctx->pc = 0x49C634u;
    {
        const bool branch_taken_0x49c634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C634u;
        // 0x49c638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c634) {
            ctx->pc = 0x49C660u;
            goto label_49c660;
        }
    }
    ctx->pc = 0x49C63Cu;
label_49c63c:
    // 0x49c63c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c640:
    // 0x49c640: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c644:
    // 0x49c644: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c648:
    // 0x49c648: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c64c:
    // 0x49c64c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c650:
    // 0x49c650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c654:
    // 0x49c654: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c658:
    // 0x49c658: 0x40f809  jalr        $v0
label_49c65c:
    if (ctx->pc == 0x49C65Cu) {
        ctx->pc = 0x49C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C658u;
        // 0x49c65c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C660u;
        goto label_49c660;
    }
    ctx->pc = 0x49C658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C660u);
        ctx->pc = 0x49C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C658u;
        // 0x49c65c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C658u, 0x49C660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C660u;
label_49c660:
    // 0x49c660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c664:
    // 0x49c664: 0x3e00008  jr          $ra
label_49c668:
    if (ctx->pc == 0x49C668u) {
        ctx->pc = 0x49C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C664u;
        // 0x49c668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C66Cu;
        goto label_49c66c;
    }
    ctx->pc = 0x49C664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C664u;
        // 0x49c668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C66Cu;
label_49c66c:
    // 0x49c66c: 0x0  nop
    ctx->pc = 0x49c66cu;
    // NOP
label_49c670:
    // 0x49c670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c674:
    // 0x49c674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c678:
    // 0x49c678: 0xa7a70000  sh          $a3, 0x0($sp)
    ctx->pc = 0x49c678u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 7));
label_49c67c:
    // 0x49c67c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c680:
    if (ctx->pc == 0x49C680u) {
        ctx->pc = 0x49C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C67Cu;
        // 0x49c680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C684u;
        goto label_49c684;
    }
    ctx->pc = 0x49C67Cu;
    {
        const bool branch_taken_0x49c67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C67Cu;
        // 0x49c680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c67c) {
            ctx->pc = 0x49C6A8u;
            goto label_49c6a8;
        }
    }
    ctx->pc = 0x49C684u;
label_49c684:
    // 0x49c684: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c688:
    // 0x49c688: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c68c:
    // 0x49c68c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c690:
    // 0x49c690: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c694:
    // 0x49c694: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c698:
    // 0x49c698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c69c:
    // 0x49c69c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c6a0:
    // 0x49c6a0: 0x40f809  jalr        $v0
label_49c6a4:
    if (ctx->pc == 0x49C6A4u) {
        ctx->pc = 0x49C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6A0u;
        // 0x49c6a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C6A8u;
        goto label_49c6a8;
    }
    ctx->pc = 0x49C6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C6A8u);
        ctx->pc = 0x49C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6A0u;
        // 0x49c6a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C6A0u, 0x49C6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C6A8u;
label_49c6a8:
    // 0x49c6a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c6ac:
    // 0x49c6ac: 0x3e00008  jr          $ra
label_49c6b0:
    if (ctx->pc == 0x49C6B0u) {
        ctx->pc = 0x49C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6ACu;
        // 0x49c6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C6B4u;
        goto label_49c6b4;
    }
    ctx->pc = 0x49C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6ACu;
        // 0x49c6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C6B4u;
label_49c6b4:
    // 0x49c6b4: 0x0  nop
    ctx->pc = 0x49c6b4u;
    // NOP
label_49c6b8:
    // 0x49c6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c6bc:
    // 0x49c6bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c6c0:
    // 0x49c6c0: 0xa7a70000  sh          $a3, 0x0($sp)
    ctx->pc = 0x49c6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 7));
label_49c6c4:
    // 0x49c6c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c6c8:
    if (ctx->pc == 0x49C6C8u) {
        ctx->pc = 0x49C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6C4u;
        // 0x49c6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C6CCu;
        goto label_49c6cc;
    }
    ctx->pc = 0x49C6C4u;
    {
        const bool branch_taken_0x49c6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6C4u;
        // 0x49c6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c6c4) {
            ctx->pc = 0x49C6F0u;
            goto label_49c6f0;
        }
    }
    ctx->pc = 0x49C6CCu;
label_49c6cc:
    // 0x49c6cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c6d0:
    // 0x49c6d0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c6d4:
    // 0x49c6d4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c6d8:
    // 0x49c6d8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c6dc:
    // 0x49c6dc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c6e0:
    // 0x49c6e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c6e4:
    // 0x49c6e4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c6e8:
    // 0x49c6e8: 0x40f809  jalr        $v0
label_49c6ec:
    if (ctx->pc == 0x49C6ECu) {
        ctx->pc = 0x49C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6E8u;
        // 0x49c6ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C6F0u;
        goto label_49c6f0;
    }
    ctx->pc = 0x49C6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C6F0u);
        ctx->pc = 0x49C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6E8u;
        // 0x49c6ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C6E8u, 0x49C6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C6F0u;
label_49c6f0:
    // 0x49c6f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c6f4:
    // 0x49c6f4: 0x3e00008  jr          $ra
label_49c6f8:
    if (ctx->pc == 0x49C6F8u) {
        ctx->pc = 0x49C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6F4u;
        // 0x49c6f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C6FCu;
        goto label_49c6fc;
    }
    ctx->pc = 0x49C6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6F4u;
        // 0x49c6f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C6FCu;
label_49c6fc:
    // 0x49c6fc: 0x0  nop
    ctx->pc = 0x49c6fcu;
    // NOP
label_49c700:
    // 0x49c700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c704:
    // 0x49c704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c708:
    // 0x49c708: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x49c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_49c70c:
    // 0x49c70c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c710:
    if (ctx->pc == 0x49C710u) {
        ctx->pc = 0x49C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C70Cu;
        // 0x49c710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C714u;
        goto label_49c714;
    }
    ctx->pc = 0x49C70Cu;
    {
        const bool branch_taken_0x49c70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C70Cu;
        // 0x49c710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c70c) {
            ctx->pc = 0x49C738u;
            goto label_49c738;
        }
    }
    ctx->pc = 0x49C714u;
label_49c714:
    // 0x49c714: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c718:
    // 0x49c718: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c71c:
    // 0x49c71c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c720:
    // 0x49c720: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c724:
    // 0x49c724: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c728:
    // 0x49c728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c72c:
    // 0x49c72c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c730:
    // 0x49c730: 0x40f809  jalr        $v0
label_49c734:
    if (ctx->pc == 0x49C734u) {
        ctx->pc = 0x49C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C730u;
        // 0x49c734: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C738u;
        goto label_49c738;
    }
    ctx->pc = 0x49C730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C738u);
        ctx->pc = 0x49C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C730u;
        // 0x49c734: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C730u, 0x49C738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C738u;
label_49c738:
    // 0x49c738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c73c:
    // 0x49c73c: 0x3e00008  jr          $ra
label_49c740:
    if (ctx->pc == 0x49C740u) {
        ctx->pc = 0x49C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C73Cu;
        // 0x49c740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C744u;
        goto label_49c744;
    }
    ctx->pc = 0x49C73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C73Cu;
        // 0x49c740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C744u;
label_49c744:
    // 0x49c744: 0x0  nop
    ctx->pc = 0x49c744u;
    // NOP
label_49c748:
    // 0x49c748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c74c:
    // 0x49c74c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c750:
    // 0x49c750: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x49c750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_49c754:
    // 0x49c754: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c758:
    if (ctx->pc == 0x49C758u) {
        ctx->pc = 0x49C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C754u;
        // 0x49c758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C75Cu;
        goto label_49c75c;
    }
    ctx->pc = 0x49C754u;
    {
        const bool branch_taken_0x49c754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C754u;
        // 0x49c758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c754) {
            ctx->pc = 0x49C780u;
            goto label_49c780;
        }
    }
    ctx->pc = 0x49C75Cu;
label_49c75c:
    // 0x49c75c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c760:
    // 0x49c760: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c764:
    // 0x49c764: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c768:
    // 0x49c768: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c76c:
    // 0x49c76c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c770:
    // 0x49c770: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c774:
    // 0x49c774: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c778:
    // 0x49c778: 0x40f809  jalr        $v0
label_49c77c:
    if (ctx->pc == 0x49C77Cu) {
        ctx->pc = 0x49C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C778u;
        // 0x49c77c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C780u;
        goto label_49c780;
    }
    ctx->pc = 0x49C778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C780u);
        ctx->pc = 0x49C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C778u;
        // 0x49c77c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C778u, 0x49C780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C780u;
label_49c780:
    // 0x49c780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c784:
    // 0x49c784: 0x3e00008  jr          $ra
label_49c788:
    if (ctx->pc == 0x49C788u) {
        ctx->pc = 0x49C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C784u;
        // 0x49c788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C78Cu;
        goto label_49c78c;
    }
    ctx->pc = 0x49C784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C784u;
        // 0x49c788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C78Cu;
label_49c78c:
    // 0x49c78c: 0x0  nop
    ctx->pc = 0x49c78cu;
    // NOP
label_49c790:
    // 0x49c790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c794:
    // 0x49c794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c798:
    // 0x49c798: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x49c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
label_49c79c:
    // 0x49c79c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c7a0:
    if (ctx->pc == 0x49C7A0u) {
        ctx->pc = 0x49C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C79Cu;
        // 0x49c7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C7A4u;
        goto label_49c7a4;
    }
    ctx->pc = 0x49C79Cu;
    {
        const bool branch_taken_0x49c79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C79Cu;
        // 0x49c7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c79c) {
            ctx->pc = 0x49C7C8u;
            goto label_49c7c8;
        }
    }
    ctx->pc = 0x49C7A4u;
label_49c7a4:
    // 0x49c7a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c7a8:
    // 0x49c7a8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c7ac:
    // 0x49c7ac: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c7acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c7b0:
    // 0x49c7b0: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c7b4:
    // 0x49c7b4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c7b8:
    // 0x49c7b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c7bc:
    // 0x49c7bc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c7c0:
    // 0x49c7c0: 0x40f809  jalr        $v0
label_49c7c4:
    if (ctx->pc == 0x49C7C4u) {
        ctx->pc = 0x49C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7C0u;
        // 0x49c7c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C7C8u;
        goto label_49c7c8;
    }
    ctx->pc = 0x49C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C7C8u);
        ctx->pc = 0x49C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7C0u;
        // 0x49c7c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C7C0u, 0x49C7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C7C8u;
label_49c7c8:
    // 0x49c7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c7cc:
    // 0x49c7cc: 0x3e00008  jr          $ra
label_49c7d0:
    if (ctx->pc == 0x49C7D0u) {
        ctx->pc = 0x49C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7CCu;
        // 0x49c7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C7D4u;
        goto label_49c7d4;
    }
    ctx->pc = 0x49C7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7CCu;
        // 0x49c7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C7D4u;
label_49c7d4:
    // 0x49c7d4: 0x0  nop
    ctx->pc = 0x49c7d4u;
    // NOP
label_49c7d8:
    // 0x49c7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c7dc:
    // 0x49c7dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c7e0:
    // 0x49c7e0: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x49c7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
label_49c7e4:
    // 0x49c7e4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c7e8:
    if (ctx->pc == 0x49C7E8u) {
        ctx->pc = 0x49C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7E4u;
        // 0x49c7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C7ECu;
        goto label_49c7ec;
    }
    ctx->pc = 0x49C7E4u;
    {
        const bool branch_taken_0x49c7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7E4u;
        // 0x49c7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c7e4) {
            ctx->pc = 0x49C810u;
            goto label_49c810;
        }
    }
    ctx->pc = 0x49C7ECu;
label_49c7ec:
    // 0x49c7ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c7f0:
    // 0x49c7f0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c7f4:
    // 0x49c7f4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c7f8:
    // 0x49c7f8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c7fc:
    // 0x49c7fc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c800:
    // 0x49c800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c804:
    // 0x49c804: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c808:
    // 0x49c808: 0x40f809  jalr        $v0
label_49c80c:
    if (ctx->pc == 0x49C80Cu) {
        ctx->pc = 0x49C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C808u;
        // 0x49c80c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C810u;
        goto label_49c810;
    }
    ctx->pc = 0x49C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C810u);
        ctx->pc = 0x49C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C808u;
        // 0x49c80c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C808u, 0x49C810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C810u;
label_49c810:
    // 0x49c810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c814:
    // 0x49c814: 0x3e00008  jr          $ra
label_49c818:
    if (ctx->pc == 0x49C818u) {
        ctx->pc = 0x49C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C814u;
        // 0x49c818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C81Cu;
        goto label_49c81c;
    }
    ctx->pc = 0x49C814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C814u;
        // 0x49c818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C81Cu;
label_49c81c:
    // 0x49c81c: 0x0  nop
    ctx->pc = 0x49c81cu;
    // NOP
label_49c820:
    // 0x49c820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c824:
    // 0x49c824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c828:
    // 0x49c828: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x49c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_49c82c:
    // 0x49c82c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c830:
    if (ctx->pc == 0x49C830u) {
        ctx->pc = 0x49C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C82Cu;
        // 0x49c830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C834u;
        goto label_49c834;
    }
    ctx->pc = 0x49C82Cu;
    {
        const bool branch_taken_0x49c82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C82Cu;
        // 0x49c830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c82c) {
            ctx->pc = 0x49C858u;
            goto label_49c858;
        }
    }
    ctx->pc = 0x49C834u;
label_49c834:
    // 0x49c834: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c838:
    // 0x49c838: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c83c:
    // 0x49c83c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c840:
    // 0x49c840: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c844:
    // 0x49c844: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c848:
    // 0x49c848: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c84c:
    // 0x49c84c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c850:
    // 0x49c850: 0x40f809  jalr        $v0
label_49c854:
    if (ctx->pc == 0x49C854u) {
        ctx->pc = 0x49C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C850u;
        // 0x49c854: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C858u;
        goto label_49c858;
    }
    ctx->pc = 0x49C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C858u);
        ctx->pc = 0x49C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C850u;
        // 0x49c854: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C850u, 0x49C858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C858u;
label_49c858:
    // 0x49c858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c85c:
    // 0x49c85c: 0x3e00008  jr          $ra
label_49c860:
    if (ctx->pc == 0x49C860u) {
        ctx->pc = 0x49C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C85Cu;
        // 0x49c860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C864u;
        goto label_49c864;
    }
    ctx->pc = 0x49C85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C85Cu;
        // 0x49c860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C864u;
label_49c864:
    // 0x49c864: 0x0  nop
    ctx->pc = 0x49c864u;
    // NOP
label_49c868:
    // 0x49c868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c86c:
    // 0x49c86c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c870:
    // 0x49c870: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x49c870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_49c874:
    // 0x49c874: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c878:
    if (ctx->pc == 0x49C878u) {
        ctx->pc = 0x49C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C874u;
        // 0x49c878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C87Cu;
        goto label_49c87c;
    }
    ctx->pc = 0x49C874u;
    {
        const bool branch_taken_0x49c874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C874u;
        // 0x49c878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c874) {
            ctx->pc = 0x49C8A0u;
            goto label_49c8a0;
        }
    }
    ctx->pc = 0x49C87Cu;
label_49c87c:
    // 0x49c87c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c880:
    // 0x49c880: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c884:
    // 0x49c884: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c888:
    // 0x49c888: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c88c:
    // 0x49c88c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c890:
    // 0x49c890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c894:
    // 0x49c894: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c898:
    // 0x49c898: 0x40f809  jalr        $v0
label_49c89c:
    if (ctx->pc == 0x49C89Cu) {
        ctx->pc = 0x49C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C898u;
        // 0x49c89c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C8A0u;
        goto label_49c8a0;
    }
    ctx->pc = 0x49C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C8A0u);
        ctx->pc = 0x49C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C898u;
        // 0x49c89c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C898u, 0x49C8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C8A0u;
label_49c8a0:
    // 0x49c8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c8a4:
    // 0x49c8a4: 0x3e00008  jr          $ra
label_49c8a8:
    if (ctx->pc == 0x49C8A8u) {
        ctx->pc = 0x49C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8A4u;
        // 0x49c8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C8ACu;
        goto label_49c8ac;
    }
    ctx->pc = 0x49C8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8A4u;
        // 0x49c8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C8ACu;
label_49c8ac:
    // 0x49c8ac: 0x0  nop
    ctx->pc = 0x49c8acu;
    // NOP
label_49c8b0:
    // 0x49c8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49c8b4:
    // 0x49c8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49c8b8:
    // 0x49c8b8: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x49c8b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_49c8bc:
    // 0x49c8bc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_49c8c0:
    if (ctx->pc == 0x49C8C0u) {
        ctx->pc = 0x49C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8BCu;
        // 0x49c8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C8C4u;
        goto label_49c8c4;
    }
    ctx->pc = 0x49C8BCu;
    {
        const bool branch_taken_0x49c8bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8BCu;
        // 0x49c8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c8bc) {
            ctx->pc = 0x49C8E8u;
            goto label_49c8e8;
        }
    }
    ctx->pc = 0x49C8C4u;
label_49c8c4:
    // 0x49c8c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c8c8:
    // 0x49c8c8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x49c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49c8cc:
    // 0x49c8cc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x49c8ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_49c8d0:
    // 0x49c8d0: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x49c8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_49c8d4:
    // 0x49c8d4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x49c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_49c8d8:
    // 0x49c8d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c8dc:
    // 0x49c8dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x49c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49c8e0:
    // 0x49c8e0: 0x40f809  jalr        $v0
label_49c8e4:
    if (ctx->pc == 0x49C8E4u) {
        ctx->pc = 0x49C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8E0u;
        // 0x49c8e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C8E8u;
        goto label_49c8e8;
    }
    ctx->pc = 0x49C8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C8E8u);
        ctx->pc = 0x49C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8E0u;
        // 0x49c8e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C8E0u, 0x49C8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C8E8u;
label_49c8e8:
    // 0x49c8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49c8ec:
    // 0x49c8ec: 0x3e00008  jr          $ra
label_49c8f0:
    if (ctx->pc == 0x49C8F0u) {
        ctx->pc = 0x49C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8ECu;
        // 0x49c8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C8F4u;
        goto label_49c8f4;
    }
    ctx->pc = 0x49C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8ECu;
        // 0x49c8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C8F4u;
label_49c8f4:
    // 0x49c8f4: 0x0  nop
    ctx->pc = 0x49c8f4u;
    // NOP
    ctx->pc = 0x49c8f8u;
}
