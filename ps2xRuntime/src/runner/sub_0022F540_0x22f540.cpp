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

// Function: sub_0022F540
// Address: 0x22f540 - 0x22f580
void sub_0022F540_0x22f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F540_0x22f540");
#endif

    ctx->pc = 0x22f540u;

    // 0x22f540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f544: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22f544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22f548: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f54c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f550: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f554: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f558: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f55c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22f560: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22f560u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22f564: 0x1012  mflo        $v0
    ctx->pc = 0x22f564u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22f568: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22f568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22f56c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F574u;
    // 0x22f574: 0x0  nop
    ctx->pc = 0x22f574u;
    // NOP
    // 0x22f578: 0x0  nop
    ctx->pc = 0x22f578u;
    // NOP
    // 0x22f57c: 0x0  nop
    ctx->pc = 0x22f57cu;
    // NOP
    ctx->pc = 0x22f580u;
}
