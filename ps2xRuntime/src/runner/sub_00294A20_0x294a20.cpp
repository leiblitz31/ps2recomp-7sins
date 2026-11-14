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

// Function: sub_00294A20
// Address: 0x294a20 - 0x294a60
void sub_00294A20_0x294a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A20_0x294a20");
#endif

    switch (ctx->pc) {
        case 0x294a40u: goto label_294a40;
        default: break;
    }

    ctx->pc = 0x294a20u;

    // 0x294a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x294a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x294a2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x294a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x294a30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x294a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294a34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x294a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294a38: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x294A38u;
    SET_GPR_U32(ctx, 31, 0x294A40u);
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x294A38u, 0x294A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A40u;
label_294a40:
    // 0x294a40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294a48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x294a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x294a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x294A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A54u;
    // 0x294a54: 0x0  nop
    ctx->pc = 0x294a54u;
    // NOP
    // 0x294a58: 0x0  nop
    ctx->pc = 0x294a58u;
    // NOP
    // 0x294a5c: 0x0  nop
    ctx->pc = 0x294a5cu;
    // NOP
    ctx->pc = 0x294a60u;
}
