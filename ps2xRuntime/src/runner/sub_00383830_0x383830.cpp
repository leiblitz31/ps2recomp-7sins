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

// Function: sub_00383830
// Address: 0x383830 - 0x383870
void sub_00383830_0x383830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383830_0x383830");
#endif

    ctx->pc = 0x383830u;

    // 0x383830: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x383830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x383834: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x383834u;
    {
        const bool branch_taken_0x383834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x383838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383834u;
        // 0x383838: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383834) {
            ctx->pc = 0x383860u;
            goto label_383860;
        }
    }
    ctx->pc = 0x38383Cu;
    // 0x38383c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38383Cu;
    {
        const bool branch_taken_0x38383c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38383Cu;
        // 0x383840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38383c) {
            ctx->pc = 0x383854u;
            goto label_383854;
        }
    }
    ctx->pc = 0x383844u;
    // 0x383844: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x383844u;
    {
        const bool branch_taken_0x383844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x383848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383844u;
        // 0x383848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383844) {
            ctx->pc = 0x383860u;
            goto label_383860;
        }
    }
    ctx->pc = 0x38384Cu;
    // 0x38384c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38384Cu;
    {
        const bool branch_taken_0x38384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38384c) {
            ctx->pc = 0x383868u;
            goto label_383868;
        }
    }
    ctx->pc = 0x383854u;
label_383854:
    // 0x383854: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x383854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x383858: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383858u;
    {
        const bool branch_taken_0x383858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x38385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383858u;
        // 0x38385c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383858) {
            ctx->pc = 0x383868u;
            goto label_383868;
        }
    }
    ctx->pc = 0x383860u;
label_383860:
    // 0x383860: 0x3e00008  jr          $ra
    ctx->pc = 0x383860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383860u;
        // 0x383864: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383868u;
label_383868:
    // 0x383868: 0x3e00008  jr          $ra
    ctx->pc = 0x383868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383870u;
}
