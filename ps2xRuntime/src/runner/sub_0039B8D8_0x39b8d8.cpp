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

// Function: sub_0039B8D8
// Address: 0x39b8d8 - 0x39b900
void sub_0039B8D8_0x39b8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B8D8_0x39b8d8");
#endif

    ctx->pc = 0x39b8d8u;

    // 0x39b8d8: 0x8f83a9e0  lw          $v1, -0x5620($gp)
    ctx->pc = 0x39b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
    // 0x39b8dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x39b8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x39b8e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x39b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x39b8e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x39B8E4u;
    {
        const bool branch_taken_0x39b8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b8e4) {
            ctx->pc = 0x39B8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B8E4u;
            // 0x39b8e8: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B8F4u;
            goto label_39b8f4;
        }
    }
    ctx->pc = 0x39B8ECu;
    // 0x39b8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x39B8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8ECu;
        // 0x39b8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B8F4u;
label_39b8f4:
    // 0x39b8f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39b8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x39B8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8F8u;
        // 0x39b8fc: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B900u;
}
