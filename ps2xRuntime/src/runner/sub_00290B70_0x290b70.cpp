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

// Function: sub_00290B70
// Address: 0x290b70 - 0x290ba0
void sub_00290B70_0x290b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290B70_0x290b70");
#endif

    ctx->pc = 0x290b70u;

    // 0x290b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290b74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x290b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x290b78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x290b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x290b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x290b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290b84: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x290b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290b88: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x290b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x290b8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x290b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x290b90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x290b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x290b94: 0x3e00008  jr          $ra
    ctx->pc = 0x290B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290B9Cu;
    // 0x290b9c: 0x0  nop
    ctx->pc = 0x290b9cu;
    // NOP
    ctx->pc = 0x290ba0u;
}
