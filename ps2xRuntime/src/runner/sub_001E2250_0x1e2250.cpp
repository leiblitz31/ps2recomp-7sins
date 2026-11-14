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

// Function: sub_001E2250
// Address: 0x1e2250 - 0x1e2290
void sub_001E2250_0x1e2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2250_0x1e2250");
#endif

    switch (ctx->pc) {
        case 0x1e2270u: goto label_1e2270;
        default: break;
    }

    ctx->pc = 0x1e2250u;

    // 0x1e2250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e225c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e225cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2260: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e2260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2264: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e2264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2268: 0xc0788a4  jal         func_1E2290
    ctx->pc = 0x1E2268u;
    SET_GPR_U32(ctx, 31, 0x1E2270u);
    ctx->pc = 0x1E2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2290u, 0x1E2268u, 0x1E2270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2270u;
label_1e2270:
    // 0x1e2270: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2278: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e2278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e227c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2284u;
    // 0x1e2284: 0x0  nop
    ctx->pc = 0x1e2284u;
    // NOP
    // 0x1e2288: 0x0  nop
    ctx->pc = 0x1e2288u;
    // NOP
    // 0x1e228c: 0x0  nop
    ctx->pc = 0x1e228cu;
    // NOP
    ctx->pc = 0x1e2290u;
}
