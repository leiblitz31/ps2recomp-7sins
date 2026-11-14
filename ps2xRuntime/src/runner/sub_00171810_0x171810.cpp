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

// Function: sub_00171810
// Address: 0x171810 - 0x171860
void sub_00171810_0x171810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171810_0x171810");
#endif

    switch (ctx->pc) {
        case 0x171840u: goto label_171840;
        default: break;
    }

    ctx->pc = 0x171810u;

    // 0x171810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x171810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171818: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x171818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17181c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171820: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x171820u;
    {
        const bool branch_taken_0x171820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171820) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x171828u;
    // 0x171828: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x171828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17182c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17182Cu;
    {
        const bool branch_taken_0x17182c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17182c) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x171834u;
    // 0x171834: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x171834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171838: 0xc119c5c  jal         func_467170
    ctx->pc = 0x171838u;
    SET_GPR_U32(ctx, 31, 0x171840u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x171838u, 0x171840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171840u;
label_171840:
    // 0x171840: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x171840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_171844:
    // 0x171844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171848: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x171848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17184c: 0x3e00008  jr          $ra
    ctx->pc = 0x17184Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17184Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171854u;
    // 0x171854: 0x0  nop
    ctx->pc = 0x171854u;
    // NOP
    // 0x171858: 0x0  nop
    ctx->pc = 0x171858u;
    // NOP
    // 0x17185c: 0x0  nop
    ctx->pc = 0x17185cu;
    // NOP
    ctx->pc = 0x171860u;
}
