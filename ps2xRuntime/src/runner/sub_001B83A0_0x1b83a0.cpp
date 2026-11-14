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

// Function: sub_001B83A0
// Address: 0x1b83a0 - 0x1b83f0
void sub_001B83A0_0x1b83a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B83A0_0x1b83a0");
#endif

    switch (ctx->pc) {
        case 0x1b83b8u: goto label_1b83b8;
        default: break;
    }

    ctx->pc = 0x1b83a0u;

    // 0x1b83a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b83a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b83a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1b83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1b83ac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1b83acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1b83b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B83B0u;
    {
        const bool branch_taken_0x1b83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b83b0) {
            ctx->pc = 0x1B83D4u;
            goto label_1b83d4;
        }
    }
    ctx->pc = 0x1B83B8u;
label_1b83b8:
    // 0x1b83b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b83bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b83bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b83c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b83c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b83c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b83c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b83cc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b83d0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1b83d4:
    // 0x1b83d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b83d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b83d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b83dc: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B83DCu;
    {
        const bool branch_taken_0x1b83dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b83dc) {
            ctx->pc = 0x1B83B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b83b8;
        }
    }
    ctx->pc = 0x1B83E4u;
    // 0x1b83e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b83e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b83e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B83E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B83E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B83F0u;
}
