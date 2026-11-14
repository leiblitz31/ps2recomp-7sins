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

// Function: sub_001E0530
// Address: 0x1e0530 - 0x1e0550
void sub_001E0530_0x1e0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0530_0x1e0530");
#endif

    ctx->pc = 0x1e0530u;

    // 0x1e0530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0534: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e0534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e0538: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e053c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e053cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0540: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0548u;
    // 0x1e0548: 0x0  nop
    ctx->pc = 0x1e0548u;
    // NOP
    // 0x1e054c: 0x0  nop
    ctx->pc = 0x1e054cu;
    // NOP
    ctx->pc = 0x1e0550u;
}
