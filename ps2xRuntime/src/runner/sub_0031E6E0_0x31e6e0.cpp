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

// Function: sub_0031E6E0
// Address: 0x31e6e0 - 0x31e788
void sub_0031E6E0_0x31e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E6E0_0x31e6e0");
#endif

    switch (ctx->pc) {
        case 0x31e6e0u: goto label_31e6e0;
        case 0x31e6e4u: goto label_31e6e4;
        case 0x31e6e8u: goto label_31e6e8;
        case 0x31e6ecu: goto label_31e6ec;
        case 0x31e6f0u: goto label_31e6f0;
        case 0x31e6f4u: goto label_31e6f4;
        case 0x31e6f8u: goto label_31e6f8;
        case 0x31e6fcu: goto label_31e6fc;
        case 0x31e700u: goto label_31e700;
        case 0x31e704u: goto label_31e704;
        case 0x31e708u: goto label_31e708;
        case 0x31e70cu: goto label_31e70c;
        case 0x31e710u: goto label_31e710;
        case 0x31e714u: goto label_31e714;
        case 0x31e718u: goto label_31e718;
        case 0x31e71cu: goto label_31e71c;
        case 0x31e720u: goto label_31e720;
        case 0x31e724u: goto label_31e724;
        case 0x31e728u: goto label_31e728;
        case 0x31e72cu: goto label_31e72c;
        case 0x31e730u: goto label_31e730;
        case 0x31e734u: goto label_31e734;
        case 0x31e738u: goto label_31e738;
        case 0x31e73cu: goto label_31e73c;
        case 0x31e740u: goto label_31e740;
        case 0x31e744u: goto label_31e744;
        case 0x31e748u: goto label_31e748;
        case 0x31e74cu: goto label_31e74c;
        case 0x31e750u: goto label_31e750;
        case 0x31e754u: goto label_31e754;
        case 0x31e758u: goto label_31e758;
        case 0x31e75cu: goto label_31e75c;
        case 0x31e760u: goto label_31e760;
        case 0x31e764u: goto label_31e764;
        case 0x31e768u: goto label_31e768;
        case 0x31e76cu: goto label_31e76c;
        case 0x31e770u: goto label_31e770;
        case 0x31e774u: goto label_31e774;
        case 0x31e778u: goto label_31e778;
        case 0x31e77cu: goto label_31e77c;
        case 0x31e780u: goto label_31e780;
        case 0x31e784u: goto label_31e784;
        default: break;
    }

    ctx->pc = 0x31e6e0u;

label_31e6e0:
    // 0x31e6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31e6e4:
    // 0x31e6e4: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x31e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_31e6e8:
    // 0x31e6e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_31e6ec:
    // 0x31e6ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_31e6f0:
    // 0x31e6f0: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x31e6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_31e6f4:
    // 0x31e6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31e6f8:
    // 0x31e6f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31e6fc:
    // 0x31e6fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_31e700:
    if (ctx->pc == 0x31E700u) {
        ctx->pc = 0x31E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6FCu;
        // 0x31e700: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E704u;
        goto label_31e704;
    }
    ctx->pc = 0x31E6FCu;
    {
        const bool branch_taken_0x31e6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6FCu;
        // 0x31e700: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6fc) {
            ctx->pc = 0x31E778u;
            goto label_31e778;
        }
    }
    ctx->pc = 0x31E704u;
label_31e704:
    // 0x31e704: 0xc0c7620  jal         func_31D880
label_31e708:
    if (ctx->pc == 0x31E708u) {
        ctx->pc = 0x31E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E704u;
        // 0x31e708: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E70Cu;
        goto label_31e70c;
    }
    ctx->pc = 0x31E704u;
    SET_GPR_U32(ctx, 31, 0x31E70Cu);
    ctx->pc = 0x31E708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E704u;
    // 0x31e708: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x31E704u, 0x31E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E70Cu;
label_31e70c:
    // 0x31e70c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x31e70cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31e710:
    // 0x31e710: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x31e710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31e714:
    // 0x31e714: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x31e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_31e718:
    // 0x31e718: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31e718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31e71c:
    // 0x31e71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31e71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e720:
    // 0x31e720: 0x40f809  jalr        $v0
label_31e724:
    if (ctx->pc == 0x31E724u) {
        ctx->pc = 0x31E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E720u;
        // 0x31e724: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E728u;
        goto label_31e728;
    }
    ctx->pc = 0x31E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E728u);
        ctx->pc = 0x31E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E720u;
        // 0x31e724: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E720u, 0x31E728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E728u;
label_31e728:
    // 0x31e728: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_31e72c:
    if (ctx->pc == 0x31E72Cu) {
        ctx->pc = 0x31E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E728u;
        // 0x31e72c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E730u;
        goto label_31e730;
    }
    ctx->pc = 0x31E728u;
    {
        const bool branch_taken_0x31e728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E728u;
        // 0x31e72c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e728) {
            ctx->pc = 0x31E760u;
            goto label_31e760;
        }
    }
    ctx->pc = 0x31E730u;
label_31e730:
    // 0x31e730: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31e734:
    // 0x31e734: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31e734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31e738:
    // 0x31e738: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31e738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31e73c:
    // 0x31e73c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e740:
    // 0x31e740: 0xc1035f6  jal         func_40D7D8
label_31e744:
    if (ctx->pc == 0x31E744u) {
        ctx->pc = 0x31E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E740u;
        // 0x31e744: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E748u;
        goto label_31e748;
    }
    ctx->pc = 0x31E740u;
    SET_GPR_U32(ctx, 31, 0x31E748u);
    ctx->pc = 0x31E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E740u;
    // 0x31e744: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31E740u, 0x31E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E748u;
label_31e748:
    // 0x31e748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31e748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31e74c:
    // 0x31e74c: 0xc103628  jal         func_40D8A0
label_31e750:
    if (ctx->pc == 0x31E750u) {
        ctx->pc = 0x31E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E74Cu;
        // 0x31e750: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E754u;
        goto label_31e754;
    }
    ctx->pc = 0x31E74Cu;
    SET_GPR_U32(ctx, 31, 0x31E754u);
    ctx->pc = 0x31E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E74Cu;
    // 0x31e750: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31E74Cu, 0x31E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E754u;
label_31e754:
    // 0x31e754: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e758:
    if (ctx->pc == 0x31E758u) {
        ctx->pc = 0x31E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E754u;
        // 0x31e758: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E75Cu;
        goto label_31e75c;
    }
    ctx->pc = 0x31E754u;
    {
        const bool branch_taken_0x31e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E754u;
        // 0x31e758: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e754) {
            ctx->pc = 0x31E774u;
            goto label_31e774;
        }
    }
    ctx->pc = 0x31E75Cu;
label_31e75c:
    // 0x31e75c: 0x0  nop
    ctx->pc = 0x31e75cu;
    // NOP
label_31e760:
    // 0x31e760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e764:
    // 0x31e764: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31e764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e768:
    // 0x31e768: 0xc0bb7e6  jal         func_2EDF98
label_31e76c:
    if (ctx->pc == 0x31E76Cu) {
        ctx->pc = 0x31E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E768u;
        // 0x31e76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E770u;
        goto label_31e770;
    }
    ctx->pc = 0x31E768u;
    SET_GPR_U32(ctx, 31, 0x31E770u);
    ctx->pc = 0x31E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E768u;
    // 0x31e76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31E768u, 0x31E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E770u;
label_31e770:
    // 0x31e770: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31e774:
    // 0x31e774: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31e774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31e778:
    // 0x31e778: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31e778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31e77c:
    // 0x31e77c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e780:
    // 0x31e780: 0x3e00008  jr          $ra
label_31e784:
    if (ctx->pc == 0x31E784u) {
        ctx->pc = 0x31E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E780u;
        // 0x31e784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E788u;
        goto label_fallthrough_0x31e780;
    }
    ctx->pc = 0x31E780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E780u;
        // 0x31e784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e780:
    ctx->pc = 0x31E788u;
}
