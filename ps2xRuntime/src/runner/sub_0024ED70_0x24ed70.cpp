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

// Function: sub_0024ED70
// Address: 0x24ed70 - 0x24edc0
void sub_0024ED70_0x24ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ED70_0x24ed70");
#endif

    switch (ctx->pc) {
        case 0x24eda0u: goto label_24eda0;
        default: break;
    }

    ctx->pc = 0x24ed70u;

    // 0x24ed70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ed74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ed78: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24ed7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ed80: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24ED80u;
    {
        const bool branch_taken_0x24ed80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ed80) {
            ctx->pc = 0x24EDA4u;
            goto label_24eda4;
        }
    }
    ctx->pc = 0x24ED88u;
    // 0x24ed88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ed8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ED8Cu;
    {
        const bool branch_taken_0x24ed8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ed8c) {
            ctx->pc = 0x24EDA4u;
            goto label_24eda4;
        }
    }
    ctx->pc = 0x24ED94u;
    // 0x24ed94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ed98: 0xc119c5c  jal         func_467170
    ctx->pc = 0x24ED98u;
    SET_GPR_U32(ctx, 31, 0x24EDA0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x24ED98u, 0x24EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDA0u;
label_24eda0:
    // 0x24eda0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x24eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_24eda4:
    // 0x24eda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24eda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24eda8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24eda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24edac: 0x3e00008  jr          $ra
    ctx->pc = 0x24EDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EDB4u;
    // 0x24edb4: 0x0  nop
    ctx->pc = 0x24edb4u;
    // NOP
    // 0x24edb8: 0x0  nop
    ctx->pc = 0x24edb8u;
    // NOP
    // 0x24edbc: 0x0  nop
    ctx->pc = 0x24edbcu;
    // NOP
    ctx->pc = 0x24edc0u;
}
