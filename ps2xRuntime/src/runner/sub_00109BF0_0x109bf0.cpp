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

// Function: sub_00109BF0
// Address: 0x109bf0 - 0x109c10
void sub_00109BF0_0x109bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109BF0_0x109bf0");
#endif

    ctx->pc = 0x109bf0u;

    // 0x109bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109bf4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x109bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x109bf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x109bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109bfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x109bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x109c00: 0x3e00008  jr          $ra
    ctx->pc = 0x109C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109C08u;
    // 0x109c08: 0x0  nop
    ctx->pc = 0x109c08u;
    // NOP
    // 0x109c0c: 0x0  nop
    ctx->pc = 0x109c0cu;
    // NOP
    ctx->pc = 0x109c10u;
}
