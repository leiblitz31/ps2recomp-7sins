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

// Function: sub_00216810
// Address: 0x216810 - 0x216830
void sub_00216810_0x216810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216810_0x216810");
#endif

    ctx->pc = 0x216810u;

    // 0x216810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216814: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x216814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x216818: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x216818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21681c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x21681cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x216820: 0x3e00008  jr          $ra
    ctx->pc = 0x216820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216828u;
    // 0x216828: 0x0  nop
    ctx->pc = 0x216828u;
    // NOP
    // 0x21682c: 0x0  nop
    ctx->pc = 0x21682cu;
    // NOP
    ctx->pc = 0x216830u;
}
