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

// Function: sub_00282130
// Address: 0x282130 - 0x282180
void sub_00282130_0x282130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282130_0x282130");
#endif

    switch (ctx->pc) {
        case 0x282160u: goto label_282160;
        default: break;
    }

    ctx->pc = 0x282130u;

    // 0x282130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282138: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x282138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28213c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282140: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x282140u;
    {
        const bool branch_taken_0x282140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282140) {
            ctx->pc = 0x282164u;
            goto label_282164;
        }
    }
    ctx->pc = 0x282148u;
    // 0x282148: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x282148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28214c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28214Cu;
    {
        const bool branch_taken_0x28214c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28214c) {
            ctx->pc = 0x282164u;
            goto label_282164;
        }
    }
    ctx->pc = 0x282154u;
    // 0x282154: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282158: 0xc119c5c  jal         func_467170
    ctx->pc = 0x282158u;
    SET_GPR_U32(ctx, 31, 0x282160u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x282158u, 0x282160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282160u;
label_282160:
    // 0x282160: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x282160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_282164:
    // 0x282164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282168: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x282168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28216c: 0x3e00008  jr          $ra
    ctx->pc = 0x28216Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28216Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282174u;
    // 0x282174: 0x0  nop
    ctx->pc = 0x282174u;
    // NOP
    // 0x282178: 0x0  nop
    ctx->pc = 0x282178u;
    // NOP
    // 0x28217c: 0x0  nop
    ctx->pc = 0x28217cu;
    // NOP
    ctx->pc = 0x282180u;
}
