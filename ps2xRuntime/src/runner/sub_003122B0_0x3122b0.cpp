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

// Function: sub_003122B0
// Address: 0x3122b0 - 0x3122d0
void sub_003122B0_0x3122b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003122B0_0x3122b0");
#endif

    ctx->pc = 0x3122b0u;

    // 0x3122b0: 0x8f86a584  lw          $a2, -0x5A7C($gp)
    ctx->pc = 0x3122b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944132)));
    // 0x3122b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3122b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3122b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3122b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3122bc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3122bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3122c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3122c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3122c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3122C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3122C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122C4u;
        // 0x3122c8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3122C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3122CCu;
    // 0x3122cc: 0x0  nop
    ctx->pc = 0x3122ccu;
    // NOP
    ctx->pc = 0x3122d0u;
}
