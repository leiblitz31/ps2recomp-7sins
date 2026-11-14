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

// Function: sub_00167870
// Address: 0x167870 - 0x1678e0
void sub_00167870_0x167870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167870_0x167870");
#endif

    switch (ctx->pc) {
        case 0x167894u: goto label_167894;
        case 0x1678ccu: goto label_1678cc;
        default: break;
    }

    ctx->pc = 0x167870u;

    // 0x167870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x167878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16787c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167884: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x167884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167888: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x167888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16788c: 0xc0597d4  jal         func_165F50
    ctx->pc = 0x16788Cu;
    SET_GPR_U32(ctx, 31, 0x167894u);
    ctx->pc = 0x165F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F50u, 0x16788Cu, 0x167894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167894u;
label_167894:
    // 0x167894: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x167894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167898: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x167898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16789c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1678a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1678a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1678a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1678a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1678a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1678a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1678ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1678acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1678b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1678b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1678b4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1678b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1678b8: 0x3012  mflo        $a2
    ctx->pc = 0x1678b8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1678bc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1678bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1678c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1678c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1678c4: 0xc059d0c  jal         func_167430
    ctx->pc = 0x1678C4u;
    SET_GPR_U32(ctx, 31, 0x1678CCu);
    ctx->pc = 0x167430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167430u, 0x1678C4u, 0x1678CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678CCu;
label_1678cc:
    // 0x1678cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1678ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1678d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1678d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1678D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1678D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1678DCu;
    // 0x1678dc: 0x0  nop
    ctx->pc = 0x1678dcu;
    // NOP
    ctx->pc = 0x1678e0u;
}
