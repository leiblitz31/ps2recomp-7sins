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

// Function: sub_00115F10
// Address: 0x115f10 - 0x115f40
void sub_00115F10_0x115f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115F10_0x115f10");
#endif

    ctx->pc = 0x115f10u;

    // 0x115f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115f14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x115f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115f18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x115f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115f1c: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x115f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115f24: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x115f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x115f28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x115f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115f2c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x115f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115f30: 0x3e00008  jr          $ra
    ctx->pc = 0x115F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F38u;
    // 0x115f38: 0x0  nop
    ctx->pc = 0x115f38u;
    // NOP
    // 0x115f3c: 0x0  nop
    ctx->pc = 0x115f3cu;
    // NOP
    ctx->pc = 0x115f40u;
}
