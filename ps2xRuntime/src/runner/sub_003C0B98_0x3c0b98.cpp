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

// Function: sub_003C0B98
// Address: 0x3c0b98 - 0x3c0bb0
void sub_003C0B98_0x3c0b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0B98_0x3c0b98");
#endif

    ctx->pc = 0x3c0b98u;

    // 0x3c0b98: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3c0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c0b9c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x3c0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3c0ba0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3c0ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c0ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BA4u;
        // 0x3c0ba8: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0BACu;
    // 0x3c0bac: 0x0  nop
    ctx->pc = 0x3c0bacu;
    // NOP
    ctx->pc = 0x3c0bb0u;
}
