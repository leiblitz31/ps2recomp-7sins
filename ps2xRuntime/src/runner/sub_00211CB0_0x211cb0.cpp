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

// Function: sub_00211CB0
// Address: 0x211cb0 - 0x211cd0
void sub_00211CB0_0x211cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211CB0_0x211cb0");
#endif

    ctx->pc = 0x211cb0u;

    // 0x211cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211cb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x211cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x211cb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211cbc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x211cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x211cc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x211cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x211cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x211CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211CCCu;
    // 0x211ccc: 0x0  nop
    ctx->pc = 0x211cccu;
    // NOP
    ctx->pc = 0x211cd0u;
}
