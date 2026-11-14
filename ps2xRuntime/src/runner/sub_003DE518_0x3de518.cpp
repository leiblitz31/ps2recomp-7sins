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

// Function: sub_003DE518
// Address: 0x3de518 - 0x3de5f0
void sub_003DE518_0x3de518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE518_0x3de518");
#endif

    switch (ctx->pc) {
        case 0x3de518u: goto label_3de518;
        case 0x3de51cu: goto label_3de51c;
        case 0x3de520u: goto label_3de520;
        case 0x3de524u: goto label_3de524;
        case 0x3de528u: goto label_3de528;
        case 0x3de52cu: goto label_3de52c;
        case 0x3de530u: goto label_3de530;
        case 0x3de534u: goto label_3de534;
        case 0x3de538u: goto label_3de538;
        case 0x3de53cu: goto label_3de53c;
        case 0x3de540u: goto label_3de540;
        case 0x3de544u: goto label_3de544;
        case 0x3de548u: goto label_3de548;
        case 0x3de54cu: goto label_3de54c;
        case 0x3de550u: goto label_3de550;
        case 0x3de554u: goto label_3de554;
        case 0x3de558u: goto label_3de558;
        case 0x3de55cu: goto label_3de55c;
        case 0x3de560u: goto label_3de560;
        case 0x3de564u: goto label_3de564;
        case 0x3de568u: goto label_3de568;
        case 0x3de56cu: goto label_3de56c;
        case 0x3de570u: goto label_3de570;
        case 0x3de574u: goto label_3de574;
        case 0x3de578u: goto label_3de578;
        case 0x3de57cu: goto label_3de57c;
        case 0x3de580u: goto label_3de580;
        case 0x3de584u: goto label_3de584;
        case 0x3de588u: goto label_3de588;
        case 0x3de58cu: goto label_3de58c;
        case 0x3de590u: goto label_3de590;
        case 0x3de594u: goto label_3de594;
        case 0x3de598u: goto label_3de598;
        case 0x3de59cu: goto label_3de59c;
        case 0x3de5a0u: goto label_3de5a0;
        case 0x3de5a4u: goto label_3de5a4;
        case 0x3de5a8u: goto label_3de5a8;
        case 0x3de5acu: goto label_3de5ac;
        case 0x3de5b0u: goto label_3de5b0;
        case 0x3de5b4u: goto label_3de5b4;
        case 0x3de5b8u: goto label_3de5b8;
        case 0x3de5bcu: goto label_3de5bc;
        case 0x3de5c0u: goto label_3de5c0;
        case 0x3de5c4u: goto label_3de5c4;
        case 0x3de5c8u: goto label_3de5c8;
        case 0x3de5ccu: goto label_3de5cc;
        case 0x3de5d0u: goto label_3de5d0;
        case 0x3de5d4u: goto label_3de5d4;
        case 0x3de5d8u: goto label_3de5d8;
        case 0x3de5dcu: goto label_3de5dc;
        case 0x3de5e0u: goto label_3de5e0;
        case 0x3de5e4u: goto label_3de5e4;
        case 0x3de5e8u: goto label_3de5e8;
        case 0x3de5ecu: goto label_3de5ec;
        default: break;
    }

    ctx->pc = 0x3de518u;

label_3de518:
    // 0x3de518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3de518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3de51c:
    // 0x3de51c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3de51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3de520:
    // 0x3de520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3de520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3de524:
    // 0x3de524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de528:
    // 0x3de528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3de528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3de52c:
    // 0x3de52c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3de52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de530:
    // 0x3de530: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3de530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3de534:
    // 0x3de534: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3de534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3de538:
    // 0x3de538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3de53c:
    if (ctx->pc == 0x3DE53Cu) {
        ctx->pc = 0x3DE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE538u;
        // 0x3de53c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE540u;
        goto label_3de540;
    }
    ctx->pc = 0x3DE538u;
    {
        const bool branch_taken_0x3de538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE538u;
        // 0x3de53c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de538) {
            ctx->pc = 0x3DE550u;
            goto label_3de550;
        }
    }
    ctx->pc = 0x3DE540u;
label_3de540:
    // 0x3de540: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3de540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3de544:
    // 0x3de544: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3de544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3de548:
    // 0x3de548: 0x40f809  jalr        $v0
label_3de54c:
    if (ctx->pc == 0x3DE54Cu) {
        ctx->pc = 0x3DE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE548u;
        // 0x3de54c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE550u;
        goto label_3de550;
    }
    ctx->pc = 0x3DE548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE550u);
        ctx->pc = 0x3DE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE548u;
        // 0x3de54c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE548u, 0x3DE550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE550u;
label_3de550:
    // 0x3de550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3de550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de554:
    // 0x3de554: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3de554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3de558:
    // 0x3de558: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3de55c:
    if (ctx->pc == 0x3DE55Cu) {
        ctx->pc = 0x3DE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE558u;
        // 0x3de55c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE560u;
        goto label_3de560;
    }
    ctx->pc = 0x3DE558u;
    {
        const bool branch_taken_0x3de558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de558) {
            ctx->pc = 0x3DE55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE558u;
            // 0x3de55c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE570u;
            goto label_3de570;
        }
    }
    ctx->pc = 0x3DE560u;
label_3de560:
    // 0x3de560: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3de560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3de564:
    // 0x3de564: 0xc0f804a  jal         func_3E0128
label_3de568:
    if (ctx->pc == 0x3DE568u) {
        ctx->pc = 0x3DE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE564u;
        // 0x3de568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE56Cu;
        goto label_3de56c;
    }
    ctx->pc = 0x3DE564u;
    SET_GPR_U32(ctx, 31, 0x3DE56Cu);
    ctx->pc = 0x3DE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE564u;
    // 0x3de568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0128u, 0x3DE564u, 0x3DE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE56Cu;
label_3de56c:
    // 0x3de56c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3de56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3de570:
    // 0x3de570: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3de570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3de574:
    // 0x3de574: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x3de574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_3de578:
    // 0x3de578: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3de578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3de57c:
    // 0x3de57c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3de57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3de580:
    // 0x3de580: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x3de580u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
label_3de584:
    // 0x3de584: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3de588:
    if (ctx->pc == 0x3DE588u) {
        ctx->pc = 0x3DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE584u;
        // 0x3de588: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE58Cu;
        goto label_3de58c;
    }
    ctx->pc = 0x3DE584u;
    {
        const bool branch_taken_0x3de584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE584u;
        // 0x3de588: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de584) {
            ctx->pc = 0x3DE5A4u;
            goto label_3de5a4;
        }
    }
    ctx->pc = 0x3DE58Cu;
label_3de58c:
    // 0x3de58c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3de58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de590:
    // 0x3de590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de594:
    // 0x3de594: 0x60f809  jalr        $v1
label_3de598:
    if (ctx->pc == 0x3DE598u) {
        ctx->pc = 0x3DE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE594u;
        // 0x3de598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE59Cu;
        goto label_3de59c;
    }
    ctx->pc = 0x3DE594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DE59Cu);
        ctx->pc = 0x3DE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE594u;
        // 0x3de598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE594u, 0x3DE59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE59Cu;
label_3de59c:
    // 0x3de59c: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x3de59cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_3de5a0:
    // 0x3de5a0: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x3de5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_3de5a4:
    // 0x3de5a4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3de5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3de5a8:
    // 0x3de5a8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3de5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3de5ac:
    // 0x3de5ac: 0x40f809  jalr        $v0
label_3de5b0:
    if (ctx->pc == 0x3DE5B0u) {
        ctx->pc = 0x3DE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5ACu;
        // 0x3de5b0: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5B4u;
        goto label_3de5b4;
    }
    ctx->pc = 0x3DE5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE5B4u);
        ctx->pc = 0x3DE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5ACu;
        // 0x3de5b0: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE5ACu, 0x3DE5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE5B4u;
label_3de5b4:
    // 0x3de5b4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3de5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3de5b8:
    // 0x3de5b8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3de5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3de5bc:
    // 0x3de5bc: 0x40f809  jalr        $v0
label_3de5c0:
    if (ctx->pc == 0x3DE5C0u) {
        ctx->pc = 0x3DE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5BCu;
        // 0x3de5c0: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5C4u;
        goto label_3de5c4;
    }
    ctx->pc = 0x3DE5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE5C4u);
        ctx->pc = 0x3DE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5BCu;
        // 0x3de5c0: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE5BCu, 0x3DE5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE5C4u;
label_3de5c4:
    // 0x3de5c4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3de5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3de5c8:
    // 0x3de5c8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3de5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3de5cc:
    // 0x3de5cc: 0x40f809  jalr        $v0
label_3de5d0:
    if (ctx->pc == 0x3DE5D0u) {
        ctx->pc = 0x3DE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5CCu;
        // 0x3de5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5D4u;
        goto label_3de5d4;
    }
    ctx->pc = 0x3DE5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE5D4u);
        ctx->pc = 0x3DE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5CCu;
        // 0x3de5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE5CCu, 0x3DE5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE5D4u;
label_3de5d4:
    // 0x3de5d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3de5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de5d8:
    // 0x3de5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de5dc:
    // 0x3de5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3de5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3de5e0:
    // 0x3de5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3de5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3de5e4:
    // 0x3de5e4: 0x3e00008  jr          $ra
label_3de5e8:
    if (ctx->pc == 0x3DE5E8u) {
        ctx->pc = 0x3DE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5E4u;
        // 0x3de5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5ECu;
        goto label_3de5ec;
    }
    ctx->pc = 0x3DE5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5E4u;
        // 0x3de5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE5ECu;
label_3de5ec:
    // 0x3de5ec: 0x0  nop
    ctx->pc = 0x3de5ecu;
    // NOP
    ctx->pc = 0x3de5f0u;
}
