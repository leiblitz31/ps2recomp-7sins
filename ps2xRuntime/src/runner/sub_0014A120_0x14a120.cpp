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

// Function: sub_0014A120
// Address: 0x14a120 - 0x14a140
void sub_0014A120_0x14a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A120_0x14a120");
#endif

    ctx->pc = 0x14a120u;

    // 0x14a120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a124: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14a124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14a128: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a12c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14a12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14a130: 0x3e00008  jr          $ra
    ctx->pc = 0x14A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A138u;
    // 0x14a138: 0x0  nop
    ctx->pc = 0x14a138u;
    // NOP
    // 0x14a13c: 0x0  nop
    ctx->pc = 0x14a13cu;
    // NOP
    ctx->pc = 0x14a140u;
}
