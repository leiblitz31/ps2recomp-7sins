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

// Function: sub_00136860
// Address: 0x136860 - 0x1368b0
void sub_00136860_0x136860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136860_0x136860");
#endif

    switch (ctx->pc) {
        case 0x136878u: goto label_136878;
        case 0x136884u: goto label_136884;
        default: break;
    }

    ctx->pc = 0x136860u;

    // 0x136860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x136868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13686c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13686cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x136870: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x136870u;
    {
        const bool branch_taken_0x136870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136870) {
            ctx->pc = 0x136890u;
            goto label_136890;
        }
    }
    ctx->pc = 0x136878u;
label_136878:
    // 0x136878: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x136878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13687c: 0xc04da2c  jal         func_1368B0
    ctx->pc = 0x13687Cu;
    SET_GPR_U32(ctx, 31, 0x136884u);
    ctx->pc = 0x1368B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368B0u, 0x13687Cu, 0x136884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136884u;
label_136884:
    // 0x136884: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x136884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136888: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x136888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x13688c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x13688cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_136890:
    // 0x136890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x136890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136894: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x136894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136898: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x136898u;
    {
        const bool branch_taken_0x136898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136898) {
            ctx->pc = 0x136878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136878;
        }
    }
    ctx->pc = 0x1368A0u;
    // 0x1368a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1368a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1368a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1368a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1368a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1368A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1368A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1368B0u;
}
