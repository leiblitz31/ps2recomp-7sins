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

// Function: sub_004787F0
// Address: 0x4787f0 - 0x478890
void sub_004787F0_0x4787f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004787F0_0x4787f0");
#endif

    switch (ctx->pc) {
        case 0x4787f0u: goto label_4787f0;
        case 0x4787f4u: goto label_4787f4;
        case 0x4787f8u: goto label_4787f8;
        case 0x4787fcu: goto label_4787fc;
        case 0x478800u: goto label_478800;
        case 0x478804u: goto label_478804;
        case 0x478808u: goto label_478808;
        case 0x47880cu: goto label_47880c;
        case 0x478810u: goto label_478810;
        case 0x478814u: goto label_478814;
        case 0x478818u: goto label_478818;
        case 0x47881cu: goto label_47881c;
        case 0x478820u: goto label_478820;
        case 0x478824u: goto label_478824;
        case 0x478828u: goto label_478828;
        case 0x47882cu: goto label_47882c;
        case 0x478830u: goto label_478830;
        case 0x478834u: goto label_478834;
        case 0x478838u: goto label_478838;
        case 0x47883cu: goto label_47883c;
        case 0x478840u: goto label_478840;
        case 0x478844u: goto label_478844;
        case 0x478848u: goto label_478848;
        case 0x47884cu: goto label_47884c;
        case 0x478850u: goto label_478850;
        case 0x478854u: goto label_478854;
        case 0x478858u: goto label_478858;
        case 0x47885cu: goto label_47885c;
        case 0x478860u: goto label_478860;
        case 0x478864u: goto label_478864;
        case 0x478868u: goto label_478868;
        case 0x47886cu: goto label_47886c;
        case 0x478870u: goto label_478870;
        case 0x478874u: goto label_478874;
        case 0x478878u: goto label_478878;
        case 0x47887cu: goto label_47887c;
        case 0x478880u: goto label_478880;
        case 0x478884u: goto label_478884;
        case 0x478888u: goto label_478888;
        case 0x47888cu: goto label_47888c;
        default: break;
    }

    ctx->pc = 0x4787f0u;

label_4787f0:
    // 0x4787f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4787f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4787f4:
    // 0x4787f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4787f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4787f8:
    // 0x4787f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4787f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4787fc:
    // 0x4787fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4787fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_478800:
    // 0x478800: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x478800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_478804:
    // 0x478804: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x478804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_478808:
    // 0x478808: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_47880c:
    if (ctx->pc == 0x47880Cu) {
        ctx->pc = 0x478810u;
        goto label_478810;
    }
    ctx->pc = 0x478808u;
    {
        const bool branch_taken_0x478808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478808) {
            ctx->pc = 0x478818u;
            goto label_478818;
        }
    }
    ctx->pc = 0x478810u;
label_478810:
    // 0x478810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x478810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_478814:
    // 0x478814: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x478814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_478818:
    // 0x478818: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x478818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_47881c:
    // 0x47881c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x47881cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_478820:
    // 0x478820: 0xc119b68  jal         func_466DA0
label_478824:
    if (ctx->pc == 0x478824u) {
        ctx->pc = 0x478828u;
        goto label_478828;
    }
    ctx->pc = 0x478820u;
    SET_GPR_U32(ctx, 31, 0x478828u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x478820u, 0x478828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478828u;
label_478828:
    // 0x478828: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x478828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47882c:
    // 0x47882c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_478830:
    if (ctx->pc == 0x478830u) {
        ctx->pc = 0x478834u;
        goto label_478834;
    }
    ctx->pc = 0x47882Cu;
    {
        const bool branch_taken_0x47882c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47882c) {
            ctx->pc = 0x478840u;
            goto label_478840;
        }
    }
    ctx->pc = 0x478834u;
label_478834:
    // 0x478834: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x478834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_478838:
    // 0x478838: 0x1000000e  b           . + 4 + (0xE << 2)
label_47883c:
    if (ctx->pc == 0x47883Cu) {
        ctx->pc = 0x478840u;
        goto label_478840;
    }
    ctx->pc = 0x478838u;
    {
        const bool branch_taken_0x478838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478838) {
            ctx->pc = 0x478874u;
            goto label_478874;
        }
    }
    ctx->pc = 0x478840u;
label_478840:
    // 0x478840: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x478840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478844:
    // 0x478844: 0xc0ba088  jal         func_2E8220
label_478848:
    if (ctx->pc == 0x478848u) {
        ctx->pc = 0x47884Cu;
        goto label_47884c;
    }
    ctx->pc = 0x478844u;
    SET_GPR_U32(ctx, 31, 0x47884Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x478844u, 0x47884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47884Cu;
label_47884c:
    // 0x47884c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47884cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_478850:
    // 0x478850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x478850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_478854:
    // 0x478854: 0xc0ba088  jal         func_2E8220
label_478858:
    if (ctx->pc == 0x478858u) {
        ctx->pc = 0x47885Cu;
        goto label_47885c;
    }
    ctx->pc = 0x478854u;
    SET_GPR_U32(ctx, 31, 0x47885Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x478854u, 0x47885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47885Cu;
label_47885c:
    // 0x47885c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_478860:
    if (ctx->pc == 0x478860u) {
        ctx->pc = 0x478864u;
        goto label_478864;
    }
    ctx->pc = 0x47885Cu;
    {
        const bool branch_taken_0x47885c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47885c) {
            ctx->pc = 0x478818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478818;
        }
    }
    ctx->pc = 0x478864u;
label_478864:
    // 0x478864: 0x200f809  jalr        $s0
label_478868:
    if (ctx->pc == 0x478868u) {
        ctx->pc = 0x47886Cu;
        goto label_47886c;
    }
    ctx->pc = 0x478864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x47886Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478864u, 0x47886Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47886Cu;
label_47886c:
    // 0x47886c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_478870:
    if (ctx->pc == 0x478870u) {
        ctx->pc = 0x478874u;
        goto label_478874;
    }
    ctx->pc = 0x47886Cu;
    {
        const bool branch_taken_0x47886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47886c) {
            ctx->pc = 0x478818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478818;
        }
    }
    ctx->pc = 0x478874u;
label_478874:
    // 0x478874: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x478874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_478878:
    // 0x478878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x478878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47887c:
    // 0x47887c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47887cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_478880:
    // 0x478880: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x478880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_478884:
    // 0x478884: 0x3e00008  jr          $ra
label_478888:
    if (ctx->pc == 0x478888u) {
        ctx->pc = 0x47888Cu;
        goto label_47888c;
    }
    ctx->pc = 0x478884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47888Cu;
label_47888c:
    // 0x47888c: 0x0  nop
    ctx->pc = 0x47888cu;
    // NOP
    ctx->pc = 0x478890u;
}
