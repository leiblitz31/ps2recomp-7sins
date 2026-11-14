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

// Function: sub_001901D0
// Address: 0x1901d0 - 0x190210
void sub_001901D0_0x1901d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001901D0_0x1901d0");
#endif

    switch (ctx->pc) {
        case 0x1901ecu: goto label_1901ec;
        case 0x1901fcu: goto label_1901fc;
        default: break;
    }

    ctx->pc = 0x1901d0u;

    // 0x1901d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1901d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1901d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1901d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1901d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1901d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1901dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1901dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1901e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1901e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1901e4: 0xc064084  jal         func_190210
    ctx->pc = 0x1901E4u;
    SET_GPR_U32(ctx, 31, 0x1901ECu);
    ctx->pc = 0x190210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190210u, 0x1901E4u, 0x1901ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901ECu;
label_1901ec:
    // 0x1901ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1901ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1901f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1901f4: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1901F4u;
    SET_GPR_U32(ctx, 31, 0x1901FCu);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1901F4u, 0x1901FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901FCu;
label_1901fc:
    // 0x1901fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1901fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190200: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190204: 0x3e00008  jr          $ra
    ctx->pc = 0x190204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19020Cu;
    // 0x19020c: 0x0  nop
    ctx->pc = 0x19020cu;
    // NOP
    ctx->pc = 0x190210u;
}
