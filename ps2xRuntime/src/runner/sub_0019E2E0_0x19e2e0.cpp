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

// Function: sub_0019E2E0
// Address: 0x19e2e0 - 0x19e320
void sub_0019E2E0_0x19e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E2E0_0x19e2e0");
#endif

    switch (ctx->pc) {
        case 0x19e310u: goto label_19e310;
        default: break;
    }

    ctx->pc = 0x19e2e0u;

    // 0x19e2e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19e2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e2e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19e2ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19e2f0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x19e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x19e2f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e2f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e2fc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x19e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e300: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19e300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19e304: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19e304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e308: 0xc0678c8  jal         func_19E320
    ctx->pc = 0x19E308u;
    SET_GPR_U32(ctx, 31, 0x19E310u);
    ctx->pc = 0x19E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E320u, 0x19E308u, 0x19E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E310u;
label_19e310:
    // 0x19e310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e314: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19e314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19e318: 0x3e00008  jr          $ra
    ctx->pc = 0x19E318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E320u;
}
