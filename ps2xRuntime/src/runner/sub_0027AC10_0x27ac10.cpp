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

// Function: sub_0027AC10
// Address: 0x27ac10 - 0x27ac50
void sub_0027AC10_0x27ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AC10_0x27ac10");
#endif

    ctx->pc = 0x27ac10u;

    // 0x27ac10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ac14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x27ac18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ac1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27ac20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ac24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ac28: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ac2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27ac30: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x27ac30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x27ac34: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AC34u;
    {
        const bool branch_taken_0x27ac34 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27ac34) {
            ctx->pc = 0x27AC44u;
            goto label_27ac44;
        }
    }
    ctx->pc = 0x27AC3Cu;
    // 0x27ac3c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x27ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x27ac40: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x27ac40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_27ac44:
    // 0x27ac44: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27ac44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x27AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AC50u;
}
