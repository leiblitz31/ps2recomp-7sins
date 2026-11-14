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

// Function: sub_003A1570
// Address: 0x3a1570 - 0x3a1580
void sub_003A1570_0x3a1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1570_0x3a1570");
#endif

    ctx->pc = 0x3a1570u;

    // 0x3a1570: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3a1570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3a1574: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1574u;
        // 0x3a1578: 0x2442aee0  addiu       $v0, $v0, -0x5120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A157Cu;
    // 0x3a157c: 0x0  nop
    ctx->pc = 0x3a157cu;
    // NOP
    ctx->pc = 0x3a1580u;
}
