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

// Function: sub_00177740
// Address: 0x177740 - 0x177780
void sub_00177740_0x177740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177740_0x177740");
#endif

    ctx->pc = 0x177740u;

    // 0x177740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177744: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x177744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x177748: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17774c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x177750: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177754: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x177754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177758: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x177758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17775c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x17775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x177760: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x177760u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x177764: 0x1012  mflo        $v0
    ctx->pc = 0x177764u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x177768: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x177768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17776c: 0x3e00008  jr          $ra
    ctx->pc = 0x17776Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17776Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177774u;
    // 0x177774: 0x0  nop
    ctx->pc = 0x177774u;
    // NOP
    // 0x177778: 0x0  nop
    ctx->pc = 0x177778u;
    // NOP
    // 0x17777c: 0x0  nop
    ctx->pc = 0x17777cu;
    // NOP
    ctx->pc = 0x177780u;
}
