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

// Function: sub_00279070
// Address: 0x279070 - 0x279090
void sub_00279070_0x279070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279070_0x279070");
#endif

    ctx->pc = 0x279070u;

    // 0x279070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279074: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x279074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x279078: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x279078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27907c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27907cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279080: 0x3e00008  jr          $ra
    ctx->pc = 0x279080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279088u;
    // 0x279088: 0x0  nop
    ctx->pc = 0x279088u;
    // NOP
    // 0x27908c: 0x0  nop
    ctx->pc = 0x27908cu;
    // NOP
    ctx->pc = 0x279090u;
}
