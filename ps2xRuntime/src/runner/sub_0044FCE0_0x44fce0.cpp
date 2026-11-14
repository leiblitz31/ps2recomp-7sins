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

// Function: sub_0044FCE0
// Address: 0x44fce0 - 0x44fd00
void sub_0044FCE0_0x44fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FCE0_0x44fce0");
#endif

    ctx->pc = 0x44fce0u;

    // 0x44fce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44fce4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x44fce8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44fcec: 0xaf83bf24  sw          $v1, -0x40DC($gp)
    ctx->pc = 0x44fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950692), GPR_U32(ctx, 3));
    // 0x44fcf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44fcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44fcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x44FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44FCFCu;
    // 0x44fcfc: 0x0  nop
    ctx->pc = 0x44fcfcu;
    // NOP
    ctx->pc = 0x44fd00u;
}
