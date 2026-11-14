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

// Function: sub_0018D0A0
// Address: 0x18d0a0 - 0x18d0e0
void sub_0018D0A0_0x18d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D0A0_0x18d0a0");
#endif

    ctx->pc = 0x18d0a0u;

    // 0x18d0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d0a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18d0a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x18d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18d0ac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x18d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x18d0b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d0b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d0b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d0bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18d0c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d0c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d0c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d0cc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x18d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18d0d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d0d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18d0d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18d0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18D0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D0E0u;
}
