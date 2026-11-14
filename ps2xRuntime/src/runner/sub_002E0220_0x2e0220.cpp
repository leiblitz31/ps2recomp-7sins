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

// Function: sub_002E0220
// Address: 0x2e0220 - 0x2e0260
void sub_002E0220_0x2e0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0220_0x2e0220");
#endif

    ctx->pc = 0x2e0220u;

    // 0x2e0220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0224: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e0224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e0228: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e022c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e0230: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0234: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0238: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e0238u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e023c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e0240: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2e0240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2e0244: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0244u;
    {
        const bool branch_taken_0x2e0244 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e0244) {
            ctx->pc = 0x2E0254u;
            goto label_2e0254;
        }
    }
    ctx->pc = 0x2E024Cu;
    // 0x2e024c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2e024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2e0250: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2e0250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2e0254:
    // 0x2e0254: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e0254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e0258: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0260u;
}
