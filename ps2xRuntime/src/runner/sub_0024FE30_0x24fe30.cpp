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

// Function: sub_0024FE30
// Address: 0x24fe30 - 0x24fe50
void sub_0024FE30_0x24fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FE30_0x24fe30");
#endif

    ctx->pc = 0x24fe30u;

    // 0x24fe30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fe34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24fe38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fe3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fe40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x24fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24fe44: 0x3e00008  jr          $ra
    ctx->pc = 0x24FE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FE4Cu;
    // 0x24fe4c: 0x0  nop
    ctx->pc = 0x24fe4cu;
    // NOP
    ctx->pc = 0x24fe50u;
}
