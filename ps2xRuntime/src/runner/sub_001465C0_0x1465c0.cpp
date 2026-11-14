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

// Function: sub_001465C0
// Address: 0x1465c0 - 0x146600
void sub_001465C0_0x1465c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001465C0_0x1465c0");
#endif

    ctx->pc = 0x1465c0u;

    // 0x1465c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1465c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1465c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1465c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1465c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1465c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1465cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1465ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1465d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1465d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1465d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1465d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1465d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1465d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1465dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1465dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1465e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1465e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1465e4: 0x1012  mflo        $v0
    ctx->pc = 0x1465e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1465e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1465e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1465ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1465ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1465ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1465F4u;
    // 0x1465f4: 0x0  nop
    ctx->pc = 0x1465f4u;
    // NOP
    // 0x1465f8: 0x0  nop
    ctx->pc = 0x1465f8u;
    // NOP
    // 0x1465fc: 0x0  nop
    ctx->pc = 0x1465fcu;
    // NOP
    ctx->pc = 0x146600u;
}
