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

// Function: sub_0024F2B0
// Address: 0x24f2b0 - 0x24f2e0
void sub_0024F2B0_0x24f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F2B0_0x24f2b0");
#endif

    ctx->pc = 0x24f2b0u;

    // 0x24f2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f2b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24f2b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x24f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24f2bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f2c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f2c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f2c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f2cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24f2ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F2D8u;
    // 0x24f2d8: 0x0  nop
    ctx->pc = 0x24f2d8u;
    // NOP
    // 0x24f2dc: 0x0  nop
    ctx->pc = 0x24f2dcu;
    // NOP
    ctx->pc = 0x24f2e0u;
}
