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

// Function: sub_00389C00
// Address: 0x389c00 - 0x389c30
void sub_00389C00_0x389c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389C00_0x389c00");
#endif

    ctx->pc = 0x389c00u;

    // 0x389c00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x389c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x389c04: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x389c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x389c08: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x389c08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x389c0c: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x389c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x389c10: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x389c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x389c14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c18: 0xaca4003c  sw          $a0, 0x3C($a1)
    ctx->pc = 0x389c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 4));
    // 0x389c1c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x389c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x389c20: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x389c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x389c24: 0x3e00008  jr          $ra
    ctx->pc = 0x389C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C24u;
        // 0x389c28: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389C2Cu;
    // 0x389c2c: 0x0  nop
    ctx->pc = 0x389c2cu;
    // NOP
    ctx->pc = 0x389c30u;
}
