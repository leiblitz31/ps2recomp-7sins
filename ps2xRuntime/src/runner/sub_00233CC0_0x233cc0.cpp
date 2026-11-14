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

// Function: sub_00233CC0
// Address: 0x233cc0 - 0x233d10
void sub_00233CC0_0x233cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233CC0_0x233cc0");
#endif

    switch (ctx->pc) {
        case 0x233cf0u: goto label_233cf0;
        default: break;
    }

    ctx->pc = 0x233cc0u;

    // 0x233cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233cc8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x233cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x233ccc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x233cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233cd0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233CD0u;
    {
        const bool branch_taken_0x233cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233cd0) {
            ctx->pc = 0x233CF4u;
            goto label_233cf4;
        }
    }
    ctx->pc = 0x233CD8u;
    // 0x233cd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x233cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233cdc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x233CDCu;
    {
        const bool branch_taken_0x233cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233cdc) {
            ctx->pc = 0x233CF4u;
            goto label_233cf4;
        }
    }
    ctx->pc = 0x233CE4u;
    // 0x233ce4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x233ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233ce8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x233CE8u;
    SET_GPR_U32(ctx, 31, 0x233CF0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x233CE8u, 0x233CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CF0u;
label_233cf0:
    // 0x233cf0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x233cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_233cf4:
    // 0x233cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233cf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x233cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x233cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x233CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D04u;
    // 0x233d04: 0x0  nop
    ctx->pc = 0x233d04u;
    // NOP
    // 0x233d08: 0x0  nop
    ctx->pc = 0x233d08u;
    // NOP
    // 0x233d0c: 0x0  nop
    ctx->pc = 0x233d0cu;
    // NOP
    ctx->pc = 0x233d10u;
}
