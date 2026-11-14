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

// Function: sub_00193770
// Address: 0x193770 - 0x193790
void sub_00193770_0x193770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193770_0x193770");
#endif

    ctx->pc = 0x193770u;

    // 0x193770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193774: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x193774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x193778: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x193778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19377c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x19377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193780: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x193780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193784: 0x3e00008  jr          $ra
    ctx->pc = 0x193784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19378Cu;
    // 0x19378c: 0x0  nop
    ctx->pc = 0x19378cu;
    // NOP
    ctx->pc = 0x193790u;
}
