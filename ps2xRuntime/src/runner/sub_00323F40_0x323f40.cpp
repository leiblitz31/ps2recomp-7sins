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

// Function: sub_00323F40
// Address: 0x323f40 - 0x323f60
void sub_00323F40_0x323f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323F40_0x323f40");
#endif

    ctx->pc = 0x323f40u;

    // 0x323f40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x323f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x323f44: 0x8c43b1f0  lw          $v1, -0x4E10($v0)
    ctx->pc = 0x323f44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1F0u));
    // 0x323f48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x323f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f4c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x323f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x323f50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x323f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x323f54: 0x3e00008  jr          $ra
    ctx->pc = 0x323F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F54u;
        // 0x323f58: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323F5Cu;
    // 0x323f5c: 0x0  nop
    ctx->pc = 0x323f5cu;
    // NOP
    ctx->pc = 0x323f60u;
}
