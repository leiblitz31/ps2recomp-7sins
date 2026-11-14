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

// Function: sub_0048DA50
// Address: 0x48da50 - 0x48dac0
void sub_0048DA50_0x48da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DA50_0x48da50");
#endif

    switch (ctx->pc) {
        case 0x48da74u: goto label_48da74;
        case 0x48daacu: goto label_48daac;
        default: break;
    }

    ctx->pc = 0x48da50u;

    // 0x48da50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48da54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48da58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48da58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48da5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48da60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48da64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48da64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48da68: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x48da68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48da6c: 0xc122f2c  jal         func_48BCB0
    ctx->pc = 0x48DA6Cu;
    SET_GPR_U32(ctx, 31, 0x48DA74u);
    ctx->pc = 0x48BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BCB0u, 0x48DA6Cu, 0x48DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DA74u;
label_48da74:
    // 0x48da74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48da74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48da78: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x48da78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48da7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48da80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x48da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48da84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48da88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48da8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x48da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48da90: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x48da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x48da94: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x48da94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x48da98: 0x3012  mflo        $a2
    ctx->pc = 0x48da98u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x48da9c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x48da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x48daa0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x48daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48daa4: 0xc12373c  jal         func_48DCF0
    ctx->pc = 0x48DAA4u;
    SET_GPR_U32(ctx, 31, 0x48DAACu);
    ctx->pc = 0x48DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DCF0u, 0x48DAA4u, 0x48DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DAACu;
label_48daac:
    // 0x48daac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48daacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48dab4: 0x3e00008  jr          $ra
    ctx->pc = 0x48DAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DABCu;
    // 0x48dabc: 0x0  nop
    ctx->pc = 0x48dabcu;
    // NOP
    ctx->pc = 0x48dac0u;
}
