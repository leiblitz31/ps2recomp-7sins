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

// Function: sub_00487460
// Address: 0x487460 - 0x487480
void sub_00487460_0x487460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487460_0x487460");
#endif

    ctx->pc = 0x487460u;

    // 0x487460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x487460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x487464: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x487464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x487468: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x487468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48746c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x487470: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x487470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x487474: 0x3e00008  jr          $ra
    ctx->pc = 0x487474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48747Cu;
    // 0x48747c: 0x0  nop
    ctx->pc = 0x48747cu;
    // NOP
    ctx->pc = 0x487480u;
}
