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

// Function: sub_00243E80
// Address: 0x243e80 - 0x243ea0
void sub_00243E80_0x243e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243E80_0x243e80");
#endif

    ctx->pc = 0x243e80u;

    // 0x243e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243e84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x243e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x243e88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x243e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243e8c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x243e90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243e94: 0x3e00008  jr          $ra
    ctx->pc = 0x243E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243E9Cu;
    // 0x243e9c: 0x0  nop
    ctx->pc = 0x243e9cu;
    // NOP
    ctx->pc = 0x243ea0u;
}
