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

// Function: sub_00383490
// Address: 0x383490 - 0x3834c0
void sub_00383490_0x383490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383490_0x383490");
#endif

    ctx->pc = 0x383490u;

    // 0x383490: 0x8f83a94c  lw          $v1, -0x56B4($gp)
    ctx->pc = 0x383490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945100)));
    // 0x383494: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x383494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x383498: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x383498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38349c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x38349cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3834a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3834A0u;
    {
        const bool branch_taken_0x3834a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3834a0) {
            ctx->pc = 0x3834A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3834A0u;
            // 0x3834a4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3834B0u;
            goto label_3834b0;
        }
    }
    ctx->pc = 0x3834A8u;
    // 0x3834a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3834A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3834ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834A8u;
        // 0x3834ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3834A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3834B0u;
label_3834b0:
    // 0x3834b0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3834b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3834b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3834B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3834B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834B4u;
        // 0x3834b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3834B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3834BCu;
    // 0x3834bc: 0x0  nop
    ctx->pc = 0x3834bcu;
    // NOP
    ctx->pc = 0x3834c0u;
}
