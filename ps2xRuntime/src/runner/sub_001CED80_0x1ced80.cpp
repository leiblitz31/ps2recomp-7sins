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

// Function: sub_001CED80
// Address: 0x1ced80 - 0x1cedc0
void sub_001CED80_0x1ced80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CED80_0x1ced80");
#endif

    switch (ctx->pc) {
        case 0x1ceda8u: goto label_1ceda8;
        default: break;
    }

    ctx->pc = 0x1ced80u;

    // 0x1ced80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ced80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ced84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ced84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ced88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ced88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ced8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ced8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ced90: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1ced90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ced94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ced94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ced98: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ced98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ced9c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1ced9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ceda0: 0xc073b70  jal         func_1CEDC0
    ctx->pc = 0x1CEDA0u;
    SET_GPR_U32(ctx, 31, 0x1CEDA8u);
    ctx->pc = 0x1CEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEDC0u, 0x1CEDA0u, 0x1CEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDA8u;
label_1ceda8:
    // 0x1ceda8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ceda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cedac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1cedacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cedb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEDB8u;
    // 0x1cedb8: 0x0  nop
    ctx->pc = 0x1cedb8u;
    // NOP
    // 0x1cedbc: 0x0  nop
    ctx->pc = 0x1cedbcu;
    // NOP
    ctx->pc = 0x1cedc0u;
}
