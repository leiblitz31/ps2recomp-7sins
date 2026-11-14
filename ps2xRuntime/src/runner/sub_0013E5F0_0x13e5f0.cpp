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

// Function: sub_0013E5F0
// Address: 0x13e5f0 - 0x13e620
void sub_0013E5F0_0x13e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E5F0_0x13e5f0");
#endif

    ctx->pc = 0x13e5f0u;

    // 0x13e5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e5f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13e5f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13e5fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e600: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e604: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x13e604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x13e608: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13e60c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E614u;
    // 0x13e614: 0x0  nop
    ctx->pc = 0x13e614u;
    // NOP
    // 0x13e618: 0x0  nop
    ctx->pc = 0x13e618u;
    // NOP
    // 0x13e61c: 0x0  nop
    ctx->pc = 0x13e61cu;
    // NOP
    ctx->pc = 0x13e620u;
}
