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

// Function: sub_0022CA30
// Address: 0x22ca30 - 0x22ca70
void sub_0022CA30_0x22ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CA30_0x22ca30");
#endif

    switch (ctx->pc) {
        case 0x22ca50u: goto label_22ca50;
        default: break;
    }

    ctx->pc = 0x22ca30u;

    // 0x22ca30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22ca34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ca38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22ca3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22ca40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ca44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ca48: 0xc08b29c  jal         func_22CA70
    ctx->pc = 0x22CA48u;
    SET_GPR_U32(ctx, 31, 0x22CA50u);
    ctx->pc = 0x22CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CA70u, 0x22CA48u, 0x22CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA50u;
label_22ca50:
    // 0x22ca50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ca54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ca54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ca58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22ca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x22CA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CA64u;
    // 0x22ca64: 0x0  nop
    ctx->pc = 0x22ca64u;
    // NOP
    // 0x22ca68: 0x0  nop
    ctx->pc = 0x22ca68u;
    // NOP
    // 0x22ca6c: 0x0  nop
    ctx->pc = 0x22ca6cu;
    // NOP
    ctx->pc = 0x22ca70u;
}
