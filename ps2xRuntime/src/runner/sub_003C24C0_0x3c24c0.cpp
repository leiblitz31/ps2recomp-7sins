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

// Function: sub_003C24C0
// Address: 0x3c24c0 - 0x3c26a0
void sub_003C24C0_0x3c24c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C24C0_0x3c24c0");
#endif

    switch (ctx->pc) {
        case 0x3c24c0u: goto label_3c24c0;
        case 0x3c24c4u: goto label_3c24c4;
        case 0x3c24c8u: goto label_3c24c8;
        case 0x3c24ccu: goto label_3c24cc;
        case 0x3c24d0u: goto label_3c24d0;
        case 0x3c24d4u: goto label_3c24d4;
        case 0x3c24d8u: goto label_3c24d8;
        case 0x3c24dcu: goto label_3c24dc;
        case 0x3c24e0u: goto label_3c24e0;
        case 0x3c24e4u: goto label_3c24e4;
        case 0x3c24e8u: goto label_3c24e8;
        case 0x3c24ecu: goto label_3c24ec;
        case 0x3c24f0u: goto label_3c24f0;
        case 0x3c24f4u: goto label_3c24f4;
        case 0x3c24f8u: goto label_3c24f8;
        case 0x3c24fcu: goto label_3c24fc;
        case 0x3c2500u: goto label_3c2500;
        case 0x3c2504u: goto label_3c2504;
        case 0x3c2508u: goto label_3c2508;
        case 0x3c250cu: goto label_3c250c;
        case 0x3c2510u: goto label_3c2510;
        case 0x3c2514u: goto label_3c2514;
        case 0x3c2518u: goto label_3c2518;
        case 0x3c251cu: goto label_3c251c;
        case 0x3c2520u: goto label_3c2520;
        case 0x3c2524u: goto label_3c2524;
        case 0x3c2528u: goto label_3c2528;
        case 0x3c252cu: goto label_3c252c;
        case 0x3c2530u: goto label_3c2530;
        case 0x3c2534u: goto label_3c2534;
        case 0x3c2538u: goto label_3c2538;
        case 0x3c253cu: goto label_3c253c;
        case 0x3c2540u: goto label_3c2540;
        case 0x3c2544u: goto label_3c2544;
        case 0x3c2548u: goto label_3c2548;
        case 0x3c254cu: goto label_3c254c;
        case 0x3c2550u: goto label_3c2550;
        case 0x3c2554u: goto label_3c2554;
        case 0x3c2558u: goto label_3c2558;
        case 0x3c255cu: goto label_3c255c;
        case 0x3c2560u: goto label_3c2560;
        case 0x3c2564u: goto label_3c2564;
        case 0x3c2568u: goto label_3c2568;
        case 0x3c256cu: goto label_3c256c;
        case 0x3c2570u: goto label_3c2570;
        case 0x3c2574u: goto label_3c2574;
        case 0x3c2578u: goto label_3c2578;
        case 0x3c257cu: goto label_3c257c;
        case 0x3c2580u: goto label_3c2580;
        case 0x3c2584u: goto label_3c2584;
        case 0x3c2588u: goto label_3c2588;
        case 0x3c258cu: goto label_3c258c;
        case 0x3c2590u: goto label_3c2590;
        case 0x3c2594u: goto label_3c2594;
        case 0x3c2598u: goto label_3c2598;
        case 0x3c259cu: goto label_3c259c;
        case 0x3c25a0u: goto label_3c25a0;
        case 0x3c25a4u: goto label_3c25a4;
        case 0x3c25a8u: goto label_3c25a8;
        case 0x3c25acu: goto label_3c25ac;
        case 0x3c25b0u: goto label_3c25b0;
        case 0x3c25b4u: goto label_3c25b4;
        case 0x3c25b8u: goto label_3c25b8;
        case 0x3c25bcu: goto label_3c25bc;
        case 0x3c25c0u: goto label_3c25c0;
        case 0x3c25c4u: goto label_3c25c4;
        case 0x3c25c8u: goto label_3c25c8;
        case 0x3c25ccu: goto label_3c25cc;
        case 0x3c25d0u: goto label_3c25d0;
        case 0x3c25d4u: goto label_3c25d4;
        case 0x3c25d8u: goto label_3c25d8;
        case 0x3c25dcu: goto label_3c25dc;
        case 0x3c25e0u: goto label_3c25e0;
        case 0x3c25e4u: goto label_3c25e4;
        case 0x3c25e8u: goto label_3c25e8;
        case 0x3c25ecu: goto label_3c25ec;
        case 0x3c25f0u: goto label_3c25f0;
        case 0x3c25f4u: goto label_3c25f4;
        case 0x3c25f8u: goto label_3c25f8;
        case 0x3c25fcu: goto label_3c25fc;
        case 0x3c2600u: goto label_3c2600;
        case 0x3c2604u: goto label_3c2604;
        case 0x3c2608u: goto label_3c2608;
        case 0x3c260cu: goto label_3c260c;
        case 0x3c2610u: goto label_3c2610;
        case 0x3c2614u: goto label_3c2614;
        case 0x3c2618u: goto label_3c2618;
        case 0x3c261cu: goto label_3c261c;
        case 0x3c2620u: goto label_3c2620;
        case 0x3c2624u: goto label_3c2624;
        case 0x3c2628u: goto label_3c2628;
        case 0x3c262cu: goto label_3c262c;
        case 0x3c2630u: goto label_3c2630;
        case 0x3c2634u: goto label_3c2634;
        case 0x3c2638u: goto label_3c2638;
        case 0x3c263cu: goto label_3c263c;
        case 0x3c2640u: goto label_3c2640;
        case 0x3c2644u: goto label_3c2644;
        case 0x3c2648u: goto label_3c2648;
        case 0x3c264cu: goto label_3c264c;
        case 0x3c2650u: goto label_3c2650;
        case 0x3c2654u: goto label_3c2654;
        case 0x3c2658u: goto label_3c2658;
        case 0x3c265cu: goto label_3c265c;
        case 0x3c2660u: goto label_3c2660;
        case 0x3c2664u: goto label_3c2664;
        case 0x3c2668u: goto label_3c2668;
        case 0x3c266cu: goto label_3c266c;
        case 0x3c2670u: goto label_3c2670;
        case 0x3c2674u: goto label_3c2674;
        case 0x3c2678u: goto label_3c2678;
        case 0x3c267cu: goto label_3c267c;
        case 0x3c2680u: goto label_3c2680;
        case 0x3c2684u: goto label_3c2684;
        case 0x3c2688u: goto label_3c2688;
        case 0x3c268cu: goto label_3c268c;
        case 0x3c2690u: goto label_3c2690;
        case 0x3c2694u: goto label_3c2694;
        case 0x3c2698u: goto label_3c2698;
        case 0x3c269cu: goto label_3c269c;
        default: break;
    }

    ctx->pc = 0x3c24c0u;

label_3c24c0:
    // 0x3c24c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c24c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c24c4:
    // 0x3c24c4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3c24c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c24c8:
    // 0x3c24c8: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
label_3c24cc:
    if (ctx->pc == 0x3C24CCu) {
        ctx->pc = 0x3C24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24C8u;
        // 0x3c24cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24D0u;
        goto label_3c24d0;
    }
    ctx->pc = 0x3C24C8u;
    {
        const bool branch_taken_0x3c24c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24C8u;
        // 0x3c24cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c24c8) {
            ctx->pc = 0x3C253Cu;
            goto label_3c253c;
        }
    }
    ctx->pc = 0x3C24D0u;
label_3c24d0:
    // 0x3c24d0: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x3c24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_3c24d4:
    // 0x3c24d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3c24d8:
    if (ctx->pc == 0x3C24D8u) {
        ctx->pc = 0x3C24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24D4u;
        // 0x3c24d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24DCu;
        goto label_3c24dc;
    }
    ctx->pc = 0x3C24D4u;
    {
        const bool branch_taken_0x3c24d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24D4u;
        // 0x3c24d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c24d4) {
            ctx->pc = 0x3C253Cu;
            goto label_3c253c;
        }
    }
    ctx->pc = 0x3C24DCu;
label_3c24dc:
    // 0x3c24dc: 0x8d270040  lw          $a3, 0x40($t1)
    ctx->pc = 0x3c24dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
label_3c24e0:
    // 0x3c24e0: 0x50e20016  beql        $a3, $v0, . + 4 + (0x16 << 2)
label_3c24e4:
    if (ctx->pc == 0x3C24E4u) {
        ctx->pc = 0x3C24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24E0u;
        // 0x3c24e4: 0xad220040  sw          $v0, 0x40($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24E8u;
        goto label_3c24e8;
    }
    ctx->pc = 0x3C24E0u;
    {
        const bool branch_taken_0x3c24e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c24e0) {
            ctx->pc = 0x3C24E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C24E0u;
            // 0x3c24e4: 0xad220040  sw          $v0, 0x40($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C253Cu;
            goto label_3c253c;
        }
    }
    ctx->pc = 0x3C24E8u;
label_3c24e8:
    // 0x3c24e8: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x3c24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
label_3c24ec:
    // 0x3c24ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3c24f0:
    if (ctx->pc == 0x3C24F0u) {
        ctx->pc = 0x3C24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24ECu;
        // 0x3c24f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24F4u;
        goto label_3c24f4;
    }
    ctx->pc = 0x3C24ECu;
    {
        const bool branch_taken_0x3c24ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24ECu;
        // 0x3c24f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c24ec) {
            ctx->pc = 0x3C2534u;
            goto label_3c2534;
        }
    }
    ctx->pc = 0x3C24F4u;
label_3c24f4:
    // 0x3c24f4: 0x54e20006  bnel        $a3, $v0, . + 4 + (0x6 << 2)
label_3c24f8:
    if (ctx->pc == 0x3C24F8u) {
        ctx->pc = 0x3C24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24F4u;
        // 0x3c24f8: 0x8d250044  lw          $a1, 0x44($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24FCu;
        goto label_3c24fc;
    }
    ctx->pc = 0x3C24F4u;
    {
        const bool branch_taken_0x3c24f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c24f4) {
            ctx->pc = 0x3C24F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C24F4u;
            // 0x3c24f8: 0x8d250044  lw          $a1, 0x44($t1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2510u;
            goto label_3c2510;
        }
    }
    ctx->pc = 0x3C24FCu;
label_3c24fc:
    // 0x3c24fc: 0xdd220010  ld          $v0, 0x10($t1)
    ctx->pc = 0x3c24fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 16)));
label_3c2500:
    // 0x3c2500: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x3c2500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_3c2504:
    // 0x3c2504: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3c2504u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3c2508:
    // 0x3c2508: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c250c:
    if (ctx->pc == 0x3C250Cu) {
        ctx->pc = 0x3C250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2508u;
        // 0x3c250c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2510u;
        goto label_3c2510;
    }
    ctx->pc = 0x3C2508u;
    {
        const bool branch_taken_0x3c2508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2508u;
        // 0x3c250c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2508) {
            ctx->pc = 0x3C2514u;
            goto label_3c2514;
        }
    }
    ctx->pc = 0x3C2510u;
label_3c2510:
    // 0x3c2510: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3c2510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3c2514:
    // 0x3c2514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2518:
    // 0x3c2518: 0x8d230048  lw          $v1, 0x48($t1)
    ctx->pc = 0x3c2518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
label_3c251c:
    // 0x3c251c: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x3c251cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3c2520:
    // 0x3c2520: 0x8c88004c  lw          $t0, 0x4C($a0)
    ctx->pc = 0x3c2520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_3c2524:
    // 0x3c2524: 0x60f809  jalr        $v1
label_3c2528:
    if (ctx->pc == 0x3C2528u) {
        ctx->pc = 0x3C2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2524u;
        // 0x3c2528: 0xad220040  sw          $v0, 0x40($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C252Cu;
        goto label_3c252c;
    }
    ctx->pc = 0x3C2524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C252Cu);
        ctx->pc = 0x3C2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2524u;
        // 0x3c2528: 0xad220040  sw          $v0, 0x40($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2524u, 0x3C252Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C252Cu;
label_3c252c:
    // 0x3c252c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c2530:
    if (ctx->pc == 0x3C2530u) {
        ctx->pc = 0x3C2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C252Cu;
        // 0x3c2530: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2534u;
        goto label_3c2534;
    }
    ctx->pc = 0x3C252Cu;
    {
        const bool branch_taken_0x3c252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C252Cu;
        // 0x3c2530: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c252c) {
            ctx->pc = 0x3C2540u;
            goto label_3c2540;
        }
    }
    ctx->pc = 0x3C2534u;
label_3c2534:
    // 0x3c2534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2538:
    // 0x3c2538: 0xad220040  sw          $v0, 0x40($t1)
    ctx->pc = 0x3c2538u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
label_3c253c:
    // 0x3c253c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2540:
    // 0x3c2540: 0x3e00008  jr          $ra
label_3c2544:
    if (ctx->pc == 0x3C2544u) {
        ctx->pc = 0x3C2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2540u;
        // 0x3c2544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2548u;
        goto label_3c2548;
    }
    ctx->pc = 0x3C2540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2540u;
        // 0x3c2544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2548u;
label_3c2548:
    // 0x3c2548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c2548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3c254c:
    // 0x3c254c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c254cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c2550:
    // 0x3c2550: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c2550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c2554:
    // 0x3c2554: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c2554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3c2558:
    // 0x3c2558: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c2558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3c255c:
    // 0x3c255c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c255cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2560:
    // 0x3c2560: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c2560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3c2564:
    // 0x3c2564: 0x2453dff0  addiu       $s3, $v0, -0x2010
    ctx->pc = 0x3c2564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959088));
label_3c2568:
    // 0x3c2568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c256c:
    // 0x3c256c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c256cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2570:
    // 0x3c2570: 0x8c52dff0  lw          $s2, -0x2010($v0)
    ctx->pc = 0x3c2570u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959088)));
label_3c2574:
    // 0x3c2574: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c2574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3c2578:
    // 0x3c2578: 0x8f83bd8c  lw          $v1, -0x4274($gp)
    ctx->pc = 0x3c2578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950284)));
label_3c257c:
    // 0x3c257c: 0x14710002  bne         $v1, $s1, . + 4 + (0x2 << 2)
label_3c2580:
    if (ctx->pc == 0x3C2580u) {
        ctx->pc = 0x3C2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C257Cu;
        // 0x3c2580: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2584u;
        goto label_3c2584;
    }
    ctx->pc = 0x3C257Cu;
    {
        const bool branch_taken_0x3c257c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x3C2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C257Cu;
        // 0x3c2580: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c257c) {
            ctx->pc = 0x3C2588u;
            goto label_3c2588;
        }
    }
    ctx->pc = 0x3C2584u;
label_3c2584:
    // 0x3c2584: 0xaf80bd8c  sw          $zero, -0x4274($gp)
    ctx->pc = 0x3c2584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950284), GPR_U32(ctx, 0));
label_3c2588:
    // 0x3c2588: 0xc0f0c30  jal         func_3C30C0
label_3c258c:
    if (ctx->pc == 0x3C258Cu) {
        ctx->pc = 0x3C258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2588u;
        // 0x3c258c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2590u;
        goto label_3c2590;
    }
    ctx->pc = 0x3C2588u;
    SET_GPR_U32(ctx, 31, 0x3C2590u);
    ctx->pc = 0x3C258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2588u;
    // 0x3c258c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C30C0u, 0x3C2588u, 0x3C2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2590u;
label_3c2590:
    // 0x3c2590: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_3c2594:
    if (ctx->pc == 0x3C2594u) {
        ctx->pc = 0x3C2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2590u;
        // 0x3c2594: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2598u;
        goto label_3c2598;
    }
    ctx->pc = 0x3C2590u;
    {
        const bool branch_taken_0x3c2590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2590) {
            ctx->pc = 0x3C2594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2590u;
            // 0x3c2594: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2680u;
            goto label_3c2680;
        }
    }
    ctx->pc = 0x3C2598u;
label_3c2598:
    // 0x3c2598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c259c:
    // 0x3c259c: 0xc0f08e4  jal         func_3C2390
label_3c25a0:
    if (ctx->pc == 0x3C25A0u) {
        ctx->pc = 0x3C25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C259Cu;
        // 0x3c25a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25A4u;
        goto label_3c25a4;
    }
    ctx->pc = 0x3C259Cu;
    SET_GPR_U32(ctx, 31, 0x3C25A4u);
    ctx->pc = 0x3C25A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C259Cu;
    // 0x3c25a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2390u, 0x3C259Cu, 0x3C25A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C25A4u;
label_3c25a4:
    // 0x3c25a4: 0x16510012  bne         $s2, $s1, . + 4 + (0x12 << 2)
label_3c25a8:
    if (ctx->pc == 0x3C25A8u) {
        ctx->pc = 0x3C25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25A4u;
        // 0x3c25a8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25ACu;
        goto label_3c25ac;
    }
    ctx->pc = 0x3C25A4u;
    {
        const bool branch_taken_0x3c25a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x3C25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25A4u;
        // 0x3c25a8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c25a4) {
            ctx->pc = 0x3C25F0u;
            goto label_3c25f0;
        }
    }
    ctx->pc = 0x3C25ACu;
label_3c25ac:
    // 0x3c25ac: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3c25acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3c25b0:
    // 0x3c25b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c25b4:
    // 0x3c25b4: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3c25b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3c25b8:
    // 0x3c25b8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3c25b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3c25bc:
    // 0x3c25bc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3c25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3c25c0:
    // 0x3c25c0: 0x40f809  jalr        $v0
label_3c25c4:
    if (ctx->pc == 0x3C25C4u) {
        ctx->pc = 0x3C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25C0u;
        // 0x3c25c4: 0xae83dff0  sw          $v1, -0x2010($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294959088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25C8u;
        goto label_3c25c8;
    }
    ctx->pc = 0x3C25C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C25C8u);
        ctx->pc = 0x3C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25C0u;
        // 0x3c25c4: 0xae83dff0  sw          $v1, -0x2010($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294959088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C25C0u, 0x3C25C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C25C8u;
label_3c25c8:
    // 0x3c25c8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x3c25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3c25cc:
    // 0x3c25cc: 0x60f809  jalr        $v1
label_3c25d0:
    if (ctx->pc == 0x3C25D0u) {
        ctx->pc = 0x3C25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25CCu;
        // 0x3c25d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25D4u;
        goto label_3c25d4;
    }
    ctx->pc = 0x3C25CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C25D4u);
        ctx->pc = 0x3C25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25CCu;
        // 0x3c25d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C25CCu, 0x3C25D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C25D4u;
label_3c25d4:
    // 0x3c25d4: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x3c25d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3c25d8:
    // 0x3c25d8: 0xa0f809  jalr        $a1
label_3c25dc:
    if (ctx->pc == 0x3C25DCu) {
        ctx->pc = 0x3C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25D8u;
        // 0x3c25dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25E0u;
        goto label_3c25e0;
    }
    ctx->pc = 0x3C25D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3C25E0u);
        ctx->pc = 0x3C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25D8u;
        // 0x3c25dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C25D8u, 0x3C25E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C25E0u;
label_3c25e0:
    // 0x3c25e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3c25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3c25e4:
    // 0x3c25e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c25e8:
    // 0x3c25e8: 0x10000024  b           . + 4 + (0x24 << 2)
label_3c25ec:
    if (ctx->pc == 0x3C25ECu) {
        ctx->pc = 0x3C25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25E8u;
        // 0x3c25ec: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25F0u;
        goto label_3c25f0;
    }
    ctx->pc = 0x3C25E8u;
    {
        const bool branch_taken_0x3c25e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25E8u;
        // 0x3c25ec: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c25e8) {
            ctx->pc = 0x3C267Cu;
            goto label_3c267c;
        }
    }
    ctx->pc = 0x3C25F0u;
label_3c25f0:
    // 0x3c25f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c25f4:
    if (ctx->pc == 0x3C25F4u) {
        ctx->pc = 0x3C25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25F0u;
        // 0x3c25f4: 0x2453e880  addiu       $s3, $v0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C25F8u;
        goto label_3c25f8;
    }
    ctx->pc = 0x3C25F0u;
    {
        const bool branch_taken_0x3c25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25F0u;
        // 0x3c25f4: 0x2453e880  addiu       $s3, $v0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c25f0) {
            ctx->pc = 0x3C25FCu;
            goto label_3c25fc;
        }
    }
    ctx->pc = 0x3C25F8u;
label_3c25f8:
    // 0x3c25f8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x3c25f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c25fc:
    // 0x3c25fc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_3c2600:
    if (ctx->pc == 0x3C2600u) {
        ctx->pc = 0x3C2604u;
        goto label_3c2604;
    }
    ctx->pc = 0x3C25FCu;
    {
        const bool branch_taken_0x3c25fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c25fc) {
            ctx->pc = 0x3C2638u;
            goto label_3c2638;
        }
    }
    ctx->pc = 0x3C2604u;
label_3c2604:
    // 0x3c2604: 0x5611fffc  bnel        $s0, $s1, . + 4 + (-0x4 << 2)
label_3c2608:
    if (ctx->pc == 0x3C2608u) {
        ctx->pc = 0x3C2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2604u;
        // 0x3c2608: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C260Cu;
        goto label_3c260c;
    }
    ctx->pc = 0x3C2604u;
    {
        const bool branch_taken_0x3c2604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x3c2604) {
            ctx->pc = 0x3C2608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2604u;
            // 0x3c2608: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C25F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c25f8;
        }
    }
    ctx->pc = 0x3C260Cu;
label_3c260c:
    // 0x3c260c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c2610:
    // 0x3c2610: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x3c2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_3c2614:
    // 0x3c2614: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3c2614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3c2618:
    // 0x3c2618: 0x40f809  jalr        $v0
label_3c261c:
    if (ctx->pc == 0x3C261Cu) {
        ctx->pc = 0x3C261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2618u;
        // 0x3c261c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2620u;
        goto label_3c2620;
    }
    ctx->pc = 0x3C2618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2620u);
        ctx->pc = 0x3C261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2618u;
        // 0x3c261c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2618u, 0x3C2620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2620u;
label_3c2620:
    // 0x3c2620: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x3c2620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3c2624:
    // 0x3c2624: 0x60f809  jalr        $v1
label_3c2628:
    if (ctx->pc == 0x3C2628u) {
        ctx->pc = 0x3C2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2624u;
        // 0x3c2628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C262Cu;
        goto label_3c262c;
    }
    ctx->pc = 0x3C2624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C262Cu);
        ctx->pc = 0x3C2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2624u;
        // 0x3c2628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2624u, 0x3C262Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C262Cu;
label_3c262c:
    // 0x3c262c: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x3c262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_3c2630:
    // 0x3c2630: 0x40f809  jalr        $v0
label_3c2634:
    if (ctx->pc == 0x3C2634u) {
        ctx->pc = 0x3C2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2630u;
        // 0x3c2634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2638u;
        goto label_3c2638;
    }
    ctx->pc = 0x3C2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2638u);
        ctx->pc = 0x3C2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2630u;
        // 0x3c2634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2630u, 0x3C2638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2638u;
label_3c2638:
    // 0x3c2638: 0x1651000d  bne         $s2, $s1, . + 4 + (0xD << 2)
label_3c263c:
    if (ctx->pc == 0x3C263Cu) {
        ctx->pc = 0x3C263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2638u;
        // 0x3c263c: 0x2683dff0  addiu       $v1, $s4, -0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2640u;
        goto label_3c2640;
    }
    ctx->pc = 0x3C2638u;
    {
        const bool branch_taken_0x3c2638 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x3C263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2638u;
        // 0x3c263c: 0x2683dff0  addiu       $v1, $s4, -0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2638) {
            ctx->pc = 0x3C2670u;
            goto label_3c2670;
        }
    }
    ctx->pc = 0x3C2640u;
label_3c2640:
    // 0x3c2640: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3c2640u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3c2644:
    // 0x3c2644: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3c2644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3c2648:
    // 0x3c2648: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3c2648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3c264c:
    // 0x3c264c: 0x40f809  jalr        $v0
label_3c2650:
    if (ctx->pc == 0x3C2650u) {
        ctx->pc = 0x3C2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C264Cu;
        // 0x3c2650: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2654u;
        goto label_3c2654;
    }
    ctx->pc = 0x3C264Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2654u);
        ctx->pc = 0x3C2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C264Cu;
        // 0x3c2650: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C264Cu, 0x3C2654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2654u;
label_3c2654:
    // 0x3c2654: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x3c2654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3c2658:
    // 0x3c2658: 0x60f809  jalr        $v1
label_3c265c:
    if (ctx->pc == 0x3C265Cu) {
        ctx->pc = 0x3C265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2658u;
        // 0x3c265c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2660u;
        goto label_3c2660;
    }
    ctx->pc = 0x3C2658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C2660u);
        ctx->pc = 0x3C265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2658u;
        // 0x3c265c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2658u, 0x3C2660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2660u;
label_3c2660:
    // 0x3c2660: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3c2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3c2664:
    // 0x3c2664: 0x40f809  jalr        $v0
label_3c2668:
    if (ctx->pc == 0x3C2668u) {
        ctx->pc = 0x3C2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2664u;
        // 0x3c2668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C266Cu;
        goto label_3c266c;
    }
    ctx->pc = 0x3C2664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C266Cu);
        ctx->pc = 0x3C2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2664u;
        // 0x3c2668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2664u, 0x3C266Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C266Cu;
label_3c266c:
    // 0x3c266c: 0x2683dff0  addiu       $v1, $s4, -0x2010
    ctx->pc = 0x3c266cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959088));
label_3c2670:
    // 0x3c2670: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3c2670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3c2674:
    // 0x3c2674: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c2678:
    // 0x3c2678: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3c2678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_3c267c:
    // 0x3c267c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c267cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2680:
    // 0x3c2680: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c2680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2684:
    // 0x3c2684: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c2684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2688:
    // 0x3c2688: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c2688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c268c:
    // 0x3c268c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c268cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2690:
    // 0x3c2690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2694:
    // 0x3c2694: 0x3e00008  jr          $ra
label_3c2698:
    if (ctx->pc == 0x3C2698u) {
        ctx->pc = 0x3C2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2694u;
        // 0x3c2698: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C269Cu;
        goto label_3c269c;
    }
    ctx->pc = 0x3C2694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2694u;
        // 0x3c2698: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C269Cu;
label_3c269c:
    // 0x3c269c: 0x0  nop
    ctx->pc = 0x3c269cu;
    // NOP
    ctx->pc = 0x3c26a0u;
}
