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

// Function: sub_00314A98
// Address: 0x314a98 - 0x314ac0
void sub_00314A98_0x314a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314A98_0x314a98");
#endif

    ctx->pc = 0x314a98u;

    // 0x314a98: 0x8f83a5a4  lw          $v1, -0x5A5C($gp)
    ctx->pc = 0x314a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944164)));
    // 0x314a9c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x314a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x314aa0: 0x8f86a5a8  lw          $a2, -0x5A58($gp)
    ctx->pc = 0x314aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944168)));
    // 0x314aa4: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x314aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
    // 0x314aa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x314aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x314aac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x314aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ab0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x314ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x314ab4: 0xaf83a5a4  sw          $v1, -0x5A5C($gp)
    ctx->pc = 0x314ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944164), GPR_U32(ctx, 3));
    // 0x314ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x314AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AB8u;
        // 0x314abc: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314AC0u;
}
