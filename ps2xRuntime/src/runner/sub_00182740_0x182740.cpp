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

// Function: sub_00182740
// Address: 0x182740 - 0x1827e0
void sub_00182740_0x182740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182740_0x182740");
#endif

    switch (ctx->pc) {
        case 0x182740u: goto label_182740;
        case 0x182744u: goto label_182744;
        case 0x182748u: goto label_182748;
        case 0x18274cu: goto label_18274c;
        case 0x182750u: goto label_182750;
        case 0x182754u: goto label_182754;
        case 0x182758u: goto label_182758;
        case 0x18275cu: goto label_18275c;
        case 0x182760u: goto label_182760;
        case 0x182764u: goto label_182764;
        case 0x182768u: goto label_182768;
        case 0x18276cu: goto label_18276c;
        case 0x182770u: goto label_182770;
        case 0x182774u: goto label_182774;
        case 0x182778u: goto label_182778;
        case 0x18277cu: goto label_18277c;
        case 0x182780u: goto label_182780;
        case 0x182784u: goto label_182784;
        case 0x182788u: goto label_182788;
        case 0x18278cu: goto label_18278c;
        case 0x182790u: goto label_182790;
        case 0x182794u: goto label_182794;
        case 0x182798u: goto label_182798;
        case 0x18279cu: goto label_18279c;
        case 0x1827a0u: goto label_1827a0;
        case 0x1827a4u: goto label_1827a4;
        case 0x1827a8u: goto label_1827a8;
        case 0x1827acu: goto label_1827ac;
        case 0x1827b0u: goto label_1827b0;
        case 0x1827b4u: goto label_1827b4;
        case 0x1827b8u: goto label_1827b8;
        case 0x1827bcu: goto label_1827bc;
        case 0x1827c0u: goto label_1827c0;
        case 0x1827c4u: goto label_1827c4;
        case 0x1827c8u: goto label_1827c8;
        case 0x1827ccu: goto label_1827cc;
        case 0x1827d0u: goto label_1827d0;
        case 0x1827d4u: goto label_1827d4;
        case 0x1827d8u: goto label_1827d8;
        case 0x1827dcu: goto label_1827dc;
        default: break;
    }

    ctx->pc = 0x182740u;

label_182740:
    // 0x182740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x182740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_182744:
    // 0x182744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_182748:
    // 0x182748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18274c:
    // 0x18274c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182750:
    // 0x182750: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x182750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_182754:
    // 0x182754: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x182754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_182758:
    // 0x182758: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18275c:
    if (ctx->pc == 0x18275Cu) {
        ctx->pc = 0x182760u;
        goto label_182760;
    }
    ctx->pc = 0x182758u;
    {
        const bool branch_taken_0x182758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182758) {
            ctx->pc = 0x182768u;
            goto label_182768;
        }
    }
    ctx->pc = 0x182760u;
label_182760:
    // 0x182760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182764:
    // 0x182764: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x182764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_182768:
    // 0x182768: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x182768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18276c:
    // 0x18276c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x18276cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_182770:
    // 0x182770: 0xc119b68  jal         func_466DA0
label_182774:
    if (ctx->pc == 0x182774u) {
        ctx->pc = 0x182778u;
        goto label_182778;
    }
    ctx->pc = 0x182770u;
    SET_GPR_U32(ctx, 31, 0x182778u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x182770u, 0x182778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182778u;
label_182778:
    // 0x182778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18277c:
    // 0x18277c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_182780:
    if (ctx->pc == 0x182780u) {
        ctx->pc = 0x182784u;
        goto label_182784;
    }
    ctx->pc = 0x18277Cu;
    {
        const bool branch_taken_0x18277c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18277c) {
            ctx->pc = 0x182790u;
            goto label_182790;
        }
    }
    ctx->pc = 0x182784u;
label_182784:
    // 0x182784: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x182784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_182788:
    // 0x182788: 0x1000000e  b           . + 4 + (0xE << 2)
label_18278c:
    if (ctx->pc == 0x18278Cu) {
        ctx->pc = 0x182790u;
        goto label_182790;
    }
    ctx->pc = 0x182788u;
    {
        const bool branch_taken_0x182788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182788) {
            ctx->pc = 0x1827C4u;
            goto label_1827c4;
        }
    }
    ctx->pc = 0x182790u;
label_182790:
    // 0x182790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x182790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182794:
    // 0x182794: 0xc0ba088  jal         func_2E8220
label_182798:
    if (ctx->pc == 0x182798u) {
        ctx->pc = 0x18279Cu;
        goto label_18279c;
    }
    ctx->pc = 0x182794u;
    SET_GPR_U32(ctx, 31, 0x18279Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x182794u, 0x18279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18279Cu;
label_18279c:
    // 0x18279c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18279cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1827a0:
    // 0x1827a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1827a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1827a4:
    // 0x1827a4: 0xc0ba088  jal         func_2E8220
label_1827a8:
    if (ctx->pc == 0x1827A8u) {
        ctx->pc = 0x1827ACu;
        goto label_1827ac;
    }
    ctx->pc = 0x1827A4u;
    SET_GPR_U32(ctx, 31, 0x1827ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1827A4u, 0x1827ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1827ACu;
label_1827ac:
    // 0x1827ac: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1827b0:
    if (ctx->pc == 0x1827B0u) {
        ctx->pc = 0x1827B4u;
        goto label_1827b4;
    }
    ctx->pc = 0x1827ACu;
    {
        const bool branch_taken_0x1827ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1827ac) {
            ctx->pc = 0x182768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182768;
        }
    }
    ctx->pc = 0x1827B4u;
label_1827b4:
    // 0x1827b4: 0x200f809  jalr        $s0
label_1827b8:
    if (ctx->pc == 0x1827B8u) {
        ctx->pc = 0x1827BCu;
        goto label_1827bc;
    }
    ctx->pc = 0x1827B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1827BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1827B4u, 0x1827BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1827BCu;
label_1827bc:
    // 0x1827bc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1827c0:
    if (ctx->pc == 0x1827C0u) {
        ctx->pc = 0x1827C4u;
        goto label_1827c4;
    }
    ctx->pc = 0x1827BCu;
    {
        const bool branch_taken_0x1827bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1827bc) {
            ctx->pc = 0x182768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182768;
        }
    }
    ctx->pc = 0x1827C4u;
label_1827c4:
    // 0x1827c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1827c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1827c8:
    // 0x1827c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1827c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1827cc:
    // 0x1827cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1827ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1827d0:
    // 0x1827d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1827d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1827d4:
    // 0x1827d4: 0x3e00008  jr          $ra
label_1827d8:
    if (ctx->pc == 0x1827D8u) {
        ctx->pc = 0x1827DCu;
        goto label_1827dc;
    }
    ctx->pc = 0x1827D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1827D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1827DCu;
label_1827dc:
    // 0x1827dc: 0x0  nop
    ctx->pc = 0x1827dcu;
    // NOP
    ctx->pc = 0x1827e0u;
}
