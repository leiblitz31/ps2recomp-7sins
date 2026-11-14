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

// Function: sub_00291820
// Address: 0x291820 - 0x291870
void sub_00291820_0x291820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291820_0x291820");
#endif

    switch (ctx->pc) {
        case 0x291850u: goto label_291850;
        default: break;
    }

    ctx->pc = 0x291820u;

    // 0x291820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291828: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x291828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x29182c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291830: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x291830u;
    {
        const bool branch_taken_0x291830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291830) {
            ctx->pc = 0x291854u;
            goto label_291854;
        }
    }
    ctx->pc = 0x291838u;
    // 0x291838: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x291838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29183c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29183Cu;
    {
        const bool branch_taken_0x29183c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29183c) {
            ctx->pc = 0x291854u;
            goto label_291854;
        }
    }
    ctx->pc = 0x291844u;
    // 0x291844: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x291844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291848: 0xc119c5c  jal         func_467170
    ctx->pc = 0x291848u;
    SET_GPR_U32(ctx, 31, 0x291850u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x291848u, 0x291850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291850u;
label_291850:
    // 0x291850: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x291850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_291854:
    // 0x291854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291858: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x291858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29185c: 0x3e00008  jr          $ra
    ctx->pc = 0x29185Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29185Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291864u;
    // 0x291864: 0x0  nop
    ctx->pc = 0x291864u;
    // NOP
    // 0x291868: 0x0  nop
    ctx->pc = 0x291868u;
    // NOP
    // 0x29186c: 0x0  nop
    ctx->pc = 0x29186cu;
    // NOP
    ctx->pc = 0x291870u;
}
