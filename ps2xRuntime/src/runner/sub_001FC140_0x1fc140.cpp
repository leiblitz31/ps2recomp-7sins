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

// Function: sub_001FC140
// Address: 0x1fc140 - 0x1fc160
void sub_001FC140_0x1fc140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC140_0x1fc140");
#endif

    ctx->pc = 0x1fc140u;

    // 0x1fc140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc144: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1fc144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1fc148: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc14c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fc14cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fc150: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC158u;
    // 0x1fc158: 0x0  nop
    ctx->pc = 0x1fc158u;
    // NOP
    // 0x1fc15c: 0x0  nop
    ctx->pc = 0x1fc15cu;
    // NOP
    ctx->pc = 0x1fc160u;
}
