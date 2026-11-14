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

// Function: sub_00258A20
// Address: 0x258a20 - 0x258a60
void sub_00258A20_0x258a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258A20_0x258a20");
#endif

    switch (ctx->pc) {
        case 0x258a48u: goto label_258a48;
        default: break;
    }

    ctx->pc = 0x258a20u;

    // 0x258a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258a28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258a2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x258a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x258a30: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x258a30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x258a34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258a38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x258a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258a3c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x258a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x258a40: 0xc096298  jal         func_258A60
    ctx->pc = 0x258A40u;
    SET_GPR_U32(ctx, 31, 0x258A48u);
    ctx->pc = 0x258A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A60u, 0x258A40u, 0x258A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A48u;
label_258a48:
    // 0x258a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258a4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x258a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x258a50: 0x3e00008  jr          $ra
    ctx->pc = 0x258A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258A58u;
    // 0x258a58: 0x0  nop
    ctx->pc = 0x258a58u;
    // NOP
    // 0x258a5c: 0x0  nop
    ctx->pc = 0x258a5cu;
    // NOP
    ctx->pc = 0x258a60u;
}
