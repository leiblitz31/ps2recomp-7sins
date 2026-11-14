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

// Function: sub_0049C8F8
// Address: 0x49c8f8 - 0x49c928
void sub_0049C8F8_0x49c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C8F8_0x49c8f8");
#endif

    ctx->pc = 0x49c8f8u;

    // 0x49c8f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49c8fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49c900: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49C900u;
    {
        const bool branch_taken_0x49c900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x49c900) {
            ctx->pc = 0x49C920u;
            goto label_49c920;
        }
    }
    ctx->pc = 0x49C908u;
    // 0x49c908: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x49c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x49c90c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x49c90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x49c910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49C910u;
    {
        const bool branch_taken_0x49c910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C910u;
        // 0x49c914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c910) {
            ctx->pc = 0x49C920u;
            goto label_49c920;
        }
    }
    ctx->pc = 0x49C918u;
    // 0x49c918: 0x3e00008  jr          $ra
    ctx->pc = 0x49C918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C918u;
        // 0x49c91c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C920u;
label_49c920:
    // 0x49c920: 0x3e00008  jr          $ra
    ctx->pc = 0x49C920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C920u;
        // 0x49c924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C928u;
}
