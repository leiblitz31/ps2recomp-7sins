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

// Function: sub_002FDFE0
// Address: 0x2fdfe0 - 0x2fdff0
void sub_002FDFE0_0x2fdfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDFE0_0x2fdfe0");
#endif

    ctx->pc = 0x2fdfe0u;

    // 0x2fdfe0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2fdfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2fdfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDFE4u;
        // 0x2fdfe8: 0xac400b70  sw          $zero, 0xB70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDFECu;
    // 0x2fdfec: 0x0  nop
    ctx->pc = 0x2fdfecu;
    // NOP
    ctx->pc = 0x2fdff0u;
}
