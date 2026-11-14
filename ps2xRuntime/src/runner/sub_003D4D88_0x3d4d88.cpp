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

// Function: sub_003D4D88
// Address: 0x3d4d88 - 0x3d4de8
void sub_003D4D88_0x3d4d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4D88_0x3d4d88");
#endif

    ctx->pc = 0x3d4d88u;

    // 0x3d4d88: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3d4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3d4d8c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3d4d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3d4d90: 0x2442c8a8  addiu       $v0, $v0, -0x3758
    ctx->pc = 0x3d4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953128));
    // 0x3d4d94: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x3d4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x3d4d98: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x3d4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x3d4d9c: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x3d4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x3d4da0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d4da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4da4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3d4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3d4da8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3d4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3d4dac: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3d4dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3d4db0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3d4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3d4db4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3d4db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3d4db8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3d4db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3d4dbc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3d4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3d4dc0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x3d4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x3d4dc4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3d4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3d4dc8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3d4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x3d4dcc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x3d4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x3d4dd0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3d4dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3d4dd4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3d4dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x3d4dd8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3d4dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x3d4ddc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3d4ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3d4de0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DE0u;
        // 0x3d4de4: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4DE8u;
}
