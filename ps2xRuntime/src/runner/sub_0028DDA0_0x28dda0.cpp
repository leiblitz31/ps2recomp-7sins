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

// Function: sub_0028DDA0
// Address: 0x28dda0 - 0x28ddd0
void sub_0028DDA0_0x28dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DDA0_0x28dda0");
#endif

    ctx->pc = 0x28dda0u;

    // 0x28dda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28dda4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28dda8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ddac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28ddb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ddb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ddb8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x28ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x28ddbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ddc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28ddc4: 0x3e00008  jr          $ra
    ctx->pc = 0x28DDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DDCCu;
    // 0x28ddcc: 0x0  nop
    ctx->pc = 0x28ddccu;
    // NOP
    ctx->pc = 0x28ddd0u;
}
