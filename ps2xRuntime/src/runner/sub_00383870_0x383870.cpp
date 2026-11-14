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

// Function: sub_00383870
// Address: 0x383870 - 0x383888
void sub_00383870_0x383870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383870_0x383870");
#endif

    ctx->pc = 0x383870u;

    // 0x383870: 0x8f83bcfc  lw          $v1, -0x4304($gp)
    ctx->pc = 0x383870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950140)));
    // 0x383874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x383874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383878: 0xaf83bcfc  sw          $v1, -0x4304($gp)
    ctx->pc = 0x383878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950140), GPR_U32(ctx, 3));
    // 0x38387c: 0x3e00008  jr          $ra
    ctx->pc = 0x38387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38387Cu;
        // 0x383880: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38387Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383884u;
    // 0x383884: 0x0  nop
    ctx->pc = 0x383884u;
    // NOP
    ctx->pc = 0x383888u;
}
