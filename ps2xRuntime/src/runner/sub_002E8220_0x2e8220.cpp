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

// Function: sub_002E8220
// Address: 0x2e8220 - 0x2e8230
void sub_002E8220_0x2e8220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8220_0x2e8220");
#endif

    ctx->pc = 0x2e8220u;

    // 0x2e8220: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2e8220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2e8224: 0x8c62e780  lw          $v0, -0x1880($v1)
    ctx->pc = 0x2e8224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4EE780u));
    // 0x2e8228: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8228u;
        // 0x2e822c: 0xac64e780  sw          $a0, -0x1880($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8230u;
}
