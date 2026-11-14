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

// Function: sub_00190F50
// Address: 0x190f50 - 0x190f80
void sub_00190F50_0x190f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190F50_0x190f50");
#endif

    ctx->pc = 0x190f50u;

    // 0x190f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190f54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x190f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x190f58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x190f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x190f5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190f60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x190f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190f64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x190f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190f68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x190f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x190f6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x190f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190f70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x190f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190f74: 0x3e00008  jr          $ra
    ctx->pc = 0x190F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190F7Cu;
    // 0x190f7c: 0x0  nop
    ctx->pc = 0x190f7cu;
    // NOP
    ctx->pc = 0x190f80u;
}
