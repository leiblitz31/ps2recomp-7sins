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

// Function: sub_001C3680
// Address: 0x1c3680 - 0x1c36d0
void sub_001C3680_0x1c3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3680_0x1c3680");
#endif

    switch (ctx->pc) {
        case 0x1c36b0u: goto label_1c36b0;
        default: break;
    }

    ctx->pc = 0x1c3680u;

    // 0x1c3680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3688: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c3688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c368c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3690: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3690u;
    {
        const bool branch_taken_0x1c3690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3690) {
            ctx->pc = 0x1C36B4u;
            goto label_1c36b4;
        }
    }
    ctx->pc = 0x1C3698u;
    // 0x1c3698: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c3698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c369c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C369Cu;
    {
        const bool branch_taken_0x1c369c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c369c) {
            ctx->pc = 0x1C36B4u;
            goto label_1c36b4;
        }
    }
    ctx->pc = 0x1C36A4u;
    // 0x1c36a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c36a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c36a8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1C36A8u;
    SET_GPR_U32(ctx, 31, 0x1C36B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1C36A8u, 0x1C36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36B0u;
label_1c36b0:
    // 0x1c36b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c36b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1c36b4:
    // 0x1c36b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c36b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c36b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c36b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c36bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C36BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C36BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C36C4u;
    // 0x1c36c4: 0x0  nop
    ctx->pc = 0x1c36c4u;
    // NOP
    // 0x1c36c8: 0x0  nop
    ctx->pc = 0x1c36c8u;
    // NOP
    // 0x1c36cc: 0x0  nop
    ctx->pc = 0x1c36ccu;
    // NOP
    ctx->pc = 0x1c36d0u;
}
