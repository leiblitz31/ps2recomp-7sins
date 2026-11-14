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

// Function: sub_00197540
// Address: 0x197540 - 0x197560
void sub_00197540_0x197540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197540_0x197540");
#endif

    ctx->pc = 0x197540u;

    // 0x197540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197544: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x197544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x197548: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x197548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19754c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197550: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197554: 0x3e00008  jr          $ra
    ctx->pc = 0x197554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19755Cu;
    // 0x19755c: 0x0  nop
    ctx->pc = 0x19755cu;
    // NOP
    ctx->pc = 0x197560u;
}
