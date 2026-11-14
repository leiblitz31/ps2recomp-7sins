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

// Function: sub_003448A0
// Address: 0x3448a0 - 0x3448f8
void sub_003448A0_0x3448a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003448A0_0x3448a0");
#endif

    switch (ctx->pc) {
        case 0x3448c0u: goto label_3448c0;
        default: break;
    }

    ctx->pc = 0x3448a0u;

    // 0x3448a0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3448a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3448a4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3448a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3448a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3448a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448ac: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3448ACu;
    {
        const bool branch_taken_0x3448ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3448B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448ACu;
        // 0x3448b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448ac) {
            ctx->pc = 0x3448F0u;
            goto label_3448f0;
        }
    }
    ctx->pc = 0x3448B4u;
    // 0x3448b4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3448b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3448b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3448b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3448bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3448c0:
    // 0x3448c0: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3448C0u;
    {
        const bool branch_taken_0x3448c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3448c0) {
            ctx->pc = 0x3448C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3448C0u;
            // 0x3448c4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3448D4u;
            goto label_3448d4;
        }
    }
    ctx->pc = 0x3448C8u;
    // 0x3448c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3448c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3448cc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3448ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3448d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3448d4:
    // 0x3448d4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3448d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3448d8: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3448D8u;
    {
        const bool branch_taken_0x3448d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3448DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448D8u;
        // 0x3448dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448d8) {
            ctx->pc = 0x3448F0u;
            goto label_3448f0;
        }
    }
    ctx->pc = 0x3448E0u;
    // 0x3448e0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3448e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3448e4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3448e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3448e8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x3448E8u;
    {
        const bool branch_taken_0x3448e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3448e8) {
            ctx->pc = 0x3448ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3448E8u;
            // 0x3448ec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3448C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3448c0;
        }
    }
    ctx->pc = 0x3448F0u;
label_3448f0:
    // 0x3448f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3448F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3448F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448F0u;
        // 0x3448f4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3448F8u;
}
