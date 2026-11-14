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

// Function: sub_003D4EA8
// Address: 0x3d4ea8 - 0x3d4eb8
void sub_003D4EA8_0x3d4ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4EA8_0x3d4ea8");
#endif

    ctx->pc = 0x3d4ea8u;

    // 0x3d4ea8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4eac: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EACu;
        // 0x3d4eb0: 0x2442b20c  addiu       $v0, $v0, -0x4DF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947340));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4EB4u;
    // 0x3d4eb4: 0x0  nop
    ctx->pc = 0x3d4eb4u;
    // NOP
    ctx->pc = 0x3d4eb8u;
}
