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

// Function: sub_0018E730
// Address: 0x18e730 - 0x18e7c0
void sub_0018E730_0x18e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E730_0x18e730");
#endif

    switch (ctx->pc) {
        case 0x18e768u: goto label_18e768;
        case 0x18e778u: goto label_18e778;
        default: break;
    }

    ctx->pc = 0x18e730u;

    // 0x18e730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18e734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e73c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18e740: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18e740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x18e744: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x18e744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x18e748: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e74c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e750: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e754: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x18e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x18e758: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18e758u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18e75c: 0x8012  mflo        $s0
    ctx->pc = 0x18e75cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x18e760: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18E760u;
    {
        const bool branch_taken_0x18e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e760) {
            ctx->pc = 0x18E794u;
            goto label_18e794;
        }
    }
    ctx->pc = 0x18E768u;
label_18e768:
    // 0x18e768: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e76c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e770: 0xc0639f0  jal         func_18E7C0
    ctx->pc = 0x18E770u;
    SET_GPR_U32(ctx, 31, 0x18E778u);
    ctx->pc = 0x18E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E7C0u, 0x18E770u, 0x18E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E778u;
label_18e778:
    // 0x18e778: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e77c: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x18e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x18e780: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x18e780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x18e784: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e788: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x18e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x18e78c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x18e790: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18e790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_18e794:
    // 0x18e794: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18E794u;
    {
        const bool branch_taken_0x18e794 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x18e794) {
            ctx->pc = 0x18E768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e768;
        }
    }
    ctx->pc = 0x18E79Cu;
    // 0x18e79c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e7a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e7a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e7a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18e7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18E7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E7B4u;
    // 0x18e7b4: 0x0  nop
    ctx->pc = 0x18e7b4u;
    // NOP
    // 0x18e7b8: 0x0  nop
    ctx->pc = 0x18e7b8u;
    // NOP
    // 0x18e7bc: 0x0  nop
    ctx->pc = 0x18e7bcu;
    // NOP
    ctx->pc = 0x18e7c0u;
}
