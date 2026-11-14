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

// Function: sub_004A9338
// Address: 0x4a9338 - 0x4a9350
void sub_004A9338_0x4a9338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9338_0x4a9338");
#endif

    ctx->pc = 0x4a9338u;

    // 0x4a9338: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a9338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a933c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4a933cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4a9340: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4a9340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4a9344: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9344u;
        // 0x4a9348: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A934Cu;
    // 0x4a934c: 0x0  nop
    ctx->pc = 0x4a934cu;
    // NOP
    ctx->pc = 0x4a9350u;
}
