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

// Function: sub_0045EB60
// Address: 0x45eb60 - 0x45ebb0
void sub_0045EB60_0x45eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EB60_0x45eb60");
#endif

    switch (ctx->pc) {
        case 0x45eb78u: goto label_45eb78;
        case 0x45eb84u: goto label_45eb84;
        default: break;
    }

    ctx->pc = 0x45eb60u;

    // 0x45eb60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x45eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x45eb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45eb68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45eb6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x45eb70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x45EB70u;
    {
        const bool branch_taken_0x45eb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45eb70) {
            ctx->pc = 0x45EB90u;
            goto label_45eb90;
        }
    }
    ctx->pc = 0x45EB78u;
label_45eb78:
    // 0x45eb78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45eb7c: 0xc117aec  jal         func_45EBB0
    ctx->pc = 0x45EB7Cu;
    SET_GPR_U32(ctx, 31, 0x45EB84u);
    ctx->pc = 0x45EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EBB0u, 0x45EB7Cu, 0x45EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EB84u;
label_45eb84:
    // 0x45eb84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45eb88: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x45eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x45eb8c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x45eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_45eb90:
    // 0x45eb90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45eb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45eb94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45eb98: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x45EB98u;
    {
        const bool branch_taken_0x45eb98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x45eb98) {
            ctx->pc = 0x45EB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45eb78;
        }
    }
    ctx->pc = 0x45EBA0u;
    // 0x45eba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45eba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45eba4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x45eba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45eba8: 0x3e00008  jr          $ra
    ctx->pc = 0x45EBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EBB0u;
}
