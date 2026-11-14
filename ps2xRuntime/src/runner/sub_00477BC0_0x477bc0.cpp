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

// Function: sub_00477BC0
// Address: 0x477bc0 - 0x477c00
void sub_00477BC0_0x477bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477BC0_0x477bc0");
#endif

    ctx->pc = 0x477bc0u;

    // 0x477bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x477bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x477bc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x477bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x477bc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x477bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477bcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x477bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x477bd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x477bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477bd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x477bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x477bd8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x477bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x477bdc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x477bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x477be0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x477be0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x477be4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x477BE4u;
    {
        const bool branch_taken_0x477be4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x477be4) {
            ctx->pc = 0x477BF4u;
            goto label_477bf4;
        }
    }
    ctx->pc = 0x477BECu;
    // 0x477bec: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x477becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x477bf0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x477bf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_477bf4:
    // 0x477bf4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x477bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x477bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x477BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477C00u;
}
