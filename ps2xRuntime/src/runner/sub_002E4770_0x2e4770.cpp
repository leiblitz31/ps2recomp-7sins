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

// Function: sub_002E4770
// Address: 0x2e4770 - 0x2e47b0
void sub_002E4770_0x2e4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4770_0x2e4770");
#endif

    ctx->pc = 0x2e4770u;

    // 0x2e4770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4774: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e4774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e4778: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e4778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e477c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4780: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e4780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4784: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4788: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e4788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e478c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e4790: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2e4790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2e4794: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4794u;
    {
        const bool branch_taken_0x2e4794 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e4794) {
            ctx->pc = 0x2E47A4u;
            goto label_2e47a4;
        }
    }
    ctx->pc = 0x2E479Cu;
    // 0x2e479c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2e479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2e47a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2e47a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2e47a4:
    // 0x2e47a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e47a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e47a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E47A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E47A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E47B0u;
}
