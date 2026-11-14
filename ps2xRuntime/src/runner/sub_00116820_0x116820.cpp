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

// Function: sub_00116820
// Address: 0x116820 - 0x1168d0
void sub_00116820_0x116820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116820_0x116820");
#endif

    switch (ctx->pc) {
        case 0x116820u: goto label_116820;
        case 0x116824u: goto label_116824;
        case 0x116828u: goto label_116828;
        case 0x11682cu: goto label_11682c;
        case 0x116830u: goto label_116830;
        case 0x116834u: goto label_116834;
        case 0x116838u: goto label_116838;
        case 0x11683cu: goto label_11683c;
        case 0x116840u: goto label_116840;
        case 0x116844u: goto label_116844;
        case 0x116848u: goto label_116848;
        case 0x11684cu: goto label_11684c;
        case 0x116850u: goto label_116850;
        case 0x116854u: goto label_116854;
        case 0x116858u: goto label_116858;
        case 0x11685cu: goto label_11685c;
        case 0x116860u: goto label_116860;
        case 0x116864u: goto label_116864;
        case 0x116868u: goto label_116868;
        case 0x11686cu: goto label_11686c;
        case 0x116870u: goto label_116870;
        case 0x116874u: goto label_116874;
        case 0x116878u: goto label_116878;
        case 0x11687cu: goto label_11687c;
        case 0x116880u: goto label_116880;
        case 0x116884u: goto label_116884;
        case 0x116888u: goto label_116888;
        case 0x11688cu: goto label_11688c;
        case 0x116890u: goto label_116890;
        case 0x116894u: goto label_116894;
        case 0x116898u: goto label_116898;
        case 0x11689cu: goto label_11689c;
        case 0x1168a0u: goto label_1168a0;
        case 0x1168a4u: goto label_1168a4;
        case 0x1168a8u: goto label_1168a8;
        case 0x1168acu: goto label_1168ac;
        case 0x1168b0u: goto label_1168b0;
        case 0x1168b4u: goto label_1168b4;
        case 0x1168b8u: goto label_1168b8;
        case 0x1168bcu: goto label_1168bc;
        case 0x1168c0u: goto label_1168c0;
        case 0x1168c4u: goto label_1168c4;
        case 0x1168c8u: goto label_1168c8;
        case 0x1168ccu: goto label_1168cc;
        default: break;
    }

    ctx->pc = 0x116820u;

label_116820:
    // 0x116820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x116820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_116824:
    // 0x116824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_116828:
    // 0x116828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x116828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11682c:
    // 0x11682c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_116830:
    // 0x116830: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x116830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_116834:
    // 0x116834: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x116834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_116838:
    // 0x116838: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_11683c:
    if (ctx->pc == 0x11683Cu) {
        ctx->pc = 0x116840u;
        goto label_116840;
    }
    ctx->pc = 0x116838u;
    {
        const bool branch_taken_0x116838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116838) {
            ctx->pc = 0x116848u;
            goto label_116848;
        }
    }
    ctx->pc = 0x116840u;
label_116840:
    // 0x116840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116844:
    // 0x116844: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x116844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_116848:
    // 0x116848: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x116848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_11684c:
    // 0x11684c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11684cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_116850:
    // 0x116850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_116854:
    // 0x116854: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x116854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_116858:
    // 0x116858: 0xc119b68  jal         func_466DA0
label_11685c:
    if (ctx->pc == 0x11685Cu) {
        ctx->pc = 0x116860u;
        goto label_116860;
    }
    ctx->pc = 0x116858u;
    SET_GPR_U32(ctx, 31, 0x116860u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x116858u, 0x116860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116860u;
label_116860:
    // 0x116860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116864:
    // 0x116864: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_116868:
    if (ctx->pc == 0x116868u) {
        ctx->pc = 0x11686Cu;
        goto label_11686c;
    }
    ctx->pc = 0x116864u;
    {
        const bool branch_taken_0x116864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x116864) {
            ctx->pc = 0x116878u;
            goto label_116878;
        }
    }
    ctx->pc = 0x11686Cu;
label_11686c:
    // 0x11686c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11686cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116870:
    // 0x116870: 0x1000000e  b           . + 4 + (0xE << 2)
label_116874:
    if (ctx->pc == 0x116874u) {
        ctx->pc = 0x116878u;
        goto label_116878;
    }
    ctx->pc = 0x116870u;
    {
        const bool branch_taken_0x116870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116870) {
            ctx->pc = 0x1168ACu;
            goto label_1168ac;
        }
    }
    ctx->pc = 0x116878u;
label_116878:
    // 0x116878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11687c:
    // 0x11687c: 0xc0ba088  jal         func_2E8220
label_116880:
    if (ctx->pc == 0x116880u) {
        ctx->pc = 0x116884u;
        goto label_116884;
    }
    ctx->pc = 0x11687Cu;
    SET_GPR_U32(ctx, 31, 0x116884u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x11687Cu, 0x116884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116884u;
label_116884:
    // 0x116884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116888:
    // 0x116888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11688c:
    // 0x11688c: 0xc0ba088  jal         func_2E8220
label_116890:
    if (ctx->pc == 0x116890u) {
        ctx->pc = 0x116894u;
        goto label_116894;
    }
    ctx->pc = 0x11688Cu;
    SET_GPR_U32(ctx, 31, 0x116894u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x11688Cu, 0x116894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116894u;
label_116894:
    // 0x116894: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_116898:
    if (ctx->pc == 0x116898u) {
        ctx->pc = 0x11689Cu;
        goto label_11689c;
    }
    ctx->pc = 0x116894u;
    {
        const bool branch_taken_0x116894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x116894) {
            ctx->pc = 0x116848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116848;
        }
    }
    ctx->pc = 0x11689Cu;
label_11689c:
    // 0x11689c: 0x200f809  jalr        $s0
label_1168a0:
    if (ctx->pc == 0x1168A0u) {
        ctx->pc = 0x1168A4u;
        goto label_1168a4;
    }
    ctx->pc = 0x11689Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1168A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11689Cu, 0x1168A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1168A4u;
label_1168a4:
    // 0x1168a4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1168a8:
    if (ctx->pc == 0x1168A8u) {
        ctx->pc = 0x1168ACu;
        goto label_1168ac;
    }
    ctx->pc = 0x1168A4u;
    {
        const bool branch_taken_0x1168a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1168a4) {
            ctx->pc = 0x116848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116848;
        }
    }
    ctx->pc = 0x1168ACu;
label_1168ac:
    // 0x1168ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1168acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1168b0:
    // 0x1168b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1168b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1168b4:
    // 0x1168b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1168b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1168b8:
    // 0x1168b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1168b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1168bc:
    // 0x1168bc: 0x3e00008  jr          $ra
label_1168c0:
    if (ctx->pc == 0x1168C0u) {
        ctx->pc = 0x1168C4u;
        goto label_1168c4;
    }
    ctx->pc = 0x1168BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168C4u;
label_1168c4:
    // 0x1168c4: 0x0  nop
    ctx->pc = 0x1168c4u;
    // NOP
label_1168c8:
    // 0x1168c8: 0x0  nop
    ctx->pc = 0x1168c8u;
    // NOP
label_1168cc:
    // 0x1168cc: 0x0  nop
    ctx->pc = 0x1168ccu;
    // NOP
    ctx->pc = 0x1168d0u;
}
