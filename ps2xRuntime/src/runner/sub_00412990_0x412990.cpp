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

// Function: sub_00412990
// Address: 0x412990 - 0x4129c8
void sub_00412990_0x412990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412990_0x412990");
#endif

    switch (ctx->pc) {
        case 0x412998u: goto label_412998;
        default: break;
    }

    ctx->pc = 0x412990u;

    // 0x412990: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x412990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x412994: 0x0  nop
    ctx->pc = 0x412994u;
    // NOP
label_412998:
    // 0x412998: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x412998u;
    {
        const bool branch_taken_0x412998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x412998) {
            ctx->pc = 0x4129B4u;
            goto label_4129b4;
        }
    }
    ctx->pc = 0x4129A0u;
    // 0x4129a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4129a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4129a4: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4129A4u;
    {
        const bool branch_taken_0x4129a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4129a4) {
            ctx->pc = 0x4129A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4129A4u;
            // 0x4129a8: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412998;
        }
    }
    ctx->pc = 0x4129ACu;
    // 0x4129ac: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4129ACu;
    {
        const bool branch_taken_0x4129ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4129ac) {
            ctx->pc = 0x4129B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4129ACu;
            // 0x4129b0: 0xac66001c  sw          $a2, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4129BCu;
            goto label_4129bc;
        }
    }
    ctx->pc = 0x4129B4u;
label_4129b4:
    // 0x4129b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4129B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4129B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129B4u;
        // 0x4129b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4129B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4129BCu;
label_4129bc:
    // 0x4129bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4129BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4129C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129BCu;
        // 0x4129c0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4129BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4129C4u;
    // 0x4129c4: 0x0  nop
    ctx->pc = 0x4129c4u;
    // NOP
    ctx->pc = 0x4129c8u;
}
