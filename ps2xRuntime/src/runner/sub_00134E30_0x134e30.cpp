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

// Function: sub_00134E30
// Address: 0x134e30 - 0x134e50
void sub_00134E30_0x134e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134E30_0x134e30");
#endif

    ctx->pc = 0x134e30u;

    // 0x134e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134e34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x134e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x134e38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x134e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134e3c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x134e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x134e40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x134e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134e44: 0x3e00008  jr          $ra
    ctx->pc = 0x134E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134E4Cu;
    // 0x134e4c: 0x0  nop
    ctx->pc = 0x134e4cu;
    // NOP
    ctx->pc = 0x134e50u;
}
