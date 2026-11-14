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

// Function: sub_00458410
// Address: 0x458410 - 0x458430
void sub_00458410_0x458410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458410_0x458410");
#endif

    ctx->pc = 0x458410u;

    // 0x458410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x458410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x458414: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x458414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x458418: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x458418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45841c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x45841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x458420: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x458420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x458424: 0x3e00008  jr          $ra
    ctx->pc = 0x458424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45842Cu;
    // 0x45842c: 0x0  nop
    ctx->pc = 0x45842cu;
    // NOP
    ctx->pc = 0x458430u;
}
