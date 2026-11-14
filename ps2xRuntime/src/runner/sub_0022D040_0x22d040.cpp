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

// Function: sub_0022D040
// Address: 0x22d040 - 0x22d090
void sub_0022D040_0x22d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D040_0x22d040");
#endif

    ctx->pc = 0x22d040u;

    // 0x22d040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22d044: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22d044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22d048: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22d048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22d04c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d054: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d058: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22d058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22d05c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d060: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22d064: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d068: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x22d068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x22d06c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d070: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22d070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22d074: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d078: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x22d078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x22d07c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d080: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d084: 0x3e00008  jr          $ra
    ctx->pc = 0x22D084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D08Cu;
    // 0x22d08c: 0x0  nop
    ctx->pc = 0x22d08cu;
    // NOP
    ctx->pc = 0x22d090u;
}
