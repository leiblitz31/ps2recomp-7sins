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

// Function: sub_0044FD30
// Address: 0x44fd30 - 0x44fd50
void sub_0044FD30_0x44fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FD30_0x44fd30");
#endif

    ctx->pc = 0x44fd30u;

    // 0x44fd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44fd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44fd34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x44fd38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44fd3c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x44fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x44fd40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44fd44: 0x3e00008  jr          $ra
    ctx->pc = 0x44FD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44FD4Cu;
    // 0x44fd4c: 0x0  nop
    ctx->pc = 0x44fd4cu;
    // NOP
    ctx->pc = 0x44fd50u;
}
