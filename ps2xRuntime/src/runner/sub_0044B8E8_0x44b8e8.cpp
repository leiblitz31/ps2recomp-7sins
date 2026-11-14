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

// Function: sub_0044B8E8
// Address: 0x44b8e8 - 0x44bb40
void sub_0044B8E8_0x44b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B8E8_0x44b8e8");
#endif

    switch (ctx->pc) {
        case 0x44b8e8u: goto label_44b8e8;
        case 0x44b8ecu: goto label_44b8ec;
        case 0x44b8f0u: goto label_44b8f0;
        case 0x44b8f4u: goto label_44b8f4;
        case 0x44b8f8u: goto label_44b8f8;
        case 0x44b8fcu: goto label_44b8fc;
        case 0x44b900u: goto label_44b900;
        case 0x44b904u: goto label_44b904;
        case 0x44b908u: goto label_44b908;
        case 0x44b90cu: goto label_44b90c;
        case 0x44b910u: goto label_44b910;
        case 0x44b914u: goto label_44b914;
        case 0x44b918u: goto label_44b918;
        case 0x44b91cu: goto label_44b91c;
        case 0x44b920u: goto label_44b920;
        case 0x44b924u: goto label_44b924;
        case 0x44b928u: goto label_44b928;
        case 0x44b92cu: goto label_44b92c;
        case 0x44b930u: goto label_44b930;
        case 0x44b934u: goto label_44b934;
        case 0x44b938u: goto label_44b938;
        case 0x44b93cu: goto label_44b93c;
        case 0x44b940u: goto label_44b940;
        case 0x44b944u: goto label_44b944;
        case 0x44b948u: goto label_44b948;
        case 0x44b94cu: goto label_44b94c;
        case 0x44b950u: goto label_44b950;
        case 0x44b954u: goto label_44b954;
        case 0x44b958u: goto label_44b958;
        case 0x44b95cu: goto label_44b95c;
        case 0x44b960u: goto label_44b960;
        case 0x44b964u: goto label_44b964;
        case 0x44b968u: goto label_44b968;
        case 0x44b96cu: goto label_44b96c;
        case 0x44b970u: goto label_44b970;
        case 0x44b974u: goto label_44b974;
        case 0x44b978u: goto label_44b978;
        case 0x44b97cu: goto label_44b97c;
        case 0x44b980u: goto label_44b980;
        case 0x44b984u: goto label_44b984;
        case 0x44b988u: goto label_44b988;
        case 0x44b98cu: goto label_44b98c;
        case 0x44b990u: goto label_44b990;
        case 0x44b994u: goto label_44b994;
        case 0x44b998u: goto label_44b998;
        case 0x44b99cu: goto label_44b99c;
        case 0x44b9a0u: goto label_44b9a0;
        case 0x44b9a4u: goto label_44b9a4;
        case 0x44b9a8u: goto label_44b9a8;
        case 0x44b9acu: goto label_44b9ac;
        case 0x44b9b0u: goto label_44b9b0;
        case 0x44b9b4u: goto label_44b9b4;
        case 0x44b9b8u: goto label_44b9b8;
        case 0x44b9bcu: goto label_44b9bc;
        case 0x44b9c0u: goto label_44b9c0;
        case 0x44b9c4u: goto label_44b9c4;
        case 0x44b9c8u: goto label_44b9c8;
        case 0x44b9ccu: goto label_44b9cc;
        case 0x44b9d0u: goto label_44b9d0;
        case 0x44b9d4u: goto label_44b9d4;
        case 0x44b9d8u: goto label_44b9d8;
        case 0x44b9dcu: goto label_44b9dc;
        case 0x44b9e0u: goto label_44b9e0;
        case 0x44b9e4u: goto label_44b9e4;
        case 0x44b9e8u: goto label_44b9e8;
        case 0x44b9ecu: goto label_44b9ec;
        case 0x44b9f0u: goto label_44b9f0;
        case 0x44b9f4u: goto label_44b9f4;
        case 0x44b9f8u: goto label_44b9f8;
        case 0x44b9fcu: goto label_44b9fc;
        case 0x44ba00u: goto label_44ba00;
        case 0x44ba04u: goto label_44ba04;
        case 0x44ba08u: goto label_44ba08;
        case 0x44ba0cu: goto label_44ba0c;
        case 0x44ba10u: goto label_44ba10;
        case 0x44ba14u: goto label_44ba14;
        case 0x44ba18u: goto label_44ba18;
        case 0x44ba1cu: goto label_44ba1c;
        case 0x44ba20u: goto label_44ba20;
        case 0x44ba24u: goto label_44ba24;
        case 0x44ba28u: goto label_44ba28;
        case 0x44ba2cu: goto label_44ba2c;
        case 0x44ba30u: goto label_44ba30;
        case 0x44ba34u: goto label_44ba34;
        case 0x44ba38u: goto label_44ba38;
        case 0x44ba3cu: goto label_44ba3c;
        case 0x44ba40u: goto label_44ba40;
        case 0x44ba44u: goto label_44ba44;
        case 0x44ba48u: goto label_44ba48;
        case 0x44ba4cu: goto label_44ba4c;
        case 0x44ba50u: goto label_44ba50;
        case 0x44ba54u: goto label_44ba54;
        case 0x44ba58u: goto label_44ba58;
        case 0x44ba5cu: goto label_44ba5c;
        case 0x44ba60u: goto label_44ba60;
        case 0x44ba64u: goto label_44ba64;
        case 0x44ba68u: goto label_44ba68;
        case 0x44ba6cu: goto label_44ba6c;
        case 0x44ba70u: goto label_44ba70;
        case 0x44ba74u: goto label_44ba74;
        case 0x44ba78u: goto label_44ba78;
        case 0x44ba7cu: goto label_44ba7c;
        case 0x44ba80u: goto label_44ba80;
        case 0x44ba84u: goto label_44ba84;
        case 0x44ba88u: goto label_44ba88;
        case 0x44ba8cu: goto label_44ba8c;
        case 0x44ba90u: goto label_44ba90;
        case 0x44ba94u: goto label_44ba94;
        case 0x44ba98u: goto label_44ba98;
        case 0x44ba9cu: goto label_44ba9c;
        case 0x44baa0u: goto label_44baa0;
        case 0x44baa4u: goto label_44baa4;
        case 0x44baa8u: goto label_44baa8;
        case 0x44baacu: goto label_44baac;
        case 0x44bab0u: goto label_44bab0;
        case 0x44bab4u: goto label_44bab4;
        case 0x44bab8u: goto label_44bab8;
        case 0x44babcu: goto label_44babc;
        case 0x44bac0u: goto label_44bac0;
        case 0x44bac4u: goto label_44bac4;
        case 0x44bac8u: goto label_44bac8;
        case 0x44baccu: goto label_44bacc;
        case 0x44bad0u: goto label_44bad0;
        case 0x44bad4u: goto label_44bad4;
        case 0x44bad8u: goto label_44bad8;
        case 0x44badcu: goto label_44badc;
        case 0x44bae0u: goto label_44bae0;
        case 0x44bae4u: goto label_44bae4;
        case 0x44bae8u: goto label_44bae8;
        case 0x44baecu: goto label_44baec;
        case 0x44baf0u: goto label_44baf0;
        case 0x44baf4u: goto label_44baf4;
        case 0x44baf8u: goto label_44baf8;
        case 0x44bafcu: goto label_44bafc;
        case 0x44bb00u: goto label_44bb00;
        case 0x44bb04u: goto label_44bb04;
        case 0x44bb08u: goto label_44bb08;
        case 0x44bb0cu: goto label_44bb0c;
        case 0x44bb10u: goto label_44bb10;
        case 0x44bb14u: goto label_44bb14;
        case 0x44bb18u: goto label_44bb18;
        case 0x44bb1cu: goto label_44bb1c;
        case 0x44bb20u: goto label_44bb20;
        case 0x44bb24u: goto label_44bb24;
        case 0x44bb28u: goto label_44bb28;
        case 0x44bb2cu: goto label_44bb2c;
        case 0x44bb30u: goto label_44bb30;
        case 0x44bb34u: goto label_44bb34;
        case 0x44bb38u: goto label_44bb38;
        case 0x44bb3cu: goto label_44bb3c;
        default: break;
    }

    ctx->pc = 0x44b8e8u;

label_44b8e8:
    // 0x44b8e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44b8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_44b8ec:
    // 0x44b8ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x44b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_44b8f0:
    // 0x44b8f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44b8f4:
    // 0x44b8f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x44b8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44b8f8:
    // 0x44b8f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x44b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_44b8fc:
    // 0x44b8fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x44b8fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44b900:
    // 0x44b900: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x44b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_44b904:
    // 0x44b904: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x44b904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44b908:
    // 0x44b908: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x44b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_44b90c:
    // 0x44b90c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44b910:
    // 0x44b910: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x44b910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44b914:
    // 0x44b914: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x44b914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_44b918:
    // 0x44b918: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x44b918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_44b91c:
    // 0x44b91c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_44b920:
    if (ctx->pc == 0x44B920u) {
        ctx->pc = 0x44B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B91Cu;
        // 0x44b920: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B924u;
        goto label_44b924;
    }
    ctx->pc = 0x44B91Cu;
    {
        const bool branch_taken_0x44b91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B91Cu;
        // 0x44b920: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b91c) {
            ctx->pc = 0x44BA48u;
            goto label_44ba48;
        }
    }
    ctx->pc = 0x44B924u;
label_44b924:
    // 0x44b924: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x44b924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_44b928:
    // 0x44b928: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x44b928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_44b92c:
    // 0x44b92c: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x44b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_44b930:
    // 0x44b930: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x44b930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_44b934:
    // 0x44b934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44b938:
    // 0x44b938: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x44b938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_44b93c:
    // 0x44b93c: 0xae470010  sw          $a3, 0x10($s2)
    ctx->pc = 0x44b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 7));
label_44b940:
    // 0x44b940: 0x40f809  jalr        $v0
label_44b944:
    if (ctx->pc == 0x44B944u) {
        ctx->pc = 0x44B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B940u;
        // 0x44b944: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B948u;
        goto label_44b948;
    }
    ctx->pc = 0x44B940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44B948u);
        ctx->pc = 0x44B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B940u;
        // 0x44b944: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B940u, 0x44B948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44B948u;
label_44b948:
    // 0x44b948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44b948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b94c:
    // 0x44b94c: 0x56200010  bnel        $s1, $zero, . + 4 + (0x10 << 2)
label_44b950:
    if (ctx->pc == 0x44B950u) {
        ctx->pc = 0x44B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B94Cu;
        // 0x44b950: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B954u;
        goto label_44b954;
    }
    ctx->pc = 0x44B94Cu;
    {
        const bool branch_taken_0x44b94c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b94c) {
            ctx->pc = 0x44B950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B94Cu;
            // 0x44b950: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B990u;
            goto label_44b990;
        }
    }
    ctx->pc = 0x44B954u;
label_44b954:
    // 0x44b954: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x44b954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44b958:
    // 0x44b958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44b95c:
    // 0x44b95c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44b960:
    // 0x44b960: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44b960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_44b964:
    // 0x44b964: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x44b964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_44b968:
    // 0x44b968: 0xc1035f6  jal         func_40D7D8
label_44b96c:
    if (ctx->pc == 0x44B96Cu) {
        ctx->pc = 0x44B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B968u;
        // 0x44b96c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B970u;
        goto label_44b970;
    }
    ctx->pc = 0x44B968u;
    SET_GPR_U32(ctx, 31, 0x44B970u);
    ctx->pc = 0x44B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B968u;
    // 0x44b96c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44B968u, 0x44B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B970u;
label_44b970:
    // 0x44b970: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44b970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_44b974:
    // 0x44b974: 0xc103628  jal         func_40D8A0
label_44b978:
    if (ctx->pc == 0x44B978u) {
        ctx->pc = 0x44B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B974u;
        // 0x44b978: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B97Cu;
        goto label_44b97c;
    }
    ctx->pc = 0x44B974u;
    SET_GPR_U32(ctx, 31, 0x44B97Cu);
    ctx->pc = 0x44B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B974u;
    // 0x44b978: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44B974u, 0x44B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B97Cu;
label_44b97c:
    // 0x44b97c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x44b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44b980:
    // 0x44b980: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x44b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_44b984:
    // 0x44b984: 0x10000030  b           . + 4 + (0x30 << 2)
label_44b988:
    if (ctx->pc == 0x44B988u) {
        ctx->pc = 0x44B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B984u;
        // 0x44b988: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B98Cu;
        goto label_44b98c;
    }
    ctx->pc = 0x44B984u;
    {
        const bool branch_taken_0x44b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B984u;
        // 0x44b988: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b984) {
            ctx->pc = 0x44BA48u;
            goto label_44ba48;
        }
    }
    ctx->pc = 0x44B98Cu;
label_44b98c:
    // 0x44b98c: 0x0  nop
    ctx->pc = 0x44b98cu;
    // NOP
label_44b990:
    // 0x44b990: 0x5222002d  beql        $s1, $v0, . + 4 + (0x2D << 2)
label_44b994:
    if (ctx->pc == 0x44B994u) {
        ctx->pc = 0x44B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B990u;
        // 0x44b994: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B998u;
        goto label_44b998;
    }
    ctx->pc = 0x44B990u;
    {
        const bool branch_taken_0x44b990 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x44b990) {
            ctx->pc = 0x44B994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B990u;
            // 0x44b994: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BA48u;
            goto label_44ba48;
        }
    }
    ctx->pc = 0x44B998u;
label_44b998:
    // 0x44b998: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_44b99c:
    if (ctx->pc == 0x44B99Cu) {
        ctx->pc = 0x44B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B998u;
        // 0x44b99c: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B9A0u;
        goto label_44b9a0;
    }
    ctx->pc = 0x44B998u;
    {
        const bool branch_taken_0x44b998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B998u;
        // 0x44b99c: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b998) {
            ctx->pc = 0x44BA44u;
            goto label_44ba44;
        }
    }
    ctx->pc = 0x44B9A0u;
label_44b9a0:
    // 0x44b9a0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x44b9a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44b9a4:
    // 0x44b9a4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x44b9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_44b9a8:
    // 0x44b9a8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_44b9ac:
    if (ctx->pc == 0x44B9ACu) {
        ctx->pc = 0x44B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9A8u;
        // 0x44b9ac: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B9B0u;
        goto label_44b9b0;
    }
    ctx->pc = 0x44B9A8u;
    {
        const bool branch_taken_0x44b9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9A8u;
        // 0x44b9ac: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b9a8) {
            ctx->pc = 0x44BA04u;
            goto label_44ba04;
        }
    }
    ctx->pc = 0x44B9B0u;
label_44b9b0:
    // 0x44b9b0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44b9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_44b9b4:
    // 0x44b9b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_44b9b8:
    if (ctx->pc == 0x44B9B8u) {
        ctx->pc = 0x44B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9B4u;
        // 0x44b9b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B9BCu;
        goto label_44b9bc;
    }
    ctx->pc = 0x44B9B4u;
    {
        const bool branch_taken_0x44b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9B4u;
        // 0x44b9b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b9b4) {
            ctx->pc = 0x44B9ECu;
            goto label_44b9ec;
        }
    }
    ctx->pc = 0x44B9BCu;
label_44b9bc:
    // 0x44b9bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_44b9c0:
    if (ctx->pc == 0x44B9C0u) {
        ctx->pc = 0x44B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9BCu;
        // 0x44b9c0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B9C4u;
        goto label_44b9c4;
    }
    ctx->pc = 0x44B9BCu;
    {
        const bool branch_taken_0x44b9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b9bc) {
            ctx->pc = 0x44B9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B9BCu;
            // 0x44b9c0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B9DCu;
            goto label_44b9dc;
        }
    }
    ctx->pc = 0x44B9C4u;
label_44b9c4:
    // 0x44b9c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x44b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_44b9c8:
    // 0x44b9c8: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x44b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_44b9cc:
    // 0x44b9cc: 0x26290008  addiu       $t1, $s1, 0x8
    ctx->pc = 0x44b9ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_44b9d0:
    // 0x44b9d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44b9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44b9d4:
    // 0x44b9d4: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x44b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_44b9d8:
    // 0x44b9d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b9dc:
    // 0x44b9dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44b9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44b9e0:
    // 0x44b9e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x44b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_44b9e4:
    // 0x44b9e4: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44b9e8:
    // 0x44b9e8: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x44b9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_44b9ec:
    // 0x44b9ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b9f0:
    // 0x44b9f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44b9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44b9f4:
    // 0x44b9f4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x44b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_44b9f8:
    // 0x44b9f8: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44b9fc:
    // 0x44b9fc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_44ba00:
    if (ctx->pc == 0x44BA00u) {
        ctx->pc = 0x44BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9FCu;
        // 0x44ba00: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BA04u;
        goto label_44ba04;
    }
    ctx->pc = 0x44B9FCu;
    {
        const bool branch_taken_0x44b9fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9FCu;
        // 0x44ba00: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b9fc) {
            ctx->pc = 0x44BA44u;
            goto label_44ba44;
        }
    }
    ctx->pc = 0x44BA04u;
label_44ba04:
    // 0x44ba04: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x44ba04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ba08:
    // 0x44ba08: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44ba0c:
    // 0x44ba0c: 0x25250008  addiu       $a1, $t1, 0x8
    ctx->pc = 0x44ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_44ba10:
    // 0x44ba10: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x44ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_44ba14:
    // 0x44ba14: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x44ba14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_44ba18:
    // 0x44ba18: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44ba1c:
    // 0x44ba1c: 0x25270018  addiu       $a3, $t1, 0x18
    ctx->pc = 0x44ba1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_44ba20:
    // 0x44ba20: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x44ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_44ba24:
    // 0x44ba24: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x44ba24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_44ba28:
    // 0x44ba28: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x44ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_44ba2c:
    // 0x44ba2c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x44ba2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_44ba30:
    // 0x44ba30: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x44ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_44ba34:
    // 0x44ba34: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x44ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_44ba38:
    // 0x44ba38: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x44ba38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_44ba3c:
    // 0x44ba3c: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
label_44ba40:
    if (ctx->pc == 0x44BA40u) {
        ctx->pc = 0x44BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BA3Cu;
        // 0x44ba40: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BA44u;
        goto label_44ba44;
    }
    ctx->pc = 0x44BA3Cu;
    {
        const bool branch_taken_0x44ba3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BA3Cu;
        // 0x44ba40: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ba3c) {
            ctx->pc = 0x44BA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ba08;
        }
    }
    ctx->pc = 0x44BA44u;
label_44ba44:
    // 0x44ba44: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x44ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_44ba48:
    // 0x44ba48: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_44ba4c:
    if (ctx->pc == 0x44BA4Cu) {
        ctx->pc = 0x44BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BA48u;
        // 0x44ba4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BA50u;
        goto label_44ba50;
    }
    ctx->pc = 0x44BA48u;
    {
        const bool branch_taken_0x44ba48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BA48u;
        // 0x44ba4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ba48) {
            ctx->pc = 0x44BB1Cu;
            goto label_44bb1c;
        }
    }
    ctx->pc = 0x44BA50u;
label_44ba50:
    // 0x44ba50: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x44ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_44ba54:
    // 0x44ba54: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x44ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_44ba58:
    // 0x44ba58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44ba5c:
    // 0x44ba5c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x44ba5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_44ba60:
    // 0x44ba60: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_44ba64:
    if (ctx->pc == 0x44BA64u) {
        ctx->pc = 0x44BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BA60u;
        // 0x44ba64: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BA68u;
        goto label_44ba68;
    }
    ctx->pc = 0x44BA60u;
    {
        const bool branch_taken_0x44ba60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BA60u;
        // 0x44ba64: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ba60) {
            ctx->pc = 0x44BB18u;
            goto label_44bb18;
        }
    }
    ctx->pc = 0x44BA68u;
label_44ba68:
    // 0x44ba68: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x44ba68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_44ba6c:
    // 0x44ba6c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x44ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_44ba70:
    // 0x44ba70: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x44ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_44ba74:
    // 0x44ba74: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x44ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_44ba78:
    // 0x44ba78: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x44ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_44ba7c:
    // 0x44ba7c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x44ba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_44ba80:
    // 0x44ba80: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x44ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_44ba84:
    // 0x44ba84: 0x2483ffc0  addiu       $v1, $a0, -0x40
    ctx->pc = 0x44ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_44ba88:
    // 0x44ba88: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x44ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_44ba8c:
    // 0x44ba8c: 0x2485ffe0  addiu       $a1, $a0, -0x20
    ctx->pc = 0x44ba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_44ba90:
    // 0x44ba90: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x44ba90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_44ba94:
    // 0x44ba94: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x44ba94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_44ba98:
    // 0x44ba98: 0x68c8000f  ldl         $t0, 0xF($a2)
    ctx->pc = 0x44ba98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_44ba9c:
    // 0x44ba9c: 0x6cc80008  ldr         $t0, 0x8($a2)
    ctx->pc = 0x44ba9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_44baa0:
    // 0x44baa0: 0x68c90017  ldl         $t1, 0x17($a2)
    ctx->pc = 0x44baa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_44baa4:
    // 0x44baa4: 0x6cc90010  ldr         $t1, 0x10($a2)
    ctx->pc = 0x44baa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_44baa8:
    // 0x44baa8: 0x68ca001f  ldl         $t2, 0x1F($a2)
    ctx->pc = 0x44baa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_44baac:
    // 0x44baac: 0x6cca0018  ldr         $t2, 0x18($a2)
    ctx->pc = 0x44baacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_44bab0:
    // 0x44bab0: 0xb087ffe7  sdl         $a3, -0x19($a0)
    ctx->pc = 0x44bab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bab4:
    // 0x44bab4: 0xb487ffe0  sdr         $a3, -0x20($a0)
    ctx->pc = 0x44bab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bab8:
    // 0x44bab8: 0xb088ffef  sdl         $t0, -0x11($a0)
    ctx->pc = 0x44bab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44babc:
    // 0x44babc: 0xb488ffe8  sdr         $t0, -0x18($a0)
    ctx->pc = 0x44babcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bac0:
    // 0x44bac0: 0xb089fff7  sdl         $t1, -0x9($a0)
    ctx->pc = 0x44bac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bac4:
    // 0x44bac4: 0xb489fff0  sdr         $t1, -0x10($a0)
    ctx->pc = 0x44bac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bac8:
    // 0x44bac8: 0xb08affff  sdl         $t2, -0x1($a0)
    ctx->pc = 0x44bac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bacc:
    // 0x44bacc: 0xb48afff8  sdr         $t2, -0x8($a0)
    ctx->pc = 0x44baccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bad0:
    // 0x44bad0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x44bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44bad4:
    // 0x44bad4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x44bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_44bad8:
    // 0x44bad8: 0xacc60020  sw          $a2, 0x20($a2)
    ctx->pc = 0x44bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 6));
label_44badc:
    // 0x44badc: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x44badcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_44bae0:
    // 0x44bae0: 0xac82ffe0  sw          $v0, -0x20($a0)
    ctx->pc = 0x44bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_U32(ctx, 2));
label_44bae4:
    // 0x44bae4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x44bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_44bae8:
    // 0x44bae8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44baec:
    // 0x44baec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x44baecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_44baf0:
    // 0x44baf0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_44baf4:
    if (ctx->pc == 0x44BAF4u) {
        ctx->pc = 0x44BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BAF0u;
        // 0x44baf4: 0xac51000c  sw          $s1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BAF8u;
        goto label_44baf8;
    }
    ctx->pc = 0x44BAF0u;
    {
        const bool branch_taken_0x44baf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BAF0u;
        // 0x44baf4: 0xac51000c  sw          $s1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44baf0) {
            ctx->pc = 0x44BB10u;
            goto label_44bb10;
        }
    }
    ctx->pc = 0x44BAF8u;
label_44baf8:
    // 0x44baf8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x44baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44bafc:
    // 0x44bafc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x44bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_44bb00:
    // 0x44bb00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44bb04:
    // 0x44bb04: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x44bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_44bb08:
    // 0x44bb08: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x44bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_44bb0c:
    // 0x44bb0c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x44bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_44bb10:
    // 0x44bb10: 0x10000002  b           . + 4 + (0x2 << 2)
label_44bb14:
    if (ctx->pc == 0x44BB14u) {
        ctx->pc = 0x44BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB10u;
        // 0x44bb14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BB18u;
        goto label_44bb18;
    }
    ctx->pc = 0x44BB10u;
    {
        const bool branch_taken_0x44bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB10u;
        // 0x44bb14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bb10) {
            ctx->pc = 0x44BB1Cu;
            goto label_44bb1c;
        }
    }
    ctx->pc = 0x44BB18u;
label_44bb18:
    // 0x44bb18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44bb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44bb1c:
    // 0x44bb1c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x44bb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44bb20:
    // 0x44bb20: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x44bb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44bb24:
    // 0x44bb24: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x44bb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44bb28:
    // 0x44bb28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44bb28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44bb2c:
    // 0x44bb2c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x44bb2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44bb30:
    // 0x44bb30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44bb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44bb34:
    // 0x44bb34: 0x3e00008  jr          $ra
label_44bb38:
    if (ctx->pc == 0x44BB38u) {
        ctx->pc = 0x44BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB34u;
        // 0x44bb38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BB3Cu;
        goto label_44bb3c;
    }
    ctx->pc = 0x44BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB34u;
        // 0x44bb38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44BB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44BB3Cu;
label_44bb3c:
    // 0x44bb3c: 0x0  nop
    ctx->pc = 0x44bb3cu;
    // NOP
    ctx->pc = 0x44bb40u;
}
