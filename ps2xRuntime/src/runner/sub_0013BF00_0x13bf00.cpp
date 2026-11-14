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

// Function: sub_0013BF00
// Address: 0x13bf00 - 0x13bf10
void sub_0013BF00_0x13bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BF00_0x13bf00");
#endif

    ctx->pc = 0x13bf00u;

    // 0x13bf00: 0x9382ba68  lbu         $v0, -0x4598($gp)
    ctx->pc = 0x13bf00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949480)));
    // 0x13bf04: 0x3e00008  jr          $ra
    ctx->pc = 0x13BF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BF0Cu;
    // 0x13bf0c: 0x0  nop
    ctx->pc = 0x13bf0cu;
    // NOP
    ctx->pc = 0x13bf10u;
}
