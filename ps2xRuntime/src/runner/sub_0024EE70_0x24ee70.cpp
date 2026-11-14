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

// Function: sub_0024EE70
// Address: 0x24ee70 - 0x24eec0
void sub_0024EE70_0x24ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EE70_0x24ee70");
#endif

    switch (ctx->pc) {
        case 0x24eea0u: goto label_24eea0;
        default: break;
    }

    ctx->pc = 0x24ee70u;

    // 0x24ee70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ee74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ee78: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24ee7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ee80: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24EE80u;
    {
        const bool branch_taken_0x24ee80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee80) {
            ctx->pc = 0x24EEA4u;
            goto label_24eea4;
        }
    }
    ctx->pc = 0x24EE88u;
    // 0x24ee88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ee8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EE8Cu;
    {
        const bool branch_taken_0x24ee8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee8c) {
            ctx->pc = 0x24EEA4u;
            goto label_24eea4;
        }
    }
    ctx->pc = 0x24EE94u;
    // 0x24ee94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ee98: 0xc119c5c  jal         func_467170
    ctx->pc = 0x24EE98u;
    SET_GPR_U32(ctx, 31, 0x24EEA0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x24EE98u, 0x24EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEA0u;
label_24eea0:
    // 0x24eea0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x24eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_24eea4:
    // 0x24eea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24eea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24eea8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24eea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24eeac: 0x3e00008  jr          $ra
    ctx->pc = 0x24EEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EEB4u;
    // 0x24eeb4: 0x0  nop
    ctx->pc = 0x24eeb4u;
    // NOP
    // 0x24eeb8: 0x0  nop
    ctx->pc = 0x24eeb8u;
    // NOP
    // 0x24eebc: 0x0  nop
    ctx->pc = 0x24eebcu;
    // NOP
    ctx->pc = 0x24eec0u;
}
