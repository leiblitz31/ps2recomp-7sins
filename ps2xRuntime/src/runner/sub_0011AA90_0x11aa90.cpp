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

// Function: sub_0011AA90
// Address: 0x11aa90 - 0x11aac0
void sub_0011AA90_0x11aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AA90_0x11aa90");
#endif

    ctx->pc = 0x11aa90u;

    // 0x11aa90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11aa94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11aa98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa9c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x11aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11aaa0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x11aaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x11aaa4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11aaa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11aaa8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11aaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11aaac: 0x3e00008  jr          $ra
    ctx->pc = 0x11AAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AAB4u;
    // 0x11aab4: 0x0  nop
    ctx->pc = 0x11aab4u;
    // NOP
    // 0x11aab8: 0x0  nop
    ctx->pc = 0x11aab8u;
    // NOP
    // 0x11aabc: 0x0  nop
    ctx->pc = 0x11aabcu;
    // NOP
    ctx->pc = 0x11aac0u;
}
