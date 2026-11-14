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

// Function: sub_0037D6C0
// Address: 0x37d6c0 - 0x37d7a0
void sub_0037D6C0_0x37d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D6C0_0x37d6c0");
#endif

    switch (ctx->pc) {
        case 0x37d6c0u: goto label_37d6c0;
        case 0x37d6c4u: goto label_37d6c4;
        case 0x37d6c8u: goto label_37d6c8;
        case 0x37d6ccu: goto label_37d6cc;
        case 0x37d6d0u: goto label_37d6d0;
        case 0x37d6d4u: goto label_37d6d4;
        case 0x37d6d8u: goto label_37d6d8;
        case 0x37d6dcu: goto label_37d6dc;
        case 0x37d6e0u: goto label_37d6e0;
        case 0x37d6e4u: goto label_37d6e4;
        case 0x37d6e8u: goto label_37d6e8;
        case 0x37d6ecu: goto label_37d6ec;
        case 0x37d6f0u: goto label_37d6f0;
        case 0x37d6f4u: goto label_37d6f4;
        case 0x37d6f8u: goto label_37d6f8;
        case 0x37d6fcu: goto label_37d6fc;
        case 0x37d700u: goto label_37d700;
        case 0x37d704u: goto label_37d704;
        case 0x37d708u: goto label_37d708;
        case 0x37d70cu: goto label_37d70c;
        case 0x37d710u: goto label_37d710;
        case 0x37d714u: goto label_37d714;
        case 0x37d718u: goto label_37d718;
        case 0x37d71cu: goto label_37d71c;
        case 0x37d720u: goto label_37d720;
        case 0x37d724u: goto label_37d724;
        case 0x37d728u: goto label_37d728;
        case 0x37d72cu: goto label_37d72c;
        case 0x37d730u: goto label_37d730;
        case 0x37d734u: goto label_37d734;
        case 0x37d738u: goto label_37d738;
        case 0x37d73cu: goto label_37d73c;
        case 0x37d740u: goto label_37d740;
        case 0x37d744u: goto label_37d744;
        case 0x37d748u: goto label_37d748;
        case 0x37d74cu: goto label_37d74c;
        case 0x37d750u: goto label_37d750;
        case 0x37d754u: goto label_37d754;
        case 0x37d758u: goto label_37d758;
        case 0x37d75cu: goto label_37d75c;
        case 0x37d760u: goto label_37d760;
        case 0x37d764u: goto label_37d764;
        case 0x37d768u: goto label_37d768;
        case 0x37d76cu: goto label_37d76c;
        case 0x37d770u: goto label_37d770;
        case 0x37d774u: goto label_37d774;
        case 0x37d778u: goto label_37d778;
        case 0x37d77cu: goto label_37d77c;
        case 0x37d780u: goto label_37d780;
        case 0x37d784u: goto label_37d784;
        case 0x37d788u: goto label_37d788;
        case 0x37d78cu: goto label_37d78c;
        case 0x37d790u: goto label_37d790;
        case 0x37d794u: goto label_37d794;
        case 0x37d798u: goto label_37d798;
        case 0x37d79cu: goto label_37d79c;
        default: break;
    }

    ctx->pc = 0x37d6c0u;

label_37d6c0:
    // 0x37d6c0: 0x8f82bcf4  lw          $v0, -0x430C($gp)
    ctx->pc = 0x37d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950132)));
label_37d6c4:
    // 0x37d6c4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37d6c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_37d6c8:
    // 0x37d6c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_37d6cc:
    // 0x37d6cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37d6d0:
    // 0x37d6d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37d6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_37d6d4:
    // 0x37d6d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_37d6d8:
    // 0x37d6d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37d6dc:
    // 0x37d6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37d6e0:
    // 0x37d6e0: 0xaf82bcf4  sw          $v0, -0x430C($gp)
    ctx->pc = 0x37d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950132), GPR_U32(ctx, 2));
label_37d6e4:
    // 0x37d6e4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_37d6e8:
    if (ctx->pc == 0x37D6E8u) {
        ctx->pc = 0x37D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6E4u;
        // 0x37d6e8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D6ECu;
        goto label_37d6ec;
    }
    ctx->pc = 0x37D6E4u;
    {
        const bool branch_taken_0x37d6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6E4u;
        // 0x37d6e8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d6e4) {
            ctx->pc = 0x37D780u;
            goto label_37d780;
        }
    }
    ctx->pc = 0x37D6ECu;
label_37d6ec:
    // 0x37d6ec: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x37d6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_37d6f0:
    // 0x37d6f0: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x37d6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_37d6f4:
    // 0x37d6f4: 0x2631c490  addiu       $s1, $s1, -0x3B70
    ctx->pc = 0x37d6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952080));
label_37d6f8:
    // 0x37d6f8: 0x2652e880  addiu       $s2, $s2, -0x1780
    ctx->pc = 0x37d6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_37d6fc:
    // 0x37d6fc: 0x26300028  addiu       $s0, $s1, 0x28
    ctx->pc = 0x37d6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_37d700:
    // 0x37d700: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d704:
    // 0x37d704: 0x40f809  jalr        $v0
label_37d708:
    if (ctx->pc == 0x37D708u) {
        ctx->pc = 0x37D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D704u;
        // 0x37d708: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D70Cu;
        goto label_37d70c;
    }
    ctx->pc = 0x37D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D70Cu);
        ctx->pc = 0x37D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D704u;
        // 0x37d708: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D704u, 0x37D70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D70Cu;
label_37d70c:
    // 0x37d70c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x37d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_37d710:
    // 0x37d710: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d714:
    // 0x37d714: 0x40f809  jalr        $v0
label_37d718:
    if (ctx->pc == 0x37D718u) {
        ctx->pc = 0x37D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D714u;
        // 0x37d718: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D71Cu;
        goto label_37d71c;
    }
    ctx->pc = 0x37D714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D71Cu);
        ctx->pc = 0x37D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D714u;
        // 0x37d718: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D714u, 0x37D71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D71Cu;
label_37d71c:
    // 0x37d71c: 0x8e04fff8  lw          $a0, -0x8($s0)
    ctx->pc = 0x37d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
label_37d720:
    // 0x37d720: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d724:
    // 0x37d724: 0x40f809  jalr        $v0
label_37d728:
    if (ctx->pc == 0x37D728u) {
        ctx->pc = 0x37D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D724u;
        // 0x37d728: 0xae00fffc  sw          $zero, -0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D72Cu;
        goto label_37d72c;
    }
    ctx->pc = 0x37D724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D72Cu);
        ctx->pc = 0x37D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D724u;
        // 0x37d728: 0xae00fffc  sw          $zero, -0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D724u, 0x37D72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D72Cu;
label_37d72c:
    // 0x37d72c: 0x8e04fff4  lw          $a0, -0xC($s0)
    ctx->pc = 0x37d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
label_37d730:
    // 0x37d730: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d734:
    // 0x37d734: 0x40f809  jalr        $v0
label_37d738:
    if (ctx->pc == 0x37D738u) {
        ctx->pc = 0x37D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D734u;
        // 0x37d738: 0xae00fff8  sw          $zero, -0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D73Cu;
        goto label_37d73c;
    }
    ctx->pc = 0x37D734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D73Cu);
        ctx->pc = 0x37D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D734u;
        // 0x37d738: 0xae00fff8  sw          $zero, -0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D734u, 0x37D73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D73Cu;
label_37d73c:
    // 0x37d73c: 0x8e04fff0  lw          $a0, -0x10($s0)
    ctx->pc = 0x37d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_37d740:
    // 0x37d740: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d744:
    // 0x37d744: 0x40f809  jalr        $v0
label_37d748:
    if (ctx->pc == 0x37D748u) {
        ctx->pc = 0x37D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D744u;
        // 0x37d748: 0xae00fff4  sw          $zero, -0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D74Cu;
        goto label_37d74c;
    }
    ctx->pc = 0x37D744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D74Cu);
        ctx->pc = 0x37D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D744u;
        // 0x37d748: 0xae00fff4  sw          $zero, -0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D744u, 0x37D74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D74Cu;
label_37d74c:
    // 0x37d74c: 0x8e04ffec  lw          $a0, -0x14($s0)
    ctx->pc = 0x37d74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967276)));
label_37d750:
    // 0x37d750: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d754:
    // 0x37d754: 0x40f809  jalr        $v0
label_37d758:
    if (ctx->pc == 0x37D758u) {
        ctx->pc = 0x37D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D754u;
        // 0x37d758: 0xae00fff0  sw          $zero, -0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D75Cu;
        goto label_37d75c;
    }
    ctx->pc = 0x37D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D75Cu);
        ctx->pc = 0x37D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D754u;
        // 0x37d758: 0xae00fff0  sw          $zero, -0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D754u, 0x37D75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D75Cu;
label_37d75c:
    // 0x37d75c: 0xae00ffec  sw          $zero, -0x14($s0)
    ctx->pc = 0x37d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 0));
label_37d760:
    // 0x37d760: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d764:
    // 0x37d764: 0x40f809  jalr        $v0
label_37d768:
    if (ctx->pc == 0x37D768u) {
        ctx->pc = 0x37D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D764u;
        // 0x37d768: 0x8e04ffe8  lw          $a0, -0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D76Cu;
        goto label_37d76c;
    }
    ctx->pc = 0x37D764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D76Cu);
        ctx->pc = 0x37D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D764u;
        // 0x37d768: 0x8e04ffe8  lw          $a0, -0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D764u, 0x37D76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D76Cu;
label_37d76c:
    // 0x37d76c: 0xae00ffe8  sw          $zero, -0x18($s0)
    ctx->pc = 0x37d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967272), GPR_U32(ctx, 0));
label_37d770:
    // 0x37d770: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d774:
    // 0x37d774: 0x40f809  jalr        $v0
label_37d778:
    if (ctx->pc == 0x37D778u) {
        ctx->pc = 0x37D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D774u;
        // 0x37d778: 0x8f84a8bc  lw          $a0, -0x5744($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944956)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D77Cu;
        goto label_37d77c;
    }
    ctx->pc = 0x37D774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D77Cu);
        ctx->pc = 0x37D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D774u;
        // 0x37d778: 0x8f84a8bc  lw          $a0, -0x5744($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944956)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D774u, 0x37D77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D77Cu;
label_37d77c:
    // 0x37d77c: 0xaf80a8bc  sw          $zero, -0x5744($gp)
    ctx->pc = 0x37d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944956), GPR_U32(ctx, 0));
label_37d780:
    // 0x37d780: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x37d780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37d784:
    // 0x37d784: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37d784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37d788:
    // 0x37d788: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37d788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37d78c:
    // 0x37d78c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37d78cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37d790:
    // 0x37d790: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37d790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37d794:
    // 0x37d794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37d798:
    // 0x37d798: 0x3e00008  jr          $ra
label_37d79c:
    if (ctx->pc == 0x37D79Cu) {
        ctx->pc = 0x37D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D798u;
        // 0x37d79c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D7A0u;
        goto label_fallthrough_0x37d798;
    }
    ctx->pc = 0x37D798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D798u;
        // 0x37d79c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37d798:
    ctx->pc = 0x37D7A0u;
}
