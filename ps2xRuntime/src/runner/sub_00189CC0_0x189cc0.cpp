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

// Function: sub_00189CC0
// Address: 0x189cc0 - 0x189cf0
void sub_00189CC0_0x189cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189CC0_0x189cc0");
#endif

    ctx->pc = 0x189cc0u;

    // 0x189cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189cc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x189cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x189cc8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x189cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x189ccc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x189cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189cd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189cd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x189cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x189cd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189cdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x189CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189CE8u;
    // 0x189ce8: 0x0  nop
    ctx->pc = 0x189ce8u;
    // NOP
    // 0x189cec: 0x0  nop
    ctx->pc = 0x189cecu;
    // NOP
    ctx->pc = 0x189cf0u;
}
