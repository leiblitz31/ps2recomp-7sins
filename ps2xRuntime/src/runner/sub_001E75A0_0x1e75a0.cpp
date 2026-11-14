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

// Function: sub_001E75A0
// Address: 0x1e75a0 - 0x1e75e0
void sub_001E75A0_0x1e75a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E75A0_0x1e75a0");
#endif

    ctx->pc = 0x1e75a0u;

    // 0x1e75a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e75a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e75a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e75a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75ac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e75acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e75b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e75b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e75bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e75c0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1e75c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1e75c4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E75C4u;
    {
        const bool branch_taken_0x1e75c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e75c4) {
            ctx->pc = 0x1E75D4u;
            goto label_1e75d4;
        }
    }
    ctx->pc = 0x1E75CCu;
    // 0x1e75cc: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1e75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1e75d0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1e75d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1e75d4:
    // 0x1e75d4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e75d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e75d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E75D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E75D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E75E0u;
}
