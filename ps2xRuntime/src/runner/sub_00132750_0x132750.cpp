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

// Function: sub_00132750
// Address: 0x132750 - 0x1327a0
void sub_00132750_0x132750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132750_0x132750");
#endif

    switch (ctx->pc) {
        case 0x132768u: goto label_132768;
        case 0x132774u: goto label_132774;
        default: break;
    }

    ctx->pc = 0x132750u;

    // 0x132750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x132758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13275c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13275cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x132760: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132760u;
    {
        const bool branch_taken_0x132760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132760) {
            ctx->pc = 0x132780u;
            goto label_132780;
        }
    }
    ctx->pc = 0x132768u;
label_132768:
    // 0x132768: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x132768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13276c: 0xc04c9e8  jal         func_1327A0
    ctx->pc = 0x13276Cu;
    SET_GPR_U32(ctx, 31, 0x132774u);
    ctx->pc = 0x1327A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327A0u, 0x13276Cu, 0x132774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132774u;
label_132774:
    // 0x132774: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x132774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132778: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x132778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13277c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x13277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_132780:
    // 0x132780: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x132780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132784: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x132784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132788: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x132788u;
    {
        const bool branch_taken_0x132788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x132788) {
            ctx->pc = 0x132768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132768;
        }
    }
    ctx->pc = 0x132790u;
    // 0x132790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132794: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x132794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x132798: 0x3e00008  jr          $ra
    ctx->pc = 0x132798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1327A0u;
}
