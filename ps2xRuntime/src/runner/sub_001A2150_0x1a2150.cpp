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

// Function: sub_001A2150
// Address: 0x1a2150 - 0x1a2170
void sub_001A2150_0x1a2150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2150_0x1a2150");
#endif

    ctx->pc = 0x1a2150u;

    // 0x1a2150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2154: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a2154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a2158: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a2158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a215c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a215cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a2160: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2168u;
    // 0x1a2168: 0x0  nop
    ctx->pc = 0x1a2168u;
    // NOP
    // 0x1a216c: 0x0  nop
    ctx->pc = 0x1a216cu;
    // NOP
    ctx->pc = 0x1a2170u;
}
