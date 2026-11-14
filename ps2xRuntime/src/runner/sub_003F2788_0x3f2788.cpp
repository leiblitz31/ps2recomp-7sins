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

// Function: sub_003F2788
// Address: 0x3f2788 - 0x3f2d70
void sub_003F2788_0x3f2788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2788_0x3f2788");
#endif

    switch (ctx->pc) {
        case 0x3f27d0u: goto label_3f27d0;
        case 0x3f27f8u: goto label_3f27f8;
        case 0x3f2810u: goto label_3f2810;
        case 0x3f2828u: goto label_3f2828;
        case 0x3f2838u: goto label_3f2838;
        case 0x3f2844u: goto label_3f2844;
        case 0x3f285cu: goto label_3f285c;
        case 0x3f286cu: goto label_3f286c;
        case 0x3f2874u: goto label_3f2874;
        case 0x3f28b8u: goto label_3f28b8;
        case 0x3f28ecu: goto label_3f28ec;
        case 0x3f2900u: goto label_3f2900;
        case 0x3f2918u: goto label_3f2918;
        case 0x3f2928u: goto label_3f2928;
        case 0x3f2950u: goto label_3f2950;
        case 0x3f297cu: goto label_3f297c;
        case 0x3f2990u: goto label_3f2990;
        case 0x3f29a8u: goto label_3f29a8;
        case 0x3f29b8u: goto label_3f29b8;
        case 0x3f29dcu: goto label_3f29dc;
        case 0x3f29ecu: goto label_3f29ec;
        case 0x3f29f4u: goto label_3f29f4;
        case 0x3f2a38u: goto label_3f2a38;
        case 0x3f2a4cu: goto label_3f2a4c;
        case 0x3f2a60u: goto label_3f2a60;
        case 0x3f2ab8u: goto label_3f2ab8;
        case 0x3f2ac8u: goto label_3f2ac8;
        case 0x3f2af8u: goto label_3f2af8;
        case 0x3f2b08u: goto label_3f2b08;
        case 0x3f2b38u: goto label_3f2b38;
        case 0x3f2b48u: goto label_3f2b48;
        case 0x3f2b70u: goto label_3f2b70;
        case 0x3f2b84u: goto label_3f2b84;
        case 0x3f2b94u: goto label_3f2b94;
        case 0x3f2bbcu: goto label_3f2bbc;
        case 0x3f2bccu: goto label_3f2bcc;
        case 0x3f2bf4u: goto label_3f2bf4;
        case 0x3f2c04u: goto label_3f2c04;
        case 0x3f2c2cu: goto label_3f2c2c;
        case 0x3f2c3cu: goto label_3f2c3c;
        case 0x3f2c6cu: goto label_3f2c6c;
        case 0x3f2cb4u: goto label_3f2cb4;
        case 0x3f2cc8u: goto label_3f2cc8;
        case 0x3f2cdcu: goto label_3f2cdc;
        case 0x3f2d20u: goto label_3f2d20;
        case 0x3f2d40u: goto label_3f2d40;
        default: break;
    }

    ctx->pc = 0x3f2788u;

    // 0x3f2788: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x3f2788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x3f278c: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x3f278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
    // 0x3f2790: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x3f2790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
    // 0x3f2794: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f2794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2798: 0x7fb60320  sq          $s6, 0x320($sp)
    ctx->pc = 0x3f2798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 22));
    // 0x3f279c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f279cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f27a0: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x3f27a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
    // 0x3f27a4: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x3f27a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
    // 0x3f27a8: 0x7fb40340  sq          $s4, 0x340($sp)
    ctx->pc = 0x3f27a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 20));
    // 0x3f27ac: 0x7fb50330  sq          $s5, 0x330($sp)
    ctx->pc = 0x3f27acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 21));
    // 0x3f27b0: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x3f27b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
    // 0x3f27b4: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f27b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f27b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f27b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f27bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F27BCu;
    {
        const bool branch_taken_0x3f27bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F27BCu;
        // 0x3f27c0: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f27bc) {
            ctx->pc = 0x3F27D8u;
            goto label_3f27d8;
        }
    }
    ctx->pc = 0x3F27C4u;
    // 0x3f27c4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f27c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f27c8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F27C8u;
    SET_GPR_U32(ctx, 31, 0x3F27D0u);
    ctx->pc = 0x3F27CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F27C8u;
    // 0x3f27cc: 0x24a5eb00  addiu       $a1, $a1, -0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F27C8u, 0x3F27D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F27D0u;
label_3f27d0:
    // 0x3f27d0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3F27D0u;
    {
        const bool branch_taken_0x3f27d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F27D0u;
        // 0x3f27d4: 0xde4200f8  ld          $v0, 0xF8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f27d0) {
            ctx->pc = 0x3F28BCu;
            goto label_3f28bc;
        }
    }
    ctx->pc = 0x3F27D8u;
label_3f27d8:
    // 0x3f27d8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f27d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f27dc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F27DCu;
    {
        const bool branch_taken_0x3f27dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F27DCu;
        // 0x3f27e0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f27dc) {
            ctx->pc = 0x3F28A0u;
            goto label_3f28a0;
        }
    }
    ctx->pc = 0x3F27E4u;
    // 0x3f27e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f27e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f27e8: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f27e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f27ec: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f27ecu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f27f0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F27F0u;
    SET_GPR_U32(ctx, 31, 0x3F27F8u);
    ctx->pc = 0x3F27F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F27F0u;
    // 0x3f27f4: 0x24a5eb20  addiu       $a1, $a1, -0x14E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F27F0u, 0x3F27F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F27F8u;
label_3f27f8:
    // 0x3f27f8: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f27f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f27fc: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f27fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f2800: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F2800u;
    {
        const bool branch_taken_0x3f2800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2800) {
            ctx->pc = 0x3F2844u;
            goto label_3f2844;
        }
    }
    ctx->pc = 0x3F2808u;
    // 0x3f2808: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f2808u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f280c: 0x0  nop
    ctx->pc = 0x3f280cu;
    // NOP
label_3f2810:
    // 0x3f2810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2814: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f2814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2818: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f2818u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f281c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f281cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2820: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2820u;
    SET_GPR_U32(ctx, 31, 0x3F2828u);
    ctx->pc = 0x3F2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2820u;
    // 0x3f2824: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2820u, 0x3F2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2828u;
label_3f2828:
    // 0x3f2828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f282c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f282cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2830: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2830u;
    SET_GPR_U32(ctx, 31, 0x3F2838u);
    ctx->pc = 0x3F2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2830u;
    // 0x3f2834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2830u, 0x3F2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2838u;
label_3f2838:
    // 0x3f2838: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f283c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F283Cu;
    {
        const bool branch_taken_0x3f283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f283c) {
            ctx->pc = 0x3F2840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F283Cu;
            // 0x3f2840: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2810;
        }
    }
    ctx->pc = 0x3F2844u;
label_3f2844:
    // 0x3f2844: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F2844u;
    {
        const bool branch_taken_0x3f2844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2844u;
        // 0x3f2848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2844) {
            ctx->pc = 0x3F286Cu;
            goto label_3f286c;
        }
    }
    ctx->pc = 0x3F284Cu;
    // 0x3f284c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f284cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f2850: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f2850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2854: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2854u;
    SET_GPR_U32(ctx, 31, 0x3F285Cu);
    ctx->pc = 0x3F2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2854u;
    // 0x3f2858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2854u, 0x3F285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F285Cu;
label_3f285c:
    // 0x3f285c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f285cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2860: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f2860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2864: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2864u;
    SET_GPR_U32(ctx, 31, 0x3F286Cu);
    ctx->pc = 0x3F2868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2864u;
    // 0x3f2868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2864u, 0x3F286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F286Cu;
label_3f286c:
    // 0x3f286c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F286Cu;
    SET_GPR_U32(ctx, 31, 0x3F2874u);
    ctx->pc = 0x3F2870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F286Cu;
    // 0x3f2870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F286Cu, 0x3F2874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2874u;
label_3f2874:
    // 0x3f2874: 0x10400134  beqz        $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x3F2874u;
    {
        const bool branch_taken_0x3f2874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2874u;
        // 0x3f2878: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2874) {
            ctx->pc = 0x3F2D48u;
            goto label_3f2d48;
        }
    }
    ctx->pc = 0x3F287Cu;
    // 0x3f287c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f287cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f2880: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f2880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f2884: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x3F2884u;
    {
        const bool branch_taken_0x3f2884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2884u;
        // 0x3f2888: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2884) {
            ctx->pc = 0x3F2A0Cu;
            goto label_3f2a0c;
        }
    }
    ctx->pc = 0x3F288Cu;
    // 0x3f288c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f2890: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x3F2890u;
    {
        const bool branch_taken_0x3f2890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2890u;
        // 0x3f2894: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2890) {
            ctx->pc = 0x3F2A2Cu;
            goto label_3f2a2c;
        }
    }
    ctx->pc = 0x3F2898u;
    // 0x3f2898: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3F2898u;
    {
        const bool branch_taken_0x3f2898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2898u;
        // 0x3f289c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2898) {
            ctx->pc = 0x3F2A44u;
            goto label_3f2a44;
        }
    }
    ctx->pc = 0x3F28A0u;
label_3f28a0:
    // 0x3f28a0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3f28a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3f28a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F28A4u;
    {
        const bool branch_taken_0x3f28a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28A4u;
        // 0x3f28a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f28a4) {
            ctx->pc = 0x3F28B8u;
            goto label_3f28b8;
        }
    }
    ctx->pc = 0x3F28ACu;
    // 0x3f28ac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f28acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f28b0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F28B0u;
    SET_GPR_U32(ctx, 31, 0x3F28B8u);
    ctx->pc = 0x3F28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F28B0u;
    // 0x3f28b4: 0x24a5eb38  addiu       $a1, $a1, -0x14C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F28B0u, 0x3F28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F28B8u;
label_3f28b8:
    // 0x3f28b8: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f28b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
label_3f28bc:
    // 0x3f28bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f28c0: 0x9251020a  lbu         $s1, 0x20A($s2)
    ctx->pc = 0x3f28c0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
    // 0x3f28c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f28c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f28c8: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x3f28c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x3f28cc: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F28CCu;
    {
        const bool branch_taken_0x3f28cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28CCu;
        // 0x3f28d0: 0xfe4200f8  sd          $v0, 0xF8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f28cc) {
            ctx->pc = 0x3F293Cu;
            goto label_3f293c;
        }
    }
    ctx->pc = 0x3F28D4u;
    // 0x3f28d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f28d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f28d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f28d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f28dc: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f28dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f28e0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f28e0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f28e4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F28E4u;
    SET_GPR_U32(ctx, 31, 0x3F28ECu);
    ctx->pc = 0x3F28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F28E4u;
    // 0x3f28e8: 0x24a5eb50  addiu       $a1, $a1, -0x14B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F28E4u, 0x3F28ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F28ECu;
label_3f28ec:
    // 0x3f28ec: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f28ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f28f0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f28f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f28f4: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3F28F4u;
    {
        const bool branch_taken_0x3f28f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f28f4) {
            ctx->pc = 0x3F2844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2844;
        }
    }
    ctx->pc = 0x3F28FCu;
    // 0x3f28fc: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f28fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f2900:
    // 0x3f2900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2904: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f2904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2908: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f2908u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f290c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f290cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2910: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2910u;
    SET_GPR_U32(ctx, 31, 0x3F2918u);
    ctx->pc = 0x3F2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2910u;
    // 0x3f2914: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2910u, 0x3F2918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2918u;
label_3f2918:
    // 0x3f2918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f291c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f291cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2920: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2920u;
    SET_GPR_U32(ctx, 31, 0x3F2928u);
    ctx->pc = 0x3F2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2920u;
    // 0x3f2924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2920u, 0x3F2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2928u;
label_3f2928:
    // 0x3f2928: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f292c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F292Cu;
    {
        const bool branch_taken_0x3f292c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f292c) {
            ctx->pc = 0x3F2930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F292Cu;
            // 0x3f2930: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2900;
        }
    }
    ctx->pc = 0x3F2934u;
    // 0x3f2934: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x3F2934u;
    {
        const bool branch_taken_0x3f2934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2934) {
            ctx->pc = 0x3F2844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2844;
        }
    }
    ctx->pc = 0x3F293Cu;
label_3f293c:
    // 0x3f293c: 0x2e020301  sltiu       $v0, $s0, 0x301
    ctx->pc = 0x3f293cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x3f2940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2940u;
    {
        const bool branch_taken_0x3f2940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2940u;
        // 0x3f2944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2940) {
            ctx->pc = 0x3F2958u;
            goto label_3f2958;
        }
    }
    ctx->pc = 0x3F2948u;
    // 0x3f2948: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3F2948u;
    SET_GPR_U32(ctx, 31, 0x3F2950u);
    ctx->pc = 0x3F294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2948u;
    // 0x3f294c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3F2948u, 0x3F2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2950u;
label_3f2950:
    // 0x3f2950: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3F2950u;
    {
        const bool branch_taken_0x3f2950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2950u;
        // 0x3f2954: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2950) {
            ctx->pc = 0x3F2A64u;
            goto label_3f2a64;
        }
    }
    ctx->pc = 0x3F2958u;
label_3f2958:
    // 0x3f2958: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3f2958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3f295c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2960: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F2960u;
    {
        const bool branch_taken_0x3f2960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2960u;
        // 0x3f2964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2960) {
            ctx->pc = 0x3F2A54u;
            goto label_3f2a54;
        }
    }
    ctx->pc = 0x3F2968u;
    // 0x3f2968: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f296c: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f296cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f2970: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f2970u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f2974: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F2974u;
    SET_GPR_U32(ctx, 31, 0x3F297Cu);
    ctx->pc = 0x3F2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2974u;
    // 0x3f2978: 0x24a5eb78  addiu       $a1, $a1, -0x1488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F2974u, 0x3F297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F297Cu;
label_3f297c:
    // 0x3f297c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f297cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2980: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f2984: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F2984u;
    {
        const bool branch_taken_0x3f2984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2984) {
            ctx->pc = 0x3F29C4u;
            goto label_3f29c4;
        }
    }
    ctx->pc = 0x3F298Cu;
    // 0x3f298c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f298cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f2990:
    // 0x3f2990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2994: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f2994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2998: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f2998u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f299c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f299cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f29a0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F29A0u;
    SET_GPR_U32(ctx, 31, 0x3F29A8u);
    ctx->pc = 0x3F29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29A0u;
    // 0x3f29a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F29A0u, 0x3F29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F29A8u;
label_3f29a8:
    // 0x3f29a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f29a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f29ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f29acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f29b0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F29B0u;
    SET_GPR_U32(ctx, 31, 0x3F29B8u);
    ctx->pc = 0x3F29B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29B0u;
    // 0x3f29b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F29B0u, 0x3F29B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F29B8u;
label_3f29b8:
    // 0x3f29b8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f29b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f29bc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F29BCu;
    {
        const bool branch_taken_0x3f29bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f29bc) {
            ctx->pc = 0x3F29C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F29BCu;
            // 0x3f29c0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2990;
        }
    }
    ctx->pc = 0x3F29C4u;
label_3f29c4:
    // 0x3f29c4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F29C4u;
    {
        const bool branch_taken_0x3f29c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29C4u;
        // 0x3f29c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f29c4) {
            ctx->pc = 0x3F29ECu;
            goto label_3f29ec;
        }
    }
    ctx->pc = 0x3F29CCu;
    // 0x3f29cc: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f29ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f29d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f29d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f29d4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F29D4u;
    SET_GPR_U32(ctx, 31, 0x3F29DCu);
    ctx->pc = 0x3F29D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29D4u;
    // 0x3f29d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F29D4u, 0x3F29DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F29DCu;
label_3f29dc:
    // 0x3f29dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f29dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f29e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f29e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f29e4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F29E4u;
    SET_GPR_U32(ctx, 31, 0x3F29ECu);
    ctx->pc = 0x3F29E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29E4u;
    // 0x3f29e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F29E4u, 0x3F29ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F29ECu;
label_3f29ec:
    // 0x3f29ec: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F29ECu;
    SET_GPR_U32(ctx, 31, 0x3F29F4u);
    ctx->pc = 0x3F29F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29ECu;
    // 0x3f29f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F29ECu, 0x3F29F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F29F4u;
label_3f29f4:
    // 0x3f29f4: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x3F29F4u;
    {
        const bool branch_taken_0x3f29f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29F4u;
        // 0x3f29f8: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f29f4) {
            ctx->pc = 0x3F2D48u;
            goto label_3f2d48;
        }
    }
    ctx->pc = 0x3F29FCu;
    // 0x3f29fc: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f29fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f2a00: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f2a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f2a04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2A04u;
    {
        const bool branch_taken_0x3f2a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A04u;
        // 0x3f2a08: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a04) {
            ctx->pc = 0x3F2A20u;
            goto label_3f2a20;
        }
    }
    ctx->pc = 0x3F2A0Cu;
label_3f2a0c:
    // 0x3f2a0c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f2a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f2a10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2A10u;
    {
        const bool branch_taken_0x3f2a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A10u;
        // 0x3f2a14: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a10) {
            ctx->pc = 0x3F2A2Cu;
            goto label_3f2a2c;
        }
    }
    ctx->pc = 0x3F2A18u;
    // 0x3f2a18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F2A18u;
    {
        const bool branch_taken_0x3f2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A18u;
        // 0x3f2a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a18) {
            ctx->pc = 0x3F2A44u;
            goto label_3f2a44;
        }
    }
    ctx->pc = 0x3F2A20u;
label_3f2a20:
    // 0x3f2a20: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f2a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f2a24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2A24u;
    {
        const bool branch_taken_0x3f2a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A24u;
        // 0x3f2a28: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a24) {
            ctx->pc = 0x3F2A40u;
            goto label_3f2a40;
        }
    }
    ctx->pc = 0x3F2A2Cu;
label_3f2a2c:
    // 0x3f2a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2a30: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F2A30u;
    SET_GPR_U32(ctx, 31, 0x3F2A38u);
    ctx->pc = 0x3F2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A30u;
    // 0x3f2a34: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F2A30u, 0x3F2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A38u;
label_3f2a38:
    // 0x3f2a38: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x3F2A38u;
    {
        const bool branch_taken_0x3f2a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A38u;
        // 0x3f2a3c: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a38) {
            ctx->pc = 0x3F2D48u;
            goto label_3f2d48;
        }
    }
    ctx->pc = 0x3F2A40u;
label_3f2a40:
    // 0x3f2a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f2a44:
    // 0x3f2a44: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F2A44u;
    SET_GPR_U32(ctx, 31, 0x3F2A4Cu);
    ctx->pc = 0x3F2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A44u;
    // 0x3f2a48: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F2A44u, 0x3F2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A4Cu;
label_3f2a4c:
    // 0x3f2a4c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x3F2A4Cu;
    {
        const bool branch_taken_0x3f2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A4Cu;
        // 0x3f2a50: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a4c) {
            ctx->pc = 0x3F2D48u;
            goto label_3f2d48;
        }
    }
    ctx->pc = 0x3F2A54u;
label_3f2a54:
    // 0x3f2a54: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f2a58: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F2A58u;
    SET_GPR_U32(ctx, 31, 0x3F2A60u);
    ctx->pc = 0x3F2A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A58u;
    // 0x3f2a5c: 0x24a5eb78  addiu       $a1, $a1, -0x1488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F2A58u, 0x3F2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A60u;
label_3f2a60:
    // 0x3f2a60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f2a64:
    // 0x3f2a64: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f2a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f2a68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f2a68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f2a6c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3f2a6cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3f2a70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F2A70u;
    {
        const bool branch_taken_0x3f2a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2a70) {
            ctx->pc = 0x3F2A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2A70u;
            // 0x3f2a74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2A78u;
            goto label_3f2a78;
        }
    }
    ctx->pc = 0x3F2A78u;
label_3f2a78:
    // 0x3f2a78: 0xa812  mflo        $s5
    ctx->pc = 0x3f2a78u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x3f2a7c: 0x1aa00079  blez        $s5, . + 4 + (0x79 << 2)
    ctx->pc = 0x3F2A7Cu;
    {
        const bool branch_taken_0x3f2a7c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3F2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A7Cu;
        // 0x3f2a80: 0x151023  negu        $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a7c) {
            ctx->pc = 0x3F2C64u;
            goto label_3f2c64;
        }
    }
    ctx->pc = 0x3F2A84u;
    // 0x3f2a84: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x3f2a84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2a88: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3f2a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f2a8c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3F2A8Cu;
    {
        const bool branch_taken_0x3f2a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A8Cu;
        // 0x3f2a90: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a8c) {
            ctx->pc = 0x3F2B68u;
            goto label_3f2b68;
        }
    }
    ctx->pc = 0x3F2A94u;
    // 0x3f2a94: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f2a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f2a98: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3F2A98u;
    {
        const bool branch_taken_0x3f2a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A98u;
        // 0x3f2a9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a98) {
            ctx->pc = 0x3F2B24u;
            goto label_3f2b24;
        }
    }
    ctx->pc = 0x3F2AA0u;
    // 0x3f2aa0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F2AA0u;
    {
        const bool branch_taken_0x3f2aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2AA0u;
        // 0x3f2aa4: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2aa0) {
            ctx->pc = 0x3F2AE4u;
            goto label_3f2ae4;
        }
    }
    ctx->pc = 0x3F2AA8u;
    // 0x3f2aa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2aac: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2ab0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2AB0u;
    SET_GPR_U32(ctx, 31, 0x3F2AB8u);
    ctx->pc = 0x3F2AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2AB0u;
    // 0x3f2ab4: 0x26b4ffff  addiu       $s4, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2AB0u, 0x3F2AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2AB8u;
label_3f2ab8:
    // 0x3f2ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2abc: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2ac0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2AC0u;
    SET_GPR_U32(ctx, 31, 0x3F2AC8u);
    ctx->pc = 0x3F2AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2AC0u;
    // 0x3f2ac4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2AC0u, 0x3F2AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2AC8u;
label_3f2ac8:
    // 0x3f2ac8: 0x93a20300  lbu         $v0, 0x300($sp)
    ctx->pc = 0x3f2ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x3f2acc: 0x37b00003  ori         $s0, $sp, 0x3
    ctx->pc = 0x3f2accu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)3);
    // 0x3f2ad0: 0x93a30301  lbu         $v1, 0x301($sp)
    ctx->pc = 0x3f2ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 769)));
    // 0x3f2ad4: 0x93a40302  lbu         $a0, 0x302($sp)
    ctx->pc = 0x3f2ad4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 770)));
    // 0x3f2ad8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x3f2ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2adc: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x3f2adcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f2ae0: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x3f2ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
label_3f2ae4:
    // 0x3f2ae4: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2aec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2af0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2AF0u;
    SET_GPR_U32(ctx, 31, 0x3F2AF8u);
    ctx->pc = 0x3F2AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2AF0u;
    // 0x3f2af4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2AF0u, 0x3F2AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2AF8u;
label_3f2af8:
    // 0x3f2af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2afc: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2b00: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2B00u;
    SET_GPR_U32(ctx, 31, 0x3F2B08u);
    ctx->pc = 0x3F2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B00u;
    // 0x3f2b04: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2B00u, 0x3F2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B08u;
label_3f2b08:
    // 0x3f2b08: 0x93a20300  lbu         $v0, 0x300($sp)
    ctx->pc = 0x3f2b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x3f2b0c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3f2b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2b10: 0x93a30301  lbu         $v1, 0x301($sp)
    ctx->pc = 0x3f2b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 769)));
    // 0x3f2b14: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3f2b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f2b18: 0x93a20302  lbu         $v0, 0x302($sp)
    ctx->pc = 0x3f2b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 770)));
    // 0x3f2b1c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3f2b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2b20: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x3f2b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_3f2b24:
    // 0x3f2b24: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b2c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2b30: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2B30u;
    SET_GPR_U32(ctx, 31, 0x3F2B38u);
    ctx->pc = 0x3F2B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B30u;
    // 0x3f2b34: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2B30u, 0x3F2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B38u;
label_3f2b38:
    // 0x3f2b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b3c: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2b40: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2B40u;
    SET_GPR_U32(ctx, 31, 0x3F2B48u);
    ctx->pc = 0x3F2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B40u;
    // 0x3f2b44: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2B40u, 0x3F2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B48u;
label_3f2b48:
    // 0x3f2b48: 0x93a20300  lbu         $v0, 0x300($sp)
    ctx->pc = 0x3f2b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x3f2b4c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3f2b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2b50: 0x93a30301  lbu         $v1, 0x301($sp)
    ctx->pc = 0x3f2b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 769)));
    // 0x3f2b54: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3f2b54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f2b58: 0x93a20302  lbu         $v0, 0x302($sp)
    ctx->pc = 0x3f2b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 770)));
    // 0x3f2b5c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3f2b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2b60: 0x12800040  beqz        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x3F2B60u;
    {
        const bool branch_taken_0x3f2b60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2B60u;
        // 0x3f2b64: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2b60) {
            ctx->pc = 0x3F2C64u;
            goto label_3f2c64;
        }
    }
    ctx->pc = 0x3F2B68u;
label_3f2b68:
    // 0x3f2b68: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3f2b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b6c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3f2b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2b70:
    // 0x3f2b70: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b78: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2b7c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2B7Cu;
    SET_GPR_U32(ctx, 31, 0x3F2B84u);
    ctx->pc = 0x3F2B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B7Cu;
    // 0x3f2b80: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2B7Cu, 0x3F2B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B84u;
label_3f2b84:
    // 0x3f2b84: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2b88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b8c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2B8Cu;
    SET_GPR_U32(ctx, 31, 0x3F2B94u);
    ctx->pc = 0x3F2B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B8Cu;
    // 0x3f2b90: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2B8Cu, 0x3F2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B94u;
label_3f2b94:
    // 0x3f2b94: 0x93a30300  lbu         $v1, 0x300($sp)
    ctx->pc = 0x3f2b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x3f2b98: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2ba0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2ba4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3f2ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f2ba8: 0x93a20301  lbu         $v0, 0x301($sp)
    ctx->pc = 0x3f2ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 769)));
    // 0x3f2bac: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x3f2bacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2bb0: 0x93a30302  lbu         $v1, 0x302($sp)
    ctx->pc = 0x3f2bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 770)));
    // 0x3f2bb4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2BB4u;
    SET_GPR_U32(ctx, 31, 0x3F2BBCu);
    ctx->pc = 0x3F2BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2BB4u;
    // 0x3f2bb8: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2BB4u, 0x3F2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2BBCu;
label_3f2bbc:
    // 0x3f2bbc: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2bc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2bc4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2BC4u;
    SET_GPR_U32(ctx, 31, 0x3F2BCCu);
    ctx->pc = 0x3F2BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2BC4u;
    // 0x3f2bc8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2BC4u, 0x3F2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2BCCu;
label_3f2bcc:
    // 0x3f2bcc: 0x93a30300  lbu         $v1, 0x300($sp)
    ctx->pc = 0x3f2bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x3f2bd0: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2bd8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2bdc: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x3f2bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f2be0: 0x93a20301  lbu         $v0, 0x301($sp)
    ctx->pc = 0x3f2be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 769)));
    // 0x3f2be4: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x3f2be4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2be8: 0x93a30302  lbu         $v1, 0x302($sp)
    ctx->pc = 0x3f2be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 770)));
    // 0x3f2bec: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2BECu;
    SET_GPR_U32(ctx, 31, 0x3F2BF4u);
    ctx->pc = 0x3F2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2BECu;
    // 0x3f2bf0: 0xa2030005  sb          $v1, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2BECu, 0x3F2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2BF4u;
label_3f2bf4:
    // 0x3f2bf4: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2bf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2bfc: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2BFCu;
    SET_GPR_U32(ctx, 31, 0x3F2C04u);
    ctx->pc = 0x3F2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2BFCu;
    // 0x3f2c00: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2BFCu, 0x3F2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2C04u;
label_3f2c04:
    // 0x3f2c04: 0x93a30300  lbu         $v1, 0x300($sp)
    ctx->pc = 0x3f2c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x3f2c08: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2c10: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2c14: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x3f2c14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f2c18: 0x93a20301  lbu         $v0, 0x301($sp)
    ctx->pc = 0x3f2c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 769)));
    // 0x3f2c1c: 0xa2620007  sb          $v0, 0x7($s3)
    ctx->pc = 0x3f2c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2c20: 0x93a30302  lbu         $v1, 0x302($sp)
    ctx->pc = 0x3f2c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 770)));
    // 0x3f2c24: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2C24u;
    SET_GPR_U32(ctx, 31, 0x3F2C2Cu);
    ctx->pc = 0x3F2C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2C24u;
    // 0x3f2c28: 0xa2030008  sb          $v1, 0x8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2C24u, 0x3F2C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2C2Cu;
label_3f2c2c:
    // 0x3f2c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2c30: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3f2c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3f2c34: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2C34u;
    SET_GPR_U32(ctx, 31, 0x3F2C3Cu);
    ctx->pc = 0x3F2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2C34u;
    // 0x3f2c38: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2C34u, 0x3F2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2C3Cu;
label_3f2c3c:
    // 0x3f2c3c: 0x93a20300  lbu         $v0, 0x300($sp)
    ctx->pc = 0x3f2c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x3f2c40: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x3f2c40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2c44: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3f2c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3f2c48: 0x93a20301  lbu         $v0, 0x301($sp)
    ctx->pc = 0x3f2c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 769)));
    // 0x3f2c4c: 0xa262000a  sb          $v0, 0xA($s3)
    ctx->pc = 0x3f2c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2c50: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x3f2c50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x3f2c54: 0x93a20302  lbu         $v0, 0x302($sp)
    ctx->pc = 0x3f2c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 770)));
    // 0x3f2c58: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x3f2c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2c5c: 0x1680ffc4  bnez        $s4, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3F2C5Cu;
    {
        const bool branch_taken_0x3f2c5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C5Cu;
        // 0x3f2c60: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c5c) {
            ctx->pc = 0x3F2B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2b70;
        }
    }
    ctx->pc = 0x3F2C64u;
label_3f2c64:
    // 0x3f2c64: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F2C64u;
    SET_GPR_U32(ctx, 31, 0x3F2C6Cu);
    ctx->pc = 0x3F2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2C64u;
    // 0x3f2c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F2C64u, 0x3F2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2C6Cu;
label_3f2c6c:
    // 0x3f2c6c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F2C6Cu;
    {
        const bool branch_taken_0x3f2c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2c6c) {
            ctx->pc = 0x3F2C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2C6Cu;
            // 0x3f2c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2CCCu;
            goto label_3f2ccc;
        }
    }
    ctx->pc = 0x3F2C74u;
    // 0x3f2c74: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f2c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f2c78: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f2c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f2c7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2C7Cu;
    {
        const bool branch_taken_0x3f2c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C7Cu;
        // 0x3f2c80: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c7c) {
            ctx->pc = 0x3F2C98u;
            goto label_3f2c98;
        }
    }
    ctx->pc = 0x3F2C84u;
    // 0x3f2c84: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f2c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f2c88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2C88u;
    {
        const bool branch_taken_0x3f2c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C88u;
        // 0x3f2c8c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c88) {
            ctx->pc = 0x3F2CA4u;
            goto label_3f2ca4;
        }
    }
    ctx->pc = 0x3F2C90u;
    // 0x3f2c90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F2C90u;
    {
        const bool branch_taken_0x3f2c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C90u;
        // 0x3f2c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c90) {
            ctx->pc = 0x3F2CC0u;
            goto label_3f2cc0;
        }
    }
    ctx->pc = 0x3F2C98u;
label_3f2c98:
    // 0x3f2c98: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f2c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f2c9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F2C9Cu;
    {
        const bool branch_taken_0x3f2c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C9Cu;
        // 0x3f2ca0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c9c) {
            ctx->pc = 0x3F2CBCu;
            goto label_3f2cbc;
        }
    }
    ctx->pc = 0x3F2CA4u;
label_3f2ca4:
    // 0x3f2ca4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f2ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2cac: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F2CACu;
    SET_GPR_U32(ctx, 31, 0x3F2CB4u);
    ctx->pc = 0x3F2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2CACu;
    // 0x3f2cb0: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F2CACu, 0x3F2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2CB4u;
label_3f2cb4:
    // 0x3f2cb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2CB4u;
    {
        const bool branch_taken_0x3f2cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CB4u;
        // 0x3f2cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2cb4) {
            ctx->pc = 0x3F2CCCu;
            goto label_3f2ccc;
        }
    }
    ctx->pc = 0x3F2CBCu;
label_3f2cbc:
    // 0x3f2cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f2cc0:
    // 0x3f2cc0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F2CC0u;
    SET_GPR_U32(ctx, 31, 0x3F2CC8u);
    ctx->pc = 0x3F2CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2CC0u;
    // 0x3f2cc4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F2CC0u, 0x3F2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2CC8u;
label_3f2cc8:
    // 0x3f2cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f2ccc:
    // 0x3f2ccc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3f2cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2cd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f2cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2cd4: 0xc0fedb0  jal         func_3FB6C0
    ctx->pc = 0x3F2CD4u;
    SET_GPR_U32(ctx, 31, 0x3F2CDCu);
    ctx->pc = 0x3F2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2CD4u;
    // 0x3f2cd8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB6C0u, 0x3F2CD4u, 0x3F2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2CDCu;
label_3f2cdc:
    // 0x3f2cdc: 0x9243020a  lbu         $v1, 0x20A($s2)
    ctx->pc = 0x3f2cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
    // 0x3f2ce0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2ce4: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F2CE4u;
    {
        const bool branch_taken_0x3f2ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CE4u;
        // 0x3f2ce8: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ce4) {
            ctx->pc = 0x3F2D48u;
            goto label_3f2d48;
        }
    }
    ctx->pc = 0x3F2CECu;
    // 0x3f2cec: 0x12c00017  beqz        $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F2CECu;
    {
        const bool branch_taken_0x3f2cec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CECu;
        // 0x3f2cf0: 0x7bb10370  lq          $s1, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2cec) {
            ctx->pc = 0x3F2D4Cu;
            goto label_3f2d4c;
        }
    }
    ctx->pc = 0x3F2CF4u;
    // 0x3f2cf4: 0xdec20010  ld          $v0, 0x10($s6)
    ctx->pc = 0x3f2cf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3f2cf8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3f2cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3f2cfc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F2CFCu;
    {
        const bool branch_taken_0x3f2cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CFCu;
        // 0x3f2d00: 0x32b0ffff  andi        $s0, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2cfc) {
            ctx->pc = 0x3F2D44u;
            goto label_3f2d44;
        }
    }
    ctx->pc = 0x3F2D04u;
    // 0x3f2d04: 0x964201fe  lhu         $v0, 0x1FE($s2)
    ctx->pc = 0x3f2d04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 510)));
    // 0x3f2d08: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3f2d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f2d0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2D0Cu;
    {
        const bool branch_taken_0x3f2d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D0Cu;
        // 0x3f2d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2d0c) {
            ctx->pc = 0x3F2D24u;
            goto label_3f2d24;
        }
    }
    ctx->pc = 0x3F2D14u;
    // 0x3f2d14: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f2d18: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F2D18u;
    SET_GPR_U32(ctx, 31, 0x3F2D20u);
    ctx->pc = 0x3F2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2D18u;
    // 0x3f2d1c: 0x24a5eb90  addiu       $a1, $a1, -0x1470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F2D18u, 0x3F2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2D20u;
label_3f2d20:
    // 0x3f2d20: 0xa65501fe  sh          $s5, 0x1FE($s2)
    ctx->pc = 0x3f2d20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 510), (uint16_t)GPR_U32(ctx, 21));
label_3f2d24:
    // 0x3f2d24: 0x96c20026  lhu         $v0, 0x26($s6)
    ctx->pc = 0x3f2d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 38)));
    // 0x3f2d28: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3f2d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f2d2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2D2Cu;
    {
        const bool branch_taken_0x3f2d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D2Cu;
        // 0x3f2d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2d2c) {
            ctx->pc = 0x3F2D44u;
            goto label_3f2d44;
        }
    }
    ctx->pc = 0x3F2D34u;
    // 0x3f2d34: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f2d38: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F2D38u;
    SET_GPR_U32(ctx, 31, 0x3F2D40u);
    ctx->pc = 0x3F2D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2D38u;
    // 0x3f2d3c: 0x24a5ebb8  addiu       $a1, $a1, -0x1448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F2D38u, 0x3F2D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2D40u;
label_3f2d40:
    // 0x3f2d40: 0xa6d50026  sh          $s5, 0x26($s6)
    ctx->pc = 0x3f2d40u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 38), (uint16_t)GPR_U32(ctx, 21));
label_3f2d44:
    // 0x3f2d44: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x3f2d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_3f2d48:
    // 0x3f2d48: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x3f2d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_3f2d4c:
    // 0x3f2d4c: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x3f2d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x3f2d50: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x3f2d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x3f2d54: 0x7bb40340  lq          $s4, 0x340($sp)
    ctx->pc = 0x3f2d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x3f2d58: 0x7bb50330  lq          $s5, 0x330($sp)
    ctx->pc = 0x3f2d58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x3f2d5c: 0x7bb60320  lq          $s6, 0x320($sp)
    ctx->pc = 0x3f2d5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x3f2d60: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x3f2d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x3f2d64: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D64u;
        // 0x3f2d68: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2D6Cu;
    // 0x3f2d6c: 0x0  nop
    ctx->pc = 0x3f2d6cu;
    // NOP
    ctx->pc = 0x3f2d70u;
}
