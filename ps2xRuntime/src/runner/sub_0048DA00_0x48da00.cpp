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

// Function: sub_0048DA00
// Address: 0x48da00 - 0x48da50
void sub_0048DA00_0x48da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DA00_0x48da00");
#endif

    ctx->pc = 0x48da00u;

    // 0x48da00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48da04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48da04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48da08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48da08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48da0c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x48da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x48da10: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x48da10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x48da14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48da14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48da18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48da1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x48da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x48da20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48da24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48da24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48da28: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x48da28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x48da2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x48da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48da30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48da34: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x48da34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x48da38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48da38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48da3c: 0x3e00008  jr          $ra
    ctx->pc = 0x48DA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DA44u;
    // 0x48da44: 0x0  nop
    ctx->pc = 0x48da44u;
    // NOP
    // 0x48da48: 0x0  nop
    ctx->pc = 0x48da48u;
    // NOP
    // 0x48da4c: 0x0  nop
    ctx->pc = 0x48da4cu;
    // NOP
    ctx->pc = 0x48da50u;
}
