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

// Function: sub_0028D870
// Address: 0x28d870 - 0x28d890
void sub_0028D870_0x28d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D870_0x28d870");
#endif

    ctx->pc = 0x28d870u;

    // 0x28d870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28d874: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28d874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28d878: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d87c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x28d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x28d880: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28d884: 0x3e00008  jr          $ra
    ctx->pc = 0x28D884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D88Cu;
    // 0x28d88c: 0x0  nop
    ctx->pc = 0x28d88cu;
    // NOP
    ctx->pc = 0x28d890u;
}
