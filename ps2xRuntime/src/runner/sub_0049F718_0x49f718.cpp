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

// Function: sub_0049F718
// Address: 0x49f718 - 0x49f7f0
void sub_0049F718_0x49f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F718_0x49f718");
#endif

    switch (ctx->pc) {
        case 0x49f718u: goto label_49f718;
        case 0x49f71cu: goto label_49f71c;
        case 0x49f720u: goto label_49f720;
        case 0x49f724u: goto label_49f724;
        case 0x49f728u: goto label_49f728;
        case 0x49f72cu: goto label_49f72c;
        case 0x49f730u: goto label_49f730;
        case 0x49f734u: goto label_49f734;
        case 0x49f738u: goto label_49f738;
        case 0x49f73cu: goto label_49f73c;
        case 0x49f740u: goto label_49f740;
        case 0x49f744u: goto label_49f744;
        case 0x49f748u: goto label_49f748;
        case 0x49f74cu: goto label_49f74c;
        case 0x49f750u: goto label_49f750;
        case 0x49f754u: goto label_49f754;
        case 0x49f758u: goto label_49f758;
        case 0x49f75cu: goto label_49f75c;
        case 0x49f760u: goto label_49f760;
        case 0x49f764u: goto label_49f764;
        case 0x49f768u: goto label_49f768;
        case 0x49f76cu: goto label_49f76c;
        case 0x49f770u: goto label_49f770;
        case 0x49f774u: goto label_49f774;
        case 0x49f778u: goto label_49f778;
        case 0x49f77cu: goto label_49f77c;
        case 0x49f780u: goto label_49f780;
        case 0x49f784u: goto label_49f784;
        case 0x49f788u: goto label_49f788;
        case 0x49f78cu: goto label_49f78c;
        case 0x49f790u: goto label_49f790;
        case 0x49f794u: goto label_49f794;
        case 0x49f798u: goto label_49f798;
        case 0x49f79cu: goto label_49f79c;
        case 0x49f7a0u: goto label_49f7a0;
        case 0x49f7a4u: goto label_49f7a4;
        case 0x49f7a8u: goto label_49f7a8;
        case 0x49f7acu: goto label_49f7ac;
        case 0x49f7b0u: goto label_49f7b0;
        case 0x49f7b4u: goto label_49f7b4;
        case 0x49f7b8u: goto label_49f7b8;
        case 0x49f7bcu: goto label_49f7bc;
        case 0x49f7c0u: goto label_49f7c0;
        case 0x49f7c4u: goto label_49f7c4;
        case 0x49f7c8u: goto label_49f7c8;
        case 0x49f7ccu: goto label_49f7cc;
        case 0x49f7d0u: goto label_49f7d0;
        case 0x49f7d4u: goto label_49f7d4;
        case 0x49f7d8u: goto label_49f7d8;
        case 0x49f7dcu: goto label_49f7dc;
        case 0x49f7e0u: goto label_49f7e0;
        case 0x49f7e4u: goto label_49f7e4;
        case 0x49f7e8u: goto label_49f7e8;
        case 0x49f7ecu: goto label_49f7ec;
        default: break;
    }

    ctx->pc = 0x49f718u;

label_49f718:
    // 0x49f718: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49f718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49f71c:
    // 0x49f71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f720:
    // 0x49f720: 0x8f83b824  lw          $v1, -0x47DC($gp)
    ctx->pc = 0x49f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948900)));
label_49f724:
    // 0x49f724: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_49f728:
    // 0x49f728: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49f72c:
    // 0x49f72c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49f730:
    // 0x49f730: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49f730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_49f734:
    // 0x49f734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f738:
    // 0x49f738: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_49f73c:
    if (ctx->pc == 0x49F73Cu) {
        ctx->pc = 0x49F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F738u;
        // 0x49f73c: 0xaf82b814  sw          $v0, -0x47EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F740u;
        goto label_49f740;
    }
    ctx->pc = 0x49F738u;
    {
        const bool branch_taken_0x49f738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F738u;
        // 0x49f73c: 0xaf82b814  sw          $v0, -0x47EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f738) {
            ctx->pc = 0x49F748u;
            goto label_49f748;
        }
    }
    ctx->pc = 0x49F740u;
label_49f740:
    // 0x49f740: 0xc127dac  jal         func_49F6B0
label_49f744:
    if (ctx->pc == 0x49F744u) {
        ctx->pc = 0x49F748u;
        goto label_49f748;
    }
    ctx->pc = 0x49F740u;
    SET_GPR_U32(ctx, 31, 0x49F748u);
    ctx->pc = 0x49F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F6B0u, 0x49F740u, 0x49F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F748u;
label_49f748:
    // 0x49f748: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49f748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_49f74c:
    // 0x49f74c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x49f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_49f750:
    // 0x49f750: 0x24535cf0  addiu       $s3, $v0, 0x5CF0
    ctx->pc = 0x49f750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23792));
label_49f754:
    // 0x49f754: 0x2472fa28  addiu       $s2, $v1, -0x5D8
    ctx->pc = 0x49f754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965800));
label_49f758:
    // 0x49f758: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x49f758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_49f75c:
    // 0x49f75c: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x49f75cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_49f760:
    // 0x49f760: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x49f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_49f764:
    // 0x49f764: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x49f764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_49f768:
    // 0x49f768: 0x60f809  jalr        $v1
label_49f76c:
    if (ctx->pc == 0x49F76Cu) {
        ctx->pc = 0x49F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F768u;
        // 0x49f76c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F770u;
        goto label_49f770;
    }
    ctx->pc = 0x49F768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x49F770u);
        ctx->pc = 0x49F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F768u;
        // 0x49f76c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F768u, 0x49F770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F770u;
label_49f770:
    // 0x49f770: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_49f774:
    if (ctx->pc == 0x49F774u) {
        ctx->pc = 0x49F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F770u;
        // 0x49f774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F778u;
        goto label_49f778;
    }
    ctx->pc = 0x49F770u;
    {
        const bool branch_taken_0x49f770 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F770u;
        // 0x49f774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f770) {
            ctx->pc = 0x49F784u;
            goto label_49f784;
        }
    }
    ctx->pc = 0x49F778u;
label_49f778:
    // 0x49f778: 0x2624fff8  addiu       $a0, $s1, -0x8
    ctx->pc = 0x49f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_49f77c:
    // 0x49f77c: 0x240f809  jalr        $s2
label_49f780:
    if (ctx->pc == 0x49F780u) {
        ctx->pc = 0x49F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F77Cu;
        // 0x49f780: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F784u;
        goto label_49f784;
    }
    ctx->pc = 0x49F77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x49F784u);
        ctx->pc = 0x49F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F77Cu;
        // 0x49f780: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F77Cu, 0x49F784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F784u;
label_49f784:
    // 0x49f784: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_49f788:
    if (ctx->pc == 0x49F788u) {
        ctx->pc = 0x49F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F784u;
        // 0x49f788: 0x1088c0  sll         $s1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F78Cu;
        goto label_49f78c;
    }
    ctx->pc = 0x49F784u;
    {
        const bool branch_taken_0x49f784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F784u;
        // 0x49f788: 0x1088c0  sll         $s1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f784) {
            ctx->pc = 0x49F760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f760;
        }
    }
    ctx->pc = 0x49F78Cu;
label_49f78c:
    // 0x49f78c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49f78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49f790:
    // 0x49f790: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49f790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49f794:
    // 0x49f794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49f794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49f798:
    // 0x49f798: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49f798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f79c:
    // 0x49f79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f7a0:
    // 0x49f7a0: 0xaf80b810  sw          $zero, -0x47F0($gp)
    ctx->pc = 0x49f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948880), GPR_U32(ctx, 0));
label_49f7a4:
    // 0x49f7a4: 0xaf80b814  sw          $zero, -0x47EC($gp)
    ctx->pc = 0x49f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948884), GPR_U32(ctx, 0));
label_49f7a8:
    // 0x49f7a8: 0x3e00008  jr          $ra
label_49f7ac:
    if (ctx->pc == 0x49F7ACu) {
        ctx->pc = 0x49F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F7A8u;
        // 0x49f7ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F7B0u;
        goto label_49f7b0;
    }
    ctx->pc = 0x49F7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F7A8u;
        // 0x49f7ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F7B0u;
label_49f7b0:
    // 0x49f7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49f7b4:
    // 0x49f7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f7b8:
    // 0x49f7b8: 0xc12b8b2  jal         func_4AE2C8
label_49f7bc:
    if (ctx->pc == 0x49F7BCu) {
        ctx->pc = 0x49F7C0u;
        goto label_49f7c0;
    }
    ctx->pc = 0x49F7B8u;
    SET_GPR_U32(ctx, 31, 0x49F7C0u);
    ctx->pc = 0x4AE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2C8u, 0x49F7B8u, 0x49F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F7C0u;
label_49f7c0:
    // 0x49f7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f7c4:
    // 0x49f7c4: 0x3e00008  jr          $ra
label_49f7c8:
    if (ctx->pc == 0x49F7C8u) {
        ctx->pc = 0x49F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F7C4u;
        // 0x49f7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F7CCu;
        goto label_49f7cc;
    }
    ctx->pc = 0x49F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F7C4u;
        // 0x49f7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F7CCu;
label_49f7cc:
    // 0x49f7cc: 0x0  nop
    ctx->pc = 0x49f7ccu;
    // NOP
label_49f7d0:
    // 0x49f7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49f7d4:
    // 0x49f7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f7d8:
    // 0x49f7d8: 0xc12b8ca  jal         func_4AE328
label_49f7dc:
    if (ctx->pc == 0x49F7DCu) {
        ctx->pc = 0x49F7E0u;
        goto label_49f7e0;
    }
    ctx->pc = 0x49F7D8u;
    SET_GPR_U32(ctx, 31, 0x49F7E0u);
    ctx->pc = 0x4AE328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE328u, 0x49F7D8u, 0x49F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F7E0u;
label_49f7e0:
    // 0x49f7e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f7e4:
    // 0x49f7e4: 0x3e00008  jr          $ra
label_49f7e8:
    if (ctx->pc == 0x49F7E8u) {
        ctx->pc = 0x49F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F7E4u;
        // 0x49f7e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F7ECu;
        goto label_49f7ec;
    }
    ctx->pc = 0x49F7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F7E4u;
        // 0x49f7e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F7ECu;
label_49f7ec:
    // 0x49f7ec: 0x0  nop
    ctx->pc = 0x49f7ecu;
    // NOP
    ctx->pc = 0x49f7f0u;
}
