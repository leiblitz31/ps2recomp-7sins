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

// Function: sub_001E7030
// Address: 0x1e7030 - 0x1e7060
void sub_001E7030_0x1e7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7030_0x1e7030");
#endif

    ctx->pc = 0x1e7030u;

    // 0x1e7030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7034: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e7034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e7038: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1e7038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1e703c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7040: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e7040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7044: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e7044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e7048: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e7048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e704c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e704cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e7050: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7058u;
    // 0x1e7058: 0x0  nop
    ctx->pc = 0x1e7058u;
    // NOP
    // 0x1e705c: 0x0  nop
    ctx->pc = 0x1e705cu;
    // NOP
    ctx->pc = 0x1e7060u;
}
