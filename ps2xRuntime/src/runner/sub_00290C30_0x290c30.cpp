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

// Function: sub_00290C30
// Address: 0x290c30 - 0x290c50
void sub_00290C30_0x290c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290C30_0x290c30");
#endif

    ctx->pc = 0x290c30u;

    // 0x290c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290c34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x290c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x290c38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x290c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290c3c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x290c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x290c40: 0x3e00008  jr          $ra
    ctx->pc = 0x290C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290C48u;
    // 0x290c48: 0x0  nop
    ctx->pc = 0x290c48u;
    // NOP
    // 0x290c4c: 0x0  nop
    ctx->pc = 0x290c4cu;
    // NOP
    ctx->pc = 0x290c50u;
}
