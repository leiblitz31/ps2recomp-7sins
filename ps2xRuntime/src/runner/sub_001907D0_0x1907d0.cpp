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

// Function: sub_001907D0
// Address: 0x1907d0 - 0x190810
void sub_001907D0_0x1907d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001907D0_0x1907d0");
#endif

    switch (ctx->pc) {
        case 0x1907ecu: goto label_1907ec;
        case 0x1907fcu: goto label_1907fc;
        default: break;
    }

    ctx->pc = 0x1907d0u;

    // 0x1907d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1907d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1907d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1907d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1907d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1907d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1907dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1907dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1907e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1907e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1907e4: 0xc064124  jal         func_190490
    ctx->pc = 0x1907E4u;
    SET_GPR_U32(ctx, 31, 0x1907ECu);
    ctx->pc = 0x190490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190490u, 0x1907E4u, 0x1907ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1907ECu;
label_1907ec:
    // 0x1907ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1907ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1907f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1907f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1907f4: 0xc0641c0  jal         func_190700
    ctx->pc = 0x1907F4u;
    SET_GPR_U32(ctx, 31, 0x1907FCu);
    ctx->pc = 0x190700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190700u, 0x1907F4u, 0x1907FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1907FCu;
label_1907fc:
    // 0x1907fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1907fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190800: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190804: 0x3e00008  jr          $ra
    ctx->pc = 0x190804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19080Cu;
    // 0x19080c: 0x0  nop
    ctx->pc = 0x19080cu;
    // NOP
    ctx->pc = 0x190810u;
}
