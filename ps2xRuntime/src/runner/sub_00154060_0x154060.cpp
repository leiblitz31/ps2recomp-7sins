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

// Function: sub_00154060
// Address: 0x154060 - 0x1540a0
void sub_00154060_0x154060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154060_0x154060");
#endif

    switch (ctx->pc) {
        case 0x15407cu: goto label_15407c;
        case 0x15408cu: goto label_15408c;
        default: break;
    }

    ctx->pc = 0x154060u;

    // 0x154060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15406c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15406cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x154070: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x154070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154074: 0xc054e64  jal         func_153990
    ctx->pc = 0x154074u;
    SET_GPR_U32(ctx, 31, 0x15407Cu);
    ctx->pc = 0x153990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153990u, 0x154074u, 0x15407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15407Cu;
label_15407c:
    // 0x15407c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15407cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154080: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x154080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154084: 0xc054fc4  jal         func_153F10
    ctx->pc = 0x154084u;
    SET_GPR_U32(ctx, 31, 0x15408Cu);
    ctx->pc = 0x153F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F10u, 0x154084u, 0x15408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15408Cu;
label_15408c:
    // 0x15408c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15408cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154090: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154094: 0x3e00008  jr          $ra
    ctx->pc = 0x154094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15409Cu;
    // 0x15409c: 0x0  nop
    ctx->pc = 0x15409cu;
    // NOP
    ctx->pc = 0x1540a0u;
}
