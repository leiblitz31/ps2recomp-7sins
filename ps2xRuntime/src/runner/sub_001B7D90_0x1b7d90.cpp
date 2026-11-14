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

// Function: sub_001B7D90
// Address: 0x1b7d90 - 0x1b7df0
void sub_001B7D90_0x1b7d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7D90_0x1b7d90");
#endif

    switch (ctx->pc) {
        case 0x1b7dacu: goto label_1b7dac;
        case 0x1b7dbcu: goto label_1b7dbc;
        default: break;
    }

    ctx->pc = 0x1b7d90u;

    // 0x1b7d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b7d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b7d9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b7da0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1b7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1b7da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7DA4u;
    {
        const bool branch_taken_0x1b7da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7da4) {
            ctx->pc = 0x1B7DC8u;
            goto label_1b7dc8;
        }
    }
    ctx->pc = 0x1B7DACu;
label_1b7dac:
    // 0x1b7dac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b7dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7db0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b7db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7db4: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B7DB4u;
    SET_GPR_U32(ctx, 31, 0x1B7DBCu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B7DB4u, 0x1B7DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DBCu;
label_1b7dbc:
    // 0x1b7dbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7dc0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1b7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b7dc4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1b7dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1b7dc8:
    // 0x1b7dc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7dcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b7dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7dd0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B7DD0u;
    {
        const bool branch_taken_0x1b7dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7dd0) {
            ctx->pc = 0x1B7DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7dac;
        }
    }
    ctx->pc = 0x1B7DD8u;
    // 0x1b7dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7ddc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b7ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7DE8u;
    // 0x1b7de8: 0x0  nop
    ctx->pc = 0x1b7de8u;
    // NOP
    // 0x1b7dec: 0x0  nop
    ctx->pc = 0x1b7decu;
    // NOP
    ctx->pc = 0x1b7df0u;
}
