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

// Function: sub_002CA800
// Address: 0x2ca800 - 0x2ca8a0
void sub_002CA800_0x2ca800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA800_0x2ca800");
#endif

    switch (ctx->pc) {
        case 0x2ca800u: goto label_2ca800;
        case 0x2ca804u: goto label_2ca804;
        case 0x2ca808u: goto label_2ca808;
        case 0x2ca80cu: goto label_2ca80c;
        case 0x2ca810u: goto label_2ca810;
        case 0x2ca814u: goto label_2ca814;
        case 0x2ca818u: goto label_2ca818;
        case 0x2ca81cu: goto label_2ca81c;
        case 0x2ca820u: goto label_2ca820;
        case 0x2ca824u: goto label_2ca824;
        case 0x2ca828u: goto label_2ca828;
        case 0x2ca82cu: goto label_2ca82c;
        case 0x2ca830u: goto label_2ca830;
        case 0x2ca834u: goto label_2ca834;
        case 0x2ca838u: goto label_2ca838;
        case 0x2ca83cu: goto label_2ca83c;
        case 0x2ca840u: goto label_2ca840;
        case 0x2ca844u: goto label_2ca844;
        case 0x2ca848u: goto label_2ca848;
        case 0x2ca84cu: goto label_2ca84c;
        case 0x2ca850u: goto label_2ca850;
        case 0x2ca854u: goto label_2ca854;
        case 0x2ca858u: goto label_2ca858;
        case 0x2ca85cu: goto label_2ca85c;
        case 0x2ca860u: goto label_2ca860;
        case 0x2ca864u: goto label_2ca864;
        case 0x2ca868u: goto label_2ca868;
        case 0x2ca86cu: goto label_2ca86c;
        case 0x2ca870u: goto label_2ca870;
        case 0x2ca874u: goto label_2ca874;
        case 0x2ca878u: goto label_2ca878;
        case 0x2ca87cu: goto label_2ca87c;
        case 0x2ca880u: goto label_2ca880;
        case 0x2ca884u: goto label_2ca884;
        case 0x2ca888u: goto label_2ca888;
        case 0x2ca88cu: goto label_2ca88c;
        case 0x2ca890u: goto label_2ca890;
        case 0x2ca894u: goto label_2ca894;
        case 0x2ca898u: goto label_2ca898;
        case 0x2ca89cu: goto label_2ca89c;
        default: break;
    }

    ctx->pc = 0x2ca800u;

label_2ca800:
    // 0x2ca800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ca800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ca804:
    // 0x2ca804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ca808:
    // 0x2ca808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ca80c:
    // 0x2ca80c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ca810:
    // 0x2ca810: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2ca810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2ca814:
    // 0x2ca814: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ca814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2ca818:
    // 0x2ca818: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ca81c:
    if (ctx->pc == 0x2CA81Cu) {
        ctx->pc = 0x2CA820u;
        goto label_2ca820;
    }
    ctx->pc = 0x2CA818u;
    {
        const bool branch_taken_0x2ca818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca818) {
            ctx->pc = 0x2CA828u;
            goto label_2ca828;
        }
    }
    ctx->pc = 0x2CA820u;
label_2ca820:
    // 0x2ca820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca824:
    // 0x2ca824: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2ca824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2ca828:
    // 0x2ca828: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ca828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2ca82c:
    // 0x2ca82c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2ca82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ca830:
    // 0x2ca830: 0xc119b68  jal         func_466DA0
label_2ca834:
    if (ctx->pc == 0x2CA834u) {
        ctx->pc = 0x2CA838u;
        goto label_2ca838;
    }
    ctx->pc = 0x2CA830u;
    SET_GPR_U32(ctx, 31, 0x2CA838u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CA830u, 0x2CA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA838u;
label_2ca838:
    // 0x2ca838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ca838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca83c:
    // 0x2ca83c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2ca840:
    if (ctx->pc == 0x2CA840u) {
        ctx->pc = 0x2CA844u;
        goto label_2ca844;
    }
    ctx->pc = 0x2CA83Cu;
    {
        const bool branch_taken_0x2ca83c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca83c) {
            ctx->pc = 0x2CA850u;
            goto label_2ca850;
        }
    }
    ctx->pc = 0x2CA844u;
label_2ca844:
    // 0x2ca844: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ca844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca848:
    // 0x2ca848: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ca84c:
    if (ctx->pc == 0x2CA84Cu) {
        ctx->pc = 0x2CA850u;
        goto label_2ca850;
    }
    ctx->pc = 0x2CA848u;
    {
        const bool branch_taken_0x2ca848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca848) {
            ctx->pc = 0x2CA884u;
            goto label_2ca884;
        }
    }
    ctx->pc = 0x2CA850u;
label_2ca850:
    // 0x2ca850: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ca850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca854:
    // 0x2ca854: 0xc0ba088  jal         func_2E8220
label_2ca858:
    if (ctx->pc == 0x2CA858u) {
        ctx->pc = 0x2CA85Cu;
        goto label_2ca85c;
    }
    ctx->pc = 0x2CA854u;
    SET_GPR_U32(ctx, 31, 0x2CA85Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2CA854u, 0x2CA85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA85Cu;
label_2ca85c:
    // 0x2ca85c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca860:
    // 0x2ca860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca864:
    // 0x2ca864: 0xc0ba088  jal         func_2E8220
label_2ca868:
    if (ctx->pc == 0x2CA868u) {
        ctx->pc = 0x2CA86Cu;
        goto label_2ca86c;
    }
    ctx->pc = 0x2CA864u;
    SET_GPR_U32(ctx, 31, 0x2CA86Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2CA864u, 0x2CA86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA86Cu;
label_2ca86c:
    // 0x2ca86c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2ca870:
    if (ctx->pc == 0x2CA870u) {
        ctx->pc = 0x2CA874u;
        goto label_2ca874;
    }
    ctx->pc = 0x2CA86Cu;
    {
        const bool branch_taken_0x2ca86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca86c) {
            ctx->pc = 0x2CA828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca828;
        }
    }
    ctx->pc = 0x2CA874u;
label_2ca874:
    // 0x2ca874: 0x200f809  jalr        $s0
label_2ca878:
    if (ctx->pc == 0x2CA878u) {
        ctx->pc = 0x2CA87Cu;
        goto label_2ca87c;
    }
    ctx->pc = 0x2CA874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2CA87Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA874u, 0x2CA87Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA87Cu;
label_2ca87c:
    // 0x2ca87c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2ca880:
    if (ctx->pc == 0x2CA880u) {
        ctx->pc = 0x2CA884u;
        goto label_2ca884;
    }
    ctx->pc = 0x2CA87Cu;
    {
        const bool branch_taken_0x2ca87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca87c) {
            ctx->pc = 0x2CA828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca828;
        }
    }
    ctx->pc = 0x2CA884u;
label_2ca884:
    // 0x2ca884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca888:
    // 0x2ca888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca88c:
    // 0x2ca88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca890:
    // 0x2ca890: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ca890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2ca894:
    // 0x2ca894: 0x3e00008  jr          $ra
label_2ca898:
    if (ctx->pc == 0x2CA898u) {
        ctx->pc = 0x2CA89Cu;
        goto label_2ca89c;
    }
    ctx->pc = 0x2CA894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA89Cu;
label_2ca89c:
    // 0x2ca89c: 0x0  nop
    ctx->pc = 0x2ca89cu;
    // NOP
    ctx->pc = 0x2ca8a0u;
}
