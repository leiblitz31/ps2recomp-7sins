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

// Function: sub_00379B60
// Address: 0x379b60 - 0x379b78
void sub_00379B60_0x379b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379B60_0x379b60");
#endif

    ctx->pc = 0x379b60u;

    // 0x379b60: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x379b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x379b64: 0x8c43ac50  lw          $v1, -0x53B0($v0)
    ctx->pc = 0x379b64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DAC50u));
    // 0x379b68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x379b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b6c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x379b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x379b70: 0x3e00008  jr          $ra
    ctx->pc = 0x379B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B70u;
        // 0x379b74: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379B78u;
}
