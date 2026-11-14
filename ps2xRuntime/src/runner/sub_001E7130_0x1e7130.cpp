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

// Function: sub_001E7130
// Address: 0x1e7130 - 0x1e7180
void sub_001E7130_0x1e7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7130_0x1e7130");
#endif

    switch (ctx->pc) {
        case 0x1e7160u: goto label_1e7160;
        default: break;
    }

    ctx->pc = 0x1e7130u;

    // 0x1e7130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7138: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e7138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e713c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7140: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7140u;
    {
        const bool branch_taken_0x1e7140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7140) {
            ctx->pc = 0x1E7164u;
            goto label_1e7164;
        }
    }
    ctx->pc = 0x1E7148u;
    // 0x1e7148: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e7148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e714c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E714Cu;
    {
        const bool branch_taken_0x1e714c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e714c) {
            ctx->pc = 0x1E7164u;
            goto label_1e7164;
        }
    }
    ctx->pc = 0x1E7154u;
    // 0x1e7154: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e7154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7158: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1E7158u;
    SET_GPR_U32(ctx, 31, 0x1E7160u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1E7158u, 0x1E7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7160u;
label_1e7160:
    // 0x1e7160: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1e7160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1e7164:
    // 0x1e7164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7168: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e7168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e716c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E716Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E716Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7174u;
    // 0x1e7174: 0x0  nop
    ctx->pc = 0x1e7174u;
    // NOP
    // 0x1e7178: 0x0  nop
    ctx->pc = 0x1e7178u;
    // NOP
    // 0x1e717c: 0x0  nop
    ctx->pc = 0x1e717cu;
    // NOP
    ctx->pc = 0x1e7180u;
}
