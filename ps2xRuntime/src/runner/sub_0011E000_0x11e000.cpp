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

// Function: sub_0011E000
// Address: 0x11e000 - 0x11e020
void sub_0011E000_0x11e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E000_0x11e000");
#endif

    ctx->pc = 0x11e000u;

    // 0x11e000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e004: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11e004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11e008: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e00c: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x11e00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x11e010: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11e014: 0x3e00008  jr          $ra
    ctx->pc = 0x11E014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E01Cu;
    // 0x11e01c: 0x0  nop
    ctx->pc = 0x11e01cu;
    // NOP
    ctx->pc = 0x11e020u;
}
