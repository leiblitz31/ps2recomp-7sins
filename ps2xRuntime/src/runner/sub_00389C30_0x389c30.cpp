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

// Function: sub_00389C30
// Address: 0x389c30 - 0x389ca0
void sub_00389C30_0x389c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389C30_0x389c30");
#endif

    ctx->pc = 0x389c30u;

    // 0x389c30: 0x8f83a98c  lw          $v1, -0x5674($gp)
    ctx->pc = 0x389c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
    // 0x389c34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c38: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x389c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x389c3c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x389c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x389c40: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x389c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x389c44: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x389c44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x389c48: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x389c48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x389c4c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x389c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x389c50: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x389c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x389c54: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x389c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x389c58: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x389c58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x389c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x389C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C5Cu;
        // 0x389c60: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389C64u;
    // 0x389c64: 0x0  nop
    ctx->pc = 0x389c64u;
    // NOP
    // 0x389c68: 0x8f82a98c  lw          $v0, -0x5674($gp)
    ctx->pc = 0x389c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
    // 0x389c6c: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x389c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x389c70: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x389c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x389c74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x389c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x389c78: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x389c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x389c7c: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x389c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x389c80: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x389c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x389c84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c88: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x389c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x389c8c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x389c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x389c90: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x389c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x389c94: 0x3e00008  jr          $ra
    ctx->pc = 0x389C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C94u;
        // 0x389c98: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389C9Cu;
    // 0x389c9c: 0x0  nop
    ctx->pc = 0x389c9cu;
    // NOP
    ctx->pc = 0x389ca0u;
}
