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

// Function: sub_00253F10
// Address: 0x253f10 - 0x253f50
void sub_00253F10_0x253f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253F10_0x253f10");
#endif

    ctx->pc = 0x253f10u;

    // 0x253f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253f14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x253f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x253f18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x253f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x253f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x253f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x253f2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x253f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253f30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f34: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x253f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x253f38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f3c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x253f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253f40: 0x3e00008  jr          $ra
    ctx->pc = 0x253F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253F48u;
    // 0x253f48: 0x0  nop
    ctx->pc = 0x253f48u;
    // NOP
    // 0x253f4c: 0x0  nop
    ctx->pc = 0x253f4cu;
    // NOP
    ctx->pc = 0x253f50u;
}
