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

// Function: sub_003FB2C8
// Address: 0x3fb2c8 - 0x3fb2f8
void sub_003FB2C8_0x3fb2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB2C8_0x3fb2c8");
#endif

    ctx->pc = 0x3fb2c8u;

    // 0x3fb2c8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FB2C8u;
    {
        const bool branch_taken_0x3fb2c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb2c8) {
            ctx->pc = 0x3FB2F0u;
            goto label_3fb2f0;
        }
    }
    ctx->pc = 0x3FB2D0u;
    // 0x3fb2d0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FB2D0u;
    {
        const bool branch_taken_0x3fb2d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB2D0u;
        // 0x3fb2d4: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb2d0) {
            ctx->pc = 0x3FB2F0u;
            goto label_3fb2f0;
        }
    }
    ctx->pc = 0x3FB2D8u;
    // 0x3fb2d8: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3fb2d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3fb2dc: 0xfca60078  sd          $a2, 0x78($a1)
    ctx->pc = 0x3fb2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 6));
    // 0x3fb2e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb2e4: 0xfca70080  sd          $a3, 0x80($a1)
    ctx->pc = 0x3fb2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 128), GPR_U64(ctx, 7));
    // 0x3fb2e8: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3fb2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x3fb2ec: 0xa0a80088  sb          $t0, 0x88($a1)
    ctx->pc = 0x3fb2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 8));
label_3fb2f0:
    // 0x3fb2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB2F8u;
}
