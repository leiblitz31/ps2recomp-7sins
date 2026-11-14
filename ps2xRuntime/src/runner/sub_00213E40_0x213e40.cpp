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

// Function: sub_00213E40
// Address: 0x213e40 - 0x213e80
void sub_00213E40_0x213e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213E40_0x213e40");
#endif

    switch (ctx->pc) {
        case 0x213e68u: goto label_213e68;
        default: break;
    }

    ctx->pc = 0x213e40u;

    // 0x213e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x213e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x213e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213e48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x213e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x213e4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x213e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x213e50: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x213e50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x213e54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x213e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213e58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x213e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213e5c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x213e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x213e60: 0xc084fa0  jal         func_213E80
    ctx->pc = 0x213E60u;
    SET_GPR_U32(ctx, 31, 0x213E68u);
    ctx->pc = 0x213E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E80u, 0x213E60u, 0x213E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E68u;
label_213e68:
    // 0x213e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213e6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x213e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x213e70: 0x3e00008  jr          $ra
    ctx->pc = 0x213E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213E78u;
    // 0x213e78: 0x0  nop
    ctx->pc = 0x213e78u;
    // NOP
    // 0x213e7c: 0x0  nop
    ctx->pc = 0x213e7cu;
    // NOP
    ctx->pc = 0x213e80u;
}
