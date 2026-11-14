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

// Function: sub_0014ACA0
// Address: 0x14aca0 - 0x14acd0
void sub_0014ACA0_0x14aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ACA0_0x14aca0");
#endif

    ctx->pc = 0x14aca0u;

    // 0x14aca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14aca4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14aca8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x14aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x14acac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14acb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14acb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14acb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14acbc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x14acbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14acc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14acc4: 0x3e00008  jr          $ra
    ctx->pc = 0x14ACC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ACC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ACCCu;
    // 0x14accc: 0x0  nop
    ctx->pc = 0x14acccu;
    // NOP
    ctx->pc = 0x14acd0u;
}
