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

// Function: sub_00281400
// Address: 0x281400 - 0x281440
void sub_00281400_0x281400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281400_0x281400");
#endif

    switch (ctx->pc) {
        case 0x28141cu: goto label_28141c;
        case 0x28142cu: goto label_28142c;
        default: break;
    }

    ctx->pc = 0x281400u;

    // 0x281400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28140c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28140cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x281410: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281414: 0xc0a01c0  jal         func_280700
    ctx->pc = 0x281414u;
    SET_GPR_U32(ctx, 31, 0x28141Cu);
    ctx->pc = 0x280700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280700u, 0x281414u, 0x28141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28141Cu;
label_28141c:
    // 0x28141c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281420: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x281420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281424: 0xc0a0498  jal         func_281260
    ctx->pc = 0x281424u;
    SET_GPR_U32(ctx, 31, 0x28142Cu);
    ctx->pc = 0x281260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281260u, 0x281424u, 0x28142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28142Cu;
label_28142c:
    // 0x28142c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28142cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281430: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x281430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x281434: 0x3e00008  jr          $ra
    ctx->pc = 0x281434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28143Cu;
    // 0x28143c: 0x0  nop
    ctx->pc = 0x28143cu;
    // NOP
    ctx->pc = 0x281440u;
}
