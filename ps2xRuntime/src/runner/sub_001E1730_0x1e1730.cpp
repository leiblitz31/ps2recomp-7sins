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

// Function: sub_001E1730
// Address: 0x1e1730 - 0x1e17c0
void sub_001E1730_0x1e1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1730_0x1e1730");
#endif

    switch (ctx->pc) {
        case 0x1e1768u: goto label_1e1768;
        case 0x1e1778u: goto label_1e1778;
        default: break;
    }

    ctx->pc = 0x1e1730u;

    // 0x1e1730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e173c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e173cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1740: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e1740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1744: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e1744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e1748: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e1748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e174c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1750: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e1750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1754: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e1754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e1758: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e1758u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e175c: 0x8012  mflo        $s0
    ctx->pc = 0x1e175cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1e1760: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E1760u;
    {
        const bool branch_taken_0x1e1760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1760) {
            ctx->pc = 0x1E1794u;
            goto label_1e1794;
        }
    }
    ctx->pc = 0x1E1768u;
label_1e1768:
    // 0x1e1768: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e1768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e176c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e176cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1770: 0xc0785f0  jal         func_1E17C0
    ctx->pc = 0x1E1770u;
    SET_GPR_U32(ctx, 31, 0x1E1778u);
    ctx->pc = 0x1E17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E17C0u, 0x1E1770u, 0x1E1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1778u;
label_1e1778:
    // 0x1e1778: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e1778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e177c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1e1780: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e1780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1e1784: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e1784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1788: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e1788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1e178c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e178cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e1790: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e1790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e1794:
    // 0x1e1794: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E1794u;
    {
        const bool branch_taken_0x1e1794 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e1794) {
            ctx->pc = 0x1E1768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1768;
        }
    }
    ctx->pc = 0x1E179Cu;
    // 0x1e179c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e17a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e17a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e17a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e17a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e17a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e17a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e17ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E17ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E17ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E17B4u;
    // 0x1e17b4: 0x0  nop
    ctx->pc = 0x1e17b4u;
    // NOP
    // 0x1e17b8: 0x0  nop
    ctx->pc = 0x1e17b8u;
    // NOP
    // 0x1e17bc: 0x0  nop
    ctx->pc = 0x1e17bcu;
    // NOP
    ctx->pc = 0x1e17c0u;
}
