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

// Function: sub_002CA710
// Address: 0x2ca710 - 0x2ca7b0
void sub_002CA710_0x2ca710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA710_0x2ca710");
#endif

    switch (ctx->pc) {
        case 0x2ca710u: goto label_2ca710;
        case 0x2ca714u: goto label_2ca714;
        case 0x2ca718u: goto label_2ca718;
        case 0x2ca71cu: goto label_2ca71c;
        case 0x2ca720u: goto label_2ca720;
        case 0x2ca724u: goto label_2ca724;
        case 0x2ca728u: goto label_2ca728;
        case 0x2ca72cu: goto label_2ca72c;
        case 0x2ca730u: goto label_2ca730;
        case 0x2ca734u: goto label_2ca734;
        case 0x2ca738u: goto label_2ca738;
        case 0x2ca73cu: goto label_2ca73c;
        case 0x2ca740u: goto label_2ca740;
        case 0x2ca744u: goto label_2ca744;
        case 0x2ca748u: goto label_2ca748;
        case 0x2ca74cu: goto label_2ca74c;
        case 0x2ca750u: goto label_2ca750;
        case 0x2ca754u: goto label_2ca754;
        case 0x2ca758u: goto label_2ca758;
        case 0x2ca75cu: goto label_2ca75c;
        case 0x2ca760u: goto label_2ca760;
        case 0x2ca764u: goto label_2ca764;
        case 0x2ca768u: goto label_2ca768;
        case 0x2ca76cu: goto label_2ca76c;
        case 0x2ca770u: goto label_2ca770;
        case 0x2ca774u: goto label_2ca774;
        case 0x2ca778u: goto label_2ca778;
        case 0x2ca77cu: goto label_2ca77c;
        case 0x2ca780u: goto label_2ca780;
        case 0x2ca784u: goto label_2ca784;
        case 0x2ca788u: goto label_2ca788;
        case 0x2ca78cu: goto label_2ca78c;
        case 0x2ca790u: goto label_2ca790;
        case 0x2ca794u: goto label_2ca794;
        case 0x2ca798u: goto label_2ca798;
        case 0x2ca79cu: goto label_2ca79c;
        case 0x2ca7a0u: goto label_2ca7a0;
        case 0x2ca7a4u: goto label_2ca7a4;
        case 0x2ca7a8u: goto label_2ca7a8;
        case 0x2ca7acu: goto label_2ca7ac;
        default: break;
    }

    ctx->pc = 0x2ca710u;

label_2ca710:
    // 0x2ca710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ca710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ca714:
    // 0x2ca714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ca718:
    // 0x2ca718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ca71c:
    // 0x2ca71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ca720:
    // 0x2ca720: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2ca720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2ca724:
    // 0x2ca724: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ca724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2ca728:
    // 0x2ca728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ca72c:
    if (ctx->pc == 0x2CA72Cu) {
        ctx->pc = 0x2CA730u;
        goto label_2ca730;
    }
    ctx->pc = 0x2CA728u;
    {
        const bool branch_taken_0x2ca728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca728) {
            ctx->pc = 0x2CA738u;
            goto label_2ca738;
        }
    }
    ctx->pc = 0x2CA730u;
label_2ca730:
    // 0x2ca730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca734:
    // 0x2ca734: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2ca734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2ca738:
    // 0x2ca738: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ca738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2ca73c:
    // 0x2ca73c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2ca73cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ca740:
    // 0x2ca740: 0xc119b68  jal         func_466DA0
label_2ca744:
    if (ctx->pc == 0x2CA744u) {
        ctx->pc = 0x2CA748u;
        goto label_2ca748;
    }
    ctx->pc = 0x2CA740u;
    SET_GPR_U32(ctx, 31, 0x2CA748u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CA740u, 0x2CA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA748u;
label_2ca748:
    // 0x2ca748: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ca748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca74c:
    // 0x2ca74c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2ca750:
    if (ctx->pc == 0x2CA750u) {
        ctx->pc = 0x2CA754u;
        goto label_2ca754;
    }
    ctx->pc = 0x2CA74Cu;
    {
        const bool branch_taken_0x2ca74c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca74c) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA754u;
label_2ca754:
    // 0x2ca754: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ca754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca758:
    // 0x2ca758: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ca75c:
    if (ctx->pc == 0x2CA75Cu) {
        ctx->pc = 0x2CA760u;
        goto label_2ca760;
    }
    ctx->pc = 0x2CA758u;
    {
        const bool branch_taken_0x2ca758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca758) {
            ctx->pc = 0x2CA794u;
            goto label_2ca794;
        }
    }
    ctx->pc = 0x2CA760u;
label_2ca760:
    // 0x2ca760: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ca760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca764:
    // 0x2ca764: 0xc0ba088  jal         func_2E8220
label_2ca768:
    if (ctx->pc == 0x2CA768u) {
        ctx->pc = 0x2CA76Cu;
        goto label_2ca76c;
    }
    ctx->pc = 0x2CA764u;
    SET_GPR_U32(ctx, 31, 0x2CA76Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2CA764u, 0x2CA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA76Cu;
label_2ca76c:
    // 0x2ca76c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca770:
    // 0x2ca770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca774:
    // 0x2ca774: 0xc0ba088  jal         func_2E8220
label_2ca778:
    if (ctx->pc == 0x2CA778u) {
        ctx->pc = 0x2CA77Cu;
        goto label_2ca77c;
    }
    ctx->pc = 0x2CA774u;
    SET_GPR_U32(ctx, 31, 0x2CA77Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2CA774u, 0x2CA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA77Cu;
label_2ca77c:
    // 0x2ca77c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2ca780:
    if (ctx->pc == 0x2CA780u) {
        ctx->pc = 0x2CA784u;
        goto label_2ca784;
    }
    ctx->pc = 0x2CA77Cu;
    {
        const bool branch_taken_0x2ca77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca77c) {
            ctx->pc = 0x2CA738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca738;
        }
    }
    ctx->pc = 0x2CA784u;
label_2ca784:
    // 0x2ca784: 0x200f809  jalr        $s0
label_2ca788:
    if (ctx->pc == 0x2CA788u) {
        ctx->pc = 0x2CA78Cu;
        goto label_2ca78c;
    }
    ctx->pc = 0x2CA784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2CA78Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA784u, 0x2CA78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA78Cu;
label_2ca78c:
    // 0x2ca78c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2ca790:
    if (ctx->pc == 0x2CA790u) {
        ctx->pc = 0x2CA794u;
        goto label_2ca794;
    }
    ctx->pc = 0x2CA78Cu;
    {
        const bool branch_taken_0x2ca78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca78c) {
            ctx->pc = 0x2CA738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca738;
        }
    }
    ctx->pc = 0x2CA794u;
label_2ca794:
    // 0x2ca794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca798:
    // 0x2ca798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca79c:
    // 0x2ca79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca7a0:
    // 0x2ca7a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ca7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2ca7a4:
    // 0x2ca7a4: 0x3e00008  jr          $ra
label_2ca7a8:
    if (ctx->pc == 0x2CA7A8u) {
        ctx->pc = 0x2CA7ACu;
        goto label_2ca7ac;
    }
    ctx->pc = 0x2CA7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7ACu;
label_2ca7ac:
    // 0x2ca7ac: 0x0  nop
    ctx->pc = 0x2ca7acu;
    // NOP
    ctx->pc = 0x2ca7b0u;
}
