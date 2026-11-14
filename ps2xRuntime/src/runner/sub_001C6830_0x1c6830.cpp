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

// Function: sub_001C6830
// Address: 0x1c6830 - 0x1c6850
void sub_001C6830_0x1c6830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6830_0x1c6830");
#endif

    ctx->pc = 0x1c6830u;

    // 0x1c6830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6834: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c6834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c6838: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c6838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c683c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c6840: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c6844: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C684Cu;
    // 0x1c684c: 0x0  nop
    ctx->pc = 0x1c684cu;
    // NOP
    ctx->pc = 0x1c6850u;
}
