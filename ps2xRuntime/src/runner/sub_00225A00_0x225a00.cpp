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

// Function: sub_00225A00
// Address: 0x225a00 - 0x225a50
void sub_00225A00_0x225a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225A00_0x225a00");
#endif

    switch (ctx->pc) {
        case 0x225a20u: goto label_225a20;
        case 0x225a38u: goto label_225a38;
        default: break;
    }

    ctx->pc = 0x225a00u;

    // 0x225a00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x225a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225a08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x225a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x225a0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x225a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x225a10: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x225a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x225a14: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x225a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x225a18: 0xc0896bc  jal         func_225AF0
    ctx->pc = 0x225A18u;
    SET_GPR_U32(ctx, 31, 0x225A20u);
    ctx->pc = 0x225AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225AF0u, 0x225A18u, 0x225A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A20u;
label_225a20:
    // 0x225a20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x225a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225a24: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x225a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225a28: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x225a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225a2c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x225a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x225a30: 0xc089694  jal         func_225A50
    ctx->pc = 0x225A30u;
    SET_GPR_U32(ctx, 31, 0x225A38u);
    ctx->pc = 0x225A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225A50u, 0x225A30u, 0x225A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A38u;
label_225a38:
    // 0x225a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a3c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x225a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x225a40: 0x3e00008  jr          $ra
    ctx->pc = 0x225A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225A48u;
    // 0x225a48: 0x0  nop
    ctx->pc = 0x225a48u;
    // NOP
    // 0x225a4c: 0x0  nop
    ctx->pc = 0x225a4cu;
    // NOP
    ctx->pc = 0x225a50u;
}
