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

// Function: sub_002A9F20
// Address: 0x2a9f20 - 0x2a9f40
void sub_002A9F20_0x2a9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9F20_0x2a9f20");
#endif

    ctx->pc = 0x2a9f20u;

    // 0x2a9f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9f24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a9f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a9f28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9f2c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x2a9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2a9f30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a9f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a9f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9F3Cu;
    // 0x2a9f3c: 0x0  nop
    ctx->pc = 0x2a9f3cu;
    // NOP
    ctx->pc = 0x2a9f40u;
}
