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

// Function: sub_0013D3F0
// Address: 0x13d3f0 - 0x13d440
void sub_0013D3F0_0x13d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D3F0_0x13d3f0");
#endif

    switch (ctx->pc) {
        case 0x13d410u: goto label_13d410;
        default: break;
    }

    ctx->pc = 0x13d3f0u;

    // 0x13d3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d3f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d3fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13d400: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d404: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13d404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d408: 0xc04f510  jal         func_13D440
    ctx->pc = 0x13D408u;
    SET_GPR_U32(ctx, 31, 0x13D410u);
    ctx->pc = 0x13D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D440u, 0x13D408u, 0x13D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D410u;
label_13d410:
    // 0x13d410: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d414: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d41c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d428: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d42c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D434u;
    // 0x13d434: 0x0  nop
    ctx->pc = 0x13d434u;
    // NOP
    // 0x13d438: 0x0  nop
    ctx->pc = 0x13d438u;
    // NOP
    // 0x13d43c: 0x0  nop
    ctx->pc = 0x13d43cu;
    // NOP
    ctx->pc = 0x13d440u;
}
