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

// Function: sub_003A1580
// Address: 0x3a1580 - 0x3a15d8
void sub_003A1580_0x3a1580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1580_0x3a1580");
#endif

    switch (ctx->pc) {
        case 0x3a1594u: goto label_3a1594;
        default: break;
    }

    ctx->pc = 0x3a1580u;

    // 0x3a1580: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1580u;
    {
        const bool branch_taken_0x3a1580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1580) {
            ctx->pc = 0x3A1594u;
            goto label_3a1594;
        }
    }
    ctx->pc = 0x3A1588u;
    // 0x3a1588: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3a1588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3a158c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A158Cu;
    {
        const bool branch_taken_0x3a158c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A158Cu;
        // 0x3a1590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a158c) {
            ctx->pc = 0x3A159Cu;
            goto label_3a159c;
        }
    }
    ctx->pc = 0x3A1594u;
label_3a1594:
    // 0x3a1594: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1594u;
        // 0x3a1598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A159Cu;
label_3a159c:
    // 0x3a159c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A159Cu;
    {
        const bool branch_taken_0x3a159c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A159Cu;
        // 0x3a15a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a159c) {
            ctx->pc = 0x3A15B4u;
            goto label_3a15b4;
        }
    }
    ctx->pc = 0x3A15A4u;
    // 0x3a15a4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A15A4u;
    {
        const bool branch_taken_0x3a15a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15A4u;
        // 0x3a15a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a15a4) {
            ctx->pc = 0x3A15C4u;
            goto label_3a15c4;
        }
    }
    ctx->pc = 0x3A15ACu;
    // 0x3a15ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A15ACu;
    {
        const bool branch_taken_0x3a15ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a15ac) {
            ctx->pc = 0x3A15D0u;
            goto label_3a15d0;
        }
    }
    ctx->pc = 0x3A15B4u;
label_3a15b4:
    // 0x3a15b4: 0x10c0fff7  beqz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A15B4u;
    {
        const bool branch_taken_0x3a15b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15B4u;
        // 0x3a15b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a15b4) {
            ctx->pc = 0x3A1594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1594;
        }
    }
    ctx->pc = 0x3A15BCu;
    // 0x3a15bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A15BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A15C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15BCu;
        // 0x3a15c0: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A15BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A15C4u;
label_3a15c4:
    // 0x3a15c4: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x3a15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x3a15c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A15C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15C8u;
        // 0x3a15cc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A15C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A15D0u;
label_3a15d0:
    // 0x3a15d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A15D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A15D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A15D8u;
}
