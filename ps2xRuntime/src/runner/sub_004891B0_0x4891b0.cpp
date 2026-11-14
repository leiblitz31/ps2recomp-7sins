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

// Function: sub_004891B0
// Address: 0x4891b0 - 0x4891c0
void sub_004891B0_0x4891b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004891B0_0x4891b0");
#endif

    ctx->pc = 0x4891b0u;

    // 0x4891b0: 0x8f82c0e8  lw          $v0, -0x3F18($gp)
    ctx->pc = 0x4891b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951144)));
    // 0x4891b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4891B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4891B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4891BCu;
    // 0x4891bc: 0x0  nop
    ctx->pc = 0x4891bcu;
    // NOP
    ctx->pc = 0x4891c0u;
}
