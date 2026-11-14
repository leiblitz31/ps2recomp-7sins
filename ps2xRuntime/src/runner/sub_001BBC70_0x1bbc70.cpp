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

// Function: sub_001BBC70
// Address: 0x1bbc70 - 0x1bbc90
void sub_001BBC70_0x1bbc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBC70_0x1bbc70");
#endif

    ctx->pc = 0x1bbc70u;

    // 0x1bbc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbc74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bbc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bbc78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbc80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1bbc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bbc84: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBC8Cu;
    // 0x1bbc8c: 0x0  nop
    ctx->pc = 0x1bbc8cu;
    // NOP
    ctx->pc = 0x1bbc90u;
}
