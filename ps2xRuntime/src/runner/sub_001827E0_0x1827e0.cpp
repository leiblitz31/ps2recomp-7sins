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

// Function: sub_001827E0
// Address: 0x1827e0 - 0x182880
void sub_001827E0_0x1827e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001827E0_0x1827e0");
#endif

    switch (ctx->pc) {
        case 0x1827e0u: goto label_1827e0;
        case 0x1827e4u: goto label_1827e4;
        case 0x1827e8u: goto label_1827e8;
        case 0x1827ecu: goto label_1827ec;
        case 0x1827f0u: goto label_1827f0;
        case 0x1827f4u: goto label_1827f4;
        case 0x1827f8u: goto label_1827f8;
        case 0x1827fcu: goto label_1827fc;
        case 0x182800u: goto label_182800;
        case 0x182804u: goto label_182804;
        case 0x182808u: goto label_182808;
        case 0x18280cu: goto label_18280c;
        case 0x182810u: goto label_182810;
        case 0x182814u: goto label_182814;
        case 0x182818u: goto label_182818;
        case 0x18281cu: goto label_18281c;
        case 0x182820u: goto label_182820;
        case 0x182824u: goto label_182824;
        case 0x182828u: goto label_182828;
        case 0x18282cu: goto label_18282c;
        case 0x182830u: goto label_182830;
        case 0x182834u: goto label_182834;
        case 0x182838u: goto label_182838;
        case 0x18283cu: goto label_18283c;
        case 0x182840u: goto label_182840;
        case 0x182844u: goto label_182844;
        case 0x182848u: goto label_182848;
        case 0x18284cu: goto label_18284c;
        case 0x182850u: goto label_182850;
        case 0x182854u: goto label_182854;
        case 0x182858u: goto label_182858;
        case 0x18285cu: goto label_18285c;
        case 0x182860u: goto label_182860;
        case 0x182864u: goto label_182864;
        case 0x182868u: goto label_182868;
        case 0x18286cu: goto label_18286c;
        case 0x182870u: goto label_182870;
        case 0x182874u: goto label_182874;
        case 0x182878u: goto label_182878;
        case 0x18287cu: goto label_18287c;
        default: break;
    }

    ctx->pc = 0x1827e0u;

label_1827e0:
    // 0x1827e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1827e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1827e4:
    // 0x1827e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1827e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1827e8:
    // 0x1827e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1827e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1827ec:
    // 0x1827ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1827ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1827f0:
    // 0x1827f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1827f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1827f4:
    // 0x1827f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1827f8:
    // 0x1827f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1827fc:
    if (ctx->pc == 0x1827FCu) {
        ctx->pc = 0x182800u;
        goto label_182800;
    }
    ctx->pc = 0x1827F8u;
    {
        const bool branch_taken_0x1827f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1827f8) {
            ctx->pc = 0x182808u;
            goto label_182808;
        }
    }
    ctx->pc = 0x182800u;
label_182800:
    // 0x182800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182804:
    // 0x182804: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x182804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_182808:
    // 0x182808: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x182808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18280c:
    // 0x18280c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x18280cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_182810:
    // 0x182810: 0xc119b68  jal         func_466DA0
label_182814:
    if (ctx->pc == 0x182814u) {
        ctx->pc = 0x182818u;
        goto label_182818;
    }
    ctx->pc = 0x182810u;
    SET_GPR_U32(ctx, 31, 0x182818u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x182810u, 0x182818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182818u;
label_182818:
    // 0x182818: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18281c:
    // 0x18281c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_182820:
    if (ctx->pc == 0x182820u) {
        ctx->pc = 0x182824u;
        goto label_182824;
    }
    ctx->pc = 0x18281Cu;
    {
        const bool branch_taken_0x18281c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18281c) {
            ctx->pc = 0x182830u;
            goto label_182830;
        }
    }
    ctx->pc = 0x182824u;
label_182824:
    // 0x182824: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x182824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_182828:
    // 0x182828: 0x1000000e  b           . + 4 + (0xE << 2)
label_18282c:
    if (ctx->pc == 0x18282Cu) {
        ctx->pc = 0x182830u;
        goto label_182830;
    }
    ctx->pc = 0x182828u;
    {
        const bool branch_taken_0x182828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182828) {
            ctx->pc = 0x182864u;
            goto label_182864;
        }
    }
    ctx->pc = 0x182830u;
label_182830:
    // 0x182830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x182830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182834:
    // 0x182834: 0xc0ba088  jal         func_2E8220
label_182838:
    if (ctx->pc == 0x182838u) {
        ctx->pc = 0x18283Cu;
        goto label_18283c;
    }
    ctx->pc = 0x182834u;
    SET_GPR_U32(ctx, 31, 0x18283Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x182834u, 0x18283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18283Cu;
label_18283c:
    // 0x18283c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18283cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_182840:
    // 0x182840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182844:
    // 0x182844: 0xc0ba088  jal         func_2E8220
label_182848:
    if (ctx->pc == 0x182848u) {
        ctx->pc = 0x18284Cu;
        goto label_18284c;
    }
    ctx->pc = 0x182844u;
    SET_GPR_U32(ctx, 31, 0x18284Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x182844u, 0x18284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18284Cu;
label_18284c:
    // 0x18284c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_182850:
    if (ctx->pc == 0x182850u) {
        ctx->pc = 0x182854u;
        goto label_182854;
    }
    ctx->pc = 0x18284Cu;
    {
        const bool branch_taken_0x18284c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18284c) {
            ctx->pc = 0x182808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182808;
        }
    }
    ctx->pc = 0x182854u;
label_182854:
    // 0x182854: 0x200f809  jalr        $s0
label_182858:
    if (ctx->pc == 0x182858u) {
        ctx->pc = 0x18285Cu;
        goto label_18285c;
    }
    ctx->pc = 0x182854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x18285Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182854u, 0x18285Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18285Cu;
label_18285c:
    // 0x18285c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_182860:
    if (ctx->pc == 0x182860u) {
        ctx->pc = 0x182864u;
        goto label_182864;
    }
    ctx->pc = 0x18285Cu;
    {
        const bool branch_taken_0x18285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18285c) {
            ctx->pc = 0x182808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182808;
        }
    }
    ctx->pc = 0x182864u;
label_182864:
    // 0x182864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x182864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_182868:
    // 0x182868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18286c:
    // 0x18286c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18286cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182870:
    // 0x182870: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x182870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_182874:
    // 0x182874: 0x3e00008  jr          $ra
label_182878:
    if (ctx->pc == 0x182878u) {
        ctx->pc = 0x18287Cu;
        goto label_18287c;
    }
    ctx->pc = 0x182874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18287Cu;
label_18287c:
    // 0x18287c: 0x0  nop
    ctx->pc = 0x18287cu;
    // NOP
    ctx->pc = 0x182880u;
}
