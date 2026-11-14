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

// Function: sub_00150B20
// Address: 0x150b20 - 0x150b60
void sub_00150B20_0x150b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150B20_0x150b20");
#endif

    switch (ctx->pc) {
        case 0x150b40u: goto label_150b40;
        default: break;
    }

    ctx->pc = 0x150b20u;

    // 0x150b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x150b2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x150b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150b30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150b34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x150b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150b38: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x150B38u;
    SET_GPR_U32(ctx, 31, 0x150B40u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x150B38u, 0x150B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B40u;
label_150b40:
    // 0x150b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x150b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150b48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x150B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B54u;
    // 0x150b54: 0x0  nop
    ctx->pc = 0x150b54u;
    // NOP
    // 0x150b58: 0x0  nop
    ctx->pc = 0x150b58u;
    // NOP
    // 0x150b5c: 0x0  nop
    ctx->pc = 0x150b5cu;
    // NOP
    ctx->pc = 0x150b60u;
}
