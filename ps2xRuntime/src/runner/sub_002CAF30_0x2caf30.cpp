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

// Function: sub_002CAF30
// Address: 0x2caf30 - 0x2caf70
void sub_002CAF30_0x2caf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAF30_0x2caf30");
#endif

    ctx->pc = 0x2caf30u;

    // 0x2caf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caf34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2caf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2caf38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2caf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caf3c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2caf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2caf40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2caf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caf44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2caf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2caf48: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2caf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2caf4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2caf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2caf50: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2caf50u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2caf54: 0x1012  mflo        $v0
    ctx->pc = 0x2caf54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2caf58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2caf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2caf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF64u;
    // 0x2caf64: 0x0  nop
    ctx->pc = 0x2caf64u;
    // NOP
    // 0x2caf68: 0x0  nop
    ctx->pc = 0x2caf68u;
    // NOP
    // 0x2caf6c: 0x0  nop
    ctx->pc = 0x2caf6cu;
    // NOP
    ctx->pc = 0x2caf70u;
}
