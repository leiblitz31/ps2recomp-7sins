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

// Function: sub_0025E830
// Address: 0x25e830 - 0x25e8b0
void sub_0025E830_0x25e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E830_0x25e830");
#endif

    switch (ctx->pc) {
        case 0x25e868u: goto label_25e868;
        case 0x25e888u: goto label_25e888;
        default: break;
    }

    ctx->pc = 0x25e830u;

    // 0x25e830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25e834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e83c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25e840: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25e840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25e844: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x25e844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x25e848: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e84c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e850: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25e850u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e854: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25e854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25e858: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25e858u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25e85c: 0x8012  mflo        $s0
    ctx->pc = 0x25e85cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x25e860: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25E860u;
    {
        const bool branch_taken_0x25e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e860) {
            ctx->pc = 0x25E88Cu;
            goto label_25e88c;
        }
    }
    ctx->pc = 0x25E868u;
label_25e868:
    // 0x25e868: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e86c: 0x2444ffe8  addiu       $a0, $v0, -0x18
    ctx->pc = 0x25e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x25e870: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x25e870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x25e874: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e878: 0x2445ffe8  addiu       $a1, $v0, -0x18
    ctx->pc = 0x25e878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x25e87c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25e880: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x25E880u;
    SET_GPR_U32(ctx, 31, 0x25E888u);
    ctx->pc = 0x25E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E770u, 0x25E880u, 0x25E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E888u;
label_25e888:
    // 0x25e888: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25e888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_25e88c:
    // 0x25e88c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x25E88Cu;
    {
        const bool branch_taken_0x25e88c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x25e88c) {
            ctx->pc = 0x25E868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e868;
        }
    }
    ctx->pc = 0x25E894u;
    // 0x25e894: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25e898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e89c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e8a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25e8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x25E8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E8ACu;
    // 0x25e8ac: 0x0  nop
    ctx->pc = 0x25e8acu;
    // NOP
    ctx->pc = 0x25e8b0u;
}
