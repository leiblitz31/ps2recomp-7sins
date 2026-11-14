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

// Function: sub_001B9970
// Address: 0x1b9970 - 0x1b99b0
void sub_001B9970_0x1b9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9970_0x1b9970");
#endif

    switch (ctx->pc) {
        case 0x1b9990u: goto label_1b9990;
        default: break;
    }

    ctx->pc = 0x1b9970u;

    // 0x1b9970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b997c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b9980: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9984: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b9984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9988: 0xc06e66c  jal         func_1B99B0
    ctx->pc = 0x1B9988u;
    SET_GPR_U32(ctx, 31, 0x1B9990u);
    ctx->pc = 0x1B99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B99B0u, 0x1B9988u, 0x1B9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9990u;
label_1b9990:
    // 0x1b9990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9998: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b9998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b999c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B999Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B999Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B99A4u;
    // 0x1b99a4: 0x0  nop
    ctx->pc = 0x1b99a4u;
    // NOP
    // 0x1b99a8: 0x0  nop
    ctx->pc = 0x1b99a8u;
    // NOP
    // 0x1b99ac: 0x0  nop
    ctx->pc = 0x1b99acu;
    // NOP
    ctx->pc = 0x1b99b0u;
}
