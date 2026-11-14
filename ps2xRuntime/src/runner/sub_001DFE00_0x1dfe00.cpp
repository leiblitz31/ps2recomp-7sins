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

// Function: sub_001DFE00
// Address: 0x1dfe00 - 0x1dfe40
void sub_001DFE00_0x1dfe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFE00_0x1dfe00");
#endif

    ctx->pc = 0x1dfe00u;

    // 0x1dfe00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfe04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dfe08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dfe0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfe10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dfe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfe14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfe18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dfe18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1dfe1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dfe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfe20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dfe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dfe24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfe28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1dfe28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1dfe2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfe30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dfe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dfe34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFE3Cu;
    // 0x1dfe3c: 0x0  nop
    ctx->pc = 0x1dfe3cu;
    // NOP
    ctx->pc = 0x1dfe40u;
}
