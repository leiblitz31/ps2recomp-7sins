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

// Function: sub_001E28F0
// Address: 0x1e28f0 - 0x1e2940
void sub_001E28F0_0x1e28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E28F0_0x1e28f0");
#endif

    ctx->pc = 0x1e28f0u;

    // 0x1e28f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e28f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e28f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e28f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e28fc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2900: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e2900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e2904: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e2904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1e2908: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1e2908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1e290c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E290Cu;
    {
        const bool branch_taken_0x1e290c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e290c) {
            ctx->pc = 0x1E2930u;
            goto label_1e2930;
        }
    }
    ctx->pc = 0x1E2914u;
    // 0x1e2914: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e2914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2918: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e2918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e291c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e291cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2920: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e2920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2924: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1e2924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e2928: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e2928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e292c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e292cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1e2930:
    // 0x1e2930: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e2930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e2934: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E293Cu;
    // 0x1e293c: 0x0  nop
    ctx->pc = 0x1e293cu;
    // NOP
    ctx->pc = 0x1e2940u;
}
