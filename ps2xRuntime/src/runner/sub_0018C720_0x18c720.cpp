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

// Function: sub_0018C720
// Address: 0x18c720 - 0x18c740
void sub_0018C720_0x18c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C720_0x18c720");
#endif

    ctx->pc = 0x18c720u;

    // 0x18c720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c724: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18c724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18c728: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c72c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18c72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18c730: 0x3e00008  jr          $ra
    ctx->pc = 0x18C730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C738u;
    // 0x18c738: 0x0  nop
    ctx->pc = 0x18c738u;
    // NOP
    // 0x18c73c: 0x0  nop
    ctx->pc = 0x18c73cu;
    // NOP
    ctx->pc = 0x18c740u;
}
