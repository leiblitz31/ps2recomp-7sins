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

// Function: sub_00490620
// Address: 0x490620 - 0x490640
void sub_00490620_0x490620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490620_0x490620");
#endif

    ctx->pc = 0x490620u;

    // 0x490620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x490620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x490624: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x490624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x490628: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x490628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49062c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x49062cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x490630: 0x3e00008  jr          $ra
    ctx->pc = 0x490630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490638u;
    // 0x490638: 0x0  nop
    ctx->pc = 0x490638u;
    // NOP
    // 0x49063c: 0x0  nop
    ctx->pc = 0x49063cu;
    // NOP
    ctx->pc = 0x490640u;
}
