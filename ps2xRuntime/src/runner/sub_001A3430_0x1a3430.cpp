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

// Function: sub_001A3430
// Address: 0x1a3430 - 0x1a3480
void sub_001A3430_0x1a3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3430_0x1a3430");
#endif

    ctx->pc = 0x1a3430u;

    // 0x1a3430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a3434: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a3434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a3438: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a3438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1a343c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1a343cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1a3440: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1a3440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1a3444: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a3444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3448: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a3448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a344c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a344cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3450: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a3450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3454: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a3454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3458: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a3458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1a345c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3460: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a3460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3464: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1a3464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1a3468: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a3468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a346c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A346Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A346Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3474u;
    // 0x1a3474: 0x0  nop
    ctx->pc = 0x1a3474u;
    // NOP
    // 0x1a3478: 0x0  nop
    ctx->pc = 0x1a3478u;
    // NOP
    // 0x1a347c: 0x0  nop
    ctx->pc = 0x1a347cu;
    // NOP
    ctx->pc = 0x1a3480u;
}
