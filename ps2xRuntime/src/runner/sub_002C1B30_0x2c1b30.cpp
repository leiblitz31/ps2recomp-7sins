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

// Function: sub_002C1B30
// Address: 0x2c1b30 - 0x2c1b40
void sub_002C1B30_0x2c1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1B30_0x2c1b30");
#endif

    ctx->pc = 0x2c1b30u;

    // 0x2c1b30: 0x8f82bcb0  lw          $v0, -0x4350($gp)
    ctx->pc = 0x2c1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2c1b34: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1B3Cu;
    // 0x2c1b3c: 0x0  nop
    ctx->pc = 0x2c1b3cu;
    // NOP
    ctx->pc = 0x2c1b40u;
}
