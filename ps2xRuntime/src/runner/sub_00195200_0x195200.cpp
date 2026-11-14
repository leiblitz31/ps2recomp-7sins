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

// Function: sub_00195200
// Address: 0x195200 - 0x195250
void sub_00195200_0x195200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195200_0x195200");
#endif

    switch (ctx->pc) {
        case 0x195218u: goto label_195218;
        case 0x195224u: goto label_195224;
        default: break;
    }

    ctx->pc = 0x195200u;

    // 0x195200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19520c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19520cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x195210: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195210u;
    {
        const bool branch_taken_0x195210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195210) {
            ctx->pc = 0x195230u;
            goto label_195230;
        }
    }
    ctx->pc = 0x195218u;
label_195218:
    // 0x195218: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19521c: 0xc065494  jal         func_195250
    ctx->pc = 0x19521Cu;
    SET_GPR_U32(ctx, 31, 0x195224u);
    ctx->pc = 0x195250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195250u, 0x19521Cu, 0x195224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195224u;
label_195224:
    // 0x195224: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x195224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195228: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x195228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19522c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x19522cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_195230:
    // 0x195230: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195234: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195238: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x195238u;
    {
        const bool branch_taken_0x195238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195238) {
            ctx->pc = 0x195218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195218;
        }
    }
    ctx->pc = 0x195240u;
    // 0x195240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195244: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195248: 0x3e00008  jr          $ra
    ctx->pc = 0x195248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195250u;
}
