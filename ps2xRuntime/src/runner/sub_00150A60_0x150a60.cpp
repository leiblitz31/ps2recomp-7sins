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

// Function: sub_00150A60
// Address: 0x150a60 - 0x150aa0
void sub_00150A60_0x150a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150A60_0x150a60");
#endif

    switch (ctx->pc) {
        case 0x150a84u: goto label_150a84;
        default: break;
    }

    ctx->pc = 0x150a60u;

    // 0x150a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150a68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x150a6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x150a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150a70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x150a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150a74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150a78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150a7c: 0xc0542a8  jal         func_150AA0
    ctx->pc = 0x150A7Cu;
    SET_GPR_U32(ctx, 31, 0x150A84u);
    ctx->pc = 0x150AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AA0u, 0x150A7Cu, 0x150A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A84u;
label_150a84:
    // 0x150a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150a88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x150A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150A94u;
    // 0x150a94: 0x0  nop
    ctx->pc = 0x150a94u;
    // NOP
    // 0x150a98: 0x0  nop
    ctx->pc = 0x150a98u;
    // NOP
    // 0x150a9c: 0x0  nop
    ctx->pc = 0x150a9cu;
    // NOP
    ctx->pc = 0x150aa0u;
}
