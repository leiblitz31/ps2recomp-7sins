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

// Function: sub_001D69A0
// Address: 0x1d69a0 - 0x1d69f0
void sub_001D69A0_0x1d69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D69A0_0x1d69a0");
#endif

    switch (ctx->pc) {
        case 0x1d69b8u: goto label_1d69b8;
        case 0x1d69c4u: goto label_1d69c4;
        default: break;
    }

    ctx->pc = 0x1d69a0u;

    // 0x1d69a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d69a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d69a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d69a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d69ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d69acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d69b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D69B0u;
    {
        const bool branch_taken_0x1d69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d69b0) {
            ctx->pc = 0x1D69D0u;
            goto label_1d69d0;
        }
    }
    ctx->pc = 0x1D69B8u;
label_1d69b8:
    // 0x1d69b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d69bc: 0xc075a7c  jal         func_1D69F0
    ctx->pc = 0x1D69BCu;
    SET_GPR_U32(ctx, 31, 0x1D69C4u);
    ctx->pc = 0x1D69F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69F0u, 0x1D69BCu, 0x1D69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69C4u;
label_1d69c4:
    // 0x1d69c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d69c8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d69cc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1d69d0:
    // 0x1d69d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d69d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d69d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d69d8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D69D8u;
    {
        const bool branch_taken_0x1d69d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d69d8) {
            ctx->pc = 0x1D69B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d69b8;
        }
    }
    ctx->pc = 0x1D69E0u;
    // 0x1d69e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d69e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d69e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d69e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d69e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D69E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D69E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D69F0u;
}
