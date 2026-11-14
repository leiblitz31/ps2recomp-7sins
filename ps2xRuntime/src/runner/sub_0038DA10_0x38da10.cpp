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

// Function: sub_0038DA10
// Address: 0x38da10 - 0x38da38
void sub_0038DA10_0x38da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DA10_0x38da10");
#endif

    switch (ctx->pc) {
        case 0x38da28u: goto label_38da28;
        default: break;
    }

    ctx->pc = 0x38da10u;

    // 0x38da10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38da10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38da14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38da18: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38da18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38da1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38da20: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x38DA20u;
    SET_GPR_U32(ctx, 31, 0x38DA28u);
    ctx->pc = 0x38DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DA20u;
    // 0x38da24: 0x2484ade8  addiu       $a0, $a0, -0x5218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38DA20u, 0x38DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DA28u;
label_38da28:
    // 0x38da28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38da28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38da2c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x38da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x38da30: 0x3e00008  jr          $ra
    ctx->pc = 0x38DA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA30u;
        // 0x38da34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DA38u;
}
