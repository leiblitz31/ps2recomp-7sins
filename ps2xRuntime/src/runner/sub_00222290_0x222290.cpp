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

// Function: sub_00222290
// Address: 0x222290 - 0x2222b0
void sub_00222290_0x222290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222290_0x222290");
#endif

    ctx->pc = 0x222290u;

    // 0x222290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222294: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x222294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x222298: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x222298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22229c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2222a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2222a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2222A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2222A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2222ACu;
    // 0x2222ac: 0x0  nop
    ctx->pc = 0x2222acu;
    // NOP
    ctx->pc = 0x2222b0u;
}
