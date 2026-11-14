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

// Function: sub_00434F58
// Address: 0x434f58 - 0x434f68
void sub_00434F58_0x434f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434F58_0x434f58");
#endif

    ctx->pc = 0x434f58u;

    // 0x434f58: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x434f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x434f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x434F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F5Cu;
        // 0x434f60: 0x2442d4a0  addiu       $v0, $v0, -0x2B60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x434F64u;
    // 0x434f64: 0x0  nop
    ctx->pc = 0x434f64u;
    // NOP
    ctx->pc = 0x434f68u;
}
