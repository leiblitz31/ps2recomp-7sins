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

// Function: sub_001E2F60
// Address: 0x1e2f60 - 0x1e2fa0
void sub_001E2F60_0x1e2f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2F60_0x1e2f60");
#endif

    switch (ctx->pc) {
        case 0x1e2f88u: goto label_1e2f88;
        default: break;
    }

    ctx->pc = 0x1e2f60u;

    // 0x1e2f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e2f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e2f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2f68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e2f6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2f70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e2f74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e2f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2f7c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e2f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2f80: 0xc078b18  jal         func_1E2C60
    ctx->pc = 0x1E2F80u;
    SET_GPR_U32(ctx, 31, 0x1E2F88u);
    ctx->pc = 0x1E2C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C60u, 0x1E2F80u, 0x1E2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F88u;
label_1e2f88:
    // 0x1e2f88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2f90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e2f94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2F9Cu;
    // 0x1e2f9c: 0x0  nop
    ctx->pc = 0x1e2f9cu;
    // NOP
    ctx->pc = 0x1e2fa0u;
}
