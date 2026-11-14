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

// Function: sub_00180940
// Address: 0x180940 - 0x180980
void sub_00180940_0x180940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180940_0x180940");
#endif

    ctx->pc = 0x180940u;

    // 0x180940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180944: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x180944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x180948: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18094c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18094cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x180950: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180958: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18095c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x18095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x180960: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x180960u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x180964: 0x1012  mflo        $v0
    ctx->pc = 0x180964u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x180968: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x180968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18096c: 0x3e00008  jr          $ra
    ctx->pc = 0x18096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18096Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180974u;
    // 0x180974: 0x0  nop
    ctx->pc = 0x180974u;
    // NOP
    // 0x180978: 0x0  nop
    ctx->pc = 0x180978u;
    // NOP
    // 0x18097c: 0x0  nop
    ctx->pc = 0x18097cu;
    // NOP
    ctx->pc = 0x180980u;
}
