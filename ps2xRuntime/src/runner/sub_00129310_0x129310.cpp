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

// Function: sub_00129310
// Address: 0x129310 - 0x129350
void sub_00129310_0x129310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129310_0x129310");
#endif

    ctx->pc = 0x129310u;

    // 0x129310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x129318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12931c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x129320: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x129320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129324: 0x10100006  beq         $zero, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129324u;
    {
        const bool branch_taken_0x129324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x129324) {
            ctx->pc = 0x129340u;
            goto label_129340;
        }
    }
    ctx->pc = 0x12932Cu;
    // 0x12932c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129330: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x129330u;
    {
        const bool branch_taken_0x129330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129330) {
            ctx->pc = 0x129340u;
            goto label_129340;
        }
    }
    ctx->pc = 0x129338u;
    // 0x129338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x129338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12933c: 0xa383ba4c  sb          $v1, -0x45B4($gp)
    ctx->pc = 0x12933cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949452), (uint8_t)GPR_U32(ctx, 3));
label_129340:
    // 0x129340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129344: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x129344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x129348: 0x3e00008  jr          $ra
    ctx->pc = 0x129348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129350u;
}
