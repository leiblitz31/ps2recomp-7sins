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

// Function: sub_001A78F0
// Address: 0x1a78f0 - 0x1a7910
void sub_001A78F0_0x1a78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A78F0_0x1a78f0");
#endif

    ctx->pc = 0x1a78f0u;

    // 0x1a78f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a78f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a78f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a78f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a78fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a7900: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a7904: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A790Cu;
    // 0x1a790c: 0x0  nop
    ctx->pc = 0x1a790cu;
    // NOP
    ctx->pc = 0x1a7910u;
}
