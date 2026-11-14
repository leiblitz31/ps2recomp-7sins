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

// Function: sub_00141A10
// Address: 0x141a10 - 0x141a50
void sub_00141A10_0x141a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141A10_0x141a10");
#endif

    switch (ctx->pc) {
        case 0x141a30u: goto label_141a30;
        default: break;
    }

    ctx->pc = 0x141a10u;

    // 0x141a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x141a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x141a1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x141a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x141a20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x141a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141a24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x141a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141a28: 0xc050694  jal         func_141A50
    ctx->pc = 0x141A28u;
    SET_GPR_U32(ctx, 31, 0x141A30u);
    ctx->pc = 0x141A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A50u, 0x141A28u, 0x141A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A30u;
label_141a30:
    // 0x141a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141a38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x141a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x141A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141A44u;
    // 0x141a44: 0x0  nop
    ctx->pc = 0x141a44u;
    // NOP
    // 0x141a48: 0x0  nop
    ctx->pc = 0x141a48u;
    // NOP
    // 0x141a4c: 0x0  nop
    ctx->pc = 0x141a4cu;
    // NOP
    ctx->pc = 0x141a50u;
}
