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

// Function: sub_00113780
// Address: 0x113780 - 0x1137b0
void sub_00113780_0x113780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113780_0x113780");
#endif

    switch (ctx->pc) {
        case 0x113798u: goto label_113798;
        default: break;
    }

    ctx->pc = 0x113780u;

    // 0x113780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11378c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11378cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113790: 0xc044dec  jal         func_1137B0
    ctx->pc = 0x113790u;
    SET_GPR_U32(ctx, 31, 0x113798u);
    ctx->pc = 0x1137B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137B0u, 0x113790u, 0x113798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113798u;
label_113798:
    // 0x113798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11379c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11379cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1137a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1137A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1137A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1137A8u;
    // 0x1137a8: 0x0  nop
    ctx->pc = 0x1137a8u;
    // NOP
    // 0x1137ac: 0x0  nop
    ctx->pc = 0x1137acu;
    // NOP
    ctx->pc = 0x1137b0u;
}
