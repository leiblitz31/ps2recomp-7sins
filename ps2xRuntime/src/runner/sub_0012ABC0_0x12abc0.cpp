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

// Function: sub_0012ABC0
// Address: 0x12abc0 - 0x12ac10
void sub_0012ABC0_0x12abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ABC0_0x12abc0");
#endif

    switch (ctx->pc) {
        case 0x12abf0u: goto label_12abf0;
        default: break;
    }

    ctx->pc = 0x12abc0u;

    // 0x12abc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12abc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12abc8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12abcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12abccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12abd0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12ABD0u;
    {
        const bool branch_taken_0x12abd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12abd0) {
            ctx->pc = 0x12ABF4u;
            goto label_12abf4;
        }
    }
    ctx->pc = 0x12ABD8u;
    // 0x12abd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12abdc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ABDCu;
    {
        const bool branch_taken_0x12abdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12abdc) {
            ctx->pc = 0x12ABF4u;
            goto label_12abf4;
        }
    }
    ctx->pc = 0x12ABE4u;
    // 0x12abe4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12abe8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x12ABE8u;
    SET_GPR_U32(ctx, 31, 0x12ABF0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x12ABE8u, 0x12ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABF0u;
label_12abf0:
    // 0x12abf0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x12abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_12abf4:
    // 0x12abf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12abf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12abf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x12ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ABFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AC04u;
    // 0x12ac04: 0x0  nop
    ctx->pc = 0x12ac04u;
    // NOP
    // 0x12ac08: 0x0  nop
    ctx->pc = 0x12ac08u;
    // NOP
    // 0x12ac0c: 0x0  nop
    ctx->pc = 0x12ac0cu;
    // NOP
    ctx->pc = 0x12ac10u;
}
