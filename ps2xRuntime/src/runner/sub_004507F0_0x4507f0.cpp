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

// Function: sub_004507F0
// Address: 0x4507f0 - 0x450830
void sub_004507F0_0x4507f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004507F0_0x4507f0");
#endif

    ctx->pc = 0x4507f0u;

    // 0x4507f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4507f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4507f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4507f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4507f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4507f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4507fc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x4507fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x450800: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x450800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450804: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x450804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450808: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45080c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450810: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x450810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450814: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x450814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x450818: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x450818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45081c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45081cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x450820: 0x3e00008  jr          $ra
    ctx->pc = 0x450820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450828u;
    // 0x450828: 0x0  nop
    ctx->pc = 0x450828u;
    // NOP
    // 0x45082c: 0x0  nop
    ctx->pc = 0x45082cu;
    // NOP
    ctx->pc = 0x450830u;
}
