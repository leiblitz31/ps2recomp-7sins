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

// Function: sub_002AD650
// Address: 0x2ad650 - 0x2ad670
void sub_002AD650_0x2ad650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD650_0x2ad650");
#endif

    ctx->pc = 0x2ad650u;

    // 0x2ad650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad654: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ad654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ad658: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ad658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad65c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ad65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad660: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ad660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad664: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD66Cu;
    // 0x2ad66c: 0x0  nop
    ctx->pc = 0x2ad66cu;
    // NOP
    ctx->pc = 0x2ad670u;
}
