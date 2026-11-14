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

// Function: sub_00377F40
// Address: 0x377f40 - 0x377f70
void sub_00377F40_0x377f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377F40_0x377f40");
#endif

    switch (ctx->pc) {
        case 0x377f48u: goto label_377f48;
        default: break;
    }

    ctx->pc = 0x377f40u;

    // 0x377f40: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x377F40u;
    {
        const bool branch_taken_0x377f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x377F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F40u;
        // 0x377f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f40) {
            ctx->pc = 0x377F64u;
            goto label_377f64;
        }
    }
    ctx->pc = 0x377F48u;
label_377f48:
    // 0x377f48: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x377f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x377f4c: 0x0  nop
    ctx->pc = 0x377f4cu;
    // NOP
    // 0x377f50: 0x0  nop
    ctx->pc = 0x377f50u;
    // NOP
    // 0x377f54: 0x0  nop
    ctx->pc = 0x377f54u;
    // NOP
    // 0x377f58: 0x0  nop
    ctx->pc = 0x377f58u;
    // NOP
    // 0x377f5c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x377F5Cu;
    {
        const bool branch_taken_0x377f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x377F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F5Cu;
        // 0x377f60: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f5c) {
            ctx->pc = 0x377F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377f48;
        }
    }
    ctx->pc = 0x377F64u;
label_377f64:
    // 0x377f64: 0x3e00008  jr          $ra
    ctx->pc = 0x377F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377F6Cu;
    // 0x377f6c: 0x0  nop
    ctx->pc = 0x377f6cu;
    // NOP
    ctx->pc = 0x377f70u;
}
