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

// Function: sub_00327878
// Address: 0x327878 - 0x327890
void sub_00327878_0x327878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327878_0x327878");
#endif

    ctx->pc = 0x327878u;

    // 0x327878: 0x8f83bcec  lw          $v1, -0x4314($gp)
    ctx->pc = 0x327878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950124)));
    // 0x32787c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x327880: 0xaf83bcec  sw          $v1, -0x4314($gp)
    ctx->pc = 0x327880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950124), GPR_U32(ctx, 3));
    // 0x327884: 0x3e00008  jr          $ra
    ctx->pc = 0x327884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327884u;
        // 0x327888: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32788Cu;
    // 0x32788c: 0x0  nop
    ctx->pc = 0x32788cu;
    // NOP
    ctx->pc = 0x327890u;
}
