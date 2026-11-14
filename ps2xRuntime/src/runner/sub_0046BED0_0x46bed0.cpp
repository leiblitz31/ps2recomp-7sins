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

// Function: sub_0046BED0
// Address: 0x46bed0 - 0x46bf20
void sub_0046BED0_0x46bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BED0_0x46bed0");
#endif

    switch (ctx->pc) {
        case 0x46bee8u: goto label_46bee8;
        case 0x46bef4u: goto label_46bef4;
        default: break;
    }

    ctx->pc = 0x46bed0u;

    // 0x46bed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46bed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46bedc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46bee0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x46BEE0u;
    {
        const bool branch_taken_0x46bee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bee0) {
            ctx->pc = 0x46BF00u;
            goto label_46bf00;
        }
    }
    ctx->pc = 0x46BEE8u;
label_46bee8:
    // 0x46bee8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46beec: 0xc11afc8  jal         func_46BF20
    ctx->pc = 0x46BEECu;
    SET_GPR_U32(ctx, 31, 0x46BEF4u);
    ctx->pc = 0x46BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BF20u, 0x46BEECu, 0x46BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BEF4u;
label_46bef4:
    // 0x46bef4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bef8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x46bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x46befc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x46befcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_46bf00:
    // 0x46bf00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bf04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bf08: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x46BF08u;
    {
        const bool branch_taken_0x46bf08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46bf08) {
            ctx->pc = 0x46BEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46bee8;
        }
    }
    ctx->pc = 0x46BF10u;
    // 0x46bf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bf14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46bf14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46bf18: 0x3e00008  jr          $ra
    ctx->pc = 0x46BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BF20u;
}
