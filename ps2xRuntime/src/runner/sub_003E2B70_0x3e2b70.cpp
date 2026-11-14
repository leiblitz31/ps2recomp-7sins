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

// Function: sub_003E2B70
// Address: 0x3e2b70 - 0x3e2b88
void sub_003E2B70_0x3e2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2B70_0x3e2b70");
#endif

    ctx->pc = 0x3e2b70u;

    // 0x3e2b70: 0xac8702f0  sw          $a3, 0x2F0($a0)
    ctx->pc = 0x3e2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 7));
    // 0x3e2b74: 0xac8502e8  sw          $a1, 0x2E8($a0)
    ctx->pc = 0x3e2b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 744), GPR_U32(ctx, 5));
    // 0x3e2b78: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B78u;
        // 0x3e2b7c: 0xac8602ec  sw          $a2, 0x2EC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 748), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2B80u;
    // 0x3e2b80: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B80u;
        // 0x3e2b84: 0x8c8202e8  lw          $v0, 0x2E8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 744)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2B88u;
}
