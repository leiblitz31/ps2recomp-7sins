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

// Function: sub_0019D2D0
// Address: 0x19d2d0 - 0x19d330
void sub_0019D2D0_0x19d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D2D0_0x19d2d0");
#endif

    switch (ctx->pc) {
        case 0x19d2ecu: goto label_19d2ec;
        case 0x19d2fcu: goto label_19d2fc;
        default: break;
    }

    ctx->pc = 0x19d2d0u;

    // 0x19d2d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19d2dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19d2e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x19d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x19d2e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19D2E4u;
    {
        const bool branch_taken_0x19d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d2e4) {
            ctx->pc = 0x19D308u;
            goto label_19d308;
        }
    }
    ctx->pc = 0x19D2ECu;
label_19d2ec:
    // 0x19d2ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d2f0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d2f4: 0xc065c64  jal         func_197190
    ctx->pc = 0x19D2F4u;
    SET_GPR_U32(ctx, 31, 0x19D2FCu);
    ctx->pc = 0x197190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197190u, 0x19D2F4u, 0x19D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D2FCu;
label_19d2fc:
    // 0x19d2fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d300: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x19d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19d304: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x19d304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_19d308:
    // 0x19d308: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19d308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d30c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d310: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19D310u;
    {
        const bool branch_taken_0x19d310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d310) {
            ctx->pc = 0x19D2ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d2ec;
        }
    }
    ctx->pc = 0x19D318u;
    // 0x19d318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d31c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19d320: 0x3e00008  jr          $ra
    ctx->pc = 0x19D320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D328u;
    // 0x19d328: 0x0  nop
    ctx->pc = 0x19d328u;
    // NOP
    // 0x19d32c: 0x0  nop
    ctx->pc = 0x19d32cu;
    // NOP
    ctx->pc = 0x19d330u;
}
