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

// Function: sub_002EE1D0
// Address: 0x2ee1d0 - 0x2ee200
void sub_002EE1D0_0x2ee1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE1D0_0x2ee1d0");
#endif

    ctx->pc = 0x2ee1d0u;

    // 0x2ee1d0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE1D0u;
    {
        const bool branch_taken_0x2ee1d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1d0) {
            ctx->pc = 0x2EE1F4u;
            goto label_2ee1f4;
        }
    }
    ctx->pc = 0x2EE1D8u;
    // 0x2ee1d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ee1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ee1dc: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2ee1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2ee1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ee1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ee1e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ee1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ee1e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ee1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee1ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2ee1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2ee1f0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2ee1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2ee1f4:
    // 0x2ee1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE1FCu;
    // 0x2ee1fc: 0x0  nop
    ctx->pc = 0x2ee1fcu;
    // NOP
    ctx->pc = 0x2ee200u;
}
