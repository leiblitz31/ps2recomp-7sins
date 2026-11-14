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

// Function: sub_0018CF40
// Address: 0x18cf40 - 0x18cf80
void sub_0018CF40_0x18cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CF40_0x18cf40");
#endif

    ctx->pc = 0x18cf40u;

    // 0x18cf40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18cf44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18cf48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cf4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cf50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cf54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cf58: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18cf5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18cf60: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x18cf60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x18cf64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF64u;
    {
        const bool branch_taken_0x18cf64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18cf64) {
            ctx->pc = 0x18CF74u;
            goto label_18cf74;
        }
    }
    ctx->pc = 0x18CF6Cu;
    // 0x18cf6c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x18cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x18cf70: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18cf70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_18cf74:
    // 0x18cf74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18cf74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18cf78: 0x3e00008  jr          $ra
    ctx->pc = 0x18CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CF80u;
}
