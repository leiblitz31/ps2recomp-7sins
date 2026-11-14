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

// Function: sub_002E0E40
// Address: 0x2e0e40 - 0x2e0e90
void sub_002E0E40_0x2e0e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0E40_0x2e0e40");
#endif

    ctx->pc = 0x2e0e40u;

    // 0x2e0e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0e44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e0e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e0e48: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e0e4c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2e0e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2e0e50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0e54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0e58: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2e0e5c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2e0e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e0e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0e64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2e0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e0e68: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e0e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e0e70: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2e0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e0e74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0e78: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2e0e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e0e80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e0e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0e84: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E8Cu;
    // 0x2e0e8c: 0x0  nop
    ctx->pc = 0x2e0e8cu;
    // NOP
    ctx->pc = 0x2e0e90u;
}
