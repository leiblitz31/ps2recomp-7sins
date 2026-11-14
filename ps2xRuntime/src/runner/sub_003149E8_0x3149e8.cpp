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

// Function: sub_003149E8
// Address: 0x3149e8 - 0x314a00
void sub_003149E8_0x3149e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003149E8_0x3149e8");
#endif

    ctx->pc = 0x3149e8u;

    // 0x3149e8: 0x8f82a5b4  lw          $v0, -0x5A4C($gp)
    ctx->pc = 0x3149e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944180)));
    // 0x3149ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3149ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3149f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3149f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3149f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3149F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3149F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149F4u;
        // 0x3149f8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3149F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3149FCu;
    // 0x3149fc: 0x0  nop
    ctx->pc = 0x3149fcu;
    // NOP
    ctx->pc = 0x314a00u;
}
