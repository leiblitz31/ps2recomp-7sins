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

// Function: sub_003B2558
// Address: 0x3b2558 - 0x3b2650
void sub_003B2558_0x3b2558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2558_0x3b2558");
#endif

    switch (ctx->pc) {
        case 0x3b2558u: goto label_3b2558;
        case 0x3b255cu: goto label_3b255c;
        case 0x3b2560u: goto label_3b2560;
        case 0x3b2564u: goto label_3b2564;
        case 0x3b2568u: goto label_3b2568;
        case 0x3b256cu: goto label_3b256c;
        case 0x3b2570u: goto label_3b2570;
        case 0x3b2574u: goto label_3b2574;
        case 0x3b2578u: goto label_3b2578;
        case 0x3b257cu: goto label_3b257c;
        case 0x3b2580u: goto label_3b2580;
        case 0x3b2584u: goto label_3b2584;
        case 0x3b2588u: goto label_3b2588;
        case 0x3b258cu: goto label_3b258c;
        case 0x3b2590u: goto label_3b2590;
        case 0x3b2594u: goto label_3b2594;
        case 0x3b2598u: goto label_3b2598;
        case 0x3b259cu: goto label_3b259c;
        case 0x3b25a0u: goto label_3b25a0;
        case 0x3b25a4u: goto label_3b25a4;
        case 0x3b25a8u: goto label_3b25a8;
        case 0x3b25acu: goto label_3b25ac;
        case 0x3b25b0u: goto label_3b25b0;
        case 0x3b25b4u: goto label_3b25b4;
        case 0x3b25b8u: goto label_3b25b8;
        case 0x3b25bcu: goto label_3b25bc;
        case 0x3b25c0u: goto label_3b25c0;
        case 0x3b25c4u: goto label_3b25c4;
        case 0x3b25c8u: goto label_3b25c8;
        case 0x3b25ccu: goto label_3b25cc;
        case 0x3b25d0u: goto label_3b25d0;
        case 0x3b25d4u: goto label_3b25d4;
        case 0x3b25d8u: goto label_3b25d8;
        case 0x3b25dcu: goto label_3b25dc;
        case 0x3b25e0u: goto label_3b25e0;
        case 0x3b25e4u: goto label_3b25e4;
        case 0x3b25e8u: goto label_3b25e8;
        case 0x3b25ecu: goto label_3b25ec;
        case 0x3b25f0u: goto label_3b25f0;
        case 0x3b25f4u: goto label_3b25f4;
        case 0x3b25f8u: goto label_3b25f8;
        case 0x3b25fcu: goto label_3b25fc;
        case 0x3b2600u: goto label_3b2600;
        case 0x3b2604u: goto label_3b2604;
        case 0x3b2608u: goto label_3b2608;
        case 0x3b260cu: goto label_3b260c;
        case 0x3b2610u: goto label_3b2610;
        case 0x3b2614u: goto label_3b2614;
        case 0x3b2618u: goto label_3b2618;
        case 0x3b261cu: goto label_3b261c;
        case 0x3b2620u: goto label_3b2620;
        case 0x3b2624u: goto label_3b2624;
        case 0x3b2628u: goto label_3b2628;
        case 0x3b262cu: goto label_3b262c;
        case 0x3b2630u: goto label_3b2630;
        case 0x3b2634u: goto label_3b2634;
        case 0x3b2638u: goto label_3b2638;
        case 0x3b263cu: goto label_3b263c;
        case 0x3b2640u: goto label_3b2640;
        case 0x3b2644u: goto label_3b2644;
        case 0x3b2648u: goto label_3b2648;
        case 0x3b264cu: goto label_3b264c;
        default: break;
    }

    ctx->pc = 0x3b2558u;

label_3b2558:
    // 0x3b2558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b2558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b255c:
    // 0x3b255c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b2560:
    // 0x3b2560: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b2560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3b2564:
    // 0x3b2564: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b2564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b2568:
    // 0x3b2568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b2568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b256c:
    // 0x3b256c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b2570:
    // 0x3b2570: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b2570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3b2574:
    // 0x3b2574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b2574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b2578:
    // 0x3b2578: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b2578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b257c:
    // 0x3b257c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_3b2580:
    if (ctx->pc == 0x3B2580u) {
        ctx->pc = 0x3B2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B257Cu;
        // 0x3b2580: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2584u;
        goto label_3b2584;
    }
    ctx->pc = 0x3B257Cu;
    {
        const bool branch_taken_0x3b257c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b257c) {
            ctx->pc = 0x3B2580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B257Cu;
            // 0x3b2580: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2594u;
            goto label_3b2594;
        }
    }
    ctx->pc = 0x3B2584u;
label_3b2584:
    // 0x3b2584: 0xc103684  jal         func_40DA10
label_3b2588:
    if (ctx->pc == 0x3B2588u) {
        ctx->pc = 0x3B2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2584u;
        // 0x3b2588: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B258Cu;
        goto label_3b258c;
    }
    ctx->pc = 0x3B2584u;
    SET_GPR_U32(ctx, 31, 0x3B258Cu);
    ctx->pc = 0x3B2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2584u;
    // 0x3b2588: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B2584u, 0x3B258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B258Cu;
label_3b258c:
    // 0x3b258c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b2590:
    if (ctx->pc == 0x3B2590u) {
        ctx->pc = 0x3B2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B258Cu;
        // 0x3b2590: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2594u;
        goto label_3b2594;
    }
    ctx->pc = 0x3B258Cu;
    {
        const bool branch_taken_0x3b258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B258Cu;
        // 0x3b2590: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b258c) {
            ctx->pc = 0x3B25ACu;
            goto label_3b25ac;
        }
    }
    ctx->pc = 0x3B2594u;
label_3b2594:
    // 0x3b2594: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b2598:
    if (ctx->pc == 0x3B2598u) {
        ctx->pc = 0x3B2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2594u;
        // 0x3b2598: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B259Cu;
        goto label_3b259c;
    }
    ctx->pc = 0x3B2594u;
    {
        const bool branch_taken_0x3b2594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2594u;
        // 0x3b2598: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2594) {
            ctx->pc = 0x3B25A8u;
            goto label_3b25a8;
        }
    }
    ctx->pc = 0x3B259Cu;
label_3b259c:
    // 0x3b259c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3b259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3b25a0:
    // 0x3b25a0: 0x40f809  jalr        $v0
label_3b25a4:
    if (ctx->pc == 0x3B25A4u) {
        ctx->pc = 0x3B25A8u;
        goto label_3b25a8;
    }
    ctx->pc = 0x3B25A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B25A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B25A0u, 0x3B25A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B25A8u;
label_3b25a8:
    // 0x3b25a8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3b25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b25ac:
    // 0x3b25ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b25acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b25b0:
    // 0x3b25b0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_3b25b4:
    if (ctx->pc == 0x3B25B4u) {
        ctx->pc = 0x3B25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25B0u;
        // 0x3b25b4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B25B8u;
        goto label_3b25b8;
    }
    ctx->pc = 0x3B25B0u;
    {
        const bool branch_taken_0x3b25b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25B0u;
        // 0x3b25b4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25b0) {
            ctx->pc = 0x3B2630u;
            goto label_3b2630;
        }
    }
    ctx->pc = 0x3B25B8u;
label_3b25b8:
    // 0x3b25b8: 0xc0ec956  jal         func_3B2558
label_3b25bc:
    if (ctx->pc == 0x3B25BCu) {
        ctx->pc = 0x3B25C0u;
        goto label_3b25c0;
    }
    ctx->pc = 0x3B25B8u;
    SET_GPR_U32(ctx, 31, 0x3B25C0u);
    ctx->pc = 0x3B2558u;
    goto label_3b2558;
    ctx->pc = 0x3B25C0u;
label_3b25c0:
    // 0x3b25c0: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x3b25c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b25c4:
    // 0x3b25c4: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_3b25c8:
    if (ctx->pc == 0x3B25C8u) {
        ctx->pc = 0x3B25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25C4u;
        // 0x3b25c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B25CCu;
        goto label_3b25cc;
    }
    ctx->pc = 0x3B25C4u;
    {
        const bool branch_taken_0x3b25c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25C4u;
        // 0x3b25c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25c4) {
            ctx->pc = 0x3B262Cu;
            goto label_3b262c;
        }
    }
    ctx->pc = 0x3B25CCu;
label_3b25cc:
    // 0x3b25cc: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x3b25ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_3b25d0:
    // 0x3b25d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b25d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b25d4:
    // 0x3b25d4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3b25d8:
    if (ctx->pc == 0x3B25D8u) {
        ctx->pc = 0x3B25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25D4u;
        // 0x3b25d8: 0x8c530014  lw          $s3, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B25DCu;
        goto label_3b25dc;
    }
    ctx->pc = 0x3B25D4u;
    {
        const bool branch_taken_0x3b25d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25D4u;
        // 0x3b25d8: 0x8c530014  lw          $s3, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25d4) {
            ctx->pc = 0x3B2608u;
            goto label_3b2608;
        }
    }
    ctx->pc = 0x3B25DCu;
label_3b25dc:
    // 0x3b25dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b25dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b25e0:
    // 0x3b25e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b25e4:
    // 0x3b25e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3b25e8:
    if (ctx->pc == 0x3B25E8u) {
        ctx->pc = 0x3B25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25E4u;
        // 0x3b25e8: 0x2642e880  addiu       $v0, $s2, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B25ECu;
        goto label_3b25ec;
    }
    ctx->pc = 0x3B25E4u;
    {
        const bool branch_taken_0x3b25e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25E4u;
        // 0x3b25e8: 0x2642e880  addiu       $v0, $s2, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25e4) {
            ctx->pc = 0x3B25FCu;
            goto label_3b25fc;
        }
    }
    ctx->pc = 0x3B25ECu;
label_3b25ec:
    // 0x3b25ec: 0xc103684  jal         func_40DA10
label_3b25f0:
    if (ctx->pc == 0x3B25F0u) {
        ctx->pc = 0x3B25F4u;
        goto label_3b25f4;
    }
    ctx->pc = 0x3B25ECu;
    SET_GPR_U32(ctx, 31, 0x3B25F4u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B25ECu, 0x3B25F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B25F4u;
label_3b25f4:
    // 0x3b25f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b25f8:
    if (ctx->pc == 0x3B25F8u) {
        ctx->pc = 0x3B25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25F4u;
        // 0x3b25f8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B25FCu;
        goto label_3b25fc;
    }
    ctx->pc = 0x3B25F4u;
    {
        const bool branch_taken_0x3b25f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25F4u;
        // 0x3b25f8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25f4) {
            ctx->pc = 0x3B260Cu;
            goto label_3b260c;
        }
    }
    ctx->pc = 0x3B25FCu;
label_3b25fc:
    // 0x3b25fc: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b2600:
    // 0x3b2600: 0x60f809  jalr        $v1
label_3b2604:
    if (ctx->pc == 0x3B2604u) {
        ctx->pc = 0x3B2608u;
        goto label_3b2608;
    }
    ctx->pc = 0x3B2600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B2608u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2600u, 0x3B2608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2608u;
label_3b2608:
    // 0x3b2608: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b2608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b260c:
    // 0x3b260c: 0x2643e880  addiu       $v1, $s2, -0x1780
    ctx->pc = 0x3b260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_3b2610:
    // 0x3b2610: 0x8c44d3a4  lw          $a0, -0x2C5C($v0)
    ctx->pc = 0x3b2610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955940)));
label_3b2614:
    // 0x3b2614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b2614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2618:
    // 0x3b2618: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b261c:
    // 0x3b261c: 0x40f809  jalr        $v0
label_3b2620:
    if (ctx->pc == 0x3B2620u) {
        ctx->pc = 0x3B2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B261Cu;
        // 0x3b2620: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2624u;
        goto label_3b2624;
    }
    ctx->pc = 0x3B261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2624u);
        ctx->pc = 0x3B2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B261Cu;
        // 0x3b2620: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B261Cu, 0x3B2624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2624u;
label_3b2624:
    // 0x3b2624: 0xc0ec620  jal         func_3B1880
label_3b2628:
    if (ctx->pc == 0x3B2628u) {
        ctx->pc = 0x3B2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2624u;
        // 0x3b2628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B262Cu;
        goto label_3b262c;
    }
    ctx->pc = 0x3B2624u;
    SET_GPR_U32(ctx, 31, 0x3B262Cu);
    ctx->pc = 0x3B2628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2624u;
    // 0x3b2628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B2624u, 0x3B262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B262Cu;
label_3b262c:
    // 0x3b262c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3b262cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3b2630:
    // 0x3b2630: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b2630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b2634:
    // 0x3b2634: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b2634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2638:
    // 0x3b2638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b2638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b263c:
    // 0x3b263c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b263cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2640:
    // 0x3b2640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b2644:
    // 0x3b2644: 0x3e00008  jr          $ra
label_3b2648:
    if (ctx->pc == 0x3B2648u) {
        ctx->pc = 0x3B2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2644u;
        // 0x3b2648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B264Cu;
        goto label_3b264c;
    }
    ctx->pc = 0x3B2644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2644u;
        // 0x3b2648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B264Cu;
label_3b264c:
    // 0x3b264c: 0x0  nop
    ctx->pc = 0x3b264cu;
    // NOP
    ctx->pc = 0x3b2650u;
}
