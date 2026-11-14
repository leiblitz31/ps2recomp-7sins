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

// Function: sub_001AF3B0
// Address: 0x1af3b0 - 0x1af3d0
void sub_001AF3B0_0x1af3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF3B0_0x1af3b0");
#endif

    ctx->pc = 0x1af3b0u;

    // 0x1af3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af3b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1af3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1af3b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af3bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1af3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1af3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF3C8u;
    // 0x1af3c8: 0x0  nop
    ctx->pc = 0x1af3c8u;
    // NOP
    // 0x1af3cc: 0x0  nop
    ctx->pc = 0x1af3ccu;
    // NOP
    ctx->pc = 0x1af3d0u;
}
