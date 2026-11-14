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

// Function: sub_00226D70
// Address: 0x226d70 - 0x226da0
void sub_00226D70_0x226d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226D70_0x226d70");
#endif

    ctx->pc = 0x226d70u;

    // 0x226d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226d74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x226d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x226d78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d7c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x226d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x226d80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d84: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x226d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x226d88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d8c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x226d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x226d90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d94: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x226d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x226d98: 0x3e00008  jr          $ra
    ctx->pc = 0x226D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226DA0u;
}
