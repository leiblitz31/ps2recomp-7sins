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

// Function: sub_00307C20
// Address: 0x307c20 - 0x307c70
void sub_00307C20_0x307c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307C20_0x307c20");
#endif

    switch (ctx->pc) {
        case 0x307c38u: goto label_307c38;
        default: break;
    }

    ctx->pc = 0x307c20u;

    // 0x307c20: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x307c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x307c24: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x307c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x307c28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x307c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x307c2c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x307C2Cu;
    {
        const bool branch_taken_0x307c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C2Cu;
        // 0x307c30: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c2c) {
            ctx->pc = 0x307C64u;
            goto label_307c64;
        }
    }
    ctx->pc = 0x307C34u;
    // 0x307c34: 0x0  nop
    ctx->pc = 0x307c34u;
    // NOP
label_307c38:
    // 0x307c38: 0x42000039  di
    ctx->pc = 0x307c38u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x307c3c: 0x40f  sync.p
    ctx->pc = 0x307c3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x307c40: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x307c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x307c44: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x307c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x307c48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x307c4c: 0x0  nop
    ctx->pc = 0x307c4cu;
    // NOP
    // 0x307c50: 0x0  nop
    ctx->pc = 0x307c50u;
    // NOP
    // 0x307c54: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x307C54u;
    {
        const bool branch_taken_0x307c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307c54) {
            ctx->pc = 0x307C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307c38;
        }
    }
    ctx->pc = 0x307C5Cu;
    // 0x307c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x307C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C5Cu;
        // 0x307c60: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307C64u;
label_307c64:
    // 0x307c64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c68: 0x3e00008  jr          $ra
    ctx->pc = 0x307C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C68u;
        // 0x307c6c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307C70u;
}
