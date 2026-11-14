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

// Function: sub_001C6850
// Address: 0x1c6850 - 0x1c68b0
void sub_001C6850_0x1c6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6850_0x1c6850");
#endif

    switch (ctx->pc) {
        case 0x1c6870u: goto label_1c6870;
        case 0x1c6898u: goto label_1c6898;
        default: break;
    }

    ctx->pc = 0x1c6850u;

    // 0x1c6850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6858: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c6858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c685c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c6860: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c6860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c6864: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6864u;
    {
        const bool branch_taken_0x1c6864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6864) {
            ctx->pc = 0x1C688Cu;
            goto label_1c688c;
        }
    }
    ctx->pc = 0x1C686Cu;
    // 0x1c686c: 0x602821  addu        $a1, $v1, $zero
    ctx->pc = 0x1c686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_1c6870:
    // 0x1c6870: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1c6870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c6874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c6878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c6878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c687c: 0x0  nop
    ctx->pc = 0x1c687cu;
    // NOP
    // 0x1c6880: 0x0  nop
    ctx->pc = 0x1c6880u;
    // NOP
    // 0x1c6884: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C6884u;
    {
        const bool branch_taken_0x1c6884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6884) {
            ctx->pc = 0x1C6870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6870;
        }
    }
    ctx->pc = 0x1C688Cu;
label_1c688c:
    // 0x1c688c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6890: 0xc071a2c  jal         func_1C68B0
    ctx->pc = 0x1C6890u;
    SET_GPR_U32(ctx, 31, 0x1C6898u);
    ctx->pc = 0x1C68B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C68B0u, 0x1C6890u, 0x1C6898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6898u;
label_1c6898:
    // 0x1c6898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c689c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c689cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c68a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C68A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C68A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C68A8u;
    // 0x1c68a8: 0x0  nop
    ctx->pc = 0x1c68a8u;
    // NOP
    // 0x1c68ac: 0x0  nop
    ctx->pc = 0x1c68acu;
    // NOP
    ctx->pc = 0x1c68b0u;
}
