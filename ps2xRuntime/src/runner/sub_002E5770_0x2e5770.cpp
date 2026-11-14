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

// Function: sub_002E5770
// Address: 0x2e5770 - 0x2e57a0
void sub_002E5770_0x2e5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5770_0x2e5770");
#endif

    ctx->pc = 0x2e5770u;

    // 0x2e5770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5774: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e5774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e5778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e577c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5780: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e5780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e5784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e5784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5788: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x2e5788u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e578c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5790: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e5790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e5794: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E579Cu;
    // 0x2e579c: 0x0  nop
    ctx->pc = 0x2e579cu;
    // NOP
    ctx->pc = 0x2e57a0u;
}
