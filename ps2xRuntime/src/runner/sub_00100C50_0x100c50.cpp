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

// Function: sub_00100C50
// Address: 0x100c50 - 0x100c80
void sub_00100C50_0x100c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100C50_0x100c50");
#endif

    ctx->pc = 0x100c50u;

    // 0x100c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100c54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100c58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c5c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x100c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x100c60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x100c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x100c68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c6c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x100c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x100c70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x100c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x100c74: 0x3e00008  jr          $ra
    ctx->pc = 0x100C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100C7Cu;
    // 0x100c7c: 0x0  nop
    ctx->pc = 0x100c7cu;
    // NOP
    ctx->pc = 0x100c80u;
}
