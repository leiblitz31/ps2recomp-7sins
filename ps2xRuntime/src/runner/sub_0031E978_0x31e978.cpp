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

// Function: sub_0031E978
// Address: 0x31e978 - 0x31e998
void sub_0031E978_0x31e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E978_0x31e978");
#endif

    ctx->pc = 0x31e978u;

    // 0x31e978: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x31e978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e97c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31e97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e980: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31e980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31e984: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x31e984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x31e988: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31e988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31e98c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E98Cu;
        // 0x31e990: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E994u;
    // 0x31e994: 0x0  nop
    ctx->pc = 0x31e994u;
    // NOP
    ctx->pc = 0x31e998u;
}
