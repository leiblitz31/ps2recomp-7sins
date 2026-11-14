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

// Function: sub_003873D0
// Address: 0x3873d0 - 0x3873e8
void sub_003873D0_0x3873d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003873D0_0x3873d0");
#endif

    ctx->pc = 0x3873d0u;

    // 0x3873d0: 0x8f83bd0c  lw          $v1, -0x42F4($gp)
    ctx->pc = 0x3873d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950156)));
    // 0x3873d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3873d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3873d8: 0xaf83bd0c  sw          $v1, -0x42F4($gp)
    ctx->pc = 0x3873d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950156), GPR_U32(ctx, 3));
    // 0x3873dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3873DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3873E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873DCu;
        // 0x3873e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3873DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3873E4u;
    // 0x3873e4: 0x0  nop
    ctx->pc = 0x3873e4u;
    // NOP
    ctx->pc = 0x3873e8u;
}
