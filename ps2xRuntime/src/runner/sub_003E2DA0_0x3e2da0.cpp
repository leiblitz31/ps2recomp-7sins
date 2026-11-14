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

// Function: sub_003E2DA0
// Address: 0x3e2da0 - 0x3e2dc0
void sub_003E2DA0_0x3e2da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2DA0_0x3e2da0");
#endif

    switch (ctx->pc) {
        case 0x3e2db4u: goto label_3e2db4;
        default: break;
    }

    ctx->pc = 0x3e2da0u;

    // 0x3e2da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e2da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e2da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e2da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2dac: 0xc0f8b78  jal         func_3E2DE0
    ctx->pc = 0x3E2DACu;
    SET_GPR_U32(ctx, 31, 0x3E2DB4u);
    ctx->pc = 0x3E2DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2DACu;
    // 0x3e2db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DE0u, 0x3E2DACu, 0x3E2DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2DB4u;
label_3e2db4:
    // 0x3e2db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2db8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DB8u;
        // 0x3e2dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2DC0u;
}
