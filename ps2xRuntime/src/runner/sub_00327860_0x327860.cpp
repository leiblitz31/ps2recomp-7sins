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

// Function: sub_00327860
// Address: 0x327860 - 0x327878
void sub_00327860_0x327860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327860_0x327860");
#endif

    ctx->pc = 0x327860u;

    // 0x327860: 0x8f83bcec  lw          $v1, -0x4314($gp)
    ctx->pc = 0x327860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950124)));
    // 0x327864: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327868: 0xaf83bcec  sw          $v1, -0x4314($gp)
    ctx->pc = 0x327868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950124), GPR_U32(ctx, 3));
    // 0x32786c: 0x3e00008  jr          $ra
    ctx->pc = 0x32786Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32786Cu;
        // 0x327870: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32786Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327874u;
    // 0x327874: 0x0  nop
    ctx->pc = 0x327874u;
    // NOP
    ctx->pc = 0x327878u;
}
