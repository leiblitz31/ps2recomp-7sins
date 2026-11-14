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

// Function: sub_00286D40
// Address: 0x286d40 - 0x286d80
void sub_00286D40_0x286d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286D40_0x286d40");
#endif

    ctx->pc = 0x286d40u;

    // 0x286d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x286d44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x286d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x286d48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x286d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286d4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x286d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x286d50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x286d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286d54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x286d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286d58: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286d5c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x286d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x286d60: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x286d60u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x286d64: 0x1012  mflo        $v0
    ctx->pc = 0x286d64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x286d68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x286d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x286d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x286D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286D74u;
    // 0x286d74: 0x0  nop
    ctx->pc = 0x286d74u;
    // NOP
    // 0x286d78: 0x0  nop
    ctx->pc = 0x286d78u;
    // NOP
    // 0x286d7c: 0x0  nop
    ctx->pc = 0x286d7cu;
    // NOP
    ctx->pc = 0x286d80u;
}
