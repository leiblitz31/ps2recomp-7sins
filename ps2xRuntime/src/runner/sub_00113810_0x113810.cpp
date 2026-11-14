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

// Function: sub_00113810
// Address: 0x113810 - 0x113850
void sub_00113810_0x113810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113810_0x113810");
#endif

    switch (ctx->pc) {
        case 0x113834u: goto label_113834;
        default: break;
    }

    ctx->pc = 0x113810u;

    // 0x113810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11381c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11381cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x113820: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x113820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113824: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113828: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x113828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11382c: 0xc044e14  jal         func_113850
    ctx->pc = 0x11382Cu;
    SET_GPR_U32(ctx, 31, 0x113834u);
    ctx->pc = 0x113850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113850u, 0x11382Cu, 0x113834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113834u;
label_113834:
    // 0x113834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113838: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x113838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11383c: 0x3e00008  jr          $ra
    ctx->pc = 0x11383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11383Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113844u;
    // 0x113844: 0x0  nop
    ctx->pc = 0x113844u;
    // NOP
    // 0x113848: 0x0  nop
    ctx->pc = 0x113848u;
    // NOP
    // 0x11384c: 0x0  nop
    ctx->pc = 0x11384cu;
    // NOP
    ctx->pc = 0x113850u;
}
