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

// Function: sub_00237A90
// Address: 0x237a90 - 0x237ac0
void sub_00237A90_0x237a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237A90_0x237a90");
#endif

    ctx->pc = 0x237a90u;

    // 0x237a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237a94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237a98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237a9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x237a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237aa0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x237aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x237aa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237aa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x237aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237aac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x237aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x237ab0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x237ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237ab4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x237ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x237ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x237AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237AC0u;
}
