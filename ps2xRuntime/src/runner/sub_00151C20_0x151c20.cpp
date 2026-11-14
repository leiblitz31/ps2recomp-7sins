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

// Function: sub_00151C20
// Address: 0x151c20 - 0x151c70
void sub_00151C20_0x151c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151C20_0x151c20");
#endif

    switch (ctx->pc) {
        case 0x151c50u: goto label_151c50;
        default: break;
    }

    ctx->pc = 0x151c20u;

    // 0x151c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151c28: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x151c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x151c2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x151c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151c30: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x151C30u;
    {
        const bool branch_taken_0x151c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c30) {
            ctx->pc = 0x151C54u;
            goto label_151c54;
        }
    }
    ctx->pc = 0x151C38u;
    // 0x151c38: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x151c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151c3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x151C3Cu;
    {
        const bool branch_taken_0x151c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c3c) {
            ctx->pc = 0x151C54u;
            goto label_151c54;
        }
    }
    ctx->pc = 0x151C44u;
    // 0x151c44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x151c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151c48: 0xc119c5c  jal         func_467170
    ctx->pc = 0x151C48u;
    SET_GPR_U32(ctx, 31, 0x151C50u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x151C48u, 0x151C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C50u;
label_151c50:
    // 0x151c50: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x151c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_151c54:
    // 0x151c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151c58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x151C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151C64u;
    // 0x151c64: 0x0  nop
    ctx->pc = 0x151c64u;
    // NOP
    // 0x151c68: 0x0  nop
    ctx->pc = 0x151c68u;
    // NOP
    // 0x151c6c: 0x0  nop
    ctx->pc = 0x151c6cu;
    // NOP
    ctx->pc = 0x151c70u;
}
