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

// Function: sub_002E5840
// Address: 0x2e5840 - 0x2e5890
void sub_002E5840_0x2e5840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5840_0x2e5840");
#endif

    switch (ctx->pc) {
        case 0x2e5870u: goto label_2e5870;
        default: break;
    }

    ctx->pc = 0x2e5840u;

    // 0x2e5840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e5840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e5844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5848: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e5848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e584c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5850: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5850u;
    {
        const bool branch_taken_0x2e5850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5850) {
            ctx->pc = 0x2E5874u;
            goto label_2e5874;
        }
    }
    ctx->pc = 0x2E5858u;
    // 0x2e5858: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e5858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e585c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E585Cu;
    {
        const bool branch_taken_0x2e585c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e585c) {
            ctx->pc = 0x2E5874u;
            goto label_2e5874;
        }
    }
    ctx->pc = 0x2E5864u;
    // 0x2e5864: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e5864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5868: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2E5868u;
    SET_GPR_U32(ctx, 31, 0x2E5870u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E5868u, 0x2E5870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5870u;
label_2e5870:
    // 0x2e5870: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2e5870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2e5874:
    // 0x2e5874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5878: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e5878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e587c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E587Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E587Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5884u;
    // 0x2e5884: 0x0  nop
    ctx->pc = 0x2e5884u;
    // NOP
    // 0x2e5888: 0x0  nop
    ctx->pc = 0x2e5888u;
    // NOP
    // 0x2e588c: 0x0  nop
    ctx->pc = 0x2e588cu;
    // NOP
    ctx->pc = 0x2e5890u;
}
