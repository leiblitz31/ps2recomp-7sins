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

// Function: sub_001039C0
// Address: 0x1039c0 - 0x1039f0
void sub_001039C0_0x1039c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001039C0_0x1039c0");
#endif

    ctx->pc = 0x1039c0u;

    // 0x1039c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1039c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1039c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1039c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1039c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1039c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1039cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1039ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1039d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1039d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1039d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1039d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1039d8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1039d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1039dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1039dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1039e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1039e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1039e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1039E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1039E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1039ECu;
    // 0x1039ec: 0x0  nop
    ctx->pc = 0x1039ecu;
    // NOP
    ctx->pc = 0x1039f0u;
}
