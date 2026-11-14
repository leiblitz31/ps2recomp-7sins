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

// Function: sub_0018AF70
// Address: 0x18af70 - 0x18afc0
void sub_0018AF70_0x18af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AF70_0x18af70");
#endif

    switch (ctx->pc) {
        case 0x18afa0u: goto label_18afa0;
        default: break;
    }

    ctx->pc = 0x18af70u;

    // 0x18af70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18af74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18af78: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18af78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18af7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18af80: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18AF80u;
    {
        const bool branch_taken_0x18af80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af80) {
            ctx->pc = 0x18AFA4u;
            goto label_18afa4;
        }
    }
    ctx->pc = 0x18AF88u;
    // 0x18af88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18af88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18af8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AF8Cu;
    {
        const bool branch_taken_0x18af8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af8c) {
            ctx->pc = 0x18AFA4u;
            goto label_18afa4;
        }
    }
    ctx->pc = 0x18AF94u;
    // 0x18af94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18af94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18af98: 0xc119c5c  jal         func_467170
    ctx->pc = 0x18AF98u;
    SET_GPR_U32(ctx, 31, 0x18AFA0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x18AF98u, 0x18AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFA0u;
label_18afa0:
    // 0x18afa0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_18afa4:
    // 0x18afa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18afa8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18afa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18afac: 0x3e00008  jr          $ra
    ctx->pc = 0x18AFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AFB4u;
    // 0x18afb4: 0x0  nop
    ctx->pc = 0x18afb4u;
    // NOP
    // 0x18afb8: 0x0  nop
    ctx->pc = 0x18afb8u;
    // NOP
    // 0x18afbc: 0x0  nop
    ctx->pc = 0x18afbcu;
    // NOP
    ctx->pc = 0x18afc0u;
}
