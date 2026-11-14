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

// Function: sub_00349848
// Address: 0x349848 - 0x349858
void sub_00349848_0x349848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349848_0x349848");
#endif

    ctx->pc = 0x349848u;

    // 0x349848: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x349848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x34984c: 0x3e00008  jr          $ra
    ctx->pc = 0x34984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34984Cu;
        // 0x349850: 0x8c62c2d4  lw          $v0, -0x3D2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951636)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34984Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349854u;
    // 0x349854: 0x0  nop
    ctx->pc = 0x349854u;
    // NOP
    ctx->pc = 0x349858u;
}
