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

// Function: sub_00469420
// Address: 0x469420 - 0x469460
void sub_00469420_0x469420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469420_0x469420");
#endif

    ctx->pc = 0x469420u;

    // 0x469420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469424: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x469424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x469428: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x469428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x46942c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x46942cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x469430: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x469430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469434: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x469434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469438: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x469438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46943c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469440: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x469440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469444: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x469444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x469448: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x469448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46944c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46944cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x469450: 0x3e00008  jr          $ra
    ctx->pc = 0x469450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469458u;
    // 0x469458: 0x0  nop
    ctx->pc = 0x469458u;
    // NOP
    // 0x46945c: 0x0  nop
    ctx->pc = 0x46945cu;
    // NOP
    ctx->pc = 0x469460u;
}
