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

// Function: sub_001B97D0
// Address: 0x1b97d0 - 0x1b9810
void sub_001B97D0_0x1b97d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B97D0_0x1b97d0");
#endif

    switch (ctx->pc) {
        case 0x1b97e8u: goto label_1b97e8;
        case 0x1b97f8u: goto label_1b97f8;
        default: break;
    }

    ctx->pc = 0x1b97d0u;

    // 0x1b97d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b97d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b97d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b97d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b97d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b97dc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1b97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1b97e0: 0xc06e644  jal         func_1B9910
    ctx->pc = 0x1B97E0u;
    SET_GPR_U32(ctx, 31, 0x1B97E8u);
    ctx->pc = 0x1B9910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9910u, 0x1B97E0u, 0x1B97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B97E8u;
label_1b97e8:
    // 0x1b97e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b97ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b97ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97f0: 0xc06e604  jal         func_1B9810
    ctx->pc = 0x1B97F0u;
    SET_GPR_U32(ctx, 31, 0x1B97F8u);
    ctx->pc = 0x1B9810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9810u, 0x1B97F0u, 0x1B97F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B97F8u;
label_1b97f8:
    // 0x1b97f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b97fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b97fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9800: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b9800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9804: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B980Cu;
    // 0x1b980c: 0x0  nop
    ctx->pc = 0x1b980cu;
    // NOP
    ctx->pc = 0x1b9810u;
}
