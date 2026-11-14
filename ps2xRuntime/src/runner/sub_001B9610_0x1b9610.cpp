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

// Function: sub_001B9610
// Address: 0x1b9610 - 0x1b9660
void sub_001B9610_0x1b9610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9610_0x1b9610");
#endif

    switch (ctx->pc) {
        case 0x1b9628u: goto label_1b9628;
        case 0x1b9634u: goto label_1b9634;
        default: break;
    }

    ctx->pc = 0x1b9610u;

    // 0x1b9610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b961c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b961cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b9620: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9620u;
    {
        const bool branch_taken_0x1b9620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9620) {
            ctx->pc = 0x1B9640u;
            goto label_1b9640;
        }
    }
    ctx->pc = 0x1B9628u;
label_1b9628:
    // 0x1b9628: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b962c: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x1B962Cu;
    SET_GPR_U32(ctx, 31, 0x1B9634u);
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x1B962Cu, 0x1B9634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9634u;
label_1b9634:
    // 0x1b9634: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b9634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9638: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1b963c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1b963cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1b9640:
    // 0x1b9640: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9644: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b9644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9648: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B9648u;
    {
        const bool branch_taken_0x1b9648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9648) {
            ctx->pc = 0x1B9628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9628;
        }
    }
    ctx->pc = 0x1B9650u;
    // 0x1b9650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9654: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b9654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9658: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9660u;
}
