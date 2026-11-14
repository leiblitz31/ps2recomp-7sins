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

// Function: sub_0025CCF0
// Address: 0x25ccf0 - 0x25cd40
void sub_0025CCF0_0x25ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CCF0_0x25ccf0");
#endif

    switch (ctx->pc) {
        case 0x25cd08u: goto label_25cd08;
        default: break;
    }

    ctx->pc = 0x25ccf0u;

    // 0x25ccf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25ccf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25ccf8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25ccfc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x25ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x25cd00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25CD00u;
    {
        const bool branch_taken_0x25cd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cd00) {
            ctx->pc = 0x25CD24u;
            goto label_25cd24;
        }
    }
    ctx->pc = 0x25CD08u;
label_25cd08:
    // 0x25cd08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cd0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cd10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd14: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25cd14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x25cd18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd1c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25cd20: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x25cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_25cd24:
    // 0x25cd24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cd2c: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x25CD2Cu;
    {
        const bool branch_taken_0x25cd2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25cd2c) {
            ctx->pc = 0x25CD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cd08;
        }
    }
    ctx->pc = 0x25CD34u;
    // 0x25cd34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25cd34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25cd38: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CD40u;
}
