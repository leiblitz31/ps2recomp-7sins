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

// Function: sub_00349FD8
// Address: 0x349fd8 - 0x349ff0
void sub_00349FD8_0x349fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349FD8_0x349fd8");
#endif

    ctx->pc = 0x349fd8u;

    // 0x349fd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x349fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x349fdc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x349fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349fe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x349fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x349fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x349FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FE4u;
        // 0x349fe8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349FECu;
    // 0x349fec: 0x0  nop
    ctx->pc = 0x349fecu;
    // NOP
    ctx->pc = 0x349ff0u;
}
