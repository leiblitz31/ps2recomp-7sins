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

// Function: sub_00184210
// Address: 0x184210 - 0x184230
void sub_00184210_0x184210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184210_0x184210");
#endif

    ctx->pc = 0x184210u;

    // 0x184210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184214: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x184214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x184218: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x184218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18421c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18421cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184220: 0x3e00008  jr          $ra
    ctx->pc = 0x184220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184228u;
    // 0x184228: 0x0  nop
    ctx->pc = 0x184228u;
    // NOP
    // 0x18422c: 0x0  nop
    ctx->pc = 0x18422cu;
    // NOP
    ctx->pc = 0x184230u;
}
