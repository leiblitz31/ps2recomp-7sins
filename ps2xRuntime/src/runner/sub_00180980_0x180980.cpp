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

// Function: sub_00180980
// Address: 0x180980 - 0x1809c0
void sub_00180980_0x180980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180980_0x180980");
#endif

    ctx->pc = 0x180980u;

    // 0x180980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180984: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x180984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x180988: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18098c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180990: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180994: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180998: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x180998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18099c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x18099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1809a0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1809a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1809a4: 0x1012  mflo        $v0
    ctx->pc = 0x1809a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1809a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1809a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1809ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1809ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1809ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1809B4u;
    // 0x1809b4: 0x0  nop
    ctx->pc = 0x1809b4u;
    // NOP
    // 0x1809b8: 0x0  nop
    ctx->pc = 0x1809b8u;
    // NOP
    // 0x1809bc: 0x0  nop
    ctx->pc = 0x1809bcu;
    // NOP
    ctx->pc = 0x1809c0u;
}
