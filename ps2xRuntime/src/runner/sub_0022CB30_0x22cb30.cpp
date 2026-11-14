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

// Function: sub_0022CB30
// Address: 0x22cb30 - 0x22cb50
void sub_0022CB30_0x22cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CB30_0x22cb30");
#endif

    ctx->pc = 0x22cb30u;

    // 0x22cb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22cb34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22cb38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cb3c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22cb3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22cb40: 0x3e00008  jr          $ra
    ctx->pc = 0x22CB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CB48u;
    // 0x22cb48: 0x0  nop
    ctx->pc = 0x22cb48u;
    // NOP
    // 0x22cb4c: 0x0  nop
    ctx->pc = 0x22cb4cu;
    // NOP
    ctx->pc = 0x22cb50u;
}
