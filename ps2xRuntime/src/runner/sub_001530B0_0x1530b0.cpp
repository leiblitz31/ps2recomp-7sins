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

// Function: sub_001530B0
// Address: 0x1530b0 - 0x1530f0
void sub_001530B0_0x1530b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001530B0_0x1530b0");
#endif

    ctx->pc = 0x1530b0u;

    // 0x1530b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1530b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1530b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1530b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1530b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1530bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1530bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1530c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1530c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1530c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1530c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1530c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1530c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1530cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1530ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1530d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1530d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1530d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1530d8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1530d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1530dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1530dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1530e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1530e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1530e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1530E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1530ECu;
    // 0x1530ec: 0x0  nop
    ctx->pc = 0x1530ecu;
    // NOP
    ctx->pc = 0x1530f0u;
}
