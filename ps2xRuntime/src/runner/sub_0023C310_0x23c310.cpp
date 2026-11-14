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

// Function: sub_0023C310
// Address: 0x23c310 - 0x23c360
void sub_0023C310_0x23c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C310_0x23c310");
#endif

    switch (ctx->pc) {
        case 0x23c328u: goto label_23c328;
        case 0x23c334u: goto label_23c334;
        default: break;
    }

    ctx->pc = 0x23c310u;

    // 0x23c310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c31c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23c320: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23C320u;
    {
        const bool branch_taken_0x23c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c320) {
            ctx->pc = 0x23C340u;
            goto label_23c340;
        }
    }
    ctx->pc = 0x23C328u;
label_23c328:
    // 0x23c328: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c32c: 0xc08f0d8  jal         func_23C360
    ctx->pc = 0x23C32Cu;
    SET_GPR_U32(ctx, 31, 0x23C334u);
    ctx->pc = 0x23C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C360u, 0x23C32Cu, 0x23C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C334u;
label_23c334:
    // 0x23c334: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c338: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x23c338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x23c33c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x23c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_23c340:
    // 0x23c340: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c344: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c348: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23C348u;
    {
        const bool branch_taken_0x23c348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23c348) {
            ctx->pc = 0x23C328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c328;
        }
    }
    ctx->pc = 0x23C350u;
    // 0x23c350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c354: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23c358: 0x3e00008  jr          $ra
    ctx->pc = 0x23C358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C360u;
}
