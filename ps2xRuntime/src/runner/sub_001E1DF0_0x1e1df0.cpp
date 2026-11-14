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

// Function: sub_001E1DF0
// Address: 0x1e1df0 - 0x1e1e30
void sub_001E1DF0_0x1e1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1DF0_0x1e1df0");
#endif

    switch (ctx->pc) {
        case 0x1e1e20u: goto label_1e1e20;
        default: break;
    }

    ctx->pc = 0x1e1df0u;

    // 0x1e1df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e1df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1df8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1dfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1e00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e1e04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1e08: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1e0c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e1e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1e10: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1e1e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e1e14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e1e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e18: 0xc07878c  jal         func_1E1E30
    ctx->pc = 0x1E1E18u;
    SET_GPR_U32(ctx, 31, 0x1E1E20u);
    ctx->pc = 0x1E1E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1E30u, 0x1E1E18u, 0x1E1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E20u;
label_1e1e20:
    // 0x1e1e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e1e24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e1e28: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1E30u;
}
