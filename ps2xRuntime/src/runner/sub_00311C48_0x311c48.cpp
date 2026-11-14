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

// Function: sub_00311C48
// Address: 0x311c48 - 0x311c58
void sub_00311C48_0x311c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311C48_0x311c48");
#endif

    ctx->pc = 0x311c48u;

    // 0x311c48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x311c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c4c: 0xaf80a570  sw          $zero, -0x5A90($gp)
    ctx->pc = 0x311c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944112), GPR_U32(ctx, 0));
    // 0x311c50: 0x3e00008  jr          $ra
    ctx->pc = 0x311C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C50u;
        // 0x311c54: 0xaf80a574  sw          $zero, -0x5A8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311C58u;
}
