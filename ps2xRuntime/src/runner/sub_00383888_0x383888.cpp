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

// Function: sub_00383888
// Address: 0x383888 - 0x3838a0
void sub_00383888_0x383888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383888_0x383888");
#endif

    ctx->pc = 0x383888u;

    // 0x383888: 0x8f83bcfc  lw          $v1, -0x4304($gp)
    ctx->pc = 0x383888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950140)));
    // 0x38388c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x383890: 0xaf83bcfc  sw          $v1, -0x4304($gp)
    ctx->pc = 0x383890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950140), GPR_U32(ctx, 3));
    // 0x383894: 0x3e00008  jr          $ra
    ctx->pc = 0x383894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383894u;
        // 0x383898: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38389Cu;
    // 0x38389c: 0x0  nop
    ctx->pc = 0x38389cu;
    // NOP
    ctx->pc = 0x3838a0u;
}
