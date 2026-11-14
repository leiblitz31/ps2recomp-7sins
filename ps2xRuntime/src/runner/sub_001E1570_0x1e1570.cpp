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

// Function: sub_001E1570
// Address: 0x1e1570 - 0x1e1640
void sub_001E1570_0x1e1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1570_0x1e1570");
#endif

    switch (ctx->pc) {
        case 0x1e1598u: goto label_1e1598;
        case 0x1e15b0u: goto label_1e15b0;
        case 0x1e15d0u: goto label_1e15d0;
        case 0x1e15e4u: goto label_1e15e4;
        case 0x1e15f8u: goto label_1e15f8;
        case 0x1e1608u: goto label_1e1608;
        case 0x1e1624u: goto label_1e1624;
        default: break;
    }

    ctx->pc = 0x1e1570u;

    // 0x1e1570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e157c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e157cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1580: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e1580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1584: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e1584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e1588: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1e1588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e158c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e158cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1590: 0xc078538  jal         func_1E14E0
    ctx->pc = 0x1E1590u;
    SET_GPR_U32(ctx, 31, 0x1E1598u);
    ctx->pc = 0x1E14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E14E0u, 0x1E1590u, 0x1E1598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1598u;
label_1e1598:
    // 0x1e1598: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e1598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e159c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E159Cu;
    {
        const bool branch_taken_0x1e159c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e159c) {
            ctx->pc = 0x1E15ECu;
            goto label_1e15ec;
        }
    }
    ctx->pc = 0x1E15A4u;
    // 0x1e15a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e15a8: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E15A8u;
    SET_GPR_U32(ctx, 31, 0x1E15B0u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E15A8u, 0x1E15B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15B0u;
label_1e15b0:
    // 0x1e15b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e15b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e15b4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e15b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e15bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e15c0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e15c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e15c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e15c8: 0xc078600  jal         func_1E1800
    ctx->pc = 0x1E15C8u;
    SET_GPR_U32(ctx, 31, 0x1E15D0u);
    ctx->pc = 0x1E1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1800u, 0x1E15C8u, 0x1E15D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15D0u;
label_1e15d0:
    // 0x1e15d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e15d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e15d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e15d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e15d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e15dc: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1E15DCu;
    SET_GPR_U32(ctx, 31, 0x1E15E4u);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1E15DCu, 0x1E15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15E4u;
label_1e15e4:
    // 0x1e15e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E15E4u;
    {
        const bool branch_taken_0x1e15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e15e4) {
            ctx->pc = 0x1E1624u;
            goto label_1e1624;
        }
    }
    ctx->pc = 0x1E15ECu;
label_1e15ec:
    // 0x1e15ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e15f0: 0xc078600  jal         func_1E1800
    ctx->pc = 0x1E15F0u;
    SET_GPR_U32(ctx, 31, 0x1E15F8u);
    ctx->pc = 0x1E1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1800u, 0x1E15F0u, 0x1E15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15F8u;
label_1e15f8:
    // 0x1e15f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e15f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e15fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1600: 0xc078538  jal         func_1E14E0
    ctx->pc = 0x1E1600u;
    SET_GPR_U32(ctx, 31, 0x1E1608u);
    ctx->pc = 0x1E14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E14E0u, 0x1E1600u, 0x1E1608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1608u;
label_1e1608:
    // 0x1e1608: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e160c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e160cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1610: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1618: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1e1618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e161c: 0xc078590  jal         func_1E1640
    ctx->pc = 0x1E161Cu;
    SET_GPR_U32(ctx, 31, 0x1E1624u);
    ctx->pc = 0x1E1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1640u, 0x1E161Cu, 0x1E1624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1624u;
label_1e1624:
    // 0x1e1624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e162c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e162cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e1630: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1638u;
    // 0x1e1638: 0x0  nop
    ctx->pc = 0x1e1638u;
    // NOP
    // 0x1e163c: 0x0  nop
    ctx->pc = 0x1e163cu;
    // NOP
    ctx->pc = 0x1e1640u;
}
