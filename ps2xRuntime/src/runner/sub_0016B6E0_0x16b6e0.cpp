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

// Function: sub_0016B6E0
// Address: 0x16b6e0 - 0x16bbb0
void sub_0016B6E0_0x16b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B6E0_0x16b6e0");
#endif

    switch (ctx->pc) {
        case 0x16b6e0u: goto label_16b6e0;
        case 0x16b6e4u: goto label_16b6e4;
        case 0x16b6e8u: goto label_16b6e8;
        case 0x16b6ecu: goto label_16b6ec;
        case 0x16b6f0u: goto label_16b6f0;
        case 0x16b6f4u: goto label_16b6f4;
        case 0x16b6f8u: goto label_16b6f8;
        case 0x16b6fcu: goto label_16b6fc;
        case 0x16b700u: goto label_16b700;
        case 0x16b704u: goto label_16b704;
        case 0x16b708u: goto label_16b708;
        case 0x16b70cu: goto label_16b70c;
        case 0x16b710u: goto label_16b710;
        case 0x16b714u: goto label_16b714;
        case 0x16b718u: goto label_16b718;
        case 0x16b71cu: goto label_16b71c;
        case 0x16b720u: goto label_16b720;
        case 0x16b724u: goto label_16b724;
        case 0x16b728u: goto label_16b728;
        case 0x16b72cu: goto label_16b72c;
        case 0x16b730u: goto label_16b730;
        case 0x16b734u: goto label_16b734;
        case 0x16b738u: goto label_16b738;
        case 0x16b73cu: goto label_16b73c;
        case 0x16b740u: goto label_16b740;
        case 0x16b744u: goto label_16b744;
        case 0x16b748u: goto label_16b748;
        case 0x16b74cu: goto label_16b74c;
        case 0x16b750u: goto label_16b750;
        case 0x16b754u: goto label_16b754;
        case 0x16b758u: goto label_16b758;
        case 0x16b75cu: goto label_16b75c;
        case 0x16b760u: goto label_16b760;
        case 0x16b764u: goto label_16b764;
        case 0x16b768u: goto label_16b768;
        case 0x16b76cu: goto label_16b76c;
        case 0x16b770u: goto label_16b770;
        case 0x16b774u: goto label_16b774;
        case 0x16b778u: goto label_16b778;
        case 0x16b77cu: goto label_16b77c;
        case 0x16b780u: goto label_16b780;
        case 0x16b784u: goto label_16b784;
        case 0x16b788u: goto label_16b788;
        case 0x16b78cu: goto label_16b78c;
        case 0x16b790u: goto label_16b790;
        case 0x16b794u: goto label_16b794;
        case 0x16b798u: goto label_16b798;
        case 0x16b79cu: goto label_16b79c;
        case 0x16b7a0u: goto label_16b7a0;
        case 0x16b7a4u: goto label_16b7a4;
        case 0x16b7a8u: goto label_16b7a8;
        case 0x16b7acu: goto label_16b7ac;
        case 0x16b7b0u: goto label_16b7b0;
        case 0x16b7b4u: goto label_16b7b4;
        case 0x16b7b8u: goto label_16b7b8;
        case 0x16b7bcu: goto label_16b7bc;
        case 0x16b7c0u: goto label_16b7c0;
        case 0x16b7c4u: goto label_16b7c4;
        case 0x16b7c8u: goto label_16b7c8;
        case 0x16b7ccu: goto label_16b7cc;
        case 0x16b7d0u: goto label_16b7d0;
        case 0x16b7d4u: goto label_16b7d4;
        case 0x16b7d8u: goto label_16b7d8;
        case 0x16b7dcu: goto label_16b7dc;
        case 0x16b7e0u: goto label_16b7e0;
        case 0x16b7e4u: goto label_16b7e4;
        case 0x16b7e8u: goto label_16b7e8;
        case 0x16b7ecu: goto label_16b7ec;
        case 0x16b7f0u: goto label_16b7f0;
        case 0x16b7f4u: goto label_16b7f4;
        case 0x16b7f8u: goto label_16b7f8;
        case 0x16b7fcu: goto label_16b7fc;
        case 0x16b800u: goto label_16b800;
        case 0x16b804u: goto label_16b804;
        case 0x16b808u: goto label_16b808;
        case 0x16b80cu: goto label_16b80c;
        case 0x16b810u: goto label_16b810;
        case 0x16b814u: goto label_16b814;
        case 0x16b818u: goto label_16b818;
        case 0x16b81cu: goto label_16b81c;
        case 0x16b820u: goto label_16b820;
        case 0x16b824u: goto label_16b824;
        case 0x16b828u: goto label_16b828;
        case 0x16b82cu: goto label_16b82c;
        case 0x16b830u: goto label_16b830;
        case 0x16b834u: goto label_16b834;
        case 0x16b838u: goto label_16b838;
        case 0x16b83cu: goto label_16b83c;
        case 0x16b840u: goto label_16b840;
        case 0x16b844u: goto label_16b844;
        case 0x16b848u: goto label_16b848;
        case 0x16b84cu: goto label_16b84c;
        case 0x16b850u: goto label_16b850;
        case 0x16b854u: goto label_16b854;
        case 0x16b858u: goto label_16b858;
        case 0x16b85cu: goto label_16b85c;
        case 0x16b860u: goto label_16b860;
        case 0x16b864u: goto label_16b864;
        case 0x16b868u: goto label_16b868;
        case 0x16b86cu: goto label_16b86c;
        case 0x16b870u: goto label_16b870;
        case 0x16b874u: goto label_16b874;
        case 0x16b878u: goto label_16b878;
        case 0x16b87cu: goto label_16b87c;
        case 0x16b880u: goto label_16b880;
        case 0x16b884u: goto label_16b884;
        case 0x16b888u: goto label_16b888;
        case 0x16b88cu: goto label_16b88c;
        case 0x16b890u: goto label_16b890;
        case 0x16b894u: goto label_16b894;
        case 0x16b898u: goto label_16b898;
        case 0x16b89cu: goto label_16b89c;
        case 0x16b8a0u: goto label_16b8a0;
        case 0x16b8a4u: goto label_16b8a4;
        case 0x16b8a8u: goto label_16b8a8;
        case 0x16b8acu: goto label_16b8ac;
        case 0x16b8b0u: goto label_16b8b0;
        case 0x16b8b4u: goto label_16b8b4;
        case 0x16b8b8u: goto label_16b8b8;
        case 0x16b8bcu: goto label_16b8bc;
        case 0x16b8c0u: goto label_16b8c0;
        case 0x16b8c4u: goto label_16b8c4;
        case 0x16b8c8u: goto label_16b8c8;
        case 0x16b8ccu: goto label_16b8cc;
        case 0x16b8d0u: goto label_16b8d0;
        case 0x16b8d4u: goto label_16b8d4;
        case 0x16b8d8u: goto label_16b8d8;
        case 0x16b8dcu: goto label_16b8dc;
        case 0x16b8e0u: goto label_16b8e0;
        case 0x16b8e4u: goto label_16b8e4;
        case 0x16b8e8u: goto label_16b8e8;
        case 0x16b8ecu: goto label_16b8ec;
        case 0x16b8f0u: goto label_16b8f0;
        case 0x16b8f4u: goto label_16b8f4;
        case 0x16b8f8u: goto label_16b8f8;
        case 0x16b8fcu: goto label_16b8fc;
        case 0x16b900u: goto label_16b900;
        case 0x16b904u: goto label_16b904;
        case 0x16b908u: goto label_16b908;
        case 0x16b90cu: goto label_16b90c;
        case 0x16b910u: goto label_16b910;
        case 0x16b914u: goto label_16b914;
        case 0x16b918u: goto label_16b918;
        case 0x16b91cu: goto label_16b91c;
        case 0x16b920u: goto label_16b920;
        case 0x16b924u: goto label_16b924;
        case 0x16b928u: goto label_16b928;
        case 0x16b92cu: goto label_16b92c;
        case 0x16b930u: goto label_16b930;
        case 0x16b934u: goto label_16b934;
        case 0x16b938u: goto label_16b938;
        case 0x16b93cu: goto label_16b93c;
        case 0x16b940u: goto label_16b940;
        case 0x16b944u: goto label_16b944;
        case 0x16b948u: goto label_16b948;
        case 0x16b94cu: goto label_16b94c;
        case 0x16b950u: goto label_16b950;
        case 0x16b954u: goto label_16b954;
        case 0x16b958u: goto label_16b958;
        case 0x16b95cu: goto label_16b95c;
        case 0x16b960u: goto label_16b960;
        case 0x16b964u: goto label_16b964;
        case 0x16b968u: goto label_16b968;
        case 0x16b96cu: goto label_16b96c;
        case 0x16b970u: goto label_16b970;
        case 0x16b974u: goto label_16b974;
        case 0x16b978u: goto label_16b978;
        case 0x16b97cu: goto label_16b97c;
        case 0x16b980u: goto label_16b980;
        case 0x16b984u: goto label_16b984;
        case 0x16b988u: goto label_16b988;
        case 0x16b98cu: goto label_16b98c;
        case 0x16b990u: goto label_16b990;
        case 0x16b994u: goto label_16b994;
        case 0x16b998u: goto label_16b998;
        case 0x16b99cu: goto label_16b99c;
        case 0x16b9a0u: goto label_16b9a0;
        case 0x16b9a4u: goto label_16b9a4;
        case 0x16b9a8u: goto label_16b9a8;
        case 0x16b9acu: goto label_16b9ac;
        case 0x16b9b0u: goto label_16b9b0;
        case 0x16b9b4u: goto label_16b9b4;
        case 0x16b9b8u: goto label_16b9b8;
        case 0x16b9bcu: goto label_16b9bc;
        case 0x16b9c0u: goto label_16b9c0;
        case 0x16b9c4u: goto label_16b9c4;
        case 0x16b9c8u: goto label_16b9c8;
        case 0x16b9ccu: goto label_16b9cc;
        case 0x16b9d0u: goto label_16b9d0;
        case 0x16b9d4u: goto label_16b9d4;
        case 0x16b9d8u: goto label_16b9d8;
        case 0x16b9dcu: goto label_16b9dc;
        case 0x16b9e0u: goto label_16b9e0;
        case 0x16b9e4u: goto label_16b9e4;
        case 0x16b9e8u: goto label_16b9e8;
        case 0x16b9ecu: goto label_16b9ec;
        case 0x16b9f0u: goto label_16b9f0;
        case 0x16b9f4u: goto label_16b9f4;
        case 0x16b9f8u: goto label_16b9f8;
        case 0x16b9fcu: goto label_16b9fc;
        case 0x16ba00u: goto label_16ba00;
        case 0x16ba04u: goto label_16ba04;
        case 0x16ba08u: goto label_16ba08;
        case 0x16ba0cu: goto label_16ba0c;
        case 0x16ba10u: goto label_16ba10;
        case 0x16ba14u: goto label_16ba14;
        case 0x16ba18u: goto label_16ba18;
        case 0x16ba1cu: goto label_16ba1c;
        case 0x16ba20u: goto label_16ba20;
        case 0x16ba24u: goto label_16ba24;
        case 0x16ba28u: goto label_16ba28;
        case 0x16ba2cu: goto label_16ba2c;
        case 0x16ba30u: goto label_16ba30;
        case 0x16ba34u: goto label_16ba34;
        case 0x16ba38u: goto label_16ba38;
        case 0x16ba3cu: goto label_16ba3c;
        case 0x16ba40u: goto label_16ba40;
        case 0x16ba44u: goto label_16ba44;
        case 0x16ba48u: goto label_16ba48;
        case 0x16ba4cu: goto label_16ba4c;
        case 0x16ba50u: goto label_16ba50;
        case 0x16ba54u: goto label_16ba54;
        case 0x16ba58u: goto label_16ba58;
        case 0x16ba5cu: goto label_16ba5c;
        case 0x16ba60u: goto label_16ba60;
        case 0x16ba64u: goto label_16ba64;
        case 0x16ba68u: goto label_16ba68;
        case 0x16ba6cu: goto label_16ba6c;
        case 0x16ba70u: goto label_16ba70;
        case 0x16ba74u: goto label_16ba74;
        case 0x16ba78u: goto label_16ba78;
        case 0x16ba7cu: goto label_16ba7c;
        case 0x16ba80u: goto label_16ba80;
        case 0x16ba84u: goto label_16ba84;
        case 0x16ba88u: goto label_16ba88;
        case 0x16ba8cu: goto label_16ba8c;
        case 0x16ba90u: goto label_16ba90;
        case 0x16ba94u: goto label_16ba94;
        case 0x16ba98u: goto label_16ba98;
        case 0x16ba9cu: goto label_16ba9c;
        case 0x16baa0u: goto label_16baa0;
        case 0x16baa4u: goto label_16baa4;
        case 0x16baa8u: goto label_16baa8;
        case 0x16baacu: goto label_16baac;
        case 0x16bab0u: goto label_16bab0;
        case 0x16bab4u: goto label_16bab4;
        case 0x16bab8u: goto label_16bab8;
        case 0x16babcu: goto label_16babc;
        case 0x16bac0u: goto label_16bac0;
        case 0x16bac4u: goto label_16bac4;
        case 0x16bac8u: goto label_16bac8;
        case 0x16baccu: goto label_16bacc;
        case 0x16bad0u: goto label_16bad0;
        case 0x16bad4u: goto label_16bad4;
        case 0x16bad8u: goto label_16bad8;
        case 0x16badcu: goto label_16badc;
        case 0x16bae0u: goto label_16bae0;
        case 0x16bae4u: goto label_16bae4;
        case 0x16bae8u: goto label_16bae8;
        case 0x16baecu: goto label_16baec;
        case 0x16baf0u: goto label_16baf0;
        case 0x16baf4u: goto label_16baf4;
        case 0x16baf8u: goto label_16baf8;
        case 0x16bafcu: goto label_16bafc;
        case 0x16bb00u: goto label_16bb00;
        case 0x16bb04u: goto label_16bb04;
        case 0x16bb08u: goto label_16bb08;
        case 0x16bb0cu: goto label_16bb0c;
        case 0x16bb10u: goto label_16bb10;
        case 0x16bb14u: goto label_16bb14;
        case 0x16bb18u: goto label_16bb18;
        case 0x16bb1cu: goto label_16bb1c;
        case 0x16bb20u: goto label_16bb20;
        case 0x16bb24u: goto label_16bb24;
        case 0x16bb28u: goto label_16bb28;
        case 0x16bb2cu: goto label_16bb2c;
        case 0x16bb30u: goto label_16bb30;
        case 0x16bb34u: goto label_16bb34;
        case 0x16bb38u: goto label_16bb38;
        case 0x16bb3cu: goto label_16bb3c;
        case 0x16bb40u: goto label_16bb40;
        case 0x16bb44u: goto label_16bb44;
        case 0x16bb48u: goto label_16bb48;
        case 0x16bb4cu: goto label_16bb4c;
        case 0x16bb50u: goto label_16bb50;
        case 0x16bb54u: goto label_16bb54;
        case 0x16bb58u: goto label_16bb58;
        case 0x16bb5cu: goto label_16bb5c;
        case 0x16bb60u: goto label_16bb60;
        case 0x16bb64u: goto label_16bb64;
        case 0x16bb68u: goto label_16bb68;
        case 0x16bb6cu: goto label_16bb6c;
        case 0x16bb70u: goto label_16bb70;
        case 0x16bb74u: goto label_16bb74;
        case 0x16bb78u: goto label_16bb78;
        case 0x16bb7cu: goto label_16bb7c;
        case 0x16bb80u: goto label_16bb80;
        case 0x16bb84u: goto label_16bb84;
        case 0x16bb88u: goto label_16bb88;
        case 0x16bb8cu: goto label_16bb8c;
        case 0x16bb90u: goto label_16bb90;
        case 0x16bb94u: goto label_16bb94;
        case 0x16bb98u: goto label_16bb98;
        case 0x16bb9cu: goto label_16bb9c;
        case 0x16bba0u: goto label_16bba0;
        case 0x16bba4u: goto label_16bba4;
        case 0x16bba8u: goto label_16bba8;
        case 0x16bbacu: goto label_16bbac;
        default: break;
    }

    ctx->pc = 0x16b6e0u;

label_16b6e0:
    // 0x16b6e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x16b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_16b6e4:
    // 0x16b6e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_16b6e8:
    // 0x16b6e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_16b6ec:
    // 0x16b6ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_16b6f0:
    // 0x16b6f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16b6f4:
    // 0x16b6f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16b6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16b6f8:
    // 0x16b6f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16b6fc:
    // 0x16b6fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16b700:
    // 0x16b700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16b704:
    // 0x16b704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16b708:
    // 0x16b708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16b70c:
    // 0x16b70c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x16b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_16b710:
    // 0x16b710: 0x8f82bac4  lw          $v0, -0x453C($gp)
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
label_16b714:
    // 0x16b714: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x16b714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_16b718:
    // 0x16b718: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x16b718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_16b71c:
    // 0x16b71c: 0xc042330  jal         func_108CC0
label_16b720:
    if (ctx->pc == 0x16B720u) {
        ctx->pc = 0x16B724u;
        goto label_16b724;
    }
    ctx->pc = 0x16B71Cu;
    SET_GPR_U32(ctx, 31, 0x16B724u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x16B71Cu, 0x16B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B724u;
label_16b724:
    // 0x16b724: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16b724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b728:
    // 0x16b728: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x16b728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_16b72c:
    // 0x16b72c: 0xc042330  jal         func_108CC0
label_16b730:
    if (ctx->pc == 0x16B730u) {
        ctx->pc = 0x16B734u;
        goto label_16b734;
    }
    ctx->pc = 0x16B72Cu;
    SET_GPR_U32(ctx, 31, 0x16B734u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x16B72Cu, 0x16B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B734u;
label_16b734:
    // 0x16b734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b738:
    // 0x16b738: 0xc048f38  jal         func_123CE0
label_16b73c:
    if (ctx->pc == 0x16B73Cu) {
        ctx->pc = 0x16B740u;
        goto label_16b740;
    }
    ctx->pc = 0x16B738u;
    SET_GPR_U32(ctx, 31, 0x16B740u);
    ctx->pc = 0x123CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CE0u, 0x16B738u, 0x16B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B740u;
label_16b740:
    // 0x16b740: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x16b740u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b744:
    // 0x16b744: 0x1012010b  beq         $zero, $s2, . + 4 + (0x10B << 2)
label_16b748:
    if (ctx->pc == 0x16B748u) {
        ctx->pc = 0x16B74Cu;
        goto label_16b74c;
    }
    ctx->pc = 0x16B744u;
    {
        const bool branch_taken_0x16b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x16b744) {
            ctx->pc = 0x16BB74u;
            goto label_16bb74;
        }
    }
    ctx->pc = 0x16B74Cu;
label_16b74c:
    // 0x16b74c: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
label_16b750:
    // 0x16b750: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x16b750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_16b754:
    // 0x16b754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b758:
    // 0x16b758: 0xc042320  jal         func_108C80
label_16b75c:
    if (ctx->pc == 0x16B75Cu) {
        ctx->pc = 0x16B760u;
        goto label_16b760;
    }
    ctx->pc = 0x16B758u;
    SET_GPR_U32(ctx, 31, 0x16B760u);
    ctx->pc = 0x108C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C80u, 0x16B758u, 0x16B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B760u;
label_16b760:
    // 0x16b760: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x16b760u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16b764:
    // 0x16b764: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16b764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16b768:
    // 0x16b768: 0x10200102  beqz        $at, . + 4 + (0x102 << 2)
label_16b76c:
    if (ctx->pc == 0x16B76Cu) {
        ctx->pc = 0x16B770u;
        goto label_16b770;
    }
    ctx->pc = 0x16B768u;
    {
        const bool branch_taken_0x16b768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b768) {
            ctx->pc = 0x16BB74u;
            goto label_16bb74;
        }
    }
    ctx->pc = 0x16B770u;
label_16b770:
    // 0x16b770: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16b770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16b774:
    // 0x16b774: 0xc088560  jal         func_221580
label_16b778:
    if (ctx->pc == 0x16B778u) {
        ctx->pc = 0x16B77Cu;
        goto label_16b77c;
    }
    ctx->pc = 0x16B774u;
    SET_GPR_U32(ctx, 31, 0x16B77Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16B774u, 0x16B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B77Cu;
label_16b77c:
    // 0x16b77c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b780:
    // 0x16b780: 0xc04939c  jal         func_124E70
label_16b784:
    if (ctx->pc == 0x16B784u) {
        ctx->pc = 0x16B788u;
        goto label_16b788;
    }
    ctx->pc = 0x16B780u;
    SET_GPR_U32(ctx, 31, 0x16B788u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x16B780u, 0x16B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B788u;
label_16b788:
    // 0x16b788: 0x8f83bac8  lw          $v1, -0x4538($gp)
    ctx->pc = 0x16b788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
label_16b78c:
    // 0x16b78c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16b790:
    // 0x16b790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16b794:
    // 0x16b794: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16b798:
    // 0x16b798: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16b79c:
    // 0x16b79c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x16b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16b7a0:
    // 0x16b7a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x16b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_16b7a4:
    // 0x16b7a4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_16b7a8:
    if (ctx->pc == 0x16B7A8u) {
        ctx->pc = 0x16B7ACu;
        goto label_16b7ac;
    }
    ctx->pc = 0x16B7A4u;
    {
        const bool branch_taken_0x16b7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b7a4) {
            ctx->pc = 0x16B80Cu;
            goto label_16b80c;
        }
    }
    ctx->pc = 0x16B7ACu;
label_16b7ac:
    // 0x16b7ac: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x16b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_16b7b0:
    // 0x16b7b0: 0xc0bc60c  jal         func_2F1830
label_16b7b4:
    if (ctx->pc == 0x16B7B4u) {
        ctx->pc = 0x16B7B8u;
        goto label_16b7b8;
    }
    ctx->pc = 0x16B7B0u;
    SET_GPR_U32(ctx, 31, 0x16B7B8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x16B7B0u, 0x16B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7B8u;
label_16b7b8:
    // 0x16b7b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16b7bc:
    if (ctx->pc == 0x16B7BCu) {
        ctx->pc = 0x16B7C0u;
        goto label_16b7c0;
    }
    ctx->pc = 0x16B7B8u;
    {
        const bool branch_taken_0x16b7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7b8) {
            ctx->pc = 0x16B7D0u;
            goto label_16b7d0;
        }
    }
    ctx->pc = 0x16B7C0u;
label_16b7c0:
    // 0x16b7c0: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x16b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_16b7c4:
    // 0x16b7c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x16b7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_16b7c8:
    // 0x16b7c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_16b7cc:
    if (ctx->pc == 0x16B7CCu) {
        ctx->pc = 0x16B7D0u;
        goto label_16b7d0;
    }
    ctx->pc = 0x16B7C8u;
    {
        const bool branch_taken_0x16b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7c8) {
            ctx->pc = 0x16B80Cu;
            goto label_16b80c;
        }
    }
    ctx->pc = 0x16B7D0u;
label_16b7d0:
    // 0x16b7d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16b7d4:
    // 0x16b7d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16b7d8:
    // 0x16b7d8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16b7dc:
    // 0x16b7dc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16b7e0:
    // 0x16b7e0: 0x24a541e0  addiu       $a1, $a1, 0x41E0
    ctx->pc = 0x16b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16864));
label_16b7e4:
    // 0x16b7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b7e8:
    // 0x16b7e8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16b7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16b7ec:
    // 0x16b7ec: 0xc08f558  jal         func_23D560
label_16b7f0:
    if (ctx->pc == 0x16B7F0u) {
        ctx->pc = 0x16B7F4u;
        goto label_16b7f4;
    }
    ctx->pc = 0x16B7ECu;
    SET_GPR_U32(ctx, 31, 0x16B7F4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16B7ECu, 0x16B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7F4u;
label_16b7f4:
    // 0x16b7f4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16b7f8:
    // 0x16b7f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b7fc:
    // 0x16b7fc: 0xc0887b4  jal         func_221ED0
label_16b800:
    if (ctx->pc == 0x16B800u) {
        ctx->pc = 0x16B804u;
        goto label_16b804;
    }
    ctx->pc = 0x16B7FCu;
    SET_GPR_U32(ctx, 31, 0x16B804u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16B7FCu, 0x16B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B804u;
label_16b804:
    // 0x16b804: 0x100000db  b           . + 4 + (0xDB << 2)
label_16b808:
    if (ctx->pc == 0x16B808u) {
        ctx->pc = 0x16B80Cu;
        goto label_16b80c;
    }
    ctx->pc = 0x16B804u;
    {
        const bool branch_taken_0x16b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b804) {
            ctx->pc = 0x16BB74u;
            goto label_16bb74;
        }
    }
    ctx->pc = 0x16B80Cu;
label_16b80c:
    // 0x16b80c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16b810:
    // 0x16b810: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x16b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16b814:
    // 0x16b814: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x16b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_16b818:
    // 0x16b818: 0x14620098  bne         $v1, $v0, . + 4 + (0x98 << 2)
label_16b81c:
    if (ctx->pc == 0x16B81Cu) {
        ctx->pc = 0x16B820u;
        goto label_16b820;
    }
    ctx->pc = 0x16B818u;
    {
        const bool branch_taken_0x16b818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b818) {
            ctx->pc = 0x16BA7Cu;
            goto label_16ba7c;
        }
    }
    ctx->pc = 0x16B820u;
label_16b820:
    // 0x16b820: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x16b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_16b824:
    // 0x16b824: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_16b828:
    // 0x16b828: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_16b82c:
    if (ctx->pc == 0x16B82Cu) {
        ctx->pc = 0x16B830u;
        goto label_16b830;
    }
    ctx->pc = 0x16B828u;
    {
        const bool branch_taken_0x16b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b828) {
            ctx->pc = 0x16BA7Cu;
            goto label_16ba7c;
        }
    }
    ctx->pc = 0x16B830u;
label_16b830:
    // 0x16b830: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16b830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b834:
    // 0x16b834: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16b834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16b838:
    // 0x16b838: 0x34500100  ori         $s0, $v0, 0x100
    ctx->pc = 0x16b838u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_16b83c:
    // 0x16b83c: 0xc05548c  jal         func_155230
label_16b840:
    if (ctx->pc == 0x16B840u) {
        ctx->pc = 0x16B844u;
        goto label_16b844;
    }
    ctx->pc = 0x16B83Cu;
    SET_GPR_U32(ctx, 31, 0x16B844u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x16B83Cu, 0x16B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B844u;
label_16b844:
    // 0x16b844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b848:
    // 0x16b848: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x16b848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_16b84c:
    // 0x16b84c: 0xc0553d4  jal         func_154F50
label_16b850:
    if (ctx->pc == 0x16B850u) {
        ctx->pc = 0x16B854u;
        goto label_16b854;
    }
    ctx->pc = 0x16B84Cu;
    SET_GPR_U32(ctx, 31, 0x16B854u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x16B84Cu, 0x16B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B854u;
label_16b854:
    // 0x16b854: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x16b854u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b858:
    // 0x16b858: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16b85c:
    // 0x16b85c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16b860:
    // 0x16b860: 0x24a54170  addiu       $a1, $a1, 0x4170
    ctx->pc = 0x16b860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16752));
label_16b864:
    // 0x16b864: 0xc08e57c  jal         func_2395F0
label_16b868:
    if (ctx->pc == 0x16B868u) {
        ctx->pc = 0x16B86Cu;
        goto label_16b86c;
    }
    ctx->pc = 0x16B864u;
    SET_GPR_U32(ctx, 31, 0x16B86Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16B864u, 0x16B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B86Cu;
label_16b86c:
    // 0x16b86c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_16b870:
    // 0x16b870: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16b870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b874:
    // 0x16b874: 0xc0406d0  jal         func_101B40
label_16b878:
    if (ctx->pc == 0x16B878u) {
        ctx->pc = 0x16B87Cu;
        goto label_16b87c;
    }
    ctx->pc = 0x16B874u;
    SET_GPR_U32(ctx, 31, 0x16B87Cu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x16B874u, 0x16B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B87Cu;
label_16b87c:
    // 0x16b87c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_16b880:
    // 0x16b880: 0xc0495d4  jal         func_125750
label_16b884:
    if (ctx->pc == 0x16B884u) {
        ctx->pc = 0x16B888u;
        goto label_16b888;
    }
    ctx->pc = 0x16B880u;
    SET_GPR_U32(ctx, 31, 0x16B888u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16B880u, 0x16B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B888u;
label_16b888:
    // 0x16b888: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16b888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b88c:
    // 0x16b88c: 0x10000010  b           . + 4 + (0x10 << 2)
label_16b890:
    if (ctx->pc == 0x16B890u) {
        ctx->pc = 0x16B894u;
        goto label_16b894;
    }
    ctx->pc = 0x16B88Cu;
    {
        const bool branch_taken_0x16b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b88c) {
            ctx->pc = 0x16B8D0u;
            goto label_16b8d0;
        }
    }
    ctx->pc = 0x16B894u;
label_16b894:
    // 0x16b894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b898:
    // 0x16b898: 0xc04939c  jal         func_124E70
label_16b89c:
    if (ctx->pc == 0x16B89Cu) {
        ctx->pc = 0x16B8A0u;
        goto label_16b8a0;
    }
    ctx->pc = 0x16B898u;
    SET_GPR_U32(ctx, 31, 0x16B8A0u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x16B898u, 0x16B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8A0u;
label_16b8a0:
    // 0x16b8a0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x16b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_16b8a4:
    // 0x16b8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16b8a8:
    // 0x16b8a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16b8ac:
    // 0x16b8ac: 0x8c56006c  lw          $s6, 0x6C($v0)
    ctx->pc = 0x16b8acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16b8b0:
    // 0x16b8b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16b8b4:
    // 0x16b8b4: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
label_16b8b8:
    if (ctx->pc == 0x16B8B8u) {
        ctx->pc = 0x16B8BCu;
        goto label_16b8bc;
    }
    ctx->pc = 0x16B8B4u;
    {
        const bool branch_taken_0x16b8b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b8b4) {
            ctx->pc = 0x16B8C8u;
            goto label_16b8c8;
        }
    }
    ctx->pc = 0x16B8BCu;
label_16b8bc:
    // 0x16b8bc: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x16b8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_16b8c0:
    // 0x16b8c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_16b8c4:
    if (ctx->pc == 0x16B8C4u) {
        ctx->pc = 0x16B8C8u;
        goto label_16b8c8;
    }
    ctx->pc = 0x16B8C0u;
    {
        const bool branch_taken_0x16b8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b8c0) {
            ctx->pc = 0x16B8CCu;
            goto label_16b8cc;
        }
    }
    ctx->pc = 0x16B8C8u;
label_16b8c8:
    // 0x16b8c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x16b8c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_16b8cc:
    // 0x16b8cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16b8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16b8d0:
    // 0x16b8d0: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x16b8d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_16b8d4:
    // 0x16b8d4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_16b8d8:
    if (ctx->pc == 0x16B8D8u) {
        ctx->pc = 0x16B8DCu;
        goto label_16b8dc;
    }
    ctx->pc = 0x16B8D4u;
    {
        const bool branch_taken_0x16b8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b8d4) {
            ctx->pc = 0x16B894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b894;
        }
    }
    ctx->pc = 0x16B8DCu;
label_16b8dc:
    // 0x16b8dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b8e0:
    // 0x16b8e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b8e4:
    // 0x16b8e4: 0xc04a018  jal         func_128060
label_16b8e8:
    if (ctx->pc == 0x16B8E8u) {
        ctx->pc = 0x16B8ECu;
        goto label_16b8ec;
    }
    ctx->pc = 0x16B8E4u;
    SET_GPR_U32(ctx, 31, 0x16B8ECu);
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x16B8E4u, 0x16B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8ECu;
label_16b8ec:
    // 0x16b8ec: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x16b8ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16b8f0:
    // 0x16b8f0: 0x16800030  bnez        $s4, . + 4 + (0x30 << 2)
label_16b8f4:
    if (ctx->pc == 0x16B8F4u) {
        ctx->pc = 0x16B8F8u;
        goto label_16b8f8;
    }
    ctx->pc = 0x16B8F0u;
    {
        const bool branch_taken_0x16b8f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b8f0) {
            ctx->pc = 0x16B9B4u;
            goto label_16b9b4;
        }
    }
    ctx->pc = 0x16B8F8u;
label_16b8f8:
    // 0x16b8f8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x16b8f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_16b8fc:
    // 0x16b8fc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16b900:
    // 0x16b900: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16b904:
    // 0x16b904: 0x24a542d0  addiu       $a1, $a1, 0x42D0
    ctx->pc = 0x16b904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17104));
label_16b908:
    // 0x16b908: 0xc08e57c  jal         func_2395F0
label_16b90c:
    if (ctx->pc == 0x16B90Cu) {
        ctx->pc = 0x16B910u;
        goto label_16b910;
    }
    ctx->pc = 0x16B908u;
    SET_GPR_U32(ctx, 31, 0x16B910u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16B908u, 0x16B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B910u;
label_16b910:
    // 0x16b910: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16b910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16b914:
    // 0x16b914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16b914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b918:
    // 0x16b918: 0xc0406d0  jal         func_101B40
label_16b91c:
    if (ctx->pc == 0x16B91Cu) {
        ctx->pc = 0x16B920u;
        goto label_16b920;
    }
    ctx->pc = 0x16B918u;
    SET_GPR_U32(ctx, 31, 0x16B920u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x16B918u, 0x16B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B920u;
label_16b920:
    // 0x16b920: 0x27c60001  addiu       $a2, $fp, 0x1
    ctx->pc = 0x16b920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_16b924:
    // 0x16b924: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16b924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16b928:
    // 0x16b928: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16b92c:
    // 0x16b92c: 0x24a541a0  addiu       $a1, $a1, 0x41A0
    ctx->pc = 0x16b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16800));
label_16b930:
    // 0x16b930: 0xc119600  jal         func_465800
label_16b934:
    if (ctx->pc == 0x16B934u) {
        ctx->pc = 0x16B938u;
        goto label_16b938;
    }
    ctx->pc = 0x16B930u;
    SET_GPR_U32(ctx, 31, 0x16B938u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x16B930u, 0x16B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B938u;
label_16b938:
    // 0x16b938: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16b93c:
    // 0x16b93c: 0x27858f60  addiu       $a1, $gp, -0x70A0
    ctx->pc = 0x16b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938464));
label_16b940:
    // 0x16b940: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x16b940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16b944:
    // 0x16b944: 0xc119600  jal         func_465800
label_16b948:
    if (ctx->pc == 0x16B948u) {
        ctx->pc = 0x16B94Cu;
        goto label_16b94c;
    }
    ctx->pc = 0x16B944u;
    SET_GPR_U32(ctx, 31, 0x16B94Cu);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x16B944u, 0x16B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B94Cu;
label_16b94c:
    // 0x16b94c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16b950:
    // 0x16b950: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16b954:
    // 0x16b954: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16b954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16b958:
    // 0x16b958: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16b95c:
    // 0x16b95c: 0x24a541e0  addiu       $a1, $a1, 0x41E0
    ctx->pc = 0x16b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16864));
label_16b960:
    // 0x16b960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b964:
    // 0x16b964: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16b964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16b968:
    // 0x16b968: 0xc08f558  jal         func_23D560
label_16b96c:
    if (ctx->pc == 0x16B96Cu) {
        ctx->pc = 0x16B970u;
        goto label_16b970;
    }
    ctx->pc = 0x16B968u;
    SET_GPR_U32(ctx, 31, 0x16B970u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16B968u, 0x16B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B970u;
label_16b970:
    // 0x16b970: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16b970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16b974:
    // 0x16b974: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x16b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_16b978:
    // 0x16b978: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x16b978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16b97c:
    // 0x16b97c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16b97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b980:
    // 0x16b980: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x16b980u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
label_16b984:
    // 0x16b984: 0x2508bbb0  addiu       $t0, $t0, -0x4450
    ctx->pc = 0x16b984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949808));
label_16b988:
    // 0x16b988: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x16b988u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16b98c:
    // 0x16b98c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16b98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16b990:
    // 0x16b990: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x16b990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_16b994:
    // 0x16b994: 0x320f809  jalr        $t9
label_16b998:
    if (ctx->pc == 0x16B998u) {
        ctx->pc = 0x16B99Cu;
        goto label_16b99c;
    }
    ctx->pc = 0x16B994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16B99Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B994u, 0x16B99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16B99Cu;
label_16b99c:
    // 0x16b99c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16b9a0:
    // 0x16b9a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b9a4:
    // 0x16b9a4: 0xc0406a0  jal         func_101A80
label_16b9a8:
    if (ctx->pc == 0x16B9A8u) {
        ctx->pc = 0x16B9ACu;
        goto label_16b9ac;
    }
    ctx->pc = 0x16B9A4u;
    SET_GPR_U32(ctx, 31, 0x16B9ACu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16B9A4u, 0x16B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9ACu;
label_16b9ac:
    // 0x16b9ac: 0x10000025  b           . + 4 + (0x25 << 2)
label_16b9b0:
    if (ctx->pc == 0x16B9B0u) {
        ctx->pc = 0x16B9B4u;
        goto label_16b9b4;
    }
    ctx->pc = 0x16B9ACu;
    {
        const bool branch_taken_0x16b9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9ac) {
            ctx->pc = 0x16BA44u;
            goto label_16ba44;
        }
    }
    ctx->pc = 0x16B9B4u;
label_16b9b4:
    // 0x16b9b4: 0x36100003  ori         $s0, $s0, 0x3
    ctx->pc = 0x16b9b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3);
label_16b9b8:
    // 0x16b9b8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16b9bc:
    // 0x16b9bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16b9c0:
    // 0x16b9c0: 0x24a54300  addiu       $a1, $a1, 0x4300
    ctx->pc = 0x16b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17152));
label_16b9c4:
    // 0x16b9c4: 0xc08e57c  jal         func_2395F0
label_16b9c8:
    if (ctx->pc == 0x16B9C8u) {
        ctx->pc = 0x16B9CCu;
        goto label_16b9cc;
    }
    ctx->pc = 0x16B9C4u;
    SET_GPR_U32(ctx, 31, 0x16B9CCu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16B9C4u, 0x16B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9CCu;
label_16b9cc:
    // 0x16b9cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16b9d0:
    // 0x16b9d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16b9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b9d4:
    // 0x16b9d4: 0xc0406d0  jal         func_101B40
label_16b9d8:
    if (ctx->pc == 0x16B9D8u) {
        ctx->pc = 0x16B9DCu;
        goto label_16b9dc;
    }
    ctx->pc = 0x16B9D4u;
    SET_GPR_U32(ctx, 31, 0x16B9DCu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x16B9D4u, 0x16B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9DCu;
label_16b9dc:
    // 0x16b9dc: 0x27c60001  addiu       $a2, $fp, 0x1
    ctx->pc = 0x16b9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_16b9e0:
    // 0x16b9e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16b9e4:
    // 0x16b9e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16b9e8:
    // 0x16b9e8: 0x24a541a0  addiu       $a1, $a1, 0x41A0
    ctx->pc = 0x16b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16800));
label_16b9ec:
    // 0x16b9ec: 0xc119600  jal         func_465800
label_16b9f0:
    if (ctx->pc == 0x16B9F0u) {
        ctx->pc = 0x16B9F4u;
        goto label_16b9f4;
    }
    ctx->pc = 0x16B9ECu;
    SET_GPR_U32(ctx, 31, 0x16B9F4u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x16B9ECu, 0x16B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9F4u;
label_16b9f4:
    // 0x16b9f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16b9f8:
    // 0x16b9f8: 0x27858f60  addiu       $a1, $gp, -0x70A0
    ctx->pc = 0x16b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938464));
label_16b9fc:
    // 0x16b9fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x16b9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16ba00:
    // 0x16ba00: 0xc119600  jal         func_465800
label_16ba04:
    if (ctx->pc == 0x16BA04u) {
        ctx->pc = 0x16BA08u;
        goto label_16ba08;
    }
    ctx->pc = 0x16BA00u;
    SET_GPR_U32(ctx, 31, 0x16BA08u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x16BA00u, 0x16BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA08u;
label_16ba08:
    // 0x16ba08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16ba0c:
    // 0x16ba0c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x16ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_16ba10:
    // 0x16ba10: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x16ba10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16ba14:
    // 0x16ba14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16ba14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ba18:
    // 0x16ba18: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x16ba18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
label_16ba1c:
    // 0x16ba1c: 0x2508bd70  addiu       $t0, $t0, -0x4290
    ctx->pc = 0x16ba1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950256));
label_16ba20:
    // 0x16ba20: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x16ba20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16ba24:
    // 0x16ba24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ba24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ba28:
    // 0x16ba28: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_16ba2c:
    // 0x16ba2c: 0x320f809  jalr        $t9
label_16ba30:
    if (ctx->pc == 0x16BA30u) {
        ctx->pc = 0x16BA34u;
        goto label_16ba34;
    }
    ctx->pc = 0x16BA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BA34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BA2Cu, 0x16BA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BA34u;
label_16ba34:
    // 0x16ba34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16ba38:
    // 0x16ba38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16ba38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ba3c:
    // 0x16ba3c: 0xc0406a0  jal         func_101A80
label_16ba40:
    if (ctx->pc == 0x16BA40u) {
        ctx->pc = 0x16BA44u;
        goto label_16ba44;
    }
    ctx->pc = 0x16BA3Cu;
    SET_GPR_U32(ctx, 31, 0x16BA44u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16BA3Cu, 0x16BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA44u;
label_16ba44:
    // 0x16ba44: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_16ba48:
    // 0x16ba48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ba4c:
    // 0x16ba4c: 0xc0406a0  jal         func_101A80
label_16ba50:
    if (ctx->pc == 0x16BA50u) {
        ctx->pc = 0x16BA54u;
        goto label_16ba54;
    }
    ctx->pc = 0x16BA4Cu;
    SET_GPR_U32(ctx, 31, 0x16BA54u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16BA4Cu, 0x16BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA54u;
label_16ba54:
    // 0x16ba54: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_16ba58:
    // 0x16ba58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ba5c:
    // 0x16ba5c: 0xc0406a0  jal         func_101A80
label_16ba60:
    if (ctx->pc == 0x16BA60u) {
        ctx->pc = 0x16BA64u;
        goto label_16ba64;
    }
    ctx->pc = 0x16BA5Cu;
    SET_GPR_U32(ctx, 31, 0x16BA64u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16BA5Cu, 0x16BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA64u;
label_16ba64:
    // 0x16ba64: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16ba68:
    // 0x16ba68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ba6c:
    // 0x16ba6c: 0xc0887b4  jal         func_221ED0
label_16ba70:
    if (ctx->pc == 0x16BA70u) {
        ctx->pc = 0x16BA74u;
        goto label_16ba74;
    }
    ctx->pc = 0x16BA6Cu;
    SET_GPR_U32(ctx, 31, 0x16BA74u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16BA6Cu, 0x16BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA74u;
label_16ba74:
    // 0x16ba74: 0x1000003f  b           . + 4 + (0x3F << 2)
label_16ba78:
    if (ctx->pc == 0x16BA78u) {
        ctx->pc = 0x16BA7Cu;
        goto label_16ba7c;
    }
    ctx->pc = 0x16BA74u;
    {
        const bool branch_taken_0x16ba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba74) {
            ctx->pc = 0x16BB74u;
            goto label_16bb74;
        }
    }
    ctx->pc = 0x16BA7Cu;
label_16ba7c:
    // 0x16ba7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16ba80:
    // 0x16ba80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16ba80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16ba84:
    // 0x16ba84: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16ba88:
    // 0x16ba88: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16ba88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16ba8c:
    // 0x16ba8c: 0x24a541f0  addiu       $a1, $a1, 0x41F0
    ctx->pc = 0x16ba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16880));
label_16ba90:
    // 0x16ba90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ba90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ba94:
    // 0x16ba94: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16ba94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16ba98:
    // 0x16ba98: 0xc08f558  jal         func_23D560
label_16ba9c:
    if (ctx->pc == 0x16BA9Cu) {
        ctx->pc = 0x16BAA0u;
        goto label_16baa0;
    }
    ctx->pc = 0x16BA98u;
    SET_GPR_U32(ctx, 31, 0x16BAA0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16BA98u, 0x16BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BAA0u;
label_16baa0:
    // 0x16baa0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16baa4:
    // 0x16baa4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16baa8:
    // 0x16baa8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x16baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_16baac:
    // 0x16baac: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_16bab0:
    if (ctx->pc == 0x16BAB0u) {
        ctx->pc = 0x16BAB4u;
        goto label_16bab4;
    }
    ctx->pc = 0x16BAACu;
    {
        const bool branch_taken_0x16baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16baac) {
            ctx->pc = 0x16BAECu;
            goto label_16baec;
        }
    }
    ctx->pc = 0x16BAB4u;
label_16bab4:
    // 0x16bab4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x16bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_16bab8:
    // 0x16bab8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_16babc:
    if (ctx->pc == 0x16BABCu) {
        ctx->pc = 0x16BAC0u;
        goto label_16bac0;
    }
    ctx->pc = 0x16BAB8u;
    {
        const bool branch_taken_0x16bab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16bab8) {
            ctx->pc = 0x16BAC8u;
            goto label_16bac8;
        }
    }
    ctx->pc = 0x16BAC0u;
label_16bac0:
    // 0x16bac0: 0x10000016  b           . + 4 + (0x16 << 2)
label_16bac4:
    if (ctx->pc == 0x16BAC4u) {
        ctx->pc = 0x16BAC8u;
        goto label_16bac8;
    }
    ctx->pc = 0x16BAC0u;
    {
        const bool branch_taken_0x16bac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bac0) {
            ctx->pc = 0x16BB1Cu;
            goto label_16bb1c;
        }
    }
    ctx->pc = 0x16BAC8u;
label_16bac8:
    // 0x16bac8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16bacc:
    // 0x16bacc: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x16baccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_16bad0:
    // 0x16bad0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16bad4:
    // 0x16bad4: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x16bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_16bad8:
    // 0x16bad8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x16bad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_16badc:
    // 0x16badc: 0xc040924  jal         func_102490
label_16bae0:
    if (ctx->pc == 0x16BAE0u) {
        ctx->pc = 0x16BAE4u;
        goto label_16bae4;
    }
    ctx->pc = 0x16BADCu;
    SET_GPR_U32(ctx, 31, 0x16BAE4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BADCu, 0x16BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BAE4u;
label_16bae4:
    // 0x16bae4: 0x1000000d  b           . + 4 + (0xD << 2)
label_16bae8:
    if (ctx->pc == 0x16BAE8u) {
        ctx->pc = 0x16BAECu;
        goto label_16baec;
    }
    ctx->pc = 0x16BAE4u;
    {
        const bool branch_taken_0x16bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bae4) {
            ctx->pc = 0x16BB1Cu;
            goto label_16bb1c;
        }
    }
    ctx->pc = 0x16BAECu;
label_16baec:
    // 0x16baec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16baf0:
    // 0x16baf0: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x16baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_16baf4:
    // 0x16baf4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16baf8:
    // 0x16baf8: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x16baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_16bafc:
    // 0x16bafc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x16bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_16bb00:
    // 0x16bb00: 0xc040924  jal         func_102490
label_16bb04:
    if (ctx->pc == 0x16BB04u) {
        ctx->pc = 0x16BB08u;
        goto label_16bb08;
    }
    ctx->pc = 0x16BB00u;
    SET_GPR_U32(ctx, 31, 0x16BB08u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BB00u, 0x16BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB08u;
label_16bb08:
    // 0x16bb08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16bb0c:
    // 0x16bb0c: 0x24050566  addiu       $a1, $zero, 0x566
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1382));
label_16bb10:
    // 0x16bb10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16bb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16bb14:
    // 0x16bb14: 0xc040924  jal         func_102490
label_16bb18:
    if (ctx->pc == 0x16BB18u) {
        ctx->pc = 0x16BB1Cu;
        goto label_16bb1c;
    }
    ctx->pc = 0x16BB14u;
    SET_GPR_U32(ctx, 31, 0x16BB1Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BB14u, 0x16BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB1Cu;
label_16bb1c:
    // 0x16bb1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16bb20:
    // 0x16bb20: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x16bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
label_16bb24:
    // 0x16bb24: 0x8f86bac8  lw          $a2, -0x4538($gp)
    ctx->pc = 0x16bb24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
label_16bb28:
    // 0x16bb28: 0xc040924  jal         func_102490
label_16bb2c:
    if (ctx->pc == 0x16BB2Cu) {
        ctx->pc = 0x16BB30u;
        goto label_16bb30;
    }
    ctx->pc = 0x16BB28u;
    SET_GPR_U32(ctx, 31, 0x16BB30u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BB28u, 0x16BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB30u;
label_16bb30:
    // 0x16bb30: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16bb34:
    // 0x16bb34: 0x2405056a  addiu       $a1, $zero, 0x56A
    ctx->pc = 0x16bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
label_16bb38:
    // 0x16bb38: 0x8f86bac8  lw          $a2, -0x4538($gp)
    ctx->pc = 0x16bb38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
label_16bb3c:
    // 0x16bb3c: 0xc040924  jal         func_102490
label_16bb40:
    if (ctx->pc == 0x16BB40u) {
        ctx->pc = 0x16BB44u;
        goto label_16bb44;
    }
    ctx->pc = 0x16BB3Cu;
    SET_GPR_U32(ctx, 31, 0x16BB44u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BB3Cu, 0x16BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB44u;
label_16bb44:
    // 0x16bb44: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x16bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_16bb48:
    // 0x16bb48: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x16bb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16bb4c:
    // 0x16bb4c: 0xc08ef28  jal         func_23BCA0
label_16bb50:
    if (ctx->pc == 0x16BB50u) {
        ctx->pc = 0x16BB54u;
        goto label_16bb54;
    }
    ctx->pc = 0x16BB4Cu;
    SET_GPR_U32(ctx, 31, 0x16BB54u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16BB4Cu, 0x16BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB54u;
label_16bb54:
    // 0x16bb54: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x16bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_16bb58:
    // 0x16bb58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bb5c:
    // 0x16bb5c: 0xc05afd4  jal         func_16BF50
label_16bb60:
    if (ctx->pc == 0x16BB60u) {
        ctx->pc = 0x16BB64u;
        goto label_16bb64;
    }
    ctx->pc = 0x16BB5Cu;
    SET_GPR_U32(ctx, 31, 0x16BB64u);
    ctx->pc = 0x16BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF50u, 0x16BB5Cu, 0x16BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB64u;
label_16bb64:
    // 0x16bb64: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16bb68:
    // 0x16bb68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16bb6c:
    // 0x16bb6c: 0xc0887b4  jal         func_221ED0
label_16bb70:
    if (ctx->pc == 0x16BB70u) {
        ctx->pc = 0x16BB74u;
        goto label_16bb74;
    }
    ctx->pc = 0x16BB6Cu;
    SET_GPR_U32(ctx, 31, 0x16BB74u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16BB6Cu, 0x16BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB74u;
label_16bb74:
    // 0x16bb74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16bb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16bb78:
    // 0x16bb78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16bb78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16bb7c:
    // 0x16bb7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16bb7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16bb80:
    // 0x16bb80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16bb80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16bb84:
    // 0x16bb84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16bb84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16bb88:
    // 0x16bb88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16bb88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16bb8c:
    // 0x16bb8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16bb8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16bb90:
    // 0x16bb90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bb90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16bb94:
    // 0x16bb94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16bb98:
    // 0x16bb98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bb98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bb9c:
    // 0x16bb9c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x16bb9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16bba0:
    // 0x16bba0: 0x3e00008  jr          $ra
label_16bba4:
    if (ctx->pc == 0x16BBA4u) {
        ctx->pc = 0x16BBA8u;
        goto label_16bba8;
    }
    ctx->pc = 0x16BBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BBA8u;
label_16bba8:
    // 0x16bba8: 0x0  nop
    ctx->pc = 0x16bba8u;
    // NOP
label_16bbac:
    // 0x16bbac: 0x0  nop
    ctx->pc = 0x16bbacu;
    // NOP
    ctx->pc = 0x16bbb0u;
}
