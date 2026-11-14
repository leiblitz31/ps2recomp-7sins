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

// Function: sub_00468A50
// Address: 0x468a50 - 0x468a80
void sub_00468A50_0x468a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468A50_0x468a50");
#endif

    ctx->pc = 0x468a50u;

    // 0x468a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x468a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x468a54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x468a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x468a58: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x468a5c: 0x24636c80  addiu       $v1, $v1, 0x6C80
    ctx->pc = 0x468a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27776));
    // 0x468a60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x468a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468a64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x468a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x468a68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x468a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468a6c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x468a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x468a70: 0x3e00008  jr          $ra
    ctx->pc = 0x468A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468A78u;
    // 0x468a78: 0x0  nop
    ctx->pc = 0x468a78u;
    // NOP
    // 0x468a7c: 0x0  nop
    ctx->pc = 0x468a7cu;
    // NOP
    ctx->pc = 0x468a80u;
}
