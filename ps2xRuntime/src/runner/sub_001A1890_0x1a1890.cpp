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

// Function: sub_001A1890
// Address: 0x1a1890 - 0x1a18e0
void sub_001A1890_0x1a1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1890_0x1a1890");
#endif

    switch (ctx->pc) {
        case 0x1a18a8u: goto label_1a18a8;
        default: break;
    }

    ctx->pc = 0x1a1890u;

    // 0x1a1890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1894: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a1894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a1898: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a1898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1a189c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1a189cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1a18a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A18A0u;
    {
        const bool branch_taken_0x1a18a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a18a0) {
            ctx->pc = 0x1A18C4u;
            goto label_1a18c4;
        }
    }
    ctx->pc = 0x1A18A8u;
label_1a18a8:
    // 0x1a18a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a18ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a18acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a18b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a18b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a18b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a18b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a18bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a18c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a18c4:
    // 0x1a18c4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a18c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a18cc: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A18CCu;
    {
        const bool branch_taken_0x1a18cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a18cc) {
            ctx->pc = 0x1A18A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a18a8;
        }
    }
    ctx->pc = 0x1A18D4u;
    // 0x1a18d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a18d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a18d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A18D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A18D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A18E0u;
}
