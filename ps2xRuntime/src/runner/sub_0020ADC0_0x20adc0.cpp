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

// Function: sub_0020ADC0
// Address: 0x20adc0 - 0x20ae00
void sub_0020ADC0_0x20adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ADC0_0x20adc0");
#endif

    ctx->pc = 0x20adc0u;

    // 0x20adc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20adc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x20adc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20adcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20add0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20add4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20add8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20add8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20addc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x20addcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20ade0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x20ade0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20ade4: 0x1012  mflo        $v0
    ctx->pc = 0x20ade4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20ade8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20adec: 0x3e00008  jr          $ra
    ctx->pc = 0x20ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ADF4u;
    // 0x20adf4: 0x0  nop
    ctx->pc = 0x20adf4u;
    // NOP
    // 0x20adf8: 0x0  nop
    ctx->pc = 0x20adf8u;
    // NOP
    // 0x20adfc: 0x0  nop
    ctx->pc = 0x20adfcu;
    // NOP
    ctx->pc = 0x20ae00u;
}
