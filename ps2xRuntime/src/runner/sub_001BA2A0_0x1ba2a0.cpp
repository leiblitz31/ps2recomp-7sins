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

// Function: sub_001BA2A0
// Address: 0x1ba2a0 - 0x1ba2e0
void sub_001BA2A0_0x1ba2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA2A0_0x1ba2a0");
#endif

    switch (ctx->pc) {
        case 0x1ba2c0u: goto label_1ba2c0;
        default: break;
    }

    ctx->pc = 0x1ba2a0u;

    // 0x1ba2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba2a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba2ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ba2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ba2b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba2b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ba2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba2b8: 0xc070fdc  jal         func_1C3F70
    ctx->pc = 0x1BA2B8u;
    SET_GPR_U32(ctx, 31, 0x1BA2C0u);
    ctx->pc = 0x1C3F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F70u, 0x1BA2B8u, 0x1BA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2C0u;
label_1ba2c0:
    // 0x1ba2c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ba2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba2c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ba2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA2D4u;
    // 0x1ba2d4: 0x0  nop
    ctx->pc = 0x1ba2d4u;
    // NOP
    // 0x1ba2d8: 0x0  nop
    ctx->pc = 0x1ba2d8u;
    // NOP
    // 0x1ba2dc: 0x0  nop
    ctx->pc = 0x1ba2dcu;
    // NOP
    ctx->pc = 0x1ba2e0u;
}
