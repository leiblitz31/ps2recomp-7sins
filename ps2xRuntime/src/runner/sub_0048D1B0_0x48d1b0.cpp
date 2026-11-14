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

// Function: sub_0048D1B0
// Address: 0x48d1b0 - 0x48d1e0
void sub_0048D1B0_0x48d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D1B0_0x48d1b0");
#endif

    ctx->pc = 0x48d1b0u;

    // 0x48d1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48d1b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48d1b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48d1bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d1c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d1c4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x48d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x48d1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d1cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48d1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48d1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x48D1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D1D8u;
    // 0x48d1d8: 0x0  nop
    ctx->pc = 0x48d1d8u;
    // NOP
    // 0x48d1dc: 0x0  nop
    ctx->pc = 0x48d1dcu;
    // NOP
    ctx->pc = 0x48d1e0u;
}
