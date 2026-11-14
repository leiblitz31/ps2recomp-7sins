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

// Function: sub_001F0B90
// Address: 0x1f0b90 - 0x1f0be0
void sub_001F0B90_0x1f0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0B90_0x1f0b90");
#endif

    switch (ctx->pc) {
        case 0x1f0bc0u: goto label_1f0bc0;
        default: break;
    }

    ctx->pc = 0x1f0b90u;

    // 0x1f0b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f0b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f0b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0b98: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f0b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1f0b9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f0b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0ba0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0BA0u;
    {
        const bool branch_taken_0x1f0ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ba0) {
            ctx->pc = 0x1F0BC4u;
            goto label_1f0bc4;
        }
    }
    ctx->pc = 0x1F0BA8u;
    // 0x1f0ba8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f0ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0bac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0BACu;
    {
        const bool branch_taken_0x1f0bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bac) {
            ctx->pc = 0x1F0BC4u;
            goto label_1f0bc4;
        }
    }
    ctx->pc = 0x1F0BB4u;
    // 0x1f0bb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f0bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0bb8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1F0BB8u;
    SET_GPR_U32(ctx, 31, 0x1F0BC0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1F0BB8u, 0x1F0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BC0u;
label_1f0bc0:
    // 0x1f0bc0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1f0bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1f0bc4:
    // 0x1f0bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0bc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f0bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0BD4u;
    // 0x1f0bd4: 0x0  nop
    ctx->pc = 0x1f0bd4u;
    // NOP
    // 0x1f0bd8: 0x0  nop
    ctx->pc = 0x1f0bd8u;
    // NOP
    // 0x1f0bdc: 0x0  nop
    ctx->pc = 0x1f0bdcu;
    // NOP
    ctx->pc = 0x1f0be0u;
}
