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

// Function: sub_003C4E50
// Address: 0x3c4e50 - 0x3c4e78
void sub_003C4E50_0x3c4e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4E50_0x3c4e50");
#endif

    ctx->pc = 0x3c4e50u;

    // 0x3c4e50: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3c4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c4e54: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3c4e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c4e58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4E58u;
    {
        const bool branch_taken_0x3c4e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4e58) {
            ctx->pc = 0x3C4E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4E58u;
            // 0x3c4e5c: 0x8c830058  lw          $v1, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4E68u;
            goto label_3c4e68;
        }
    }
    ctx->pc = 0x3C4E60u;
    // 0x3c4e60: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E60u;
        // 0x3c4e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4E68u;
label_3c4e68:
    // 0x3c4e68: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x3c4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x3c4e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E6Cu;
        // 0x3c4e70: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4E74u;
    // 0x3c4e74: 0x0  nop
    ctx->pc = 0x3c4e74u;
    // NOP
    ctx->pc = 0x3c4e78u;
}
