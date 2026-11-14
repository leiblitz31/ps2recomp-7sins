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

// Function: sub_00490D90
// Address: 0x490d90 - 0x490de0
void sub_00490D90_0x490d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490D90_0x490d90");
#endif

    switch (ctx->pc) {
        case 0x490da8u: goto label_490da8;
        case 0x490db4u: goto label_490db4;
        default: break;
    }

    ctx->pc = 0x490d90u;

    // 0x490d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x490d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x490d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x490d9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x490d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x490da0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x490DA0u;
    {
        const bool branch_taken_0x490da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490da0) {
            ctx->pc = 0x490DC0u;
            goto label_490dc0;
        }
    }
    ctx->pc = 0x490DA8u;
label_490da8:
    // 0x490da8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490dac: 0xc124378  jal         func_490DE0
    ctx->pc = 0x490DACu;
    SET_GPR_U32(ctx, 31, 0x490DB4u);
    ctx->pc = 0x490DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490DE0u, 0x490DACu, 0x490DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490DB4u;
label_490db4:
    // 0x490db4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x490db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490db8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x490db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x490dbc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x490dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_490dc0:
    // 0x490dc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490dc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x490dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490dc8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x490DC8u;
    {
        const bool branch_taken_0x490dc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x490dc8) {
            ctx->pc = 0x490DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490da8;
        }
    }
    ctx->pc = 0x490DD0u;
    // 0x490dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490dd4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x490dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x490dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x490DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490DE0u;
}
