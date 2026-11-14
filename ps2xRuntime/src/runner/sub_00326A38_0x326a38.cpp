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

// Function: sub_00326A38
// Address: 0x326a38 - 0x326a50
void sub_00326A38_0x326a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326A38_0x326a38");
#endif

    ctx->pc = 0x326a38u;

    // 0x326a38: 0x8f83a63c  lw          $v1, -0x59C4($gp)
    ctx->pc = 0x326a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944316)));
    // 0x326a3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x326a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x326a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x326a44: 0x3e00008  jr          $ra
    ctx->pc = 0x326A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A44u;
        // 0x326a48: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326A4Cu;
    // 0x326a4c: 0x0  nop
    ctx->pc = 0x326a4cu;
    // NOP
    ctx->pc = 0x326a50u;
}
