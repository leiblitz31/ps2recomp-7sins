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

// Function: sub_00247280
// Address: 0x247280 - 0x2472a0
void sub_00247280_0x247280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247280_0x247280");
#endif

    ctx->pc = 0x247280u;

    // 0x247280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247284: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x247284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x247288: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x247288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24728c: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x24728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x247290: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x247290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x247294: 0x3e00008  jr          $ra
    ctx->pc = 0x247294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24729Cu;
    // 0x24729c: 0x0  nop
    ctx->pc = 0x24729cu;
    // NOP
    ctx->pc = 0x2472a0u;
}
