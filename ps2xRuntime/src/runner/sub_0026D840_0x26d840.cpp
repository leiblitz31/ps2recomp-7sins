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

// Function: sub_0026D840
// Address: 0x26d840 - 0x26d860
void sub_0026D840_0x26d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D840_0x26d840");
#endif

    ctx->pc = 0x26d840u;

    // 0x26d840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26d844: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26d844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26d848: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d84c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x26d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d850: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d854: 0x3e00008  jr          $ra
    ctx->pc = 0x26D854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D85Cu;
    // 0x26d85c: 0x0  nop
    ctx->pc = 0x26d85cu;
    // NOP
    ctx->pc = 0x26d860u;
}
