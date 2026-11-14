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

// Function: sub_00284F30
// Address: 0x284f30 - 0x284f50
void sub_00284F30_0x284f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284F30_0x284f30");
#endif

    ctx->pc = 0x284f30u;

    // 0x284f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284f34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x284f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x284f38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x284f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x284f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284f40: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x284f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x284f44: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x284f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x284f48: 0x3e00008  jr          $ra
    ctx->pc = 0x284F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284F50u;
}
