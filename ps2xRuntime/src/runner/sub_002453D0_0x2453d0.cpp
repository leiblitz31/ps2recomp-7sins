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

// Function: sub_002453D0
// Address: 0x2453d0 - 0x2453f0
void sub_002453D0_0x2453d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002453D0_0x2453d0");
#endif

    ctx->pc = 0x2453d0u;

    // 0x2453d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2453d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2453d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2453d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2453d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2453d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2453dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2453dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2453e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2453E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2453E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2453E8u;
    // 0x2453e8: 0x0  nop
    ctx->pc = 0x2453e8u;
    // NOP
    // 0x2453ec: 0x0  nop
    ctx->pc = 0x2453ecu;
    // NOP
    ctx->pc = 0x2453f0u;
}
