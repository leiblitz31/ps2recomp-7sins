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

// Function: sub_003830B8
// Address: 0x3830b8 - 0x3830e8
void sub_003830B8_0x3830b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003830B8_0x3830b8");
#endif

    ctx->pc = 0x3830b8u;

    // 0x3830b8: 0x8f83a934  lw          $v1, -0x56CC($gp)
    ctx->pc = 0x3830b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945076)));
    // 0x3830bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3830bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3830c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3830c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3830c4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3830c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3830c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3830C8u;
    {
        const bool branch_taken_0x3830c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3830c8) {
            ctx->pc = 0x3830CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3830C8u;
            // 0x3830cc: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3830D8u;
            goto label_3830d8;
        }
    }
    ctx->pc = 0x3830D0u;
    // 0x3830d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3830D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3830D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830D0u;
        // 0x3830d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3830D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3830D8u;
label_3830d8:
    // 0x3830d8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3830d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3830dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3830DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3830E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830DCu;
        // 0x3830e0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3830DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3830E4u;
    // 0x3830e4: 0x0  nop
    ctx->pc = 0x3830e4u;
    // NOP
    ctx->pc = 0x3830e8u;
}
