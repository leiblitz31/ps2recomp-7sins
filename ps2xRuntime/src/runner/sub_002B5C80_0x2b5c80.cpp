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

// Function: sub_002B5C80
// Address: 0x2b5c80 - 0x2b5cc0
void sub_002B5C80_0x2b5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5C80_0x2b5c80");
#endif

    ctx->pc = 0x2b5c80u;

    // 0x2b5c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5c84: 0x8f82bca0  lw          $v0, -0x4360($gp)
    ctx->pc = 0x2b5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
    // 0x2b5c88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5C94u;
    // 0x2b5c94: 0x0  nop
    ctx->pc = 0x2b5c94u;
    // NOP
    // 0x2b5c98: 0x0  nop
    ctx->pc = 0x2b5c98u;
    // NOP
    // 0x2b5c9c: 0x0  nop
    ctx->pc = 0x2b5c9cu;
    // NOP
    // 0x2b5ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5ca4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b5ca8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5cac: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2b5cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5cb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5CBCu;
    // 0x2b5cbc: 0x0  nop
    ctx->pc = 0x2b5cbcu;
    // NOP
    ctx->pc = 0x2b5cc0u;
}
