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

// Function: sub_002E2A70
// Address: 0x2e2a70 - 0x2e2ac0
void sub_002E2A70_0x2e2a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2A70_0x2e2a70");
#endif

    switch (ctx->pc) {
        case 0x2e2aa0u: goto label_2e2aa0;
        default: break;
    }

    ctx->pc = 0x2e2a70u;

    // 0x2e2a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e2a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e2a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2a78: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e2a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e2a7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2a80: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2A80u;
    {
        const bool branch_taken_0x2e2a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a80) {
            ctx->pc = 0x2E2AA4u;
            goto label_2e2aa4;
        }
    }
    ctx->pc = 0x2E2A88u;
    // 0x2e2a88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2a8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2A8Cu;
    {
        const bool branch_taken_0x2e2a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a8c) {
            ctx->pc = 0x2E2AA4u;
            goto label_2e2aa4;
        }
    }
    ctx->pc = 0x2E2A94u;
    // 0x2e2a94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e2a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2a98: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2E2A98u;
    SET_GPR_U32(ctx, 31, 0x2E2AA0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E2A98u, 0x2E2AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2AA0u;
label_2e2aa0:
    // 0x2e2aa0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2e2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2e2aa4:
    // 0x2e2aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2aa8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e2aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e2aac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2AB4u;
    // 0x2e2ab4: 0x0  nop
    ctx->pc = 0x2e2ab4u;
    // NOP
    // 0x2e2ab8: 0x0  nop
    ctx->pc = 0x2e2ab8u;
    // NOP
    // 0x2e2abc: 0x0  nop
    ctx->pc = 0x2e2abcu;
    // NOP
    ctx->pc = 0x2e2ac0u;
}
