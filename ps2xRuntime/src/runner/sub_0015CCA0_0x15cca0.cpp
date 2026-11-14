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

// Function: sub_0015CCA0
// Address: 0x15cca0 - 0x15ccf0
void sub_0015CCA0_0x15cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CCA0_0x15cca0");
#endif

    ctx->pc = 0x15cca0u;

    // 0x15cca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15cca4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15cca8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x15cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15ccac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ccb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ccb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ccb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15ccbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ccc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15ccc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ccc8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x15ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x15cccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ccd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15ccd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ccd8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x15ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x15ccdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cce0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cce4: 0x3e00008  jr          $ra
    ctx->pc = 0x15CCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CCECu;
    // 0x15ccec: 0x0  nop
    ctx->pc = 0x15ccecu;
    // NOP
    ctx->pc = 0x15ccf0u;
}
