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

// Function: sub_0028E6E0
// Address: 0x28e6e0 - 0x28e720
void sub_0028E6E0_0x28e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E6E0_0x28e6e0");
#endif

    switch (ctx->pc) {
        case 0x28e710u: goto label_28e710;
        default: break;
    }

    ctx->pc = 0x28e6e0u;

    // 0x28e6e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28e6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e6e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28e6ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28e6f0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x28e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x28e6f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e6f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e6fc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x28e6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e700: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x28e700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28e704: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e708: 0xc0a39c8  jal         func_28E720
    ctx->pc = 0x28E708u;
    SET_GPR_U32(ctx, 31, 0x28E710u);
    ctx->pc = 0x28E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E720u, 0x28E708u, 0x28E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E710u;
label_28e710:
    // 0x28e710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e714: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28e718: 0x3e00008  jr          $ra
    ctx->pc = 0x28E718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E720u;
}
