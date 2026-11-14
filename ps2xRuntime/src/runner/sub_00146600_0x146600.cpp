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

// Function: sub_00146600
// Address: 0x146600 - 0x1466b0
void sub_00146600_0x146600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146600_0x146600");
#endif

    switch (ctx->pc) {
        case 0x146600u: goto label_146600;
        case 0x146604u: goto label_146604;
        case 0x146608u: goto label_146608;
        case 0x14660cu: goto label_14660c;
        case 0x146610u: goto label_146610;
        case 0x146614u: goto label_146614;
        case 0x146618u: goto label_146618;
        case 0x14661cu: goto label_14661c;
        case 0x146620u: goto label_146620;
        case 0x146624u: goto label_146624;
        case 0x146628u: goto label_146628;
        case 0x14662cu: goto label_14662c;
        case 0x146630u: goto label_146630;
        case 0x146634u: goto label_146634;
        case 0x146638u: goto label_146638;
        case 0x14663cu: goto label_14663c;
        case 0x146640u: goto label_146640;
        case 0x146644u: goto label_146644;
        case 0x146648u: goto label_146648;
        case 0x14664cu: goto label_14664c;
        case 0x146650u: goto label_146650;
        case 0x146654u: goto label_146654;
        case 0x146658u: goto label_146658;
        case 0x14665cu: goto label_14665c;
        case 0x146660u: goto label_146660;
        case 0x146664u: goto label_146664;
        case 0x146668u: goto label_146668;
        case 0x14666cu: goto label_14666c;
        case 0x146670u: goto label_146670;
        case 0x146674u: goto label_146674;
        case 0x146678u: goto label_146678;
        case 0x14667cu: goto label_14667c;
        case 0x146680u: goto label_146680;
        case 0x146684u: goto label_146684;
        case 0x146688u: goto label_146688;
        case 0x14668cu: goto label_14668c;
        case 0x146690u: goto label_146690;
        case 0x146694u: goto label_146694;
        case 0x146698u: goto label_146698;
        case 0x14669cu: goto label_14669c;
        case 0x1466a0u: goto label_1466a0;
        case 0x1466a4u: goto label_1466a4;
        case 0x1466a8u: goto label_1466a8;
        case 0x1466acu: goto label_1466ac;
        default: break;
    }

    ctx->pc = 0x146600u;

label_146600:
    // 0x146600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x146600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_146604:
    // 0x146604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x146604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_146608:
    // 0x146608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14660c:
    // 0x14660c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_146610:
    // 0x146610: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x146610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_146614:
    // 0x146614: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x146614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_146618:
    // 0x146618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_14661c:
    if (ctx->pc == 0x14661Cu) {
        ctx->pc = 0x146620u;
        goto label_146620;
    }
    ctx->pc = 0x146618u;
    {
        const bool branch_taken_0x146618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146618) {
            ctx->pc = 0x146628u;
            goto label_146628;
        }
    }
    ctx->pc = 0x146620u;
label_146620:
    // 0x146620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146624:
    // 0x146624: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x146624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_146628:
    // 0x146628: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x146628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_14662c:
    // 0x14662c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x14662cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_146630:
    // 0x146630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_146634:
    // 0x146634: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x146634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_146638:
    // 0x146638: 0xc119b68  jal         func_466DA0
label_14663c:
    if (ctx->pc == 0x14663Cu) {
        ctx->pc = 0x146640u;
        goto label_146640;
    }
    ctx->pc = 0x146638u;
    SET_GPR_U32(ctx, 31, 0x146640u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x146638u, 0x146640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146640u;
label_146640:
    // 0x146640: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x146640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146644:
    // 0x146644: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_146648:
    if (ctx->pc == 0x146648u) {
        ctx->pc = 0x14664Cu;
        goto label_14664c;
    }
    ctx->pc = 0x146644u;
    {
        const bool branch_taken_0x146644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x146644) {
            ctx->pc = 0x146658u;
            goto label_146658;
        }
    }
    ctx->pc = 0x14664Cu;
label_14664c:
    // 0x14664c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14664cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_146650:
    // 0x146650: 0x1000000e  b           . + 4 + (0xE << 2)
label_146654:
    if (ctx->pc == 0x146654u) {
        ctx->pc = 0x146658u;
        goto label_146658;
    }
    ctx->pc = 0x146650u;
    {
        const bool branch_taken_0x146650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146650) {
            ctx->pc = 0x14668Cu;
            goto label_14668c;
        }
    }
    ctx->pc = 0x146658u;
label_146658:
    // 0x146658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x146658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14665c:
    // 0x14665c: 0xc0ba088  jal         func_2E8220
label_146660:
    if (ctx->pc == 0x146660u) {
        ctx->pc = 0x146664u;
        goto label_146664;
    }
    ctx->pc = 0x14665Cu;
    SET_GPR_U32(ctx, 31, 0x146664u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x14665Cu, 0x146664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146664u;
label_146664:
    // 0x146664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146668:
    // 0x146668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14666c:
    // 0x14666c: 0xc0ba088  jal         func_2E8220
label_146670:
    if (ctx->pc == 0x146670u) {
        ctx->pc = 0x146674u;
        goto label_146674;
    }
    ctx->pc = 0x14666Cu;
    SET_GPR_U32(ctx, 31, 0x146674u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x14666Cu, 0x146674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146674u;
label_146674:
    // 0x146674: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_146678:
    if (ctx->pc == 0x146678u) {
        ctx->pc = 0x14667Cu;
        goto label_14667c;
    }
    ctx->pc = 0x146674u;
    {
        const bool branch_taken_0x146674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x146674) {
            ctx->pc = 0x146628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146628;
        }
    }
    ctx->pc = 0x14667Cu;
label_14667c:
    // 0x14667c: 0x200f809  jalr        $s0
label_146680:
    if (ctx->pc == 0x146680u) {
        ctx->pc = 0x146684u;
        goto label_146684;
    }
    ctx->pc = 0x14667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x146684u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14667Cu, 0x146684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146684u;
label_146684:
    // 0x146684: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_146688:
    if (ctx->pc == 0x146688u) {
        ctx->pc = 0x14668Cu;
        goto label_14668c;
    }
    ctx->pc = 0x146684u;
    {
        const bool branch_taken_0x146684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146684) {
            ctx->pc = 0x146628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146628;
        }
    }
    ctx->pc = 0x14668Cu;
label_14668c:
    // 0x14668c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14668cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_146690:
    // 0x146690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_146694:
    // 0x146694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_146698:
    // 0x146698: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x146698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14669c:
    // 0x14669c: 0x3e00008  jr          $ra
label_1466a0:
    if (ctx->pc == 0x1466A0u) {
        ctx->pc = 0x1466A4u;
        goto label_1466a4;
    }
    ctx->pc = 0x14669Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14669Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1466A4u;
label_1466a4:
    // 0x1466a4: 0x0  nop
    ctx->pc = 0x1466a4u;
    // NOP
label_1466a8:
    // 0x1466a8: 0x0  nop
    ctx->pc = 0x1466a8u;
    // NOP
label_1466ac:
    // 0x1466ac: 0x0  nop
    ctx->pc = 0x1466acu;
    // NOP
    ctx->pc = 0x1466b0u;
}
