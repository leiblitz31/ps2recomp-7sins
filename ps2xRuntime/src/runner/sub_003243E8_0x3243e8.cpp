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

// Function: sub_003243E8
// Address: 0x3243e8 - 0x324408
void sub_003243E8_0x3243e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003243E8_0x3243e8");
#endif

    ctx->pc = 0x3243e8u;

    // 0x3243e8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3243e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x3243ec: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3243ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3243f0: 0x8ca3b1ec  lw          $v1, -0x4E14($a1)
    ctx->pc = 0x3243f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x3243f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3243f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3243f8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3243f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3243fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3243FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243FCu;
        // 0x324400: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324404u;
    // 0x324404: 0x0  nop
    ctx->pc = 0x324404u;
    // NOP
    ctx->pc = 0x324408u;
}
