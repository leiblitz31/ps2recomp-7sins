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

// Function: sub_00186740
// Address: 0x186740 - 0x186760
void sub_00186740_0x186740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186740_0x186740");
#endif

    ctx->pc = 0x186740u;

    // 0x186740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186744: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x186744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x186748: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x186748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18674c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18674cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x186750: 0x3e00008  jr          $ra
    ctx->pc = 0x186750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186758u;
    // 0x186758: 0x0  nop
    ctx->pc = 0x186758u;
    // NOP
    // 0x18675c: 0x0  nop
    ctx->pc = 0x18675cu;
    // NOP
    ctx->pc = 0x186760u;
}
