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

// Function: sub_0025D810
// Address: 0x25d810 - 0x25d860
void sub_0025D810_0x25d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D810_0x25d810");
#endif

    switch (ctx->pc) {
        case 0x25d828u: goto label_25d828;
        case 0x25d834u: goto label_25d834;
        default: break;
    }

    ctx->pc = 0x25d810u;

    // 0x25d810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25d814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d81c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25d820: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25D820u;
    {
        const bool branch_taken_0x25d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d820) {
            ctx->pc = 0x25D840u;
            goto label_25d840;
        }
    }
    ctx->pc = 0x25D828u;
label_25d828:
    // 0x25d828: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d82c: 0xc097618  jal         func_25D860
    ctx->pc = 0x25D82Cu;
    SET_GPR_U32(ctx, 31, 0x25D834u);
    ctx->pc = 0x25D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D860u, 0x25D82Cu, 0x25D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D834u;
label_25d834:
    // 0x25d834: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d838: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x25d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x25d83c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x25d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_25d840:
    // 0x25d840: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d844: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d848: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25D848u;
    {
        const bool branch_taken_0x25d848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25d848) {
            ctx->pc = 0x25D828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d828;
        }
    }
    ctx->pc = 0x25D850u;
    // 0x25d850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d854: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25d854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25d858: 0x3e00008  jr          $ra
    ctx->pc = 0x25D858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D860u;
}
