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

// Function: sub_0013C710
// Address: 0x13c710 - 0x13c760
void sub_0013C710_0x13c710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C710_0x13c710");
#endif

    switch (ctx->pc) {
        case 0x13c728u: goto label_13c728;
        default: break;
    }

    ctx->pc = 0x13c710u;

    // 0x13c710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c714: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13c714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13c718: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13c718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13c71c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x13c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x13c720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C720u;
    {
        const bool branch_taken_0x13c720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c720) {
            ctx->pc = 0x13C744u;
            goto label_13c744;
        }
    }
    ctx->pc = 0x13C728u;
label_13c728:
    // 0x13c728: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13c728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c72c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c730: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c734: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13c734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13c738: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c73c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x13c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13c740: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x13c740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_13c744:
    // 0x13c744: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x13c744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c748: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c74c: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x13C74Cu;
    {
        const bool branch_taken_0x13c74c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c74c) {
            ctx->pc = 0x13C728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c728;
        }
    }
    ctx->pc = 0x13C754u;
    // 0x13c754: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13c754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c758: 0x3e00008  jr          $ra
    ctx->pc = 0x13C758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C760u;
}
