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

// Function: sub_00132160
// Address: 0x132160 - 0x1321a0
void sub_00132160_0x132160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132160_0x132160");
#endif

    ctx->pc = 0x132160u;

    // 0x132160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132164: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x132164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x132168: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x132168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13216c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x132170: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x132170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132178: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x132178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13217c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132180: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x132180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x132184: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132184u;
    {
        const bool branch_taken_0x132184 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x132184) {
            ctx->pc = 0x132194u;
            goto label_132194;
        }
    }
    ctx->pc = 0x13218Cu;
    // 0x13218c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x132190: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x132190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_132194:
    // 0x132194: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x132194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x132198: 0x3e00008  jr          $ra
    ctx->pc = 0x132198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1321A0u;
}
