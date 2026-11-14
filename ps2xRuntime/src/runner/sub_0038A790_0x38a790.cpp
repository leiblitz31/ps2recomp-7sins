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

// Function: sub_0038A790
// Address: 0x38a790 - 0x38a7b0
void sub_0038A790_0x38a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A790_0x38a790");
#endif

    ctx->pc = 0x38a790u;

    // 0x38a790: 0x8f83a988  lw          $v1, -0x5678($gp)
    ctx->pc = 0x38a790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
    // 0x38a794: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38a794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a798: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38a79c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x38a7a0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x38a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x38a7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x38A7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7A4u;
        // 0x38a7a8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A7ACu;
    // 0x38a7ac: 0x0  nop
    ctx->pc = 0x38a7acu;
    // NOP
    ctx->pc = 0x38a7b0u;
}
