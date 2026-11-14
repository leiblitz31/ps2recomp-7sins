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

// Function: sub_00142430
// Address: 0x142430 - 0x142460
void sub_00142430_0x142430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142430_0x142430");
#endif

    ctx->pc = 0x142430u;

    // 0x142430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142434: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x142434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x142438: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14243c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14243cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x142440: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142444: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x142444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x142448: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14244c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14244cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x142450: 0x3e00008  jr          $ra
    ctx->pc = 0x142450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142458u;
    // 0x142458: 0x0  nop
    ctx->pc = 0x142458u;
    // NOP
    // 0x14245c: 0x0  nop
    ctx->pc = 0x14245cu;
    // NOP
    ctx->pc = 0x142460u;
}
