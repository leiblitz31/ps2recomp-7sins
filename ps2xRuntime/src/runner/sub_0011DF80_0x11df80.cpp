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

// Function: sub_0011DF80
// Address: 0x11df80 - 0x11dfa0
void sub_0011DF80_0x11df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DF80_0x11df80");
#endif

    ctx->pc = 0x11df80u;

    // 0x11df80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11df84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11df84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11df88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11df8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11df90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11df94: 0x3e00008  jr          $ra
    ctx->pc = 0x11DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DF9Cu;
    // 0x11df9c: 0x0  nop
    ctx->pc = 0x11df9cu;
    // NOP
    ctx->pc = 0x11dfa0u;
}
