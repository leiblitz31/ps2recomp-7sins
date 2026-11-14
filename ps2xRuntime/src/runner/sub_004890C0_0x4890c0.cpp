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

// Function: sub_004890C0
// Address: 0x4890c0 - 0x4890d0
void sub_004890C0_0x4890c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004890C0_0x4890c0");
#endif

    ctx->pc = 0x4890c0u;

    // 0x4890c0: 0x8f82c0e4  lw          $v0, -0x3F1C($gp)
    ctx->pc = 0x4890c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951140)));
    // 0x4890c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4890C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4890C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4890CCu;
    // 0x4890cc: 0x0  nop
    ctx->pc = 0x4890ccu;
    // NOP
    ctx->pc = 0x4890d0u;
}
