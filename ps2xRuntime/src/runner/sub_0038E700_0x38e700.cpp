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

// Function: sub_0038E700
// Address: 0x38e700 - 0x38e780
void sub_0038E700_0x38e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E700_0x38e700");
#endif

    switch (ctx->pc) {
        case 0x38e700u: goto label_38e700;
        case 0x38e704u: goto label_38e704;
        case 0x38e708u: goto label_38e708;
        case 0x38e70cu: goto label_38e70c;
        case 0x38e710u: goto label_38e710;
        case 0x38e714u: goto label_38e714;
        case 0x38e718u: goto label_38e718;
        case 0x38e71cu: goto label_38e71c;
        case 0x38e720u: goto label_38e720;
        case 0x38e724u: goto label_38e724;
        case 0x38e728u: goto label_38e728;
        case 0x38e72cu: goto label_38e72c;
        case 0x38e730u: goto label_38e730;
        case 0x38e734u: goto label_38e734;
        case 0x38e738u: goto label_38e738;
        case 0x38e73cu: goto label_38e73c;
        case 0x38e740u: goto label_38e740;
        case 0x38e744u: goto label_38e744;
        case 0x38e748u: goto label_38e748;
        case 0x38e74cu: goto label_38e74c;
        case 0x38e750u: goto label_38e750;
        case 0x38e754u: goto label_38e754;
        case 0x38e758u: goto label_38e758;
        case 0x38e75cu: goto label_38e75c;
        case 0x38e760u: goto label_38e760;
        case 0x38e764u: goto label_38e764;
        case 0x38e768u: goto label_38e768;
        case 0x38e76cu: goto label_38e76c;
        case 0x38e770u: goto label_38e770;
        case 0x38e774u: goto label_38e774;
        case 0x38e778u: goto label_38e778;
        case 0x38e77cu: goto label_38e77c;
        default: break;
    }

    ctx->pc = 0x38e700u;

label_38e700:
    // 0x38e700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38e704:
    // 0x38e704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38e704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e708:
    // 0x38e708: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38e708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38e70c:
    // 0x38e70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38e710:
    // 0x38e710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e714:
    // 0x38e714: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x38e714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_38e718:
    // 0x38e718: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_38e71c:
    if (ctx->pc == 0x38E71Cu) {
        ctx->pc = 0x38E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E718u;
        // 0x38e71c: 0x96040018  lhu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E720u;
        goto label_38e720;
    }
    ctx->pc = 0x38E718u;
    {
        const bool branch_taken_0x38e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E718u;
        // 0x38e71c: 0x96040018  lhu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e718) {
            ctx->pc = 0x38E764u;
            goto label_38e764;
        }
    }
    ctx->pc = 0x38E720u;
label_38e720:
    // 0x38e720: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38e720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38e724:
    // 0x38e724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e728:
    // 0x38e728: 0xc104ca6  jal         func_413298
label_38e72c:
    if (ctx->pc == 0x38E72Cu) {
        ctx->pc = 0x38E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E728u;
        // 0x38e72c: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E730u;
        goto label_38e730;
    }
    ctx->pc = 0x38E728u;
    SET_GPR_U32(ctx, 31, 0x38E730u);
    ctx->pc = 0x38E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E728u;
    // 0x38e72c: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38E728u, 0x38E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E730u;
label_38e730:
    // 0x38e730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e734:
    // 0x38e734: 0xc0e39e0  jal         func_38E780
label_38e738:
    if (ctx->pc == 0x38E738u) {
        ctx->pc = 0x38E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E734u;
        // 0x38e738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E73Cu;
        goto label_38e73c;
    }
    ctx->pc = 0x38E734u;
    SET_GPR_U32(ctx, 31, 0x38E73Cu);
    ctx->pc = 0x38E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E734u;
    // 0x38e738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x38E734u, 0x38E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E73Cu;
label_38e73c:
    // 0x38e73c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38e740:
    // 0x38e740: 0x8f86bd40  lw          $a2, -0x42C0($gp)
    ctx->pc = 0x38e740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38e744:
    // 0x38e744: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x38e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_38e748:
    // 0x38e748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e74c:
    // 0x38e74c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x38e74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_38e750:
    // 0x38e750: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x38e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_38e754:
    // 0x38e754: 0x40f809  jalr        $v0
label_38e758:
    if (ctx->pc == 0x38E758u) {
        ctx->pc = 0x38E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E754u;
        // 0x38e758: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E75Cu;
        goto label_38e75c;
    }
    ctx->pc = 0x38E754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E75Cu);
        ctx->pc = 0x38E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E754u;
        // 0x38e758: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E754u, 0x38E75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E75Cu;
label_38e75c:
    // 0x38e75c: 0x10000004  b           . + 4 + (0x4 << 2)
label_38e760:
    if (ctx->pc == 0x38E760u) {
        ctx->pc = 0x38E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E75Cu;
        // 0x38e760: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E764u;
        goto label_38e764;
    }
    ctx->pc = 0x38E75Cu;
    {
        const bool branch_taken_0x38e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E75Cu;
        // 0x38e760: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e75c) {
            ctx->pc = 0x38E770u;
            goto label_38e770;
        }
    }
    ctx->pc = 0x38E764u;
label_38e764:
    // 0x38e764: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x38e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38e768:
    // 0x38e768: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x38e768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_38e76c:
    // 0x38e76c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38e76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e770:
    // 0x38e770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e774:
    // 0x38e774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e778:
    // 0x38e778: 0x3e00008  jr          $ra
label_38e77c:
    if (ctx->pc == 0x38E77Cu) {
        ctx->pc = 0x38E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E778u;
        // 0x38e77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E780u;
        goto label_fallthrough_0x38e778;
    }
    ctx->pc = 0x38E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E778u;
        // 0x38e77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38e778:
    ctx->pc = 0x38E780u;
}
