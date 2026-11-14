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

// Function: sub_00314AC0
// Address: 0x314ac0 - 0x314ad8
void sub_00314AC0_0x314ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314AC0_0x314ac0");
#endif

    ctx->pc = 0x314ac0u;

    // 0x314ac0: 0x8f83a5a4  lw          $v1, -0x5A5C($gp)
    ctx->pc = 0x314ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944164)));
    // 0x314ac4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x314ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ac8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x314ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x314acc: 0x3e00008  jr          $ra
    ctx->pc = 0x314ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314ACCu;
        // 0x314ad0: 0xaf83a5a4  sw          $v1, -0x5A5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314AD4u;
    // 0x314ad4: 0x0  nop
    ctx->pc = 0x314ad4u;
    // NOP
    ctx->pc = 0x314ad8u;
}
