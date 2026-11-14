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

// Function: sub_002D8630
// Address: 0x2d8630 - 0x2d8650
void sub_002D8630_0x2d8630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8630_0x2d8630");
#endif

    ctx->pc = 0x2d8630u;

    // 0x2d8630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8634: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d8634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d8638: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d8638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d863c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d863cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d8640: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8648u;
    // 0x2d8648: 0x0  nop
    ctx->pc = 0x2d8648u;
    // NOP
    // 0x2d864c: 0x0  nop
    ctx->pc = 0x2d864cu;
    // NOP
    ctx->pc = 0x2d8650u;
}
