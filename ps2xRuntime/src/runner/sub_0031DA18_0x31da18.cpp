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

// Function: sub_0031DA18
// Address: 0x31da18 - 0x31da30
void sub_0031DA18_0x31da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DA18_0x31da18");
#endif

    ctx->pc = 0x31da18u;

    // 0x31da18: 0x8f83a5c0  lw          $v1, -0x5A40($gp)
    ctx->pc = 0x31da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
    // 0x31da1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31da1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31da20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31da24: 0x3e00008  jr          $ra
    ctx->pc = 0x31DA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA24u;
        // 0x31da28: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DA2Cu;
    // 0x31da2c: 0x0  nop
    ctx->pc = 0x31da2cu;
    // NOP
    ctx->pc = 0x31da30u;
}
