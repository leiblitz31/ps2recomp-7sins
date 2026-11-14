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

// Function: sub_002E2B70
// Address: 0x2e2b70 - 0x2e2bc0
void sub_002E2B70_0x2e2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2B70_0x2e2b70");
#endif

    switch (ctx->pc) {
        case 0x2e2ba0u: goto label_2e2ba0;
        default: break;
    }

    ctx->pc = 0x2e2b70u;

    // 0x2e2b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e2b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2b78: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e2b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e2b7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e2b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2b80: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2B80u;
    {
        const bool branch_taken_0x2e2b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b80) {
            ctx->pc = 0x2E2BA4u;
            goto label_2e2ba4;
        }
    }
    ctx->pc = 0x2E2B88u;
    // 0x2e2b88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2b8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2B8Cu;
    {
        const bool branch_taken_0x2e2b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b8c) {
            ctx->pc = 0x2E2BA4u;
            goto label_2e2ba4;
        }
    }
    ctx->pc = 0x2E2B94u;
    // 0x2e2b94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e2b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2b98: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2E2B98u;
    SET_GPR_U32(ctx, 31, 0x2E2BA0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E2B98u, 0x2E2BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2BA0u;
label_2e2ba0:
    // 0x2e2ba0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2e2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2e2ba4:
    // 0x2e2ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2ba8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e2ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e2bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2BB4u;
    // 0x2e2bb4: 0x0  nop
    ctx->pc = 0x2e2bb4u;
    // NOP
    // 0x2e2bb8: 0x0  nop
    ctx->pc = 0x2e2bb8u;
    // NOP
    // 0x2e2bbc: 0x0  nop
    ctx->pc = 0x2e2bbcu;
    // NOP
    ctx->pc = 0x2e2bc0u;
}
