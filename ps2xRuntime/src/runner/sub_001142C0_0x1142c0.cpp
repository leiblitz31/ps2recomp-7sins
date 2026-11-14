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

// Function: sub_001142C0
// Address: 0x1142c0 - 0x114300
void sub_001142C0_0x1142c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001142C0_0x1142c0");
#endif

    ctx->pc = 0x1142c0u;

    // 0x1142c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1142c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1142c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1142c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1142c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1142c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1142cc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1142ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1142d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1142d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1142d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1142d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1142d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1142d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1142dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1142dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1142e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1142e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1142e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1142e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1142e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1142e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1142ec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1142ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1142f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1142f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1142f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1142f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1142f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1142F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1142F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114300u;
}
