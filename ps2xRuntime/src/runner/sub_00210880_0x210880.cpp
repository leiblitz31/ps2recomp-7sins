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

// Function: sub_00210880
// Address: 0x210880 - 0x210930
void sub_00210880_0x210880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210880_0x210880");
#endif

    switch (ctx->pc) {
        case 0x210880u: goto label_210880;
        case 0x210884u: goto label_210884;
        case 0x210888u: goto label_210888;
        case 0x21088cu: goto label_21088c;
        case 0x210890u: goto label_210890;
        case 0x210894u: goto label_210894;
        case 0x210898u: goto label_210898;
        case 0x21089cu: goto label_21089c;
        case 0x2108a0u: goto label_2108a0;
        case 0x2108a4u: goto label_2108a4;
        case 0x2108a8u: goto label_2108a8;
        case 0x2108acu: goto label_2108ac;
        case 0x2108b0u: goto label_2108b0;
        case 0x2108b4u: goto label_2108b4;
        case 0x2108b8u: goto label_2108b8;
        case 0x2108bcu: goto label_2108bc;
        case 0x2108c0u: goto label_2108c0;
        case 0x2108c4u: goto label_2108c4;
        case 0x2108c8u: goto label_2108c8;
        case 0x2108ccu: goto label_2108cc;
        case 0x2108d0u: goto label_2108d0;
        case 0x2108d4u: goto label_2108d4;
        case 0x2108d8u: goto label_2108d8;
        case 0x2108dcu: goto label_2108dc;
        case 0x2108e0u: goto label_2108e0;
        case 0x2108e4u: goto label_2108e4;
        case 0x2108e8u: goto label_2108e8;
        case 0x2108ecu: goto label_2108ec;
        case 0x2108f0u: goto label_2108f0;
        case 0x2108f4u: goto label_2108f4;
        case 0x2108f8u: goto label_2108f8;
        case 0x2108fcu: goto label_2108fc;
        case 0x210900u: goto label_210900;
        case 0x210904u: goto label_210904;
        case 0x210908u: goto label_210908;
        case 0x21090cu: goto label_21090c;
        case 0x210910u: goto label_210910;
        case 0x210914u: goto label_210914;
        case 0x210918u: goto label_210918;
        case 0x21091cu: goto label_21091c;
        case 0x210920u: goto label_210920;
        case 0x210924u: goto label_210924;
        case 0x210928u: goto label_210928;
        case 0x21092cu: goto label_21092c;
        default: break;
    }

    ctx->pc = 0x210880u;

label_210880:
    // 0x210880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x210880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_210884:
    // 0x210884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x210884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_210888:
    // 0x210888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21088c:
    // 0x21088c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_210890:
    // 0x210890: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x210890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_210894:
    // 0x210894: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_210898:
    // 0x210898: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21089c:
    if (ctx->pc == 0x21089Cu) {
        ctx->pc = 0x2108A0u;
        goto label_2108a0;
    }
    ctx->pc = 0x210898u;
    {
        const bool branch_taken_0x210898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210898) {
            ctx->pc = 0x2108A8u;
            goto label_2108a8;
        }
    }
    ctx->pc = 0x2108A0u;
label_2108a0:
    // 0x2108a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2108a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2108a4:
    // 0x2108a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2108a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2108a8:
    // 0x2108a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2108a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2108ac:
    // 0x2108ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2108acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2108b0:
    // 0x2108b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2108b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2108b4:
    // 0x2108b4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2108b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2108b8:
    // 0x2108b8: 0xc119b68  jal         func_466DA0
label_2108bc:
    if (ctx->pc == 0x2108BCu) {
        ctx->pc = 0x2108C0u;
        goto label_2108c0;
    }
    ctx->pc = 0x2108B8u;
    SET_GPR_U32(ctx, 31, 0x2108C0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2108B8u, 0x2108C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108C0u;
label_2108c0:
    // 0x2108c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2108c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2108c4:
    // 0x2108c4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2108c8:
    if (ctx->pc == 0x2108C8u) {
        ctx->pc = 0x2108CCu;
        goto label_2108cc;
    }
    ctx->pc = 0x2108C4u;
    {
        const bool branch_taken_0x2108c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2108c4) {
            ctx->pc = 0x2108D8u;
            goto label_2108d8;
        }
    }
    ctx->pc = 0x2108CCu;
label_2108cc:
    // 0x2108cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2108ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2108d0:
    // 0x2108d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2108d4:
    if (ctx->pc == 0x2108D4u) {
        ctx->pc = 0x2108D8u;
        goto label_2108d8;
    }
    ctx->pc = 0x2108D0u;
    {
        const bool branch_taken_0x2108d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2108d0) {
            ctx->pc = 0x21090Cu;
            goto label_21090c;
        }
    }
    ctx->pc = 0x2108D8u;
label_2108d8:
    // 0x2108d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2108d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2108dc:
    // 0x2108dc: 0xc0ba088  jal         func_2E8220
label_2108e0:
    if (ctx->pc == 0x2108E0u) {
        ctx->pc = 0x2108E4u;
        goto label_2108e4;
    }
    ctx->pc = 0x2108DCu;
    SET_GPR_U32(ctx, 31, 0x2108E4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2108DCu, 0x2108E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108E4u;
label_2108e4:
    // 0x2108e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2108e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2108e8:
    // 0x2108e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2108e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2108ec:
    // 0x2108ec: 0xc0ba088  jal         func_2E8220
label_2108f0:
    if (ctx->pc == 0x2108F0u) {
        ctx->pc = 0x2108F4u;
        goto label_2108f4;
    }
    ctx->pc = 0x2108ECu;
    SET_GPR_U32(ctx, 31, 0x2108F4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2108ECu, 0x2108F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108F4u;
label_2108f4:
    // 0x2108f4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_2108f8:
    if (ctx->pc == 0x2108F8u) {
        ctx->pc = 0x2108FCu;
        goto label_2108fc;
    }
    ctx->pc = 0x2108F4u;
    {
        const bool branch_taken_0x2108f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2108f4) {
            ctx->pc = 0x2108A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2108a8;
        }
    }
    ctx->pc = 0x2108FCu;
label_2108fc:
    // 0x2108fc: 0x200f809  jalr        $s0
label_210900:
    if (ctx->pc == 0x210900u) {
        ctx->pc = 0x210904u;
        goto label_210904;
    }
    ctx->pc = 0x2108FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x210904u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2108FCu, 0x210904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210904u;
label_210904:
    // 0x210904: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_210908:
    if (ctx->pc == 0x210908u) {
        ctx->pc = 0x21090Cu;
        goto label_21090c;
    }
    ctx->pc = 0x210904u;
    {
        const bool branch_taken_0x210904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210904) {
            ctx->pc = 0x2108A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2108a8;
        }
    }
    ctx->pc = 0x21090Cu;
label_21090c:
    // 0x21090c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_210910:
    // 0x210910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210914:
    // 0x210914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210918:
    // 0x210918: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x210918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21091c:
    // 0x21091c: 0x3e00008  jr          $ra
label_210920:
    if (ctx->pc == 0x210920u) {
        ctx->pc = 0x210924u;
        goto label_210924;
    }
    ctx->pc = 0x21091Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21091Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210924u;
label_210924:
    // 0x210924: 0x0  nop
    ctx->pc = 0x210924u;
    // NOP
label_210928:
    // 0x210928: 0x0  nop
    ctx->pc = 0x210928u;
    // NOP
label_21092c:
    // 0x21092c: 0x0  nop
    ctx->pc = 0x21092cu;
    // NOP
    ctx->pc = 0x210930u;
}
