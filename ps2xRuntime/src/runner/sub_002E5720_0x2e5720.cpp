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

// Function: sub_002E5720
// Address: 0x2e5720 - 0x2e5740
void sub_002E5720_0x2e5720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5720_0x2e5720");
#endif

    ctx->pc = 0x2e5720u;

    // 0x2e5720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5724: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e5724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e5728: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e572c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e5730: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e5734: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E573Cu;
    // 0x2e573c: 0x0  nop
    ctx->pc = 0x2e573cu;
    // NOP
    ctx->pc = 0x2e5740u;
}
