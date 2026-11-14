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

// Function: sub_0025A580
// Address: 0x25a580 - 0x25a5a0
void sub_0025A580_0x25a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A580_0x25a580");
#endif

    ctx->pc = 0x25a580u;

    // 0x25a580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a584: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a588: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25a588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a58c: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x25a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x25a590: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25a594: 0x3e00008  jr          $ra
    ctx->pc = 0x25A594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A59Cu;
    // 0x25a59c: 0x0  nop
    ctx->pc = 0x25a59cu;
    // NOP
    ctx->pc = 0x25a5a0u;
}
