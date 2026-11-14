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

// Function: sub_001383F0
// Address: 0x1383f0 - 0x138430
void sub_001383F0_0x1383f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001383F0_0x1383f0");
#endif

    switch (ctx->pc) {
        case 0x138410u: goto label_138410;
        default: break;
    }

    ctx->pc = 0x1383f0u;

    // 0x1383f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1383f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1383f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1383f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1383f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1383f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1383fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1383fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x138400: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138404: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x138404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138408: 0xc04e10c  jal         func_138430
    ctx->pc = 0x138408u;
    SET_GPR_U32(ctx, 31, 0x138410u);
    ctx->pc = 0x138430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138430u, 0x138408u, 0x138410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138410u;
label_138410:
    // 0x138410: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138418: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x138418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13841c: 0x3e00008  jr          $ra
    ctx->pc = 0x13841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138424u;
    // 0x138424: 0x0  nop
    ctx->pc = 0x138424u;
    // NOP
    // 0x138428: 0x0  nop
    ctx->pc = 0x138428u;
    // NOP
    // 0x13842c: 0x0  nop
    ctx->pc = 0x13842cu;
    // NOP
    ctx->pc = 0x138430u;
}
