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

// Function: sub_00216B20
// Address: 0x216b20 - 0x216b40
void sub_00216B20_0x216b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216B20_0x216b20");
#endif

    ctx->pc = 0x216b20u;

    // 0x216b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216b24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x216b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x216b28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216b2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x216b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216b30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x216b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x216b34: 0x3e00008  jr          $ra
    ctx->pc = 0x216B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216B3Cu;
    // 0x216b3c: 0x0  nop
    ctx->pc = 0x216b3cu;
    // NOP
    ctx->pc = 0x216b40u;
}
