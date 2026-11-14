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

// Function: sub_002369F0
// Address: 0x2369f0 - 0x236a20
void sub_002369F0_0x2369f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002369F0_0x2369f0");
#endif

    ctx->pc = 0x2369f0u;

    // 0x2369f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2369f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2369f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2369f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2369f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2369f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2369fc: 0x24635540  addiu       $v1, $v1, 0x5540
    ctx->pc = 0x2369fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21824));
    // 0x236a00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x236a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236a04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x236a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x236a08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x236a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236a0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x236a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x236a10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x236a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236a14: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x236a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236a18: 0x3e00008  jr          $ra
    ctx->pc = 0x236A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A20u;
}
