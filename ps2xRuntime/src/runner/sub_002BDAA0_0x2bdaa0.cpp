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

// Function: sub_002BDAA0
// Address: 0x2bdaa0 - 0x2bdaf0
void sub_002BDAA0_0x2bdaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDAA0_0x2bdaa0");
#endif

    switch (ctx->pc) {
        case 0x2bdab8u: goto label_2bdab8;
        case 0x2bdac4u: goto label_2bdac4;
        default: break;
    }

    ctx->pc = 0x2bdaa0u;

    // 0x2bdaa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bdaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bdaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdaa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bdaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bdaac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bdaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bdab0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDAB0u;
    {
        const bool branch_taken_0x2bdab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdab0) {
            ctx->pc = 0x2BDAD0u;
            goto label_2bdad0;
        }
    }
    ctx->pc = 0x2BDAB8u;
label_2bdab8:
    // 0x2bdab8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bdab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdabc: 0xc0addd8  jal         func_2B7760
    ctx->pc = 0x2BDABCu;
    SET_GPR_U32(ctx, 31, 0x2BDAC4u);
    ctx->pc = 0x2B7760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7760u, 0x2BDABCu, 0x2BDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAC4u;
label_2bdac4:
    // 0x2bdac4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2bdac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdac8: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x2bdac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2bdacc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2bdaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2bdad0:
    // 0x2bdad0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bdad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdad4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2bdad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdad8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BDAD8u;
    {
        const bool branch_taken_0x2bdad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bdad8) {
            ctx->pc = 0x2BDAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bdab8;
        }
    }
    ctx->pc = 0x2BDAE0u;
    // 0x2bdae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdae4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2bdae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bdae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDAF0u;
}
