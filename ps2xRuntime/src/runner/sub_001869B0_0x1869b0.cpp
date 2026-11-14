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

// Function: sub_001869B0
// Address: 0x1869b0 - 0x1869e0
void sub_001869B0_0x1869b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001869B0_0x1869b0");
#endif

    ctx->pc = 0x1869b0u;

    // 0x1869b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1869b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1869b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1869b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1869b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1869b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1869bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1869bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1869c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1869c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1869c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1869c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1869c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1869c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1869cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1869ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1869d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1869d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1869d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1869D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1869D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1869DCu;
    // 0x1869dc: 0x0  nop
    ctx->pc = 0x1869dcu;
    // NOP
    ctx->pc = 0x1869e0u;
}
