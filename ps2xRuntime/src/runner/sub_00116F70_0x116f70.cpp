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

// Function: sub_00116F70
// Address: 0x116f70 - 0x116fb0
void sub_00116F70_0x116f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116F70_0x116f70");
#endif

    switch (ctx->pc) {
        case 0x116f80u: goto label_116f80;
        default: break;
    }

    ctx->pc = 0x116f70u;

    // 0x116f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116f74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x116f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x116f78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116F78u;
    {
        const bool branch_taken_0x116f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116f78) {
            ctx->pc = 0x116F8Cu;
            goto label_116f8c;
        }
    }
    ctx->pc = 0x116F80u;
label_116f80:
    // 0x116f80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116f84: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x116f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116f88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x116f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_116f8c:
    // 0x116f8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116f90: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x116f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116f94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116F94u;
    {
        const bool branch_taken_0x116f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116f94) {
            ctx->pc = 0x116F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116f80;
        }
    }
    ctx->pc = 0x116F9Cu;
    // 0x116f9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116fa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x116fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x116FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116FACu;
    // 0x116fac: 0x0  nop
    ctx->pc = 0x116facu;
    // NOP
    ctx->pc = 0x116fb0u;
}
