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

// Function: sub_00494930
// Address: 0x494930 - 0x494950
void sub_00494930_0x494930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494930_0x494930");
#endif

    ctx->pc = 0x494930u;

    // 0x494930: 0x8f83c160  lw          $v1, -0x3EA0($gp)
    ctx->pc = 0x494930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951264)));
    // 0x494934: 0xaf83c15c  sw          $v1, -0x3EA4($gp)
    ctx->pc = 0x494934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951260), GPR_U32(ctx, 3));
    // 0x494938: 0xaf80c160  sw          $zero, -0x3EA0($gp)
    ctx->pc = 0x494938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951264), GPR_U32(ctx, 0));
    // 0x49493c: 0x3e00008  jr          $ra
    ctx->pc = 0x49493Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49493Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494944u;
    // 0x494944: 0x0  nop
    ctx->pc = 0x494944u;
    // NOP
    // 0x494948: 0x0  nop
    ctx->pc = 0x494948u;
    // NOP
    // 0x49494c: 0x0  nop
    ctx->pc = 0x49494cu;
    // NOP
    ctx->pc = 0x494950u;
}
