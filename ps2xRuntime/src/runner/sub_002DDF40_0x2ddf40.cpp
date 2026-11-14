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

// Function: sub_002DDF40
// Address: 0x2ddf40 - 0x2ddf80
void sub_002DDF40_0x2ddf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF40_0x2ddf40");
#endif

    switch (ctx->pc) {
        case 0x2ddf68u: goto label_2ddf68;
        default: break;
    }

    ctx->pc = 0x2ddf40u;

    // 0x2ddf40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ddf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ddf44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddf48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ddf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ddf4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2ddf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2ddf50: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2ddf50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddf54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ddf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddf58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ddf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddf5c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2ddf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2ddf60: 0xc0b77e0  jal         func_2DDF80
    ctx->pc = 0x2DDF60u;
    SET_GPR_U32(ctx, 31, 0x2DDF68u);
    ctx->pc = 0x2DDF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF80u, 0x2DDF60u, 0x2DDF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF68u;
label_2ddf68:
    // 0x2ddf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddf6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ddf6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ddf70: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDF78u;
    // 0x2ddf78: 0x0  nop
    ctx->pc = 0x2ddf78u;
    // NOP
    // 0x2ddf7c: 0x0  nop
    ctx->pc = 0x2ddf7cu;
    // NOP
    ctx->pc = 0x2ddf80u;
}
