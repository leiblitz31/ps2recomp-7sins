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

// Function: sub_001410F0
// Address: 0x1410f0 - 0x141110
void sub_001410F0_0x1410f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001410F0_0x1410f0");
#endif

    ctx->pc = 0x1410f0u;

    // 0x1410f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1410f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1410f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1410f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1410f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1410f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1410fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1410fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141100: 0xa0640060  sb          $a0, 0x60($v1)
    ctx->pc = 0x141100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x141104: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141108: 0x3e00008  jr          $ra
    ctx->pc = 0x141108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141110u;
}
