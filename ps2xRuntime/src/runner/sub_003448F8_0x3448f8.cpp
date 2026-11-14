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

// Function: sub_003448F8
// Address: 0x3448f8 - 0x344930
void sub_003448F8_0x3448f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003448F8_0x3448f8");
#endif

    switch (ctx->pc) {
        case 0x344910u: goto label_344910;
        default: break;
    }

    ctx->pc = 0x3448f8u;

    // 0x3448f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3448f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3448fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3448fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344900: 0x8c45c330  lw          $a1, -0x3CD0($v0)
    ctx->pc = 0x344900u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C330u));
    // 0x344904: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x344904u;
    {
        const bool branch_taken_0x344904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x344908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344904u;
        // 0x344908: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344904) {
            ctx->pc = 0x344928u;
            goto label_344928;
        }
    }
    ctx->pc = 0x34490Cu;
    // 0x34490c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x34490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_344910:
    // 0x344910: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344910u;
    {
        const bool branch_taken_0x344910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x344910) {
            ctx->pc = 0x344914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344910u;
            // 0x344914: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344920u;
            goto label_344920;
        }
    }
    ctx->pc = 0x344918u;
    // 0x344918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x344918u;
    {
        const bool branch_taken_0x344918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344918u;
        // 0x34491c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344918) {
            ctx->pc = 0x344928u;
            goto label_344928;
        }
    }
    ctx->pc = 0x344920u;
label_344920:
    // 0x344920: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x344920u;
    {
        const bool branch_taken_0x344920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x344920) {
            ctx->pc = 0x344924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344920u;
            // 0x344924: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344910;
        }
    }
    ctx->pc = 0x344928u;
label_344928:
    // 0x344928: 0x3e00008  jr          $ra
    ctx->pc = 0x344928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344928u;
        // 0x34492c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344930u;
}
