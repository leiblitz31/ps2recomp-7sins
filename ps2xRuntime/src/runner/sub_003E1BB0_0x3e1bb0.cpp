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

// Function: sub_003E1BB0
// Address: 0x3e1bb0 - 0x3e1bc8
void sub_003E1BB0_0x3e1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1BB0_0x3e1bb0");
#endif

    ctx->pc = 0x3e1bb0u;

    // 0x3e1bb0: 0xac8700d4  sw          $a3, 0xD4($a0)
    ctx->pc = 0x3e1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 7));
    // 0x3e1bb4: 0xac8500d8  sw          $a1, 0xD8($a0)
    ctx->pc = 0x3e1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
    // 0x3e1bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BB8u;
        // 0x3e1bbc: 0xac8600d0  sw          $a2, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1BC0u;
    // 0x3e1bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BC0u;
        // 0x3e1bc4: 0x8c8200d8  lw          $v0, 0xD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1BC8u;
}
