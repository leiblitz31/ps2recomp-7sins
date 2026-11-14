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

// Function: sub_001C36D0
// Address: 0x1c36d0 - 0x1c3770
void sub_001C36D0_0x1c36d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C36D0_0x1c36d0");
#endif

    switch (ctx->pc) {
        case 0x1c36d0u: goto label_1c36d0;
        case 0x1c36d4u: goto label_1c36d4;
        case 0x1c36d8u: goto label_1c36d8;
        case 0x1c36dcu: goto label_1c36dc;
        case 0x1c36e0u: goto label_1c36e0;
        case 0x1c36e4u: goto label_1c36e4;
        case 0x1c36e8u: goto label_1c36e8;
        case 0x1c36ecu: goto label_1c36ec;
        case 0x1c36f0u: goto label_1c36f0;
        case 0x1c36f4u: goto label_1c36f4;
        case 0x1c36f8u: goto label_1c36f8;
        case 0x1c36fcu: goto label_1c36fc;
        case 0x1c3700u: goto label_1c3700;
        case 0x1c3704u: goto label_1c3704;
        case 0x1c3708u: goto label_1c3708;
        case 0x1c370cu: goto label_1c370c;
        case 0x1c3710u: goto label_1c3710;
        case 0x1c3714u: goto label_1c3714;
        case 0x1c3718u: goto label_1c3718;
        case 0x1c371cu: goto label_1c371c;
        case 0x1c3720u: goto label_1c3720;
        case 0x1c3724u: goto label_1c3724;
        case 0x1c3728u: goto label_1c3728;
        case 0x1c372cu: goto label_1c372c;
        case 0x1c3730u: goto label_1c3730;
        case 0x1c3734u: goto label_1c3734;
        case 0x1c3738u: goto label_1c3738;
        case 0x1c373cu: goto label_1c373c;
        case 0x1c3740u: goto label_1c3740;
        case 0x1c3744u: goto label_1c3744;
        case 0x1c3748u: goto label_1c3748;
        case 0x1c374cu: goto label_1c374c;
        case 0x1c3750u: goto label_1c3750;
        case 0x1c3754u: goto label_1c3754;
        case 0x1c3758u: goto label_1c3758;
        case 0x1c375cu: goto label_1c375c;
        case 0x1c3760u: goto label_1c3760;
        case 0x1c3764u: goto label_1c3764;
        case 0x1c3768u: goto label_1c3768;
        case 0x1c376cu: goto label_1c376c;
        default: break;
    }

    ctx->pc = 0x1c36d0u;

label_1c36d0:
    // 0x1c36d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c36d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c36d4:
    // 0x1c36d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c36d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c36d8:
    // 0x1c36d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c36d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c36dc:
    // 0x1c36dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c36dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c36e0:
    // 0x1c36e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1c36e4:
    // 0x1c36e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c36e8:
    // 0x1c36e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c36ec:
    if (ctx->pc == 0x1C36ECu) {
        ctx->pc = 0x1C36F0u;
        goto label_1c36f0;
    }
    ctx->pc = 0x1C36E8u;
    {
        const bool branch_taken_0x1c36e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c36e8) {
            ctx->pc = 0x1C36F8u;
            goto label_1c36f8;
        }
    }
    ctx->pc = 0x1C36F0u;
label_1c36f0:
    // 0x1c36f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c36f4:
    // 0x1c36f4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c36f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1c36f8:
    // 0x1c36f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c36fc:
    // 0x1c36fc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1c36fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c3700:
    // 0x1c3700: 0xc119b68  jal         func_466DA0
label_1c3704:
    if (ctx->pc == 0x1C3704u) {
        ctx->pc = 0x1C3708u;
        goto label_1c3708;
    }
    ctx->pc = 0x1C3700u;
    SET_GPR_U32(ctx, 31, 0x1C3708u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1C3700u, 0x1C3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3708u;
label_1c3708:
    // 0x1c3708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c3708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c370c:
    // 0x1c370c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1c3710:
    if (ctx->pc == 0x1C3710u) {
        ctx->pc = 0x1C3714u;
        goto label_1c3714;
    }
    ctx->pc = 0x1C370Cu;
    {
        const bool branch_taken_0x1c370c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c370c) {
            ctx->pc = 0x1C3720u;
            goto label_1c3720;
        }
    }
    ctx->pc = 0x1C3714u;
label_1c3714:
    // 0x1c3714: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c3714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3718:
    // 0x1c3718: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c371c:
    if (ctx->pc == 0x1C371Cu) {
        ctx->pc = 0x1C3720u;
        goto label_1c3720;
    }
    ctx->pc = 0x1C3718u;
    {
        const bool branch_taken_0x1c3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3718) {
            ctx->pc = 0x1C3754u;
            goto label_1c3754;
        }
    }
    ctx->pc = 0x1C3720u;
label_1c3720:
    // 0x1c3720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3724:
    // 0x1c3724: 0xc0ba088  jal         func_2E8220
label_1c3728:
    if (ctx->pc == 0x1C3728u) {
        ctx->pc = 0x1C372Cu;
        goto label_1c372c;
    }
    ctx->pc = 0x1C3724u;
    SET_GPR_U32(ctx, 31, 0x1C372Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C3724u, 0x1C372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C372Cu;
label_1c372c:
    // 0x1c372c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3730:
    // 0x1c3730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3734:
    // 0x1c3734: 0xc0ba088  jal         func_2E8220
label_1c3738:
    if (ctx->pc == 0x1C3738u) {
        ctx->pc = 0x1C373Cu;
        goto label_1c373c;
    }
    ctx->pc = 0x1C3734u;
    SET_GPR_U32(ctx, 31, 0x1C373Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C3734u, 0x1C373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C373Cu;
label_1c373c:
    // 0x1c373c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1c3740:
    if (ctx->pc == 0x1C3740u) {
        ctx->pc = 0x1C3744u;
        goto label_1c3744;
    }
    ctx->pc = 0x1C373Cu;
    {
        const bool branch_taken_0x1c373c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c373c) {
            ctx->pc = 0x1C36F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c36f8;
        }
    }
    ctx->pc = 0x1C3744u;
label_1c3744:
    // 0x1c3744: 0x200f809  jalr        $s0
label_1c3748:
    if (ctx->pc == 0x1C3748u) {
        ctx->pc = 0x1C374Cu;
        goto label_1c374c;
    }
    ctx->pc = 0x1C3744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1C374Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3744u, 0x1C374Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C374Cu;
label_1c374c:
    // 0x1c374c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1c3750:
    if (ctx->pc == 0x1C3750u) {
        ctx->pc = 0x1C3754u;
        goto label_1c3754;
    }
    ctx->pc = 0x1C374Cu;
    {
        const bool branch_taken_0x1c374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c374c) {
            ctx->pc = 0x1C36F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c36f8;
        }
    }
    ctx->pc = 0x1C3754u;
label_1c3754:
    // 0x1c3754: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3758:
    // 0x1c3758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c375c:
    // 0x1c375c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c375cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3760:
    // 0x1c3760: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c3760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c3764:
    // 0x1c3764: 0x3e00008  jr          $ra
label_1c3768:
    if (ctx->pc == 0x1C3768u) {
        ctx->pc = 0x1C376Cu;
        goto label_1c376c;
    }
    ctx->pc = 0x1C3764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C376Cu;
label_1c376c:
    // 0x1c376c: 0x0  nop
    ctx->pc = 0x1c376cu;
    // NOP
    ctx->pc = 0x1c3770u;
}
