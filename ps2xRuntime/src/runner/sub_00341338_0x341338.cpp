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

// Function: sub_00341338
// Address: 0x341338 - 0x341370
void sub_00341338_0x341338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341338_0x341338");
#endif

    switch (ctx->pc) {
        case 0x341350u: goto label_341350;
        default: break;
    }

    ctx->pc = 0x341338u;

    // 0x341338: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x341338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x34133c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34133cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341340: 0x8c45c328  lw          $a1, -0x3CD8($v0)
    ctx->pc = 0x341340u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C328u));
    // 0x341344: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x341344u;
    {
        const bool branch_taken_0x341344 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x341348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341344u;
        // 0x341348: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341344) {
            ctx->pc = 0x341368u;
            goto label_341368;
        }
    }
    ctx->pc = 0x34134Cu;
    // 0x34134c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x34134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_341350:
    // 0x341350: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341350u;
    {
        const bool branch_taken_0x341350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x341350) {
            ctx->pc = 0x341354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341350u;
            // 0x341354: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341360u;
            goto label_341360;
        }
    }
    ctx->pc = 0x341358u;
    // 0x341358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x341358u;
    {
        const bool branch_taken_0x341358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341358u;
        // 0x34135c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341358) {
            ctx->pc = 0x341368u;
            goto label_341368;
        }
    }
    ctx->pc = 0x341360u;
label_341360:
    // 0x341360: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x341360u;
    {
        const bool branch_taken_0x341360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x341360) {
            ctx->pc = 0x341364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341360u;
            // 0x341364: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341350;
        }
    }
    ctx->pc = 0x341368u;
label_341368:
    // 0x341368: 0x3e00008  jr          $ra
    ctx->pc = 0x341368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341368u;
        // 0x34136c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341370u;
}
