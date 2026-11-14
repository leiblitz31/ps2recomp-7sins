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

// Function: sub_00253C50
// Address: 0x253c50 - 0x253c90
void sub_00253C50_0x253c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253C50_0x253c50");
#endif

    ctx->pc = 0x253c50u;

    // 0x253c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253c54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x253c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x253c58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x253c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x253c5c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x253c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x253c60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x253c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253c64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253c68: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x253c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x253c6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x253c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253c70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253c74: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x253c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x253c78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x253c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x253c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x253C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253C84u;
    // 0x253c84: 0x0  nop
    ctx->pc = 0x253c84u;
    // NOP
    // 0x253c88: 0x0  nop
    ctx->pc = 0x253c88u;
    // NOP
    // 0x253c8c: 0x0  nop
    ctx->pc = 0x253c8cu;
    // NOP
    ctx->pc = 0x253c90u;
}
