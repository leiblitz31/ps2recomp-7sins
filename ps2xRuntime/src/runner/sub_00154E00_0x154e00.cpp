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

// Function: sub_00154E00
// Address: 0x154e00 - 0x154e40
void sub_00154E00_0x154e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154E00_0x154e00");
#endif

    switch (ctx->pc) {
        case 0x154e1cu: goto label_154e1c;
        case 0x154e2cu: goto label_154e2c;
        default: break;
    }

    ctx->pc = 0x154e00u;

    // 0x154e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154e08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x154e0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x154e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x154e10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x154e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154e14: 0xc055390  jal         func_154E40
    ctx->pc = 0x154E14u;
    SET_GPR_U32(ctx, 31, 0x154E1Cu);
    ctx->pc = 0x154E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E40u, 0x154E14u, 0x154E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E1Cu;
label_154e1c:
    // 0x154e1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154e20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x154e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154e24: 0xc05533c  jal         func_154CF0
    ctx->pc = 0x154E24u;
    SET_GPR_U32(ctx, 31, 0x154E2Cu);
    ctx->pc = 0x154CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CF0u, 0x154E24u, 0x154E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E2Cu;
label_154e2c:
    // 0x154e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154e30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154e34: 0x3e00008  jr          $ra
    ctx->pc = 0x154E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154E3Cu;
    // 0x154e3c: 0x0  nop
    ctx->pc = 0x154e3cu;
    // NOP
    ctx->pc = 0x154e40u;
}
