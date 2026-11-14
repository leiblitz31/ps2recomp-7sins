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

// Function: sub_001CEDC0
// Address: 0x1cedc0 - 0x1cee10
void sub_001CEDC0_0x1cedc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEDC0_0x1cedc0");
#endif

    switch (ctx->pc) {
        case 0x1cedd8u: goto label_1cedd8;
        case 0x1cede4u: goto label_1cede4;
        default: break;
    }

    ctx->pc = 0x1cedc0u;

    // 0x1cedc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cedc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cedc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cedc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cedc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cedcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1cedccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1cedd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEDD0u;
    {
        const bool branch_taken_0x1cedd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cedd0) {
            ctx->pc = 0x1CEDF0u;
            goto label_1cedf0;
        }
    }
    ctx->pc = 0x1CEDD8u;
label_1cedd8:
    // 0x1cedd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceddc: 0xc073b84  jal         func_1CEE10
    ctx->pc = 0x1CEDDCu;
    SET_GPR_U32(ctx, 31, 0x1CEDE4u);
    ctx->pc = 0x1CEE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEE10u, 0x1CEDDCu, 0x1CEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDE4u;
label_1cede4:
    // 0x1cede4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1cede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cede8: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x1cede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1cedec: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1cedecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1cedf0:
    // 0x1cedf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cedf4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cedf8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CEDF8u;
    {
        const bool branch_taken_0x1cedf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cedf8) {
            ctx->pc = 0x1CEDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cedd8;
        }
    }
    ctx->pc = 0x1CEE00u;
    // 0x1cee00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cee00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cee04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1cee04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cee08: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE10u;
}
