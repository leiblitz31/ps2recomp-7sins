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

// Function: sub_002B7C00
// Address: 0x2b7c00 - 0x2b7c30
void sub_002B7C00_0x2b7c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7C00_0x2b7c00");
#endif

    ctx->pc = 0x2b7c00u;

    // 0x2b7c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7c04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b7c08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7c0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7c10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7c14: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2b7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7c18: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2b7c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2b7c1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b7c20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b7c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b7c24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7C2Cu;
    // 0x2b7c2c: 0x0  nop
    ctx->pc = 0x2b7c2cu;
    // NOP
    ctx->pc = 0x2b7c30u;
}
