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

// Function: sub_0025E5C0
// Address: 0x25e5c0 - 0x25e5e0
void sub_0025E5C0_0x25e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E5C0_0x25e5c0");
#endif

    ctx->pc = 0x25e5c0u;

    // 0x25e5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e5c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25e5c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e5cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e5d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25e5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E5DCu;
    // 0x25e5dc: 0x0  nop
    ctx->pc = 0x25e5dcu;
    // NOP
    ctx->pc = 0x25e5e0u;
}
