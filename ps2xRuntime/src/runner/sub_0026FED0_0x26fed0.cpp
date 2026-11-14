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

// Function: sub_0026FED0
// Address: 0x26fed0 - 0x26fef0
void sub_0026FED0_0x26fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FED0_0x26fed0");
#endif

    ctx->pc = 0x26fed0u;

    // 0x26fed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26fed4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26fed8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fedc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26fedcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26fee0: 0x3e00008  jr          $ra
    ctx->pc = 0x26FEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FEE8u;
    // 0x26fee8: 0x0  nop
    ctx->pc = 0x26fee8u;
    // NOP
    // 0x26feec: 0x0  nop
    ctx->pc = 0x26feecu;
    // NOP
    ctx->pc = 0x26fef0u;
}
