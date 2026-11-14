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

// Function: sub_001043E0
// Address: 0x1043e0 - 0x104410
void sub_001043E0_0x1043e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001043E0_0x1043e0");
#endif

    ctx->pc = 0x1043e0u;

    // 0x1043e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1043e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1043e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1043e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1043e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1043ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1043ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1043f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1043f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1043f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1043f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1043f8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1043f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1043fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1043fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x104400: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x104404: 0x3e00008  jr          $ra
    ctx->pc = 0x104404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10440Cu;
    // 0x10440c: 0x0  nop
    ctx->pc = 0x10440cu;
    // NOP
    ctx->pc = 0x104410u;
}
