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

// Function: sub_001BA1D0
// Address: 0x1ba1d0 - 0x1ba210
void sub_001BA1D0_0x1ba1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA1D0_0x1ba1d0");
#endif

    switch (ctx->pc) {
        case 0x1ba200u: goto label_1ba200;
        default: break;
    }

    ctx->pc = 0x1ba1d0u;

    // 0x1ba1d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ba1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ba1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba1d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ba1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ba1dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ba1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ba1e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1ba1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1ba1e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba1e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ba1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba1ec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba1f0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1ba1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ba1f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ba1f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1f8: 0xc06e884  jal         func_1BA210
    ctx->pc = 0x1BA1F8u;
    SET_GPR_U32(ctx, 31, 0x1BA200u);
    ctx->pc = 0x1BA210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA210u, 0x1BA1F8u, 0x1BA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA200u;
label_1ba200:
    // 0x1ba200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba204: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ba204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ba208: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA210u;
}
