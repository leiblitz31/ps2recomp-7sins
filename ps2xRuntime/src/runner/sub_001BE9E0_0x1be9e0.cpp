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

// Function: sub_001BE9E0
// Address: 0x1be9e0 - 0x1bea30
void sub_001BE9E0_0x1be9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE9E0_0x1be9e0");
#endif

    switch (ctx->pc) {
        case 0x1bea18u: goto label_1bea18;
        default: break;
    }

    ctx->pc = 0x1be9e0u;

    // 0x1be9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be9e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1be9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1be9ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1be9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1be9f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be9f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1be9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1be9f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be9fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1be9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bea00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bea04: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1bea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bea08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bea08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bea0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bea0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea10: 0xc06fa8c  jal         func_1BEA30
    ctx->pc = 0x1BEA10u;
    SET_GPR_U32(ctx, 31, 0x1BEA18u);
    ctx->pc = 0x1BEA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA30u, 0x1BEA10u, 0x1BEA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA18u;
label_1bea18:
    // 0x1bea18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bea1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bea1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bea20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bea24: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEA2Cu;
    // 0x1bea2c: 0x0  nop
    ctx->pc = 0x1bea2cu;
    // NOP
    ctx->pc = 0x1bea30u;
}
