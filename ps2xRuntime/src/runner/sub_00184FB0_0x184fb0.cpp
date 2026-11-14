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

// Function: sub_00184FB0
// Address: 0x184fb0 - 0x185020
void sub_00184FB0_0x184fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184FB0_0x184fb0");
#endif

    switch (ctx->pc) {
        case 0x184fd4u: goto label_184fd4;
        case 0x18500cu: goto label_18500c;
        default: break;
    }

    ctx->pc = 0x184fb0u;

    // 0x184fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x184fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x184fbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x184fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184fc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184fc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184fc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x184fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x184fcc: 0xc05de84  jal         func_177A10
    ctx->pc = 0x184FCCu;
    SET_GPR_U32(ctx, 31, 0x184FD4u);
    ctx->pc = 0x177A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A10u, 0x184FCCu, 0x184FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FD4u;
label_184fd4:
    // 0x184fd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184fd8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x184fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184fdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184fe0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x184fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x184fe4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184fe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x184fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184fec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x184fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184ff0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x184ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x184ff4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x184ff4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x184ff8: 0x3012  mflo        $a2
    ctx->pc = 0x184ff8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x184ffc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x184ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x185000: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x185000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185004: 0xc061d30  jal         func_1874C0
    ctx->pc = 0x185004u;
    SET_GPR_U32(ctx, 31, 0x18500Cu);
    ctx->pc = 0x1874C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1874C0u, 0x185004u, 0x18500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18500Cu;
label_18500c:
    // 0x18500c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18500cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185010: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x185010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185014: 0x3e00008  jr          $ra
    ctx->pc = 0x185014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18501Cu;
    // 0x18501c: 0x0  nop
    ctx->pc = 0x18501cu;
    // NOP
    ctx->pc = 0x185020u;
}
