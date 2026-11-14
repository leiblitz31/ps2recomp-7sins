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

// Function: sub_00100720
// Address: 0x100720 - 0x100740
void sub_00100720_0x100720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100720_0x100720");
#endif

    ctx->pc = 0x100720u;

    // 0x100720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100724: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100728: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10072c: 0xaf83b994  sw          $v1, -0x466C($gp)
    ctx->pc = 0x10072cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949268), GPR_U32(ctx, 3));
    // 0x100730: 0xa3808490  sb          $zero, -0x7B70($gp)
    ctx->pc = 0x100730u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935696), (uint8_t)GPR_U32(ctx, 0));
    // 0x100734: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x100734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x100738: 0x3e00008  jr          $ra
    ctx->pc = 0x100738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100740u;
}
