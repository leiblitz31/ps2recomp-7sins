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

// Function: sub_00435360
// Address: 0x435360 - 0x435378
void sub_00435360_0x435360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435360_0x435360");
#endif

    ctx->pc = 0x435360u;

    // 0x435360: 0xaf84aee0  sw          $a0, -0x5120($gp)
    ctx->pc = 0x435360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946528), GPR_U32(ctx, 4));
    // 0x435364: 0x3e00008  jr          $ra
    ctx->pc = 0x435364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435364u;
        // 0x435368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43536Cu;
    // 0x43536c: 0x0  nop
    ctx->pc = 0x43536cu;
    // NOP
    // 0x435370: 0x3e00008  jr          $ra
    ctx->pc = 0x435370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435370u;
        // 0x435374: 0x8f82aee0  lw          $v0, -0x5120($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435378u;
}
