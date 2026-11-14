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

// Function: sub_002D8C50
// Address: 0x2d8c50 - 0x2d8ca0
void sub_002D8C50_0x2d8c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8C50_0x2d8c50");
#endif

    switch (ctx->pc) {
        case 0x2d8c80u: goto label_2d8c80;
        default: break;
    }

    ctx->pc = 0x2d8c50u;

    // 0x2d8c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d8c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d8c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8c58: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d8c5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8c60: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8C60u;
    {
        const bool branch_taken_0x2d8c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c60) {
            ctx->pc = 0x2D8C84u;
            goto label_2d8c84;
        }
    }
    ctx->pc = 0x2D8C68u;
    // 0x2d8c68: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8c6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8C6Cu;
    {
        const bool branch_taken_0x2d8c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c6c) {
            ctx->pc = 0x2D8C84u;
            goto label_2d8c84;
        }
    }
    ctx->pc = 0x2D8C74u;
    // 0x2d8c74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8c78: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D8C78u;
    SET_GPR_U32(ctx, 31, 0x2D8C80u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D8C78u, 0x2D8C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C80u;
label_2d8c80:
    // 0x2d8c80: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2d8c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2d8c84:
    // 0x2d8c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8c88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d8c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d8c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8C94u;
    // 0x2d8c94: 0x0  nop
    ctx->pc = 0x2d8c94u;
    // NOP
    // 0x2d8c98: 0x0  nop
    ctx->pc = 0x2d8c98u;
    // NOP
    // 0x2d8c9c: 0x0  nop
    ctx->pc = 0x2d8c9cu;
    // NOP
    ctx->pc = 0x2d8ca0u;
}
