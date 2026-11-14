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

// Function: sub_00459C50
// Address: 0x459c50 - 0x459c70
void sub_00459C50_0x459c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459C50_0x459c50");
#endif

    ctx->pc = 0x459c50u;

    // 0x459c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x459c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x459c54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x459c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x459c58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x459c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459c5c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x459c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x459c60: 0x3e00008  jr          $ra
    ctx->pc = 0x459C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459C68u;
    // 0x459c68: 0x0  nop
    ctx->pc = 0x459c68u;
    // NOP
    // 0x459c6c: 0x0  nop
    ctx->pc = 0x459c6cu;
    // NOP
    ctx->pc = 0x459c70u;
}
