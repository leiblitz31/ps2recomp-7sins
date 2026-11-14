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

// Function: sub_00244020
// Address: 0x244020 - 0x244040
void sub_00244020_0x244020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244020_0x244020");
#endif

    ctx->pc = 0x244020u;

    // 0x244020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244024: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x244024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x244028: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x244028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24402c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x24402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244030: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x244030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x244034: 0x3e00008  jr          $ra
    ctx->pc = 0x244034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24403Cu;
    // 0x24403c: 0x0  nop
    ctx->pc = 0x24403cu;
    // NOP
    ctx->pc = 0x244040u;
}
