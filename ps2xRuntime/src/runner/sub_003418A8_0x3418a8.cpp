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

// Function: sub_003418A8
// Address: 0x3418a8 - 0x341a38
void sub_003418A8_0x3418a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003418A8_0x3418a8");
#endif

    switch (ctx->pc) {
        case 0x3418a8u: goto label_3418a8;
        case 0x3418acu: goto label_3418ac;
        case 0x3418b0u: goto label_3418b0;
        case 0x3418b4u: goto label_3418b4;
        case 0x3418b8u: goto label_3418b8;
        case 0x3418bcu: goto label_3418bc;
        case 0x3418c0u: goto label_3418c0;
        case 0x3418c4u: goto label_3418c4;
        case 0x3418c8u: goto label_3418c8;
        case 0x3418ccu: goto label_3418cc;
        case 0x3418d0u: goto label_3418d0;
        case 0x3418d4u: goto label_3418d4;
        case 0x3418d8u: goto label_3418d8;
        case 0x3418dcu: goto label_3418dc;
        case 0x3418e0u: goto label_3418e0;
        case 0x3418e4u: goto label_3418e4;
        case 0x3418e8u: goto label_3418e8;
        case 0x3418ecu: goto label_3418ec;
        case 0x3418f0u: goto label_3418f0;
        case 0x3418f4u: goto label_3418f4;
        case 0x3418f8u: goto label_3418f8;
        case 0x3418fcu: goto label_3418fc;
        case 0x341900u: goto label_341900;
        case 0x341904u: goto label_341904;
        case 0x341908u: goto label_341908;
        case 0x34190cu: goto label_34190c;
        case 0x341910u: goto label_341910;
        case 0x341914u: goto label_341914;
        case 0x341918u: goto label_341918;
        case 0x34191cu: goto label_34191c;
        case 0x341920u: goto label_341920;
        case 0x341924u: goto label_341924;
        case 0x341928u: goto label_341928;
        case 0x34192cu: goto label_34192c;
        case 0x341930u: goto label_341930;
        case 0x341934u: goto label_341934;
        case 0x341938u: goto label_341938;
        case 0x34193cu: goto label_34193c;
        case 0x341940u: goto label_341940;
        case 0x341944u: goto label_341944;
        case 0x341948u: goto label_341948;
        case 0x34194cu: goto label_34194c;
        case 0x341950u: goto label_341950;
        case 0x341954u: goto label_341954;
        case 0x341958u: goto label_341958;
        case 0x34195cu: goto label_34195c;
        case 0x341960u: goto label_341960;
        case 0x341964u: goto label_341964;
        case 0x341968u: goto label_341968;
        case 0x34196cu: goto label_34196c;
        case 0x341970u: goto label_341970;
        case 0x341974u: goto label_341974;
        case 0x341978u: goto label_341978;
        case 0x34197cu: goto label_34197c;
        case 0x341980u: goto label_341980;
        case 0x341984u: goto label_341984;
        case 0x341988u: goto label_341988;
        case 0x34198cu: goto label_34198c;
        case 0x341990u: goto label_341990;
        case 0x341994u: goto label_341994;
        case 0x341998u: goto label_341998;
        case 0x34199cu: goto label_34199c;
        case 0x3419a0u: goto label_3419a0;
        case 0x3419a4u: goto label_3419a4;
        case 0x3419a8u: goto label_3419a8;
        case 0x3419acu: goto label_3419ac;
        case 0x3419b0u: goto label_3419b0;
        case 0x3419b4u: goto label_3419b4;
        case 0x3419b8u: goto label_3419b8;
        case 0x3419bcu: goto label_3419bc;
        case 0x3419c0u: goto label_3419c0;
        case 0x3419c4u: goto label_3419c4;
        case 0x3419c8u: goto label_3419c8;
        case 0x3419ccu: goto label_3419cc;
        case 0x3419d0u: goto label_3419d0;
        case 0x3419d4u: goto label_3419d4;
        case 0x3419d8u: goto label_3419d8;
        case 0x3419dcu: goto label_3419dc;
        case 0x3419e0u: goto label_3419e0;
        case 0x3419e4u: goto label_3419e4;
        case 0x3419e8u: goto label_3419e8;
        case 0x3419ecu: goto label_3419ec;
        case 0x3419f0u: goto label_3419f0;
        case 0x3419f4u: goto label_3419f4;
        case 0x3419f8u: goto label_3419f8;
        case 0x3419fcu: goto label_3419fc;
        case 0x341a00u: goto label_341a00;
        case 0x341a04u: goto label_341a04;
        case 0x341a08u: goto label_341a08;
        case 0x341a0cu: goto label_341a0c;
        case 0x341a10u: goto label_341a10;
        case 0x341a14u: goto label_341a14;
        case 0x341a18u: goto label_341a18;
        case 0x341a1cu: goto label_341a1c;
        case 0x341a20u: goto label_341a20;
        case 0x341a24u: goto label_341a24;
        case 0x341a28u: goto label_341a28;
        case 0x341a2cu: goto label_341a2c;
        case 0x341a30u: goto label_341a30;
        case 0x341a34u: goto label_341a34;
        default: break;
    }

    ctx->pc = 0x3418a8u;

label_3418a8:
    // 0x3418a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3418a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3418ac:
    // 0x3418ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3418acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3418b0:
    // 0x3418b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3418b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3418b4:
    // 0x3418b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3418b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3418b8:
    // 0x3418b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3418b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3418bc:
    // 0x3418bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3418bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3418c0:
    // 0x3418c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3418c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3418c4:
    // 0x3418c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3418c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3418c8:
    // 0x3418c8: 0x8e92001c  lw          $s2, 0x1C($s4)
    ctx->pc = 0x3418c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3418cc:
    // 0x3418cc: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
label_3418d0:
    if (ctx->pc == 0x3418D0u) {
        ctx->pc = 0x3418D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418CCu;
        // 0x3418d0: 0x8e910018  lw          $s1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3418D4u;
        goto label_3418d4;
    }
    ctx->pc = 0x3418CCu;
    {
        const bool branch_taken_0x3418cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3418D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418CCu;
        // 0x3418d0: 0x8e910018  lw          $s1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3418cc) {
            ctx->pc = 0x341974u;
            goto label_341974;
        }
    }
    ctx->pc = 0x3418D4u;
label_3418d4:
    // 0x3418d4: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3418d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3418d8:
    // 0x3418d8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3418d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3418dc:
    // 0x3418dc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3418dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3418e0:
    // 0x3418e0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3418e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3418e4:
    // 0x3418e4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3418e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3418e8:
    // 0x3418e8: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x3418e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_3418ec:
    // 0x3418ec: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x3418ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3418f0:
    // 0x3418f0: 0x40f809  jalr        $v0
label_3418f4:
    if (ctx->pc == 0x3418F4u) {
        ctx->pc = 0x3418F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418F0u;
        // 0x3418f4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3418F8u;
        goto label_3418f8;
    }
    ctx->pc = 0x3418F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3418F8u);
        ctx->pc = 0x3418F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418F0u;
        // 0x3418f4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3418F0u, 0x3418F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3418F8u;
label_3418f8:
    // 0x3418f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3418f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3418fc:
    // 0x3418fc: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_341900:
    if (ctx->pc == 0x341900u) {
        ctx->pc = 0x341900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418FCu;
        // 0x341900: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341904u;
        goto label_341904;
    }
    ctx->pc = 0x3418FCu;
    {
        const bool branch_taken_0x3418fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x341900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418FCu;
        // 0x341900: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3418fc) {
            ctx->pc = 0x3419ECu;
            goto label_3419ec;
        }
    }
    ctx->pc = 0x341904u;
label_341904:
    // 0x341904: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x341904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_341908:
    // 0x341908: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x341908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_34190c:
    // 0x34190c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34190cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341910:
    // 0x341910: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x341910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_341914:
    // 0x341914: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x341914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_341918:
    // 0x341918: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x341918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_34191c:
    // 0x34191c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x34191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_341920:
    // 0x341920: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x341920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341924:
    // 0x341924: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_341928:
    if (ctx->pc == 0x341928u) {
        ctx->pc = 0x341928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341924u;
        // 0x341928: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34192Cu;
        goto label_34192c;
    }
    ctx->pc = 0x341924u;
    {
        const bool branch_taken_0x341924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341924u;
        // 0x341928: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341924) {
            ctx->pc = 0x3419ECu;
            goto label_3419ec;
        }
    }
    ctx->pc = 0x34192Cu;
label_34192c:
    // 0x34192c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34192cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341930:
    // 0x341930: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x341930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_341934:
    // 0x341934: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x341934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_341938:
    // 0x341938: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x341938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_34193c:
    // 0x34193c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_341940:
    if (ctx->pc == 0x341940u) {
        ctx->pc = 0x341940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34193Cu;
        // 0x341940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341944u;
        goto label_341944;
    }
    ctx->pc = 0x34193Cu;
    {
        const bool branch_taken_0x34193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34193Cu;
        // 0x341940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34193c) {
            ctx->pc = 0x341958u;
            goto label_341958;
        }
    }
    ctx->pc = 0x341944u;
label_341944:
    // 0x341944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341948:
    // 0x341948: 0x40f809  jalr        $v0
label_34194c:
    if (ctx->pc == 0x34194Cu) {
        ctx->pc = 0x34194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341948u;
        // 0x34194c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341950u;
        goto label_341950;
    }
    ctx->pc = 0x341948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341950u);
        ctx->pc = 0x34194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341948u;
        // 0x34194c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341948u, 0x341950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341950u;
label_341950:
    // 0x341950: 0x14500026  bne         $v0, $s0, . + 4 + (0x26 << 2)
label_341954:
    if (ctx->pc == 0x341954u) {
        ctx->pc = 0x341958u;
        goto label_341958;
    }
    ctx->pc = 0x341950u;
    {
        const bool branch_taken_0x341950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x341950) {
            ctx->pc = 0x3419ECu;
            goto label_3419ec;
        }
    }
    ctx->pc = 0x341958u;
label_341958:
    // 0x341958: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x341958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_34195c:
    // 0x34195c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34195cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_341960:
    // 0x341960: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x341960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341964:
    // 0x341964: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_341968:
    if (ctx->pc == 0x341968u) {
        ctx->pc = 0x341968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341964u;
        // 0x341968: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34196Cu;
        goto label_34196c;
    }
    ctx->pc = 0x341964u;
    {
        const bool branch_taken_0x341964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341964u;
        // 0x341968: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341964) {
            ctx->pc = 0x341930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341930;
        }
    }
    ctx->pc = 0x34196Cu;
label_34196c:
    // 0x34196c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_341970:
    if (ctx->pc == 0x341970u) {
        ctx->pc = 0x341974u;
        goto label_341974;
    }
    ctx->pc = 0x34196Cu;
    {
        const bool branch_taken_0x34196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34196c) {
            ctx->pc = 0x3419ECu;
            goto label_3419ec;
        }
    }
    ctx->pc = 0x341974u;
label_341974:
    // 0x341974: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x341974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_341978:
    // 0x341978: 0x56120003  bnel        $s0, $s2, . + 4 + (0x3 << 2)
label_34197c:
    if (ctx->pc == 0x34197Cu) {
        ctx->pc = 0x34197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341978u;
        // 0x34197c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341980u;
        goto label_341980;
    }
    ctx->pc = 0x341978u;
    {
        const bool branch_taken_0x341978 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x341978) {
            ctx->pc = 0x34197Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341978u;
            // 0x34197c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341988u;
            goto label_341988;
        }
    }
    ctx->pc = 0x341980u;
label_341980:
    // 0x341980: 0x10000002  b           . + 4 + (0x2 << 2)
label_341984:
    if (ctx->pc == 0x341984u) {
        ctx->pc = 0x341984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341980u;
        // 0x341984: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341988u;
        goto label_341988;
    }
    ctx->pc = 0x341980u;
    {
        const bool branch_taken_0x341980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341980u;
        // 0x341984: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341980) {
            ctx->pc = 0x34198Cu;
            goto label_34198c;
        }
    }
    ctx->pc = 0x341988u;
label_341988:
    // 0x341988: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x341988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_34198c:
    // 0x34198c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x34198cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_341990:
    // 0x341990: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x341990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_341994:
    // 0x341994: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x341994u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_341998:
    // 0x341998: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x341998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_34199c:
    // 0x34199c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x34199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3419a0:
    // 0x3419a0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_3419a4:
    if (ctx->pc == 0x3419A4u) {
        ctx->pc = 0x3419A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419A0u;
        // 0x3419a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3419A8u;
        goto label_3419a8;
    }
    ctx->pc = 0x3419A0u;
    {
        const bool branch_taken_0x3419a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3419A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419A0u;
        // 0x3419a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419a0) {
            ctx->pc = 0x3419ECu;
            goto label_3419ec;
        }
    }
    ctx->pc = 0x3419A8u;
label_3419a8:
    // 0x3419a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3419a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3419ac:
    // 0x3419ac: 0x0  nop
    ctx->pc = 0x3419acu;
    // NOP
label_3419b0:
    // 0x3419b0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3419b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3419b4:
    // 0x3419b4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3419b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3419b8:
    // 0x3419b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3419b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3419bc:
    // 0x3419bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3419c0:
    if (ctx->pc == 0x3419C0u) {
        ctx->pc = 0x3419C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419BCu;
        // 0x3419c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3419C4u;
        goto label_3419c4;
    }
    ctx->pc = 0x3419BCu;
    {
        const bool branch_taken_0x3419bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3419C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419BCu;
        // 0x3419c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419bc) {
            ctx->pc = 0x3419D8u;
            goto label_3419d8;
        }
    }
    ctx->pc = 0x3419C4u;
label_3419c4:
    // 0x3419c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3419c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3419c8:
    // 0x3419c8: 0x40f809  jalr        $v0
label_3419cc:
    if (ctx->pc == 0x3419CCu) {
        ctx->pc = 0x3419CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419C8u;
        // 0x3419cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3419D0u;
        goto label_3419d0;
    }
    ctx->pc = 0x3419C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3419D0u);
        ctx->pc = 0x3419CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419C8u;
        // 0x3419cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3419C8u, 0x3419D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3419D0u;
label_3419d0:
    // 0x3419d0: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_3419d4:
    if (ctx->pc == 0x3419D4u) {
        ctx->pc = 0x3419D8u;
        goto label_3419d8;
    }
    ctx->pc = 0x3419D0u;
    {
        const bool branch_taken_0x3419d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3419d0) {
            ctx->pc = 0x3419ECu;
            goto label_3419ec;
        }
    }
    ctx->pc = 0x3419D8u;
label_3419d8:
    // 0x3419d8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3419d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3419dc:
    // 0x3419dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3419dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3419e0:
    // 0x3419e0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3419e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3419e4:
    // 0x3419e4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3419e8:
    if (ctx->pc == 0x3419E8u) {
        ctx->pc = 0x3419E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419E4u;
        // 0x3419e8: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3419ECu;
        goto label_3419ec;
    }
    ctx->pc = 0x3419E4u;
    {
        const bool branch_taken_0x3419e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3419E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419E4u;
        // 0x3419e8: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419e4) {
            ctx->pc = 0x3419B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3419b0;
        }
    }
    ctx->pc = 0x3419ECu;
label_3419ec:
    // 0x3419ec: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3419f0:
    if (ctx->pc == 0x3419F0u) {
        ctx->pc = 0x3419F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419ECu;
        // 0x3419f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3419F4u;
        goto label_3419f4;
    }
    ctx->pc = 0x3419ECu;
    {
        const bool branch_taken_0x3419ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3419F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419ECu;
        // 0x3419f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419ec) {
            ctx->pc = 0x341A18u;
            goto label_341a18;
        }
    }
    ctx->pc = 0x3419F4u;
label_3419f4:
    // 0x3419f4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3419f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3419f8:
    // 0x3419f8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_3419fc:
    if (ctx->pc == 0x3419FCu) {
        ctx->pc = 0x3419FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419F8u;
        // 0x3419fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A00u;
        goto label_341a00;
    }
    ctx->pc = 0x3419F8u;
    {
        const bool branch_taken_0x3419f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3419f8) {
            ctx->pc = 0x3419FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3419F8u;
            // 0x3419fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341A08u;
            goto label_341a08;
        }
    }
    ctx->pc = 0x341A00u;
label_341a00:
    // 0x341a00: 0x10000003  b           . + 4 + (0x3 << 2)
label_341a04:
    if (ctx->pc == 0x341A04u) {
        ctx->pc = 0x341A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A00u;
        // 0x341a04: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A08u;
        goto label_341a08;
    }
    ctx->pc = 0x341A00u;
    {
        const bool branch_taken_0x341a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A00u;
        // 0x341a04: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a00) {
            ctx->pc = 0x341A10u;
            goto label_341a10;
        }
    }
    ctx->pc = 0x341A08u;
label_341a08:
    // 0x341a08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x341a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_341a0c:
    // 0x341a0c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x341a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_341a10:
    // 0x341a10: 0xae900020  sw          $s0, 0x20($s4)
    ctx->pc = 0x341a10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 16));
label_341a14:
    // 0x341a14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x341a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341a18:
    // 0x341a18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x341a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_341a1c:
    // 0x341a1c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x341a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_341a20:
    // 0x341a20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x341a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_341a24:
    // 0x341a24: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x341a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_341a28:
    // 0x341a28: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x341a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341a2c:
    // 0x341a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341a30:
    // 0x341a30: 0x3e00008  jr          $ra
label_341a34:
    if (ctx->pc == 0x341A34u) {
        ctx->pc = 0x341A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A30u;
        // 0x341a34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A38u;
        goto label_fallthrough_0x341a30;
    }
    ctx->pc = 0x341A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A30u;
        // 0x341a34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341a30:
    ctx->pc = 0x341A38u;
}
