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

// Function: sub_00377A88
// Address: 0x377a88 - 0x377ab8
void sub_00377A88_0x377a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377A88_0x377a88");
#endif

    ctx->pc = 0x377a88u;

    // 0x377a88: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x377a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x377a8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x377a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x377a90: 0x8c62c438  lw          $v0, -0x3BC8($v1)
    ctx->pc = 0x377a90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C438u));
    // 0x377a94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x377a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x377a98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x377a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x377a9c: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x377A9Cu;
    {
        const bool branch_taken_0x377a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x377a9c) {
            ctx->pc = 0x377AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377A9Cu;
            // 0x377aa0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377AACu;
            goto label_377aac;
        }
    }
    ctx->pc = 0x377AA4u;
    // 0x377aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x377AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377AA4u;
        // 0x377aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377AACu;
label_377aac:
    // 0x377aac: 0x3e00008  jr          $ra
    ctx->pc = 0x377AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377AACu;
        // 0x377ab0: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377AB4u;
    // 0x377ab4: 0x0  nop
    ctx->pc = 0x377ab4u;
    // NOP
    ctx->pc = 0x377ab8u;
}
