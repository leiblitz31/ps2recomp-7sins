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

// Function: sub_003240A8
// Address: 0x3240a8 - 0x3240c8
void sub_003240A8_0x3240a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003240A8_0x3240a8");
#endif

    ctx->pc = 0x3240a8u;

    // 0x3240a8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3240a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x3240ac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3240acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3240b0: 0x8ca3b1f4  lw          $v1, -0x4E0C($a1)
    ctx->pc = 0x3240b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1F4u));
    // 0x3240b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3240b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3240b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3240b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3240bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3240BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3240C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240BCu;
        // 0x3240c0: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3240BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3240C4u;
    // 0x3240c4: 0x0  nop
    ctx->pc = 0x3240c4u;
    // NOP
    ctx->pc = 0x3240c8u;
}
