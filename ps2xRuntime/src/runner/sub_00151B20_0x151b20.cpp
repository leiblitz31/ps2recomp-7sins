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

// Function: sub_00151B20
// Address: 0x151b20 - 0x151b70
void sub_00151B20_0x151b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151B20_0x151b20");
#endif

    switch (ctx->pc) {
        case 0x151b50u: goto label_151b50;
        default: break;
    }

    ctx->pc = 0x151b20u;

    // 0x151b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151b28: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x151b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x151b2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x151b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151b30: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x151B30u;
    {
        const bool branch_taken_0x151b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b30) {
            ctx->pc = 0x151B54u;
            goto label_151b54;
        }
    }
    ctx->pc = 0x151B38u;
    // 0x151b38: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x151b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151b3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x151B3Cu;
    {
        const bool branch_taken_0x151b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b3c) {
            ctx->pc = 0x151B54u;
            goto label_151b54;
        }
    }
    ctx->pc = 0x151B44u;
    // 0x151b44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x151b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151b48: 0xc119c5c  jal         func_467170
    ctx->pc = 0x151B48u;
    SET_GPR_U32(ctx, 31, 0x151B50u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x151B48u, 0x151B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B50u;
label_151b50:
    // 0x151b50: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x151b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_151b54:
    // 0x151b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151b58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x151B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151B64u;
    // 0x151b64: 0x0  nop
    ctx->pc = 0x151b64u;
    // NOP
    // 0x151b68: 0x0  nop
    ctx->pc = 0x151b68u;
    // NOP
    // 0x151b6c: 0x0  nop
    ctx->pc = 0x151b6cu;
    // NOP
    ctx->pc = 0x151b70u;
}
