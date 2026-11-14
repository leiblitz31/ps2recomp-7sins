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

// Function: sub_0018E2D0
// Address: 0x18e2d0 - 0x18e340
void sub_0018E2D0_0x18e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E2D0_0x18e2d0");
#endif

    switch (ctx->pc) {
        case 0x18e2f4u: goto label_18e2f4;
        case 0x18e32cu: goto label_18e32c;
        default: break;
    }

    ctx->pc = 0x18e2d0u;

    // 0x18e2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18e2dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e2e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e2e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e2e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18e2ec: 0xc0630a4  jal         func_18C290
    ctx->pc = 0x18E2ECu;
    SET_GPR_U32(ctx, 31, 0x18E2F4u);
    ctx->pc = 0x18C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C290u, 0x18E2ECu, 0x18E2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2F4u;
label_18e2f4:
    // 0x18e2f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e2f8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x18e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e2fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e300: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18e300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18e304: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e308: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e30c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e310: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x18e314: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18e314u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18e318: 0x3012  mflo        $a2
    ctx->pc = 0x18e318u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x18e31c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x18e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x18e320: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18e320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e324: 0xc063d78  jal         func_18F5E0
    ctx->pc = 0x18E324u;
    SET_GPR_U32(ctx, 31, 0x18E32Cu);
    ctx->pc = 0x18F5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5E0u, 0x18E324u, 0x18E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E32Cu;
label_18e32c:
    // 0x18e32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e330: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18e334: 0x3e00008  jr          $ra
    ctx->pc = 0x18E334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E33Cu;
    // 0x18e33c: 0x0  nop
    ctx->pc = 0x18e33cu;
    // NOP
    ctx->pc = 0x18e340u;
}
