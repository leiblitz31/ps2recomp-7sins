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

// Function: sub_00118290
// Address: 0x118290 - 0x1182b0
void sub_00118290_0x118290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118290_0x118290");
#endif

    ctx->pc = 0x118290u;

    // 0x118290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118294: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x118294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x118298: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11829c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x11829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1182a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1182a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1182a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1182A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1182A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1182ACu;
    // 0x1182ac: 0x0  nop
    ctx->pc = 0x1182acu;
    // NOP
    ctx->pc = 0x1182b0u;
}
