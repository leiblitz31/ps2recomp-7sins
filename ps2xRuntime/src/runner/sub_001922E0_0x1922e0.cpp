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

// Function: sub_001922E0
// Address: 0x1922e0 - 0x192330
void sub_001922E0_0x1922e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001922E0_0x1922e0");
#endif

    switch (ctx->pc) {
        case 0x1922f8u: goto label_1922f8;
        default: break;
    }

    ctx->pc = 0x1922e0u;

    // 0x1922e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1922e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1922e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1922e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1922e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1922e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1922ec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1922ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1922f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1922F0u;
    {
        const bool branch_taken_0x1922f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1922f0) {
            ctx->pc = 0x192314u;
            goto label_192314;
        }
    }
    ctx->pc = 0x1922F8u;
label_1922f8:
    // 0x1922f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1922f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1922fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1922fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192300: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x192300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192304: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x192304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x192308: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x192308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19230c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x192310: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x192310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_192314:
    // 0x192314: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x192314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192318: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x192318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19231c: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19231Cu;
    {
        const bool branch_taken_0x19231c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19231c) {
            ctx->pc = 0x1922F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1922f8;
        }
    }
    ctx->pc = 0x192324u;
    // 0x192324: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x192324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192328: 0x3e00008  jr          $ra
    ctx->pc = 0x192328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192330u;
}
