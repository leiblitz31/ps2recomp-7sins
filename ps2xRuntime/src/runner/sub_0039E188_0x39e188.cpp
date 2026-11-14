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

// Function: sub_0039E188
// Address: 0x39e188 - 0x39e1b8
void sub_0039E188_0x39e188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E188_0x39e188");
#endif

    ctx->pc = 0x39e188u;

    // 0x39e188: 0x8f85bf20  lw          $a1, -0x40E0($gp)
    ctx->pc = 0x39e188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x39e18c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E18Cu;
    {
        const bool branch_taken_0x39e18c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E18Cu;
        // 0x39e190: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e18c) {
            ctx->pc = 0x39E1A0u;
            goto label_39e1a0;
        }
    }
    ctx->pc = 0x39E194u;
    // 0x39e194: 0x2462e880  addiu       $v0, $v1, -0x1780
    ctx->pc = 0x39e194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x39e198: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x39e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39e19c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x39e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_39e1a0:
    // 0x39e1a0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x39e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x39e1a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39e1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e1a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x39e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x39e1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x39E1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1ACu;
        // 0x39e1b0: 0xac64003c  sw          $a0, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E1B4u;
    // 0x39e1b4: 0x0  nop
    ctx->pc = 0x39e1b4u;
    // NOP
    ctx->pc = 0x39e1b8u;
}
