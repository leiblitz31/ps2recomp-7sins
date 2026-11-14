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

// Function: sub_0028F800
// Address: 0x28f800 - 0x28f8b0
void sub_0028F800_0x28f800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F800_0x28f800");
#endif

    switch (ctx->pc) {
        case 0x28f800u: goto label_28f800;
        case 0x28f804u: goto label_28f804;
        case 0x28f808u: goto label_28f808;
        case 0x28f80cu: goto label_28f80c;
        case 0x28f810u: goto label_28f810;
        case 0x28f814u: goto label_28f814;
        case 0x28f818u: goto label_28f818;
        case 0x28f81cu: goto label_28f81c;
        case 0x28f820u: goto label_28f820;
        case 0x28f824u: goto label_28f824;
        case 0x28f828u: goto label_28f828;
        case 0x28f82cu: goto label_28f82c;
        case 0x28f830u: goto label_28f830;
        case 0x28f834u: goto label_28f834;
        case 0x28f838u: goto label_28f838;
        case 0x28f83cu: goto label_28f83c;
        case 0x28f840u: goto label_28f840;
        case 0x28f844u: goto label_28f844;
        case 0x28f848u: goto label_28f848;
        case 0x28f84cu: goto label_28f84c;
        case 0x28f850u: goto label_28f850;
        case 0x28f854u: goto label_28f854;
        case 0x28f858u: goto label_28f858;
        case 0x28f85cu: goto label_28f85c;
        case 0x28f860u: goto label_28f860;
        case 0x28f864u: goto label_28f864;
        case 0x28f868u: goto label_28f868;
        case 0x28f86cu: goto label_28f86c;
        case 0x28f870u: goto label_28f870;
        case 0x28f874u: goto label_28f874;
        case 0x28f878u: goto label_28f878;
        case 0x28f87cu: goto label_28f87c;
        case 0x28f880u: goto label_28f880;
        case 0x28f884u: goto label_28f884;
        case 0x28f888u: goto label_28f888;
        case 0x28f88cu: goto label_28f88c;
        case 0x28f890u: goto label_28f890;
        case 0x28f894u: goto label_28f894;
        case 0x28f898u: goto label_28f898;
        case 0x28f89cu: goto label_28f89c;
        case 0x28f8a0u: goto label_28f8a0;
        case 0x28f8a4u: goto label_28f8a4;
        case 0x28f8a8u: goto label_28f8a8;
        case 0x28f8acu: goto label_28f8ac;
        default: break;
    }

    ctx->pc = 0x28f800u;

label_28f800:
    // 0x28f800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28f800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28f804:
    // 0x28f804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28f804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28f808:
    // 0x28f808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28f80c:
    // 0x28f80c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28f810:
    // 0x28f810: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28f810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_28f814:
    // 0x28f814: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28f818:
    // 0x28f818: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28f81c:
    if (ctx->pc == 0x28F81Cu) {
        ctx->pc = 0x28F820u;
        goto label_28f820;
    }
    ctx->pc = 0x28F818u;
    {
        const bool branch_taken_0x28f818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f818) {
            ctx->pc = 0x28F828u;
            goto label_28f828;
        }
    }
    ctx->pc = 0x28F820u;
label_28f820:
    // 0x28f820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f824:
    // 0x28f824: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28f824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_28f828:
    // 0x28f828: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x28f828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28f82c:
    // 0x28f82c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28f830:
    // 0x28f830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28f834:
    // 0x28f834: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x28f834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28f838:
    // 0x28f838: 0xc119b68  jal         func_466DA0
label_28f83c:
    if (ctx->pc == 0x28F83Cu) {
        ctx->pc = 0x28F840u;
        goto label_28f840;
    }
    ctx->pc = 0x28F838u;
    SET_GPR_U32(ctx, 31, 0x28F840u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x28F838u, 0x28F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F840u;
label_28f840:
    // 0x28f840: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f844:
    // 0x28f844: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_28f848:
    if (ctx->pc == 0x28F848u) {
        ctx->pc = 0x28F84Cu;
        goto label_28f84c;
    }
    ctx->pc = 0x28F844u;
    {
        const bool branch_taken_0x28f844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f844) {
            ctx->pc = 0x28F858u;
            goto label_28f858;
        }
    }
    ctx->pc = 0x28F84Cu;
label_28f84c:
    // 0x28f84c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28f84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f850:
    // 0x28f850: 0x1000000e  b           . + 4 + (0xE << 2)
label_28f854:
    if (ctx->pc == 0x28F854u) {
        ctx->pc = 0x28F858u;
        goto label_28f858;
    }
    ctx->pc = 0x28F850u;
    {
        const bool branch_taken_0x28f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f850) {
            ctx->pc = 0x28F88Cu;
            goto label_28f88c;
        }
    }
    ctx->pc = 0x28F858u;
label_28f858:
    // 0x28f858: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f85c:
    // 0x28f85c: 0xc0ba088  jal         func_2E8220
label_28f860:
    if (ctx->pc == 0x28F860u) {
        ctx->pc = 0x28F864u;
        goto label_28f864;
    }
    ctx->pc = 0x28F85Cu;
    SET_GPR_U32(ctx, 31, 0x28F864u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x28F85Cu, 0x28F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F864u;
label_28f864:
    // 0x28f864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f868:
    // 0x28f868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f86c:
    // 0x28f86c: 0xc0ba088  jal         func_2E8220
label_28f870:
    if (ctx->pc == 0x28F870u) {
        ctx->pc = 0x28F874u;
        goto label_28f874;
    }
    ctx->pc = 0x28F86Cu;
    SET_GPR_U32(ctx, 31, 0x28F874u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x28F86Cu, 0x28F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F874u;
label_28f874:
    // 0x28f874: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_28f878:
    if (ctx->pc == 0x28F878u) {
        ctx->pc = 0x28F87Cu;
        goto label_28f87c;
    }
    ctx->pc = 0x28F874u;
    {
        const bool branch_taken_0x28f874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f874) {
            ctx->pc = 0x28F828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f828;
        }
    }
    ctx->pc = 0x28F87Cu;
label_28f87c:
    // 0x28f87c: 0x200f809  jalr        $s0
label_28f880:
    if (ctx->pc == 0x28F880u) {
        ctx->pc = 0x28F884u;
        goto label_28f884;
    }
    ctx->pc = 0x28F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x28F884u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F87Cu, 0x28F884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F884u;
label_28f884:
    // 0x28f884: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_28f888:
    if (ctx->pc == 0x28F888u) {
        ctx->pc = 0x28F88Cu;
        goto label_28f88c;
    }
    ctx->pc = 0x28F884u;
    {
        const bool branch_taken_0x28f884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f884) {
            ctx->pc = 0x28F828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f828;
        }
    }
    ctx->pc = 0x28F88Cu;
label_28f88c:
    // 0x28f88c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28f890:
    // 0x28f890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28f894:
    // 0x28f894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28f898:
    // 0x28f898: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28f898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28f89c:
    // 0x28f89c: 0x3e00008  jr          $ra
label_28f8a0:
    if (ctx->pc == 0x28F8A0u) {
        ctx->pc = 0x28F8A4u;
        goto label_28f8a4;
    }
    ctx->pc = 0x28F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F8A4u;
label_28f8a4:
    // 0x28f8a4: 0x0  nop
    ctx->pc = 0x28f8a4u;
    // NOP
label_28f8a8:
    // 0x28f8a8: 0x0  nop
    ctx->pc = 0x28f8a8u;
    // NOP
label_28f8ac:
    // 0x28f8ac: 0x0  nop
    ctx->pc = 0x28f8acu;
    // NOP
    ctx->pc = 0x28f8b0u;
}
