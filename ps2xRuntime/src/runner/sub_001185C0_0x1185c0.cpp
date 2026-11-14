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

// Function: sub_001185C0
// Address: 0x1185c0 - 0x1185e0
void sub_001185C0_0x1185c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001185C0_0x1185c0");
#endif

    ctx->pc = 0x1185c0u;

    // 0x1185c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1185c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1185c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1185c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1185c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1185c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1185cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1185ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1185d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1185d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1185d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1185D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1185D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1185DCu;
    // 0x1185dc: 0x0  nop
    ctx->pc = 0x1185dcu;
    // NOP
    ctx->pc = 0x1185e0u;
}
