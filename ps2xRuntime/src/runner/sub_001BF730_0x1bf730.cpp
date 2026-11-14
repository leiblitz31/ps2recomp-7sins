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

// Function: sub_001BF730
// Address: 0x1bf730 - 0x1bf7c0
void sub_001BF730_0x1bf730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF730_0x1bf730");
#endif

    switch (ctx->pc) {
        case 0x1bf768u: goto label_1bf768;
        case 0x1bf778u: goto label_1bf778;
        default: break;
    }

    ctx->pc = 0x1bf730u;

    // 0x1bf730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bf730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bf734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf73c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bf73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bf740: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1bf740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1bf744: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1bf744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1bf748: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bf748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf74c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf750: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1bf750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf754: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x1bf754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1bf758: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bf758u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bf75c: 0x8012  mflo        $s0
    ctx->pc = 0x1bf75cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1bf760: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BF760u;
    {
        const bool branch_taken_0x1bf760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf760) {
            ctx->pc = 0x1BF794u;
            goto label_1bf794;
        }
    }
    ctx->pc = 0x1BF768u;
label_1bf768:
    // 0x1bf768: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1bf768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf76c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bf76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf770: 0xc06e7c8  jal         func_1B9F20
    ctx->pc = 0x1BF770u;
    SET_GPR_U32(ctx, 31, 0x1BF778u);
    ctx->pc = 0x1B9F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9F20u, 0x1BF770u, 0x1BF778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF778u;
label_1bf778:
    // 0x1bf778: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bf778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf77c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1bf77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1bf780: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1bf780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1bf784: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf788: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1bf788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1bf78c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1bf78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1bf790: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1bf790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1bf794:
    // 0x1bf794: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BF794u;
    {
        const bool branch_taken_0x1bf794 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1bf794) {
            ctx->pc = 0x1BF768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf768;
        }
    }
    ctx->pc = 0x1BF79Cu;
    // 0x1bf79c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bf79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf7a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf7a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf7a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1bf7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bf7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF7B4u;
    // 0x1bf7b4: 0x0  nop
    ctx->pc = 0x1bf7b4u;
    // NOP
    // 0x1bf7b8: 0x0  nop
    ctx->pc = 0x1bf7b8u;
    // NOP
    // 0x1bf7bc: 0x0  nop
    ctx->pc = 0x1bf7bcu;
    // NOP
    ctx->pc = 0x1bf7c0u;
}
