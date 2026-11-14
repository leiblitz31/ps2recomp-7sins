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

// Function: sub_002943E0
// Address: 0x2943e0 - 0x294420
void sub_002943E0_0x2943e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002943E0_0x2943e0");
#endif

    switch (ctx->pc) {
        case 0x294404u: goto label_294404;
        default: break;
    }

    ctx->pc = 0x2943e0u;

    // 0x2943e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2943e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2943e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2943e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2943e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2943e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2943ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2943ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2943f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2943f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2943f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2943f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2943f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2943f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2943fc: 0xc0a5108  jal         func_294420
    ctx->pc = 0x2943FCu;
    SET_GPR_U32(ctx, 31, 0x294404u);
    ctx->pc = 0x294420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294420u, 0x2943FCu, 0x294404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294404u;
label_294404:
    // 0x294404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294408: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x294408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29440c: 0x3e00008  jr          $ra
    ctx->pc = 0x29440Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29440Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294414u;
    // 0x294414: 0x0  nop
    ctx->pc = 0x294414u;
    // NOP
    // 0x294418: 0x0  nop
    ctx->pc = 0x294418u;
    // NOP
    // 0x29441c: 0x0  nop
    ctx->pc = 0x29441cu;
    // NOP
    ctx->pc = 0x294420u;
}
