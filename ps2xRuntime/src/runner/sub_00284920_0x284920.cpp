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

// Function: sub_00284920
// Address: 0x284920 - 0x284950
void sub_00284920_0x284920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284920_0x284920");
#endif

    ctx->pc = 0x284920u;

    // 0x284920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284924: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x284924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x284928: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x284928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28492c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284930: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x284930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x284934: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x284934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28493c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x28493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x284940: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x284940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284944: 0x3e00008  jr          $ra
    ctx->pc = 0x284944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28494Cu;
    // 0x28494c: 0x0  nop
    ctx->pc = 0x28494cu;
    // NOP
    ctx->pc = 0x284950u;
}
