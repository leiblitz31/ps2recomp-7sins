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

// Function: sub_00307C70
// Address: 0x307c70 - 0x307c88
void sub_00307C70_0x307c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307C70_0x307c70");
#endif

    ctx->pc = 0x307c70u;

    // 0x307c70: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x307c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x307c74: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x307c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x307c78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x307c7c: 0x42000038  ei
    ctx->pc = 0x307c7cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x307c80: 0x3e00008  jr          $ra
    ctx->pc = 0x307C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C80u;
        // 0x307c84: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307C88u;
}
