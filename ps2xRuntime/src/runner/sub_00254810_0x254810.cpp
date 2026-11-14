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

// Function: sub_00254810
// Address: 0x254810 - 0x254890
void sub_00254810_0x254810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254810_0x254810");
#endif

    switch (ctx->pc) {
        case 0x254830u: goto label_254830;
        case 0x254840u: goto label_254840;
        case 0x254858u: goto label_254858;
        case 0x254870u: goto label_254870;
        default: break;
    }

    ctx->pc = 0x254810u;

    // 0x254810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25481c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x254820: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254824: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x254824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254828: 0xc095224  jal         func_254890
    ctx->pc = 0x254828u;
    SET_GPR_U32(ctx, 31, 0x254830u);
    ctx->pc = 0x254890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254890u, 0x254828u, 0x254830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254830u;
label_254830:
    // 0x254830: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x254830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x254834: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254838: 0xc095140  jal         func_254500
    ctx->pc = 0x254838u;
    SET_GPR_U32(ctx, 31, 0x254840u);
    ctx->pc = 0x254500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254500u, 0x254838u, 0x254840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254840u;
label_254840:
    // 0x254840: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x254840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x254844: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254848: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x254848u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25484c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254850: 0xc095138  jal         func_2544E0
    ctx->pc = 0x254850u;
    SET_GPR_U32(ctx, 31, 0x254858u);
    ctx->pc = 0x2544E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544E0u, 0x254850u, 0x254858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254858u;
label_254858:
    // 0x254858: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x254858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25485c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254860: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x254860u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254864: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254868: 0xc095130  jal         func_2544C0
    ctx->pc = 0x254868u;
    SET_GPR_U32(ctx, 31, 0x254870u);
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x254868u, 0x254870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254870u;
label_254870:
    // 0x254870: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x254870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x254874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25487c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25487cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254880: 0x3e00008  jr          $ra
    ctx->pc = 0x254880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254888u;
    // 0x254888: 0x0  nop
    ctx->pc = 0x254888u;
    // NOP
    // 0x25488c: 0x0  nop
    ctx->pc = 0x25488cu;
    // NOP
    ctx->pc = 0x254890u;
}
