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

// Function: sub_001C3810
// Address: 0x1c3810 - 0x1c38c0
void sub_001C3810_0x1c3810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3810_0x1c3810");
#endif

    switch (ctx->pc) {
        case 0x1c3810u: goto label_1c3810;
        case 0x1c3814u: goto label_1c3814;
        case 0x1c3818u: goto label_1c3818;
        case 0x1c381cu: goto label_1c381c;
        case 0x1c3820u: goto label_1c3820;
        case 0x1c3824u: goto label_1c3824;
        case 0x1c3828u: goto label_1c3828;
        case 0x1c382cu: goto label_1c382c;
        case 0x1c3830u: goto label_1c3830;
        case 0x1c3834u: goto label_1c3834;
        case 0x1c3838u: goto label_1c3838;
        case 0x1c383cu: goto label_1c383c;
        case 0x1c3840u: goto label_1c3840;
        case 0x1c3844u: goto label_1c3844;
        case 0x1c3848u: goto label_1c3848;
        case 0x1c384cu: goto label_1c384c;
        case 0x1c3850u: goto label_1c3850;
        case 0x1c3854u: goto label_1c3854;
        case 0x1c3858u: goto label_1c3858;
        case 0x1c385cu: goto label_1c385c;
        case 0x1c3860u: goto label_1c3860;
        case 0x1c3864u: goto label_1c3864;
        case 0x1c3868u: goto label_1c3868;
        case 0x1c386cu: goto label_1c386c;
        case 0x1c3870u: goto label_1c3870;
        case 0x1c3874u: goto label_1c3874;
        case 0x1c3878u: goto label_1c3878;
        case 0x1c387cu: goto label_1c387c;
        case 0x1c3880u: goto label_1c3880;
        case 0x1c3884u: goto label_1c3884;
        case 0x1c3888u: goto label_1c3888;
        case 0x1c388cu: goto label_1c388c;
        case 0x1c3890u: goto label_1c3890;
        case 0x1c3894u: goto label_1c3894;
        case 0x1c3898u: goto label_1c3898;
        case 0x1c389cu: goto label_1c389c;
        case 0x1c38a0u: goto label_1c38a0;
        case 0x1c38a4u: goto label_1c38a4;
        case 0x1c38a8u: goto label_1c38a8;
        case 0x1c38acu: goto label_1c38ac;
        case 0x1c38b0u: goto label_1c38b0;
        case 0x1c38b4u: goto label_1c38b4;
        case 0x1c38b8u: goto label_1c38b8;
        case 0x1c38bcu: goto label_1c38bc;
        default: break;
    }

    ctx->pc = 0x1c3810u;

label_1c3810:
    // 0x1c3810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c3810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c3814:
    // 0x1c3814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c3818:
    // 0x1c3818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c381c:
    // 0x1c381c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c3820:
    // 0x1c3820: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c3820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1c3824:
    // 0x1c3824: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c3828:
    // 0x1c3828: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c382c:
    if (ctx->pc == 0x1C382Cu) {
        ctx->pc = 0x1C3830u;
        goto label_1c3830;
    }
    ctx->pc = 0x1C3828u;
    {
        const bool branch_taken_0x1c3828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3828) {
            ctx->pc = 0x1C3838u;
            goto label_1c3838;
        }
    }
    ctx->pc = 0x1C3830u;
label_1c3830:
    // 0x1c3830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3834:
    // 0x1c3834: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c3834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1c3838:
    // 0x1c3838: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c3838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c383c:
    // 0x1c383c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c383cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c3840:
    // 0x1c3840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3844:
    // 0x1c3844: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c3848:
    // 0x1c3848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c384c:
    // 0x1c384c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1c384cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c3850:
    // 0x1c3850: 0xc119b68  jal         func_466DA0
label_1c3854:
    if (ctx->pc == 0x1C3854u) {
        ctx->pc = 0x1C3858u;
        goto label_1c3858;
    }
    ctx->pc = 0x1C3850u;
    SET_GPR_U32(ctx, 31, 0x1C3858u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1C3850u, 0x1C3858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3858u;
label_1c3858:
    // 0x1c3858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c3858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c385c:
    // 0x1c385c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1c3860:
    if (ctx->pc == 0x1C3860u) {
        ctx->pc = 0x1C3864u;
        goto label_1c3864;
    }
    ctx->pc = 0x1C385Cu;
    {
        const bool branch_taken_0x1c385c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c385c) {
            ctx->pc = 0x1C3870u;
            goto label_1c3870;
        }
    }
    ctx->pc = 0x1C3864u;
label_1c3864:
    // 0x1c3864: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c3864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3868:
    // 0x1c3868: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c386c:
    if (ctx->pc == 0x1C386Cu) {
        ctx->pc = 0x1C3870u;
        goto label_1c3870;
    }
    ctx->pc = 0x1C3868u;
    {
        const bool branch_taken_0x1c3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3868) {
            ctx->pc = 0x1C38A4u;
            goto label_1c38a4;
        }
    }
    ctx->pc = 0x1C3870u;
label_1c3870:
    // 0x1c3870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3874:
    // 0x1c3874: 0xc0ba088  jal         func_2E8220
label_1c3878:
    if (ctx->pc == 0x1C3878u) {
        ctx->pc = 0x1C387Cu;
        goto label_1c387c;
    }
    ctx->pc = 0x1C3874u;
    SET_GPR_U32(ctx, 31, 0x1C387Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C3874u, 0x1C387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C387Cu;
label_1c387c:
    // 0x1c387c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c387cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3880:
    // 0x1c3880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3884:
    // 0x1c3884: 0xc0ba088  jal         func_2E8220
label_1c3888:
    if (ctx->pc == 0x1C3888u) {
        ctx->pc = 0x1C388Cu;
        goto label_1c388c;
    }
    ctx->pc = 0x1C3884u;
    SET_GPR_U32(ctx, 31, 0x1C388Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C3884u, 0x1C388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C388Cu;
label_1c388c:
    // 0x1c388c: 0x1200ffea  beqz        $s0, . + 4 + (-0x16 << 2)
label_1c3890:
    if (ctx->pc == 0x1C3890u) {
        ctx->pc = 0x1C3894u;
        goto label_1c3894;
    }
    ctx->pc = 0x1C388Cu;
    {
        const bool branch_taken_0x1c388c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c388c) {
            ctx->pc = 0x1C3838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3838;
        }
    }
    ctx->pc = 0x1C3894u;
label_1c3894:
    // 0x1c3894: 0x200f809  jalr        $s0
label_1c3898:
    if (ctx->pc == 0x1C3898u) {
        ctx->pc = 0x1C389Cu;
        goto label_1c389c;
    }
    ctx->pc = 0x1C3894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1C389Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3894u, 0x1C389Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C389Cu;
label_1c389c:
    // 0x1c389c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_1c38a0:
    if (ctx->pc == 0x1C38A0u) {
        ctx->pc = 0x1C38A4u;
        goto label_1c38a4;
    }
    ctx->pc = 0x1C389Cu;
    {
        const bool branch_taken_0x1c389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c389c) {
            ctx->pc = 0x1C3838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3838;
        }
    }
    ctx->pc = 0x1C38A4u;
label_1c38a4:
    // 0x1c38a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c38a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c38a8:
    // 0x1c38a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c38a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c38ac:
    // 0x1c38ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c38acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c38b0:
    // 0x1c38b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c38b4:
    // 0x1c38b4: 0x3e00008  jr          $ra
label_1c38b8:
    if (ctx->pc == 0x1C38B8u) {
        ctx->pc = 0x1C38BCu;
        goto label_1c38bc;
    }
    ctx->pc = 0x1C38B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C38B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C38BCu;
label_1c38bc:
    // 0x1c38bc: 0x0  nop
    ctx->pc = 0x1c38bcu;
    // NOP
    ctx->pc = 0x1c38c0u;
}
