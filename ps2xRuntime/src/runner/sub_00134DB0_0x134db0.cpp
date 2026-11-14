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

// Function: sub_00134DB0
// Address: 0x134db0 - 0x134dd0
void sub_00134DB0_0x134db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134DB0_0x134db0");
#endif

    ctx->pc = 0x134db0u;

    // 0x134db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134db4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134db8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134dbc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x134dbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x134DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134DC8u;
    // 0x134dc8: 0x0  nop
    ctx->pc = 0x134dc8u;
    // NOP
    // 0x134dcc: 0x0  nop
    ctx->pc = 0x134dccu;
    // NOP
    ctx->pc = 0x134dd0u;
}
