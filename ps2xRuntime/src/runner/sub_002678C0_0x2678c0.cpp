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

// Function: sub_002678C0
// Address: 0x2678c0 - 0x267900
void sub_002678C0_0x2678c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002678C0_0x2678c0");
#endif

    ctx->pc = 0x2678c0u;

    // 0x2678c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2678c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2678c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2678c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2678c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2678c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2678cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2678ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2678d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2678d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2678d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2678d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2678d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2678d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2678dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2678dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2678e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2678e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2678e4: 0x1012  mflo        $v0
    ctx->pc = 0x2678e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2678e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2678e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2678ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2678ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2678ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2678F4u;
    // 0x2678f4: 0x0  nop
    ctx->pc = 0x2678f4u;
    // NOP
    // 0x2678f8: 0x0  nop
    ctx->pc = 0x2678f8u;
    // NOP
    // 0x2678fc: 0x0  nop
    ctx->pc = 0x2678fcu;
    // NOP
    ctx->pc = 0x267900u;
}
