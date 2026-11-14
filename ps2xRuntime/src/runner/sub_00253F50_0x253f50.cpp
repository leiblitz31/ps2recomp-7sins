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

// Function: sub_00253F50
// Address: 0x253f50 - 0x253fa0
void sub_00253F50_0x253f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253F50_0x253f50");
#endif

    ctx->pc = 0x253f50u;

    // 0x253f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253f54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x253f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x253f58: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x253f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x253f5c: 0x8c43c178  lw          $v1, -0x3E88($v0)
    ctx->pc = 0x253f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60C178u));
    // 0x253f60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x253f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x253f68: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x253f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x253f6c: 0x8c43c17c  lw          $v1, -0x3E84($v0)
    ctx->pc = 0x253f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60C17Cu));
    // 0x253f70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f74: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x253f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x253f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f80: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x253f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x253f84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x253f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x253F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253F94u;
    // 0x253f94: 0x0  nop
    ctx->pc = 0x253f94u;
    // NOP
    // 0x253f98: 0x0  nop
    ctx->pc = 0x253f98u;
    // NOP
    // 0x253f9c: 0x0  nop
    ctx->pc = 0x253f9cu;
    // NOP
    ctx->pc = 0x253fa0u;
}
