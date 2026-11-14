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

// Function: sub_00243850
// Address: 0x243850 - 0x2438f0
void sub_00243850_0x243850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243850_0x243850");
#endif

    switch (ctx->pc) {
        case 0x243850u: goto label_243850;
        case 0x243854u: goto label_243854;
        case 0x243858u: goto label_243858;
        case 0x24385cu: goto label_24385c;
        case 0x243860u: goto label_243860;
        case 0x243864u: goto label_243864;
        case 0x243868u: goto label_243868;
        case 0x24386cu: goto label_24386c;
        case 0x243870u: goto label_243870;
        case 0x243874u: goto label_243874;
        case 0x243878u: goto label_243878;
        case 0x24387cu: goto label_24387c;
        case 0x243880u: goto label_243880;
        case 0x243884u: goto label_243884;
        case 0x243888u: goto label_243888;
        case 0x24388cu: goto label_24388c;
        case 0x243890u: goto label_243890;
        case 0x243894u: goto label_243894;
        case 0x243898u: goto label_243898;
        case 0x24389cu: goto label_24389c;
        case 0x2438a0u: goto label_2438a0;
        case 0x2438a4u: goto label_2438a4;
        case 0x2438a8u: goto label_2438a8;
        case 0x2438acu: goto label_2438ac;
        case 0x2438b0u: goto label_2438b0;
        case 0x2438b4u: goto label_2438b4;
        case 0x2438b8u: goto label_2438b8;
        case 0x2438bcu: goto label_2438bc;
        case 0x2438c0u: goto label_2438c0;
        case 0x2438c4u: goto label_2438c4;
        case 0x2438c8u: goto label_2438c8;
        case 0x2438ccu: goto label_2438cc;
        case 0x2438d0u: goto label_2438d0;
        case 0x2438d4u: goto label_2438d4;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438dcu: goto label_2438dc;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        default: break;
    }

    ctx->pc = 0x243850u;

label_243850:
    // 0x243850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x243850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_243854:
    // 0x243854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x243854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_243858:
    // 0x243858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24385c:
    // 0x24385c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_243860:
    // 0x243860: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x243860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_243864:
    // 0x243864: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x243864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_243868:
    // 0x243868: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24386c:
    if (ctx->pc == 0x24386Cu) {
        ctx->pc = 0x243870u;
        goto label_243870;
    }
    ctx->pc = 0x243868u;
    {
        const bool branch_taken_0x243868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243868) {
            ctx->pc = 0x243878u;
            goto label_243878;
        }
    }
    ctx->pc = 0x243870u;
label_243870:
    // 0x243870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243874:
    // 0x243874: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x243874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_243878:
    // 0x243878: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x243878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_24387c:
    // 0x24387c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x24387cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_243880:
    // 0x243880: 0xc119b68  jal         func_466DA0
label_243884:
    if (ctx->pc == 0x243884u) {
        ctx->pc = 0x243888u;
        goto label_243888;
    }
    ctx->pc = 0x243880u;
    SET_GPR_U32(ctx, 31, 0x243888u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x243880u, 0x243888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243888u;
label_243888:
    // 0x243888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x243888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24388c:
    // 0x24388c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_243890:
    if (ctx->pc == 0x243890u) {
        ctx->pc = 0x243894u;
        goto label_243894;
    }
    ctx->pc = 0x24388Cu;
    {
        const bool branch_taken_0x24388c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24388c) {
            ctx->pc = 0x2438A0u;
            goto label_2438a0;
        }
    }
    ctx->pc = 0x243894u;
label_243894:
    // 0x243894: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x243894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243898:
    // 0x243898: 0x1000000e  b           . + 4 + (0xE << 2)
label_24389c:
    if (ctx->pc == 0x24389Cu) {
        ctx->pc = 0x2438A0u;
        goto label_2438a0;
    }
    ctx->pc = 0x243898u;
    {
        const bool branch_taken_0x243898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243898) {
            ctx->pc = 0x2438D4u;
            goto label_2438d4;
        }
    }
    ctx->pc = 0x2438A0u;
label_2438a0:
    // 0x2438a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2438a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2438a4:
    // 0x2438a4: 0xc0ba088  jal         func_2E8220
label_2438a8:
    if (ctx->pc == 0x2438A8u) {
        ctx->pc = 0x2438ACu;
        goto label_2438ac;
    }
    ctx->pc = 0x2438A4u;
    SET_GPR_U32(ctx, 31, 0x2438ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2438A4u, 0x2438ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438ACu;
label_2438ac:
    // 0x2438ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2438acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2438b0:
    // 0x2438b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2438b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2438b4:
    // 0x2438b4: 0xc0ba088  jal         func_2E8220
label_2438b8:
    if (ctx->pc == 0x2438B8u) {
        ctx->pc = 0x2438BCu;
        goto label_2438bc;
    }
    ctx->pc = 0x2438B4u;
    SET_GPR_U32(ctx, 31, 0x2438BCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2438B4u, 0x2438BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438BCu;
label_2438bc:
    // 0x2438bc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2438c0:
    if (ctx->pc == 0x2438C0u) {
        ctx->pc = 0x2438C4u;
        goto label_2438c4;
    }
    ctx->pc = 0x2438BCu;
    {
        const bool branch_taken_0x2438bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438bc) {
            ctx->pc = 0x243878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243878;
        }
    }
    ctx->pc = 0x2438C4u;
label_2438c4:
    // 0x2438c4: 0x200f809  jalr        $s0
label_2438c8:
    if (ctx->pc == 0x2438C8u) {
        ctx->pc = 0x2438CCu;
        goto label_2438cc;
    }
    ctx->pc = 0x2438C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2438CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2438C4u, 0x2438CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2438CCu;
label_2438cc:
    // 0x2438cc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2438d0:
    if (ctx->pc == 0x2438D0u) {
        ctx->pc = 0x2438D4u;
        goto label_2438d4;
    }
    ctx->pc = 0x2438CCu;
    {
        const bool branch_taken_0x2438cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438cc) {
            ctx->pc = 0x243878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243878;
        }
    }
    ctx->pc = 0x2438D4u;
label_2438d4:
    // 0x2438d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2438d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2438d8:
    // 0x2438d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2438d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2438dc:
    // 0x2438dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2438dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2438e0:
    // 0x2438e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2438e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2438e4:
    // 0x2438e4: 0x3e00008  jr          $ra
label_2438e8:
    if (ctx->pc == 0x2438E8u) {
        ctx->pc = 0x2438ECu;
        goto label_2438ec;
    }
    ctx->pc = 0x2438E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2438E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2438ECu;
label_2438ec:
    // 0x2438ec: 0x0  nop
    ctx->pc = 0x2438ecu;
    // NOP
    ctx->pc = 0x2438f0u;
}
