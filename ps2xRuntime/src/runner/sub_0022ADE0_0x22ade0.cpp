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

// Function: sub_0022ADE0
// Address: 0x22ade0 - 0x22ae30
void sub_0022ADE0_0x22ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ADE0_0x22ade0");
#endif

    switch (ctx->pc) {
        case 0x22ae10u: goto label_22ae10;
        default: break;
    }

    ctx->pc = 0x22ade0u;

    // 0x22ade0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22ade4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ade8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22adec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22adf0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22ADF0u;
    {
        const bool branch_taken_0x22adf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22adf0) {
            ctx->pc = 0x22AE14u;
            goto label_22ae14;
        }
    }
    ctx->pc = 0x22ADF8u;
    // 0x22adf8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22adfc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ADFCu;
    {
        const bool branch_taken_0x22adfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22adfc) {
            ctx->pc = 0x22AE14u;
            goto label_22ae14;
        }
    }
    ctx->pc = 0x22AE04u;
    // 0x22ae04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ae08: 0xc119c5c  jal         func_467170
    ctx->pc = 0x22AE08u;
    SET_GPR_U32(ctx, 31, 0x22AE10u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x22AE08u, 0x22AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE10u;
label_22ae10:
    // 0x22ae10: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x22ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_22ae14:
    // 0x22ae14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ae18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22ae18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ae1c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AE24u;
    // 0x22ae24: 0x0  nop
    ctx->pc = 0x22ae24u;
    // NOP
    // 0x22ae28: 0x0  nop
    ctx->pc = 0x22ae28u;
    // NOP
    // 0x22ae2c: 0x0  nop
    ctx->pc = 0x22ae2cu;
    // NOP
    ctx->pc = 0x22ae30u;
}
