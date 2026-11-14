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

// Function: sub_00246440
// Address: 0x246440 - 0x246470
void sub_00246440_0x246440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246440_0x246440");
#endif

    ctx->pc = 0x246440u;

    // 0x246440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246444: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x246444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x246448: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x246448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24644c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24644cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x246450: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x246450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246454: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x246454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x246458: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x246458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24645c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x24645cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x246460: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x246460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246464: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x246464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x246468: 0x3e00008  jr          $ra
    ctx->pc = 0x246468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246470u;
}
