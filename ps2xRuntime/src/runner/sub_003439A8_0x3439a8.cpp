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

// Function: sub_003439A8
// Address: 0x3439a8 - 0x3439e0
void sub_003439A8_0x3439a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003439A8_0x3439a8");
#endif

    switch (ctx->pc) {
        case 0x3439c0u: goto label_3439c0;
        default: break;
    }

    ctx->pc = 0x3439a8u;

    // 0x3439a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3439a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3439ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3439acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439b0: 0x8c45c32c  lw          $a1, -0x3CD4($v0)
    ctx->pc = 0x3439b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C32Cu));
    // 0x3439b4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3439B4u;
    {
        const bool branch_taken_0x3439b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3439B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439B4u;
        // 0x3439b8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3439b4) {
            ctx->pc = 0x3439D8u;
            goto label_3439d8;
        }
    }
    ctx->pc = 0x3439BCu;
    // 0x3439bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3439bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3439c0:
    // 0x3439c0: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3439C0u;
    {
        const bool branch_taken_0x3439c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3439c0) {
            ctx->pc = 0x3439C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3439C0u;
            // 0x3439c4: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3439D0u;
            goto label_3439d0;
        }
    }
    ctx->pc = 0x3439C8u;
    // 0x3439c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3439C8u;
    {
        const bool branch_taken_0x3439c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3439CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439C8u;
        // 0x3439cc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3439c8) {
            ctx->pc = 0x3439D8u;
            goto label_3439d8;
        }
    }
    ctx->pc = 0x3439D0u;
label_3439d0:
    // 0x3439d0: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3439D0u;
    {
        const bool branch_taken_0x3439d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3439d0) {
            ctx->pc = 0x3439D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3439D0u;
            // 0x3439d4: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3439C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3439c0;
        }
    }
    ctx->pc = 0x3439D8u;
label_3439d8:
    // 0x3439d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3439D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3439DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439D8u;
        // 0x3439dc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3439D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3439E0u;
}
