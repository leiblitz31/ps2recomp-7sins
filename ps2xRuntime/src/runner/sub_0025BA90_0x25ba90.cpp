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

// Function: sub_0025BA90
// Address: 0x25ba90 - 0x25bab0
void sub_0025BA90_0x25ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BA90_0x25ba90");
#endif

    ctx->pc = 0x25ba90u;

    // 0x25ba90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ba94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25ba98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ba9c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x25ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x25baa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25baa4: 0x3e00008  jr          $ra
    ctx->pc = 0x25BAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BAACu;
    // 0x25baac: 0x0  nop
    ctx->pc = 0x25baacu;
    // NOP
    ctx->pc = 0x25bab0u;
}
