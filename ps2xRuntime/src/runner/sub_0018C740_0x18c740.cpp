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

// Function: sub_0018C740
// Address: 0x18c740 - 0x18c760
void sub_0018C740_0x18c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C740_0x18c740");
#endif

    ctx->pc = 0x18c740u;

    // 0x18c740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c744: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18c744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18c748: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c74c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18c74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18c750: 0x3e00008  jr          $ra
    ctx->pc = 0x18C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C758u;
    // 0x18c758: 0x0  nop
    ctx->pc = 0x18c758u;
    // NOP
    // 0x18c75c: 0x0  nop
    ctx->pc = 0x18c75cu;
    // NOP
    ctx->pc = 0x18c760u;
}
