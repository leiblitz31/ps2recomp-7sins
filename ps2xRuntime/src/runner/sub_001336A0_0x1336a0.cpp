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

// Function: sub_001336A0
// Address: 0x1336a0 - 0x1336f0
void sub_001336A0_0x1336a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001336A0_0x1336a0");
#endif

    switch (ctx->pc) {
        case 0x1336b8u: goto label_1336b8;
        case 0x1336c4u: goto label_1336c4;
        default: break;
    }

    ctx->pc = 0x1336a0u;

    // 0x1336a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1336a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1336a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1336a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1336a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1336a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1336ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1336acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1336b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1336B0u;
    {
        const bool branch_taken_0x1336b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1336b0) {
            ctx->pc = 0x1336D0u;
            goto label_1336d0;
        }
    }
    ctx->pc = 0x1336B8u;
label_1336b8:
    // 0x1336b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1336b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1336bc: 0xc04cdbc  jal         func_1336F0
    ctx->pc = 0x1336BCu;
    SET_GPR_U32(ctx, 31, 0x1336C4u);
    ctx->pc = 0x1336F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1336F0u, 0x1336BCu, 0x1336C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336C4u;
label_1336c4:
    // 0x1336c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1336c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1336c8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1336c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1336cc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1336ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1336d0:
    // 0x1336d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1336d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1336d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1336d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1336d8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1336D8u;
    {
        const bool branch_taken_0x1336d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1336d8) {
            ctx->pc = 0x1336B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1336b8;
        }
    }
    ctx->pc = 0x1336E0u;
    // 0x1336e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1336e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1336e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1336e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1336e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1336E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1336E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1336F0u;
}
