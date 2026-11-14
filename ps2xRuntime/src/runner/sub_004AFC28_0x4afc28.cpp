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

// Function: sub_004AFC28
// Address: 0x4afc28 - 0x4afc48
void sub_004AFC28_0x4afc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFC28_0x4afc28");
#endif

    switch (ctx->pc) {
        case 0x4afc38u: goto label_4afc38;
        default: break;
    }

    ctx->pc = 0x4afc28u;

    // 0x4afc28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afc2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afc30: 0xc12d18e  jal         func_4B4638
    ctx->pc = 0x4AFC30u;
    SET_GPR_U32(ctx, 31, 0x4AFC38u);
    ctx->pc = 0x4AFC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFC30u;
    // 0x4afc34: 0x248402c0  addiu       $a0, $a0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4638u, 0x4AFC30u, 0x4AFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFC38u;
label_4afc38:
    // 0x4afc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFC3Cu;
        // 0x4afc40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFC44u;
    // 0x4afc44: 0x0  nop
    ctx->pc = 0x4afc44u;
    // NOP
    ctx->pc = 0x4afc48u;
}
