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

// Function: sub_00244060
// Address: 0x244060 - 0x244080
void sub_00244060_0x244060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244060_0x244060");
#endif

    ctx->pc = 0x244060u;

    // 0x244060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244064: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x244064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x244068: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x244068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24406c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x24406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x244070: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x244070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x244074: 0x3e00008  jr          $ra
    ctx->pc = 0x244074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24407Cu;
    // 0x24407c: 0x0  nop
    ctx->pc = 0x24407cu;
    // NOP
    ctx->pc = 0x244080u;
}
