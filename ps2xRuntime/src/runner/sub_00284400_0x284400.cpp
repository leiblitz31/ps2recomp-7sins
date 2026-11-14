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

// Function: sub_00284400
// Address: 0x284400 - 0x284440
void sub_00284400_0x284400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284400_0x284400");
#endif

    ctx->pc = 0x284400u;

    // 0x284400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28440c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284410: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x284410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x284414: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x284414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x284418: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x284418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28441c: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x28441cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x284420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284424: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x284424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x284428: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x284428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28442c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284434: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284438: 0x3e00008  jr          $ra
    ctx->pc = 0x284438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284440u;
}
