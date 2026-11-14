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

// Function: sub_001E2060
// Address: 0x1e2060 - 0x1e2080
void sub_001E2060_0x1e2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2060_0x1e2060");
#endif

    ctx->pc = 0x1e2060u;

    // 0x1e2060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2064: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e2064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e2068: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e206c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e206cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e2070: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2078u;
    // 0x1e2078: 0x0  nop
    ctx->pc = 0x1e2078u;
    // NOP
    // 0x1e207c: 0x0  nop
    ctx->pc = 0x1e207cu;
    // NOP
    ctx->pc = 0x1e2080u;
}
