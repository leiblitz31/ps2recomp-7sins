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

// Function: sub_00312260
// Address: 0x312260 - 0x312278
void sub_00312260_0x312260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312260_0x312260");
#endif

    ctx->pc = 0x312260u;

    // 0x312260: 0x8f83bcdc  lw          $v1, -0x4324($gp)
    ctx->pc = 0x312260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950108)));
    // 0x312264: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x312264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x312268: 0xaf83bcdc  sw          $v1, -0x4324($gp)
    ctx->pc = 0x312268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950108), GPR_U32(ctx, 3));
    // 0x31226c: 0x3e00008  jr          $ra
    ctx->pc = 0x31226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31226Cu;
        // 0x312270: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312274u;
    // 0x312274: 0x0  nop
    ctx->pc = 0x312274u;
    // NOP
    ctx->pc = 0x312278u;
}
