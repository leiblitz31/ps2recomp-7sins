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

// Function: sub_00106D00
// Address: 0x106d00 - 0x106d20
void sub_00106D00_0x106d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106D00_0x106d00");
#endif

    ctx->pc = 0x106d00u;

    // 0x106d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106d04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x106d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x106d08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x106d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106d0c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x106d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x106d10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x106d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x106d14: 0x3e00008  jr          $ra
    ctx->pc = 0x106D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106D1Cu;
    // 0x106d1c: 0x0  nop
    ctx->pc = 0x106d1cu;
    // NOP
    ctx->pc = 0x106d20u;
}
