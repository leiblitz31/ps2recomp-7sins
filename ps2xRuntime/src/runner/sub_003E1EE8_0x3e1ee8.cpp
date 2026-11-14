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

// Function: sub_003E1EE8
// Address: 0x3e1ee8 - 0x3e1f10
void sub_003E1EE8_0x3e1ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1EE8_0x3e1ee8");
#endif

    ctx->pc = 0x3e1ee8u;

    // 0x3e1ee8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E1EE8u;
    {
        const bool branch_taken_0x3e1ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1ee8) {
            ctx->pc = 0x3E1F04u;
            goto label_3e1f04;
        }
    }
    ctx->pc = 0x3E1EF0u;
    // 0x3e1ef0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1EF0u;
    {
        const bool branch_taken_0x3e1ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1ef0) {
            ctx->pc = 0x3E1F04u;
            goto label_3e1f04;
        }
    }
    ctx->pc = 0x3E1EF8u;
    // 0x3e1ef8: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e1ef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e1efc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1EFCu;
        // 0x3e1f00: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F04u;
label_3e1f04:
    // 0x3e1f04: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F04u;
        // 0x3e1f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F0Cu;
    // 0x3e1f0c: 0x0  nop
    ctx->pc = 0x3e1f0cu;
    // NOP
    ctx->pc = 0x3e1f10u;
}
