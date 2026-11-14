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

// Function: sub_0038A7B8
// Address: 0x38a7b8 - 0x38a7d8
void sub_0038A7B8_0x38a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A7B8_0x38a7b8");
#endif

    ctx->pc = 0x38a7b8u;

    // 0x38a7b8: 0x8f83a98c  lw          $v1, -0x5674($gp)
    ctx->pc = 0x38a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
    // 0x38a7bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38a7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38a7c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x38a7c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x38a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x38a7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x38A7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7CCu;
        // 0x38a7d0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A7D4u;
    // 0x38a7d4: 0x0  nop
    ctx->pc = 0x38a7d4u;
    // NOP
    ctx->pc = 0x38a7d8u;
}
