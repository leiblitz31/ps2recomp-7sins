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

// Function: sub_0011BFB0
// Address: 0x11bfb0 - 0x11bfe0
void sub_0011BFB0_0x11bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BFB0_0x11bfb0");
#endif

    ctx->pc = 0x11bfb0u;

    // 0x11bfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11bfb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11bfb8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x11bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11bfbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bfc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bfc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11bfc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bfcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11bfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11bfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x11BFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BFD8u;
    // 0x11bfd8: 0x0  nop
    ctx->pc = 0x11bfd8u;
    // NOP
    // 0x11bfdc: 0x0  nop
    ctx->pc = 0x11bfdcu;
    // NOP
    ctx->pc = 0x11bfe0u;
}
