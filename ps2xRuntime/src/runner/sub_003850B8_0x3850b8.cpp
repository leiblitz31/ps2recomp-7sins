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

// Function: sub_003850B8
// Address: 0x3850b8 - 0x3850d0
void sub_003850B8_0x3850b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003850B8_0x3850b8");
#endif

    ctx->pc = 0x3850b8u;

    // 0x3850b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3850B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3850BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850B8u;
        // 0x3850bc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3850B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3850C0u;
    // 0x3850c0: 0xaf84a970  sw          $a0, -0x5690($gp)
    ctx->pc = 0x3850c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945136), GPR_U32(ctx, 4));
    // 0x3850c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3850C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3850C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850C4u;
        // 0x3850c8: 0xaf85a974  sw          $a1, -0x568C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3850C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3850CCu;
    // 0x3850cc: 0x0  nop
    ctx->pc = 0x3850ccu;
    // NOP
    ctx->pc = 0x3850d0u;
}
