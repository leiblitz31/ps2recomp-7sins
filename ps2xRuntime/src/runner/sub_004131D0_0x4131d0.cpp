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

// Function: sub_004131D0
// Address: 0x4131d0 - 0x413200
void sub_004131D0_0x4131d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004131D0_0x4131d0");
#endif

    switch (ctx->pc) {
        case 0x4131e0u: goto label_4131e0;
        default: break;
    }

    ctx->pc = 0x4131d0u;

    // 0x4131d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4131d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4131d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4131D4u;
    {
        const bool branch_taken_0x4131d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4131d4) {
            ctx->pc = 0x4131F8u;
            goto label_4131f8;
        }
    }
    ctx->pc = 0x4131DCu;
    // 0x4131dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4131dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4131e0:
    // 0x4131e0: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4131E0u;
    {
        const bool branch_taken_0x4131e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4131e0) {
            ctx->pc = 0x4131E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4131E0u;
            // 0x4131e4: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4131F0u;
            goto label_4131f0;
        }
    }
    ctx->pc = 0x4131E8u;
    // 0x4131e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4131E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4131ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4131E8u;
        // 0x4131ec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4131E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4131F0u;
label_4131f0:
    // 0x4131f0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4131F0u;
    {
        const bool branch_taken_0x4131f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4131f0) {
            ctx->pc = 0x4131F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4131F0u;
            // 0x4131f4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4131E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4131e0;
        }
    }
    ctx->pc = 0x4131F8u;
label_4131f8:
    // 0x4131f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4131F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4131FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4131F8u;
        // 0x4131fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4131F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413200u;
}
