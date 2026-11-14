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

// Function: sub_00248DF0
// Address: 0x248df0 - 0x248e40
void sub_00248DF0_0x248df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248DF0_0x248df0");
#endif

    switch (ctx->pc) {
        case 0x248e18u: goto label_248e18;
        case 0x248e2cu: goto label_248e2c;
        default: break;
    }

    ctx->pc = 0x248df0u;

    // 0x248df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x248df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248df8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x248df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x248dfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x248dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x248e00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x248e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x248e04: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x248e08: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x248e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248e0c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x248e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248e10: 0xc093bc4  jal         func_24EF10
    ctx->pc = 0x248E10u;
    SET_GPR_U32(ctx, 31, 0x248E18u);
    ctx->pc = 0x24EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EF10u, 0x248E10u, 0x248E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E18u;
label_248e18:
    // 0x248e18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x248e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248e1c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x248e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x248e20: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x248e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x248e24: 0xc092390  jal         func_248E40
    ctx->pc = 0x248E24u;
    SET_GPR_U32(ctx, 31, 0x248E2Cu);
    ctx->pc = 0x248E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E40u, 0x248E24u, 0x248E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E2Cu;
label_248e2c:
    // 0x248e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248e30: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x248e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248e34: 0x3e00008  jr          $ra
    ctx->pc = 0x248E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E3Cu;
    // 0x248e3c: 0x0  nop
    ctx->pc = 0x248e3cu;
    // NOP
    ctx->pc = 0x248e40u;
}
