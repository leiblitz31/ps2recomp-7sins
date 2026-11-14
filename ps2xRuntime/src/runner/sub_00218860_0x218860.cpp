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

// Function: sub_00218860
// Address: 0x218860 - 0x2188a0
void sub_00218860_0x218860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218860_0x218860");
#endif

    switch (ctx->pc) {
        case 0x21887cu: goto label_21887c;
        case 0x21888cu: goto label_21888c;
        default: break;
    }

    ctx->pc = 0x218860u;

    // 0x218860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21886c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218870: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x218870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218874: 0xc086228  jal         func_2188A0
    ctx->pc = 0x218874u;
    SET_GPR_U32(ctx, 31, 0x21887Cu);
    ctx->pc = 0x2188A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188A0u, 0x218874u, 0x21887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21887Cu;
label_21887c:
    // 0x21887c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21887cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218880: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x218880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218884: 0xc0861d8  jal         func_218760
    ctx->pc = 0x218884u;
    SET_GPR_U32(ctx, 31, 0x21888Cu);
    ctx->pc = 0x218760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218760u, 0x218884u, 0x21888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21888Cu;
label_21888c:
    // 0x21888c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21888cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218890: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x218890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218894: 0x3e00008  jr          $ra
    ctx->pc = 0x218894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21889Cu;
    // 0x21889c: 0x0  nop
    ctx->pc = 0x21889cu;
    // NOP
    ctx->pc = 0x2188a0u;
}
