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

// Function: sub_0019D8D0
// Address: 0x19d8d0 - 0x19d940
void sub_0019D8D0_0x19d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D8D0_0x19d8d0");
#endif

    switch (ctx->pc) {
        case 0x19d8f4u: goto label_19d8f4;
        case 0x19d92cu: goto label_19d92c;
        default: break;
    }

    ctx->pc = 0x19d8d0u;

    // 0x19d8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d8d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19d8dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d8e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d8e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d8e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x19d8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d8ec: 0xc0653bc  jal         func_194EF0
    ctx->pc = 0x19D8ECu;
    SET_GPR_U32(ctx, 31, 0x19D8F4u);
    ctx->pc = 0x194EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194EF0u, 0x19D8ECu, 0x19D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8F4u;
label_19d8f4:
    // 0x19d8f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d8f8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x19d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d8fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d900: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19d904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d908: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d90c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d910: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x19d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x19d914: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d914u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19d918: 0x3012  mflo        $a2
    ctx->pc = 0x19d918u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x19d91c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19d920: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19d920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d924: 0xc06732c  jal         func_19CCB0
    ctx->pc = 0x19D924u;
    SET_GPR_U32(ctx, 31, 0x19D92Cu);
    ctx->pc = 0x19CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CCB0u, 0x19D924u, 0x19D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D92Cu;
label_19d92c:
    // 0x19d92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d930: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d934: 0x3e00008  jr          $ra
    ctx->pc = 0x19D934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D93Cu;
    // 0x19d93c: 0x0  nop
    ctx->pc = 0x19d93cu;
    // NOP
    ctx->pc = 0x19d940u;
}
