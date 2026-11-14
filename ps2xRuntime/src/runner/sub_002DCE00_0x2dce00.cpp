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

// Function: sub_002DCE00
// Address: 0x2dce00 - 0x2dce30
void sub_002DCE00_0x2dce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCE00_0x2dce00");
#endif

    ctx->pc = 0x2dce00u;

    // 0x2dce00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dce04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dce04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dce08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2dce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dce0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2dce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2dce10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2dce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dce14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dce14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dce18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2dce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dce1c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x2dce1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dce20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2dce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dce24: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2dce24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dce28: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCE30u;
}
