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

// Function: sub_00210FC0
// Address: 0x210fc0 - 0x210fe0
void sub_00210FC0_0x210fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210FC0_0x210fc0");
#endif

    ctx->pc = 0x210fc0u;

    // 0x210fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210fc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x210fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x210fc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210fcc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x210fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x210fd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x210fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x210fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x210FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210FDCu;
    // 0x210fdc: 0x0  nop
    ctx->pc = 0x210fdcu;
    // NOP
    ctx->pc = 0x210fe0u;
}
