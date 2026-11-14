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

// Function: sub_00116F30
// Address: 0x116f30 - 0x116f70
void sub_00116F30_0x116f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116F30_0x116f30");
#endif

    switch (ctx->pc) {
        case 0x116f40u: goto label_116f40;
        default: break;
    }

    ctx->pc = 0x116f30u;

    // 0x116f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116f34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x116f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x116f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116F38u;
    {
        const bool branch_taken_0x116f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116f38) {
            ctx->pc = 0x116F4Cu;
            goto label_116f4c;
        }
    }
    ctx->pc = 0x116F40u;
label_116f40:
    // 0x116f40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116f44: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116f48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x116f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_116f4c:
    // 0x116f4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116f50: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116f54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116F54u;
    {
        const bool branch_taken_0x116f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116f54) {
            ctx->pc = 0x116F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116f40;
        }
    }
    ctx->pc = 0x116F5Cu;
    // 0x116f5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116f60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x116f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116f64: 0x3e00008  jr          $ra
    ctx->pc = 0x116F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116F6Cu;
    // 0x116f6c: 0x0  nop
    ctx->pc = 0x116f6cu;
    // NOP
    ctx->pc = 0x116f70u;
}
