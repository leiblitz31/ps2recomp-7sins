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

// Function: sub_0023D190
// Address: 0x23d190 - 0x23d1b0
void sub_0023D190_0x23d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D190_0x23d190");
#endif

    ctx->pc = 0x23d190u;

    // 0x23d190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23d194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23d198: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d19c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23d1a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23d1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23D1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D1ACu;
    // 0x23d1ac: 0x0  nop
    ctx->pc = 0x23d1acu;
    // NOP
    ctx->pc = 0x23d1b0u;
}
