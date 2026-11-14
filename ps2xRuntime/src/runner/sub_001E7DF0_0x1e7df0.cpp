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

// Function: sub_001E7DF0
// Address: 0x1e7df0 - 0x1e7e30
void sub_001E7DF0_0x1e7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7DF0_0x1e7df0");
#endif

    switch (ctx->pc) {
        case 0x1e7e14u: goto label_1e7e14;
        default: break;
    }

    ctx->pc = 0x1e7df0u;

    // 0x1e7df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e7dfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e7e00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7e04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e7e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7e08: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1e7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e7e0c: 0xc079f8c  jal         func_1E7E30
    ctx->pc = 0x1E7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E14u);
    ctx->pc = 0x1E7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E30u, 0x1E7E0Cu, 0x1E7E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E14u;
label_1e7e14:
    // 0x1e7e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7e18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e7e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7E24u;
    // 0x1e7e24: 0x0  nop
    ctx->pc = 0x1e7e24u;
    // NOP
    // 0x1e7e28: 0x0  nop
    ctx->pc = 0x1e7e28u;
    // NOP
    // 0x1e7e2c: 0x0  nop
    ctx->pc = 0x1e7e2cu;
    // NOP
    ctx->pc = 0x1e7e30u;
}
