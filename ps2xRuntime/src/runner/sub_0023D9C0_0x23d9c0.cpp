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

// Function: sub_0023D9C0
// Address: 0x23d9c0 - 0x23da00
void sub_0023D9C0_0x23d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D9C0_0x23d9c0");
#endif

    ctx->pc = 0x23d9c0u;

    // 0x23d9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d9c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23d9c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d9cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23d9d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d9d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d9d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d9dc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x23d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23d9e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23d9e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23d9e4: 0x1012  mflo        $v0
    ctx->pc = 0x23d9e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23d9e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23d9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23d9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x23D9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D9F4u;
    // 0x23d9f4: 0x0  nop
    ctx->pc = 0x23d9f4u;
    // NOP
    // 0x23d9f8: 0x0  nop
    ctx->pc = 0x23d9f8u;
    // NOP
    // 0x23d9fc: 0x0  nop
    ctx->pc = 0x23d9fcu;
    // NOP
    ctx->pc = 0x23da00u;
}
