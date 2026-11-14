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

// Function: sub_0027F490
// Address: 0x27f490 - 0x27f4b0
void sub_0027F490_0x27f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F490_0x27f490");
#endif

    ctx->pc = 0x27f490u;

    // 0x27f490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f494: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27f494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x27f498: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f49c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27f4a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F4ACu;
    // 0x27f4ac: 0x0  nop
    ctx->pc = 0x27f4acu;
    // NOP
    ctx->pc = 0x27f4b0u;
}
