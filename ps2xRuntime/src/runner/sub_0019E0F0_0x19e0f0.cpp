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

// Function: sub_0019E0F0
// Address: 0x19e0f0 - 0x19e160
void sub_0019E0F0_0x19e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E0F0_0x19e0f0");
#endif

    switch (ctx->pc) {
        case 0x19e114u: goto label_19e114;
        case 0x19e14cu: goto label_19e14c;
        default: break;
    }

    ctx->pc = 0x19e0f0u;

    // 0x19e0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e0f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19e0fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e100: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19e104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e108: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x19e108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19e10c: 0xc06531c  jal         func_194C70
    ctx->pc = 0x19E10Cu;
    SET_GPR_U32(ctx, 31, 0x19E114u);
    ctx->pc = 0x194C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194C70u, 0x19E10Cu, 0x19E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E114u;
label_19e114:
    // 0x19e114: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19e114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e118: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x19e118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e11c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e120: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19e124: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19e124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e128: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e12c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e130: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x19e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x19e134: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19e134u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19e138: 0x3012  mflo        $a2
    ctx->pc = 0x19e138u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x19e13c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19e140: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19e140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19e144: 0xc067318  jal         func_19CC60
    ctx->pc = 0x19E144u;
    SET_GPR_U32(ctx, 31, 0x19E14Cu);
    ctx->pc = 0x19CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC60u, 0x19E144u, 0x19E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E14Cu;
label_19e14c:
    // 0x19e14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e150: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19e154: 0x3e00008  jr          $ra
    ctx->pc = 0x19E154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E15Cu;
    // 0x19e15c: 0x0  nop
    ctx->pc = 0x19e15cu;
    // NOP
    ctx->pc = 0x19e160u;
}
