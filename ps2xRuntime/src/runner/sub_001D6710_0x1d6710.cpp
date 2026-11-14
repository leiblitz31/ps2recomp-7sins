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

// Function: sub_001D6710
// Address: 0x1d6710 - 0x1d6760
void sub_001D6710_0x1d6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6710_0x1d6710");
#endif

    switch (ctx->pc) {
        case 0x1d6728u: goto label_1d6728;
        case 0x1d6734u: goto label_1d6734;
        default: break;
    }

    ctx->pc = 0x1d6710u;

    // 0x1d6710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d671c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d6720: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6720u;
    {
        const bool branch_taken_0x1d6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6720) {
            ctx->pc = 0x1D6740u;
            goto label_1d6740;
        }
    }
    ctx->pc = 0x1D6728u;
label_1d6728:
    // 0x1d6728: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d672c: 0xc0759d8  jal         func_1D6760
    ctx->pc = 0x1D672Cu;
    SET_GPR_U32(ctx, 31, 0x1D6734u);
    ctx->pc = 0x1D6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6760u, 0x1D672Cu, 0x1D6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6734u;
label_1d6734:
    // 0x1d6734: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6738: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1d6738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1d673c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d673cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1d6740:
    // 0x1d6740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6744: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6748: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D6748u;
    {
        const bool branch_taken_0x1d6748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d6748) {
            ctx->pc = 0x1D6728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6728;
        }
    }
    ctx->pc = 0x1D6750u;
    // 0x1d6750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6754: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d6754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d6758: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6760u;
}
