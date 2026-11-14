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

// Function: sub_0028F0F0
// Address: 0x28f0f0 - 0x28f120
void sub_0028F0F0_0x28f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F0F0_0x28f0f0");
#endif

    ctx->pc = 0x28f0f0u;

    // 0x28f0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f0f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28f0f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x28f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28f0fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f100: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f104: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28f104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28f108: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f10c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28f10cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f110: 0x3e00008  jr          $ra
    ctx->pc = 0x28F110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F118u;
    // 0x28f118: 0x0  nop
    ctx->pc = 0x28f118u;
    // NOP
    // 0x28f11c: 0x0  nop
    ctx->pc = 0x28f11cu;
    // NOP
    ctx->pc = 0x28f120u;
}
