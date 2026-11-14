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

// Function: sub_001FE8F0
// Address: 0x1fe8f0 - 0x1fe910
void sub_001FE8F0_0x1fe8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE8F0_0x1fe8f0");
#endif

    ctx->pc = 0x1fe8f0u;

    // 0x1fe8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe8f4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fe8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1fe8f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1fe8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1fe8fc: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1fe8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1fe900: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fe900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fe904: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE90Cu;
    // 0x1fe90c: 0x0  nop
    ctx->pc = 0x1fe90cu;
    // NOP
    ctx->pc = 0x1fe910u;
}
