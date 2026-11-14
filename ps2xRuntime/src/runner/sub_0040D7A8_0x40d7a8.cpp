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

// Function: sub_0040D7A8
// Address: 0x40d7a8 - 0x40d7c0
void sub_0040D7A8_0x40d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D7A8_0x40d7a8");
#endif

    ctx->pc = 0x40d7a8u;

    // 0x40d7a8: 0x8f83bdb4  lw          $v1, -0x424C($gp)
    ctx->pc = 0x40d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950324)));
    // 0x40d7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40d7b0: 0xaf83bdb4  sw          $v1, -0x424C($gp)
    ctx->pc = 0x40d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950324), GPR_U32(ctx, 3));
    // 0x40d7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x40D7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D7B4u;
        // 0x40d7b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D7BCu;
    // 0x40d7bc: 0x0  nop
    ctx->pc = 0x40d7bcu;
    // NOP
    ctx->pc = 0x40d7c0u;
}
