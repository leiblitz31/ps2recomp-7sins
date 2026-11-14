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

// Function: sub_00482E60
// Address: 0x482e60 - 0x482ea0
void sub_00482E60_0x482e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482E60_0x482e60");
#endif

    ctx->pc = 0x482e60u;

    // 0x482e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x482e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x482e64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x482e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x482e68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x482e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482e6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x482e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x482e70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x482e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482e74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x482e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x482e78: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x482e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x482e7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x482e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x482e80: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x482e80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x482e84: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x482E84u;
    {
        const bool branch_taken_0x482e84 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x482e84) {
            ctx->pc = 0x482E94u;
            goto label_482e94;
        }
    }
    ctx->pc = 0x482E8Cu;
    // 0x482e8c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x482e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x482e90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x482e90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_482e94:
    // 0x482e94: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x482e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x482e98: 0x3e00008  jr          $ra
    ctx->pc = 0x482E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482EA0u;
}
