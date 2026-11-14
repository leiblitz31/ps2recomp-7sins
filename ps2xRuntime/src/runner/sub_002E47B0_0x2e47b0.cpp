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

// Function: sub_002E47B0
// Address: 0x2e47b0 - 0x2e48d0
void sub_002E47B0_0x2e47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E47B0_0x2e47b0");
#endif

    switch (ctx->pc) {
        case 0x2e47d8u: goto label_2e47d8;
        case 0x2e47e8u: goto label_2e47e8;
        case 0x2e47fcu: goto label_2e47fc;
        case 0x2e4810u: goto label_2e4810;
        case 0x2e482cu: goto label_2e482c;
        case 0x2e4878u: goto label_2e4878;
        case 0x2e488cu: goto label_2e488c;
        case 0x2e489cu: goto label_2e489c;
        case 0x2e48b0u: goto label_2e48b0;
        default: break;
    }

    ctx->pc = 0x2e47b0u;

    // 0x2e47b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e47b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e47b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e47b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e47b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e47b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e47bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e47bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e47c0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2e47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2e47c4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2e47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2e47c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e47cc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e47ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e47d0: 0xc044598  jal         func_111660
    ctx->pc = 0x2E47D0u;
    SET_GPR_U32(ctx, 31, 0x2E47D8u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x2E47D0u, 0x2E47D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47D8u;
label_2e47d8:
    // 0x2e47d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e47d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e47dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E47E0u;
    {
        const bool branch_taken_0x2e47e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e47e0) {
            ctx->pc = 0x2E4840u;
            goto label_2e4840;
        }
    }
    ctx->pc = 0x2E47E8u;
label_2e47e8:
    // 0x2e47e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e47ec: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e47f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e47f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47f4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2E47F4u;
    SET_GPR_U32(ctx, 31, 0x2E47FCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2E47F4u, 0x2E47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47FCu;
label_2e47fc:
    // 0x2e47fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4800: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x2e4800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2e4804: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e4804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4808: 0xc0b9804  jal         func_2E6010
    ctx->pc = 0x2E4808u;
    SET_GPR_U32(ctx, 31, 0x2E4810u);
    ctx->pc = 0x2E6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6010u, 0x2E4808u, 0x2E4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4810u;
label_2e4810:
    // 0x2e4810: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E4810u;
    {
        const bool branch_taken_0x2e4810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4810) {
            ctx->pc = 0x2E483Cu;
            goto label_2e483c;
        }
    }
    ctx->pc = 0x2E4818u;
    // 0x2e4818: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e481c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e4820: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4824: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2E4824u;
    SET_GPR_U32(ctx, 31, 0x2E482Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2E4824u, 0x2E482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E482Cu;
label_2e482c:
    // 0x2e482c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4830: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2e4830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2e4834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4834u;
    {
        const bool branch_taken_0x2e4834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4834) {
            ctx->pc = 0x2E484Cu;
            goto label_2e484c;
        }
    }
    ctx->pc = 0x2E483Cu;
label_2e483c:
    // 0x2e483c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e483cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e4840:
    // 0x2e4840: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2e4840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e4844: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E4844u;
    {
        const bool branch_taken_0x2e4844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4844) {
            ctx->pc = 0x2E47E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e47e8;
        }
    }
    ctx->pc = 0x2E484Cu;
label_2e484c:
    // 0x2e484c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2e484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2e4850: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4850u;
    {
        const bool branch_taken_0x2e4850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4850) {
            ctx->pc = 0x2E4864u;
            goto label_2e4864;
        }
    }
    ctx->pc = 0x2E4858u;
    // 0x2e4858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e485c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E485Cu;
    {
        const bool branch_taken_0x2e485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e485c) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E4864u;
label_2e4864:
    // 0x2e4864: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e4864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4868: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x2e4868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2e486c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2e486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2e4870: 0xc0b9844  jal         func_2E6110
    ctx->pc = 0x2E4870u;
    SET_GPR_U32(ctx, 31, 0x2E4878u);
    ctx->pc = 0x2E6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6110u, 0x2E4870u, 0x2E4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4878u;
label_2e4878:
    // 0x2e4878: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e4878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e487c: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x2e487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2e4880: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2e4880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2e4884: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2E4884u;
    SET_GPR_U32(ctx, 31, 0x2E488Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2E4884u, 0x2E488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E488Cu;
label_2e488c:
    // 0x2e488c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4890: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x2e4890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2e4894: 0xc0b9eb4  jal         func_2E7AD0
    ctx->pc = 0x2E4894u;
    SET_GPR_U32(ctx, 31, 0x2E489Cu);
    ctx->pc = 0x2E7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7AD0u, 0x2E4894u, 0x2E489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E489Cu;
label_2e489c:
    // 0x2e489c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E489Cu;
    {
        const bool branch_taken_0x2e489c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e489c) {
            ctx->pc = 0x2E48B0u;
            goto label_2e48b0;
        }
    }
    ctx->pc = 0x2E48A4u;
    // 0x2e48a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2e48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e48a8: 0xc0b9544  jal         func_2E5510
    ctx->pc = 0x2E48A8u;
    SET_GPR_U32(ctx, 31, 0x2E48B0u);
    ctx->pc = 0x2E5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5510u, 0x2E48A8u, 0x2E48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48B0u;
label_2e48b0:
    // 0x2e48b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e48b4:
    // 0x2e48b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e48b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e48b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e48b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e48bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e48bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e48c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e48c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e48c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E48C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E48C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E48CCu;
    // 0x2e48cc: 0x0  nop
    ctx->pc = 0x2e48ccu;
    // NOP
    ctx->pc = 0x2e48d0u;
}
