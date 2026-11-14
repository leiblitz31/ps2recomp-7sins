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

// Function: sub_00243290
// Address: 0x243290 - 0x2432b0
void sub_00243290_0x243290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243290_0x243290");
#endif

    ctx->pc = 0x243290u;

    // 0x243290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243294: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x243294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x243298: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x243298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24329c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x24329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2432a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2432a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2432a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2432A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2432A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2432ACu;
    // 0x2432ac: 0x0  nop
    ctx->pc = 0x2432acu;
    // NOP
    ctx->pc = 0x2432b0u;
}
