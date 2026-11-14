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

// Function: sub_0027E3E0
// Address: 0x27e3e0 - 0x27e430
void sub_0027E3E0_0x27e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E3E0_0x27e3e0");
#endif

    switch (ctx->pc) {
        case 0x27e408u: goto label_27e408;
        case 0x27e41cu: goto label_27e41c;
        default: break;
    }

    ctx->pc = 0x27e3e0u;

    // 0x27e3e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27e3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e3e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27e3ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x27e3f0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x27e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x27e3f4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x27e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x27e3f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x27e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e3fc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x27e3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e400: 0xc0a0a1c  jal         func_282870
    ctx->pc = 0x27E400u;
    SET_GPR_U32(ctx, 31, 0x27E408u);
    ctx->pc = 0x282870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282870u, 0x27E400u, 0x27E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E408u;
label_27e408:
    // 0x27e408: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e40c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x27e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x27e410: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x27e410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27e414: 0xc09f90c  jal         func_27E430
    ctx->pc = 0x27E414u;
    SET_GPR_U32(ctx, 31, 0x27E41Cu);
    ctx->pc = 0x27E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E430u, 0x27E414u, 0x27E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E41Cu;
label_27e41c:
    // 0x27e41c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e420: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e424: 0x3e00008  jr          $ra
    ctx->pc = 0x27E424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E42Cu;
    // 0x27e42c: 0x0  nop
    ctx->pc = 0x27e42cu;
    // NOP
    ctx->pc = 0x27e430u;
}
