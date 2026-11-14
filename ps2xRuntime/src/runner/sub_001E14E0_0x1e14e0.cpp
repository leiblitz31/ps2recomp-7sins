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

// Function: sub_001E14E0
// Address: 0x1e14e0 - 0x1e1520
void sub_001E14E0_0x1e14e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E14E0_0x1e14e0");
#endif

    ctx->pc = 0x1e14e0u;

    // 0x1e14e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e14e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e14e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e14e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e14e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e14ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e14f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e14f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e14f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e14fc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e1500: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e1500u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e1504: 0x1012  mflo        $v0
    ctx->pc = 0x1e1504u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1e1508: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e1508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e150c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E150Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E150Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1514u;
    // 0x1e1514: 0x0  nop
    ctx->pc = 0x1e1514u;
    // NOP
    // 0x1e1518: 0x0  nop
    ctx->pc = 0x1e1518u;
    // NOP
    // 0x1e151c: 0x0  nop
    ctx->pc = 0x1e151cu;
    // NOP
    ctx->pc = 0x1e1520u;
}
