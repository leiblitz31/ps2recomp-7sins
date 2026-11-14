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

// Function: sub_002E7C80
// Address: 0x2e7c80 - 0x2e7c90
void sub_002E7C80_0x2e7c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7C80_0x2e7c80");
#endif

    ctx->pc = 0x2e7c80u;

    // 0x2e7c80: 0x8f82bcd0  lw          $v0, -0x4330($gp)
    ctx->pc = 0x2e7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950096)));
    // 0x2e7c84: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7C8Cu;
    // 0x2e7c8c: 0x0  nop
    ctx->pc = 0x2e7c8cu;
    // NOP
    ctx->pc = 0x2e7c90u;
}
