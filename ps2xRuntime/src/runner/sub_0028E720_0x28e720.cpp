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

// Function: sub_0028E720
// Address: 0x28e720 - 0x28e7a0
void sub_0028E720_0x28e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E720_0x28e720");
#endif

    switch (ctx->pc) {
        case 0x28e758u: goto label_28e758;
        case 0x28e778u: goto label_28e778;
        default: break;
    }

    ctx->pc = 0x28e720u;

    // 0x28e720: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28e724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28e728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e72c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28e730: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28e730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28e734: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x28e734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x28e738: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28e738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e73c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e740: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28e740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e744: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x28e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e748: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x28e748u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28e74c: 0x8012  mflo        $s0
    ctx->pc = 0x28e74cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x28e750: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E750u;
    {
        const bool branch_taken_0x28e750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e750) {
            ctx->pc = 0x28E77Cu;
            goto label_28e77c;
        }
    }
    ctx->pc = 0x28E758u;
label_28e758:
    // 0x28e758: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e75c: 0x2444ffe8  addiu       $a0, $v0, -0x18
    ctx->pc = 0x28e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x28e760: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x28e760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x28e764: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e768: 0x2445ffe8  addiu       $a1, $v0, -0x18
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x28e76c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28e770: 0xc0a1824  jal         func_286090
    ctx->pc = 0x28E770u;
    SET_GPR_U32(ctx, 31, 0x28E778u);
    ctx->pc = 0x286090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286090u, 0x28E770u, 0x28E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E778u;
label_28e778:
    // 0x28e778: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28e778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_28e77c:
    // 0x28e77c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28E77Cu;
    {
        const bool branch_taken_0x28e77c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x28e77c) {
            ctx->pc = 0x28E758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e758;
        }
    }
    ctx->pc = 0x28E784u;
    // 0x28e784: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28e788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e78c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e790: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28e794: 0x3e00008  jr          $ra
    ctx->pc = 0x28E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E79Cu;
    // 0x28e79c: 0x0  nop
    ctx->pc = 0x28e79cu;
    // NOP
    ctx->pc = 0x28e7a0u;
}
