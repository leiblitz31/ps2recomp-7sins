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

// Function: sub_00343970
// Address: 0x343970 - 0x3439a8
void sub_00343970_0x343970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343970_0x343970");
#endif

    switch (ctx->pc) {
        case 0x343988u: goto label_343988;
        default: break;
    }

    ctx->pc = 0x343970u;

    // 0x343970: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x343970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x343974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x343974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343978: 0x8c45c32c  lw          $a1, -0x3CD4($v0)
    ctx->pc = 0x343978u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C32Cu));
    // 0x34397c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34397Cu;
    {
        const bool branch_taken_0x34397c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x343980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34397Cu;
        // 0x343980: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34397c) {
            ctx->pc = 0x3439A0u;
            goto label_3439a0;
        }
    }
    ctx->pc = 0x343984u;
    // 0x343984: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343988:
    // 0x343988: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343988u;
    {
        const bool branch_taken_0x343988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x343988) {
            ctx->pc = 0x34398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343988u;
            // 0x34398c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343998u;
            goto label_343998;
        }
    }
    ctx->pc = 0x343990u;
    // 0x343990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x343990u;
    {
        const bool branch_taken_0x343990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343990u;
        // 0x343994: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343990) {
            ctx->pc = 0x3439A0u;
            goto label_3439a0;
        }
    }
    ctx->pc = 0x343998u;
label_343998:
    // 0x343998: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x343998u;
    {
        const bool branch_taken_0x343998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x343998) {
            ctx->pc = 0x34399Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343998u;
            // 0x34399c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343988;
        }
    }
    ctx->pc = 0x3439A0u;
label_3439a0:
    // 0x3439a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3439A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3439A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439A0u;
        // 0x3439a4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3439A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3439A8u;
}
