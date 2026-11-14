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

// Function: sub_0022EDA0
// Address: 0x22eda0 - 0x22ee10
void sub_0022EDA0_0x22eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EDA0_0x22eda0");
#endif

    switch (ctx->pc) {
        case 0x22edc4u: goto label_22edc4;
        case 0x22edfcu: goto label_22edfc;
        default: break;
    }

    ctx->pc = 0x22eda0u;

    // 0x22eda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22eda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22eda8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22edac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22edb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22edb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22edb8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22edbc: 0xc08b000  jal         func_22C000
    ctx->pc = 0x22EDBCu;
    SET_GPR_U32(ctx, 31, 0x22EDC4u);
    ctx->pc = 0x22C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C000u, 0x22EDBCu, 0x22EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDC4u;
label_22edc4:
    // 0x22edc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22edc8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22edcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22edd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22edd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22edd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22eddc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ede0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x22ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x22ede4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22ede4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22ede8: 0x3012  mflo        $a2
    ctx->pc = 0x22ede8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22edec: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22edf0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22edf4: 0xc08ca38  jal         func_2328E0
    ctx->pc = 0x22EDF4u;
    SET_GPR_U32(ctx, 31, 0x22EDFCu);
    ctx->pc = 0x2328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2328E0u, 0x22EDF4u, 0x22EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDFCu;
label_22edfc:
    // 0x22edfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22edfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ee00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ee04: 0x3e00008  jr          $ra
    ctx->pc = 0x22EE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EE0Cu;
    // 0x22ee0c: 0x0  nop
    ctx->pc = 0x22ee0cu;
    // NOP
    ctx->pc = 0x22ee10u;
}
