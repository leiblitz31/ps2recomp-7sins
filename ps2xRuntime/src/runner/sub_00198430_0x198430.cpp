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

// Function: sub_00198430
// Address: 0x198430 - 0x198470
void sub_00198430_0x198430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198430_0x198430");
#endif

    ctx->pc = 0x198430u;

    // 0x198430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198434: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x198434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x198438: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19843c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x198440: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x198444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198448: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19844c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x19844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x198450: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x198450u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x198454: 0x1012  mflo        $v0
    ctx->pc = 0x198454u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x198458: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x198458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19845c: 0x3e00008  jr          $ra
    ctx->pc = 0x19845Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19845Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198464u;
    // 0x198464: 0x0  nop
    ctx->pc = 0x198464u;
    // NOP
    // 0x198468: 0x0  nop
    ctx->pc = 0x198468u;
    // NOP
    // 0x19846c: 0x0  nop
    ctx->pc = 0x19846cu;
    // NOP
    ctx->pc = 0x198470u;
}
