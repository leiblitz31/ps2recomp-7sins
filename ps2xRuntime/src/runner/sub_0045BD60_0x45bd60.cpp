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

// Function: sub_0045BD60
// Address: 0x45bd60 - 0x45bd90
void sub_0045BD60_0x45bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BD60_0x45bd60");
#endif

    ctx->pc = 0x45bd60u;

    // 0x45bd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45bd64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45bd68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45bd6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45bd70: 0x2782bf60  addiu       $v0, $gp, -0x40A0
    ctx->pc = 0x45bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950752));
    // 0x45bd74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45bd78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45bd7c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x45bd7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x45BD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45BD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45BD88u;
    // 0x45bd88: 0x0  nop
    ctx->pc = 0x45bd88u;
    // NOP
    // 0x45bd8c: 0x0  nop
    ctx->pc = 0x45bd8cu;
    // NOP
    ctx->pc = 0x45bd90u;
}
