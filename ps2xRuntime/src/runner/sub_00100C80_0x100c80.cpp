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

// Function: sub_00100C80
// Address: 0x100c80 - 0x100cb0
void sub_00100C80_0x100c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100C80_0x100c80");
#endif

    ctx->pc = 0x100c80u;

    // 0x100c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100c84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100c8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x100c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x100c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x100c94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x100c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100c98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x100c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c9c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x100c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x100ca0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x100ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100ca4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x100ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x100ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x100CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100CB0u;
}
