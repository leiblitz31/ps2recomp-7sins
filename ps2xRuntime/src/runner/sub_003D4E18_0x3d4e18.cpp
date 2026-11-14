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

// Function: sub_003D4E18
// Address: 0x3d4e18 - 0x3d4e48
void sub_003D4E18_0x3d4e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4E18_0x3d4e18");
#endif

    ctx->pc = 0x3d4e18u;

    // 0x3d4e18: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4e1c: 0x8c43b1e4  lw          $v1, -0x4E1C($v0)
    ctx->pc = 0x3d4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1E4u));
    // 0x3d4e20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3d4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d4e24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d4e28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d4e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d4e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4E2Cu;
    {
        const bool branch_taken_0x3d4e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E2Cu;
        // 0x3d4e30: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4e2c) {
            ctx->pc = 0x3D4E40u;
            goto label_3d4e40;
        }
    }
    ctx->pc = 0x3D4E34u;
    // 0x3d4e34: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3d4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3d4e38: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d4e3c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3d4e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3d4e40:
    // 0x3d4e40: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E40u;
        // 0x3d4e44: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4E48u;
}
