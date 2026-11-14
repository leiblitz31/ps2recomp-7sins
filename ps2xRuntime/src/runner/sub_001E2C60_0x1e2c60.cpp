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

// Function: sub_001E2C60
// Address: 0x1e2c60 - 0x1e2ca0
void sub_001E2C60_0x1e2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2C60_0x1e2c60");
#endif

    ctx->pc = 0x1e2c60u;

    // 0x1e2c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2c64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e2c68: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1e2c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1e2c6c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1e2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1e2c70: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2c74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e2c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e2c7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e2c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2c80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c84: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1e2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1e2c88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e2c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2C98u;
    // 0x1e2c98: 0x0  nop
    ctx->pc = 0x1e2c98u;
    // NOP
    // 0x1e2c9c: 0x0  nop
    ctx->pc = 0x1e2c9cu;
    // NOP
    ctx->pc = 0x1e2ca0u;
}
