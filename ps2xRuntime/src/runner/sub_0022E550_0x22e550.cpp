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

// Function: sub_0022E550
// Address: 0x22e550 - 0x22e570
void sub_0022E550_0x22e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E550_0x22e550");
#endif

    ctx->pc = 0x22e550u;

    // 0x22e550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22e554: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22e554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22e558: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e55c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22e560: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e564: 0x3e00008  jr          $ra
    ctx->pc = 0x22E564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E56Cu;
    // 0x22e56c: 0x0  nop
    ctx->pc = 0x22e56cu;
    // NOP
    ctx->pc = 0x22e570u;
}
