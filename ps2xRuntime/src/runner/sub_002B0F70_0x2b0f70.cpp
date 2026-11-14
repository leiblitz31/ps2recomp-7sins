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

// Function: sub_002B0F70
// Address: 0x2b0f70 - 0x2b0fb0
void sub_002B0F70_0x2b0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0F70_0x2b0f70");
#endif

    ctx->pc = 0x2b0f70u;

    // 0x2b0f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b0f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b0f74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b0f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b0f78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0f7c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b0f80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0f84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0f88: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0f8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b0f90: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2b0f90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b0f94: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0F94u;
    {
        const bool branch_taken_0x2b0f94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b0f94) {
            ctx->pc = 0x2B0FA4u;
            goto label_2b0fa4;
        }
    }
    ctx->pc = 0x2B0F9Cu;
    // 0x2b0f9c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2b0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b0fa0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2b0fa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2b0fa4:
    // 0x2b0fa4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b0fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b0fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0FB0u;
}
