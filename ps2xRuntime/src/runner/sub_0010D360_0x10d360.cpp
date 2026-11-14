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

// Function: sub_0010D360
// Address: 0x10d360 - 0x10d380
void sub_0010D360_0x10d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D360_0x10d360");
#endif

    ctx->pc = 0x10d360u;

    // 0x10d360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d364: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10d364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10d368: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d36c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x10d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10d370: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10d374: 0x3e00008  jr          $ra
    ctx->pc = 0x10D374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D37Cu;
    // 0x10d37c: 0x0  nop
    ctx->pc = 0x10d37cu;
    // NOP
    ctx->pc = 0x10d380u;
}
