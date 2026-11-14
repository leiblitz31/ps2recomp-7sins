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

// Function: sub_0046B5D0
// Address: 0x46b5d0 - 0x46b620
void sub_0046B5D0_0x46b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B5D0_0x46b5d0");
#endif

    switch (ctx->pc) {
        case 0x46b600u: goto label_46b600;
        default: break;
    }

    ctx->pc = 0x46b5d0u;

    // 0x46b5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46b5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b5d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46b5dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b5e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x46B5E0u;
    {
        const bool branch_taken_0x46b5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b5e0) {
            ctx->pc = 0x46B604u;
            goto label_46b604;
        }
    }
    ctx->pc = 0x46B5E8u;
    // 0x46b5e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b5ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46B5ECu;
    {
        const bool branch_taken_0x46b5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b5ec) {
            ctx->pc = 0x46B604u;
            goto label_46b604;
        }
    }
    ctx->pc = 0x46B5F4u;
    // 0x46b5f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b5f8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x46B5F8u;
    SET_GPR_U32(ctx, 31, 0x46B600u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x46B5F8u, 0x46B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B600u;
label_46b600:
    // 0x46b600: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x46b600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_46b604:
    // 0x46b604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b608: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46b60c: 0x3e00008  jr          $ra
    ctx->pc = 0x46B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B614u;
    // 0x46b614: 0x0  nop
    ctx->pc = 0x46b614u;
    // NOP
    // 0x46b618: 0x0  nop
    ctx->pc = 0x46b618u;
    // NOP
    // 0x46b61c: 0x0  nop
    ctx->pc = 0x46b61cu;
    // NOP
    ctx->pc = 0x46b620u;
}
