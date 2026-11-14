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

// Function: sub_0018D020
// Address: 0x18d020 - 0x18d060
void sub_0018D020_0x18d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D020_0x18d020");
#endif

    ctx->pc = 0x18d020u;

    // 0x18d020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d024: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18d024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18d028: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x18d028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18d02c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d030: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d038: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18d038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18d03c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d040: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18d040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18d044: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d048: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x18d048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18d04c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d050: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18d054: 0x3e00008  jr          $ra
    ctx->pc = 0x18D054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D05Cu;
    // 0x18d05c: 0x0  nop
    ctx->pc = 0x18d05cu;
    // NOP
    ctx->pc = 0x18d060u;
}
