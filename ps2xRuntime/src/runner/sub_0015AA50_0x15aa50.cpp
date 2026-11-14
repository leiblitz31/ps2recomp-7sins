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

// Function: sub_0015AA50
// Address: 0x15aa50 - 0x15aa80
void sub_0015AA50_0x15aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AA50_0x15aa50");
#endif

    ctx->pc = 0x15aa50u;

    // 0x15aa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15aa54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15aa58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aa5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aa60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15aa64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15aa68: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15aa6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15aa6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15aa70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x15AA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AA7Cu;
    // 0x15aa7c: 0x0  nop
    ctx->pc = 0x15aa7cu;
    // NOP
    ctx->pc = 0x15aa80u;
}
