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

// Function: sub_0049F1C0
// Address: 0x49f1c0 - 0x49f210
void sub_0049F1C0_0x49f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F1C0_0x49f1c0");
#endif

    switch (ctx->pc) {
        case 0x49f1d8u: goto label_49f1d8;
        case 0x49f1f0u: goto label_49f1f0;
        default: break;
    }

    ctx->pc = 0x49f1c0u;

    // 0x49f1c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49f1c4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x49f1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x49f1c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F1C8u;
    {
        const bool branch_taken_0x49f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f1c8) {
            ctx->pc = 0x49F1D8u;
            goto label_49f1d8;
        }
    }
    ctx->pc = 0x49F1D0u;
    // 0x49f1d0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F1D0u;
    {
        const bool branch_taken_0x49f1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f1d0) {
            ctx->pc = 0x49F1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F1D0u;
            // 0x49f1d4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F1E0u;
            goto label_49f1e0;
        }
    }
    ctx->pc = 0x49F1D8u;
label_49f1d8:
    // 0x49f1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x49F1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F1D8u;
        // 0x49f1dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F1E0u;
label_49f1e0:
    // 0x49f1e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49f1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f1e4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x49f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x49f1e8: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x49F1E8u;
    {
        const bool branch_taken_0x49f1e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x49F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F1E8u;
        // 0x49f1ec: 0x2467ffe0  addiu       $a3, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f1e8) {
            ctx->pc = 0x49F208u;
            goto label_49f208;
        }
    }
    ctx->pc = 0x49F1F0u;
label_49f1f0:
    // 0x49f1f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x49f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49f1f4: 0x1064fff8  beq         $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x49F1F4u;
    {
        const bool branch_taken_0x49f1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x49F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F1F4u;
        // 0x49f1f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f1f4) {
            ctx->pc = 0x49F1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f1d8;
        }
    }
    ctx->pc = 0x49F1FCu;
    // 0x49f1fc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x49f1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x49f200: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49F200u;
    {
        const bool branch_taken_0x49f200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F200u;
        // 0x49f204: 0x2467ffe0  addiu       $a3, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f200) {
            ctx->pc = 0x49F1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f1f0;
        }
    }
    ctx->pc = 0x49F208u;
label_49f208:
    // 0x49f208: 0x3e00008  jr          $ra
    ctx->pc = 0x49F208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F208u;
        // 0x49f20c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F210u;
}
