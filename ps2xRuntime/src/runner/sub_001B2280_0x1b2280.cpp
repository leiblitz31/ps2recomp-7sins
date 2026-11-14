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

// Function: sub_001B2280
// Address: 0x1b2280 - 0x1b22a0
void sub_001B2280_0x1b2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2280_0x1b2280");
#endif

    ctx->pc = 0x1b2280u;

    // 0x1b2280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2284: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b2284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b2288: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b228c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2290: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b2290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b2294: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B229Cu;
    // 0x1b229c: 0x0  nop
    ctx->pc = 0x1b229cu;
    // NOP
    ctx->pc = 0x1b22a0u;
}
