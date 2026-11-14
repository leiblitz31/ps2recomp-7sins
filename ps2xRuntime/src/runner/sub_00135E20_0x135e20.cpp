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

// Function: sub_00135E20
// Address: 0x135e20 - 0x135e90
void sub_00135E20_0x135e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135E20_0x135e20");
#endif

    switch (ctx->pc) {
        case 0x135e44u: goto label_135e44;
        case 0x135e7cu: goto label_135e7c;
        default: break;
    }

    ctx->pc = 0x135e20u;

    // 0x135e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x135e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x135e2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x135e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x135e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x135e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135e38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135e3c: 0xc04c9b4  jal         func_1326D0
    ctx->pc = 0x135E3Cu;
    SET_GPR_U32(ctx, 31, 0x135E44u);
    ctx->pc = 0x1326D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1326D0u, 0x135E3Cu, 0x135E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E44u;
label_135e44:
    // 0x135e44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x135e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e48: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x135e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x135e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e50: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x135e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135e54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x135e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135e5c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x135e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135e60: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x135e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x135e64: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x135e64u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x135e68: 0x3012  mflo        $a2
    ctx->pc = 0x135e68u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x135e6c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x135e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x135e70: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x135e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135e74: 0xc04d67c  jal         func_1359F0
    ctx->pc = 0x135E74u;
    SET_GPR_U32(ctx, 31, 0x135E7Cu);
    ctx->pc = 0x1359F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1359F0u, 0x135E74u, 0x135E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E7Cu;
label_135e7c:
    // 0x135e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135e80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x135e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135e84: 0x3e00008  jr          $ra
    ctx->pc = 0x135E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135E8Cu;
    // 0x135e8c: 0x0  nop
    ctx->pc = 0x135e8cu;
    // NOP
    ctx->pc = 0x135e90u;
}
