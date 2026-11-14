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

// Function: sub_002DEA70
// Address: 0x2dea70 - 0x2deab0
void sub_002DEA70_0x2dea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEA70_0x2dea70");
#endif

    ctx->pc = 0x2dea70u;

    // 0x2dea70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dea74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dea74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dea78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea7c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2dea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2dea80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea84: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2dea84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2dea88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dea90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea94: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2dea94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2dea98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea9c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2dea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2deaa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2deaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2deaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEAACu;
    // 0x2deaac: 0x0  nop
    ctx->pc = 0x2deaacu;
    // NOP
    ctx->pc = 0x2deab0u;
}
