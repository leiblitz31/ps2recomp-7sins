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

// Function: sub_001093A0
// Address: 0x1093a0 - 0x109450
void sub_001093A0_0x1093a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001093A0_0x1093a0");
#endif

    switch (ctx->pc) {
        case 0x1093d0u: goto label_1093d0;
        case 0x1093e0u: goto label_1093e0;
        case 0x1093f8u: goto label_1093f8;
        case 0x109414u: goto label_109414;
        default: break;
    }

    ctx->pc = 0x1093a0u;

    // 0x1093a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1093a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1093a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1093a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1093a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1093a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1093ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1093acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1093b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1093b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1093b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1093b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1093b8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1093b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1093bc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1093BCu;
    {
        const bool branch_taken_0x1093bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1093bc) {
            ctx->pc = 0x109434u;
            goto label_109434;
        }
    }
    ctx->pc = 0x1093C4u;
    // 0x1093c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1093c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1093c8: 0xc042514  jal         func_109450
    ctx->pc = 0x1093C8u;
    SET_GPR_U32(ctx, 31, 0x1093D0u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x1093C8u, 0x1093D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093D0u;
label_1093d0:
    // 0x1093d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1093d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093d4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1093d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1093d8: 0xc11919c  jal         func_464670
    ctx->pc = 0x1093D8u;
    SET_GPR_U32(ctx, 31, 0x1093E0u);
    ctx->pc = 0x464670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464670u, 0x1093D8u, 0x1093E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093E0u;
label_1093e0:
    // 0x1093e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1093e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093e4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1093e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1093e8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1093e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1093ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1093ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1093f0: 0xc119354  jal         func_464D50
    ctx->pc = 0x1093F0u;
    SET_GPR_U32(ctx, 31, 0x1093F8u);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x1093F0u, 0x1093F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093F8u;
label_1093f8:
    // 0x1093f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1093f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1093fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1093fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109400: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x109400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x109404: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x109404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109408: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10940c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x10940Cu;
    SET_GPR_U32(ctx, 31, 0x109414u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x10940Cu, 0x109414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109414u;
label_109414:
    // 0x109414: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x109414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109418: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x109418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x10941c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x109424: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x109424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x109428: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x109428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x10942c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109430: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x109430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_109434:
    // 0x109434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x109434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10943c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10943cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109440: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x109440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x109444: 0x3e00008  jr          $ra
    ctx->pc = 0x109444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10944Cu;
    // 0x10944c: 0x0  nop
    ctx->pc = 0x10944cu;
    // NOP
    ctx->pc = 0x109450u;
}
