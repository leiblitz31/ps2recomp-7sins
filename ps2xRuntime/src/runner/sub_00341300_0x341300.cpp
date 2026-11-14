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

// Function: sub_00341300
// Address: 0x341300 - 0x341338
void sub_00341300_0x341300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341300_0x341300");
#endif

    switch (ctx->pc) {
        case 0x341318u: goto label_341318;
        default: break;
    }

    ctx->pc = 0x341300u;

    // 0x341300: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x341300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x341304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x341304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341308: 0x8c45c328  lw          $a1, -0x3CD8($v0)
    ctx->pc = 0x341308u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C328u));
    // 0x34130c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34130Cu;
    {
        const bool branch_taken_0x34130c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x341310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34130Cu;
        // 0x341310: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34130c) {
            ctx->pc = 0x341330u;
            goto label_341330;
        }
    }
    ctx->pc = 0x341314u;
    // 0x341314: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x341314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_341318:
    // 0x341318: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341318u;
    {
        const bool branch_taken_0x341318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x341318) {
            ctx->pc = 0x34131Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341318u;
            // 0x34131c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341328u;
            goto label_341328;
        }
    }
    ctx->pc = 0x341320u;
    // 0x341320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x341320u;
    {
        const bool branch_taken_0x341320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341320u;
        // 0x341324: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341320) {
            ctx->pc = 0x341330u;
            goto label_341330;
        }
    }
    ctx->pc = 0x341328u;
label_341328:
    // 0x341328: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x341328u;
    {
        const bool branch_taken_0x341328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x341328) {
            ctx->pc = 0x34132Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341328u;
            // 0x34132c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341318;
        }
    }
    ctx->pc = 0x341330u;
label_341330:
    // 0x341330: 0x3e00008  jr          $ra
    ctx->pc = 0x341330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341330u;
        // 0x341334: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341338u;
}
