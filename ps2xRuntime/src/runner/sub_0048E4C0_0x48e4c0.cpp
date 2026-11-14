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

// Function: sub_0048E4C0
// Address: 0x48e4c0 - 0x48e500
void sub_0048E4C0_0x48e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E4C0_0x48e4c0");
#endif

    ctx->pc = 0x48e4c0u;

    // 0x48e4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48e4c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48e4c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48e4cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e4d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e4d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e4d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x48e4dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e4e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x48e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48e4e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e4e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x48e4ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e4f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48e4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x48E4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E4FCu;
    // 0x48e4fc: 0x0  nop
    ctx->pc = 0x48e4fcu;
    // NOP
    ctx->pc = 0x48e500u;
}
