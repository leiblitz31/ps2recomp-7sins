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

// Function: sub_0025E500
// Address: 0x25e500 - 0x25e540
void sub_0025E500_0x25e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E500_0x25e500");
#endif

    ctx->pc = 0x25e500u;

    // 0x25e500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e504: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25e504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25e508: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e50c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e510: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e514: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e518: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25e518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e51c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25e520: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25e520u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25e524: 0x1012  mflo        $v0
    ctx->pc = 0x25e524u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x25e528: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25e528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25e52c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E534u;
    // 0x25e534: 0x0  nop
    ctx->pc = 0x25e534u;
    // NOP
    // 0x25e538: 0x0  nop
    ctx->pc = 0x25e538u;
    // NOP
    // 0x25e53c: 0x0  nop
    ctx->pc = 0x25e53cu;
    // NOP
    ctx->pc = 0x25e540u;
}
