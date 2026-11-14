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

// Function: sub_0038CB60
// Address: 0x38cb60 - 0x38cb78
void sub_0038CB60_0x38cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CB60_0x38cb60");
#endif

    ctx->pc = 0x38cb60u;

    // 0x38cb60: 0x8f83bd34  lw          $v1, -0x42CC($gp)
    ctx->pc = 0x38cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950196)));
    // 0x38cb64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38cb68: 0xaf83bd34  sw          $v1, -0x42CC($gp)
    ctx->pc = 0x38cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950196), GPR_U32(ctx, 3));
    // 0x38cb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x38CB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB6Cu;
        // 0x38cb70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CB74u;
    // 0x38cb74: 0x0  nop
    ctx->pc = 0x38cb74u;
    // NOP
    ctx->pc = 0x38cb78u;
}
