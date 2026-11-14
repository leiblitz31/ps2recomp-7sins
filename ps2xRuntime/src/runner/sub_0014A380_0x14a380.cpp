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

// Function: sub_0014A380
// Address: 0x14a380 - 0x14a3a0
void sub_0014A380_0x14a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A380_0x14a380");
#endif

    ctx->pc = 0x14a380u;

    // 0x14a380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a384: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14a384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14a388: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a38c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a390: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x14a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x14a394: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14a394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14a398: 0x3e00008  jr          $ra
    ctx->pc = 0x14A398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A3A0u;
}
