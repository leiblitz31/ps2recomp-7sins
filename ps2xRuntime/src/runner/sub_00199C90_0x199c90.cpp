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

// Function: sub_00199C90
// Address: 0x199c90 - 0x199cb0
void sub_00199C90_0x199c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199C90_0x199c90");
#endif

    ctx->pc = 0x199c90u;

    // 0x199c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199c94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x199c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x199c98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x199c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c9c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x199c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199ca0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x199ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x199ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x199CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199CACu;
    // 0x199cac: 0x0  nop
    ctx->pc = 0x199cacu;
    // NOP
    ctx->pc = 0x199cb0u;
}
