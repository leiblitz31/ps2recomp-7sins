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

// Function: sub_0014AC30
// Address: 0x14ac30 - 0x14ac70
void sub_0014AC30_0x14ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AC30_0x14ac30");
#endif

    ctx->pc = 0x14ac30u;

    // 0x14ac30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ac34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14ac38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14ac3c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x14ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x14ac40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ac44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ac48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14ac50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ac54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ac58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac5c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14ac60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14ac64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AC70u;
}
