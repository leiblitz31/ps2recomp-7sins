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

// Function: sub_001E7010
// Address: 0x1e7010 - 0x1e7030
void sub_001E7010_0x1e7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7010_0x1e7010");
#endif

    ctx->pc = 0x1e7010u;

    // 0x1e7010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7018: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e7018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e701c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E701Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E701Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7024u;
    // 0x1e7024: 0x0  nop
    ctx->pc = 0x1e7024u;
    // NOP
    // 0x1e7028: 0x0  nop
    ctx->pc = 0x1e7028u;
    // NOP
    // 0x1e702c: 0x0  nop
    ctx->pc = 0x1e702cu;
    // NOP
    ctx->pc = 0x1e7030u;
}
