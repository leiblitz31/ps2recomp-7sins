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

// Function: sub_00229090
// Address: 0x229090 - 0x229100
void sub_00229090_0x229090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229090_0x229090");
#endif

    switch (ctx->pc) {
        case 0x2290b4u: goto label_2290b4;
        case 0x2290ecu: goto label_2290ec;
        default: break;
    }

    ctx->pc = 0x229090u;

    // 0x229090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x229090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x229094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x229098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22909c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2290a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2290a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2290a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2290a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2290a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2290a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2290ac: 0xc089fe8  jal         func_227FA0
    ctx->pc = 0x2290ACu;
    SET_GPR_U32(ctx, 31, 0x2290B4u);
    ctx->pc = 0x227FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FA0u, 0x2290ACu, 0x2290B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2290B4u;
label_2290b4:
    // 0x2290b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2290b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2290b8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2290b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2290bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2290bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2290c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2290c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2290c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2290c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2290c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2290c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2290cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2290ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2290d0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2290d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2290d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2290d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2290d8: 0x3012  mflo        $a2
    ctx->pc = 0x2290d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2290dc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2290dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2290e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2290e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2290e4: 0xc08ab78  jal         func_22ADE0
    ctx->pc = 0x2290E4u;
    SET_GPR_U32(ctx, 31, 0x2290ECu);
    ctx->pc = 0x22ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ADE0u, 0x2290E4u, 0x2290ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2290ECu;
label_2290ec:
    // 0x2290ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2290ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2290f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2290f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2290f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2290F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2290F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2290FCu;
    // 0x2290fc: 0x0  nop
    ctx->pc = 0x2290fcu;
    // NOP
    ctx->pc = 0x229100u;
}
