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

// Function: sub_00126C80
// Address: 0x126c80 - 0x126cc0
void sub_00126C80_0x126c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126C80_0x126c80");
#endif

    ctx->pc = 0x126c80u;

    // 0x126c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126c84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x126c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x126c88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x126c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126c8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x126c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x126c90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x126c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126c94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126c98: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x126c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x126c9c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x126c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126ca0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x126ca0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x126ca4: 0x1012  mflo        $v0
    ctx->pc = 0x126ca4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x126ca8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x126ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x126cac: 0x3e00008  jr          $ra
    ctx->pc = 0x126CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126CB4u;
    // 0x126cb4: 0x0  nop
    ctx->pc = 0x126cb4u;
    // NOP
    // 0x126cb8: 0x0  nop
    ctx->pc = 0x126cb8u;
    // NOP
    // 0x126cbc: 0x0  nop
    ctx->pc = 0x126cbcu;
    // NOP
    ctx->pc = 0x126cc0u;
}
