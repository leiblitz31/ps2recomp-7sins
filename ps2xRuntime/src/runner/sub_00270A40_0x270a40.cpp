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

// Function: sub_00270A40
// Address: 0x270a40 - 0x270a80
void sub_00270A40_0x270a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270A40_0x270a40");
#endif

    ctx->pc = 0x270a40u;

    // 0x270a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x270a44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x270a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x270a48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x270a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270a4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x270a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x270a50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x270a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270a54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x270a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270a58: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x270a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270a5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x270a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270a60: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x270a60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x270a64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270A64u;
    {
        const bool branch_taken_0x270a64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x270a64) {
            ctx->pc = 0x270A74u;
            goto label_270a74;
        }
    }
    ctx->pc = 0x270A6Cu;
    // 0x270a6c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x270a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x270a70: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x270a70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_270a74:
    // 0x270a74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x270a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x270a78: 0x3e00008  jr          $ra
    ctx->pc = 0x270A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270A80u;
}
