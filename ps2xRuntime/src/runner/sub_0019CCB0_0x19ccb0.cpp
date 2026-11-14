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

// Function: sub_0019CCB0
// Address: 0x19ccb0 - 0x19cd00
void sub_0019CCB0_0x19ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CCB0_0x19ccb0");
#endif

    switch (ctx->pc) {
        case 0x19cce0u: goto label_19cce0;
        default: break;
    }

    ctx->pc = 0x19ccb0u;

    // 0x19ccb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ccb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ccb8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19ccbc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ccc0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CCC0u;
    {
        const bool branch_taken_0x19ccc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ccc0) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CCC8u;
    // 0x19ccc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cccc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CCCCu;
    {
        const bool branch_taken_0x19cccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cccc) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CCD4u;
    // 0x19ccd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ccd8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x19CCD8u;
    SET_GPR_U32(ctx, 31, 0x19CCE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x19CCD8u, 0x19CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCE0u;
label_19cce0:
    // 0x19cce0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_19cce4:
    // 0x19cce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cce8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19ccec: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCF4u;
    // 0x19ccf4: 0x0  nop
    ctx->pc = 0x19ccf4u;
    // NOP
    // 0x19ccf8: 0x0  nop
    ctx->pc = 0x19ccf8u;
    // NOP
    // 0x19ccfc: 0x0  nop
    ctx->pc = 0x19ccfcu;
    // NOP
    ctx->pc = 0x19cd00u;
}
