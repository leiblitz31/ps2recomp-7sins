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

// Function: sub_002DFD20
// Address: 0x2dfd20 - 0x2dfd70
void sub_002DFD20_0x2dfd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFD20_0x2dfd20");
#endif

    switch (ctx->pc) {
        case 0x2dfd38u: goto label_2dfd38;
        case 0x2dfd44u: goto label_2dfd44;
        default: break;
    }

    ctx->pc = 0x2dfd20u;

    // 0x2dfd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dfd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dfd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfd28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dfd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dfd2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2dfd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2dfd30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFD30u;
    {
        const bool branch_taken_0x2dfd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfd30) {
            ctx->pc = 0x2DFD50u;
            goto label_2dfd50;
        }
    }
    ctx->pc = 0x2DFD38u;
label_2dfd38:
    // 0x2dfd38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dfd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfd3c: 0xc0b7f5c  jal         func_2DFD70
    ctx->pc = 0x2DFD3Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD44u);
    ctx->pc = 0x2DFD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFD70u, 0x2DFD3Cu, 0x2DFD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD44u;
label_2dfd44:
    // 0x2dfd44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2dfd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfd48: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2dfd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2dfd4c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2dfd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2dfd50:
    // 0x2dfd50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dfd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfd54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2dfd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfd58: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DFD58u;
    {
        const bool branch_taken_0x2dfd58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dfd58) {
            ctx->pc = 0x2DFD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dfd38;
        }
    }
    ctx->pc = 0x2DFD60u;
    // 0x2dfd60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfd64: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dfd64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dfd68: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFD70u;
}
