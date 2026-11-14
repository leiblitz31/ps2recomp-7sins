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

// Function: sub_002A2DE0
// Address: 0x2a2de0 - 0x2a2e30
void sub_002A2DE0_0x2a2de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2DE0_0x2a2de0");
#endif

    switch (ctx->pc) {
        case 0x2a2df8u: goto label_2a2df8;
        case 0x2a2e10u: goto label_2a2e10;
        default: break;
    }

    ctx->pc = 0x2a2de0u;

    // 0x2a2de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2de8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a2dec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a2decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a2df0: 0xc122434  jal         func_4890D0
    ctx->pc = 0x2A2DF0u;
    SET_GPR_U32(ctx, 31, 0x2A2DF8u);
    ctx->pc = 0x4890D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890D0u, 0x2A2DF0u, 0x2A2DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DF8u;
label_2a2df8:
    // 0x2a2df8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2a2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e00: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x2a2e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a2e04: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2a2e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2e08: 0xc11ede8  jal         func_47B7A0
    ctx->pc = 0x2A2E08u;
    SET_GPR_U32(ctx, 31, 0x2A2E10u);
    ctx->pc = 0x47B7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B7A0u, 0x2A2E08u, 0x2A2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E10u;
label_2a2e10:
    // 0x2a2e10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a2e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a2e14: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a2e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2e1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a2e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a2e20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2E28u;
    // 0x2a2e28: 0x0  nop
    ctx->pc = 0x2a2e28u;
    // NOP
    // 0x2a2e2c: 0x0  nop
    ctx->pc = 0x2a2e2cu;
    // NOP
    ctx->pc = 0x2a2e30u;
}
