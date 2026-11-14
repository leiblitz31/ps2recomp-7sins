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

// Function: sub_00455FB0
// Address: 0x455fb0 - 0x456000
void sub_00455FB0_0x455fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455FB0_0x455fb0");
#endif

    switch (ctx->pc) {
        case 0x455fe0u: goto label_455fe0;
        default: break;
    }

    ctx->pc = 0x455fb0u;

    // 0x455fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x455fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x455fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x455fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x455fb8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x455fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x455fbc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x455fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x455fc0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x455FC0u;
    {
        const bool branch_taken_0x455fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x455fc0) {
            ctx->pc = 0x455FE4u;
            goto label_455fe4;
        }
    }
    ctx->pc = 0x455FC8u;
    // 0x455fc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x455fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x455fcc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x455FCCu;
    {
        const bool branch_taken_0x455fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x455fcc) {
            ctx->pc = 0x455FE4u;
            goto label_455fe4;
        }
    }
    ctx->pc = 0x455FD4u;
    // 0x455fd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x455fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x455fd8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x455FD8u;
    SET_GPR_U32(ctx, 31, 0x455FE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x455FD8u, 0x455FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455FE0u;
label_455fe0:
    // 0x455fe0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x455fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_455fe4:
    // 0x455fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x455fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x455fe8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x455fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x455fec: 0x3e00008  jr          $ra
    ctx->pc = 0x455FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x455FF4u;
    // 0x455ff4: 0x0  nop
    ctx->pc = 0x455ff4u;
    // NOP
    // 0x455ff8: 0x0  nop
    ctx->pc = 0x455ff8u;
    // NOP
    // 0x455ffc: 0x0  nop
    ctx->pc = 0x455ffcu;
    // NOP
    ctx->pc = 0x456000u;
}
