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

// Function: sub_00480200
// Address: 0x480200 - 0x480220
void sub_00480200_0x480200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480200_0x480200");
#endif

    ctx->pc = 0x480200u;

    // 0x480200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x480200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x480204: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x480204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x480208: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x480208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48020c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x480210: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x480210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x480214: 0x3e00008  jr          $ra
    ctx->pc = 0x480214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48021Cu;
    // 0x48021c: 0x0  nop
    ctx->pc = 0x48021cu;
    // NOP
    ctx->pc = 0x480220u;
}
