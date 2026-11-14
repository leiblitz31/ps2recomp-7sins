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

// Function: sub_00232830
// Address: 0x232830 - 0x2328e0
void sub_00232830_0x232830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232830_0x232830");
#endif

    switch (ctx->pc) {
        case 0x232830u: goto label_232830;
        case 0x232834u: goto label_232834;
        case 0x232838u: goto label_232838;
        case 0x23283cu: goto label_23283c;
        case 0x232840u: goto label_232840;
        case 0x232844u: goto label_232844;
        case 0x232848u: goto label_232848;
        case 0x23284cu: goto label_23284c;
        case 0x232850u: goto label_232850;
        case 0x232854u: goto label_232854;
        case 0x232858u: goto label_232858;
        case 0x23285cu: goto label_23285c;
        case 0x232860u: goto label_232860;
        case 0x232864u: goto label_232864;
        case 0x232868u: goto label_232868;
        case 0x23286cu: goto label_23286c;
        case 0x232870u: goto label_232870;
        case 0x232874u: goto label_232874;
        case 0x232878u: goto label_232878;
        case 0x23287cu: goto label_23287c;
        case 0x232880u: goto label_232880;
        case 0x232884u: goto label_232884;
        case 0x232888u: goto label_232888;
        case 0x23288cu: goto label_23288c;
        case 0x232890u: goto label_232890;
        case 0x232894u: goto label_232894;
        case 0x232898u: goto label_232898;
        case 0x23289cu: goto label_23289c;
        case 0x2328a0u: goto label_2328a0;
        case 0x2328a4u: goto label_2328a4;
        case 0x2328a8u: goto label_2328a8;
        case 0x2328acu: goto label_2328ac;
        case 0x2328b0u: goto label_2328b0;
        case 0x2328b4u: goto label_2328b4;
        case 0x2328b8u: goto label_2328b8;
        case 0x2328bcu: goto label_2328bc;
        case 0x2328c0u: goto label_2328c0;
        case 0x2328c4u: goto label_2328c4;
        case 0x2328c8u: goto label_2328c8;
        case 0x2328ccu: goto label_2328cc;
        case 0x2328d0u: goto label_2328d0;
        case 0x2328d4u: goto label_2328d4;
        case 0x2328d8u: goto label_2328d8;
        case 0x2328dcu: goto label_2328dc;
        default: break;
    }

    ctx->pc = 0x232830u;

label_232830:
    // 0x232830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_232834:
    // 0x232834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_232838:
    // 0x232838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23283c:
    // 0x23283c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232840:
    // 0x232840: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x232840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_232844:
    // 0x232844: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x232844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_232848:
    // 0x232848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23284c:
    if (ctx->pc == 0x23284Cu) {
        ctx->pc = 0x232850u;
        goto label_232850;
    }
    ctx->pc = 0x232848u;
    {
        const bool branch_taken_0x232848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232848) {
            ctx->pc = 0x232858u;
            goto label_232858;
        }
    }
    ctx->pc = 0x232850u;
label_232850:
    // 0x232850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232854:
    // 0x232854: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x232854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_232858:
    // 0x232858: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x232858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23285c:
    // 0x23285c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23285cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_232860:
    // 0x232860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232864:
    // 0x232864: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x232864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_232868:
    // 0x232868: 0xc119b68  jal         func_466DA0
label_23286c:
    if (ctx->pc == 0x23286Cu) {
        ctx->pc = 0x232870u;
        goto label_232870;
    }
    ctx->pc = 0x232868u;
    SET_GPR_U32(ctx, 31, 0x232870u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x232868u, 0x232870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232870u;
label_232870:
    // 0x232870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232874:
    // 0x232874: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_232878:
    if (ctx->pc == 0x232878u) {
        ctx->pc = 0x23287Cu;
        goto label_23287c;
    }
    ctx->pc = 0x232874u;
    {
        const bool branch_taken_0x232874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x232874) {
            ctx->pc = 0x232888u;
            goto label_232888;
        }
    }
    ctx->pc = 0x23287Cu;
label_23287c:
    // 0x23287c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23287cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232880:
    // 0x232880: 0x1000000e  b           . + 4 + (0xE << 2)
label_232884:
    if (ctx->pc == 0x232884u) {
        ctx->pc = 0x232888u;
        goto label_232888;
    }
    ctx->pc = 0x232880u;
    {
        const bool branch_taken_0x232880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232880) {
            ctx->pc = 0x2328BCu;
            goto label_2328bc;
        }
    }
    ctx->pc = 0x232888u;
label_232888:
    // 0x232888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x232888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23288c:
    // 0x23288c: 0xc0ba088  jal         func_2E8220
label_232890:
    if (ctx->pc == 0x232890u) {
        ctx->pc = 0x232894u;
        goto label_232894;
    }
    ctx->pc = 0x23288Cu;
    SET_GPR_U32(ctx, 31, 0x232894u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x23288Cu, 0x232894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232894u;
label_232894:
    // 0x232894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232898:
    // 0x232898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23289c:
    // 0x23289c: 0xc0ba088  jal         func_2E8220
label_2328a0:
    if (ctx->pc == 0x2328A0u) {
        ctx->pc = 0x2328A4u;
        goto label_2328a4;
    }
    ctx->pc = 0x23289Cu;
    SET_GPR_U32(ctx, 31, 0x2328A4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x23289Cu, 0x2328A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328A4u;
label_2328a4:
    // 0x2328a4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_2328a8:
    if (ctx->pc == 0x2328A8u) {
        ctx->pc = 0x2328ACu;
        goto label_2328ac;
    }
    ctx->pc = 0x2328A4u;
    {
        const bool branch_taken_0x2328a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2328a4) {
            ctx->pc = 0x232858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232858;
        }
    }
    ctx->pc = 0x2328ACu;
label_2328ac:
    // 0x2328ac: 0x200f809  jalr        $s0
label_2328b0:
    if (ctx->pc == 0x2328B0u) {
        ctx->pc = 0x2328B4u;
        goto label_2328b4;
    }
    ctx->pc = 0x2328ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2328B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2328ACu, 0x2328B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2328B4u;
label_2328b4:
    // 0x2328b4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_2328b8:
    if (ctx->pc == 0x2328B8u) {
        ctx->pc = 0x2328BCu;
        goto label_2328bc;
    }
    ctx->pc = 0x2328B4u;
    {
        const bool branch_taken_0x2328b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2328b4) {
            ctx->pc = 0x232858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232858;
        }
    }
    ctx->pc = 0x2328BCu;
label_2328bc:
    // 0x2328bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2328bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2328c0:
    // 0x2328c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2328c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2328c4:
    // 0x2328c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2328c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2328c8:
    // 0x2328c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2328c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2328cc:
    // 0x2328cc: 0x3e00008  jr          $ra
label_2328d0:
    if (ctx->pc == 0x2328D0u) {
        ctx->pc = 0x2328D4u;
        goto label_2328d4;
    }
    ctx->pc = 0x2328CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2328CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2328D4u;
label_2328d4:
    // 0x2328d4: 0x0  nop
    ctx->pc = 0x2328d4u;
    // NOP
label_2328d8:
    // 0x2328d8: 0x0  nop
    ctx->pc = 0x2328d8u;
    // NOP
label_2328dc:
    // 0x2328dc: 0x0  nop
    ctx->pc = 0x2328dcu;
    // NOP
    ctx->pc = 0x2328e0u;
}
