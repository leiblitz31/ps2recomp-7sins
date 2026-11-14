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

// Function: sub_001C9690
// Address: 0x1c9690 - 0x1c96e0
void sub_001C9690_0x1c9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9690_0x1c9690");
#endif

    switch (ctx->pc) {
        case 0x1c96c0u: goto label_1c96c0;
        default: break;
    }

    ctx->pc = 0x1c9690u;

    // 0x1c9690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c9690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c9694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9698: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c9698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c969c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c96a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C96A0u;
    {
        const bool branch_taken_0x1c96a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96a0) {
            ctx->pc = 0x1C96C4u;
            goto label_1c96c4;
        }
    }
    ctx->pc = 0x1C96A8u;
    // 0x1c96a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c96ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C96ACu;
    {
        const bool branch_taken_0x1c96ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96ac) {
            ctx->pc = 0x1C96C4u;
            goto label_1c96c4;
        }
    }
    ctx->pc = 0x1C96B4u;
    // 0x1c96b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c96b8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1C96B8u;
    SET_GPR_U32(ctx, 31, 0x1C96C0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1C96B8u, 0x1C96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96C0u;
label_1c96c0:
    // 0x1c96c0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c96c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1c96c4:
    // 0x1c96c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c96c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c96c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c96c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c96cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C96CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C96CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C96D4u;
    // 0x1c96d4: 0x0  nop
    ctx->pc = 0x1c96d4u;
    // NOP
    // 0x1c96d8: 0x0  nop
    ctx->pc = 0x1c96d8u;
    // NOP
    // 0x1c96dc: 0x0  nop
    ctx->pc = 0x1c96dcu;
    // NOP
    ctx->pc = 0x1c96e0u;
}
