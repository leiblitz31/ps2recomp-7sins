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

// Function: sub_001B3C40
// Address: 0x1b3c40 - 0x1b3c80
void sub_001B3C40_0x1b3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3C40_0x1b3c40");
#endif

    switch (ctx->pc) {
        case 0x1b3c70u: goto label_1b3c70;
        default: break;
    }

    ctx->pc = 0x1b3c40u;

    // 0x1b3c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3c48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b3c4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b3c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b3c50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1b3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1b3c54: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1b3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1b3c58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3c5c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3c60: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1b3c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3c64: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1b3c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3c68: 0xc06dfb0  jal         func_1B7EC0
    ctx->pc = 0x1B3C68u;
    SET_GPR_U32(ctx, 31, 0x1B3C70u);
    ctx->pc = 0x1B7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EC0u, 0x1B3C68u, 0x1B3C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C70u;
label_1b3c70:
    // 0x1b3c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3c74: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b3c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b3c78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3C80u;
}
