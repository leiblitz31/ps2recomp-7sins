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

// Function: sub_0018DFC0
// Address: 0x18dfc0 - 0x18e000
void sub_0018DFC0_0x18dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DFC0_0x18dfc0");
#endif

    ctx->pc = 0x18dfc0u;

    // 0x18dfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18dfc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18dfc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dfcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18dfd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dfd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18dfd8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18dfdc: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x18dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x18dfe0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18dfe0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18dfe4: 0x1012  mflo        $v0
    ctx->pc = 0x18dfe4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x18dfe8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18dfec: 0x3e00008  jr          $ra
    ctx->pc = 0x18DFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DFF4u;
    // 0x18dff4: 0x0  nop
    ctx->pc = 0x18dff4u;
    // NOP
    // 0x18dff8: 0x0  nop
    ctx->pc = 0x18dff8u;
    // NOP
    // 0x18dffc: 0x0  nop
    ctx->pc = 0x18dffcu;
    // NOP
    ctx->pc = 0x18e000u;
}
