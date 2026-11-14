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

// Function: sub_003D4E60
// Address: 0x3d4e60 - 0x3d4e78
void sub_003D4E60_0x3d4e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4E60_0x3d4e60");
#endif

    ctx->pc = 0x3d4e60u;

    // 0x3d4e60: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4e64: 0x8c43b1f4  lw          $v1, -0x4E0C($v0)
    ctx->pc = 0x3d4e64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1F4u));
    // 0x3d4e68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d4e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4e6c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3d4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d4e70: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E70u;
        // 0x3d4e74: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4E78u;
}
