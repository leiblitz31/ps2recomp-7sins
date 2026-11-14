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

// Function: sub_0023FF50
// Address: 0x23ff50 - 0x23ff90
void sub_0023FF50_0x23ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FF50_0x23ff50");
#endif

    ctx->pc = 0x23ff50u;

    // 0x23ff50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ff54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23ff58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ff5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23ff60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ff64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ff68: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ff6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23ff70: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x23ff70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x23ff74: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FF74u;
    {
        const bool branch_taken_0x23ff74 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x23ff74) {
            ctx->pc = 0x23FF84u;
            goto label_23ff84;
        }
    }
    ctx->pc = 0x23FF7Cu;
    // 0x23ff7c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x23ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x23ff80: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x23ff80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_23ff84:
    // 0x23ff84: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23ff84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ff88: 0x3e00008  jr          $ra
    ctx->pc = 0x23FF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FF90u;
}
