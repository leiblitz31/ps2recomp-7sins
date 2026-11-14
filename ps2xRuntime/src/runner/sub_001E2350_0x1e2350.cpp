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

// Function: sub_001E2350
// Address: 0x1e2350 - 0x1e2390
void sub_001E2350_0x1e2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2350_0x1e2350");
#endif

    switch (ctx->pc) {
        case 0x1e2370u: goto label_1e2370;
        default: break;
    }

    ctx->pc = 0x1e2350u;

    // 0x1e2350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e235c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e235cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e2360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2364: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e2364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2368: 0xc077f80  jal         func_1DFE00
    ctx->pc = 0x1E2368u;
    SET_GPR_U32(ctx, 31, 0x1E2370u);
    ctx->pc = 0x1DFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE00u, 0x1E2368u, 0x1E2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2370u;
label_1e2370:
    // 0x1e2370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e2370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2378: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e2378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e237c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E237Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2384u;
    // 0x1e2384: 0x0  nop
    ctx->pc = 0x1e2384u;
    // NOP
    // 0x1e2388: 0x0  nop
    ctx->pc = 0x1e2388u;
    // NOP
    // 0x1e238c: 0x0  nop
    ctx->pc = 0x1e238cu;
    // NOP
    ctx->pc = 0x1e2390u;
}
