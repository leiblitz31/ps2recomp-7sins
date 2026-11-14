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

// Function: sub_0016BF80
// Address: 0x16bf80 - 0x16bfc0
void sub_0016BF80_0x16bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BF80_0x16bf80");
#endif

    ctx->pc = 0x16bf80u;

    // 0x16bf80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bf84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16bf88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bf90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bf98: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bf9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bfa0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x16bfa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x16bfa4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BFA4u;
    {
        const bool branch_taken_0x16bfa4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x16bfa4) {
            ctx->pc = 0x16BFB4u;
            goto label_16bfb4;
        }
    }
    ctx->pc = 0x16BFACu;
    // 0x16bfac: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x16bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x16bfb0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x16bfb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_16bfb4:
    // 0x16bfb4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16bfb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x16BFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BFC0u;
}
