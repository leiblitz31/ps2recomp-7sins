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

// Function: sub_003873E8
// Address: 0x3873e8 - 0x387400
void sub_003873E8_0x3873e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003873E8_0x3873e8");
#endif

    ctx->pc = 0x3873e8u;

    // 0x3873e8: 0x8f83bd0c  lw          $v1, -0x42F4($gp)
    ctx->pc = 0x3873e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950156)));
    // 0x3873ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3873ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3873f0: 0xaf83bd0c  sw          $v1, -0x42F4($gp)
    ctx->pc = 0x3873f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950156), GPR_U32(ctx, 3));
    // 0x3873f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3873F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3873F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873F4u;
        // 0x3873f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3873F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3873FCu;
    // 0x3873fc: 0x0  nop
    ctx->pc = 0x3873fcu;
    // NOP
    ctx->pc = 0x387400u;
}
