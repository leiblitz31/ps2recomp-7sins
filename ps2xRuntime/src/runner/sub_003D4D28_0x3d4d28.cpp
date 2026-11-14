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

// Function: sub_003D4D28
// Address: 0x3d4d28 - 0x3d4d88
void sub_003D4D28_0x3d4d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4D28_0x3d4d28");
#endif

    ctx->pc = 0x3d4d28u;

    // 0x3d4d28: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3d4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3d4d2c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3d4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3d4d30: 0x2442c8a8  addiu       $v0, $v0, -0x3758
    ctx->pc = 0x3d4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953128));
    // 0x3d4d34: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x3d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x3d4d38: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x3d4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x3d4d3c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d4d40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d4d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4d44: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x3d4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x3d4d48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3d4d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3d4d4c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3d4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3d4d50: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3d4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3d4d54: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3d4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3d4d58: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3d4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3d4d5c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3d4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3d4d60: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x3d4d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x3d4d64: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3d4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3d4d68: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3d4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x3d4d6c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x3d4d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x3d4d70: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3d4d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3d4d74: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3d4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x3d4d78: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3d4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x3d4d7c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3d4d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3d4d80: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D80u;
        // 0x3d4d84: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4D88u;
}
