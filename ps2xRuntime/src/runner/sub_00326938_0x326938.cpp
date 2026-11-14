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

// Function: sub_00326938
// Address: 0x326938 - 0x326950
void sub_00326938_0x326938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326938_0x326938");
#endif

    ctx->pc = 0x326938u;

    // 0x326938: 0x8f83a638  lw          $v1, -0x59C8($gp)
    ctx->pc = 0x326938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944312)));
    // 0x32693c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32693cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326940: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x326940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x326944: 0x3e00008  jr          $ra
    ctx->pc = 0x326944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326944u;
        // 0x326948: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32694Cu;
    // 0x32694c: 0x0  nop
    ctx->pc = 0x32694cu;
    // NOP
    ctx->pc = 0x326950u;
}
