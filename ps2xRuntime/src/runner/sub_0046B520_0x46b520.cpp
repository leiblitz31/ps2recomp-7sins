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

// Function: sub_0046B520
// Address: 0x46b520 - 0x46b5d0
void sub_0046B520_0x46b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B520_0x46b520");
#endif

    switch (ctx->pc) {
        case 0x46b520u: goto label_46b520;
        case 0x46b524u: goto label_46b524;
        case 0x46b528u: goto label_46b528;
        case 0x46b52cu: goto label_46b52c;
        case 0x46b530u: goto label_46b530;
        case 0x46b534u: goto label_46b534;
        case 0x46b538u: goto label_46b538;
        case 0x46b53cu: goto label_46b53c;
        case 0x46b540u: goto label_46b540;
        case 0x46b544u: goto label_46b544;
        case 0x46b548u: goto label_46b548;
        case 0x46b54cu: goto label_46b54c;
        case 0x46b550u: goto label_46b550;
        case 0x46b554u: goto label_46b554;
        case 0x46b558u: goto label_46b558;
        case 0x46b55cu: goto label_46b55c;
        case 0x46b560u: goto label_46b560;
        case 0x46b564u: goto label_46b564;
        case 0x46b568u: goto label_46b568;
        case 0x46b56cu: goto label_46b56c;
        case 0x46b570u: goto label_46b570;
        case 0x46b574u: goto label_46b574;
        case 0x46b578u: goto label_46b578;
        case 0x46b57cu: goto label_46b57c;
        case 0x46b580u: goto label_46b580;
        case 0x46b584u: goto label_46b584;
        case 0x46b588u: goto label_46b588;
        case 0x46b58cu: goto label_46b58c;
        case 0x46b590u: goto label_46b590;
        case 0x46b594u: goto label_46b594;
        case 0x46b598u: goto label_46b598;
        case 0x46b59cu: goto label_46b59c;
        case 0x46b5a0u: goto label_46b5a0;
        case 0x46b5a4u: goto label_46b5a4;
        case 0x46b5a8u: goto label_46b5a8;
        case 0x46b5acu: goto label_46b5ac;
        case 0x46b5b0u: goto label_46b5b0;
        case 0x46b5b4u: goto label_46b5b4;
        case 0x46b5b8u: goto label_46b5b8;
        case 0x46b5bcu: goto label_46b5bc;
        case 0x46b5c0u: goto label_46b5c0;
        case 0x46b5c4u: goto label_46b5c4;
        case 0x46b5c8u: goto label_46b5c8;
        case 0x46b5ccu: goto label_46b5cc;
        default: break;
    }

    ctx->pc = 0x46b520u;

label_46b520:
    // 0x46b520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46b524:
    // 0x46b524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46b528:
    // 0x46b528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46b52c:
    // 0x46b52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46b52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46b530:
    // 0x46b530: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x46b530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_46b534:
    // 0x46b534: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46b538:
    // 0x46b538: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46b53c:
    if (ctx->pc == 0x46B53Cu) {
        ctx->pc = 0x46B540u;
        goto label_46b540;
    }
    ctx->pc = 0x46B538u;
    {
        const bool branch_taken_0x46b538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b538) {
            ctx->pc = 0x46B548u;
            goto label_46b548;
        }
    }
    ctx->pc = 0x46B540u;
label_46b540:
    // 0x46b540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b544:
    // 0x46b544: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x46b544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_46b548:
    // 0x46b548: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46b54c:
    // 0x46b54c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x46b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_46b550:
    // 0x46b550: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x46b550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46b554:
    // 0x46b554: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x46b554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46b558:
    // 0x46b558: 0xc119b68  jal         func_466DA0
label_46b55c:
    if (ctx->pc == 0x46B55Cu) {
        ctx->pc = 0x46B560u;
        goto label_46b560;
    }
    ctx->pc = 0x46B558u;
    SET_GPR_U32(ctx, 31, 0x46B560u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x46B558u, 0x46B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B560u;
label_46b560:
    // 0x46b560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46b560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b564:
    // 0x46b564: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_46b568:
    if (ctx->pc == 0x46B568u) {
        ctx->pc = 0x46B56Cu;
        goto label_46b56c;
    }
    ctx->pc = 0x46B564u;
    {
        const bool branch_taken_0x46b564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b564) {
            ctx->pc = 0x46B578u;
            goto label_46b578;
        }
    }
    ctx->pc = 0x46B56Cu;
label_46b56c:
    // 0x46b56c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46b56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b570:
    // 0x46b570: 0x1000000e  b           . + 4 + (0xE << 2)
label_46b574:
    if (ctx->pc == 0x46B574u) {
        ctx->pc = 0x46B578u;
        goto label_46b578;
    }
    ctx->pc = 0x46B570u;
    {
        const bool branch_taken_0x46b570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b570) {
            ctx->pc = 0x46B5ACu;
            goto label_46b5ac;
        }
    }
    ctx->pc = 0x46B578u;
label_46b578:
    // 0x46b578: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46b578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b57c:
    // 0x46b57c: 0xc0ba088  jal         func_2E8220
label_46b580:
    if (ctx->pc == 0x46B580u) {
        ctx->pc = 0x46B584u;
        goto label_46b584;
    }
    ctx->pc = 0x46B57Cu;
    SET_GPR_U32(ctx, 31, 0x46B584u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x46B57Cu, 0x46B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B584u;
label_46b584:
    // 0x46b584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46b584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b588:
    // 0x46b588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46b588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46b58c:
    // 0x46b58c: 0xc0ba088  jal         func_2E8220
label_46b590:
    if (ctx->pc == 0x46B590u) {
        ctx->pc = 0x46B594u;
        goto label_46b594;
    }
    ctx->pc = 0x46B58Cu;
    SET_GPR_U32(ctx, 31, 0x46B594u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x46B58Cu, 0x46B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B594u;
label_46b594:
    // 0x46b594: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_46b598:
    if (ctx->pc == 0x46B598u) {
        ctx->pc = 0x46B59Cu;
        goto label_46b59c;
    }
    ctx->pc = 0x46B594u;
    {
        const bool branch_taken_0x46b594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b594) {
            ctx->pc = 0x46B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b548;
        }
    }
    ctx->pc = 0x46B59Cu;
label_46b59c:
    // 0x46b59c: 0x200f809  jalr        $s0
label_46b5a0:
    if (ctx->pc == 0x46B5A0u) {
        ctx->pc = 0x46B5A4u;
        goto label_46b5a4;
    }
    ctx->pc = 0x46B59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x46B5A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B59Cu, 0x46B5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B5A4u;
label_46b5a4:
    // 0x46b5a4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_46b5a8:
    if (ctx->pc == 0x46B5A8u) {
        ctx->pc = 0x46B5ACu;
        goto label_46b5ac;
    }
    ctx->pc = 0x46B5A4u;
    {
        const bool branch_taken_0x46b5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b5a4) {
            ctx->pc = 0x46B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b548;
        }
    }
    ctx->pc = 0x46B5ACu;
label_46b5ac:
    // 0x46b5ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46b5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46b5b0:
    // 0x46b5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46b5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46b5b4:
    // 0x46b5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46b5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46b5b8:
    // 0x46b5b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46b5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_46b5bc:
    // 0x46b5bc: 0x3e00008  jr          $ra
label_46b5c0:
    if (ctx->pc == 0x46B5C0u) {
        ctx->pc = 0x46B5C4u;
        goto label_46b5c4;
    }
    ctx->pc = 0x46B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B5C4u;
label_46b5c4:
    // 0x46b5c4: 0x0  nop
    ctx->pc = 0x46b5c4u;
    // NOP
label_46b5c8:
    // 0x46b5c8: 0x0  nop
    ctx->pc = 0x46b5c8u;
    // NOP
label_46b5cc:
    // 0x46b5cc: 0x0  nop
    ctx->pc = 0x46b5ccu;
    // NOP
    ctx->pc = 0x46b5d0u;
}
