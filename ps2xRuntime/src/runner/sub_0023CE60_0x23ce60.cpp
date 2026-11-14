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

// Function: sub_0023CE60
// Address: 0x23ce60 - 0x23ce80
void sub_0023CE60_0x23ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CE60_0x23ce60");
#endif

    ctx->pc = 0x23ce60u;

    // 0x23ce60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ce64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23ce68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ce6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ce70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23ce74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23ce74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ce78: 0x3e00008  jr          $ra
    ctx->pc = 0x23CE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CE80u;
}
