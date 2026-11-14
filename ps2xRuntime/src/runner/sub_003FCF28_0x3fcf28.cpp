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

// Function: sub_003FCF28
// Address: 0x3fcf28 - 0x3fcf58
void sub_003FCF28_0x3fcf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCF28_0x3fcf28");
#endif

    ctx->pc = 0x3fcf28u;

    // 0x3fcf28: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3fcf28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3fcf2c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3fcf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3fcf30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fcf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fcf34: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF34u;
        // 0x3fcf38: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCF3Cu;
    // 0x3fcf3c: 0x0  nop
    ctx->pc = 0x3fcf3cu;
    // NOP
    // 0x3fcf40: 0xa08700f5  sb          $a3, 0xF5($a0)
    ctx->pc = 0x3fcf40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 245), (uint8_t)GPR_U32(ctx, 7));
    // 0x3fcf44: 0xac8500f0  sw          $a1, 0xF0($a0)
    ctx->pc = 0x3fcf44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 5));
    // 0x3fcf48: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF48u;
        // 0x3fcf4c: 0xa08600f4  sb          $a2, 0xF4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 244), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCF50u;
    // 0x3fcf50: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF50u;
        // 0x3fcf54: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCF58u;
}
