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

// Function: sub_002431E0
// Address: 0x2431e0 - 0x243220
void sub_002431E0_0x2431e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002431E0_0x2431e0");
#endif

    ctx->pc = 0x2431e0u;

    // 0x2431e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2431e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2431e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2431e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2431e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2431e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2431ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2431ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2431f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2431f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2431f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2431f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2431f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2431f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2431fc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2431fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243200: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x243200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x243204: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x243204u;
    {
        const bool branch_taken_0x243204 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x243204) {
            ctx->pc = 0x243214u;
            goto label_243214;
        }
    }
    ctx->pc = 0x24320Cu;
    // 0x24320c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x24320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x243210: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x243210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_243214:
    // 0x243214: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243218: 0x3e00008  jr          $ra
    ctx->pc = 0x243218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243220u;
}
