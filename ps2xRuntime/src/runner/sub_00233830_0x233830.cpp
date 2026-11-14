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

// Function: sub_00233830
// Address: 0x233830 - 0x233880
void sub_00233830_0x233830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233830_0x233830");
#endif

    switch (ctx->pc) {
        case 0x233848u: goto label_233848;
        case 0x233854u: goto label_233854;
        default: break;
    }

    ctx->pc = 0x233830u;

    // 0x233830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23383c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23383cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x233840: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x233840u;
    {
        const bool branch_taken_0x233840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233840) {
            ctx->pc = 0x233860u;
            goto label_233860;
        }
    }
    ctx->pc = 0x233848u;
label_233848:
    // 0x233848: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23384c: 0xc08ce20  jal         func_233880
    ctx->pc = 0x23384Cu;
    SET_GPR_U32(ctx, 31, 0x233854u);
    ctx->pc = 0x233880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233880u, 0x23384Cu, 0x233854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233854u;
label_233854:
    // 0x233854: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233858: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x233858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x23385c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x23385cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_233860:
    // 0x233860: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233864: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x233864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233868: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x233868u;
    {
        const bool branch_taken_0x233868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x233868) {
            ctx->pc = 0x233848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233848;
        }
    }
    ctx->pc = 0x233870u;
    // 0x233870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233874: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x233874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x233878: 0x3e00008  jr          $ra
    ctx->pc = 0x233878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233880u;
}
