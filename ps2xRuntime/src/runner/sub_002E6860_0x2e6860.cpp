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

// Function: sub_002E6860
// Address: 0x2e6860 - 0x2e6880
void sub_002E6860_0x2e6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6860_0x2e6860");
#endif

    ctx->pc = 0x2e6860u;

    // 0x2e6860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e6860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e6864: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e6864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e6868: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e6868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e686c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6870: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e6870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e6874: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E687Cu;
    // 0x2e687c: 0x0  nop
    ctx->pc = 0x2e687cu;
    // NOP
    ctx->pc = 0x2e6880u;
}
