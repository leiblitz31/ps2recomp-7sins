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

// Function: sub_00189270
// Address: 0x189270 - 0x1892c0
void sub_00189270_0x189270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189270_0x189270");
#endif

    switch (ctx->pc) {
        case 0x189288u: goto label_189288;
        case 0x189294u: goto label_189294;
        default: break;
    }

    ctx->pc = 0x189270u;

    // 0x189270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18927c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18927cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x189280: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x189280u;
    {
        const bool branch_taken_0x189280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189280) {
            ctx->pc = 0x1892A0u;
            goto label_1892a0;
        }
    }
    ctx->pc = 0x189288u;
label_189288:
    // 0x189288: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18928c: 0xc0624b0  jal         func_1892C0
    ctx->pc = 0x18928Cu;
    SET_GPR_U32(ctx, 31, 0x189294u);
    ctx->pc = 0x1892C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892C0u, 0x18928Cu, 0x189294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189294u;
label_189294:
    // 0x189294: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x189294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189298: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x18929c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x18929cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1892a0:
    // 0x1892a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1892a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1892a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1892a8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1892A8u;
    {
        const bool branch_taken_0x1892a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1892a8) {
            ctx->pc = 0x189288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189288;
        }
    }
    ctx->pc = 0x1892B0u;
    // 0x1892b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1892b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1892b4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1892b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1892b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1892B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1892B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1892C0u;
}
