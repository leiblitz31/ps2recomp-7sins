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

// Function: sub_001DFCB0
// Address: 0x1dfcb0 - 0x1dfd00
void sub_001DFCB0_0x1dfcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFCB0_0x1dfcb0");
#endif

    switch (ctx->pc) {
        case 0x1dfcccu: goto label_1dfccc;
        case 0x1dfcdcu: goto label_1dfcdc;
        case 0x1dfcecu: goto label_1dfcec;
        default: break;
    }

    ctx->pc = 0x1dfcb0u;

    // 0x1dfcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfcb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfcb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1dfcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1dfcbc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1dfcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1dfcc0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1dfcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfcc4: 0xc077f90  jal         func_1DFE40
    ctx->pc = 0x1DFCC4u;
    SET_GPR_U32(ctx, 31, 0x1DFCCCu);
    ctx->pc = 0x1DFE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE40u, 0x1DFCC4u, 0x1DFCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCCCu;
label_1dfccc:
    // 0x1dfccc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dfcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dfcd0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1dfcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfcd4: 0xc077f64  jal         func_1DFD90
    ctx->pc = 0x1DFCD4u;
    SET_GPR_U32(ctx, 31, 0x1DFCDCu);
    ctx->pc = 0x1DFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD90u, 0x1DFCD4u, 0x1DFCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCDCu;
label_1dfcdc:
    // 0x1dfcdc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1dfcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1dfce0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1dfce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dfce4: 0xc077f40  jal         func_1DFD00
    ctx->pc = 0x1DFCE4u;
    SET_GPR_U32(ctx, 31, 0x1DFCECu);
    ctx->pc = 0x1DFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD00u, 0x1DFCE4u, 0x1DFCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCECu;
label_1dfcec:
    // 0x1dfcec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfcf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dfcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dfcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFCFCu;
    // 0x1dfcfc: 0x0  nop
    ctx->pc = 0x1dfcfcu;
    // NOP
    ctx->pc = 0x1dfd00u;
}
