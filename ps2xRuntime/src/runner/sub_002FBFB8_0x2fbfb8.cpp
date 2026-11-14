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

// Function: sub_002FBFB8
// Address: 0x2fbfb8 - 0x2fbfc8
void sub_002FBFB8_0x2fbfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBFB8_0x2fbfb8");
#endif

    ctx->pc = 0x2fbfb8u;

    // 0x2fbfb8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2fbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2fbfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFBCu;
        // 0x2fbfc0: 0x24420b20  addiu       $v0, $v0, 0xB20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBFC4u;
    // 0x2fbfc4: 0x0  nop
    ctx->pc = 0x2fbfc4u;
    // NOP
    ctx->pc = 0x2fbfc8u;
}
