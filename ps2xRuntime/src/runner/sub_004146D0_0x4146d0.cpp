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

// Function: sub_004146D0
// Address: 0x4146d0 - 0x414770
void sub_004146D0_0x4146d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004146D0_0x4146d0");
#endif

    switch (ctx->pc) {
        case 0x4146d0u: goto label_4146d0;
        case 0x4146d4u: goto label_4146d4;
        case 0x4146d8u: goto label_4146d8;
        case 0x4146dcu: goto label_4146dc;
        case 0x4146e0u: goto label_4146e0;
        case 0x4146e4u: goto label_4146e4;
        case 0x4146e8u: goto label_4146e8;
        case 0x4146ecu: goto label_4146ec;
        case 0x4146f0u: goto label_4146f0;
        case 0x4146f4u: goto label_4146f4;
        case 0x4146f8u: goto label_4146f8;
        case 0x4146fcu: goto label_4146fc;
        case 0x414700u: goto label_414700;
        case 0x414704u: goto label_414704;
        case 0x414708u: goto label_414708;
        case 0x41470cu: goto label_41470c;
        case 0x414710u: goto label_414710;
        case 0x414714u: goto label_414714;
        case 0x414718u: goto label_414718;
        case 0x41471cu: goto label_41471c;
        case 0x414720u: goto label_414720;
        case 0x414724u: goto label_414724;
        case 0x414728u: goto label_414728;
        case 0x41472cu: goto label_41472c;
        case 0x414730u: goto label_414730;
        case 0x414734u: goto label_414734;
        case 0x414738u: goto label_414738;
        case 0x41473cu: goto label_41473c;
        case 0x414740u: goto label_414740;
        case 0x414744u: goto label_414744;
        case 0x414748u: goto label_414748;
        case 0x41474cu: goto label_41474c;
        case 0x414750u: goto label_414750;
        case 0x414754u: goto label_414754;
        case 0x414758u: goto label_414758;
        case 0x41475cu: goto label_41475c;
        case 0x414760u: goto label_414760;
        case 0x414764u: goto label_414764;
        case 0x414768u: goto label_414768;
        case 0x41476cu: goto label_41476c;
        default: break;
    }

    ctx->pc = 0x4146d0u;

label_4146d0:
    // 0x4146d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4146d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4146d4:
    // 0x4146d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4146d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4146d8:
    // 0x4146d8: 0xc105328  jal         func_414CA0
label_4146dc:
    if (ctx->pc == 0x4146DCu) {
        ctx->pc = 0x4146E0u;
        goto label_4146e0;
    }
    ctx->pc = 0x4146D8u;
    SET_GPR_U32(ctx, 31, 0x4146E0u);
    ctx->pc = 0x414CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CA0u, 0x4146D8u, 0x4146E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4146E0u;
label_4146e0:
    // 0x4146e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4146e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4146e4:
    // 0x4146e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4146e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4146e8:
    // 0x4146e8: 0x3e00008  jr          $ra
label_4146ec:
    if (ctx->pc == 0x4146ECu) {
        ctx->pc = 0x4146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146E8u;
        // 0x4146ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4146F0u;
        goto label_4146f0;
    }
    ctx->pc = 0x4146E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146E8u;
        // 0x4146ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4146E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4146F0u;
label_4146f0:
    // 0x4146f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4146f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4146f4:
    // 0x4146f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4146f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4146f8:
    // 0x4146f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4146f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4146fc:
    // 0x4146fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4146fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414700:
    // 0x414700: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x414700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_414704:
    // 0x414704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x414704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414708:
    // 0x414708: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_41470c:
    if (ctx->pc == 0x41470Cu) {
        ctx->pc = 0x41470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414708u;
        // 0x41470c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414710u;
        goto label_414710;
    }
    ctx->pc = 0x414708u;
    {
        const bool branch_taken_0x414708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414708u;
        // 0x41470c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414708) {
            ctx->pc = 0x41474Cu;
            goto label_41474c;
        }
    }
    ctx->pc = 0x414710u;
label_414710:
    // 0x414710: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x414710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_414714:
    // 0x414714: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x414714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_414718:
    // 0x414718: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x414718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_41471c:
    // 0x41471c: 0x40f809  jalr        $v0
label_414720:
    if (ctx->pc == 0x414720u) {
        ctx->pc = 0x414720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41471Cu;
        // 0x414720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414724u;
        goto label_414724;
    }
    ctx->pc = 0x41471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414724u);
        ctx->pc = 0x414720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41471Cu;
        // 0x414720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41471Cu, 0x414724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414724u;
label_414724:
    // 0x414724: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x414724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_414728:
    // 0x414728: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_41472c:
    if (ctx->pc == 0x41472Cu) {
        ctx->pc = 0x41472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414728u;
        // 0x41472c: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414730u;
        goto label_414730;
    }
    ctx->pc = 0x414728u;
    {
        const bool branch_taken_0x414728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x414728) {
            ctx->pc = 0x41472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414728u;
            // 0x41472c: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414738u;
            goto label_414738;
        }
    }
    ctx->pc = 0x414730u;
label_414730:
    // 0x414730: 0x10000008  b           . + 4 + (0x8 << 2)
label_414734:
    if (ctx->pc == 0x414734u) {
        ctx->pc = 0x414734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414730u;
        // 0x414734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414738u;
        goto label_414738;
    }
    ctx->pc = 0x414730u;
    {
        const bool branch_taken_0x414730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414730u;
        // 0x414734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414730) {
            ctx->pc = 0x414754u;
            goto label_414754;
        }
    }
    ctx->pc = 0x414738u;
label_414738:
    // 0x414738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x414738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41473c:
    // 0x41473c: 0x40f809  jalr        $v0
label_414740:
    if (ctx->pc == 0x414740u) {
        ctx->pc = 0x414740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41473Cu;
        // 0x414740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414744u;
        goto label_414744;
    }
    ctx->pc = 0x41473Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414744u);
        ctx->pc = 0x414740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41473Cu;
        // 0x414740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41473Cu, 0x414744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414744u;
label_414744:
    // 0x414744: 0x10000003  b           . + 4 + (0x3 << 2)
label_414748:
    if (ctx->pc == 0x414748u) {
        ctx->pc = 0x414748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414744u;
        // 0x414748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41474Cu;
        goto label_41474c;
    }
    ctx->pc = 0x414744u;
    {
        const bool branch_taken_0x414744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414744u;
        // 0x414748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414744) {
            ctx->pc = 0x414754u;
            goto label_414754;
        }
    }
    ctx->pc = 0x41474Cu;
label_41474c:
    // 0x41474c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x41474cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_414750:
    // 0x414750: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x414750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414754:
    // 0x414754: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x414754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414758:
    // 0x414758: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x414758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41475c:
    // 0x41475c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41475cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414760:
    // 0x414760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_414764:
    // 0x414764: 0x3e00008  jr          $ra
label_414768:
    if (ctx->pc == 0x414768u) {
        ctx->pc = 0x414768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414764u;
        // 0x414768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41476Cu;
        goto label_41476c;
    }
    ctx->pc = 0x414764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414764u;
        // 0x414768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41476Cu;
label_41476c:
    // 0x41476c: 0x0  nop
    ctx->pc = 0x41476cu;
    // NOP
    ctx->pc = 0x414770u;
}
