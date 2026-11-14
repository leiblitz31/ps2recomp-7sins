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

// Function: sub_0049F038
// Address: 0x49f038 - 0x49f088
void sub_0049F038_0x49f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F038_0x49f038");
#endif

    switch (ctx->pc) {
        case 0x49f048u: goto label_49f048;
        default: break;
    }

    ctx->pc = 0x49f038u;

    // 0x49f038: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x49f038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f03c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x49f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x49f040: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x49f040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x49f044: 0x0  nop
    ctx->pc = 0x49f044u;
    // NOP
label_49f048:
    // 0x49f048: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F048u;
    {
        const bool branch_taken_0x49f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x49F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F048u;
        // 0x49f04c: 0x2443ffe0  addiu       $v1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f048) {
            ctx->pc = 0x49F058u;
            goto label_49f058;
        }
    }
    ctx->pc = 0x49F050u;
    // 0x49f050: 0x5466fffd  bnel        $v1, $a2, . + 4 + (-0x3 << 2)
    ctx->pc = 0x49F050u;
    {
        const bool branch_taken_0x49f050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x49f050) {
            ctx->pc = 0x49F054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F050u;
            // 0x49f054: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f048;
        }
    }
    ctx->pc = 0x49F058u;
label_49f058:
    // 0x49f058: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49f05c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x49f05cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f060: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49f064: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49f064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49f068: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x49f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x49f06c: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x49f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x49f070: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49f070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49f074: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x49f074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x49f078: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x49f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x49f07c: 0x3e00008  jr          $ra
    ctx->pc = 0x49F07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F07Cu;
        // 0x49f080: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F084u;
    // 0x49f084: 0x0  nop
    ctx->pc = 0x49f084u;
    // NOP
    ctx->pc = 0x49f088u;
}
