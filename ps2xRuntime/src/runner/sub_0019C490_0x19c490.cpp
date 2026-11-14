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

// Function: sub_0019C490
// Address: 0x19c490 - 0x19c4b0
void sub_0019C490_0x19c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C490_0x19c490");
#endif

    ctx->pc = 0x19c490u;

    // 0x19c490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c494: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19c494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19c498: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c49c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x19c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19c4a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19c4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19c4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C4ACu;
    // 0x19c4ac: 0x0  nop
    ctx->pc = 0x19c4acu;
    // NOP
    ctx->pc = 0x19c4b0u;
}
