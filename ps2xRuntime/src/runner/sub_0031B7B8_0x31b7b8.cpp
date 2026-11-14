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

// Function: sub_0031B7B8
// Address: 0x31b7b8 - 0x31bb90
void sub_0031B7B8_0x31b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B7B8_0x31b7b8");
#endif

    switch (ctx->pc) {
        case 0x31b7b8u: goto label_31b7b8;
        case 0x31b7bcu: goto label_31b7bc;
        case 0x31b7c0u: goto label_31b7c0;
        case 0x31b7c4u: goto label_31b7c4;
        case 0x31b7c8u: goto label_31b7c8;
        case 0x31b7ccu: goto label_31b7cc;
        case 0x31b7d0u: goto label_31b7d0;
        case 0x31b7d4u: goto label_31b7d4;
        case 0x31b7d8u: goto label_31b7d8;
        case 0x31b7dcu: goto label_31b7dc;
        case 0x31b7e0u: goto label_31b7e0;
        case 0x31b7e4u: goto label_31b7e4;
        case 0x31b7e8u: goto label_31b7e8;
        case 0x31b7ecu: goto label_31b7ec;
        case 0x31b7f0u: goto label_31b7f0;
        case 0x31b7f4u: goto label_31b7f4;
        case 0x31b7f8u: goto label_31b7f8;
        case 0x31b7fcu: goto label_31b7fc;
        case 0x31b800u: goto label_31b800;
        case 0x31b804u: goto label_31b804;
        case 0x31b808u: goto label_31b808;
        case 0x31b80cu: goto label_31b80c;
        case 0x31b810u: goto label_31b810;
        case 0x31b814u: goto label_31b814;
        case 0x31b818u: goto label_31b818;
        case 0x31b81cu: goto label_31b81c;
        case 0x31b820u: goto label_31b820;
        case 0x31b824u: goto label_31b824;
        case 0x31b828u: goto label_31b828;
        case 0x31b82cu: goto label_31b82c;
        case 0x31b830u: goto label_31b830;
        case 0x31b834u: goto label_31b834;
        case 0x31b838u: goto label_31b838;
        case 0x31b83cu: goto label_31b83c;
        case 0x31b840u: goto label_31b840;
        case 0x31b844u: goto label_31b844;
        case 0x31b848u: goto label_31b848;
        case 0x31b84cu: goto label_31b84c;
        case 0x31b850u: goto label_31b850;
        case 0x31b854u: goto label_31b854;
        case 0x31b858u: goto label_31b858;
        case 0x31b85cu: goto label_31b85c;
        case 0x31b860u: goto label_31b860;
        case 0x31b864u: goto label_31b864;
        case 0x31b868u: goto label_31b868;
        case 0x31b86cu: goto label_31b86c;
        case 0x31b870u: goto label_31b870;
        case 0x31b874u: goto label_31b874;
        case 0x31b878u: goto label_31b878;
        case 0x31b87cu: goto label_31b87c;
        case 0x31b880u: goto label_31b880;
        case 0x31b884u: goto label_31b884;
        case 0x31b888u: goto label_31b888;
        case 0x31b88cu: goto label_31b88c;
        case 0x31b890u: goto label_31b890;
        case 0x31b894u: goto label_31b894;
        case 0x31b898u: goto label_31b898;
        case 0x31b89cu: goto label_31b89c;
        case 0x31b8a0u: goto label_31b8a0;
        case 0x31b8a4u: goto label_31b8a4;
        case 0x31b8a8u: goto label_31b8a8;
        case 0x31b8acu: goto label_31b8ac;
        case 0x31b8b0u: goto label_31b8b0;
        case 0x31b8b4u: goto label_31b8b4;
        case 0x31b8b8u: goto label_31b8b8;
        case 0x31b8bcu: goto label_31b8bc;
        case 0x31b8c0u: goto label_31b8c0;
        case 0x31b8c4u: goto label_31b8c4;
        case 0x31b8c8u: goto label_31b8c8;
        case 0x31b8ccu: goto label_31b8cc;
        case 0x31b8d0u: goto label_31b8d0;
        case 0x31b8d4u: goto label_31b8d4;
        case 0x31b8d8u: goto label_31b8d8;
        case 0x31b8dcu: goto label_31b8dc;
        case 0x31b8e0u: goto label_31b8e0;
        case 0x31b8e4u: goto label_31b8e4;
        case 0x31b8e8u: goto label_31b8e8;
        case 0x31b8ecu: goto label_31b8ec;
        case 0x31b8f0u: goto label_31b8f0;
        case 0x31b8f4u: goto label_31b8f4;
        case 0x31b8f8u: goto label_31b8f8;
        case 0x31b8fcu: goto label_31b8fc;
        case 0x31b900u: goto label_31b900;
        case 0x31b904u: goto label_31b904;
        case 0x31b908u: goto label_31b908;
        case 0x31b90cu: goto label_31b90c;
        case 0x31b910u: goto label_31b910;
        case 0x31b914u: goto label_31b914;
        case 0x31b918u: goto label_31b918;
        case 0x31b91cu: goto label_31b91c;
        case 0x31b920u: goto label_31b920;
        case 0x31b924u: goto label_31b924;
        case 0x31b928u: goto label_31b928;
        case 0x31b92cu: goto label_31b92c;
        case 0x31b930u: goto label_31b930;
        case 0x31b934u: goto label_31b934;
        case 0x31b938u: goto label_31b938;
        case 0x31b93cu: goto label_31b93c;
        case 0x31b940u: goto label_31b940;
        case 0x31b944u: goto label_31b944;
        case 0x31b948u: goto label_31b948;
        case 0x31b94cu: goto label_31b94c;
        case 0x31b950u: goto label_31b950;
        case 0x31b954u: goto label_31b954;
        case 0x31b958u: goto label_31b958;
        case 0x31b95cu: goto label_31b95c;
        case 0x31b960u: goto label_31b960;
        case 0x31b964u: goto label_31b964;
        case 0x31b968u: goto label_31b968;
        case 0x31b96cu: goto label_31b96c;
        case 0x31b970u: goto label_31b970;
        case 0x31b974u: goto label_31b974;
        case 0x31b978u: goto label_31b978;
        case 0x31b97cu: goto label_31b97c;
        case 0x31b980u: goto label_31b980;
        case 0x31b984u: goto label_31b984;
        case 0x31b988u: goto label_31b988;
        case 0x31b98cu: goto label_31b98c;
        case 0x31b990u: goto label_31b990;
        case 0x31b994u: goto label_31b994;
        case 0x31b998u: goto label_31b998;
        case 0x31b99cu: goto label_31b99c;
        case 0x31b9a0u: goto label_31b9a0;
        case 0x31b9a4u: goto label_31b9a4;
        case 0x31b9a8u: goto label_31b9a8;
        case 0x31b9acu: goto label_31b9ac;
        case 0x31b9b0u: goto label_31b9b0;
        case 0x31b9b4u: goto label_31b9b4;
        case 0x31b9b8u: goto label_31b9b8;
        case 0x31b9bcu: goto label_31b9bc;
        case 0x31b9c0u: goto label_31b9c0;
        case 0x31b9c4u: goto label_31b9c4;
        case 0x31b9c8u: goto label_31b9c8;
        case 0x31b9ccu: goto label_31b9cc;
        case 0x31b9d0u: goto label_31b9d0;
        case 0x31b9d4u: goto label_31b9d4;
        case 0x31b9d8u: goto label_31b9d8;
        case 0x31b9dcu: goto label_31b9dc;
        case 0x31b9e0u: goto label_31b9e0;
        case 0x31b9e4u: goto label_31b9e4;
        case 0x31b9e8u: goto label_31b9e8;
        case 0x31b9ecu: goto label_31b9ec;
        case 0x31b9f0u: goto label_31b9f0;
        case 0x31b9f4u: goto label_31b9f4;
        case 0x31b9f8u: goto label_31b9f8;
        case 0x31b9fcu: goto label_31b9fc;
        case 0x31ba00u: goto label_31ba00;
        case 0x31ba04u: goto label_31ba04;
        case 0x31ba08u: goto label_31ba08;
        case 0x31ba0cu: goto label_31ba0c;
        case 0x31ba10u: goto label_31ba10;
        case 0x31ba14u: goto label_31ba14;
        case 0x31ba18u: goto label_31ba18;
        case 0x31ba1cu: goto label_31ba1c;
        case 0x31ba20u: goto label_31ba20;
        case 0x31ba24u: goto label_31ba24;
        case 0x31ba28u: goto label_31ba28;
        case 0x31ba2cu: goto label_31ba2c;
        case 0x31ba30u: goto label_31ba30;
        case 0x31ba34u: goto label_31ba34;
        case 0x31ba38u: goto label_31ba38;
        case 0x31ba3cu: goto label_31ba3c;
        case 0x31ba40u: goto label_31ba40;
        case 0x31ba44u: goto label_31ba44;
        case 0x31ba48u: goto label_31ba48;
        case 0x31ba4cu: goto label_31ba4c;
        case 0x31ba50u: goto label_31ba50;
        case 0x31ba54u: goto label_31ba54;
        case 0x31ba58u: goto label_31ba58;
        case 0x31ba5cu: goto label_31ba5c;
        case 0x31ba60u: goto label_31ba60;
        case 0x31ba64u: goto label_31ba64;
        case 0x31ba68u: goto label_31ba68;
        case 0x31ba6cu: goto label_31ba6c;
        case 0x31ba70u: goto label_31ba70;
        case 0x31ba74u: goto label_31ba74;
        case 0x31ba78u: goto label_31ba78;
        case 0x31ba7cu: goto label_31ba7c;
        case 0x31ba80u: goto label_31ba80;
        case 0x31ba84u: goto label_31ba84;
        case 0x31ba88u: goto label_31ba88;
        case 0x31ba8cu: goto label_31ba8c;
        case 0x31ba90u: goto label_31ba90;
        case 0x31ba94u: goto label_31ba94;
        case 0x31ba98u: goto label_31ba98;
        case 0x31ba9cu: goto label_31ba9c;
        case 0x31baa0u: goto label_31baa0;
        case 0x31baa4u: goto label_31baa4;
        case 0x31baa8u: goto label_31baa8;
        case 0x31baacu: goto label_31baac;
        case 0x31bab0u: goto label_31bab0;
        case 0x31bab4u: goto label_31bab4;
        case 0x31bab8u: goto label_31bab8;
        case 0x31babcu: goto label_31babc;
        case 0x31bac0u: goto label_31bac0;
        case 0x31bac4u: goto label_31bac4;
        case 0x31bac8u: goto label_31bac8;
        case 0x31baccu: goto label_31bacc;
        case 0x31bad0u: goto label_31bad0;
        case 0x31bad4u: goto label_31bad4;
        case 0x31bad8u: goto label_31bad8;
        case 0x31badcu: goto label_31badc;
        case 0x31bae0u: goto label_31bae0;
        case 0x31bae4u: goto label_31bae4;
        case 0x31bae8u: goto label_31bae8;
        case 0x31baecu: goto label_31baec;
        case 0x31baf0u: goto label_31baf0;
        case 0x31baf4u: goto label_31baf4;
        case 0x31baf8u: goto label_31baf8;
        case 0x31bafcu: goto label_31bafc;
        case 0x31bb00u: goto label_31bb00;
        case 0x31bb04u: goto label_31bb04;
        case 0x31bb08u: goto label_31bb08;
        case 0x31bb0cu: goto label_31bb0c;
        case 0x31bb10u: goto label_31bb10;
        case 0x31bb14u: goto label_31bb14;
        case 0x31bb18u: goto label_31bb18;
        case 0x31bb1cu: goto label_31bb1c;
        case 0x31bb20u: goto label_31bb20;
        case 0x31bb24u: goto label_31bb24;
        case 0x31bb28u: goto label_31bb28;
        case 0x31bb2cu: goto label_31bb2c;
        case 0x31bb30u: goto label_31bb30;
        case 0x31bb34u: goto label_31bb34;
        case 0x31bb38u: goto label_31bb38;
        case 0x31bb3cu: goto label_31bb3c;
        case 0x31bb40u: goto label_31bb40;
        case 0x31bb44u: goto label_31bb44;
        case 0x31bb48u: goto label_31bb48;
        case 0x31bb4cu: goto label_31bb4c;
        case 0x31bb50u: goto label_31bb50;
        case 0x31bb54u: goto label_31bb54;
        case 0x31bb58u: goto label_31bb58;
        case 0x31bb5cu: goto label_31bb5c;
        case 0x31bb60u: goto label_31bb60;
        case 0x31bb64u: goto label_31bb64;
        case 0x31bb68u: goto label_31bb68;
        case 0x31bb6cu: goto label_31bb6c;
        case 0x31bb70u: goto label_31bb70;
        case 0x31bb74u: goto label_31bb74;
        case 0x31bb78u: goto label_31bb78;
        case 0x31bb7cu: goto label_31bb7c;
        case 0x31bb80u: goto label_31bb80;
        case 0x31bb84u: goto label_31bb84;
        case 0x31bb88u: goto label_31bb88;
        case 0x31bb8cu: goto label_31bb8c;
        default: break;
    }

    ctx->pc = 0x31b7b8u;

label_31b7b8:
    // 0x31b7b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x31b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_31b7bc:
    // 0x31b7bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31b7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b7c0:
    // 0x31b7c0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x31b7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_31b7c4:
    // 0x31b7c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x31b7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31b7c8:
    // 0x31b7c8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x31b7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_31b7cc:
    // 0x31b7cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31b7ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31b7d0:
    // 0x31b7d0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x31b7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_31b7d4:
    // 0x31b7d4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x31b7d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b7d8:
    // 0x31b7d8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x31b7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_31b7dc:
    // 0x31b7dc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x31b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_31b7e0:
    // 0x31b7e0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x31b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_31b7e4:
    // 0x31b7e4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x31b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_31b7e8:
    // 0x31b7e8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x31b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_31b7ec:
    // 0x31b7ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_31b7f0:
    // 0x31b7f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_31b7f4:
    // 0x31b7f4: 0xc103322  jal         func_40CC88
label_31b7f8:
    if (ctx->pc == 0x31B7F8u) {
        ctx->pc = 0x31B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F4u;
        // 0x31b7f8: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B7FCu;
        goto label_31b7fc;
    }
    ctx->pc = 0x31B7F4u;
    SET_GPR_U32(ctx, 31, 0x31B7FCu);
    ctx->pc = 0x31B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7F4u;
    // 0x31b7f8: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x31B7F4u, 0x31B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7FCu;
label_31b7fc:
    // 0x31b7fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_31b800:
    if (ctx->pc == 0x31B800u) {
        ctx->pc = 0x31B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7FCu;
        // 0x31b800: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B804u;
        goto label_31b804;
    }
    ctx->pc = 0x31B7FCu;
    {
        const bool branch_taken_0x31b7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7FCu;
        // 0x31b800: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7fc) {
            ctx->pc = 0x31B880u;
            goto label_31b880;
        }
    }
    ctx->pc = 0x31B804u;
label_31b804:
    // 0x31b804: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x31b804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_31b808:
    // 0x31b808: 0xc103468  jal         func_40D1A0
label_31b80c:
    if (ctx->pc == 0x31B80Cu) {
        ctx->pc = 0x31B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B808u;
        // 0x31b80c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B810u;
        goto label_31b810;
    }
    ctx->pc = 0x31B808u;
    SET_GPR_U32(ctx, 31, 0x31B810u);
    ctx->pc = 0x31B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B808u;
    // 0x31b80c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31B808u, 0x31B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B810u;
label_31b810:
    // 0x31b810: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_31b814:
    if (ctx->pc == 0x31B814u) {
        ctx->pc = 0x31B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B810u;
        // 0x31b814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B818u;
        goto label_31b818;
    }
    ctx->pc = 0x31B810u;
    {
        const bool branch_taken_0x31b810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B810u;
        // 0x31b814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b810) {
            ctx->pc = 0x31B880u;
            goto label_31b880;
        }
    }
    ctx->pc = 0x31B818u;
label_31b818:
    // 0x31b818: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x31b818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_31b81c:
    // 0x31b81c: 0xc103468  jal         func_40D1A0
label_31b820:
    if (ctx->pc == 0x31B820u) {
        ctx->pc = 0x31B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B81Cu;
        // 0x31b820: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B824u;
        goto label_31b824;
    }
    ctx->pc = 0x31B81Cu;
    SET_GPR_U32(ctx, 31, 0x31B824u);
    ctx->pc = 0x31B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B81Cu;
    // 0x31b820: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31B81Cu, 0x31B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B824u;
label_31b824:
    // 0x31b824: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_31b828:
    if (ctx->pc == 0x31B828u) {
        ctx->pc = 0x31B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B824u;
        // 0x31b828: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B82Cu;
        goto label_31b82c;
    }
    ctx->pc = 0x31B824u;
    {
        const bool branch_taken_0x31b824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B824u;
        // 0x31b828: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b824) {
            ctx->pc = 0x31B880u;
            goto label_31b880;
        }
    }
    ctx->pc = 0x31B82Cu;
label_31b82c:
    // 0x31b82c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_31b830:
    // 0x31b830: 0xc103468  jal         func_40D1A0
label_31b834:
    if (ctx->pc == 0x31B834u) {
        ctx->pc = 0x31B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B830u;
        // 0x31b834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B838u;
        goto label_31b838;
    }
    ctx->pc = 0x31B830u;
    SET_GPR_U32(ctx, 31, 0x31B838u);
    ctx->pc = 0x31B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B830u;
    // 0x31b834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31B830u, 0x31B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B838u;
label_31b838:
    // 0x31b838: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_31b83c:
    if (ctx->pc == 0x31B83Cu) {
        ctx->pc = 0x31B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B838u;
        // 0x31b83c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B840u;
        goto label_31b840;
    }
    ctx->pc = 0x31B838u;
    {
        const bool branch_taken_0x31b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B838u;
        // 0x31b83c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b838) {
            ctx->pc = 0x31B880u;
            goto label_31b880;
        }
    }
    ctx->pc = 0x31B840u;
label_31b840:
    // 0x31b840: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x31b840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_31b844:
    // 0x31b844: 0xc103468  jal         func_40D1A0
label_31b848:
    if (ctx->pc == 0x31B848u) {
        ctx->pc = 0x31B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B844u;
        // 0x31b848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B84Cu;
        goto label_31b84c;
    }
    ctx->pc = 0x31B844u;
    SET_GPR_U32(ctx, 31, 0x31B84Cu);
    ctx->pc = 0x31B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B844u;
    // 0x31b848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31B844u, 0x31B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B84Cu;
label_31b84c:
    // 0x31b84c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_31b850:
    if (ctx->pc == 0x31B850u) {
        ctx->pc = 0x31B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B84Cu;
        // 0x31b850: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B854u;
        goto label_31b854;
    }
    ctx->pc = 0x31B84Cu;
    {
        const bool branch_taken_0x31b84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B84Cu;
        // 0x31b850: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b84c) {
            ctx->pc = 0x31B880u;
            goto label_31b880;
        }
    }
    ctx->pc = 0x31B854u;
label_31b854:
    // 0x31b854: 0x2c420101  sltiu       $v0, $v0, 0x101
    ctx->pc = 0x31b854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_31b858:
    // 0x31b858: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_31b85c:
    if (ctx->pc == 0x31B85Cu) {
        ctx->pc = 0x31B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B858u;
        // 0x31b85c: 0x8fb10040  lw          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B860u;
        goto label_31b860;
    }
    ctx->pc = 0x31B858u;
    {
        const bool branch_taken_0x31b858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B858u;
        // 0x31b85c: 0x8fb10040  lw          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b858) {
            ctx->pc = 0x31B888u;
            goto label_31b888;
        }
    }
    ctx->pc = 0x31B860u;
label_31b860:
    // 0x31b860: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31b864:
    // 0x31b864: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31b864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31b868:
    // 0x31b868: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31b868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31b86c:
    // 0x31b86c: 0xc1035f6  jal         func_40D7D8
label_31b870:
    if (ctx->pc == 0x31B870u) {
        ctx->pc = 0x31B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B86Cu;
        // 0x31b870: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B874u;
        goto label_31b874;
    }
    ctx->pc = 0x31B86Cu;
    SET_GPR_U32(ctx, 31, 0x31B874u);
    ctx->pc = 0x31B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B86Cu;
    // 0x31b870: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31B86Cu, 0x31B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B874u;
label_31b874:
    // 0x31b874: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31b878:
    // 0x31b878: 0xc103628  jal         func_40D8A0
label_31b87c:
    if (ctx->pc == 0x31B87Cu) {
        ctx->pc = 0x31B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B878u;
        // 0x31b87c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B880u;
        goto label_31b880;
    }
    ctx->pc = 0x31B878u;
    SET_GPR_U32(ctx, 31, 0x31B880u);
    ctx->pc = 0x31B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B878u;
    // 0x31b87c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31B878u, 0x31B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B880u;
label_31b880:
    // 0x31b880: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_31b884:
    if (ctx->pc == 0x31B884u) {
        ctx->pc = 0x31B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B880u;
        // 0x31b884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B888u;
        goto label_31b888;
    }
    ctx->pc = 0x31B880u;
    {
        const bool branch_taken_0x31b880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B880u;
        // 0x31b884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b880) {
            ctx->pc = 0x31BB5Cu;
            goto label_31bb5c;
        }
    }
    ctx->pc = 0x31B888u;
label_31b888:
    // 0x31b888: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x31b888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31b88c:
    // 0x31b88c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x31b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_31b890:
    // 0x31b890: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31b890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31b894:
    // 0x31b894: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x31b894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_31b898:
    // 0x31b898: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x31b898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_31b89c:
    // 0x31b89c: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x31b89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_31b8a0:
    // 0x31b8a0: 0x34a5001e  ori         $a1, $a1, 0x1E
    ctx->pc = 0x31b8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30);
label_31b8a4:
    // 0x31b8a4: 0x40f809  jalr        $v0
label_31b8a8:
    if (ctx->pc == 0x31B8A8u) {
        ctx->pc = 0x31B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8A4u;
        // 0x31b8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8ACu;
        goto label_31b8ac;
    }
    ctx->pc = 0x31B8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B8ACu);
        ctx->pc = 0x31B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8A4u;
        // 0x31b8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B8A4u, 0x31B8ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B8ACu;
label_31b8ac:
    // 0x31b8ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31b8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b8b0:
    // 0x31b8b0: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
label_31b8b4:
    if (ctx->pc == 0x31B8B4u) {
        ctx->pc = 0x31B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8B0u;
        // 0x31b8b4: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8B8u;
        goto label_31b8b8;
    }
    ctx->pc = 0x31B8B0u;
    {
        const bool branch_taken_0x31b8b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8B0u;
        // 0x31b8b4: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8b0) {
            ctx->pc = 0x31B8E8u;
            goto label_31b8e8;
        }
    }
    ctx->pc = 0x31B8B8u;
label_31b8b8:
    // 0x31b8b8: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31b8bc:
    // 0x31b8bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31b8c0:
    // 0x31b8c0: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x31b8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_31b8c4:
    // 0x31b8c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x31b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_31b8c8:
    // 0x31b8c8: 0xc1035f6  jal         func_40D7D8
label_31b8cc:
    if (ctx->pc == 0x31B8CCu) {
        ctx->pc = 0x31B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8C8u;
        // 0x31b8cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8D0u;
        goto label_31b8d0;
    }
    ctx->pc = 0x31B8C8u;
    SET_GPR_U32(ctx, 31, 0x31B8D0u);
    ctx->pc = 0x31B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8C8u;
    // 0x31b8cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31B8C8u, 0x31B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8D0u;
label_31b8d0:
    // 0x31b8d0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x31b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_31b8d4:
    // 0x31b8d4: 0xc103628  jal         func_40D8A0
label_31b8d8:
    if (ctx->pc == 0x31B8D8u) {
        ctx->pc = 0x31B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8D4u;
        // 0x31b8d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8DCu;
        goto label_31b8dc;
    }
    ctx->pc = 0x31B8D4u;
    SET_GPR_U32(ctx, 31, 0x31B8DCu);
    ctx->pc = 0x31B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8D4u;
    // 0x31b8d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31B8D4u, 0x31B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8DCu;
label_31b8dc:
    // 0x31b8dc: 0x10000030  b           . + 4 + (0x30 << 2)
label_31b8e0:
    if (ctx->pc == 0x31B8E0u) {
        ctx->pc = 0x31B8E4u;
        goto label_31b8e4;
    }
    ctx->pc = 0x31B8DCu;
    {
        const bool branch_taken_0x31b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b8dc) {
            ctx->pc = 0x31B9A0u;
            goto label_31b9a0;
        }
    }
    ctx->pc = 0x31B8E4u;
label_31b8e4:
    // 0x31b8e4: 0x0  nop
    ctx->pc = 0x31b8e4u;
    // NOP
label_31b8e8:
    // 0x31b8e8: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x31b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
label_31b8ec:
    // 0x31b8ec: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x31b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_31b8f0:
    // 0x31b8f0: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_31b8f4:
    if (ctx->pc == 0x31B8F4u) {
        ctx->pc = 0x31B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8F0u;
        // 0x31b8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8F8u;
        goto label_31b8f8;
    }
    ctx->pc = 0x31B8F0u;
    {
        const bool branch_taken_0x31b8f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8F0u;
        // 0x31b8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8f0) {
            ctx->pc = 0x31B99Cu;
            goto label_31b99c;
        }
    }
    ctx->pc = 0x31B8F8u;
label_31b8f8:
    // 0x31b8f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31b8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b8fc:
    // 0x31b8fc: 0x32240003  andi        $a0, $s1, 0x3
    ctx->pc = 0x31b8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_31b900:
    // 0x31b900: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
label_31b904:
    if (ctx->pc == 0x31B904u) {
        ctx->pc = 0x31B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B900u;
        // 0x31b904: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B908u;
        goto label_31b908;
    }
    ctx->pc = 0x31B900u;
    {
        const bool branch_taken_0x31b900 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x31B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B900u;
        // 0x31b904: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b900) {
            ctx->pc = 0x31B948u;
            goto label_31b948;
        }
    }
    ctx->pc = 0x31B908u;
label_31b908:
    // 0x31b908: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_31b90c:
    if (ctx->pc == 0x31B90Cu) {
        ctx->pc = 0x31B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B908u;
        // 0x31b90c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B910u;
        goto label_31b910;
    }
    ctx->pc = 0x31B908u;
    {
        const bool branch_taken_0x31b908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B908u;
        // 0x31b90c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b908) {
            ctx->pc = 0x31B968u;
            goto label_31b968;
        }
    }
    ctx->pc = 0x31B910u;
label_31b910:
    // 0x31b910: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x31b910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_31b914:
    // 0x31b914: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_31b918:
    if (ctx->pc == 0x31B918u) {
        ctx->pc = 0x31B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B914u;
        // 0x31b918: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B91Cu;
        goto label_31b91c;
    }
    ctx->pc = 0x31B914u;
    {
        const bool branch_taken_0x31b914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b914) {
            ctx->pc = 0x31B918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B914u;
            // 0x31b918: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B94Cu;
            goto label_31b94c;
        }
    }
    ctx->pc = 0x31B91Cu;
label_31b91c:
    // 0x31b91c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x31b91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_31b920:
    // 0x31b920: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_31b924:
    if (ctx->pc == 0x31B924u) {
        ctx->pc = 0x31B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B920u;
        // 0x31b924: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B928u;
        goto label_31b928;
    }
    ctx->pc = 0x31B920u;
    {
        const bool branch_taken_0x31b920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b920) {
            ctx->pc = 0x31B924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B920u;
            // 0x31b924: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B93Cu;
            goto label_31b93c;
        }
    }
    ctx->pc = 0x31B928u;
label_31b928:
    // 0x31b928: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x31b928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_31b92c:
    // 0x31b92c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x31b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_31b930:
    // 0x31b930: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x31b930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_31b934:
    // 0x31b934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31b934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b938:
    // 0x31b938: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31b938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31b93c:
    // 0x31b93c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31b940:
    // 0x31b940: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31b940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_31b944:
    // 0x31b944: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31b944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_31b948:
    // 0x31b948: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31b948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31b94c:
    // 0x31b94c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31b950:
    // 0x31b950: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31b950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_31b954:
    // 0x31b954: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x31b954u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_31b958:
    // 0x31b958: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_31b95c:
    if (ctx->pc == 0x31B95Cu) {
        ctx->pc = 0x31B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B958u;
        // 0x31b95c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B960u;
        goto label_31b960;
    }
    ctx->pc = 0x31B958u;
    {
        const bool branch_taken_0x31b958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B958u;
        // 0x31b95c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b958) {
            ctx->pc = 0x31B99Cu;
            goto label_31b99c;
        }
    }
    ctx->pc = 0x31B960u;
label_31b960:
    // 0x31b960: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31b960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31b964:
    // 0x31b964: 0x0  nop
    ctx->pc = 0x31b964u;
    // NOP
label_31b968:
    // 0x31b968: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31b968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31b96c:
    // 0x31b96c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_31b970:
    // 0x31b970: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31b970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_31b974:
    // 0x31b974: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x31b974u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_31b978:
    // 0x31b978: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x31b978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_31b97c:
    // 0x31b97c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_31b980:
    // 0x31b980: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x31b980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_31b984:
    // 0x31b984: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x31b984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_31b988:
    // 0x31b988: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x31b988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_31b98c:
    // 0x31b98c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x31b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_31b990:
    // 0x31b990: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31b990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_31b994:
    // 0x31b994: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_31b998:
    if (ctx->pc == 0x31B998u) {
        ctx->pc = 0x31B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B994u;
        // 0x31b998: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B99Cu;
        goto label_31b99c;
    }
    ctx->pc = 0x31B994u;
    {
        const bool branch_taken_0x31b994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B994u;
        // 0x31b998: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b994) {
            ctx->pc = 0x31B968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b968;
        }
    }
    ctx->pc = 0x31B99Cu;
label_31b99c:
    // 0x31b99c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x31b99cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31b9a0:
    // 0x31b9a0: 0x13c0ffb7  beqz        $fp, . + 4 + (-0x49 << 2)
label_31b9a4:
    if (ctx->pc == 0x31B9A4u) {
        ctx->pc = 0x31B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9A0u;
        // 0x31b9a4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B9A8u;
        goto label_31b9a8;
    }
    ctx->pc = 0x31B9A0u;
    {
        const bool branch_taken_0x31b9a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9A0u;
        // 0x31b9a4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9a0) {
            ctx->pc = 0x31B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b880;
        }
    }
    ctx->pc = 0x31B9A8u;
label_31b9a8:
    // 0x31b9a8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_31b9ac:
    if (ctx->pc == 0x31B9ACu) {
        ctx->pc = 0x31B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9A8u;
        // 0x31b9ac: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B9B0u;
        goto label_31b9b0;
    }
    ctx->pc = 0x31B9A8u;
    {
        const bool branch_taken_0x31b9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9A8u;
        // 0x31b9ac: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9a8) {
            ctx->pc = 0x31BB58u;
            goto label_31bb58;
        }
    }
    ctx->pc = 0x31B9B0u;
label_31b9b0:
    // 0x31b9b0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x31b9b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b9b4:
    // 0x31b9b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31b9b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b9b8:
    // 0x31b9b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31b9bc:
    // 0x31b9bc: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x31b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_31b9c0:
    // 0x31b9c0: 0xc103468  jal         func_40D1A0
label_31b9c4:
    if (ctx->pc == 0x31B9C4u) {
        ctx->pc = 0x31B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9C0u;
        // 0x31b9c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B9C8u;
        goto label_31b9c8;
    }
    ctx->pc = 0x31B9C0u;
    SET_GPR_U32(ctx, 31, 0x31B9C8u);
    ctx->pc = 0x31B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9C0u;
    // 0x31b9c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31B9C0u, 0x31B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9C8u;
label_31b9c8:
    // 0x31b9c8: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_31b9cc:
    if (ctx->pc == 0x31B9CCu) {
        ctx->pc = 0x31B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9C8u;
        // 0x31b9cc: 0x8fb10048  lw          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B9D0u;
        goto label_31b9d0;
    }
    ctx->pc = 0x31B9C8u;
    {
        const bool branch_taken_0x31b9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9C8u;
        // 0x31b9cc: 0x8fb10048  lw          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9c8) {
            ctx->pc = 0x31B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b880;
        }
    }
    ctx->pc = 0x31B9D0u;
label_31b9d0:
    // 0x31b9d0: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
label_31b9d4:
    if (ctx->pc == 0x31B9D4u) {
        ctx->pc = 0x31B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9D0u;
        // 0x31b9d4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B9D8u;
        goto label_31b9d8;
    }
    ctx->pc = 0x31B9D0u;
    {
        const bool branch_taken_0x31b9d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9D0u;
        // 0x31b9d4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9d0) {
            ctx->pc = 0x31BB40u;
            goto label_31bb40;
        }
    }
    ctx->pc = 0x31B9D8u;
label_31b9d8:
    // 0x31b9d8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x31b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_31b9dc:
    // 0x31b9dc: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x31b9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_31b9e0:
    // 0x31b9e0: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x31b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_31b9e4:
    // 0x31b9e4: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x31b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_31b9e8:
    // 0x31b9e8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31b9ec:
    // 0x31b9ec: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x31b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_31b9f0:
    // 0x31b9f0: 0x769821  addu        $s3, $v1, $s6
    ctx->pc = 0x31b9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_31b9f4:
    // 0x31b9f4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31b9f8:
    // 0x31b9f8: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x31b9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_31b9fc:
    // 0x31b9fc: 0x40f809  jalr        $v0
label_31ba00:
    if (ctx->pc == 0x31BA00u) {
        ctx->pc = 0x31BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9FCu;
        // 0x31ba00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA04u;
        goto label_31ba04;
    }
    ctx->pc = 0x31B9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31BA04u);
        ctx->pc = 0x31BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9FCu;
        // 0x31ba00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B9FCu, 0x31BA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BA04u;
label_31ba04:
    // 0x31ba04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_31ba08:
    if (ctx->pc == 0x31BA08u) {
        ctx->pc = 0x31BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA04u;
        // 0x31ba08: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA0Cu;
        goto label_31ba0c;
    }
    ctx->pc = 0x31BA04u;
    {
        const bool branch_taken_0x31ba04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA04u;
        // 0x31ba08: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba04) {
            ctx->pc = 0x31BA38u;
            goto label_31ba38;
        }
    }
    ctx->pc = 0x31BA0Cu;
label_31ba0c:
    // 0x31ba0c: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31ba10:
    // 0x31ba10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31ba14:
    // 0x31ba14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31ba14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ba18:
    // 0x31ba18: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x31ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_31ba1c:
    // 0x31ba1c: 0xc1035f6  jal         func_40D7D8
label_31ba20:
    if (ctx->pc == 0x31BA20u) {
        ctx->pc = 0x31BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA1Cu;
        // 0x31ba20: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA24u;
        goto label_31ba24;
    }
    ctx->pc = 0x31BA1Cu;
    SET_GPR_U32(ctx, 31, 0x31BA24u);
    ctx->pc = 0x31BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA1Cu;
    // 0x31ba20: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31BA1Cu, 0x31BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA24u;
label_31ba24:
    // 0x31ba24: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_31ba28:
    // 0x31ba28: 0xc103628  jal         func_40D8A0
label_31ba2c:
    if (ctx->pc == 0x31BA2Cu) {
        ctx->pc = 0x31BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA28u;
        // 0x31ba2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA30u;
        goto label_31ba30;
    }
    ctx->pc = 0x31BA28u;
    SET_GPR_U32(ctx, 31, 0x31BA30u);
    ctx->pc = 0x31BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA28u;
    // 0x31ba2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31BA28u, 0x31BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA30u;
label_31ba30:
    // 0x31ba30: 0x1000002b  b           . + 4 + (0x2B << 2)
label_31ba34:
    if (ctx->pc == 0x31BA34u) {
        ctx->pc = 0x31BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA30u;
        // 0x31ba34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA38u;
        goto label_31ba38;
    }
    ctx->pc = 0x31BA30u;
    {
        const bool branch_taken_0x31ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA30u;
        // 0x31ba34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba30) {
            ctx->pc = 0x31BAE0u;
            goto label_31bae0;
        }
    }
    ctx->pc = 0x31BA38u;
label_31ba38:
    // 0x31ba38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31ba38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ba3c:
    // 0x31ba3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31ba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ba40:
    // 0x31ba40: 0xc0bb7e6  jal         func_2EDF98
label_31ba44:
    if (ctx->pc == 0x31BA44u) {
        ctx->pc = 0x31BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA40u;
        // 0x31ba44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA48u;
        goto label_31ba48;
    }
    ctx->pc = 0x31BA40u;
    SET_GPR_U32(ctx, 31, 0x31BA48u);
    ctx->pc = 0x31BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA40u;
    // 0x31ba44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31BA40u, 0x31BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA48u;
label_31ba48:
    // 0x31ba48: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_31ba4c:
    if (ctx->pc == 0x31BA4Cu) {
        ctx->pc = 0x31BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA48u;
        // 0x31ba4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA50u;
        goto label_31ba50;
    }
    ctx->pc = 0x31BA48u;
    {
        const bool branch_taken_0x31ba48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA48u;
        // 0x31ba4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba48) {
            ctx->pc = 0x31BAD8u;
            goto label_31bad8;
        }
    }
    ctx->pc = 0x31BA50u;
label_31ba50:
    // 0x31ba50: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x31ba50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_31ba54:
    // 0x31ba54: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_31ba58:
    // 0x31ba58: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x31ba58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_31ba5c:
    // 0x31ba5c: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x31ba5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_31ba60:
    // 0x31ba60: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
label_31ba64:
    if (ctx->pc == 0x31BA64u) {
        ctx->pc = 0x31BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA60u;
        // 0x31ba64: 0x24e40010  addiu       $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA68u;
        goto label_31ba68;
    }
    ctx->pc = 0x31BA60u;
    {
        const bool branch_taken_0x31ba60 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x31BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA60u;
        // 0x31ba64: 0x24e40010  addiu       $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba60) {
            ctx->pc = 0x31BAA0u;
            goto label_31baa0;
        }
    }
    ctx->pc = 0x31BA68u;
label_31ba68:
    // 0x31ba68: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_31ba6c:
    if (ctx->pc == 0x31BA6Cu) {
        ctx->pc = 0x31BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA68u;
        // 0x31ba6c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA70u;
        goto label_31ba70;
    }
    ctx->pc = 0x31BA68u;
    {
        const bool branch_taken_0x31ba68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA68u;
        // 0x31ba6c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba68) {
            ctx->pc = 0x31BAB8u;
            goto label_31bab8;
        }
    }
    ctx->pc = 0x31BA70u;
label_31ba70:
    // 0x31ba70: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x31ba70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_31ba74:
    // 0x31ba74: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_31ba78:
    if (ctx->pc == 0x31BA78u) {
        ctx->pc = 0x31BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA74u;
        // 0x31ba78: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA7Cu;
        goto label_31ba7c;
    }
    ctx->pc = 0x31BA74u;
    {
        const bool branch_taken_0x31ba74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ba74) {
            ctx->pc = 0x31BA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BA74u;
            // 0x31ba78: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BAA4u;
            goto label_31baa4;
        }
    }
    ctx->pc = 0x31BA7Cu;
label_31ba7c:
    // 0x31ba7c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x31ba7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_31ba80:
    // 0x31ba80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_31ba84:
    if (ctx->pc == 0x31BA84u) {
        ctx->pc = 0x31BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA80u;
        // 0x31ba84: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA88u;
        goto label_31ba88;
    }
    ctx->pc = 0x31BA80u;
    {
        const bool branch_taken_0x31ba80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ba80) {
            ctx->pc = 0x31BA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BA80u;
            // 0x31ba84: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BA98u;
            goto label_31ba98;
        }
    }
    ctx->pc = 0x31BA88u;
label_31ba88:
    // 0x31ba88: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x31ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
label_31ba8c:
    // 0x31ba8c: 0x24e40024  addiu       $a0, $a3, 0x24
    ctx->pc = 0x31ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
label_31ba90:
    // 0x31ba90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ba90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ba94:
    // 0x31ba94: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_31ba98:
    // 0x31ba98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31ba98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31ba9c:
    // 0x31ba9c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x31ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_31baa0:
    // 0x31baa0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_31baa4:
    // 0x31baa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31baa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31baa8:
    // 0x31baa8: 0xd1182b  sltu        $v1, $a2, $s1
    ctx->pc = 0x31baa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_31baac:
    // 0x31baac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_31bab0:
    if (ctx->pc == 0x31BAB0u) {
        ctx->pc = 0x31BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAACu;
        // 0x31bab0: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAB4u;
        goto label_31bab4;
    }
    ctx->pc = 0x31BAACu;
    {
        const bool branch_taken_0x31baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAACu;
        // 0x31bab0: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31baac) {
            ctx->pc = 0x31BAD8u;
            goto label_31bad8;
        }
    }
    ctx->pc = 0x31BAB4u;
label_31bab4:
    // 0x31bab4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31bab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31bab8:
    // 0x31bab8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x31bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_31babc:
    // 0x31babc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x31babcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_31bac0:
    // 0x31bac0: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x31bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_31bac4:
    // 0x31bac4: 0xd1182b  sltu        $v1, $a2, $s1
    ctx->pc = 0x31bac4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_31bac8:
    // 0x31bac8: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x31bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_31bacc:
    // 0x31bacc: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x31baccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_31bad0:
    // 0x31bad0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_31bad4:
    if (ctx->pc == 0x31BAD4u) {
        ctx->pc = 0x31BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAD0u;
        // 0x31bad4: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAD8u;
        goto label_31bad8;
    }
    ctx->pc = 0x31BAD0u;
    {
        const bool branch_taken_0x31bad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAD0u;
        // 0x31bad4: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bad0) {
            ctx->pc = 0x31BAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bab8;
        }
    }
    ctx->pc = 0x31BAD8u;
label_31bad8:
    // 0x31bad8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x31bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_31badc:
    // 0x31badc: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x31badcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31bae0:
    // 0x31bae0: 0x1040ff67  beqz        $v0, . + 4 + (-0x99 << 2)
label_31bae4:
    if (ctx->pc == 0x31BAE4u) {
        ctx->pc = 0x31BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAE0u;
        // 0x31bae4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAE8u;
        goto label_31bae8;
    }
    ctx->pc = 0x31BAE0u;
    {
        const bool branch_taken_0x31bae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAE0u;
        // 0x31bae4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bae0) {
            ctx->pc = 0x31B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b880;
        }
    }
    ctx->pc = 0x31BAE8u;
label_31bae8:
    // 0x31bae8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x31bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_31baec:
    // 0x31baec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31baf0:
    // 0x31baf0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x31baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_31baf4:
    // 0x31baf4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_31baf8:
    if (ctx->pc == 0x31BAF8u) {
        ctx->pc = 0x31BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAF4u;
        // 0x31baf8: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAFCu;
        goto label_31bafc;
    }
    ctx->pc = 0x31BAF4u;
    {
        const bool branch_taken_0x31baf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAF4u;
        // 0x31baf8: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31baf4) {
            ctx->pc = 0x31BB40u;
            goto label_31bb40;
        }
    }
    ctx->pc = 0x31BAFCu;
label_31bafc:
    // 0x31bafc: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x31bafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_31bb00:
    // 0x31bb00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31bb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31bb04:
    // 0x31bb04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31bb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31bb08:
    // 0x31bb08: 0xc103454  jal         func_40D150
label_31bb0c:
    if (ctx->pc == 0x31BB0Cu) {
        ctx->pc = 0x31BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB08u;
        // 0x31bb0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB10u;
        goto label_31bb10;
    }
    ctx->pc = 0x31BB08u;
    SET_GPR_U32(ctx, 31, 0x31BB10u);
    ctx->pc = 0x31BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB08u;
    // 0x31bb0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x31BB08u, 0x31BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB10u;
label_31bb10:
    // 0x31bb10: 0x1040ff5b  beqz        $v0, . + 4 + (-0xA5 << 2)
label_31bb14:
    if (ctx->pc == 0x31BB14u) {
        ctx->pc = 0x31BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB10u;
        // 0x31bb14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB18u;
        goto label_31bb18;
    }
    ctx->pc = 0x31BB10u;
    {
        const bool branch_taken_0x31bb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB10u;
        // 0x31bb14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb10) {
            ctx->pc = 0x31B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b880;
        }
    }
    ctx->pc = 0x31BB18u;
label_31bb18:
    // 0x31bb18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31bb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31bb1c:
    // 0x31bb1c: 0xc103468  jal         func_40D1A0
label_31bb20:
    if (ctx->pc == 0x31BB20u) {
        ctx->pc = 0x31BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB1Cu;
        // 0x31bb20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB24u;
        goto label_31bb24;
    }
    ctx->pc = 0x31BB1Cu;
    SET_GPR_U32(ctx, 31, 0x31BB24u);
    ctx->pc = 0x31BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB1Cu;
    // 0x31bb20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31BB1Cu, 0x31BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB24u;
label_31bb24:
    // 0x31bb24: 0x1040ff56  beqz        $v0, . + 4 + (-0xAA << 2)
label_31bb28:
    if (ctx->pc == 0x31BB28u) {
        ctx->pc = 0x31BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB24u;
        // 0x31bb28: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB2Cu;
        goto label_31bb2c;
    }
    ctx->pc = 0x31BB24u;
    {
        const bool branch_taken_0x31bb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB24u;
        // 0x31bb28: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb24) {
            ctx->pc = 0x31B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b880;
        }
    }
    ctx->pc = 0x31BB2Cu;
label_31bb2c:
    // 0x31bb2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31bb2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31bb30:
    // 0x31bb30: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x31bb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_31bb34:
    // 0x31bb34: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x31bb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31bb38:
    // 0x31bb38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_31bb3c:
    if (ctx->pc == 0x31BB3Cu) {
        ctx->pc = 0x31BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB38u;
        // 0x31bb3c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB40u;
        goto label_31bb40;
    }
    ctx->pc = 0x31BB38u;
    {
        const bool branch_taken_0x31bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB38u;
        // 0x31bb3c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb38) {
            ctx->pc = 0x31BB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bb00;
        }
    }
    ctx->pc = 0x31BB40u;
label_31bb40:
    // 0x31bb40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x31bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_31bb44:
    // 0x31bb44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x31bb44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_31bb48:
    // 0x31bb48: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x31bb48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_31bb4c:
    // 0x31bb4c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x31bb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31bb50:
    // 0x31bb50: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
label_31bb54:
    if (ctx->pc == 0x31BB54u) {
        ctx->pc = 0x31BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB50u;
        // 0x31bb54: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB58u;
        goto label_31bb58;
    }
    ctx->pc = 0x31BB50u;
    {
        const bool branch_taken_0x31bb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB50u;
        // 0x31bb54: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb50) {
            ctx->pc = 0x31B9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b9b8;
        }
    }
    ctx->pc = 0x31BB58u;
label_31bb58:
    // 0x31bb58: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x31bb58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31bb5c:
    // 0x31bb5c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x31bb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_31bb60:
    // 0x31bb60: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x31bb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_31bb64:
    // 0x31bb64: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x31bb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_31bb68:
    // 0x31bb68: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x31bb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31bb6c:
    // 0x31bb6c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x31bb6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31bb70:
    // 0x31bb70: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x31bb70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31bb74:
    // 0x31bb74: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x31bb74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31bb78:
    // 0x31bb78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31bb78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31bb7c:
    // 0x31bb7c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x31bb7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31bb80:
    // 0x31bb80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31bb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31bb84:
    // 0x31bb84: 0x3e00008  jr          $ra
label_31bb88:
    if (ctx->pc == 0x31BB88u) {
        ctx->pc = 0x31BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB84u;
        // 0x31bb88: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB8Cu;
        goto label_31bb8c;
    }
    ctx->pc = 0x31BB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB84u;
        // 0x31bb88: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BB8Cu;
label_31bb8c:
    // 0x31bb8c: 0x0  nop
    ctx->pc = 0x31bb8cu;
    // NOP
    ctx->pc = 0x31bb90u;
}
