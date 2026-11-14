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

// Function: sub_003D4DE8
// Address: 0x3d4de8 - 0x3d4e18
void sub_003D4DE8_0x3d4de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4DE8_0x3d4de8");
#endif

    ctx->pc = 0x3d4de8u;

    // 0x3d4de8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4dec: 0x8c43b1ec  lw          $v1, -0x4E14($v0)
    ctx->pc = 0x3d4decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x3d4df0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3d4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d4df4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d4df8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d4df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d4dfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4DFCu;
    {
        const bool branch_taken_0x3d4dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DFCu;
        // 0x3d4e00: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4dfc) {
            ctx->pc = 0x3D4E0Cu;
            goto label_3d4e0c;
        }
    }
    ctx->pc = 0x3D4E04u;
    // 0x3d4e04: 0x94820082  lhu         $v0, 0x82($a0)
    ctx->pc = 0x3d4e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x3d4e08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3d4e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3d4e0c:
    // 0x3d4e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E0Cu;
        // 0x3d4e10: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4E14u;
    // 0x3d4e14: 0x0  nop
    ctx->pc = 0x3d4e14u;
    // NOP
    ctx->pc = 0x3d4e18u;
}
