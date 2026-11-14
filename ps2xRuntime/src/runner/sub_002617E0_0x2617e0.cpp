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

// Function: sub_002617E0
// Address: 0x2617e0 - 0x2618d0
void sub_002617E0_0x2617e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002617E0_0x2617e0");
#endif

    switch (ctx->pc) {
        case 0x261804u: goto label_261804;
        case 0x261820u: goto label_261820;
        case 0x261854u: goto label_261854;
        case 0x261864u: goto label_261864;
        case 0x261884u: goto label_261884;
        case 0x2618acu: goto label_2618ac;
        default: break;
    }

    ctx->pc = 0x2617e0u;

    // 0x2617e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2617e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2617e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2617e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2617e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2617e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2617ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2617ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2617f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2617f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2617f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2617f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2617f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2617f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2617fc: 0xc098698  jal         func_261A60
    ctx->pc = 0x2617FCu;
    SET_GPR_U32(ctx, 31, 0x261804u);
    ctx->pc = 0x261A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A60u, 0x2617FCu, 0x261804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261804u;
label_261804:
    // 0x261804: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x261804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261808: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x261808u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x26180c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x26180Cu;
    {
        const bool branch_taken_0x26180c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26180c) {
            ctx->pc = 0x2618ACu;
            goto label_2618ac;
        }
    }
    ctx->pc = 0x261814u;
    // 0x261814: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x261814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261818: 0xc097f28  jal         func_25FCA0
    ctx->pc = 0x261818u;
    SET_GPR_U32(ctx, 31, 0x261820u);
    ctx->pc = 0x25FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA0u, 0x261818u, 0x261820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261820u;
label_261820:
    // 0x261820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x261820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261824: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x261824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x261828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26182c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26182Cu;
    {
        const bool branch_taken_0x26182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26182c) {
            ctx->pc = 0x26186Cu;
            goto label_26186c;
        }
    }
    ctx->pc = 0x261834u;
    // 0x261834: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x261834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261838: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x261838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26183c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261840: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x261840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261844: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x261844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261848: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x261848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26184c: 0xc098634  jal         func_2618D0
    ctx->pc = 0x26184Cu;
    SET_GPR_U32(ctx, 31, 0x261854u);
    ctx->pc = 0x2618D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2618D0u, 0x26184Cu, 0x261854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261854u;
label_261854:
    // 0x261854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261858: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x261858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26185c: 0xc097eec  jal         func_25FBB0
    ctx->pc = 0x26185Cu;
    SET_GPR_U32(ctx, 31, 0x261864u);
    ctx->pc = 0x25FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FBB0u, 0x26185Cu, 0x261864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261864u;
label_261864:
    // 0x261864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261864u;
    {
        const bool branch_taken_0x261864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261864) {
            ctx->pc = 0x261888u;
            goto label_261888;
        }
    }
    ctx->pc = 0x26186Cu;
label_26186c:
    // 0x26186c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261870: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x261870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x261874: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x261874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x261878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26187c: 0xc0985b0  jal         func_2616C0
    ctx->pc = 0x26187Cu;
    SET_GPR_U32(ctx, 31, 0x261884u);
    ctx->pc = 0x2616C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616C0u, 0x26187Cu, 0x261884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261884u;
label_261884:
    // 0x261884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261888:
    // 0x261888: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x261888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26188c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x26188cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x261890: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x261890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x261894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261898: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x261898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26189c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2618a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2618a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2618a4: 0xc097ed8  jal         func_25FB60
    ctx->pc = 0x2618A4u;
    SET_GPR_U32(ctx, 31, 0x2618ACu);
    ctx->pc = 0x25FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FB60u, 0x2618A4u, 0x2618ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618ACu;
label_2618ac:
    // 0x2618ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2618acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2618b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2618b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2618b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2618b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2618b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2618b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2618bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2618BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2618BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2618C4u;
    // 0x2618c4: 0x0  nop
    ctx->pc = 0x2618c4u;
    // NOP
    // 0x2618c8: 0x0  nop
    ctx->pc = 0x2618c8u;
    // NOP
    // 0x2618cc: 0x0  nop
    ctx->pc = 0x2618ccu;
    // NOP
    ctx->pc = 0x2618d0u;
}
