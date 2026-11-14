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

// Function: sub_003C26A0
// Address: 0x3c26a0 - 0x3c2828
void sub_003C26A0_0x3c26a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C26A0_0x3c26a0");
#endif

    switch (ctx->pc) {
        case 0x3c26a0u: goto label_3c26a0;
        case 0x3c26a4u: goto label_3c26a4;
        case 0x3c26a8u: goto label_3c26a8;
        case 0x3c26acu: goto label_3c26ac;
        case 0x3c26b0u: goto label_3c26b0;
        case 0x3c26b4u: goto label_3c26b4;
        case 0x3c26b8u: goto label_3c26b8;
        case 0x3c26bcu: goto label_3c26bc;
        case 0x3c26c0u: goto label_3c26c0;
        case 0x3c26c4u: goto label_3c26c4;
        case 0x3c26c8u: goto label_3c26c8;
        case 0x3c26ccu: goto label_3c26cc;
        case 0x3c26d0u: goto label_3c26d0;
        case 0x3c26d4u: goto label_3c26d4;
        case 0x3c26d8u: goto label_3c26d8;
        case 0x3c26dcu: goto label_3c26dc;
        case 0x3c26e0u: goto label_3c26e0;
        case 0x3c26e4u: goto label_3c26e4;
        case 0x3c26e8u: goto label_3c26e8;
        case 0x3c26ecu: goto label_3c26ec;
        case 0x3c26f0u: goto label_3c26f0;
        case 0x3c26f4u: goto label_3c26f4;
        case 0x3c26f8u: goto label_3c26f8;
        case 0x3c26fcu: goto label_3c26fc;
        case 0x3c2700u: goto label_3c2700;
        case 0x3c2704u: goto label_3c2704;
        case 0x3c2708u: goto label_3c2708;
        case 0x3c270cu: goto label_3c270c;
        case 0x3c2710u: goto label_3c2710;
        case 0x3c2714u: goto label_3c2714;
        case 0x3c2718u: goto label_3c2718;
        case 0x3c271cu: goto label_3c271c;
        case 0x3c2720u: goto label_3c2720;
        case 0x3c2724u: goto label_3c2724;
        case 0x3c2728u: goto label_3c2728;
        case 0x3c272cu: goto label_3c272c;
        case 0x3c2730u: goto label_3c2730;
        case 0x3c2734u: goto label_3c2734;
        case 0x3c2738u: goto label_3c2738;
        case 0x3c273cu: goto label_3c273c;
        case 0x3c2740u: goto label_3c2740;
        case 0x3c2744u: goto label_3c2744;
        case 0x3c2748u: goto label_3c2748;
        case 0x3c274cu: goto label_3c274c;
        case 0x3c2750u: goto label_3c2750;
        case 0x3c2754u: goto label_3c2754;
        case 0x3c2758u: goto label_3c2758;
        case 0x3c275cu: goto label_3c275c;
        case 0x3c2760u: goto label_3c2760;
        case 0x3c2764u: goto label_3c2764;
        case 0x3c2768u: goto label_3c2768;
        case 0x3c276cu: goto label_3c276c;
        case 0x3c2770u: goto label_3c2770;
        case 0x3c2774u: goto label_3c2774;
        case 0x3c2778u: goto label_3c2778;
        case 0x3c277cu: goto label_3c277c;
        case 0x3c2780u: goto label_3c2780;
        case 0x3c2784u: goto label_3c2784;
        case 0x3c2788u: goto label_3c2788;
        case 0x3c278cu: goto label_3c278c;
        case 0x3c2790u: goto label_3c2790;
        case 0x3c2794u: goto label_3c2794;
        case 0x3c2798u: goto label_3c2798;
        case 0x3c279cu: goto label_3c279c;
        case 0x3c27a0u: goto label_3c27a0;
        case 0x3c27a4u: goto label_3c27a4;
        case 0x3c27a8u: goto label_3c27a8;
        case 0x3c27acu: goto label_3c27ac;
        case 0x3c27b0u: goto label_3c27b0;
        case 0x3c27b4u: goto label_3c27b4;
        case 0x3c27b8u: goto label_3c27b8;
        case 0x3c27bcu: goto label_3c27bc;
        case 0x3c27c0u: goto label_3c27c0;
        case 0x3c27c4u: goto label_3c27c4;
        case 0x3c27c8u: goto label_3c27c8;
        case 0x3c27ccu: goto label_3c27cc;
        case 0x3c27d0u: goto label_3c27d0;
        case 0x3c27d4u: goto label_3c27d4;
        case 0x3c27d8u: goto label_3c27d8;
        case 0x3c27dcu: goto label_3c27dc;
        case 0x3c27e0u: goto label_3c27e0;
        case 0x3c27e4u: goto label_3c27e4;
        case 0x3c27e8u: goto label_3c27e8;
        case 0x3c27ecu: goto label_3c27ec;
        case 0x3c27f0u: goto label_3c27f0;
        case 0x3c27f4u: goto label_3c27f4;
        case 0x3c27f8u: goto label_3c27f8;
        case 0x3c27fcu: goto label_3c27fc;
        case 0x3c2800u: goto label_3c2800;
        case 0x3c2804u: goto label_3c2804;
        case 0x3c2808u: goto label_3c2808;
        case 0x3c280cu: goto label_3c280c;
        case 0x3c2810u: goto label_3c2810;
        case 0x3c2814u: goto label_3c2814;
        case 0x3c2818u: goto label_3c2818;
        case 0x3c281cu: goto label_3c281c;
        case 0x3c2820u: goto label_3c2820;
        case 0x3c2824u: goto label_3c2824;
        default: break;
    }

    ctx->pc = 0x3c26a0u;

label_3c26a0:
    // 0x3c26a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c26a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3c26a4:
    // 0x3c26a4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3c26a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3c26a8:
    // 0x3c26a8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3c26a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3c26ac:
    // 0x3c26ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3c26acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c26b0:
    // 0x3c26b0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3c26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3c26b4:
    // 0x3c26b4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3c26b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c26b8:
    // 0x3c26b8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3c26b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3c26bc:
    // 0x3c26bc: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x3c26bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c26c0:
    // 0x3c26c0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3c26c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3c26c4:
    // 0x3c26c4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3c26c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3c26c8:
    // 0x3c26c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3c26c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3c26cc:
    // 0x3c26cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c26ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3c26d0:
    // 0x3c26d0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3c26d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3c26d4:
    // 0x3c26d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c26d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c26d8:
    // 0x3c26d8: 0xc0f0a0a  jal         func_3C2828
label_3c26dc:
    if (ctx->pc == 0x3C26DCu) {
        ctx->pc = 0x3C26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26D8u;
        // 0x3c26dc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C26E0u;
        goto label_3c26e0;
    }
    ctx->pc = 0x3C26D8u;
    SET_GPR_U32(ctx, 31, 0x3C26E0u);
    ctx->pc = 0x3C26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C26D8u;
    // 0x3c26dc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2828u, 0x3C26D8u, 0x3C26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C26E0u;
label_3c26e0:
    // 0x3c26e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c26e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c26e4:
    // 0x3c26e4: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_3c26e8:
    if (ctx->pc == 0x3C26E8u) {
        ctx->pc = 0x3C26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26E4u;
        // 0x3c26e8: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C26ECu;
        goto label_3c26ec;
    }
    ctx->pc = 0x3C26E4u;
    {
        const bool branch_taken_0x3c26e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26E4u;
        // 0x3c26e8: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c26e4) {
            ctx->pc = 0x3C27F4u;
            goto label_3c27f4;
        }
    }
    ctx->pc = 0x3C26ECu;
label_3c26ec:
    // 0x3c26ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c26ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c26f0:
    // 0x3c26f0: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x3c26f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c26f4:
    // 0x3c26f4: 0xc0bf6e8  jal         func_2FDBA0
label_3c26f8:
    if (ctx->pc == 0x3C26F8u) {
        ctx->pc = 0x3C26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26F4u;
        // 0x3c26f8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C26FCu;
        goto label_3c26fc;
    }
    ctx->pc = 0x3C26F4u;
    SET_GPR_U32(ctx, 31, 0x3C26FCu);
    ctx->pc = 0x3C26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C26F4u;
    // 0x3c26f8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C26F4u, 0x3C26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C26FCu;
label_3c26fc:
    // 0x3c26fc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3c26fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2700:
    // 0x3c2700: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x3c2700u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c2704:
    // 0x3c2704: 0x0  nop
    ctx->pc = 0x3c2704u;
    // NOP
label_3c2708:
    // 0x3c2708: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c2708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c270c:
    // 0x3c270c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3c270cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c2710:
    // 0x3c2710: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3c2714:
    if (ctx->pc == 0x3C2714u) {
        ctx->pc = 0x3C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2710u;
        // 0x3c2714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2718u;
        goto label_3c2718;
    }
    ctx->pc = 0x3C2710u;
    {
        const bool branch_taken_0x3c2710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2710u;
        // 0x3c2714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2710) {
            ctx->pc = 0x3C273Cu;
            goto label_3c273c;
        }
    }
    ctx->pc = 0x3C2718u;
label_3c2718:
    // 0x3c2718: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3c2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3c271c:
    // 0x3c271c: 0x40f809  jalr        $v0
label_3c2720:
    if (ctx->pc == 0x3C2720u) {
        ctx->pc = 0x3C2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C271Cu;
        // 0x3c2720: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2724u;
        goto label_3c2724;
    }
    ctx->pc = 0x3C271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2724u);
        ctx->pc = 0x3C2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C271Cu;
        // 0x3c2720: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C271Cu, 0x3C2724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2724u;
label_3c2724:
    // 0x3c2724: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c2724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2728:
    // 0x3c2728: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x3c2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_3c272c:
    // 0x3c272c: 0x5454fff6  bnel        $v0, $s4, . + 4 + (-0xA << 2)
label_3c2730:
    if (ctx->pc == 0x3C2730u) {
        ctx->pc = 0x3C2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C272Cu;
        // 0x3c2730: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2734u;
        goto label_3c2734;
    }
    ctx->pc = 0x3C272Cu;
    {
        const bool branch_taken_0x3c272c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3c272c) {
            ctx->pc = 0x3C2730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C272Cu;
            // 0x3c2730: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2708;
        }
    }
    ctx->pc = 0x3C2734u;
label_3c2734:
    // 0x3c2734: 0xac750038  sw          $s5, 0x38($v1)
    ctx->pc = 0x3c2734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 21));
label_3c2738:
    // 0x3c2738: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x3c2738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c273c:
    // 0x3c273c: 0xc0bf6e0  jal         func_2FDB80
label_3c2740:
    if (ctx->pc == 0x3C2740u) {
        ctx->pc = 0x3C2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C273Cu;
        // 0x3c2740: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2744u;
        goto label_3c2744;
    }
    ctx->pc = 0x3C273Cu;
    SET_GPR_U32(ctx, 31, 0x3C2744u);
    ctx->pc = 0x3C2740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C273Cu;
    // 0x3c2740: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C273Cu, 0x3C2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2744u;
label_3c2744:
    // 0x3c2744: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
label_3c2748:
    if (ctx->pc == 0x3C2748u) {
        ctx->pc = 0x3C2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2744u;
        // 0x3c2748: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C274Cu;
        goto label_3c274c;
    }
    ctx->pc = 0x3C2744u;
    {
        const bool branch_taken_0x3c2744 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2744u;
        // 0x3c2748: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2744) {
            ctx->pc = 0x3C2778u;
            goto label_3c2778;
        }
    }
    ctx->pc = 0x3C274Cu;
label_3c274c:
    // 0x3c274c: 0xc0f0d70  jal         func_3C35C0
label_3c2750:
    if (ctx->pc == 0x3C2750u) {
        ctx->pc = 0x3C2754u;
        goto label_3c2754;
    }
    ctx->pc = 0x3C274Cu;
    SET_GPR_U32(ctx, 31, 0x3C2754u);
    ctx->pc = 0x3C35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C35C0u, 0x3C274Cu, 0x3C2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2754u;
label_3c2754:
    // 0x3c2754: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c2754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c2758:
    // 0x3c2758: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3c2758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c275c:
    // 0x3c275c: 0x8c63e004  lw          $v1, -0x1FFC($v1)
    ctx->pc = 0x3c275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959108)));
label_3c2760:
    // 0x3c2760: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_3c2764:
    if (ctx->pc == 0x3C2764u) {
        ctx->pc = 0x3C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2760u;
        // 0x3c2764: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2768u;
        goto label_3c2768;
    }
    ctx->pc = 0x3C2760u;
    {
        const bool branch_taken_0x3c2760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2760u;
        // 0x3c2764: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2760) {
            ctx->pc = 0x3C27F4u;
            goto label_3c27f4;
        }
    }
    ctx->pc = 0x3C2768u;
label_3c2768:
    // 0x3c2768: 0x60f809  jalr        $v1
label_3c276c:
    if (ctx->pc == 0x3C276Cu) {
        ctx->pc = 0x3C2770u;
        goto label_3c2770;
    }
    ctx->pc = 0x3C2768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C2770u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2768u, 0x3C2770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2770u;
label_3c2770:
    // 0x3c2770: 0x10000021  b           . + 4 + (0x21 << 2)
label_3c2774:
    if (ctx->pc == 0x3C2774u) {
        ctx->pc = 0x3C2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2770u;
        // 0x3c2774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2778u;
        goto label_3c2778;
    }
    ctx->pc = 0x3C2770u;
    {
        const bool branch_taken_0x3c2770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2770u;
        // 0x3c2774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2770) {
            ctx->pc = 0x3C27F8u;
            goto label_3c27f8;
        }
    }
    ctx->pc = 0x3C2778u;
label_3c2778:
    // 0x3c2778: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3c277c:
    if (ctx->pc == 0x3C277Cu) {
        ctx->pc = 0x3C277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2778u;
        // 0x3c277c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2780u;
        goto label_3c2780;
    }
    ctx->pc = 0x3C2778u;
    {
        const bool branch_taken_0x3c2778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2778u;
        // 0x3c277c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2778) {
            ctx->pc = 0x3C278Cu;
            goto label_3c278c;
        }
    }
    ctx->pc = 0x3C2780u;
label_3c2780:
    // 0x3c2780: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x3c2780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3c2784:
    // 0x3c2784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c2788:
    if (ctx->pc == 0x3C2788u) {
        ctx->pc = 0x3C2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2784u;
        // 0x3c2788: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C278Cu;
        goto label_3c278c;
    }
    ctx->pc = 0x3C2784u;
    {
        const bool branch_taken_0x3c2784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2784u;
        // 0x3c2788: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2784) {
            ctx->pc = 0x3C2798u;
            goto label_3c2798;
        }
    }
    ctx->pc = 0x3C278Cu;
label_3c278c:
    // 0x3c278c: 0xae570048  sw          $s7, 0x48($s2)
    ctx->pc = 0x3c278cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 23));
label_3c2790:
    // 0x3c2790: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x3c2790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_3c2794:
    // 0x3c2794: 0xae5e004c  sw          $fp, 0x4C($s2)
    ctx->pc = 0x3c2794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 30));
label_3c2798:
    // 0x3c2798: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3c2798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c279c:
    // 0x3c279c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c27a0:
    if (ctx->pc == 0x3C27A0u) {
        ctx->pc = 0x3C27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C279Cu;
        // 0x3c27a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C27A4u;
        goto label_3c27a4;
    }
    ctx->pc = 0x3C279Cu;
    {
        const bool branch_taken_0x3c279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C279Cu;
        // 0x3c27a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c279c) {
            ctx->pc = 0x3C27B4u;
            goto label_3c27b4;
        }
    }
    ctx->pc = 0x3C27A4u;
label_3c27a4:
    // 0x3c27a4: 0xae570048  sw          $s7, 0x48($s2)
    ctx->pc = 0x3c27a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 23));
label_3c27a8:
    // 0x3c27a8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x3c27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_3c27ac:
    // 0x3c27ac: 0x36760010  ori         $s6, $s3, 0x10
    ctx->pc = 0x3c27acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16);
label_3c27b0:
    // 0x3c27b0: 0xae5e004c  sw          $fp, 0x4C($s2)
    ctx->pc = 0x3c27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 30));
label_3c27b4:
    // 0x3c27b4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3c27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3c27b8:
    // 0x3c27b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c27b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c27bc:
    // 0x3c27bc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3c27bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c27c0:
    // 0x3c27c0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3c27c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c27c4:
    // 0x3c27c4: 0x40f809  jalr        $v0
label_3c27c8:
    if (ctx->pc == 0x3C27C8u) {
        ctx->pc = 0x3C27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27C4u;
        // 0x3c27c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C27CCu;
        goto label_3c27cc;
    }
    ctx->pc = 0x3C27C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C27CCu);
        ctx->pc = 0x3C27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27C4u;
        // 0x3c27c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C27C4u, 0x3C27CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C27CCu;
label_3c27cc:
    // 0x3c27cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c27d0:
    // 0x3c27d0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_3c27d4:
    if (ctx->pc == 0x3C27D4u) {
        ctx->pc = 0x3C27D8u;
        goto label_3c27d8;
    }
    ctx->pc = 0x3C27D0u;
    {
        const bool branch_taken_0x3c27d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c27d0) {
            ctx->pc = 0x3C27E0u;
            goto label_3c27e0;
        }
    }
    ctx->pc = 0x3C27D8u;
label_3c27d8:
    // 0x3c27d8: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x3c27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_3c27dc:
    // 0x3c27dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c27dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c27e0:
    // 0x3c27e0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_3c27e4:
    if (ctx->pc == 0x3C27E4u) {
        ctx->pc = 0x3C27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27E0u;
        // 0x3c27e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C27E8u;
        goto label_3c27e8;
    }
    ctx->pc = 0x3C27E0u;
    {
        const bool branch_taken_0x3c27e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27E0u;
        // 0x3c27e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c27e0) {
            ctx->pc = 0x3C27ECu;
            goto label_3c27ec;
        }
    }
    ctx->pc = 0x3C27E8u;
label_3c27e8:
    // 0x3c27e8: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x3c27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_3c27ec:
    // 0x3c27ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c27f0:
    if (ctx->pc == 0x3C27F0u) {
        ctx->pc = 0x3C27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27ECu;
        // 0x3c27f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C27F4u;
        goto label_3c27f4;
    }
    ctx->pc = 0x3C27ECu;
    {
        const bool branch_taken_0x3c27ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27ECu;
        // 0x3c27f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c27ec) {
            ctx->pc = 0x3C27F8u;
            goto label_3c27f8;
        }
    }
    ctx->pc = 0x3C27F4u;
label_3c27f4:
    // 0x3c27f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c27f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c27f8:
    // 0x3c27f8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3c27f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c27fc:
    // 0x3c27fc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3c27fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c2800:
    // 0x3c2800: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3c2800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c2804:
    // 0x3c2804: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3c2804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c2808:
    // 0x3c2808: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3c2808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c280c:
    // 0x3c280c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c280cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2810:
    // 0x3c2810: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3c2810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2814:
    // 0x3c2814: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3c2814u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2818:
    // 0x3c2818: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3c2818u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c281c:
    // 0x3c281c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c281cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2820:
    // 0x3c2820: 0x3e00008  jr          $ra
label_3c2824:
    if (ctx->pc == 0x3C2824u) {
        ctx->pc = 0x3C2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2820u;
        // 0x3c2824: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2828u;
        goto label_fallthrough_0x3c2820;
    }
    ctx->pc = 0x3C2820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2820u;
        // 0x3c2824: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c2820:
    ctx->pc = 0x3C2828u;
}
