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

// Function: sub_00415C70
// Address: 0x415c70 - 0x415cb0
void sub_00415C70_0x415c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415C70_0x415c70");
#endif

    switch (ctx->pc) {
        case 0x415c80u: goto label_415c80;
        default: break;
    }

    ctx->pc = 0x415c70u;

    // 0x415c70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x415c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x415c74: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x415C74u;
    {
        const bool branch_taken_0x415c74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x415C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C74u;
        // 0x415c78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415c74) {
            ctx->pc = 0x415CA8u;
            goto label_415ca8;
        }
    }
    ctx->pc = 0x415C7Cu;
    // 0x415c7c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x415c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_415c80:
    // 0x415c80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x415c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x415c84: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x415C84u;
    {
        const bool branch_taken_0x415c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x415c84) {
            ctx->pc = 0x415C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415C84u;
            // 0x415c88: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415C98u;
            goto label_415c98;
        }
    }
    ctx->pc = 0x415C8Cu;
    // 0x415c8c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x415c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x415c90: 0x3e00008  jr          $ra
    ctx->pc = 0x415C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C90u;
        // 0x415c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415C98u;
label_415c98:
    // 0x415c98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x415c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x415c9c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x415c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x415ca0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x415CA0u;
    {
        const bool branch_taken_0x415ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CA0u;
        // 0x415ca4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415ca0) {
            ctx->pc = 0x415C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415c80;
        }
    }
    ctx->pc = 0x415CA8u;
label_415ca8:
    // 0x415ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x415CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CA8u;
        // 0x415cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415CB0u;
}
