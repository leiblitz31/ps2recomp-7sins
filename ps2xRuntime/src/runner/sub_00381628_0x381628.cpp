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

// Function: sub_00381628
// Address: 0x381628 - 0x381668
void sub_00381628_0x381628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381628_0x381628");
#endif

    ctx->pc = 0x381628u;

    // 0x381628: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x381628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x38162c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x381630: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x381630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x381634: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x381634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x381638: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x381638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38163c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x38163cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x381640: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x381640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x381644: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x381644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x381648: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x381648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38164c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x381650: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x381650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x381654: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x381654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x381658: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x381658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x38165c: 0x3e00008  jr          $ra
    ctx->pc = 0x38165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38165Cu;
        // 0x381660: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38165Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381664u;
    // 0x381664: 0x0  nop
    ctx->pc = 0x381664u;
    // NOP
    ctx->pc = 0x381668u;
}
