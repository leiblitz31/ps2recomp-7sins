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

// Function: sub_00410A00
// Address: 0x410a00 - 0x410a10
void sub_00410A00_0x410a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410A00_0x410a00");
#endif

    ctx->pc = 0x410a00u;

    // 0x410a00: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x410a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x410a04: 0x3e00008  jr          $ra
    ctx->pc = 0x410A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A04u;
        // 0x410a08: 0x2442e988  addiu       $v0, $v0, -0x1678 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410A0Cu;
    // 0x410a0c: 0x0  nop
    ctx->pc = 0x410a0cu;
    // NOP
    ctx->pc = 0x410a10u;
}
