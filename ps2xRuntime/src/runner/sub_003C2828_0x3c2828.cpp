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

// Function: sub_003C2828
// Address: 0x3c2828 - 0x3c2968
void sub_003C2828_0x3c2828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2828_0x3c2828");
#endif

    switch (ctx->pc) {
        case 0x3c2828u: goto label_3c2828;
        case 0x3c282cu: goto label_3c282c;
        case 0x3c2830u: goto label_3c2830;
        case 0x3c2834u: goto label_3c2834;
        case 0x3c2838u: goto label_3c2838;
        case 0x3c283cu: goto label_3c283c;
        case 0x3c2840u: goto label_3c2840;
        case 0x3c2844u: goto label_3c2844;
        case 0x3c2848u: goto label_3c2848;
        case 0x3c284cu: goto label_3c284c;
        case 0x3c2850u: goto label_3c2850;
        case 0x3c2854u: goto label_3c2854;
        case 0x3c2858u: goto label_3c2858;
        case 0x3c285cu: goto label_3c285c;
        case 0x3c2860u: goto label_3c2860;
        case 0x3c2864u: goto label_3c2864;
        case 0x3c2868u: goto label_3c2868;
        case 0x3c286cu: goto label_3c286c;
        case 0x3c2870u: goto label_3c2870;
        case 0x3c2874u: goto label_3c2874;
        case 0x3c2878u: goto label_3c2878;
        case 0x3c287cu: goto label_3c287c;
        case 0x3c2880u: goto label_3c2880;
        case 0x3c2884u: goto label_3c2884;
        case 0x3c2888u: goto label_3c2888;
        case 0x3c288cu: goto label_3c288c;
        case 0x3c2890u: goto label_3c2890;
        case 0x3c2894u: goto label_3c2894;
        case 0x3c2898u: goto label_3c2898;
        case 0x3c289cu: goto label_3c289c;
        case 0x3c28a0u: goto label_3c28a0;
        case 0x3c28a4u: goto label_3c28a4;
        case 0x3c28a8u: goto label_3c28a8;
        case 0x3c28acu: goto label_3c28ac;
        case 0x3c28b0u: goto label_3c28b0;
        case 0x3c28b4u: goto label_3c28b4;
        case 0x3c28b8u: goto label_3c28b8;
        case 0x3c28bcu: goto label_3c28bc;
        case 0x3c28c0u: goto label_3c28c0;
        case 0x3c28c4u: goto label_3c28c4;
        case 0x3c28c8u: goto label_3c28c8;
        case 0x3c28ccu: goto label_3c28cc;
        case 0x3c28d0u: goto label_3c28d0;
        case 0x3c28d4u: goto label_3c28d4;
        case 0x3c28d8u: goto label_3c28d8;
        case 0x3c28dcu: goto label_3c28dc;
        case 0x3c28e0u: goto label_3c28e0;
        case 0x3c28e4u: goto label_3c28e4;
        case 0x3c28e8u: goto label_3c28e8;
        case 0x3c28ecu: goto label_3c28ec;
        case 0x3c28f0u: goto label_3c28f0;
        case 0x3c28f4u: goto label_3c28f4;
        case 0x3c28f8u: goto label_3c28f8;
        case 0x3c28fcu: goto label_3c28fc;
        case 0x3c2900u: goto label_3c2900;
        case 0x3c2904u: goto label_3c2904;
        case 0x3c2908u: goto label_3c2908;
        case 0x3c290cu: goto label_3c290c;
        case 0x3c2910u: goto label_3c2910;
        case 0x3c2914u: goto label_3c2914;
        case 0x3c2918u: goto label_3c2918;
        case 0x3c291cu: goto label_3c291c;
        case 0x3c2920u: goto label_3c2920;
        case 0x3c2924u: goto label_3c2924;
        case 0x3c2928u: goto label_3c2928;
        case 0x3c292cu: goto label_3c292c;
        case 0x3c2930u: goto label_3c2930;
        case 0x3c2934u: goto label_3c2934;
        case 0x3c2938u: goto label_3c2938;
        case 0x3c293cu: goto label_3c293c;
        case 0x3c2940u: goto label_3c2940;
        case 0x3c2944u: goto label_3c2944;
        case 0x3c2948u: goto label_3c2948;
        case 0x3c294cu: goto label_3c294c;
        case 0x3c2950u: goto label_3c2950;
        case 0x3c2954u: goto label_3c2954;
        case 0x3c2958u: goto label_3c2958;
        case 0x3c295cu: goto label_3c295c;
        case 0x3c2960u: goto label_3c2960;
        case 0x3c2964u: goto label_3c2964;
        default: break;
    }

    ctx->pc = 0x3c2828u;

label_3c2828:
    // 0x3c2828: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3c2828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3c282c:
    // 0x3c282c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c2830:
    // 0x3c2830: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3c2830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_3c2834:
    // 0x3c2834: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3c2834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_3c2838:
    // 0x3c2838: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c2838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c283c:
    // 0x3c283c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3c283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_3c2840:
    // 0x3c2840: 0x2442dff0  addiu       $v0, $v0, -0x2010
    ctx->pc = 0x3c2840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959088));
label_3c2844:
    // 0x3c2844: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3c2844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_3c2848:
    // 0x3c2848: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3c2848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_3c284c:
    // 0x3c284c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3c284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_3c2850:
    // 0x3c2850: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3c2850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_3c2854:
    // 0x3c2854: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3c2854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3c2858:
    // 0x3c2858: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3c2858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3c285c:
    // 0x3c285c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3c285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3c2860:
    // 0x3c2860: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3c2860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3c2864:
    // 0x3c2864: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_3c2868:
    if (ctx->pc == 0x3C2868u) {
        ctx->pc = 0x3C2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2864u;
        // 0x3c2868: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C286Cu;
        goto label_3c286c;
    }
    ctx->pc = 0x3C2864u;
    {
        const bool branch_taken_0x3c2864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2864u;
        // 0x3c2868: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2864) {
            ctx->pc = 0x3C2918u;
            goto label_3c2918;
        }
    }
    ctx->pc = 0x3C286Cu;
label_3c286c:
    // 0x3c286c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3c286cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3c2870:
    // 0x3c2870: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x3c2870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3c2874:
    // 0x3c2874: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3c2874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3c2878:
    // 0x3c2878: 0x40f809  jalr        $v0
label_3c287c:
    if (ctx->pc == 0x3C287Cu) {
        ctx->pc = 0x3C2880u;
        goto label_3c2880;
    }
    ctx->pc = 0x3C2878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2878u, 0x3C2880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2880u;
label_3c2880:
    // 0x3c2880: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c2880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2884:
    // 0x3c2884: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
label_3c2888:
    if (ctx->pc == 0x3C2888u) {
        ctx->pc = 0x3C2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2884u;
        // 0x3c2888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C288Cu;
        goto label_3c288c;
    }
    ctx->pc = 0x3C2884u;
    {
        const bool branch_taken_0x3c2884 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2884u;
        // 0x3c2888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2884) {
            ctx->pc = 0x3C290Cu;
            goto label_3c290c;
        }
    }
    ctx->pc = 0x3C288Cu;
label_3c288c:
    // 0x3c288c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x3c288cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2890:
    // 0x3c2890: 0x2417003a  addiu       $s7, $zero, 0x3A
    ctx->pc = 0x3c2890u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_3c2894:
    // 0x3c2894: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x3c2894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_3c2898:
    // 0x3c2898: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3c2898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c289c:
    // 0x3c289c: 0x14570017  bne         $v0, $s7, . + 4 + (0x17 << 2)
label_3c28a0:
    if (ctx->pc == 0x3C28A0u) {
        ctx->pc = 0x3C28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C289Cu;
        // 0x3c28a0: 0x24d10001  addiu       $s1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28A4u;
        goto label_3c28a4;
    }
    ctx->pc = 0x3C289Cu;
    {
        const bool branch_taken_0x3c289c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x3C28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C289Cu;
        // 0x3c28a0: 0x24d10001  addiu       $s1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c289c) {
            ctx->pc = 0x3C28FCu;
            goto label_3c28fc;
        }
    }
    ctx->pc = 0x3C28A4u;
label_3c28a4:
    // 0x3c28a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c28a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c28a8:
    // 0x3c28a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c28a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c28ac:
    // 0x3c28ac: 0xc0bc77e  jal         func_2F1DF8
label_3c28b0:
    if (ctx->pc == 0x3C28B0u) {
        ctx->pc = 0x3C28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28ACu;
        // 0x3c28b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28B4u;
        goto label_3c28b4;
    }
    ctx->pc = 0x3C28ACu;
    SET_GPR_U32(ctx, 31, 0x3C28B4u);
    ctx->pc = 0x3C28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C28ACu;
    // 0x3c28b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x3C28ACu, 0x3C28B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C28B4u;
label_3c28b4:
    // 0x3c28b4: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x3c28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_3c28b8:
    // 0x3c28b8: 0x8ed0dff0  lw          $s0, -0x2010($s6)
    ctx->pc = 0x3c28b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294959088)));
label_3c28bc:
    // 0x3c28bc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x3c28bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c28c0:
    // 0x3c28c0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_3c28c4:
    if (ctx->pc == 0x3C28C4u) {
        ctx->pc = 0x3C28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28C0u;
        // 0x3c28c4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28C8u;
        goto label_3c28c8;
    }
    ctx->pc = 0x3C28C0u;
    {
        const bool branch_taken_0x3c28c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28C0u;
        // 0x3c28c4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c28c0) {
            ctx->pc = 0x3C28F0u;
            goto label_3c28f0;
        }
    }
    ctx->pc = 0x3C28C8u;
label_3c28c8:
    // 0x3c28c8: 0x27d3e880  addiu       $s3, $fp, -0x1780
    ctx->pc = 0x3c28c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_3c28cc:
    // 0x3c28cc: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x3c28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_3c28d0:
    // 0x3c28d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c28d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c28d4:
    // 0x3c28d4: 0x40f809  jalr        $v0
label_3c28d8:
    if (ctx->pc == 0x3C28D8u) {
        ctx->pc = 0x3C28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28D4u;
        // 0x3c28d8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28DCu;
        goto label_3c28dc;
    }
    ctx->pc = 0x3C28D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C28DCu);
        ctx->pc = 0x3C28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28D4u;
        // 0x3c28d8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C28D4u, 0x3C28DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C28DCu;
label_3c28dc:
    // 0x3c28dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c28e0:
    if (ctx->pc == 0x3C28E0u) {
        ctx->pc = 0x3C28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28DCu;
        // 0x3c28e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28E4u;
        goto label_3c28e4;
    }
    ctx->pc = 0x3C28DCu;
    {
        const bool branch_taken_0x3c28dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28DCu;
        // 0x3c28e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c28dc) {
            ctx->pc = 0x3C28F4u;
            goto label_3c28f4;
        }
    }
    ctx->pc = 0x3C28E4u;
label_3c28e4:
    // 0x3c28e4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3c28e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c28e8:
    // 0x3c28e8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_3c28ec:
    if (ctx->pc == 0x3C28ECu) {
        ctx->pc = 0x3C28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28E8u;
        // 0x3c28ec: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28F0u;
        goto label_3c28f0;
    }
    ctx->pc = 0x3C28E8u;
    {
        const bool branch_taken_0x3c28e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c28e8) {
            ctx->pc = 0x3C28ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C28E8u;
            // 0x3c28ec: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C28D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c28d0;
        }
    }
    ctx->pc = 0x3C28F0u;
label_3c28f0:
    // 0x3c28f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c28f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c28f4:
    // 0x3c28f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3c28f8:
    if (ctx->pc == 0x3C28F8u) {
        ctx->pc = 0x3C28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28F4u;
        // 0x3c28f8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C28FCu;
        goto label_3c28fc;
    }
    ctx->pc = 0x3C28F4u;
    {
        const bool branch_taken_0x3c28f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28F4u;
        // 0x3c28f8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c28f4) {
            ctx->pc = 0x3C2938u;
            goto label_3c2938;
        }
    }
    ctx->pc = 0x3C28FCu;
label_3c28fc:
    // 0x3c28fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c28fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2900:
    // 0x3c2900: 0xd5102b  sltu        $v0, $a2, $s5
    ctx->pc = 0x3c2900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3c2904:
    // 0x3c2904: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_3c2908:
    if (ctx->pc == 0x3C2908u) {
        ctx->pc = 0x3C2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2904u;
        // 0x3c2908: 0x2861821  addu        $v1, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C290Cu;
        goto label_3c290c;
    }
    ctx->pc = 0x3C2904u;
    {
        const bool branch_taken_0x3c2904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2904u;
        // 0x3c2908: 0x2861821  addu        $v1, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2904) {
            ctx->pc = 0x3C2898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2898;
        }
    }
    ctx->pc = 0x3C290Cu;
label_3c290c:
    // 0x3c290c: 0x8f82bd8c  lw          $v0, -0x4274($gp)
    ctx->pc = 0x3c290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950284)));
label_3c2910:
    // 0x3c2910: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3c2914:
    if (ctx->pc == 0x3C2914u) {
        ctx->pc = 0x3C2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2910u;
        // 0x3c2914: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2918u;
        goto label_3c2918;
    }
    ctx->pc = 0x3C2910u;
    {
        const bool branch_taken_0x3c2910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2910u;
        // 0x3c2914: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2910) {
            ctx->pc = 0x3C2938u;
            goto label_3c2938;
        }
    }
    ctx->pc = 0x3C2918u;
label_3c2918:
    // 0x3c2918: 0x26c2dff0  addiu       $v0, $s6, -0x2010
    ctx->pc = 0x3c2918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959088));
label_3c291c:
    // 0x3c291c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3c291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3c2920:
    // 0x3c2920: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3c2924:
    if (ctx->pc == 0x3C2924u) {
        ctx->pc = 0x3C2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2920u;
        // 0x3c2924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2928u;
        goto label_3c2928;
    }
    ctx->pc = 0x3C2920u;
    {
        const bool branch_taken_0x3c2920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2920) {
            ctx->pc = 0x3C2924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2920u;
            // 0x3c2924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2934u;
            goto label_3c2934;
        }
    }
    ctx->pc = 0x3C2928u;
label_3c2928:
    // 0x3c2928: 0x40f809  jalr        $v0
label_3c292c:
    if (ctx->pc == 0x3C292Cu) {
        ctx->pc = 0x3C292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2928u;
        // 0x3c292c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2930u;
        goto label_3c2930;
    }
    ctx->pc = 0x3C2928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2930u);
        ctx->pc = 0x3C292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2928u;
        // 0x3c292c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2928u, 0x3C2930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2930u;
label_3c2930:
    // 0x3c2930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2934:
    // 0x3c2934: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3c2934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3c2938:
    // 0x3c2938: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3c2938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3c293c:
    // 0x3c293c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3c293cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3c2940:
    // 0x3c2940: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3c2940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c2944:
    // 0x3c2944: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3c2944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c2948:
    // 0x3c2948: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3c2948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c294c:
    // 0x3c294c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3c294cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c2950:
    // 0x3c2950: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3c2950u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c2954:
    // 0x3c2954: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3c2954u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c2958:
    // 0x3c2958: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3c2958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3c295c:
    // 0x3c295c: 0x3e00008  jr          $ra
label_3c2960:
    if (ctx->pc == 0x3C2960u) {
        ctx->pc = 0x3C2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C295Cu;
        // 0x3c2960: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2964u;
        goto label_3c2964;
    }
    ctx->pc = 0x3C295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C295Cu;
        // 0x3c2960: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C295Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2964u;
label_3c2964:
    // 0x3c2964: 0x0  nop
    ctx->pc = 0x3c2964u;
    // NOP
    ctx->pc = 0x3c2968u;
}
