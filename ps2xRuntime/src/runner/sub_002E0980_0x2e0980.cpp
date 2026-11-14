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

// Function: sub_002E0980
// Address: 0x2e0980 - 0x2e09b0
void sub_002E0980_0x2e0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0980_0x2e0980");
#endif

    switch (ctx->pc) {
        case 0x2e0998u: goto label_2e0998;
        default: break;
    }

    ctx->pc = 0x2e0980u;

    // 0x2e0980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e0988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e098c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0990: 0xc0b7ce0  jal         func_2DF380
    ctx->pc = 0x2E0990u;
    SET_GPR_U32(ctx, 31, 0x2E0998u);
    ctx->pc = 0x2DF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF380u, 0x2E0990u, 0x2E0998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0998u;
label_2e0998:
    // 0x2e0998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e099c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e099cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e09a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E09A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E09A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E09A8u;
    // 0x2e09a8: 0x0  nop
    ctx->pc = 0x2e09a8u;
    // NOP
    // 0x2e09ac: 0x0  nop
    ctx->pc = 0x2e09acu;
    // NOP
    ctx->pc = 0x2e09b0u;
}
