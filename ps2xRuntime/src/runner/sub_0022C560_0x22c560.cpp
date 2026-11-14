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

// Function: sub_0022C560
// Address: 0x22c560 - 0x22c5b0
void sub_0022C560_0x22c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C560_0x22c560");
#endif

    switch (ctx->pc) {
        case 0x22c578u: goto label_22c578;
        case 0x22c584u: goto label_22c584;
        default: break;
    }

    ctx->pc = 0x22c560u;

    // 0x22c560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c568: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c56c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c570: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22C570u;
    {
        const bool branch_taken_0x22c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c570) {
            ctx->pc = 0x22C590u;
            goto label_22c590;
        }
    }
    ctx->pc = 0x22C578u;
label_22c578:
    // 0x22c578: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c57c: 0xc08b16c  jal         func_22C5B0
    ctx->pc = 0x22C57Cu;
    SET_GPR_U32(ctx, 31, 0x22C584u);
    ctx->pc = 0x22C5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C5B0u, 0x22C57Cu, 0x22C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C584u;
label_22c584:
    // 0x22c584: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22c584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c588: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x22c588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x22c58c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_22c590:
    // 0x22c590: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c594: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c598: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22C598u;
    {
        const bool branch_taken_0x22c598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c598) {
            ctx->pc = 0x22C578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c578;
        }
    }
    ctx->pc = 0x22C5A0u;
    // 0x22c5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c5a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22c5a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22C5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C5B0u;
}
