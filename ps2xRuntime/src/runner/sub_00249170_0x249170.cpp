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

// Function: sub_00249170
// Address: 0x249170 - 0x249190
void sub_00249170_0x249170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249170_0x249170");
#endif

    ctx->pc = 0x249170u;

    // 0x249170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249174: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x249174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x249178: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x249178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24917c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x24917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x249180: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x249180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x249184: 0x3e00008  jr          $ra
    ctx->pc = 0x249184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24918Cu;
    // 0x24918c: 0x0  nop
    ctx->pc = 0x24918cu;
    // NOP
    ctx->pc = 0x249190u;
}
