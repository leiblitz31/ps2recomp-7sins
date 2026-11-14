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

// Function: sub_00261A60
// Address: 0x261a60 - 0x261aa0
void sub_00261A60_0x261a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261A60_0x261a60");
#endif

    ctx->pc = 0x261a60u;

    // 0x261a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x261a64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x261a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x261a68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x261a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261a6c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x261a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x261a70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x261a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261a74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x261a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261a78: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x261a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261a7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x261a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x261a80: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x261a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x261a84: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x261A84u;
    {
        const bool branch_taken_0x261a84 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x261a84) {
            ctx->pc = 0x261A94u;
            goto label_261a94;
        }
    }
    ctx->pc = 0x261A8Cu;
    // 0x261a8c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x261a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x261a90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x261a90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_261a94:
    // 0x261a94: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x261a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261a98: 0x3e00008  jr          $ra
    ctx->pc = 0x261A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261AA0u;
}
