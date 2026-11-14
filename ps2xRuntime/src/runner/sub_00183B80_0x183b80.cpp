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

// Function: sub_00183B80
// Address: 0x183b80 - 0x183ba0
void sub_00183B80_0x183b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183B80_0x183b80");
#endif

    ctx->pc = 0x183b80u;

    // 0x183b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183b84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x183b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x183b88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x183b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183b8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x183b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183b90: 0x3e00008  jr          $ra
    ctx->pc = 0x183B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183B98u;
    // 0x183b98: 0x0  nop
    ctx->pc = 0x183b98u;
    // NOP
    // 0x183b9c: 0x0  nop
    ctx->pc = 0x183b9cu;
    // NOP
    ctx->pc = 0x183ba0u;
}
