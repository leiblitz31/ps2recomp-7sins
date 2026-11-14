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

// Function: sub_00226E10
// Address: 0x226e10 - 0x226e50
void sub_00226E10_0x226e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226E10_0x226e10");
#endif

    ctx->pc = 0x226e10u;

    // 0x226e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226e14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x226e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x226e1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226e20: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x226e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x226e24: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x226e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x226e28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x226e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x226e2c: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x226e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x226e30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226e34: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x226e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x226e38: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x226e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x226e3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226e44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x226e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x226e48: 0x3e00008  jr          $ra
    ctx->pc = 0x226E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226E50u;
}
