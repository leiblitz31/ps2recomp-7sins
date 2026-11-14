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

// Function: sub_0022C2F0
// Address: 0x22c2f0 - 0x22c340
void sub_0022C2F0_0x22c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C2F0_0x22c2f0");
#endif

    switch (ctx->pc) {
        case 0x22c308u: goto label_22c308;
        case 0x22c314u: goto label_22c314;
        default: break;
    }

    ctx->pc = 0x22c2f0u;

    // 0x22c2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c2fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22C300u;
    {
        const bool branch_taken_0x22c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c300) {
            ctx->pc = 0x22C320u;
            goto label_22c320;
        }
    }
    ctx->pc = 0x22C308u;
label_22c308:
    // 0x22c308: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c30c: 0xc08b0d0  jal         func_22C340
    ctx->pc = 0x22C30Cu;
    SET_GPR_U32(ctx, 31, 0x22C314u);
    ctx->pc = 0x22C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C340u, 0x22C30Cu, 0x22C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C314u;
label_22c314:
    // 0x22c314: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c318: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x22c318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x22c31c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_22c320:
    // 0x22c320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c324: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c328: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22C328u;
    {
        const bool branch_taken_0x22c328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c328) {
            ctx->pc = 0x22C308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c308;
        }
    }
    ctx->pc = 0x22C330u;
    // 0x22c330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c334: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22c334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c338: 0x3e00008  jr          $ra
    ctx->pc = 0x22C338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C340u;
}
