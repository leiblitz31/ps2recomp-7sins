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

// Function: sub_001D6080
// Address: 0x1d6080 - 0x1d60d0
void sub_001D6080_0x1d6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6080_0x1d6080");
#endif

    switch (ctx->pc) {
        case 0x1d6098u: goto label_1d6098;
        case 0x1d60a4u: goto label_1d60a4;
        default: break;
    }

    ctx->pc = 0x1d6080u;

    // 0x1d6080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6088: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d608c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d6090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6090u;
    {
        const bool branch_taken_0x1d6090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6090) {
            ctx->pc = 0x1D60B0u;
            goto label_1d60b0;
        }
    }
    ctx->pc = 0x1D6098u;
label_1d6098:
    // 0x1d6098: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d609c: 0xc075834  jal         func_1D60D0
    ctx->pc = 0x1D609Cu;
    SET_GPR_U32(ctx, 31, 0x1D60A4u);
    ctx->pc = 0x1D60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D60D0u, 0x1D609Cu, 0x1D60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60A4u;
label_1d60a4:
    // 0x1d60a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d60a8: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d60ac: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d60acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1d60b0:
    // 0x1d60b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d60b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d60b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d60b8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D60B8u;
    {
        const bool branch_taken_0x1d60b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d60b8) {
            ctx->pc = 0x1D6098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6098;
        }
    }
    ctx->pc = 0x1D60C0u;
    // 0x1d60c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d60c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d60c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d60c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D60C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D60C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D60D0u;
}
