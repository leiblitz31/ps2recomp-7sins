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

// Function: sub_00311CE8
// Address: 0x311ce8 - 0x311d08
void sub_00311CE8_0x311ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311CE8_0x311ce8");
#endif

    ctx->pc = 0x311ce8u;

    // 0x311ce8: 0x8f83a574  lw          $v1, -0x5A8C($gp)
    ctx->pc = 0x311ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
    // 0x311cec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x311cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311cf0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x311cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311cf4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x311cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x311cf8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x311cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x311cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x311CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CFCu;
        // 0x311d00: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311D04u;
    // 0x311d04: 0x0  nop
    ctx->pc = 0x311d04u;
    // NOP
    ctx->pc = 0x311d08u;
}
