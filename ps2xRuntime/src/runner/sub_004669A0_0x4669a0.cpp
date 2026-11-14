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

// Function: sub_004669A0
// Address: 0x4669a0 - 0x4669f0
void sub_004669A0_0x4669a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004669A0_0x4669a0");
#endif

    switch (ctx->pc) {
        case 0x4669b8u: goto label_4669b8;
        case 0x4669c4u: goto label_4669c4;
        default: break;
    }

    ctx->pc = 0x4669a0u;

    // 0x4669a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4669a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4669a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4669a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4669a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4669a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4669ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4669acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4669b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4669B0u;
    {
        const bool branch_taken_0x4669b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4669b0) {
            ctx->pc = 0x4669D0u;
            goto label_4669d0;
        }
    }
    ctx->pc = 0x4669B8u;
label_4669b8:
    // 0x4669b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4669b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4669bc: 0xc119a7c  jal         func_4669F0
    ctx->pc = 0x4669BCu;
    SET_GPR_U32(ctx, 31, 0x4669C4u);
    ctx->pc = 0x4669F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4669F0u, 0x4669BCu, 0x4669C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4669C4u;
label_4669c4:
    // 0x4669c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4669c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4669c8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4669c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4669cc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4669ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_4669d0:
    // 0x4669d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4669d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4669d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4669d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4669d8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4669D8u;
    {
        const bool branch_taken_0x4669d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4669d8) {
            ctx->pc = 0x4669B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4669b8;
        }
    }
    ctx->pc = 0x4669E0u;
    // 0x4669e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4669e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4669e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4669e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4669e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4669E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4669E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4669F0u;
}
