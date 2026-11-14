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

// Function: sub_002B6C80
// Address: 0x2b6c80 - 0x2b6cc0
void sub_002B6C80_0x2b6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6C80_0x2b6c80");
#endif

    switch (ctx->pc) {
        case 0x2b6ca0u: goto label_2b6ca0;
        default: break;
    }

    ctx->pc = 0x2b6c80u;

    // 0x2b6c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b6c8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b6c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b6c90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6c94: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b6c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6c98: 0xc0adb30  jal         func_2B6CC0
    ctx->pc = 0x2B6C98u;
    SET_GPR_U32(ctx, 31, 0x2B6CA0u);
    ctx->pc = 0x2B6CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6CC0u, 0x2B6C98u, 0x2B6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CA0u;
label_2b6ca0:
    // 0x2b6ca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ca8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6CB4u;
    // 0x2b6cb4: 0x0  nop
    ctx->pc = 0x2b6cb4u;
    // NOP
    // 0x2b6cb8: 0x0  nop
    ctx->pc = 0x2b6cb8u;
    // NOP
    // 0x2b6cbc: 0x0  nop
    ctx->pc = 0x2b6cbcu;
    // NOP
    ctx->pc = 0x2b6cc0u;
}
