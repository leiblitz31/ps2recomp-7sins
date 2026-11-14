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

// Function: sub_00232740
// Address: 0x232740 - 0x2327e0
void sub_00232740_0x232740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232740_0x232740");
#endif

    switch (ctx->pc) {
        case 0x232740u: goto label_232740;
        case 0x232744u: goto label_232744;
        case 0x232748u: goto label_232748;
        case 0x23274cu: goto label_23274c;
        case 0x232750u: goto label_232750;
        case 0x232754u: goto label_232754;
        case 0x232758u: goto label_232758;
        case 0x23275cu: goto label_23275c;
        case 0x232760u: goto label_232760;
        case 0x232764u: goto label_232764;
        case 0x232768u: goto label_232768;
        case 0x23276cu: goto label_23276c;
        case 0x232770u: goto label_232770;
        case 0x232774u: goto label_232774;
        case 0x232778u: goto label_232778;
        case 0x23277cu: goto label_23277c;
        case 0x232780u: goto label_232780;
        case 0x232784u: goto label_232784;
        case 0x232788u: goto label_232788;
        case 0x23278cu: goto label_23278c;
        case 0x232790u: goto label_232790;
        case 0x232794u: goto label_232794;
        case 0x232798u: goto label_232798;
        case 0x23279cu: goto label_23279c;
        case 0x2327a0u: goto label_2327a0;
        case 0x2327a4u: goto label_2327a4;
        case 0x2327a8u: goto label_2327a8;
        case 0x2327acu: goto label_2327ac;
        case 0x2327b0u: goto label_2327b0;
        case 0x2327b4u: goto label_2327b4;
        case 0x2327b8u: goto label_2327b8;
        case 0x2327bcu: goto label_2327bc;
        case 0x2327c0u: goto label_2327c0;
        case 0x2327c4u: goto label_2327c4;
        case 0x2327c8u: goto label_2327c8;
        case 0x2327ccu: goto label_2327cc;
        case 0x2327d0u: goto label_2327d0;
        case 0x2327d4u: goto label_2327d4;
        case 0x2327d8u: goto label_2327d8;
        case 0x2327dcu: goto label_2327dc;
        default: break;
    }

    ctx->pc = 0x232740u;

label_232740:
    // 0x232740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_232744:
    // 0x232744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_232748:
    // 0x232748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23274c:
    // 0x23274c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232750:
    // 0x232750: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x232750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_232754:
    // 0x232754: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x232754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_232758:
    // 0x232758: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23275c:
    if (ctx->pc == 0x23275Cu) {
        ctx->pc = 0x232760u;
        goto label_232760;
    }
    ctx->pc = 0x232758u;
    {
        const bool branch_taken_0x232758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232758) {
            ctx->pc = 0x232768u;
            goto label_232768;
        }
    }
    ctx->pc = 0x232760u;
label_232760:
    // 0x232760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232764:
    // 0x232764: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x232764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_232768:
    // 0x232768: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x232768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23276c:
    // 0x23276c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x23276cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232770:
    // 0x232770: 0xc119b68  jal         func_466DA0
label_232774:
    if (ctx->pc == 0x232774u) {
        ctx->pc = 0x232778u;
        goto label_232778;
    }
    ctx->pc = 0x232770u;
    SET_GPR_U32(ctx, 31, 0x232778u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x232770u, 0x232778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232778u;
label_232778:
    // 0x232778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23277c:
    // 0x23277c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_232780:
    if (ctx->pc == 0x232780u) {
        ctx->pc = 0x232784u;
        goto label_232784;
    }
    ctx->pc = 0x23277Cu;
    {
        const bool branch_taken_0x23277c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23277c) {
            ctx->pc = 0x232790u;
            goto label_232790;
        }
    }
    ctx->pc = 0x232784u;
label_232784:
    // 0x232784: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x232784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232788:
    // 0x232788: 0x1000000e  b           . + 4 + (0xE << 2)
label_23278c:
    if (ctx->pc == 0x23278Cu) {
        ctx->pc = 0x232790u;
        goto label_232790;
    }
    ctx->pc = 0x232788u;
    {
        const bool branch_taken_0x232788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232788) {
            ctx->pc = 0x2327C4u;
            goto label_2327c4;
        }
    }
    ctx->pc = 0x232790u;
label_232790:
    // 0x232790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x232790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232794:
    // 0x232794: 0xc0ba088  jal         func_2E8220
label_232798:
    if (ctx->pc == 0x232798u) {
        ctx->pc = 0x23279Cu;
        goto label_23279c;
    }
    ctx->pc = 0x232794u;
    SET_GPR_U32(ctx, 31, 0x23279Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x232794u, 0x23279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23279Cu;
label_23279c:
    // 0x23279c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23279cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2327a0:
    // 0x2327a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2327a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2327a4:
    // 0x2327a4: 0xc0ba088  jal         func_2E8220
label_2327a8:
    if (ctx->pc == 0x2327A8u) {
        ctx->pc = 0x2327ACu;
        goto label_2327ac;
    }
    ctx->pc = 0x2327A4u;
    SET_GPR_U32(ctx, 31, 0x2327ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2327A4u, 0x2327ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327ACu;
label_2327ac:
    // 0x2327ac: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2327b0:
    if (ctx->pc == 0x2327B0u) {
        ctx->pc = 0x2327B4u;
        goto label_2327b4;
    }
    ctx->pc = 0x2327ACu;
    {
        const bool branch_taken_0x2327ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327ac) {
            ctx->pc = 0x232768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232768;
        }
    }
    ctx->pc = 0x2327B4u;
label_2327b4:
    // 0x2327b4: 0x200f809  jalr        $s0
label_2327b8:
    if (ctx->pc == 0x2327B8u) {
        ctx->pc = 0x2327BCu;
        goto label_2327bc;
    }
    ctx->pc = 0x2327B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2327BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2327B4u, 0x2327BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2327BCu;
label_2327bc:
    // 0x2327bc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2327c0:
    if (ctx->pc == 0x2327C0u) {
        ctx->pc = 0x2327C4u;
        goto label_2327c4;
    }
    ctx->pc = 0x2327BCu;
    {
        const bool branch_taken_0x2327bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327bc) {
            ctx->pc = 0x232768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232768;
        }
    }
    ctx->pc = 0x2327C4u;
label_2327c4:
    // 0x2327c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2327c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2327c8:
    // 0x2327c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2327c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2327cc:
    // 0x2327cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2327ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2327d0:
    // 0x2327d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2327d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2327d4:
    // 0x2327d4: 0x3e00008  jr          $ra
label_2327d8:
    if (ctx->pc == 0x2327D8u) {
        ctx->pc = 0x2327DCu;
        goto label_2327dc;
    }
    ctx->pc = 0x2327D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2327D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2327DCu;
label_2327dc:
    // 0x2327dc: 0x0  nop
    ctx->pc = 0x2327dcu;
    // NOP
    ctx->pc = 0x2327e0u;
}
