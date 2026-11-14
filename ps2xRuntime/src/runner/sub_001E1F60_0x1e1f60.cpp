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

// Function: sub_001E1F60
// Address: 0x1e1f60 - 0x1e1fa0
void sub_001E1F60_0x1e1f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1F60_0x1e1f60");
#endif

    switch (ctx->pc) {
        case 0x1e1f80u: goto label_1e1f80;
        default: break;
    }

    ctx->pc = 0x1e1f60u;

    // 0x1e1f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1f68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e1f6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e1f70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e1f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1f74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e1f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1f78: 0xc0787e8  jal         func_1E1FA0
    ctx->pc = 0x1E1F78u;
    SET_GPR_U32(ctx, 31, 0x1E1F80u);
    ctx->pc = 0x1E1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1FA0u, 0x1E1F78u, 0x1E1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F80u;
label_1e1f80:
    // 0x1e1f80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1f88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e1f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1F94u;
    // 0x1e1f94: 0x0  nop
    ctx->pc = 0x1e1f94u;
    // NOP
    // 0x1e1f98: 0x0  nop
    ctx->pc = 0x1e1f98u;
    // NOP
    // 0x1e1f9c: 0x0  nop
    ctx->pc = 0x1e1f9cu;
    // NOP
    ctx->pc = 0x1e1fa0u;
}
