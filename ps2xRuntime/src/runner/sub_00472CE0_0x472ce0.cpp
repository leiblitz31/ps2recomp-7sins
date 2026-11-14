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

// Function: sub_00472CE0
// Address: 0x472ce0 - 0x472d00
void sub_00472CE0_0x472ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472CE0_0x472ce0");
#endif

    ctx->pc = 0x472ce0u;

    // 0x472ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x472ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x472ce4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x472ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x472ce8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x472ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472cec: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x472cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x472cf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x472cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x472cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x472CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472CFCu;
    // 0x472cfc: 0x0  nop
    ctx->pc = 0x472cfcu;
    // NOP
    ctx->pc = 0x472d00u;
}
