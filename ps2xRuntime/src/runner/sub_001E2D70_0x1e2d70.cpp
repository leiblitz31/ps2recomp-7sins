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

// Function: sub_001E2D70
// Address: 0x1e2d70 - 0x1e2dd0
void sub_001E2D70_0x1e2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2D70_0x1e2d70");
#endif

    ctx->pc = 0x1e2d70u;

    // 0x1e2d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2d74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e2d7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2d84: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1e2d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e2d88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2d8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2d98: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2D98u;
    {
        const bool branch_taken_0x1e2d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2d98) {
            ctx->pc = 0x1E2DBCu;
            goto label_1e2dbc;
        }
    }
    ctx->pc = 0x1E2DA0u;
    // 0x1e2da0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2da4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e2da8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2dac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e2db0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2DB0u;
    {
        const bool branch_taken_0x1e2db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2db0) {
            ctx->pc = 0x1E2DBCu;
            goto label_1e2dbc;
        }
    }
    ctx->pc = 0x1E2DB8u;
    // 0x1e2db8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e2db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2dbc:
    // 0x1e2dbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2dc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e2dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2DD0u;
}
