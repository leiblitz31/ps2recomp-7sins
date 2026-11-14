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

// Function: sub_00210540
// Address: 0x210540 - 0x2105b0
void sub_00210540_0x210540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210540_0x210540");
#endif

    switch (ctx->pc) {
        case 0x210564u: goto label_210564;
        case 0x21059cu: goto label_21059c;
        default: break;
    }

    ctx->pc = 0x210540u;

    // 0x210540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x210548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21054c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210554: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x210554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210558: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x210558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21055c: 0xc082030  jal         func_2080C0
    ctx->pc = 0x21055Cu;
    SET_GPR_U32(ctx, 31, 0x210564u);
    ctx->pc = 0x2080C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080C0u, 0x21055Cu, 0x210564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210564u;
label_210564:
    // 0x210564: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210568: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x210568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21056c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210570: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x210570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x210574: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210578: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x210578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21057c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x21057cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210580: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x210580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210584: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x210584u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x210588: 0x3012  mflo        $a2
    ctx->pc = 0x210588u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x21058c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21058cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x210590: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x210590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210594: 0xc084040  jal         func_210100
    ctx->pc = 0x210594u;
    SET_GPR_U32(ctx, 31, 0x21059Cu);
    ctx->pc = 0x210100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210100u, 0x210594u, 0x21059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21059Cu;
label_21059c:
    // 0x21059c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2105a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2105a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2105a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2105A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2105A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2105ACu;
    // 0x2105ac: 0x0  nop
    ctx->pc = 0x2105acu;
    // NOP
    ctx->pc = 0x2105b0u;
}
