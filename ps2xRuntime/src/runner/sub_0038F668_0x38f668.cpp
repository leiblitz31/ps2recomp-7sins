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

// Function: sub_0038F668
// Address: 0x38f668 - 0x38f680
void sub_0038F668_0x38f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F668_0x38f668");
#endif

    ctx->pc = 0x38f668u;

    // 0x38f668: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38f668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f66c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x38f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x38f670: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38f670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x38f674: 0x3e00008  jr          $ra
    ctx->pc = 0x38F674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F674u;
        // 0x38f678: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F67Cu;
    // 0x38f67c: 0x0  nop
    ctx->pc = 0x38f67cu;
    // NOP
    ctx->pc = 0x38f680u;
}
