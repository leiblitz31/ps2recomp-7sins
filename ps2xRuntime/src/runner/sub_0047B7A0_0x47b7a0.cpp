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

// Function: sub_0047B7A0
// Address: 0x47b7a0 - 0x47ba90
void sub_0047B7A0_0x47b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B7A0_0x47b7a0");
#endif

    switch (ctx->pc) {
        case 0x47b7a0u: goto label_47b7a0;
        case 0x47b7a4u: goto label_47b7a4;
        case 0x47b7a8u: goto label_47b7a8;
        case 0x47b7acu: goto label_47b7ac;
        case 0x47b7b0u: goto label_47b7b0;
        case 0x47b7b4u: goto label_47b7b4;
        case 0x47b7b8u: goto label_47b7b8;
        case 0x47b7bcu: goto label_47b7bc;
        case 0x47b7c0u: goto label_47b7c0;
        case 0x47b7c4u: goto label_47b7c4;
        case 0x47b7c8u: goto label_47b7c8;
        case 0x47b7ccu: goto label_47b7cc;
        case 0x47b7d0u: goto label_47b7d0;
        case 0x47b7d4u: goto label_47b7d4;
        case 0x47b7d8u: goto label_47b7d8;
        case 0x47b7dcu: goto label_47b7dc;
        case 0x47b7e0u: goto label_47b7e0;
        case 0x47b7e4u: goto label_47b7e4;
        case 0x47b7e8u: goto label_47b7e8;
        case 0x47b7ecu: goto label_47b7ec;
        case 0x47b7f0u: goto label_47b7f0;
        case 0x47b7f4u: goto label_47b7f4;
        case 0x47b7f8u: goto label_47b7f8;
        case 0x47b7fcu: goto label_47b7fc;
        case 0x47b800u: goto label_47b800;
        case 0x47b804u: goto label_47b804;
        case 0x47b808u: goto label_47b808;
        case 0x47b80cu: goto label_47b80c;
        case 0x47b810u: goto label_47b810;
        case 0x47b814u: goto label_47b814;
        case 0x47b818u: goto label_47b818;
        case 0x47b81cu: goto label_47b81c;
        case 0x47b820u: goto label_47b820;
        case 0x47b824u: goto label_47b824;
        case 0x47b828u: goto label_47b828;
        case 0x47b82cu: goto label_47b82c;
        case 0x47b830u: goto label_47b830;
        case 0x47b834u: goto label_47b834;
        case 0x47b838u: goto label_47b838;
        case 0x47b83cu: goto label_47b83c;
        case 0x47b840u: goto label_47b840;
        case 0x47b844u: goto label_47b844;
        case 0x47b848u: goto label_47b848;
        case 0x47b84cu: goto label_47b84c;
        case 0x47b850u: goto label_47b850;
        case 0x47b854u: goto label_47b854;
        case 0x47b858u: goto label_47b858;
        case 0x47b85cu: goto label_47b85c;
        case 0x47b860u: goto label_47b860;
        case 0x47b864u: goto label_47b864;
        case 0x47b868u: goto label_47b868;
        case 0x47b86cu: goto label_47b86c;
        case 0x47b870u: goto label_47b870;
        case 0x47b874u: goto label_47b874;
        case 0x47b878u: goto label_47b878;
        case 0x47b87cu: goto label_47b87c;
        case 0x47b880u: goto label_47b880;
        case 0x47b884u: goto label_47b884;
        case 0x47b888u: goto label_47b888;
        case 0x47b88cu: goto label_47b88c;
        case 0x47b890u: goto label_47b890;
        case 0x47b894u: goto label_47b894;
        case 0x47b898u: goto label_47b898;
        case 0x47b89cu: goto label_47b89c;
        case 0x47b8a0u: goto label_47b8a0;
        case 0x47b8a4u: goto label_47b8a4;
        case 0x47b8a8u: goto label_47b8a8;
        case 0x47b8acu: goto label_47b8ac;
        case 0x47b8b0u: goto label_47b8b0;
        case 0x47b8b4u: goto label_47b8b4;
        case 0x47b8b8u: goto label_47b8b8;
        case 0x47b8bcu: goto label_47b8bc;
        case 0x47b8c0u: goto label_47b8c0;
        case 0x47b8c4u: goto label_47b8c4;
        case 0x47b8c8u: goto label_47b8c8;
        case 0x47b8ccu: goto label_47b8cc;
        case 0x47b8d0u: goto label_47b8d0;
        case 0x47b8d4u: goto label_47b8d4;
        case 0x47b8d8u: goto label_47b8d8;
        case 0x47b8dcu: goto label_47b8dc;
        case 0x47b8e0u: goto label_47b8e0;
        case 0x47b8e4u: goto label_47b8e4;
        case 0x47b8e8u: goto label_47b8e8;
        case 0x47b8ecu: goto label_47b8ec;
        case 0x47b8f0u: goto label_47b8f0;
        case 0x47b8f4u: goto label_47b8f4;
        case 0x47b8f8u: goto label_47b8f8;
        case 0x47b8fcu: goto label_47b8fc;
        case 0x47b900u: goto label_47b900;
        case 0x47b904u: goto label_47b904;
        case 0x47b908u: goto label_47b908;
        case 0x47b90cu: goto label_47b90c;
        case 0x47b910u: goto label_47b910;
        case 0x47b914u: goto label_47b914;
        case 0x47b918u: goto label_47b918;
        case 0x47b91cu: goto label_47b91c;
        case 0x47b920u: goto label_47b920;
        case 0x47b924u: goto label_47b924;
        case 0x47b928u: goto label_47b928;
        case 0x47b92cu: goto label_47b92c;
        case 0x47b930u: goto label_47b930;
        case 0x47b934u: goto label_47b934;
        case 0x47b938u: goto label_47b938;
        case 0x47b93cu: goto label_47b93c;
        case 0x47b940u: goto label_47b940;
        case 0x47b944u: goto label_47b944;
        case 0x47b948u: goto label_47b948;
        case 0x47b94cu: goto label_47b94c;
        case 0x47b950u: goto label_47b950;
        case 0x47b954u: goto label_47b954;
        case 0x47b958u: goto label_47b958;
        case 0x47b95cu: goto label_47b95c;
        case 0x47b960u: goto label_47b960;
        case 0x47b964u: goto label_47b964;
        case 0x47b968u: goto label_47b968;
        case 0x47b96cu: goto label_47b96c;
        case 0x47b970u: goto label_47b970;
        case 0x47b974u: goto label_47b974;
        case 0x47b978u: goto label_47b978;
        case 0x47b97cu: goto label_47b97c;
        case 0x47b980u: goto label_47b980;
        case 0x47b984u: goto label_47b984;
        case 0x47b988u: goto label_47b988;
        case 0x47b98cu: goto label_47b98c;
        case 0x47b990u: goto label_47b990;
        case 0x47b994u: goto label_47b994;
        case 0x47b998u: goto label_47b998;
        case 0x47b99cu: goto label_47b99c;
        case 0x47b9a0u: goto label_47b9a0;
        case 0x47b9a4u: goto label_47b9a4;
        case 0x47b9a8u: goto label_47b9a8;
        case 0x47b9acu: goto label_47b9ac;
        case 0x47b9b0u: goto label_47b9b0;
        case 0x47b9b4u: goto label_47b9b4;
        case 0x47b9b8u: goto label_47b9b8;
        case 0x47b9bcu: goto label_47b9bc;
        case 0x47b9c0u: goto label_47b9c0;
        case 0x47b9c4u: goto label_47b9c4;
        case 0x47b9c8u: goto label_47b9c8;
        case 0x47b9ccu: goto label_47b9cc;
        case 0x47b9d0u: goto label_47b9d0;
        case 0x47b9d4u: goto label_47b9d4;
        case 0x47b9d8u: goto label_47b9d8;
        case 0x47b9dcu: goto label_47b9dc;
        case 0x47b9e0u: goto label_47b9e0;
        case 0x47b9e4u: goto label_47b9e4;
        case 0x47b9e8u: goto label_47b9e8;
        case 0x47b9ecu: goto label_47b9ec;
        case 0x47b9f0u: goto label_47b9f0;
        case 0x47b9f4u: goto label_47b9f4;
        case 0x47b9f8u: goto label_47b9f8;
        case 0x47b9fcu: goto label_47b9fc;
        case 0x47ba00u: goto label_47ba00;
        case 0x47ba04u: goto label_47ba04;
        case 0x47ba08u: goto label_47ba08;
        case 0x47ba0cu: goto label_47ba0c;
        case 0x47ba10u: goto label_47ba10;
        case 0x47ba14u: goto label_47ba14;
        case 0x47ba18u: goto label_47ba18;
        case 0x47ba1cu: goto label_47ba1c;
        case 0x47ba20u: goto label_47ba20;
        case 0x47ba24u: goto label_47ba24;
        case 0x47ba28u: goto label_47ba28;
        case 0x47ba2cu: goto label_47ba2c;
        case 0x47ba30u: goto label_47ba30;
        case 0x47ba34u: goto label_47ba34;
        case 0x47ba38u: goto label_47ba38;
        case 0x47ba3cu: goto label_47ba3c;
        case 0x47ba40u: goto label_47ba40;
        case 0x47ba44u: goto label_47ba44;
        case 0x47ba48u: goto label_47ba48;
        case 0x47ba4cu: goto label_47ba4c;
        case 0x47ba50u: goto label_47ba50;
        case 0x47ba54u: goto label_47ba54;
        case 0x47ba58u: goto label_47ba58;
        case 0x47ba5cu: goto label_47ba5c;
        case 0x47ba60u: goto label_47ba60;
        case 0x47ba64u: goto label_47ba64;
        case 0x47ba68u: goto label_47ba68;
        case 0x47ba6cu: goto label_47ba6c;
        case 0x47ba70u: goto label_47ba70;
        case 0x47ba74u: goto label_47ba74;
        case 0x47ba78u: goto label_47ba78;
        case 0x47ba7cu: goto label_47ba7c;
        case 0x47ba80u: goto label_47ba80;
        case 0x47ba84u: goto label_47ba84;
        case 0x47ba88u: goto label_47ba88;
        case 0x47ba8cu: goto label_47ba8c;
        default: break;
    }

    ctx->pc = 0x47b7a0u;

label_47b7a0:
    // 0x47b7a0: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x47b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
label_47b7a4:
    // 0x47b7a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47b7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47b7a8:
    // 0x47b7a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47b7ac:
    // 0x47b7ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47b7b0:
    // 0x47b7b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47b7b4:
    // 0x47b7b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47b7b8:
    // 0x47b7b8: 0xafa403e0  sw          $a0, 0x3E0($sp)
    ctx->pc = 0x47b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 4));
label_47b7bc:
    // 0x47b7bc: 0xafa503f0  sw          $a1, 0x3F0($sp)
    ctx->pc = 0x47b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 5));
label_47b7c0:
    // 0x47b7c0: 0xafa60400  sw          $a2, 0x400($sp)
    ctx->pc = 0x47b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 6));
label_47b7c4:
    // 0x47b7c4: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x47b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_47b7c8:
    // 0x47b7c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47b7c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47b7cc:
    // 0x47b7cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47b7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47b7d0:
    // 0x47b7d0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47b7d4:
    if (ctx->pc == 0x47B7D4u) {
        ctx->pc = 0x47B7D8u;
        goto label_47b7d8;
    }
    ctx->pc = 0x47B7D0u;
    {
        const bool branch_taken_0x47b7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b7d0) {
            ctx->pc = 0x47B880u;
            goto label_47b880;
        }
    }
    ctx->pc = 0x47B7D8u;
label_47b7d8:
    // 0x47b7d8: 0x8f82b4c0  lw          $v0, -0x4B40($gp)
    ctx->pc = 0x47b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948032)));
label_47b7dc:
    // 0x47b7dc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47b7e0:
    if (ctx->pc == 0x47B7E0u) {
        ctx->pc = 0x47B7E4u;
        goto label_47b7e4;
    }
    ctx->pc = 0x47B7DCu;
    {
        const bool branch_taken_0x47b7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b7dc) {
            ctx->pc = 0x47B880u;
            goto label_47b880;
        }
    }
    ctx->pc = 0x47B7E4u;
label_47b7e4:
    // 0x47b7e4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47b7e8:
    // 0x47b7e8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47b7ec:
    // 0x47b7ec: 0x27a603d0  addiu       $a2, $sp, 0x3D0
    ctx->pc = 0x47b7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_47b7f0:
    // 0x47b7f0: 0xc115ee8  jal         func_457BA0
label_47b7f4:
    if (ctx->pc == 0x47B7F4u) {
        ctx->pc = 0x47B7F8u;
        goto label_47b7f8;
    }
    ctx->pc = 0x47B7F0u;
    SET_GPR_U32(ctx, 31, 0x47B7F8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47B7F0u, 0x47B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B7F8u;
label_47b7f8:
    // 0x47b7f8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47b7fc:
    if (ctx->pc == 0x47B7FCu) {
        ctx->pc = 0x47B800u;
        goto label_47b800;
    }
    ctx->pc = 0x47B7F8u;
    {
        const bool branch_taken_0x47b7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b7f8) {
            ctx->pc = 0x47B880u;
            goto label_47b880;
        }
    }
    ctx->pc = 0x47B800u;
label_47b800:
    // 0x47b800: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x47b800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_47b804:
    // 0x47b804: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47b808:
    if (ctx->pc == 0x47B808u) {
        ctx->pc = 0x47B80Cu;
        goto label_47b80c;
    }
    ctx->pc = 0x47B804u;
    {
        const bool branch_taken_0x47b804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b804) {
            ctx->pc = 0x47B880u;
            goto label_47b880;
        }
    }
    ctx->pc = 0x47B80Cu;
label_47b80c:
    // 0x47b80c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x47b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_47b810:
    // 0x47b810: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47b810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47b814:
    // 0x47b814: 0x8fa603d4  lw          $a2, 0x3D4($sp)
    ctx->pc = 0x47b814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_47b818:
    // 0x47b818: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47b818u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47b81c:
    // 0x47b81c: 0x24e714c0  addiu       $a3, $a3, 0x14C0
    ctx->pc = 0x47b81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5312));
label_47b820:
    // 0x47b820: 0x240801ca  addiu       $t0, $zero, 0x1CA
    ctx->pc = 0x47b820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
label_47b824:
    // 0x47b824: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47b824u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47b828:
    // 0x47b828: 0x252914f0  addiu       $t1, $t1, 0x14F0
    ctx->pc = 0x47b828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5360));
label_47b82c:
    // 0x47b82c: 0xc113940  jal         func_44E500
label_47b830:
    if (ctx->pc == 0x47B830u) {
        ctx->pc = 0x47B834u;
        goto label_47b834;
    }
    ctx->pc = 0x47B82Cu;
    SET_GPR_U32(ctx, 31, 0x47B834u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47B82Cu, 0x47B834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B834u;
label_47b834:
    // 0x47b834: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x47b834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_47b838:
    // 0x47b838: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47b838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47b83c:
    // 0x47b83c: 0x24a51510  addiu       $a1, $a1, 0x1510
    ctx->pc = 0x47b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5392));
label_47b840:
    // 0x47b840: 0xc115c24  jal         func_457090
label_47b844:
    if (ctx->pc == 0x47B844u) {
        ctx->pc = 0x47B848u;
        goto label_47b848;
    }
    ctx->pc = 0x47B840u;
    SET_GPR_U32(ctx, 31, 0x47B848u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47B840u, 0x47B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B848u;
label_47b848:
    // 0x47b848: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x47b848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_47b84c:
    // 0x47b84c: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x47b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_47b850:
    // 0x47b850: 0x40f809  jalr        $v0
label_47b854:
    if (ctx->pc == 0x47B854u) {
        ctx->pc = 0x47B858u;
        goto label_47b858;
    }
    ctx->pc = 0x47B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47B858u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B850u, 0x47B858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47B858u;
label_47b858:
    // 0x47b858: 0xaf82b4c0  sw          $v0, -0x4B40($gp)
    ctx->pc = 0x47b858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948032), GPR_U32(ctx, 2));
label_47b85c:
    // 0x47b85c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x47b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_47b860:
    // 0x47b860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47b864:
    if (ctx->pc == 0x47B864u) {
        ctx->pc = 0x47B868u;
        goto label_47b868;
    }
    ctx->pc = 0x47B860u;
    {
        const bool branch_taken_0x47b860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b860) {
            ctx->pc = 0x47B870u;
            goto label_47b870;
        }
    }
    ctx->pc = 0x47B868u;
label_47b868:
    // 0x47b868: 0xd  break       0
    ctx->pc = 0x47b868u;
    runtime->handleBreak(rdram, ctx);
label_47b86c:
    // 0x47b86c: 0x0  nop
    ctx->pc = 0x47b86cu;
    // NOP
label_47b870:
    // 0x47b870: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x47b870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_47b874:
    // 0x47b874: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47b874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47b878:
    // 0x47b878: 0xc11392c  jal         func_44E4B0
label_47b87c:
    if (ctx->pc == 0x47B87Cu) {
        ctx->pc = 0x47B880u;
        goto label_47b880;
    }
    ctx->pc = 0x47B878u;
    SET_GPR_U32(ctx, 31, 0x47B880u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47B878u, 0x47B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B880u;
label_47b880:
    // 0x47b880: 0x8fa403e0  lw          $a0, 0x3E0($sp)
    ctx->pc = 0x47b880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_47b884:
    // 0x47b884: 0x8fa503f0  lw          $a1, 0x3F0($sp)
    ctx->pc = 0x47b884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_47b888:
    // 0x47b888: 0xc11eb9c  jal         func_47AE70
label_47b88c:
    if (ctx->pc == 0x47B88Cu) {
        ctx->pc = 0x47B890u;
        goto label_47b890;
    }
    ctx->pc = 0x47B888u;
    SET_GPR_U32(ctx, 31, 0x47B890u);
    ctx->pc = 0x47AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AE70u, 0x47B888u, 0x47B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B890u;
label_47b890:
    // 0x47b890: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x47b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47b894:
    // 0x47b894: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_47b898:
    if (ctx->pc == 0x47B898u) {
        ctx->pc = 0x47B89Cu;
        goto label_47b89c;
    }
    ctx->pc = 0x47B894u;
    {
        const bool branch_taken_0x47b894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47b894) {
            ctx->pc = 0x47B8A8u;
            goto label_47b8a8;
        }
    }
    ctx->pc = 0x47B89Cu;
label_47b89c:
    // 0x47b89c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47b89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b8a0:
    // 0x47b8a0: 0x10000073  b           . + 4 + (0x73 << 2)
label_47b8a4:
    if (ctx->pc == 0x47B8A4u) {
        ctx->pc = 0x47B8A8u;
        goto label_47b8a8;
    }
    ctx->pc = 0x47B8A0u;
    {
        const bool branch_taken_0x47b8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b8a0) {
            ctx->pc = 0x47BA70u;
            goto label_47ba70;
        }
    }
    ctx->pc = 0x47B8A8u;
label_47b8a8:
    // 0x47b8a8: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x47b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_47b8ac:
    // 0x47b8ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_47b8b0:
    if (ctx->pc == 0x47B8B0u) {
        ctx->pc = 0x47B8B4u;
        goto label_47b8b4;
    }
    ctx->pc = 0x47B8ACu;
    {
        const bool branch_taken_0x47b8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b8ac) {
            ctx->pc = 0x47B8D4u;
            goto label_47b8d4;
        }
    }
    ctx->pc = 0x47B8B4u;
label_47b8b4:
    // 0x47b8b4: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x47b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_47b8b8:
    // 0x47b8b8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x47b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_47b8bc:
    // 0x47b8bc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x47b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_47b8c0:
    // 0x47b8c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x47b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47b8c4:
    // 0x47b8c4: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x47b8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_47b8c8:
    // 0x47b8c8: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x47b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_47b8cc:
    // 0x47b8cc: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x47b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_47b8d0:
    // 0x47b8d0: 0x8fb10400  lw          $s1, 0x400($sp)
    ctx->pc = 0x47b8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_47b8d4:
    // 0x47b8d4: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x47b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_47b8d8:
    // 0x47b8d8: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x47b8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_47b8dc:
    // 0x47b8dc: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x47b8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_47b8e0:
    // 0x47b8e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47b8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47b8e4:
    // 0x47b8e4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47b8e8:
    if (ctx->pc == 0x47B8E8u) {
        ctx->pc = 0x47B8ECu;
        goto label_47b8ec;
    }
    ctx->pc = 0x47B8E4u;
    {
        const bool branch_taken_0x47b8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b8e4) {
            ctx->pc = 0x47B994u;
            goto label_47b994;
        }
    }
    ctx->pc = 0x47B8ECu;
label_47b8ec:
    // 0x47b8ec: 0x8f82b4c4  lw          $v0, -0x4B3C($gp)
    ctx->pc = 0x47b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948036)));
label_47b8f0:
    // 0x47b8f0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47b8f4:
    if (ctx->pc == 0x47B8F4u) {
        ctx->pc = 0x47B8F8u;
        goto label_47b8f8;
    }
    ctx->pc = 0x47B8F0u;
    {
        const bool branch_taken_0x47b8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b8f0) {
            ctx->pc = 0x47B994u;
            goto label_47b994;
        }
    }
    ctx->pc = 0x47B8F8u;
label_47b8f8:
    // 0x47b8f8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47b8fc:
    // 0x47b8fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47b8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47b900:
    // 0x47b900: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x47b900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_47b904:
    // 0x47b904: 0xc115ee8  jal         func_457BA0
label_47b908:
    if (ctx->pc == 0x47B908u) {
        ctx->pc = 0x47B90Cu;
        goto label_47b90c;
    }
    ctx->pc = 0x47B904u;
    SET_GPR_U32(ctx, 31, 0x47B90Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47B904u, 0x47B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B90Cu;
label_47b90c:
    // 0x47b90c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47b910:
    if (ctx->pc == 0x47B910u) {
        ctx->pc = 0x47B914u;
        goto label_47b914;
    }
    ctx->pc = 0x47B90Cu;
    {
        const bool branch_taken_0x47b90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b90c) {
            ctx->pc = 0x47B994u;
            goto label_47b994;
        }
    }
    ctx->pc = 0x47B914u;
label_47b914:
    // 0x47b914: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x47b914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_47b918:
    // 0x47b918: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47b91c:
    if (ctx->pc == 0x47B91Cu) {
        ctx->pc = 0x47B920u;
        goto label_47b920;
    }
    ctx->pc = 0x47B918u;
    {
        const bool branch_taken_0x47b918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b918) {
            ctx->pc = 0x47B994u;
            goto label_47b994;
        }
    }
    ctx->pc = 0x47B920u;
label_47b920:
    // 0x47b920: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x47b920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_47b924:
    // 0x47b924: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47b924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47b928:
    // 0x47b928: 0x8fa603c4  lw          $a2, 0x3C4($sp)
    ctx->pc = 0x47b928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_47b92c:
    // 0x47b92c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47b92cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47b930:
    // 0x47b930: 0x24e714c0  addiu       $a3, $a3, 0x14C0
    ctx->pc = 0x47b930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5312));
label_47b934:
    // 0x47b934: 0x240801d6  addiu       $t0, $zero, 0x1D6
    ctx->pc = 0x47b934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
label_47b938:
    // 0x47b938: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47b938u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47b93c:
    // 0x47b93c: 0x25291560  addiu       $t1, $t1, 0x1560
    ctx->pc = 0x47b93cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5472));
label_47b940:
    // 0x47b940: 0xc113940  jal         func_44E500
label_47b944:
    if (ctx->pc == 0x47B944u) {
        ctx->pc = 0x47B948u;
        goto label_47b948;
    }
    ctx->pc = 0x47B940u;
    SET_GPR_U32(ctx, 31, 0x47B948u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47B940u, 0x47B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B948u;
label_47b948:
    // 0x47b948: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x47b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_47b94c:
    // 0x47b94c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47b950:
    // 0x47b950: 0x24a51570  addiu       $a1, $a1, 0x1570
    ctx->pc = 0x47b950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5488));
label_47b954:
    // 0x47b954: 0xc115c24  jal         func_457090
label_47b958:
    if (ctx->pc == 0x47B958u) {
        ctx->pc = 0x47B95Cu;
        goto label_47b95c;
    }
    ctx->pc = 0x47B954u;
    SET_GPR_U32(ctx, 31, 0x47B95Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47B954u, 0x47B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B95Cu;
label_47b95c:
    // 0x47b95c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x47b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_47b960:
    // 0x47b960: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x47b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_47b964:
    // 0x47b964: 0x40f809  jalr        $v0
label_47b968:
    if (ctx->pc == 0x47B968u) {
        ctx->pc = 0x47B96Cu;
        goto label_47b96c;
    }
    ctx->pc = 0x47B964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47B96Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B964u, 0x47B96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47B96Cu;
label_47b96c:
    // 0x47b96c: 0xaf82b4c4  sw          $v0, -0x4B3C($gp)
    ctx->pc = 0x47b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948036), GPR_U32(ctx, 2));
label_47b970:
    // 0x47b970: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x47b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_47b974:
    // 0x47b974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47b978:
    if (ctx->pc == 0x47B978u) {
        ctx->pc = 0x47B97Cu;
        goto label_47b97c;
    }
    ctx->pc = 0x47B974u;
    {
        const bool branch_taken_0x47b974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b974) {
            ctx->pc = 0x47B984u;
            goto label_47b984;
        }
    }
    ctx->pc = 0x47B97Cu;
label_47b97c:
    // 0x47b97c: 0xd  break       0
    ctx->pc = 0x47b97cu;
    runtime->handleBreak(rdram, ctx);
label_47b980:
    // 0x47b980: 0x0  nop
    ctx->pc = 0x47b980u;
    // NOP
label_47b984:
    // 0x47b984: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x47b984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_47b988:
    // 0x47b988: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47b988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47b98c:
    // 0x47b98c: 0xc11392c  jal         func_44E4B0
label_47b990:
    if (ctx->pc == 0x47B990u) {
        ctx->pc = 0x47B994u;
        goto label_47b994;
    }
    ctx->pc = 0x47B98Cu;
    SET_GPR_U32(ctx, 31, 0x47B994u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47B98Cu, 0x47B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B994u;
label_47b994:
    // 0x47b994: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x47b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_47b998:
    // 0x47b998: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x47b998u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47b99c:
    // 0x47b99c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x47b99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_47b9a0:
    // 0x47b9a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47b9a4:
    // 0x47b9a4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47b9a8:
    if (ctx->pc == 0x47B9A8u) {
        ctx->pc = 0x47B9ACu;
        goto label_47b9ac;
    }
    ctx->pc = 0x47B9A4u;
    {
        const bool branch_taken_0x47b9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b9a4) {
            ctx->pc = 0x47BA54u;
            goto label_47ba54;
        }
    }
    ctx->pc = 0x47B9ACu;
label_47b9ac:
    // 0x47b9ac: 0x8f82b4c8  lw          $v0, -0x4B38($gp)
    ctx->pc = 0x47b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948040)));
label_47b9b0:
    // 0x47b9b0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47b9b4:
    if (ctx->pc == 0x47B9B4u) {
        ctx->pc = 0x47B9B8u;
        goto label_47b9b8;
    }
    ctx->pc = 0x47B9B0u;
    {
        const bool branch_taken_0x47b9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b9b0) {
            ctx->pc = 0x47BA54u;
            goto label_47ba54;
        }
    }
    ctx->pc = 0x47B9B8u;
label_47b9b8:
    // 0x47b9b8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47b9bc:
    // 0x47b9bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47b9c0:
    // 0x47b9c0: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x47b9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_47b9c4:
    // 0x47b9c4: 0xc115ee8  jal         func_457BA0
label_47b9c8:
    if (ctx->pc == 0x47B9C8u) {
        ctx->pc = 0x47B9CCu;
        goto label_47b9cc;
    }
    ctx->pc = 0x47B9C4u;
    SET_GPR_U32(ctx, 31, 0x47B9CCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47B9C4u, 0x47B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B9CCu;
label_47b9cc:
    // 0x47b9cc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47b9d0:
    if (ctx->pc == 0x47B9D0u) {
        ctx->pc = 0x47B9D4u;
        goto label_47b9d4;
    }
    ctx->pc = 0x47B9CCu;
    {
        const bool branch_taken_0x47b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b9cc) {
            ctx->pc = 0x47BA54u;
            goto label_47ba54;
        }
    }
    ctx->pc = 0x47B9D4u;
label_47b9d4:
    // 0x47b9d4: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x47b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_47b9d8:
    // 0x47b9d8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47b9dc:
    if (ctx->pc == 0x47B9DCu) {
        ctx->pc = 0x47B9E0u;
        goto label_47b9e0;
    }
    ctx->pc = 0x47B9D8u;
    {
        const bool branch_taken_0x47b9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b9d8) {
            ctx->pc = 0x47BA54u;
            goto label_47ba54;
        }
    }
    ctx->pc = 0x47B9E0u;
label_47b9e0:
    // 0x47b9e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47b9e4:
    // 0x47b9e4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47b9e8:
    // 0x47b9e8: 0x8fa603b4  lw          $a2, 0x3B4($sp)
    ctx->pc = 0x47b9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_47b9ec:
    // 0x47b9ec: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47b9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47b9f0:
    // 0x47b9f0: 0x24e714c0  addiu       $a3, $a3, 0x14C0
    ctx->pc = 0x47b9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5312));
label_47b9f4:
    // 0x47b9f4: 0x240801d9  addiu       $t0, $zero, 0x1D9
    ctx->pc = 0x47b9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
label_47b9f8:
    // 0x47b9f8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47b9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47b9fc:
    // 0x47b9fc: 0x25291560  addiu       $t1, $t1, 0x1560
    ctx->pc = 0x47b9fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5472));
label_47ba00:
    // 0x47ba00: 0xc113940  jal         func_44E500
label_47ba04:
    if (ctx->pc == 0x47BA04u) {
        ctx->pc = 0x47BA08u;
        goto label_47ba08;
    }
    ctx->pc = 0x47BA00u;
    SET_GPR_U32(ctx, 31, 0x47BA08u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47BA00u, 0x47BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BA08u;
label_47ba08:
    // 0x47ba08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47ba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47ba0c:
    // 0x47ba0c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47ba10:
    // 0x47ba10: 0x24a515c0  addiu       $a1, $a1, 0x15C0
    ctx->pc = 0x47ba10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5568));
label_47ba14:
    // 0x47ba14: 0xc115c24  jal         func_457090
label_47ba18:
    if (ctx->pc == 0x47BA18u) {
        ctx->pc = 0x47BA1Cu;
        goto label_47ba1c;
    }
    ctx->pc = 0x47BA14u;
    SET_GPR_U32(ctx, 31, 0x47BA1Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47BA14u, 0x47BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BA1Cu;
label_47ba1c:
    // 0x47ba1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47ba20:
    // 0x47ba20: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x47ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_47ba24:
    // 0x47ba24: 0x40f809  jalr        $v0
label_47ba28:
    if (ctx->pc == 0x47BA28u) {
        ctx->pc = 0x47BA2Cu;
        goto label_47ba2c;
    }
    ctx->pc = 0x47BA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47BA2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BA24u, 0x47BA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47BA2Cu;
label_47ba2c:
    // 0x47ba2c: 0xaf82b4c8  sw          $v0, -0x4B38($gp)
    ctx->pc = 0x47ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948040), GPR_U32(ctx, 2));
label_47ba30:
    // 0x47ba30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x47ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_47ba34:
    // 0x47ba34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47ba38:
    if (ctx->pc == 0x47BA38u) {
        ctx->pc = 0x47BA3Cu;
        goto label_47ba3c;
    }
    ctx->pc = 0x47BA34u;
    {
        const bool branch_taken_0x47ba34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ba34) {
            ctx->pc = 0x47BA44u;
            goto label_47ba44;
        }
    }
    ctx->pc = 0x47BA3Cu;
label_47ba3c:
    // 0x47ba3c: 0xd  break       0
    ctx->pc = 0x47ba3cu;
    runtime->handleBreak(rdram, ctx);
label_47ba40:
    // 0x47ba40: 0x0  nop
    ctx->pc = 0x47ba40u;
    // NOP
label_47ba44:
    // 0x47ba44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47ba48:
    // 0x47ba48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47ba4c:
    // 0x47ba4c: 0xc11392c  jal         func_44E4B0
label_47ba50:
    if (ctx->pc == 0x47BA50u) {
        ctx->pc = 0x47BA54u;
        goto label_47ba54;
    }
    ctx->pc = 0x47BA4Cu;
    SET_GPR_U32(ctx, 31, 0x47BA54u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47BA4Cu, 0x47BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BA54u;
label_47ba54:
    // 0x47ba54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47ba58:
    // 0x47ba58: 0x8fa50400  lw          $a1, 0x400($sp)
    ctx->pc = 0x47ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_47ba5c:
    // 0x47ba5c: 0xc0e39e0  jal         func_38E780
label_47ba60:
    if (ctx->pc == 0x47BA60u) {
        ctx->pc = 0x47BA64u;
        goto label_47ba64;
    }
    ctx->pc = 0x47BA5Cu;
    SET_GPR_U32(ctx, 31, 0x47BA64u);
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x47BA5Cu, 0x47BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BA64u;
label_47ba64:
    // 0x47ba64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47ba64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47ba68:
    // 0x47ba68: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x47ba68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_47ba6c:
    // 0x47ba6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47ba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47ba70:
    // 0x47ba70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47ba70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47ba74:
    // 0x47ba74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47ba74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47ba78:
    // 0x47ba78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47ba78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ba7c:
    // 0x47ba7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47ba7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ba80:
    // 0x47ba80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ba80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ba84:
    // 0x47ba84: 0x27bd0410  addiu       $sp, $sp, 0x410
    ctx->pc = 0x47ba84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_47ba88:
    // 0x47ba88: 0x3e00008  jr          $ra
label_47ba8c:
    if (ctx->pc == 0x47BA8Cu) {
        ctx->pc = 0x47BA90u;
        goto label_fallthrough_0x47ba88;
    }
    ctx->pc = 0x47BA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47ba88:
    ctx->pc = 0x47BA90u;
}
