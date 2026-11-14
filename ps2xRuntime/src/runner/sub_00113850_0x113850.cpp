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

// Function: sub_00113850
// Address: 0x113850 - 0x113880
void sub_00113850_0x113850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113850_0x113850");
#endif

    ctx->pc = 0x113850u;

    // 0x113850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113854: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x113854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x113858: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x113858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11385c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113860: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113864: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x113864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x113868: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x113868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11386c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11386cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x113870: 0x3e00008  jr          $ra
    ctx->pc = 0x113870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113878u;
    // 0x113878: 0x0  nop
    ctx->pc = 0x113878u;
    // NOP
    // 0x11387c: 0x0  nop
    ctx->pc = 0x11387cu;
    // NOP
    ctx->pc = 0x113880u;
}
