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

// Function: sub_002231E0
// Address: 0x2231e0 - 0x223230
void sub_002231E0_0x2231e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002231E0_0x2231e0");
#endif

    switch (ctx->pc) {
        case 0x2231f8u: goto label_2231f8;
        case 0x223204u: goto label_223204;
        default: break;
    }

    ctx->pc = 0x2231e0u;

    // 0x2231e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2231e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2231e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2231e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2231e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2231e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2231ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2231ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2231f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2231F0u;
    {
        const bool branch_taken_0x2231f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2231f0) {
            ctx->pc = 0x223210u;
            goto label_223210;
        }
    }
    ctx->pc = 0x2231F8u;
label_2231f8:
    // 0x2231f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2231f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2231fc: 0xc088840  jal         func_222100
    ctx->pc = 0x2231FCu;
    SET_GPR_U32(ctx, 31, 0x223204u);
    ctx->pc = 0x222100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222100u, 0x2231FCu, 0x223204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223204u;
label_223204:
    // 0x223204: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x223204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223208: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x223208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x22320c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22320cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_223210:
    // 0x223210: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223214: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x223214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223218: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x223218u;
    {
        const bool branch_taken_0x223218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x223218) {
            ctx->pc = 0x2231F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2231f8;
        }
    }
    ctx->pc = 0x223220u;
    // 0x223220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223224: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x223224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x223228: 0x3e00008  jr          $ra
    ctx->pc = 0x223228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223230u;
}
