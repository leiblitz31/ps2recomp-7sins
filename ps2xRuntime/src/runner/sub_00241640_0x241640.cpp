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

// Function: sub_00241640
// Address: 0x241640 - 0x241660
void sub_00241640_0x241640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241640_0x241640");
#endif

    ctx->pc = 0x241640u;

    // 0x241640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241644: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x241644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x241648: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x241648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24164c: 0x8c421118  lw          $v0, 0x1118($v0)
    ctx->pc = 0x24164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
    // 0x241650: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x241650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x241654: 0x3e00008  jr          $ra
    ctx->pc = 0x241654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24165Cu;
    // 0x24165c: 0x0  nop
    ctx->pc = 0x24165cu;
    // NOP
    ctx->pc = 0x241660u;
}
