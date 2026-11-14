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

// Function: sub_002E0440
// Address: 0x2e0440 - 0x2e0460
void sub_002E0440_0x2e0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0440_0x2e0440");
#endif

    ctx->pc = 0x2e0440u;

    // 0x2e0440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0444: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e0444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e0448: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e044c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e044cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e0450: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0458u;
    // 0x2e0458: 0x0  nop
    ctx->pc = 0x2e0458u;
    // NOP
    // 0x2e045c: 0x0  nop
    ctx->pc = 0x2e045cu;
    // NOP
    ctx->pc = 0x2e0460u;
}
