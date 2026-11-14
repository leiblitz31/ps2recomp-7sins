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

// Function: sub_001137D0
// Address: 0x1137d0 - 0x113810
void sub_001137D0_0x1137d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001137D0_0x1137d0");
#endif

    switch (ctx->pc) {
        case 0x1137f0u: goto label_1137f0;
        default: break;
    }

    ctx->pc = 0x1137d0u;

    // 0x1137d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1137d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1137d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1137d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1137d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1137dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1137dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1137e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1137e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1137e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1137e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1137e8: 0xc044e04  jal         func_113810
    ctx->pc = 0x1137E8u;
    SET_GPR_U32(ctx, 31, 0x1137F0u);
    ctx->pc = 0x113810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113810u, 0x1137E8u, 0x1137F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137F0u;
label_1137f0:
    // 0x1137f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1137f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1137f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1137f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1137f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1137f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1137fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1137FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1137FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113804u;
    // 0x113804: 0x0  nop
    ctx->pc = 0x113804u;
    // NOP
    // 0x113808: 0x0  nop
    ctx->pc = 0x113808u;
    // NOP
    // 0x11380c: 0x0  nop
    ctx->pc = 0x11380cu;
    // NOP
    ctx->pc = 0x113810u;
}
