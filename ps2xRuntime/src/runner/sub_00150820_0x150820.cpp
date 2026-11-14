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

// Function: sub_00150820
// Address: 0x150820 - 0x150840
void sub_00150820_0x150820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150820_0x150820");
#endif

    ctx->pc = 0x150820u;

    // 0x150820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150824: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x150824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x150828: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x150828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15082c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x150830: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150834: 0x3e00008  jr          $ra
    ctx->pc = 0x150834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15083Cu;
    // 0x15083c: 0x0  nop
    ctx->pc = 0x15083cu;
    // NOP
    ctx->pc = 0x150840u;
}
