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

// Function: sub_0039E1B8
// Address: 0x39e1b8 - 0x39e1e8
void sub_0039E1B8_0x39e1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E1B8_0x39e1b8");
#endif

    ctx->pc = 0x39e1b8u;

    // 0x39e1b8: 0x8f85bf20  lw          $a1, -0x40E0($gp)
    ctx->pc = 0x39e1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x39e1bc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E1BCu;
    {
        const bool branch_taken_0x39e1bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1BCu;
        // 0x39e1c0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e1bc) {
            ctx->pc = 0x39E1D0u;
            goto label_39e1d0;
        }
    }
    ctx->pc = 0x39E1C4u;
    // 0x39e1c4: 0x2462e880  addiu       $v0, $v1, -0x1780
    ctx->pc = 0x39e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x39e1c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x39e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39e1cc: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x39e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_39e1d0:
    // 0x39e1d0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x39e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x39e1d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39e1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e1d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x39e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x39e1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x39E1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1DCu;
        // 0x39e1e0: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E1E4u;
    // 0x39e1e4: 0x0  nop
    ctx->pc = 0x39e1e4u;
    // NOP
    ctx->pc = 0x39e1e8u;
}
