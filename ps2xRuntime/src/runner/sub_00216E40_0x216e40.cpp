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

// Function: sub_00216E40
// Address: 0x216e40 - 0x216e80
void sub_00216E40_0x216e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216E40_0x216e40");
#endif

    ctx->pc = 0x216e40u;

    // 0x216e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216e44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x216e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x216e48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x216e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216e50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x216e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216e58: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x216e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216e5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216e60: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x216e60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x216e64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216E64u;
    {
        const bool branch_taken_0x216e64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x216e64) {
            ctx->pc = 0x216E74u;
            goto label_216e74;
        }
    }
    ctx->pc = 0x216E6Cu;
    // 0x216e6c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x216e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x216e70: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x216e70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_216e74:
    // 0x216e74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x216e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x216e78: 0x3e00008  jr          $ra
    ctx->pc = 0x216E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216E80u;
}
