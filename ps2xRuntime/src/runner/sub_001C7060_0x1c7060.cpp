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

// Function: sub_001C7060
// Address: 0x1c7060 - 0x1c7080
void sub_001C7060_0x1c7060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7060_0x1c7060");
#endif

    ctx->pc = 0x1c7060u;

    // 0x1c7060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7064: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c7064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c7068: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c7068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c706c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c706cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c7070: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7078u;
    // 0x1c7078: 0x0  nop
    ctx->pc = 0x1c7078u;
    // NOP
    // 0x1c707c: 0x0  nop
    ctx->pc = 0x1c707cu;
    // NOP
    ctx->pc = 0x1c7080u;
}
