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

// Function: sub_002338E0
// Address: 0x2338e0 - 0x233920
void sub_002338E0_0x2338e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002338E0_0x2338e0");
#endif

    switch (ctx->pc) {
        case 0x233900u: goto label_233900;
        default: break;
    }

    ctx->pc = 0x2338e0u;

    // 0x2338e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2338e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2338e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2338e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2338e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2338e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2338ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2338ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2338f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2338f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2338f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2338f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2338f8: 0xc08ce48  jal         func_233920
    ctx->pc = 0x2338F8u;
    SET_GPR_U32(ctx, 31, 0x233900u);
    ctx->pc = 0x233920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233920u, 0x2338F8u, 0x233900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233900u;
label_233900:
    // 0x233900: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233908: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x233908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23390c: 0x3e00008  jr          $ra
    ctx->pc = 0x23390Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23390Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233914u;
    // 0x233914: 0x0  nop
    ctx->pc = 0x233914u;
    // NOP
    // 0x233918: 0x0  nop
    ctx->pc = 0x233918u;
    // NOP
    // 0x23391c: 0x0  nop
    ctx->pc = 0x23391cu;
    // NOP
    ctx->pc = 0x233920u;
}
