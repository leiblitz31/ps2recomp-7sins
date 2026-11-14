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

// Function: sub_001DFE40
// Address: 0x1dfe40 - 0x1dfe80
void sub_001DFE40_0x1dfe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFE40_0x1dfe40");
#endif

    switch (ctx->pc) {
        case 0x1dfe64u: goto label_1dfe64;
        default: break;
    }

    ctx->pc = 0x1dfe40u;

    // 0x1dfe40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfe44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfe48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dfe48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dfe4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1dfe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1dfe50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfe54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1dfe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfe58: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1dfe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dfe5c: 0xc077f70  jal         func_1DFDC0
    ctx->pc = 0x1DFE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DFE64u);
    ctx->pc = 0x1DFDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFDC0u, 0x1DFE5Cu, 0x1DFE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE64u;
label_1dfe64:
    // 0x1dfe64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfe68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dfe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dfe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFE74u;
    // 0x1dfe74: 0x0  nop
    ctx->pc = 0x1dfe74u;
    // NOP
    // 0x1dfe78: 0x0  nop
    ctx->pc = 0x1dfe78u;
    // NOP
    // 0x1dfe7c: 0x0  nop
    ctx->pc = 0x1dfe7cu;
    // NOP
    ctx->pc = 0x1dfe80u;
}
