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

// Function: sub_00377F10
// Address: 0x377f10 - 0x377f40
void sub_00377F10_0x377f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377F10_0x377f10");
#endif

    switch (ctx->pc) {
        case 0x377f18u: goto label_377f18;
        default: break;
    }

    ctx->pc = 0x377f10u;

    // 0x377f10: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x377F10u;
    {
        const bool branch_taken_0x377f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x377F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F10u;
        // 0x377f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f10) {
            ctx->pc = 0x377F34u;
            goto label_377f34;
        }
    }
    ctx->pc = 0x377F18u;
label_377f18:
    // 0x377f18: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x377f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x377f1c: 0x0  nop
    ctx->pc = 0x377f1cu;
    // NOP
    // 0x377f20: 0x0  nop
    ctx->pc = 0x377f20u;
    // NOP
    // 0x377f24: 0x0  nop
    ctx->pc = 0x377f24u;
    // NOP
    // 0x377f28: 0x0  nop
    ctx->pc = 0x377f28u;
    // NOP
    // 0x377f2c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x377F2Cu;
    {
        const bool branch_taken_0x377f2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x377F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F2Cu;
        // 0x377f30: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f2c) {
            ctx->pc = 0x377F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377f18;
        }
    }
    ctx->pc = 0x377F34u;
label_377f34:
    // 0x377f34: 0x3e00008  jr          $ra
    ctx->pc = 0x377F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377F3Cu;
    // 0x377f3c: 0x0  nop
    ctx->pc = 0x377f3cu;
    // NOP
    ctx->pc = 0x377f40u;
}
