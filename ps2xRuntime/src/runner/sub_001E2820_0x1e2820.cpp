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

// Function: sub_001E2820
// Address: 0x1e2820 - 0x1e28c0
void sub_001E2820_0x1e2820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2820_0x1e2820");
#endif

    switch (ctx->pc) {
        case 0x1e2844u: goto label_1e2844;
        case 0x1e2854u: goto label_1e2854;
        case 0x1e2868u: goto label_1e2868;
        case 0x1e2880u: goto label_1e2880;
        case 0x1e28a0u: goto label_1e28a0;
        default: break;
    }

    ctx->pc = 0x1e2820u;

    // 0x1e2820: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e2820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e2824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e282c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e2830: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e2830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e2834: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e2834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e2838: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e2838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1e283c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E283Cu;
    {
        const bool branch_taken_0x1e283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e283c) {
            ctx->pc = 0x1E2884u;
            goto label_1e2884;
        }
    }
    ctx->pc = 0x1E2844u;
label_1e2844:
    // 0x1e2844: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2848: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e2848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e284c: 0xc078858  jal         func_1E2160
    ctx->pc = 0x1E284Cu;
    SET_GPR_U32(ctx, 31, 0x1E2854u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x1E284Cu, 0x1E2854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2854u;
label_1e2854:
    // 0x1e2854: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e2854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2858: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e285c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1e285cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2860: 0xc078820  jal         func_1E2080
    ctx->pc = 0x1E2860u;
    SET_GPR_U32(ctx, 31, 0x1E2868u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x1E2860u, 0x1E2868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2868u;
label_1e2868:
    // 0x1e2868: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e286c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e2870: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1e2870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1e2874: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e2874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2878: 0xc078a30  jal         func_1E28C0
    ctx->pc = 0x1E2878u;
    SET_GPR_U32(ctx, 31, 0x1E2880u);
    ctx->pc = 0x1E28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28C0u, 0x1E2878u, 0x1E2880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2880u;
label_1e2880:
    // 0x1e2880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2884:
    // 0x1e2884: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2888: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1E2888u;
    {
        const bool branch_taken_0x1e2888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2888) {
            ctx->pc = 0x1E2844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2844;
        }
    }
    ctx->pc = 0x1E2890u;
    // 0x1e2890: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e2890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2894: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e2894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2898: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2898u;
    SET_GPR_U32(ctx, 31, 0x1E28A0u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2898u, 0x1E28A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E28A0u;
label_1e28a0:
    // 0x1e28a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e28a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e28a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e28a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e28a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e28a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e28ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E28ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E28ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E28B4u;
    // 0x1e28b4: 0x0  nop
    ctx->pc = 0x1e28b4u;
    // NOP
    // 0x1e28b8: 0x0  nop
    ctx->pc = 0x1e28b8u;
    // NOP
    // 0x1e28bc: 0x0  nop
    ctx->pc = 0x1e28bcu;
    // NOP
    ctx->pc = 0x1e28c0u;
}
