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

// Function: sub_001B7A60
// Address: 0x1b7a60 - 0x1b7ab0
void sub_001B7A60_0x1b7a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7A60_0x1b7a60");
#endif

    switch (ctx->pc) {
        case 0x1b7a90u: goto label_1b7a90;
        default: break;
    }

    ctx->pc = 0x1b7a60u;

    // 0x1b7a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7a68: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b7a6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7A70u;
    {
        const bool branch_taken_0x1b7a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a70) {
            ctx->pc = 0x1B7A94u;
            goto label_1b7a94;
        }
    }
    ctx->pc = 0x1B7A78u;
    // 0x1b7a78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a7c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7A7Cu;
    {
        const bool branch_taken_0x1b7a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a7c) {
            ctx->pc = 0x1B7A94u;
            goto label_1b7a94;
        }
    }
    ctx->pc = 0x1B7A84u;
    // 0x1b7a84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b7a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a88: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1B7A88u;
    SET_GPR_U32(ctx, 31, 0x1B7A90u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1B7A88u, 0x1B7A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A90u;
label_1b7a90:
    // 0x1b7a90: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1b7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1b7a94:
    // 0x1b7a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7a98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b7a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AA4u;
    // 0x1b7aa4: 0x0  nop
    ctx->pc = 0x1b7aa4u;
    // NOP
    // 0x1b7aa8: 0x0  nop
    ctx->pc = 0x1b7aa8u;
    // NOP
    // 0x1b7aac: 0x0  nop
    ctx->pc = 0x1b7aacu;
    // NOP
    ctx->pc = 0x1b7ab0u;
}
