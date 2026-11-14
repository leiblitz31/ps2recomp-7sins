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

// Function: sub_0010CF00
// Address: 0x10cf00 - 0x10cf30
void sub_0010CF00_0x10cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF00_0x10cf00");
#endif

    ctx->pc = 0x10cf00u;

    // 0x10cf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cf04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10cf08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x10cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10cf0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cf10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cf14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10cf18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cf1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10cf1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CF28u;
    // 0x10cf28: 0x0  nop
    ctx->pc = 0x10cf28u;
    // NOP
    // 0x10cf2c: 0x0  nop
    ctx->pc = 0x10cf2cu;
    // NOP
    ctx->pc = 0x10cf30u;
}
