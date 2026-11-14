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

// Function: sub_003E2DC0
// Address: 0x3e2dc0 - 0x3e2de0
void sub_003E2DC0_0x3e2dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2DC0_0x3e2dc0");
#endif

    switch (ctx->pc) {
        case 0x3e2dd4u: goto label_3e2dd4;
        default: break;
    }

    ctx->pc = 0x3e2dc0u;

    // 0x3e2dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e2dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e2dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e2dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2dcc: 0xc0f8b9e  jal         func_3E2E78
    ctx->pc = 0x3E2DCCu;
    SET_GPR_U32(ctx, 31, 0x3E2DD4u);
    ctx->pc = 0x3E2DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2DCCu;
    // 0x3e2dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2E78u, 0x3E2DCCu, 0x3E2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2DD4u;
label_3e2dd4:
    // 0x3e2dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DD8u;
        // 0x3e2ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2DE0u;
}
