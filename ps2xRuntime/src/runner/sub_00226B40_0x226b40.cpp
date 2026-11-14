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

// Function: sub_00226B40
// Address: 0x226b40 - 0x226b60
void sub_00226B40_0x226b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226B40_0x226b40");
#endif

    ctx->pc = 0x226b40u;

    // 0x226b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226b44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x226b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x226b48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226b4c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x226b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x226b50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x226b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x226b54: 0x3e00008  jr          $ra
    ctx->pc = 0x226B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226B5Cu;
    // 0x226b5c: 0x0  nop
    ctx->pc = 0x226b5cu;
    // NOP
    ctx->pc = 0x226b60u;
}
