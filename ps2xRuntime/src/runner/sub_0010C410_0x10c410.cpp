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

// Function: sub_0010C410
// Address: 0x10c410 - 0x10c450
void sub_0010C410_0x10c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C410_0x10c410");
#endif

    ctx->pc = 0x10c410u;

    // 0x10c410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c414: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10c418: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c41c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10c420: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c428: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10c428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c42c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10c430: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x10c430u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10c434: 0x1012  mflo        $v0
    ctx->pc = 0x10c434u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10c438: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C444u;
    // 0x10c444: 0x0  nop
    ctx->pc = 0x10c444u;
    // NOP
    // 0x10c448: 0x0  nop
    ctx->pc = 0x10c448u;
    // NOP
    // 0x10c44c: 0x0  nop
    ctx->pc = 0x10c44cu;
    // NOP
    ctx->pc = 0x10c450u;
}
