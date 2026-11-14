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

// Function: sub_0025C600
// Address: 0x25c600 - 0x25c6a0
void sub_0025C600_0x25c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C600_0x25c600");
#endif

    switch (ctx->pc) {
        case 0x25c600u: goto label_25c600;
        case 0x25c604u: goto label_25c604;
        case 0x25c608u: goto label_25c608;
        case 0x25c60cu: goto label_25c60c;
        case 0x25c610u: goto label_25c610;
        case 0x25c614u: goto label_25c614;
        case 0x25c618u: goto label_25c618;
        case 0x25c61cu: goto label_25c61c;
        case 0x25c620u: goto label_25c620;
        case 0x25c624u: goto label_25c624;
        case 0x25c628u: goto label_25c628;
        case 0x25c62cu: goto label_25c62c;
        case 0x25c630u: goto label_25c630;
        case 0x25c634u: goto label_25c634;
        case 0x25c638u: goto label_25c638;
        case 0x25c63cu: goto label_25c63c;
        case 0x25c640u: goto label_25c640;
        case 0x25c644u: goto label_25c644;
        case 0x25c648u: goto label_25c648;
        case 0x25c64cu: goto label_25c64c;
        case 0x25c650u: goto label_25c650;
        case 0x25c654u: goto label_25c654;
        case 0x25c658u: goto label_25c658;
        case 0x25c65cu: goto label_25c65c;
        case 0x25c660u: goto label_25c660;
        case 0x25c664u: goto label_25c664;
        case 0x25c668u: goto label_25c668;
        case 0x25c66cu: goto label_25c66c;
        case 0x25c670u: goto label_25c670;
        case 0x25c674u: goto label_25c674;
        case 0x25c678u: goto label_25c678;
        case 0x25c67cu: goto label_25c67c;
        case 0x25c680u: goto label_25c680;
        case 0x25c684u: goto label_25c684;
        case 0x25c688u: goto label_25c688;
        case 0x25c68cu: goto label_25c68c;
        case 0x25c690u: goto label_25c690;
        case 0x25c694u: goto label_25c694;
        case 0x25c698u: goto label_25c698;
        case 0x25c69cu: goto label_25c69c;
        default: break;
    }

    ctx->pc = 0x25c600u;

label_25c600:
    // 0x25c600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25c604:
    // 0x25c604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25c608:
    // 0x25c608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c60c:
    // 0x25c60c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25c610:
    // 0x25c610: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25c610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_25c614:
    // 0x25c614: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25c618:
    // 0x25c618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25c61c:
    if (ctx->pc == 0x25C61Cu) {
        ctx->pc = 0x25C620u;
        goto label_25c620;
    }
    ctx->pc = 0x25C618u;
    {
        const bool branch_taken_0x25c618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c618) {
            ctx->pc = 0x25C628u;
            goto label_25c628;
        }
    }
    ctx->pc = 0x25C620u;
label_25c620:
    // 0x25c620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c624:
    // 0x25c624: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25c624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_25c628:
    // 0x25c628: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25c62c:
    // 0x25c62c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x25c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_25c630:
    // 0x25c630: 0xc119b68  jal         func_466DA0
label_25c634:
    if (ctx->pc == 0x25C634u) {
        ctx->pc = 0x25C638u;
        goto label_25c638;
    }
    ctx->pc = 0x25C630u;
    SET_GPR_U32(ctx, 31, 0x25C638u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x25C630u, 0x25C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C638u;
label_25c638:
    // 0x25c638: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25c638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c63c:
    // 0x25c63c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_25c640:
    if (ctx->pc == 0x25C640u) {
        ctx->pc = 0x25C644u;
        goto label_25c644;
    }
    ctx->pc = 0x25C63Cu;
    {
        const bool branch_taken_0x25c63c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c63c) {
            ctx->pc = 0x25C650u;
            goto label_25c650;
        }
    }
    ctx->pc = 0x25C644u;
label_25c644:
    // 0x25c644: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25c644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c648:
    // 0x25c648: 0x1000000e  b           . + 4 + (0xE << 2)
label_25c64c:
    if (ctx->pc == 0x25C64Cu) {
        ctx->pc = 0x25C650u;
        goto label_25c650;
    }
    ctx->pc = 0x25C648u;
    {
        const bool branch_taken_0x25c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c648) {
            ctx->pc = 0x25C684u;
            goto label_25c684;
        }
    }
    ctx->pc = 0x25C650u;
label_25c650:
    // 0x25c650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c654:
    // 0x25c654: 0xc0ba088  jal         func_2E8220
label_25c658:
    if (ctx->pc == 0x25C658u) {
        ctx->pc = 0x25C65Cu;
        goto label_25c65c;
    }
    ctx->pc = 0x25C654u;
    SET_GPR_U32(ctx, 31, 0x25C65Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25C654u, 0x25C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C65Cu;
label_25c65c:
    // 0x25c65c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c660:
    // 0x25c660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c664:
    // 0x25c664: 0xc0ba088  jal         func_2E8220
label_25c668:
    if (ctx->pc == 0x25C668u) {
        ctx->pc = 0x25C66Cu;
        goto label_25c66c;
    }
    ctx->pc = 0x25C664u;
    SET_GPR_U32(ctx, 31, 0x25C66Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25C664u, 0x25C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C66Cu;
label_25c66c:
    // 0x25c66c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_25c670:
    if (ctx->pc == 0x25C670u) {
        ctx->pc = 0x25C674u;
        goto label_25c674;
    }
    ctx->pc = 0x25C66Cu;
    {
        const bool branch_taken_0x25c66c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c66c) {
            ctx->pc = 0x25C628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c628;
        }
    }
    ctx->pc = 0x25C674u;
label_25c674:
    // 0x25c674: 0x200f809  jalr        $s0
label_25c678:
    if (ctx->pc == 0x25C678u) {
        ctx->pc = 0x25C67Cu;
        goto label_25c67c;
    }
    ctx->pc = 0x25C674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x25C67Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C674u, 0x25C67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C67Cu;
label_25c67c:
    // 0x25c67c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_25c680:
    if (ctx->pc == 0x25C680u) {
        ctx->pc = 0x25C684u;
        goto label_25c684;
    }
    ctx->pc = 0x25C67Cu;
    {
        const bool branch_taken_0x25c67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c67c) {
            ctx->pc = 0x25C628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c628;
        }
    }
    ctx->pc = 0x25C684u;
label_25c684:
    // 0x25c684: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25c684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25c688:
    // 0x25c688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c68c:
    // 0x25c68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25c690:
    // 0x25c690: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_25c694:
    // 0x25c694: 0x3e00008  jr          $ra
label_25c698:
    if (ctx->pc == 0x25C698u) {
        ctx->pc = 0x25C69Cu;
        goto label_25c69c;
    }
    ctx->pc = 0x25C694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C69Cu;
label_25c69c:
    // 0x25c69c: 0x0  nop
    ctx->pc = 0x25c69cu;
    // NOP
    ctx->pc = 0x25c6a0u;
}
