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

// Function: sub_0013E5D0
// Address: 0x13e5d0 - 0x13e5f0
void sub_0013E5D0_0x13e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E5D0_0x13e5d0");
#endif

    ctx->pc = 0x13e5d0u;

    // 0x13e5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e5d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13e5d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x13e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e5dc: 0x8f83ba7c  lw          $v1, -0x4584($gp)
    ctx->pc = 0x13e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x13e5e0: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x13e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
    // 0x13e5e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13e5e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13e5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E5F0u;
}
