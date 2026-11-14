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

// Function: sub_002B6B20
// Address: 0x2b6b20 - 0x2b6b60
void sub_002B6B20_0x2b6b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6B20_0x2b6b20");
#endif

    switch (ctx->pc) {
        case 0x2b6b40u: goto label_2b6b40;
        default: break;
    }

    ctx->pc = 0x2b6b20u;

    // 0x2b6b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b6b2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b6b30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6b38: 0xc0adad8  jal         func_2B6B60
    ctx->pc = 0x2B6B38u;
    SET_GPR_U32(ctx, 31, 0x2B6B40u);
    ctx->pc = 0x2B6B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6B60u, 0x2B6B38u, 0x2B6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B40u;
label_2b6b40:
    // 0x2b6b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6b48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6B54u;
    // 0x2b6b54: 0x0  nop
    ctx->pc = 0x2b6b54u;
    // NOP
    // 0x2b6b58: 0x0  nop
    ctx->pc = 0x2b6b58u;
    // NOP
    // 0x2b6b5c: 0x0  nop
    ctx->pc = 0x2b6b5cu;
    // NOP
    ctx->pc = 0x2b6b60u;
}
