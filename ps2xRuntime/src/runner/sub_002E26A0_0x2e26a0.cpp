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

// Function: sub_002E26A0
// Address: 0x2e26a0 - 0x2e26d0
void sub_002E26A0_0x2e26a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E26A0_0x2e26a0");
#endif

    ctx->pc = 0x2e26a0u;

    // 0x2e26a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e26a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e26a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e26a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e26a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e26ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e26acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e26b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e26b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e26b8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2e26b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2e26bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e26bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e26c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e26c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e26c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E26C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E26C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E26CCu;
    // 0x2e26cc: 0x0  nop
    ctx->pc = 0x2e26ccu;
    // NOP
    ctx->pc = 0x2e26d0u;
}
