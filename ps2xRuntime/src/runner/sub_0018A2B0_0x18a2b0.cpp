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

// Function: sub_0018A2B0
// Address: 0x18a2b0 - 0x18a2e0
void sub_0018A2B0_0x18a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A2B0_0x18a2b0");
#endif

    ctx->pc = 0x18a2b0u;

    // 0x18a2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a2b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18a2b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a2bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a2c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a2c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x18a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18a2c8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x18a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x18a2cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18a2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x18a2d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18a2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A2DCu;
    // 0x18a2dc: 0x0  nop
    ctx->pc = 0x18a2dcu;
    // NOP
    ctx->pc = 0x18a2e0u;
}
