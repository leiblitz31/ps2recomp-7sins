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

// Function: sub_002C4440
// Address: 0x2c4440 - 0x2c4470
void sub_002C4440_0x2c4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4440_0x2c4440");
#endif

    ctx->pc = 0x2c4440u;

    // 0x2c4440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4444: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c4444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c4448: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c4448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c444c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4450: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4454: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c4454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c4458: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2c4458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2c445c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c445cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c4460: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c4460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c4464: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C446Cu;
    // 0x2c446c: 0x0  nop
    ctx->pc = 0x2c446cu;
    // NOP
    ctx->pc = 0x2c4470u;
}
