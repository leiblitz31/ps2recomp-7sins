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

// Function: sub_002CFD40
// Address: 0x2cfd40 - 0x2cfd90
void sub_002CFD40_0x2cfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFD40_0x2cfd40");
#endif

    switch (ctx->pc) {
        case 0x2cfd70u: goto label_2cfd70;
        default: break;
    }

    ctx->pc = 0x2cfd40u;

    // 0x2cfd40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cfd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cfd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfd48: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cfd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cfd4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2cfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfd50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFD50u;
    {
        const bool branch_taken_0x2cfd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd50) {
            ctx->pc = 0x2CFD74u;
            goto label_2cfd74;
        }
    }
    ctx->pc = 0x2CFD58u;
    // 0x2cfd58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2cfd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfd5c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFD5Cu;
    {
        const bool branch_taken_0x2cfd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd5c) {
            ctx->pc = 0x2CFD74u;
            goto label_2cfd74;
        }
    }
    ctx->pc = 0x2CFD64u;
    // 0x2cfd64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cfd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfd68: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2CFD68u;
    SET_GPR_U32(ctx, 31, 0x2CFD70u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2CFD68u, 0x2CFD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD70u;
label_2cfd70:
    // 0x2cfd70: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2cfd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2cfd74:
    // 0x2cfd74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfd78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cfd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cfd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD84u;
    // 0x2cfd84: 0x0  nop
    ctx->pc = 0x2cfd84u;
    // NOP
    // 0x2cfd88: 0x0  nop
    ctx->pc = 0x2cfd88u;
    // NOP
    // 0x2cfd8c: 0x0  nop
    ctx->pc = 0x2cfd8cu;
    // NOP
    ctx->pc = 0x2cfd90u;
}
