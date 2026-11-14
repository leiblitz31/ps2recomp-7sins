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

// Function: sub_00187740
// Address: 0x187740 - 0x187770
void sub_00187740_0x187740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187740_0x187740");
#endif

    ctx->pc = 0x187740u;

    // 0x187740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187744: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x187744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x187748: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x187748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x18774c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187750: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x187750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187754: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18775c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18775cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x187760: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x187764: 0x3e00008  jr          $ra
    ctx->pc = 0x187764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18776Cu;
    // 0x18776c: 0x0  nop
    ctx->pc = 0x18776cu;
    // NOP
    ctx->pc = 0x187770u;
}
