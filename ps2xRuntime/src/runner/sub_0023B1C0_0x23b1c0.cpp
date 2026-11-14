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

// Function: sub_0023B1C0
// Address: 0x23b1c0 - 0x23b1f0
void sub_0023B1C0_0x23b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B1C0_0x23b1c0");
#endif

    ctx->pc = 0x23b1c0u;

    // 0x23b1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b1c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23b1c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b1cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b1d0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x23b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x23b1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b1d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23b1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23b1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x23B1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B1E4u;
    // 0x23b1e4: 0x0  nop
    ctx->pc = 0x23b1e4u;
    // NOP
    // 0x23b1e8: 0x0  nop
    ctx->pc = 0x23b1e8u;
    // NOP
    // 0x23b1ec: 0x0  nop
    ctx->pc = 0x23b1ecu;
    // NOP
    ctx->pc = 0x23b1f0u;
}
