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

// Function: sub_00111D50
// Address: 0x111d50 - 0x111d90
void sub_00111D50_0x111d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111D50_0x111d50");
#endif

    ctx->pc = 0x111d50u;

    // 0x111d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111d54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x111d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111d58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x111d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x111d5c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x111d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x111d60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111d64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111d68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111d6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x111d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x111d70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x111d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111d74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111d78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111d7c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x111d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x111d80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111d84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x111d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x111d88: 0x3e00008  jr          $ra
    ctx->pc = 0x111D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111D90u;
}
