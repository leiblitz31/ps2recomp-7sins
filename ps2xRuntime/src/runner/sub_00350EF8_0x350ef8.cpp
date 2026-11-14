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

// Function: sub_00350EF8
// Address: 0x350ef8 - 0x350f20
void sub_00350EF8_0x350ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350EF8_0x350ef8");
#endif

    ctx->pc = 0x350ef8u;

    // 0x350ef8: 0x8f85a858  lw          $a1, -0x57A8($gp)
    ctx->pc = 0x350ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x350efc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x350efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350f00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x350f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x350f04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x350f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x350f08: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x350f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x350f0c: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x350f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x350f10: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x350f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x350f14: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x350f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x350f18: 0x3e00008  jr          $ra
    ctx->pc = 0x350F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F18u;
        // 0x350f1c: 0xac640040  sw          $a0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350F20u;
}
