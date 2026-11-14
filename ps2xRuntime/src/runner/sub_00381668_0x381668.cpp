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

// Function: sub_00381668
// Address: 0x381668 - 0x3816a8
void sub_00381668_0x381668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381668_0x381668");
#endif

    ctx->pc = 0x381668u;

    // 0x381668: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x381668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x38166c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x381670: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x381670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x381674: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x381674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x381678: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x381678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38167c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x381680: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x381680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x381684: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x381684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x381688: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x381688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38168c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x38168cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x381690: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x381690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x381694: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x381694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x381698: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x381698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x38169c: 0x3e00008  jr          $ra
    ctx->pc = 0x38169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3816A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38169Cu;
        // 0x3816a0: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3816A4u;
    // 0x3816a4: 0x0  nop
    ctx->pc = 0x3816a4u;
    // NOP
    ctx->pc = 0x3816a8u;
}
