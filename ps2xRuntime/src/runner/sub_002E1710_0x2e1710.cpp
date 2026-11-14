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

// Function: sub_002E1710
// Address: 0x2e1710 - 0x2e17a0
void sub_002E1710_0x2e1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1710_0x2e1710");
#endif

    switch (ctx->pc) {
        case 0x2e1738u: goto label_2e1738;
        case 0x2e174cu: goto label_2e174c;
        case 0x2e1780u: goto label_2e1780;
        default: break;
    }

    ctx->pc = 0x2e1710u;

    // 0x2e1710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e1714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e1718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e171c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1720: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e1720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e1724: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e1724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e1728: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e1728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e172c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2e172cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1730: 0xc0b828c  jal         func_2E0A30
    ctx->pc = 0x2E1730u;
    SET_GPR_U32(ctx, 31, 0x2E1738u);
    ctx->pc = 0x2E0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A30u, 0x2E1730u, 0x2E1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1738u;
label_2e1738:
    // 0x2e1738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e1738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e173c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1740: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2e1740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1744: 0xc0b826c  jal         func_2E09B0
    ctx->pc = 0x2E1744u;
    SET_GPR_U32(ctx, 31, 0x2E174Cu);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2E1744u, 0x2E174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E174Cu;
label_2e174c:
    // 0x2e174c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e174cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1750: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1754: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2e1754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2e1758: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2e1758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e175c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2e175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e1760: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e1760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e1764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1768: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2e1768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e176c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1770: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2e1770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2e1774: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2e1774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1778: 0xc0b7b48  jal         func_2DED20
    ctx->pc = 0x2E1778u;
    SET_GPR_U32(ctx, 31, 0x2E1780u);
    ctx->pc = 0x2DED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DED20u, 0x2E1778u, 0x2E1780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1780u;
label_2e1780:
    // 0x2e1780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e178c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e178cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e1790: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1798u;
    // 0x2e1798: 0x0  nop
    ctx->pc = 0x2e1798u;
    // NOP
    // 0x2e179c: 0x0  nop
    ctx->pc = 0x2e179cu;
    // NOP
    ctx->pc = 0x2e17a0u;
}
