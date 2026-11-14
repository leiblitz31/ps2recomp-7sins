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

// Function: sub_00282040
// Address: 0x282040 - 0x282090
void sub_00282040_0x282040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282040_0x282040");
#endif

    switch (ctx->pc) {
        case 0x282070u: goto label_282070;
        default: break;
    }

    ctx->pc = 0x282040u;

    // 0x282040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282048: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x282048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28204c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282050: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x282050u;
    {
        const bool branch_taken_0x282050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282050) {
            ctx->pc = 0x282074u;
            goto label_282074;
        }
    }
    ctx->pc = 0x282058u;
    // 0x282058: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x282058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28205c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28205Cu;
    {
        const bool branch_taken_0x28205c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28205c) {
            ctx->pc = 0x282074u;
            goto label_282074;
        }
    }
    ctx->pc = 0x282064u;
    // 0x282064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282068: 0xc119c5c  jal         func_467170
    ctx->pc = 0x282068u;
    SET_GPR_U32(ctx, 31, 0x282070u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x282068u, 0x282070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282070u;
label_282070:
    // 0x282070: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x282070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_282074:
    // 0x282074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282078: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x282078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28207c: 0x3e00008  jr          $ra
    ctx->pc = 0x28207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282084u;
    // 0x282084: 0x0  nop
    ctx->pc = 0x282084u;
    // NOP
    // 0x282088: 0x0  nop
    ctx->pc = 0x282088u;
    // NOP
    // 0x28208c: 0x0  nop
    ctx->pc = 0x28208cu;
    // NOP
    ctx->pc = 0x282090u;
}
