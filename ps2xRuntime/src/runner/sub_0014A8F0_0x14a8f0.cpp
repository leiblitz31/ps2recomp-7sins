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

// Function: sub_0014A8F0
// Address: 0x14a8f0 - 0x14a920
void sub_0014A8F0_0x14a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A8F0_0x14a8f0");
#endif

    ctx->pc = 0x14a8f0u;

    // 0x14a8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a8f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14a8f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14a8fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a900: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a904: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14a904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14a908: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a90c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14a90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14a910: 0x3e00008  jr          $ra
    ctx->pc = 0x14A910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A918u;
    // 0x14a918: 0x0  nop
    ctx->pc = 0x14a918u;
    // NOP
    // 0x14a91c: 0x0  nop
    ctx->pc = 0x14a91cu;
    // NOP
    ctx->pc = 0x14a920u;
}
