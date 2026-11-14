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

// Function: sub_002A9A50
// Address: 0x2a9a50 - 0x2a9a80
void sub_002A9A50_0x2a9a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9A50_0x2a9a50");
#endif

    ctx->pc = 0x2a9a50u;

    // 0x2a9a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a9a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a9a5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a9a60: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x2a9a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9a68: 0xa202005c  sb          $v0, 0x5C($s0)
    ctx->pc = 0x2a9a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a9a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9a74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a9a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a9a78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9A80u;
}
