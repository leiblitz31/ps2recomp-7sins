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

// Function: sub_00398DE8
// Address: 0x398de8 - 0x398e00
void sub_00398DE8_0x398de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398DE8_0x398de8");
#endif

    ctx->pc = 0x398de8u;

    // 0x398de8: 0x8f83bd5c  lw          $v1, -0x42A4($gp)
    ctx->pc = 0x398de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950236)));
    // 0x398dec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x398decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x398df0: 0xaf83bd5c  sw          $v1, -0x42A4($gp)
    ctx->pc = 0x398df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950236), GPR_U32(ctx, 3));
    // 0x398df4: 0x3e00008  jr          $ra
    ctx->pc = 0x398DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DF4u;
        // 0x398df8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398DFCu;
    // 0x398dfc: 0x0  nop
    ctx->pc = 0x398dfcu;
    // NOP
    ctx->pc = 0x398e00u;
}
