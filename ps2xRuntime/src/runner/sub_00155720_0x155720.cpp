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

// Function: sub_00155720
// Address: 0x155720 - 0x155770
void sub_00155720_0x155720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155720_0x155720");
#endif

    switch (ctx->pc) {
        case 0x155750u: goto label_155750;
        default: break;
    }

    ctx->pc = 0x155720u;

    // 0x155720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155728: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x155728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15572c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155730: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x155730u;
    {
        const bool branch_taken_0x155730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155730) {
            ctx->pc = 0x155754u;
            goto label_155754;
        }
    }
    ctx->pc = 0x155738u;
    // 0x155738: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x155738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15573c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15573Cu;
    {
        const bool branch_taken_0x15573c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15573c) {
            ctx->pc = 0x155754u;
            goto label_155754;
        }
    }
    ctx->pc = 0x155744u;
    // 0x155744: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x155744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155748: 0xc119c5c  jal         func_467170
    ctx->pc = 0x155748u;
    SET_GPR_U32(ctx, 31, 0x155750u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x155748u, 0x155750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155750u;
label_155750:
    // 0x155750: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x155750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_155754:
    // 0x155754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155758: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15575c: 0x3e00008  jr          $ra
    ctx->pc = 0x15575Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15575Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155764u;
    // 0x155764: 0x0  nop
    ctx->pc = 0x155764u;
    // NOP
    // 0x155768: 0x0  nop
    ctx->pc = 0x155768u;
    // NOP
    // 0x15576c: 0x0  nop
    ctx->pc = 0x15576cu;
    // NOP
    ctx->pc = 0x155770u;
}
