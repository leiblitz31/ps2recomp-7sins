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

// Function: sub_00443D30
// Address: 0x443d30 - 0x443d50
void sub_00443D30_0x443d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443D30_0x443d30");
#endif

    ctx->pc = 0x443d30u;

    // 0x443d30: 0x8f87beb8  lw          $a3, -0x4148($gp)
    ctx->pc = 0x443d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443d34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x443d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443d38: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x443d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x443d3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x443d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x443d40: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x443d40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x443d44: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x443d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x443d48: 0x3e00008  jr          $ra
    ctx->pc = 0x443D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D48u;
        // 0x443d4c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443D50u;
}
