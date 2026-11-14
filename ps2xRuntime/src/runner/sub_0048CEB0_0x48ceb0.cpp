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

// Function: sub_0048CEB0
// Address: 0x48ceb0 - 0x48ced0
void sub_0048CEB0_0x48ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CEB0_0x48ceb0");
#endif

    ctx->pc = 0x48ceb0u;

    // 0x48ceb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ceb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48ceb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cebc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x48cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x48cec0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x48cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48cec4: 0x3e00008  jr          $ra
    ctx->pc = 0x48CEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CECCu;
    // 0x48cecc: 0x0  nop
    ctx->pc = 0x48ceccu;
    // NOP
    ctx->pc = 0x48ced0u;
}
