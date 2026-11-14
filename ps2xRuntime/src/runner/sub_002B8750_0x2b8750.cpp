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

// Function: sub_002B8750
// Address: 0x2b8750 - 0x2b87a0
void sub_002B8750_0x2b8750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8750_0x2b8750");
#endif

    switch (ctx->pc) {
        case 0x2b8780u: goto label_2b8780;
        default: break;
    }

    ctx->pc = 0x2b8750u;

    // 0x2b8750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b8750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b8754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8758: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b8758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b875c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8760: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8760u;
    {
        const bool branch_taken_0x2b8760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8760) {
            ctx->pc = 0x2B8784u;
            goto label_2b8784;
        }
    }
    ctx->pc = 0x2B8768u;
    // 0x2b8768: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b8768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b876c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B876Cu;
    {
        const bool branch_taken_0x2b876c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b876c) {
            ctx->pc = 0x2B8784u;
            goto label_2b8784;
        }
    }
    ctx->pc = 0x2B8774u;
    // 0x2b8774: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b8774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8778: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2B8778u;
    SET_GPR_U32(ctx, 31, 0x2B8780u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B8778u, 0x2B8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8780u;
label_2b8780:
    // 0x2b8780: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2b8780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2b8784:
    // 0x2b8784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8788: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b8788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b878c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8794u;
    // 0x2b8794: 0x0  nop
    ctx->pc = 0x2b8794u;
    // NOP
    // 0x2b8798: 0x0  nop
    ctx->pc = 0x2b8798u;
    // NOP
    // 0x2b879c: 0x0  nop
    ctx->pc = 0x2b879cu;
    // NOP
    ctx->pc = 0x2b87a0u;
}
