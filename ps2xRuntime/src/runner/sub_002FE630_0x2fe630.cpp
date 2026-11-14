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

// Function: sub_002FE630
// Address: 0x2fe630 - 0x2fe640
void sub_002FE630_0x2fe630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE630_0x2fe630");
#endif

    ctx->pc = 0x2fe630u;

    // 0x2fe630: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2fe630u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2fe634: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fe634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fe638: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE638u;
        // 0x2fe63c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE640u;
}
