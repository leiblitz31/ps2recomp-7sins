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

// Function: sub_003AE3B0
// Address: 0x3ae3b0 - 0x3ae3e0
void sub_003AE3B0_0x3ae3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE3B0_0x3ae3b0");
#endif

    ctx->pc = 0x3ae3b0u;

    // 0x3ae3b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ae3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ae3b4: 0x2443ce80  addiu       $v1, $v0, -0x3180
    ctx->pc = 0x3ae3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3ae3b8: 0x8c620610  lw          $v0, 0x610($v1)
    ctx->pc = 0x3ae3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3ae3bc: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x3ae3bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ae3c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE3C0u;
    {
        const bool branch_taken_0x3ae3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3C0u;
        // 0x3ae3c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae3c0) {
            ctx->pc = 0x3AE3D4u;
            goto label_3ae3d4;
        }
    }
    ctx->pc = 0x3AE3C8u;
    // 0x3ae3c8: 0xac600704  sw          $zero, 0x704($v1)
    ctx->pc = 0x3ae3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1796), GPR_U32(ctx, 0));
    // 0x3ae3cc: 0xac620610  sw          $v0, 0x610($v1)
    ctx->pc = 0x3ae3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1552), GPR_U32(ctx, 2));
    // 0x3ae3d0: 0xac6006f0  sw          $zero, 0x6F0($v1)
    ctx->pc = 0x3ae3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 0));
label_3ae3d4:
    // 0x3ae3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3D4u;
        // 0x3ae3d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE3DCu;
    // 0x3ae3dc: 0x0  nop
    ctx->pc = 0x3ae3dcu;
    // NOP
    ctx->pc = 0x3ae3e0u;
}
