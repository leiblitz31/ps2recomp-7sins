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

// Function: sub_0025C510
// Address: 0x25c510 - 0x25c5b0
void sub_0025C510_0x25c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C510_0x25c510");
#endif

    switch (ctx->pc) {
        case 0x25c510u: goto label_25c510;
        case 0x25c514u: goto label_25c514;
        case 0x25c518u: goto label_25c518;
        case 0x25c51cu: goto label_25c51c;
        case 0x25c520u: goto label_25c520;
        case 0x25c524u: goto label_25c524;
        case 0x25c528u: goto label_25c528;
        case 0x25c52cu: goto label_25c52c;
        case 0x25c530u: goto label_25c530;
        case 0x25c534u: goto label_25c534;
        case 0x25c538u: goto label_25c538;
        case 0x25c53cu: goto label_25c53c;
        case 0x25c540u: goto label_25c540;
        case 0x25c544u: goto label_25c544;
        case 0x25c548u: goto label_25c548;
        case 0x25c54cu: goto label_25c54c;
        case 0x25c550u: goto label_25c550;
        case 0x25c554u: goto label_25c554;
        case 0x25c558u: goto label_25c558;
        case 0x25c55cu: goto label_25c55c;
        case 0x25c560u: goto label_25c560;
        case 0x25c564u: goto label_25c564;
        case 0x25c568u: goto label_25c568;
        case 0x25c56cu: goto label_25c56c;
        case 0x25c570u: goto label_25c570;
        case 0x25c574u: goto label_25c574;
        case 0x25c578u: goto label_25c578;
        case 0x25c57cu: goto label_25c57c;
        case 0x25c580u: goto label_25c580;
        case 0x25c584u: goto label_25c584;
        case 0x25c588u: goto label_25c588;
        case 0x25c58cu: goto label_25c58c;
        case 0x25c590u: goto label_25c590;
        case 0x25c594u: goto label_25c594;
        case 0x25c598u: goto label_25c598;
        case 0x25c59cu: goto label_25c59c;
        case 0x25c5a0u: goto label_25c5a0;
        case 0x25c5a4u: goto label_25c5a4;
        case 0x25c5a8u: goto label_25c5a8;
        case 0x25c5acu: goto label_25c5ac;
        default: break;
    }

    ctx->pc = 0x25c510u;

label_25c510:
    // 0x25c510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25c514:
    // 0x25c514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25c518:
    // 0x25c518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c51c:
    // 0x25c51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25c520:
    // 0x25c520: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25c520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_25c524:
    // 0x25c524: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25c528:
    // 0x25c528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25c52c:
    if (ctx->pc == 0x25C52Cu) {
        ctx->pc = 0x25C530u;
        goto label_25c530;
    }
    ctx->pc = 0x25C528u;
    {
        const bool branch_taken_0x25c528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c528) {
            ctx->pc = 0x25C538u;
            goto label_25c538;
        }
    }
    ctx->pc = 0x25C530u;
label_25c530:
    // 0x25c530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c534:
    // 0x25c534: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25c534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_25c538:
    // 0x25c538: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25c53c:
    // 0x25c53c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x25c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25c540:
    // 0x25c540: 0xc119b68  jal         func_466DA0
label_25c544:
    if (ctx->pc == 0x25C544u) {
        ctx->pc = 0x25C548u;
        goto label_25c548;
    }
    ctx->pc = 0x25C540u;
    SET_GPR_U32(ctx, 31, 0x25C548u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x25C540u, 0x25C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C548u;
label_25c548:
    // 0x25c548: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25c548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c54c:
    // 0x25c54c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_25c550:
    if (ctx->pc == 0x25C550u) {
        ctx->pc = 0x25C554u;
        goto label_25c554;
    }
    ctx->pc = 0x25C54Cu;
    {
        const bool branch_taken_0x25c54c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c54c) {
            ctx->pc = 0x25C560u;
            goto label_25c560;
        }
    }
    ctx->pc = 0x25C554u;
label_25c554:
    // 0x25c554: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25c554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c558:
    // 0x25c558: 0x1000000e  b           . + 4 + (0xE << 2)
label_25c55c:
    if (ctx->pc == 0x25C55Cu) {
        ctx->pc = 0x25C560u;
        goto label_25c560;
    }
    ctx->pc = 0x25C558u;
    {
        const bool branch_taken_0x25c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c558) {
            ctx->pc = 0x25C594u;
            goto label_25c594;
        }
    }
    ctx->pc = 0x25C560u;
label_25c560:
    // 0x25c560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c564:
    // 0x25c564: 0xc0ba088  jal         func_2E8220
label_25c568:
    if (ctx->pc == 0x25C568u) {
        ctx->pc = 0x25C56Cu;
        goto label_25c56c;
    }
    ctx->pc = 0x25C564u;
    SET_GPR_U32(ctx, 31, 0x25C56Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25C564u, 0x25C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C56Cu;
label_25c56c:
    // 0x25c56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c570:
    // 0x25c570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c574:
    // 0x25c574: 0xc0ba088  jal         func_2E8220
label_25c578:
    if (ctx->pc == 0x25C578u) {
        ctx->pc = 0x25C57Cu;
        goto label_25c57c;
    }
    ctx->pc = 0x25C574u;
    SET_GPR_U32(ctx, 31, 0x25C57Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25C574u, 0x25C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C57Cu;
label_25c57c:
    // 0x25c57c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_25c580:
    if (ctx->pc == 0x25C580u) {
        ctx->pc = 0x25C584u;
        goto label_25c584;
    }
    ctx->pc = 0x25C57Cu;
    {
        const bool branch_taken_0x25c57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c57c) {
            ctx->pc = 0x25C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c538;
        }
    }
    ctx->pc = 0x25C584u;
label_25c584:
    // 0x25c584: 0x200f809  jalr        $s0
label_25c588:
    if (ctx->pc == 0x25C588u) {
        ctx->pc = 0x25C58Cu;
        goto label_25c58c;
    }
    ctx->pc = 0x25C584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x25C58Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C584u, 0x25C58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C58Cu;
label_25c58c:
    // 0x25c58c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_25c590:
    if (ctx->pc == 0x25C590u) {
        ctx->pc = 0x25C594u;
        goto label_25c594;
    }
    ctx->pc = 0x25C58Cu;
    {
        const bool branch_taken_0x25c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c58c) {
            ctx->pc = 0x25C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c538;
        }
    }
    ctx->pc = 0x25C594u;
label_25c594:
    // 0x25c594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25c594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25c598:
    // 0x25c598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c59c:
    // 0x25c59c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25c5a0:
    // 0x25c5a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_25c5a4:
    // 0x25c5a4: 0x3e00008  jr          $ra
label_25c5a8:
    if (ctx->pc == 0x25C5A8u) {
        ctx->pc = 0x25C5ACu;
        goto label_25c5ac;
    }
    ctx->pc = 0x25C5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C5ACu;
label_25c5ac:
    // 0x25c5ac: 0x0  nop
    ctx->pc = 0x25c5acu;
    // NOP
    ctx->pc = 0x25c5b0u;
}
