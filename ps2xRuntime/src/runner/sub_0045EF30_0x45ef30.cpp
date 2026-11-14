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

// Function: sub_0045EF30
// Address: 0x45ef30 - 0x45ef40
void sub_0045EF30_0x45ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EF30_0x45ef30");
#endif

    ctx->pc = 0x45ef30u;

    // 0x45ef30: 0x8f82bfa8  lw          $v0, -0x4058($gp)
    ctx->pc = 0x45ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
    // 0x45ef34: 0x3e00008  jr          $ra
    ctx->pc = 0x45EF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EF3Cu;
    // 0x45ef3c: 0x0  nop
    ctx->pc = 0x45ef3cu;
    // NOP
    ctx->pc = 0x45ef40u;
}
