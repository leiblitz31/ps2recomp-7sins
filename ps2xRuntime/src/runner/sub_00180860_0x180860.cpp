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

// Function: sub_00180860
// Address: 0x180860 - 0x1808d0
void sub_00180860_0x180860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180860_0x180860");
#endif

    switch (ctx->pc) {
        case 0x180884u: goto label_180884;
        case 0x1808bcu: goto label_1808bc;
        default: break;
    }

    ctx->pc = 0x180860u;

    // 0x180860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x180868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18086c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x180870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180878: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x180878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18087c: 0xc06016c  jal         func_1805B0
    ctx->pc = 0x18087Cu;
    SET_GPR_U32(ctx, 31, 0x180884u);
    ctx->pc = 0x1805B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1805B0u, 0x18087Cu, 0x180884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180884u;
label_180884:
    // 0x180884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180888: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18088c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180890: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x180890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x180894: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x180894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180898: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18089c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18089cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1808a0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1808a4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1808a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1808a8: 0x3012  mflo        $a2
    ctx->pc = 0x1808a8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1808ac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1808acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1808b0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1808b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1808b4: 0xc060a4c  jal         func_182930
    ctx->pc = 0x1808B4u;
    SET_GPR_U32(ctx, 31, 0x1808BCu);
    ctx->pc = 0x182930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182930u, 0x1808B4u, 0x1808BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808BCu;
label_1808bc:
    // 0x1808bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1808bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1808c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1808c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1808c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1808C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1808C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1808CCu;
    // 0x1808cc: 0x0  nop
    ctx->pc = 0x1808ccu;
    // NOP
    ctx->pc = 0x1808d0u;
}
