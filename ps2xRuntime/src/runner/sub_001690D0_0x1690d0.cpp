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

// Function: sub_001690D0
// Address: 0x1690d0 - 0x169120
void sub_001690D0_0x1690d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001690D0_0x1690d0");
#endif

    switch (ctx->pc) {
        case 0x1690e8u: goto label_1690e8;
        case 0x1690f4u: goto label_1690f4;
        default: break;
    }

    ctx->pc = 0x1690d0u;

    // 0x1690d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1690d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1690d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1690d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1690d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1690d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1690dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1690dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1690e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1690E0u;
    {
        const bool branch_taken_0x1690e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1690e0) {
            ctx->pc = 0x169100u;
            goto label_169100;
        }
    }
    ctx->pc = 0x1690E8u;
label_1690e8:
    // 0x1690e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1690e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1690ec: 0xc05a448  jal         func_169120
    ctx->pc = 0x1690ECu;
    SET_GPR_U32(ctx, 31, 0x1690F4u);
    ctx->pc = 0x169120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169120u, 0x1690ECu, 0x1690F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690F4u;
label_1690f4:
    // 0x1690f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1690f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1690f8: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1690f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1690fc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1690fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_169100:
    // 0x169100: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169104: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x169104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169108: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x169108u;
    {
        const bool branch_taken_0x169108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169108) {
            ctx->pc = 0x1690E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1690e8;
        }
    }
    ctx->pc = 0x169110u;
    // 0x169110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169114: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x169114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x169118: 0x3e00008  jr          $ra
    ctx->pc = 0x169118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169120u;
}
