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

// Function: sub_0038CB78
// Address: 0x38cb78 - 0x38cb90
void sub_0038CB78_0x38cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CB78_0x38cb78");
#endif

    ctx->pc = 0x38cb78u;

    // 0x38cb78: 0x8f83bd34  lw          $v1, -0x42CC($gp)
    ctx->pc = 0x38cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950196)));
    // 0x38cb7c: 0xaf85bd30  sw          $a1, -0x42D0($gp)
    ctx->pc = 0x38cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950192), GPR_U32(ctx, 5));
    // 0x38cb80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38cb84: 0xaf83bd34  sw          $v1, -0x42CC($gp)
    ctx->pc = 0x38cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950196), GPR_U32(ctx, 3));
    // 0x38cb88: 0x3e00008  jr          $ra
    ctx->pc = 0x38CB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB88u;
        // 0x38cb8c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CB90u;
}
