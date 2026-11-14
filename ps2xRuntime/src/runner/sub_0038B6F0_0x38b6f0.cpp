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

// Function: sub_0038B6F0
// Address: 0x38b6f0 - 0x38ba88
void sub_0038B6F0_0x38b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B6F0_0x38b6f0");
#endif

    switch (ctx->pc) {
        case 0x38b6f0u: goto label_38b6f0;
        case 0x38b6f4u: goto label_38b6f4;
        case 0x38b6f8u: goto label_38b6f8;
        case 0x38b6fcu: goto label_38b6fc;
        case 0x38b700u: goto label_38b700;
        case 0x38b704u: goto label_38b704;
        case 0x38b708u: goto label_38b708;
        case 0x38b70cu: goto label_38b70c;
        case 0x38b710u: goto label_38b710;
        case 0x38b714u: goto label_38b714;
        case 0x38b718u: goto label_38b718;
        case 0x38b71cu: goto label_38b71c;
        case 0x38b720u: goto label_38b720;
        case 0x38b724u: goto label_38b724;
        case 0x38b728u: goto label_38b728;
        case 0x38b72cu: goto label_38b72c;
        case 0x38b730u: goto label_38b730;
        case 0x38b734u: goto label_38b734;
        case 0x38b738u: goto label_38b738;
        case 0x38b73cu: goto label_38b73c;
        case 0x38b740u: goto label_38b740;
        case 0x38b744u: goto label_38b744;
        case 0x38b748u: goto label_38b748;
        case 0x38b74cu: goto label_38b74c;
        case 0x38b750u: goto label_38b750;
        case 0x38b754u: goto label_38b754;
        case 0x38b758u: goto label_38b758;
        case 0x38b75cu: goto label_38b75c;
        case 0x38b760u: goto label_38b760;
        case 0x38b764u: goto label_38b764;
        case 0x38b768u: goto label_38b768;
        case 0x38b76cu: goto label_38b76c;
        case 0x38b770u: goto label_38b770;
        case 0x38b774u: goto label_38b774;
        case 0x38b778u: goto label_38b778;
        case 0x38b77cu: goto label_38b77c;
        case 0x38b780u: goto label_38b780;
        case 0x38b784u: goto label_38b784;
        case 0x38b788u: goto label_38b788;
        case 0x38b78cu: goto label_38b78c;
        case 0x38b790u: goto label_38b790;
        case 0x38b794u: goto label_38b794;
        case 0x38b798u: goto label_38b798;
        case 0x38b79cu: goto label_38b79c;
        case 0x38b7a0u: goto label_38b7a0;
        case 0x38b7a4u: goto label_38b7a4;
        case 0x38b7a8u: goto label_38b7a8;
        case 0x38b7acu: goto label_38b7ac;
        case 0x38b7b0u: goto label_38b7b0;
        case 0x38b7b4u: goto label_38b7b4;
        case 0x38b7b8u: goto label_38b7b8;
        case 0x38b7bcu: goto label_38b7bc;
        case 0x38b7c0u: goto label_38b7c0;
        case 0x38b7c4u: goto label_38b7c4;
        case 0x38b7c8u: goto label_38b7c8;
        case 0x38b7ccu: goto label_38b7cc;
        case 0x38b7d0u: goto label_38b7d0;
        case 0x38b7d4u: goto label_38b7d4;
        case 0x38b7d8u: goto label_38b7d8;
        case 0x38b7dcu: goto label_38b7dc;
        case 0x38b7e0u: goto label_38b7e0;
        case 0x38b7e4u: goto label_38b7e4;
        case 0x38b7e8u: goto label_38b7e8;
        case 0x38b7ecu: goto label_38b7ec;
        case 0x38b7f0u: goto label_38b7f0;
        case 0x38b7f4u: goto label_38b7f4;
        case 0x38b7f8u: goto label_38b7f8;
        case 0x38b7fcu: goto label_38b7fc;
        case 0x38b800u: goto label_38b800;
        case 0x38b804u: goto label_38b804;
        case 0x38b808u: goto label_38b808;
        case 0x38b80cu: goto label_38b80c;
        case 0x38b810u: goto label_38b810;
        case 0x38b814u: goto label_38b814;
        case 0x38b818u: goto label_38b818;
        case 0x38b81cu: goto label_38b81c;
        case 0x38b820u: goto label_38b820;
        case 0x38b824u: goto label_38b824;
        case 0x38b828u: goto label_38b828;
        case 0x38b82cu: goto label_38b82c;
        case 0x38b830u: goto label_38b830;
        case 0x38b834u: goto label_38b834;
        case 0x38b838u: goto label_38b838;
        case 0x38b83cu: goto label_38b83c;
        case 0x38b840u: goto label_38b840;
        case 0x38b844u: goto label_38b844;
        case 0x38b848u: goto label_38b848;
        case 0x38b84cu: goto label_38b84c;
        case 0x38b850u: goto label_38b850;
        case 0x38b854u: goto label_38b854;
        case 0x38b858u: goto label_38b858;
        case 0x38b85cu: goto label_38b85c;
        case 0x38b860u: goto label_38b860;
        case 0x38b864u: goto label_38b864;
        case 0x38b868u: goto label_38b868;
        case 0x38b86cu: goto label_38b86c;
        case 0x38b870u: goto label_38b870;
        case 0x38b874u: goto label_38b874;
        case 0x38b878u: goto label_38b878;
        case 0x38b87cu: goto label_38b87c;
        case 0x38b880u: goto label_38b880;
        case 0x38b884u: goto label_38b884;
        case 0x38b888u: goto label_38b888;
        case 0x38b88cu: goto label_38b88c;
        case 0x38b890u: goto label_38b890;
        case 0x38b894u: goto label_38b894;
        case 0x38b898u: goto label_38b898;
        case 0x38b89cu: goto label_38b89c;
        case 0x38b8a0u: goto label_38b8a0;
        case 0x38b8a4u: goto label_38b8a4;
        case 0x38b8a8u: goto label_38b8a8;
        case 0x38b8acu: goto label_38b8ac;
        case 0x38b8b0u: goto label_38b8b0;
        case 0x38b8b4u: goto label_38b8b4;
        case 0x38b8b8u: goto label_38b8b8;
        case 0x38b8bcu: goto label_38b8bc;
        case 0x38b8c0u: goto label_38b8c0;
        case 0x38b8c4u: goto label_38b8c4;
        case 0x38b8c8u: goto label_38b8c8;
        case 0x38b8ccu: goto label_38b8cc;
        case 0x38b8d0u: goto label_38b8d0;
        case 0x38b8d4u: goto label_38b8d4;
        case 0x38b8d8u: goto label_38b8d8;
        case 0x38b8dcu: goto label_38b8dc;
        case 0x38b8e0u: goto label_38b8e0;
        case 0x38b8e4u: goto label_38b8e4;
        case 0x38b8e8u: goto label_38b8e8;
        case 0x38b8ecu: goto label_38b8ec;
        case 0x38b8f0u: goto label_38b8f0;
        case 0x38b8f4u: goto label_38b8f4;
        case 0x38b8f8u: goto label_38b8f8;
        case 0x38b8fcu: goto label_38b8fc;
        case 0x38b900u: goto label_38b900;
        case 0x38b904u: goto label_38b904;
        case 0x38b908u: goto label_38b908;
        case 0x38b90cu: goto label_38b90c;
        case 0x38b910u: goto label_38b910;
        case 0x38b914u: goto label_38b914;
        case 0x38b918u: goto label_38b918;
        case 0x38b91cu: goto label_38b91c;
        case 0x38b920u: goto label_38b920;
        case 0x38b924u: goto label_38b924;
        case 0x38b928u: goto label_38b928;
        case 0x38b92cu: goto label_38b92c;
        case 0x38b930u: goto label_38b930;
        case 0x38b934u: goto label_38b934;
        case 0x38b938u: goto label_38b938;
        case 0x38b93cu: goto label_38b93c;
        case 0x38b940u: goto label_38b940;
        case 0x38b944u: goto label_38b944;
        case 0x38b948u: goto label_38b948;
        case 0x38b94cu: goto label_38b94c;
        case 0x38b950u: goto label_38b950;
        case 0x38b954u: goto label_38b954;
        case 0x38b958u: goto label_38b958;
        case 0x38b95cu: goto label_38b95c;
        case 0x38b960u: goto label_38b960;
        case 0x38b964u: goto label_38b964;
        case 0x38b968u: goto label_38b968;
        case 0x38b96cu: goto label_38b96c;
        case 0x38b970u: goto label_38b970;
        case 0x38b974u: goto label_38b974;
        case 0x38b978u: goto label_38b978;
        case 0x38b97cu: goto label_38b97c;
        case 0x38b980u: goto label_38b980;
        case 0x38b984u: goto label_38b984;
        case 0x38b988u: goto label_38b988;
        case 0x38b98cu: goto label_38b98c;
        case 0x38b990u: goto label_38b990;
        case 0x38b994u: goto label_38b994;
        case 0x38b998u: goto label_38b998;
        case 0x38b99cu: goto label_38b99c;
        case 0x38b9a0u: goto label_38b9a0;
        case 0x38b9a4u: goto label_38b9a4;
        case 0x38b9a8u: goto label_38b9a8;
        case 0x38b9acu: goto label_38b9ac;
        case 0x38b9b0u: goto label_38b9b0;
        case 0x38b9b4u: goto label_38b9b4;
        case 0x38b9b8u: goto label_38b9b8;
        case 0x38b9bcu: goto label_38b9bc;
        case 0x38b9c0u: goto label_38b9c0;
        case 0x38b9c4u: goto label_38b9c4;
        case 0x38b9c8u: goto label_38b9c8;
        case 0x38b9ccu: goto label_38b9cc;
        case 0x38b9d0u: goto label_38b9d0;
        case 0x38b9d4u: goto label_38b9d4;
        case 0x38b9d8u: goto label_38b9d8;
        case 0x38b9dcu: goto label_38b9dc;
        case 0x38b9e0u: goto label_38b9e0;
        case 0x38b9e4u: goto label_38b9e4;
        case 0x38b9e8u: goto label_38b9e8;
        case 0x38b9ecu: goto label_38b9ec;
        case 0x38b9f0u: goto label_38b9f0;
        case 0x38b9f4u: goto label_38b9f4;
        case 0x38b9f8u: goto label_38b9f8;
        case 0x38b9fcu: goto label_38b9fc;
        case 0x38ba00u: goto label_38ba00;
        case 0x38ba04u: goto label_38ba04;
        case 0x38ba08u: goto label_38ba08;
        case 0x38ba0cu: goto label_38ba0c;
        case 0x38ba10u: goto label_38ba10;
        case 0x38ba14u: goto label_38ba14;
        case 0x38ba18u: goto label_38ba18;
        case 0x38ba1cu: goto label_38ba1c;
        case 0x38ba20u: goto label_38ba20;
        case 0x38ba24u: goto label_38ba24;
        case 0x38ba28u: goto label_38ba28;
        case 0x38ba2cu: goto label_38ba2c;
        case 0x38ba30u: goto label_38ba30;
        case 0x38ba34u: goto label_38ba34;
        case 0x38ba38u: goto label_38ba38;
        case 0x38ba3cu: goto label_38ba3c;
        case 0x38ba40u: goto label_38ba40;
        case 0x38ba44u: goto label_38ba44;
        case 0x38ba48u: goto label_38ba48;
        case 0x38ba4cu: goto label_38ba4c;
        case 0x38ba50u: goto label_38ba50;
        case 0x38ba54u: goto label_38ba54;
        case 0x38ba58u: goto label_38ba58;
        case 0x38ba5cu: goto label_38ba5c;
        case 0x38ba60u: goto label_38ba60;
        case 0x38ba64u: goto label_38ba64;
        case 0x38ba68u: goto label_38ba68;
        case 0x38ba6cu: goto label_38ba6c;
        case 0x38ba70u: goto label_38ba70;
        case 0x38ba74u: goto label_38ba74;
        case 0x38ba78u: goto label_38ba78;
        case 0x38ba7cu: goto label_38ba7c;
        case 0x38ba80u: goto label_38ba80;
        case 0x38ba84u: goto label_38ba84;
        default: break;
    }

    ctx->pc = 0x38b6f0u;

label_38b6f0:
    // 0x38b6f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_38b6f4:
    // 0x38b6f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x38b6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_38b6f8:
    // 0x38b6f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x38b6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_38b6fc:
    // 0x38b6fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_38b700:
    // 0x38b700: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38b700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b704:
    // 0x38b704: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x38b704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_38b708:
    // 0x38b708: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x38b708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38b70c:
    // 0x38b70c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x38b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_38b710:
    // 0x38b710: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x38b710u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b714:
    // 0x38b714: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x38b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_38b718:
    // 0x38b718: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x38b718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_38b71c:
    // 0x38b71c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x38b71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_38b720:
    // 0x38b720: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x38b720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_38b724:
    // 0x38b724: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x38b724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_38b728:
    // 0x38b728: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x38b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_38b72c:
    // 0x38b72c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_38b730:
    if (ctx->pc == 0x38B730u) {
        ctx->pc = 0x38B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B72Cu;
        // 0x38b730: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B734u;
        goto label_38b734;
    }
    ctx->pc = 0x38B72Cu;
    {
        const bool branch_taken_0x38b72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B72Cu;
        // 0x38b730: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b72c) {
            ctx->pc = 0x38B73Cu;
            goto label_38b73c;
        }
    }
    ctx->pc = 0x38B734u;
label_38b734:
    // 0x38b734: 0x6c3000e  bgezl       $s6, . + 4 + (0xE << 2)
label_38b738:
    if (ctx->pc == 0x38B738u) {
        ctx->pc = 0x38B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B734u;
        // 0x38b738: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B73Cu;
        goto label_38b73c;
    }
    ctx->pc = 0x38B734u;
    {
        const bool branch_taken_0x38b734 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x38b734) {
            ctx->pc = 0x38B738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B734u;
            // 0x38b738: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B770u;
            goto label_38b770;
        }
    }
    ctx->pc = 0x38B73Cu;
label_38b73c:
    // 0x38b73c: 0x68000c5  bltz        $s4, . + 4 + (0xC5 << 2)
label_38b740:
    if (ctx->pc == 0x38B740u) {
        ctx->pc = 0x38B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B73Cu;
        // 0x38b740: 0x74102a  slt         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B744u;
        goto label_38b744;
    }
    ctx->pc = 0x38B73Cu;
    {
        const bool branch_taken_0x38b73c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x38B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B73Cu;
        // 0x38b740: 0x74102a  slt         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b73c) {
            ctx->pc = 0x38BA54u;
            goto label_38ba54;
        }
    }
    ctx->pc = 0x38B744u;
label_38b744:
    // 0x38b744: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
label_38b748:
    if (ctx->pc == 0x38B748u) {
        ctx->pc = 0x38B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B744u;
        // 0x38b748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B74Cu;
        goto label_38b74c;
    }
    ctx->pc = 0x38B744u;
    {
        const bool branch_taken_0x38b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B744u;
        // 0x38b748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b744) {
            ctx->pc = 0x38BA54u;
            goto label_38ba54;
        }
    }
    ctx->pc = 0x38B74Cu;
label_38b74c:
    // 0x38b74c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x38b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38b750:
    // 0x38b750: 0xc1035f6  jal         func_40D7D8
label_38b754:
    if (ctx->pc == 0x38B754u) {
        ctx->pc = 0x38B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B750u;
        // 0x38b754: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B758u;
        goto label_38b758;
    }
    ctx->pc = 0x38B750u;
    SET_GPR_U32(ctx, 31, 0x38B758u);
    ctx->pc = 0x38B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B750u;
    // 0x38b754: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38B750u, 0x38B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B758u;
label_38b758:
    // 0x38b758: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38b758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38b75c:
    // 0x38b75c: 0xc103628  jal         func_40D8A0
label_38b760:
    if (ctx->pc == 0x38B760u) {
        ctx->pc = 0x38B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B75Cu;
        // 0x38b760: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B764u;
        goto label_38b764;
    }
    ctx->pc = 0x38B75Cu;
    SET_GPR_U32(ctx, 31, 0x38B764u);
    ctx->pc = 0x38B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B75Cu;
    // 0x38b760: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38B75Cu, 0x38B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B764u;
label_38b764:
    // 0x38b764: 0x100000bc  b           . + 4 + (0xBC << 2)
label_38b768:
    if (ctx->pc == 0x38B768u) {
        ctx->pc = 0x38B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B764u;
        // 0x38b768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B76Cu;
        goto label_38b76c;
    }
    ctx->pc = 0x38B764u;
    {
        const bool branch_taken_0x38b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B764u;
        // 0x38b768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b764) {
            ctx->pc = 0x38BA58u;
            goto label_38ba58;
        }
    }
    ctx->pc = 0x38B76Cu;
label_38b76c:
    // 0x38b76c: 0x0  nop
    ctx->pc = 0x38b76cu;
    // NOP
label_38b770:
    // 0x38b770: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x38b770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_38b774:
    // 0x38b774: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x38b774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38b778:
    // 0x38b778: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x38b778u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38b77c:
    // 0x38b77c: 0x32b300ff  andi        $s3, $s5, 0xFF
    ctx->pc = 0x38b77cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_38b780:
    // 0x38b780: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b784:
    if (ctx->pc == 0x38B784u) {
        ctx->pc = 0x38B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B780u;
        // 0x38b784: 0x8c64add0  lw          $a0, -0x5230($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B788u;
        goto label_38b788;
    }
    ctx->pc = 0x38B780u;
    {
        const bool branch_taken_0x38b780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B780u;
        // 0x38b784: 0x8c64add0  lw          $a0, -0x5230($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b780) {
            ctx->pc = 0x38B790u;
            goto label_38b790;
        }
    }
    ctx->pc = 0x38B788u;
label_38b788:
    // 0x38b788: 0x10000006  b           . + 4 + (0x6 << 2)
label_38b78c:
    if (ctx->pc == 0x38B78Cu) {
        ctx->pc = 0x38B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B788u;
        // 0x38b78c: 0x29402  srl         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B790u;
        goto label_38b790;
    }
    ctx->pc = 0x38B788u;
    {
        const bool branch_taken_0x38b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B788u;
        // 0x38b78c: 0x29402  srl         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b788) {
            ctx->pc = 0x38B7A4u;
            goto label_38b7a4;
        }
    }
    ctx->pc = 0x38B790u;
label_38b790:
    // 0x38b790: 0x32a20080  andi        $v0, $s5, 0x80
    ctx->pc = 0x38b790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
label_38b794:
    // 0x38b794: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_38b798:
    if (ctx->pc == 0x38B798u) {
        ctx->pc = 0x38B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B794u;
        // 0x38b798: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B79Cu;
        goto label_38b79c;
    }
    ctx->pc = 0x38B794u;
    {
        const bool branch_taken_0x38b794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b794) {
            ctx->pc = 0x38B798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B794u;
            // 0x38b798: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B7A4u;
            goto label_38b7a4;
        }
    }
    ctx->pc = 0x38B79Cu;
label_38b79c:
    // 0x38b79c: 0x159083  sra         $s2, $s5, 2
    ctx->pc = 0x38b79cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 21), 2));
label_38b7a0:
    // 0x38b7a0: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x38b7a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_38b7a4:
    // 0x38b7a4: 0x2402ff7b  addiu       $v0, $zero, -0x85
    ctx->pc = 0x38b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967163));
label_38b7a8:
    // 0x38b7a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b7ac:
    // 0x38b7ac: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
label_38b7b0:
    if (ctx->pc == 0x38B7B0u) {
        ctx->pc = 0x38B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7ACu;
        // 0x38b7b0: 0x2622824  and         $a1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B7B4u;
        goto label_38b7b4;
    }
    ctx->pc = 0x38B7ACu;
    {
        const bool branch_taken_0x38b7ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x38B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7ACu;
        // 0x38b7b0: 0x2622824  and         $a1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7ac) {
            ctx->pc = 0x38B7C4u;
            goto label_38b7c4;
        }
    }
    ctx->pc = 0x38B7B4u;
label_38b7b4:
    // 0x38b7b4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x38b7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_38b7b8:
    // 0x38b7b8: 0x34b30080  ori         $s3, $a1, 0x80
    ctx->pc = 0x38b7b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
label_38b7bc:
    // 0x38b7bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_38b7c0:
    if (ctx->pc == 0x38B7C0u) {
        ctx->pc = 0x38B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7BCu;
        // 0x38b7c0: 0xa2980b  movn        $s3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B7C4u;
        goto label_38b7c4;
    }
    ctx->pc = 0x38B7BCu;
    {
        const bool branch_taken_0x38b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7BCu;
        // 0x38b7c0: 0xa2980b  movn        $s3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7bc) {
            ctx->pc = 0x38B7C8u;
            goto label_38b7c8;
        }
    }
    ctx->pc = 0x38B7C4u;
label_38b7c4:
    // 0x38b7c4: 0x34b30004  ori         $s3, $a1, 0x4
    ctx->pc = 0x38b7c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
label_38b7c8:
    // 0x38b7c8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x38b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_38b7cc:
    // 0x38b7cc: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x38b7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38b7d0:
    // 0x38b7d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_38b7d4:
    if (ctx->pc == 0x38B7D4u) {
        ctx->pc = 0x38B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7D0u;
        // 0x38b7d4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B7D8u;
        goto label_38b7d8;
    }
    ctx->pc = 0x38B7D0u;
    {
        const bool branch_taken_0x38b7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7D0u;
        // 0x38b7d4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7d0) {
            ctx->pc = 0x38B804u;
            goto label_38b804;
        }
    }
    ctx->pc = 0x38B7D8u;
label_38b7d8:
    // 0x38b7d8: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x38b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_38b7dc:
    // 0x38b7dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_38b7e0:
    if (ctx->pc == 0x38B7E0u) {
        ctx->pc = 0x38B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7DCu;
        // 0x38b7e0: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B7E4u;
        goto label_38b7e4;
    }
    ctx->pc = 0x38B7DCu;
    {
        const bool branch_taken_0x38b7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7DCu;
        // 0x38b7e0: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7dc) {
            ctx->pc = 0x38B7E8u;
            goto label_38b7e8;
        }
    }
    ctx->pc = 0x38B7E4u;
label_38b7e4:
    // 0x38b7e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38b7e8:
    // 0x38b7e8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_38b7ec:
    if (ctx->pc == 0x38B7ECu) {
        ctx->pc = 0x38B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7E8u;
        // 0x38b7ec: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B7F0u;
        goto label_38b7f0;
    }
    ctx->pc = 0x38B7E8u;
    {
        const bool branch_taken_0x38b7e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7E8u;
        // 0x38b7ec: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7e8) {
            ctx->pc = 0x38B7F8u;
            goto label_38b7f8;
        }
    }
    ctx->pc = 0x38B7F0u;
label_38b7f0:
    // 0x38b7f0: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x38b7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38b7f4:
    // 0x38b7f4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x38b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b7f8:
    // 0x38b7f8: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x38b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_38b7fc:
    // 0x38b7fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38b800:
    // 0x38b800: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38b800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38b804:
    // 0x38b804: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38b804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38b808:
    // 0x38b808: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x38b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_38b80c:
    // 0x38b80c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x38b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_38b810:
    // 0x38b810: 0x40f809  jalr        $v0
label_38b814:
    if (ctx->pc == 0x38B814u) {
        ctx->pc = 0x38B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B810u;
        // 0x38b814: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B818u;
        goto label_38b818;
    }
    ctx->pc = 0x38B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B818u);
        ctx->pc = 0x38B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B810u;
        // 0x38b814: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B810u, 0x38B818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B818u;
label_38b818:
    // 0x38b818: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38b818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b81c:
    // 0x38b81c: 0x1220008e  beqz        $s1, . + 4 + (0x8E << 2)
label_38b820:
    if (ctx->pc == 0x38B820u) {
        ctx->pc = 0x38B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B81Cu;
        // 0x38b820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B824u;
        goto label_38b824;
    }
    ctx->pc = 0x38B81Cu;
    {
        const bool branch_taken_0x38b81c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B81Cu;
        // 0x38b820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b81c) {
            ctx->pc = 0x38BA58u;
            goto label_38ba58;
        }
    }
    ctx->pc = 0x38B824u;
label_38b824:
    // 0x38b824: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x38b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_38b828:
    // 0x38b828: 0xc0e3d9a  jal         func_38F668
label_38b82c:
    if (ctx->pc == 0x38B82Cu) {
        ctx->pc = 0x38B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B828u;
        // 0x38b82c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B830u;
        goto label_38b830;
    }
    ctx->pc = 0x38B828u;
    SET_GPR_U32(ctx, 31, 0x38B830u);
    ctx->pc = 0x38B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B828u;
    // 0x38b82c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F668u, 0x38B828u, 0x38B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B830u;
label_38b830:
    // 0x38b830: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_38b834:
    if (ctx->pc == 0x38B834u) {
        ctx->pc = 0x38B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B830u;
        // 0x38b834: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B838u;
        goto label_38b838;
    }
    ctx->pc = 0x38B830u;
    {
        const bool branch_taken_0x38b830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B830u;
        // 0x38b834: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b830) {
            ctx->pc = 0x38BA54u;
            goto label_38ba54;
        }
    }
    ctx->pc = 0x38B838u;
label_38b838:
    // 0x38b838: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x38b838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_38b83c:
    // 0x38b83c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x38b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_38b840:
    // 0x38b840: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x38b840u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_38b844:
    // 0x38b844: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x38b844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_38b848:
    // 0x38b848: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x38b848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_38b84c:
    // 0x38b84c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x38b84cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_38b850:
    // 0x38b850: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x38b850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_38b854:
    // 0x38b854: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x38b854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_38b858:
    // 0x38b858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b85c:
    // 0x38b85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38b85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b860:
    // 0x38b860: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x38b860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_38b864:
    // 0x38b864: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x38b864u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_38b868:
    // 0x38b868: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x38b868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_38b86c:
    // 0x38b86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38b870:
    // 0x38b870: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x38b870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
label_38b874:
    // 0x38b874: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x38b874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38b878:
    // 0x38b878: 0xc0bb7e6  jal         func_2EDF98
label_38b87c:
    if (ctx->pc == 0x38B87Cu) {
        ctx->pc = 0x38B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B878u;
        // 0x38b87c: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B880u;
        goto label_38b880;
    }
    ctx->pc = 0x38B878u;
    SET_GPR_U32(ctx, 31, 0x38B880u);
    ctx->pc = 0x38B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B878u;
    // 0x38b87c: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x38B878u, 0x38B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B880u;
label_38b880:
    // 0x38b880: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x38b880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
label_38b884:
    // 0x38b884: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x38b884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_38b888:
    // 0x38b888: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x38b888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38b88c:
    // 0x38b88c: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x38b88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
label_38b890:
    // 0x38b890: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x38b890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_38b894:
    // 0x38b894: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x38b894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_38b898:
    // 0x38b898: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x38b898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_38b89c:
    // 0x38b89c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x38b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_38b8a0:
    // 0x38b8a0: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x38b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
label_38b8a4:
    // 0x38b8a4: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
label_38b8a8:
    if (ctx->pc == 0x38B8A8u) {
        ctx->pc = 0x38B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8A4u;
        // 0x38b8a8: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B8ACu;
        goto label_38b8ac;
    }
    ctx->pc = 0x38B8A4u;
    {
        const bool branch_taken_0x38b8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8A4u;
        // 0x38b8a8: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8a4) {
            ctx->pc = 0x38BA14u;
            goto label_38ba14;
        }
    }
    ctx->pc = 0x38B8ACu;
label_38b8ac:
    // 0x38b8ac: 0x8fc2add0  lw          $v0, -0x5230($fp)
    ctx->pc = 0x38b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946256)));
label_38b8b0:
    // 0x38b8b0: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x38b8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_38b8b4:
    // 0x38b8b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_38b8b8:
    if (ctx->pc == 0x38B8B8u) {
        ctx->pc = 0x38B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8B4u;
        // 0x38b8b8: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B8BCu;
        goto label_38b8bc;
    }
    ctx->pc = 0x38B8B4u;
    {
        const bool branch_taken_0x38b8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8B4u;
        // 0x38b8b8: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8b4) {
            ctx->pc = 0x38B8D0u;
            goto label_38b8d0;
        }
    }
    ctx->pc = 0x38B8BCu;
label_38b8bc:
    // 0x38b8bc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_38b8c0:
    if (ctx->pc == 0x38B8C0u) {
        ctx->pc = 0x38B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8BCu;
        // 0x38b8c0: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B8C4u;
        goto label_38b8c4;
    }
    ctx->pc = 0x38B8BCu;
    {
        const bool branch_taken_0x38b8bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8BCu;
        // 0x38b8c0: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8bc) {
            ctx->pc = 0x38B8D0u;
            goto label_38b8d0;
        }
    }
    ctx->pc = 0x38B8C4u;
label_38b8c4:
    // 0x38b8c4: 0xae250030  sw          $a1, 0x30($s1)
    ctx->pc = 0x38b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
label_38b8c8:
    // 0x38b8c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38b8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38b8cc:
    // 0x38b8cc: 0x0  nop
    ctx->pc = 0x38b8ccu;
    // NOP
label_38b8d0:
    // 0x38b8d0: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_38b8d4:
    if (ctx->pc == 0x38B8D4u) {
        ctx->pc = 0x38B8D8u;
        goto label_38b8d8;
    }
    ctx->pc = 0x38B8D0u;
    {
        const bool branch_taken_0x38b8d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b8d0) {
            ctx->pc = 0x38B988u;
            goto label_38b988;
        }
    }
    ctx->pc = 0x38B8D8u;
label_38b8d8:
    // 0x38b8d8: 0x1280002b  beqz        $s4, . + 4 + (0x2B << 2)
label_38b8dc:
    if (ctx->pc == 0x38B8DCu) {
        ctx->pc = 0x38B8E0u;
        goto label_38b8e0;
    }
    ctx->pc = 0x38B8D8u;
    {
        const bool branch_taken_0x38b8d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b8d8) {
            ctx->pc = 0x38B988u;
            goto label_38b988;
        }
    }
    ctx->pc = 0x38B8E0u;
label_38b8e0:
    // 0x38b8e0: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_38b8e4:
    if (ctx->pc == 0x38B8E4u) {
        ctx->pc = 0x38B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8E0u;
        // 0x38b8e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B8E8u;
        goto label_38b8e8;
    }
    ctx->pc = 0x38B8E0u;
    {
        const bool branch_taken_0x38b8e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8E0u;
        // 0x38b8e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8e0) {
            ctx->pc = 0x38B988u;
            goto label_38b988;
        }
    }
    ctx->pc = 0x38B8E8u;
label_38b8e8:
    // 0x38b8e8: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x38b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_38b8ec:
    // 0x38b8ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38b8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38b8f0:
    // 0x38b8f0: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
label_38b8f4:
    if (ctx->pc == 0x38B8F4u) {
        ctx->pc = 0x38B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8F0u;
        // 0x38b8f4: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B8F8u;
        goto label_38b8f8;
    }
    ctx->pc = 0x38B8F0u;
    {
        const bool branch_taken_0x38b8f0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x38B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8F0u;
        // 0x38b8f4: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8f0) {
            ctx->pc = 0x38B938u;
            goto label_38b938;
        }
    }
    ctx->pc = 0x38B8F8u;
label_38b8f8:
    // 0x38b8f8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_38b8fc:
    if (ctx->pc == 0x38B8FCu) {
        ctx->pc = 0x38B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8F8u;
        // 0x38b8fc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B900u;
        goto label_38b900;
    }
    ctx->pc = 0x38B8F8u;
    {
        const bool branch_taken_0x38b8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8F8u;
        // 0x38b8fc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8f8) {
            ctx->pc = 0x38B958u;
            goto label_38b958;
        }
    }
    ctx->pc = 0x38B900u;
label_38b900:
    // 0x38b900: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x38b900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_38b904:
    // 0x38b904: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_38b908:
    if (ctx->pc == 0x38B908u) {
        ctx->pc = 0x38B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B904u;
        // 0x38b908: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B90Cu;
        goto label_38b90c;
    }
    ctx->pc = 0x38B904u;
    {
        const bool branch_taken_0x38b904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b904) {
            ctx->pc = 0x38B908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B904u;
            // 0x38b908: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B93Cu;
            goto label_38b93c;
        }
    }
    ctx->pc = 0x38B90Cu;
label_38b90c:
    // 0x38b90c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38b90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38b910:
    // 0x38b910: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_38b914:
    if (ctx->pc == 0x38B914u) {
        ctx->pc = 0x38B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B910u;
        // 0x38b914: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B918u;
        goto label_38b918;
    }
    ctx->pc = 0x38B910u;
    {
        const bool branch_taken_0x38b910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b910) {
            ctx->pc = 0x38B914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B910u;
            // 0x38b914: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B92Cu;
            goto label_38b92c;
        }
    }
    ctx->pc = 0x38B918u;
label_38b918:
    // 0x38b918: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x38b918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_38b91c:
    // 0x38b91c: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x38b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_38b920:
    // 0x38b920: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38b920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38b924:
    // 0x38b924: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38b924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b928:
    // 0x38b928: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x38b928u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_38b92c:
    // 0x38b92c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x38b92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_38b930:
    // 0x38b930: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38b930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38b934:
    // 0x38b934: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x38b934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_38b938:
    // 0x38b938: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x38b938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_38b93c:
    // 0x38b93c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x38b93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_38b940:
    // 0x38b940: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38b940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38b944:
    // 0x38b944: 0xf2182b  sltu        $v1, $a3, $s2
    ctx->pc = 0x38b944u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_38b948:
    // 0x38b948: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_38b94c:
    if (ctx->pc == 0x38B94Cu) {
        ctx->pc = 0x38B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B948u;
        // 0x38b94c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B950u;
        goto label_38b950;
    }
    ctx->pc = 0x38B948u;
    {
        const bool branch_taken_0x38b948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B948u;
        // 0x38b94c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b948) {
            ctx->pc = 0x38B988u;
            goto label_38b988;
        }
    }
    ctx->pc = 0x38B950u;
label_38b950:
    // 0x38b950: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38b950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38b954:
    // 0x38b954: 0x0  nop
    ctx->pc = 0x38b954u;
    // NOP
label_38b958:
    // 0x38b958: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x38b958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_38b95c:
    // 0x38b95c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x38b95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_38b960:
    // 0x38b960: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38b964:
    // 0x38b964: 0xf2182b  sltu        $v1, $a3, $s2
    ctx->pc = 0x38b964u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_38b968:
    // 0x38b968: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x38b968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_38b96c:
    // 0x38b96c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38b970:
    // 0x38b970: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x38b970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_38b974:
    // 0x38b974: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38b978:
    // 0x38b978: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x38b978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_38b97c:
    // 0x38b97c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38b97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38b980:
    // 0x38b980: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_38b984:
    if (ctx->pc == 0x38B984u) {
        ctx->pc = 0x38B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B980u;
        // 0x38b984: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B988u;
        goto label_38b988;
    }
    ctx->pc = 0x38B980u;
    {
        const bool branch_taken_0x38b980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B980u;
        // 0x38b984: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b980) {
            ctx->pc = 0x38B958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b958;
        }
    }
    ctx->pc = 0x38B988u;
label_38b988:
    // 0x38b988: 0x12c00023  beqz        $s6, . + 4 + (0x23 << 2)
label_38b98c:
    if (ctx->pc == 0x38B98Cu) {
        ctx->pc = 0x38B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B988u;
        // 0x38b98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B990u;
        goto label_38b990;
    }
    ctx->pc = 0x38B988u;
    {
        const bool branch_taken_0x38b988 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B988u;
        // 0x38b98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b988) {
            ctx->pc = 0x38BA18u;
            goto label_38ba18;
        }
    }
    ctx->pc = 0x38B990u;
label_38b990:
    // 0x38b990: 0x1ac00021  blez        $s6, . + 4 + (0x21 << 2)
label_38b994:
    if (ctx->pc == 0x38B994u) {
        ctx->pc = 0x38B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B990u;
        // 0x38b994: 0xae25002c  sw          $a1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B998u;
        goto label_38b998;
    }
    ctx->pc = 0x38B990u;
    {
        const bool branch_taken_0x38b990 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x38B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B990u;
        // 0x38b994: 0xae25002c  sw          $a1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b990) {
            ctx->pc = 0x38BA18u;
            goto label_38ba18;
        }
    }
    ctx->pc = 0x38B998u;
label_38b998:
    // 0x38b998: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x38b998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38b99c:
    // 0x38b99c: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x38b99cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_38b9a0:
    // 0x38b9a0: 0x51023  negu        $v0, $a1
    ctx->pc = 0x38b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_38b9a4:
    // 0x38b9a4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x38b9a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_38b9a8:
    // 0x38b9a8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x38b9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38b9ac:
    // 0x38b9ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_38b9b0:
    if (ctx->pc == 0x38B9B0u) {
        ctx->pc = 0x38B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9ACu;
        // 0x38b9b0: 0x24e30006  addiu       $v1, $a3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B9B4u;
        goto label_38b9b4;
    }
    ctx->pc = 0x38B9ACu;
    {
        const bool branch_taken_0x38b9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9ACu;
        // 0x38b9b0: 0x24e30006  addiu       $v1, $a3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9ac) {
            ctx->pc = 0x38B9F0u;
            goto label_38b9f0;
        }
    }
    ctx->pc = 0x38B9B4u;
label_38b9b4:
    // 0x38b9b4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x38b9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_38b9b8:
    // 0x38b9b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38b9bc:
    if (ctx->pc == 0x38B9BCu) {
        ctx->pc = 0x38B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9B8u;
        // 0x38b9bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B9C0u;
        goto label_38b9c0;
    }
    ctx->pc = 0x38B9B8u;
    {
        const bool branch_taken_0x38b9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9B8u;
        // 0x38b9bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9b8) {
            ctx->pc = 0x38B9E0u;
            goto label_38b9e0;
        }
    }
    ctx->pc = 0x38B9C0u;
label_38b9c0:
    // 0x38b9c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_38b9c4:
    if (ctx->pc == 0x38B9C4u) {
        ctx->pc = 0x38B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9C0u;
        // 0x38b9c4: 0xa4660000  sh          $a2, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B9C8u;
        goto label_38b9c8;
    }
    ctx->pc = 0x38B9C0u;
    {
        const bool branch_taken_0x38b9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b9c0) {
            ctx->pc = 0x38B9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B9C0u;
            // 0x38b9c4: 0xa4660000  sh          $a2, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B9D8u;
            goto label_38b9d8;
        }
    }
    ctx->pc = 0x38B9C8u;
label_38b9c8:
    // 0x38b9c8: 0xa4e60006  sh          $a2, 0x6($a3)
    ctx->pc = 0x38b9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 6));
label_38b9cc:
    // 0x38b9cc: 0x24e3000e  addiu       $v1, $a3, 0xE
    ctx->pc = 0x38b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
label_38b9d0:
    // 0x38b9d0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x38b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38b9d4:
    // 0x38b9d4: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x38b9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
label_38b9d8:
    // 0x38b9d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x38b9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38b9dc:
    // 0x38b9dc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x38b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_38b9e0:
    // 0x38b9e0: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x38b9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
label_38b9e4:
    // 0x38b9e4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x38b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38b9e8:
    // 0x38b9e8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_38b9ec:
    if (ctx->pc == 0x38B9ECu) {
        ctx->pc = 0x38B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9E8u;
        // 0x38b9ec: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B9F0u;
        goto label_38b9f0;
    }
    ctx->pc = 0x38B9E8u;
    {
        const bool branch_taken_0x38b9e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9E8u;
        // 0x38b9ec: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9e8) {
            ctx->pc = 0x38BA14u;
            goto label_38ba14;
        }
    }
    ctx->pc = 0x38B9F0u;
label_38b9f0:
    // 0x38b9f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x38b9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38b9f4:
    // 0x38b9f4: 0x0  nop
    ctx->pc = 0x38b9f4u;
    // NOP
label_38b9f8:
    // 0x38b9f8: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x38b9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_38b9fc:
    // 0x38b9fc: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x38b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_38ba00:
    // 0x38ba00: 0xa4460008  sh          $a2, 0x8($v0)
    ctx->pc = 0x38ba00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 6));
label_38ba04:
    // 0x38ba04: 0xa4460010  sh          $a2, 0x10($v0)
    ctx->pc = 0x38ba04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 6));
label_38ba08:
    // 0x38ba08: 0xa4460018  sh          $a2, 0x18($v0)
    ctx->pc = 0x38ba08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 6));
label_38ba0c:
    // 0x38ba0c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_38ba10:
    if (ctx->pc == 0x38BA10u) {
        ctx->pc = 0x38BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA0Cu;
        // 0x38ba10: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA14u;
        goto label_38ba14;
    }
    ctx->pc = 0x38BA0Cu;
    {
        const bool branch_taken_0x38ba0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA0Cu;
        // 0x38ba10: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba0c) {
            ctx->pc = 0x38B9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b9f8;
        }
    }
    ctx->pc = 0x38BA14u;
label_38ba14:
    // 0x38ba14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ba14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ba18:
    // 0x38ba18: 0xc0e2b06  jal         func_38AC18
label_38ba1c:
    if (ctx->pc == 0x38BA1Cu) {
        ctx->pc = 0x38BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA18u;
        // 0x38ba1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA20u;
        goto label_38ba20;
    }
    ctx->pc = 0x38BA18u;
    SET_GPR_U32(ctx, 31, 0x38BA20u);
    ctx->pc = 0x38BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA18u;
    // 0x38ba1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AC18u, 0x38BA18u, 0x38BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA20u;
label_38ba20:
    // 0x38ba20: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_38ba24:
    if (ctx->pc == 0x38BA24u) {
        ctx->pc = 0x38BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA20u;
        // 0x38ba24: 0x27c4add0  addiu       $a0, $fp, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA28u;
        goto label_38ba28;
    }
    ctx->pc = 0x38BA20u;
    {
        const bool branch_taken_0x38ba20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x38BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA20u;
        // 0x38ba24: 0x27c4add0  addiu       $a0, $fp, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba20) {
            ctx->pc = 0x38BA38u;
            goto label_38ba38;
        }
    }
    ctx->pc = 0x38BA28u;
label_38ba28:
    // 0x38ba28: 0xc104c80  jal         func_413200
label_38ba2c:
    if (ctx->pc == 0x38BA2Cu) {
        ctx->pc = 0x38BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA28u;
        // 0x38ba2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA30u;
        goto label_38ba30;
    }
    ctx->pc = 0x38BA28u;
    SET_GPR_U32(ctx, 31, 0x38BA30u);
    ctx->pc = 0x38BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA28u;
    // 0x38ba2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x38BA28u, 0x38BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA30u;
label_38ba30:
    // 0x38ba30: 0x10000009  b           . + 4 + (0x9 << 2)
label_38ba34:
    if (ctx->pc == 0x38BA34u) {
        ctx->pc = 0x38BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA30u;
        // 0x38ba34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA38u;
        goto label_38ba38;
    }
    ctx->pc = 0x38BA30u;
    {
        const bool branch_taken_0x38ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA30u;
        // 0x38ba34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba30) {
            ctx->pc = 0x38BA58u;
            goto label_38ba58;
        }
    }
    ctx->pc = 0x38BA38u;
label_38ba38:
    // 0x38ba38: 0xc0e3da0  jal         func_38F680
label_38ba3c:
    if (ctx->pc == 0x38BA3Cu) {
        ctx->pc = 0x38BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA38u;
        // 0x38ba3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA40u;
        goto label_38ba40;
    }
    ctx->pc = 0x38BA38u;
    SET_GPR_U32(ctx, 31, 0x38BA40u);
    ctx->pc = 0x38BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA38u;
    // 0x38ba3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38BA38u, 0x38BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA40u;
label_38ba40:
    // 0x38ba40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38ba44:
    // 0x38ba44: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x38ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38ba48:
    // 0x38ba48: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x38ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_38ba4c:
    // 0x38ba4c: 0x40f809  jalr        $v0
label_38ba50:
    if (ctx->pc == 0x38BA50u) {
        ctx->pc = 0x38BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA4Cu;
        // 0x38ba50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA54u;
        goto label_38ba54;
    }
    ctx->pc = 0x38BA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BA54u);
        ctx->pc = 0x38BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA4Cu;
        // 0x38ba50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BA4Cu, 0x38BA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BA54u;
label_38ba54:
    // 0x38ba54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38ba54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ba58:
    // 0x38ba58: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x38ba58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38ba5c:
    // 0x38ba5c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x38ba5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38ba60:
    // 0x38ba60: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x38ba60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38ba64:
    // 0x38ba64: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x38ba64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38ba68:
    // 0x38ba68: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x38ba68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38ba6c:
    // 0x38ba6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38ba6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38ba70:
    // 0x38ba70: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x38ba70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38ba74:
    // 0x38ba74: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x38ba74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ba78:
    // 0x38ba78: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x38ba78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38ba7c:
    // 0x38ba7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38ba80:
    // 0x38ba80: 0x3e00008  jr          $ra
label_38ba84:
    if (ctx->pc == 0x38BA84u) {
        ctx->pc = 0x38BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA80u;
        // 0x38ba84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA88u;
        goto label_fallthrough_0x38ba80;
    }
    ctx->pc = 0x38BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA80u;
        // 0x38ba84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38ba80:
    ctx->pc = 0x38BA88u;
}
