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

// Function: sub_00232DF0
// Address: 0x232df0 - 0x232e30
void sub_00232DF0_0x232df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232DF0_0x232df0");
#endif

    switch (ctx->pc) {
        case 0x232e08u: goto label_232e08;
        case 0x232e18u: goto label_232e18;
        default: break;
    }

    ctx->pc = 0x232df0u;

    // 0x232df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232df8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x232df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x232dfc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x232dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x232e00: 0xc08cbcc  jal         func_232F30
    ctx->pc = 0x232E00u;
    SET_GPR_U32(ctx, 31, 0x232E08u);
    ctx->pc = 0x232F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232F30u, 0x232E00u, 0x232E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E08u;
label_232e08:
    // 0x232e08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x232e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e10: 0xc08cb8c  jal         func_232E30
    ctx->pc = 0x232E10u;
    SET_GPR_U32(ctx, 31, 0x232E18u);
    ctx->pc = 0x232E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E30u, 0x232E10u, 0x232E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E18u;
label_232e18:
    // 0x232e18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x232e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232e20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232e24: 0x3e00008  jr          $ra
    ctx->pc = 0x232E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232E2Cu;
    // 0x232e2c: 0x0  nop
    ctx->pc = 0x232e2cu;
    // NOP
    ctx->pc = 0x232e30u;
}
