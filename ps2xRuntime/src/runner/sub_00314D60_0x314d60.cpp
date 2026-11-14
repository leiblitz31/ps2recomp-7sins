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

// Function: sub_00314D60
// Address: 0x314d60 - 0x314d78
void sub_00314D60_0x314d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314D60_0x314d60");
#endif

    ctx->pc = 0x314d60u;

    // 0x314d60: 0x8f83a5ac  lw          $v1, -0x5A54($gp)
    ctx->pc = 0x314d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944172)));
    // 0x314d64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x314d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d68: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x314d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x314d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x314D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D6Cu;
        // 0x314d70: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314D74u;
    // 0x314d74: 0x0  nop
    ctx->pc = 0x314d74u;
    // NOP
    ctx->pc = 0x314d78u;
}
