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

// Function: sub_00163B90
// Address: 0x163b90 - 0x1641e0
void sub_00163B90_0x163b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163B90_0x163b90");
#endif

    switch (ctx->pc) {
        case 0x163b90u: goto label_163b90;
        case 0x163b94u: goto label_163b94;
        case 0x163b98u: goto label_163b98;
        case 0x163b9cu: goto label_163b9c;
        case 0x163ba0u: goto label_163ba0;
        case 0x163ba4u: goto label_163ba4;
        case 0x163ba8u: goto label_163ba8;
        case 0x163bacu: goto label_163bac;
        case 0x163bb0u: goto label_163bb0;
        case 0x163bb4u: goto label_163bb4;
        case 0x163bb8u: goto label_163bb8;
        case 0x163bbcu: goto label_163bbc;
        case 0x163bc0u: goto label_163bc0;
        case 0x163bc4u: goto label_163bc4;
        case 0x163bc8u: goto label_163bc8;
        case 0x163bccu: goto label_163bcc;
        case 0x163bd0u: goto label_163bd0;
        case 0x163bd4u: goto label_163bd4;
        case 0x163bd8u: goto label_163bd8;
        case 0x163bdcu: goto label_163bdc;
        case 0x163be0u: goto label_163be0;
        case 0x163be4u: goto label_163be4;
        case 0x163be8u: goto label_163be8;
        case 0x163becu: goto label_163bec;
        case 0x163bf0u: goto label_163bf0;
        case 0x163bf4u: goto label_163bf4;
        case 0x163bf8u: goto label_163bf8;
        case 0x163bfcu: goto label_163bfc;
        case 0x163c00u: goto label_163c00;
        case 0x163c04u: goto label_163c04;
        case 0x163c08u: goto label_163c08;
        case 0x163c0cu: goto label_163c0c;
        case 0x163c10u: goto label_163c10;
        case 0x163c14u: goto label_163c14;
        case 0x163c18u: goto label_163c18;
        case 0x163c1cu: goto label_163c1c;
        case 0x163c20u: goto label_163c20;
        case 0x163c24u: goto label_163c24;
        case 0x163c28u: goto label_163c28;
        case 0x163c2cu: goto label_163c2c;
        case 0x163c30u: goto label_163c30;
        case 0x163c34u: goto label_163c34;
        case 0x163c38u: goto label_163c38;
        case 0x163c3cu: goto label_163c3c;
        case 0x163c40u: goto label_163c40;
        case 0x163c44u: goto label_163c44;
        case 0x163c48u: goto label_163c48;
        case 0x163c4cu: goto label_163c4c;
        case 0x163c50u: goto label_163c50;
        case 0x163c54u: goto label_163c54;
        case 0x163c58u: goto label_163c58;
        case 0x163c5cu: goto label_163c5c;
        case 0x163c60u: goto label_163c60;
        case 0x163c64u: goto label_163c64;
        case 0x163c68u: goto label_163c68;
        case 0x163c6cu: goto label_163c6c;
        case 0x163c70u: goto label_163c70;
        case 0x163c74u: goto label_163c74;
        case 0x163c78u: goto label_163c78;
        case 0x163c7cu: goto label_163c7c;
        case 0x163c80u: goto label_163c80;
        case 0x163c84u: goto label_163c84;
        case 0x163c88u: goto label_163c88;
        case 0x163c8cu: goto label_163c8c;
        case 0x163c90u: goto label_163c90;
        case 0x163c94u: goto label_163c94;
        case 0x163c98u: goto label_163c98;
        case 0x163c9cu: goto label_163c9c;
        case 0x163ca0u: goto label_163ca0;
        case 0x163ca4u: goto label_163ca4;
        case 0x163ca8u: goto label_163ca8;
        case 0x163cacu: goto label_163cac;
        case 0x163cb0u: goto label_163cb0;
        case 0x163cb4u: goto label_163cb4;
        case 0x163cb8u: goto label_163cb8;
        case 0x163cbcu: goto label_163cbc;
        case 0x163cc0u: goto label_163cc0;
        case 0x163cc4u: goto label_163cc4;
        case 0x163cc8u: goto label_163cc8;
        case 0x163cccu: goto label_163ccc;
        case 0x163cd0u: goto label_163cd0;
        case 0x163cd4u: goto label_163cd4;
        case 0x163cd8u: goto label_163cd8;
        case 0x163cdcu: goto label_163cdc;
        case 0x163ce0u: goto label_163ce0;
        case 0x163ce4u: goto label_163ce4;
        case 0x163ce8u: goto label_163ce8;
        case 0x163cecu: goto label_163cec;
        case 0x163cf0u: goto label_163cf0;
        case 0x163cf4u: goto label_163cf4;
        case 0x163cf8u: goto label_163cf8;
        case 0x163cfcu: goto label_163cfc;
        case 0x163d00u: goto label_163d00;
        case 0x163d04u: goto label_163d04;
        case 0x163d08u: goto label_163d08;
        case 0x163d0cu: goto label_163d0c;
        case 0x163d10u: goto label_163d10;
        case 0x163d14u: goto label_163d14;
        case 0x163d18u: goto label_163d18;
        case 0x163d1cu: goto label_163d1c;
        case 0x163d20u: goto label_163d20;
        case 0x163d24u: goto label_163d24;
        case 0x163d28u: goto label_163d28;
        case 0x163d2cu: goto label_163d2c;
        case 0x163d30u: goto label_163d30;
        case 0x163d34u: goto label_163d34;
        case 0x163d38u: goto label_163d38;
        case 0x163d3cu: goto label_163d3c;
        case 0x163d40u: goto label_163d40;
        case 0x163d44u: goto label_163d44;
        case 0x163d48u: goto label_163d48;
        case 0x163d4cu: goto label_163d4c;
        case 0x163d50u: goto label_163d50;
        case 0x163d54u: goto label_163d54;
        case 0x163d58u: goto label_163d58;
        case 0x163d5cu: goto label_163d5c;
        case 0x163d60u: goto label_163d60;
        case 0x163d64u: goto label_163d64;
        case 0x163d68u: goto label_163d68;
        case 0x163d6cu: goto label_163d6c;
        case 0x163d70u: goto label_163d70;
        case 0x163d74u: goto label_163d74;
        case 0x163d78u: goto label_163d78;
        case 0x163d7cu: goto label_163d7c;
        case 0x163d80u: goto label_163d80;
        case 0x163d84u: goto label_163d84;
        case 0x163d88u: goto label_163d88;
        case 0x163d8cu: goto label_163d8c;
        case 0x163d90u: goto label_163d90;
        case 0x163d94u: goto label_163d94;
        case 0x163d98u: goto label_163d98;
        case 0x163d9cu: goto label_163d9c;
        case 0x163da0u: goto label_163da0;
        case 0x163da4u: goto label_163da4;
        case 0x163da8u: goto label_163da8;
        case 0x163dacu: goto label_163dac;
        case 0x163db0u: goto label_163db0;
        case 0x163db4u: goto label_163db4;
        case 0x163db8u: goto label_163db8;
        case 0x163dbcu: goto label_163dbc;
        case 0x163dc0u: goto label_163dc0;
        case 0x163dc4u: goto label_163dc4;
        case 0x163dc8u: goto label_163dc8;
        case 0x163dccu: goto label_163dcc;
        case 0x163dd0u: goto label_163dd0;
        case 0x163dd4u: goto label_163dd4;
        case 0x163dd8u: goto label_163dd8;
        case 0x163ddcu: goto label_163ddc;
        case 0x163de0u: goto label_163de0;
        case 0x163de4u: goto label_163de4;
        case 0x163de8u: goto label_163de8;
        case 0x163decu: goto label_163dec;
        case 0x163df0u: goto label_163df0;
        case 0x163df4u: goto label_163df4;
        case 0x163df8u: goto label_163df8;
        case 0x163dfcu: goto label_163dfc;
        case 0x163e00u: goto label_163e00;
        case 0x163e04u: goto label_163e04;
        case 0x163e08u: goto label_163e08;
        case 0x163e0cu: goto label_163e0c;
        case 0x163e10u: goto label_163e10;
        case 0x163e14u: goto label_163e14;
        case 0x163e18u: goto label_163e18;
        case 0x163e1cu: goto label_163e1c;
        case 0x163e20u: goto label_163e20;
        case 0x163e24u: goto label_163e24;
        case 0x163e28u: goto label_163e28;
        case 0x163e2cu: goto label_163e2c;
        case 0x163e30u: goto label_163e30;
        case 0x163e34u: goto label_163e34;
        case 0x163e38u: goto label_163e38;
        case 0x163e3cu: goto label_163e3c;
        case 0x163e40u: goto label_163e40;
        case 0x163e44u: goto label_163e44;
        case 0x163e48u: goto label_163e48;
        case 0x163e4cu: goto label_163e4c;
        case 0x163e50u: goto label_163e50;
        case 0x163e54u: goto label_163e54;
        case 0x163e58u: goto label_163e58;
        case 0x163e5cu: goto label_163e5c;
        case 0x163e60u: goto label_163e60;
        case 0x163e64u: goto label_163e64;
        case 0x163e68u: goto label_163e68;
        case 0x163e6cu: goto label_163e6c;
        case 0x163e70u: goto label_163e70;
        case 0x163e74u: goto label_163e74;
        case 0x163e78u: goto label_163e78;
        case 0x163e7cu: goto label_163e7c;
        case 0x163e80u: goto label_163e80;
        case 0x163e84u: goto label_163e84;
        case 0x163e88u: goto label_163e88;
        case 0x163e8cu: goto label_163e8c;
        case 0x163e90u: goto label_163e90;
        case 0x163e94u: goto label_163e94;
        case 0x163e98u: goto label_163e98;
        case 0x163e9cu: goto label_163e9c;
        case 0x163ea0u: goto label_163ea0;
        case 0x163ea4u: goto label_163ea4;
        case 0x163ea8u: goto label_163ea8;
        case 0x163eacu: goto label_163eac;
        case 0x163eb0u: goto label_163eb0;
        case 0x163eb4u: goto label_163eb4;
        case 0x163eb8u: goto label_163eb8;
        case 0x163ebcu: goto label_163ebc;
        case 0x163ec0u: goto label_163ec0;
        case 0x163ec4u: goto label_163ec4;
        case 0x163ec8u: goto label_163ec8;
        case 0x163eccu: goto label_163ecc;
        case 0x163ed0u: goto label_163ed0;
        case 0x163ed4u: goto label_163ed4;
        case 0x163ed8u: goto label_163ed8;
        case 0x163edcu: goto label_163edc;
        case 0x163ee0u: goto label_163ee0;
        case 0x163ee4u: goto label_163ee4;
        case 0x163ee8u: goto label_163ee8;
        case 0x163eecu: goto label_163eec;
        case 0x163ef0u: goto label_163ef0;
        case 0x163ef4u: goto label_163ef4;
        case 0x163ef8u: goto label_163ef8;
        case 0x163efcu: goto label_163efc;
        case 0x163f00u: goto label_163f00;
        case 0x163f04u: goto label_163f04;
        case 0x163f08u: goto label_163f08;
        case 0x163f0cu: goto label_163f0c;
        case 0x163f10u: goto label_163f10;
        case 0x163f14u: goto label_163f14;
        case 0x163f18u: goto label_163f18;
        case 0x163f1cu: goto label_163f1c;
        case 0x163f20u: goto label_163f20;
        case 0x163f24u: goto label_163f24;
        case 0x163f28u: goto label_163f28;
        case 0x163f2cu: goto label_163f2c;
        case 0x163f30u: goto label_163f30;
        case 0x163f34u: goto label_163f34;
        case 0x163f38u: goto label_163f38;
        case 0x163f3cu: goto label_163f3c;
        case 0x163f40u: goto label_163f40;
        case 0x163f44u: goto label_163f44;
        case 0x163f48u: goto label_163f48;
        case 0x163f4cu: goto label_163f4c;
        case 0x163f50u: goto label_163f50;
        case 0x163f54u: goto label_163f54;
        case 0x163f58u: goto label_163f58;
        case 0x163f5cu: goto label_163f5c;
        case 0x163f60u: goto label_163f60;
        case 0x163f64u: goto label_163f64;
        case 0x163f68u: goto label_163f68;
        case 0x163f6cu: goto label_163f6c;
        case 0x163f70u: goto label_163f70;
        case 0x163f74u: goto label_163f74;
        case 0x163f78u: goto label_163f78;
        case 0x163f7cu: goto label_163f7c;
        case 0x163f80u: goto label_163f80;
        case 0x163f84u: goto label_163f84;
        case 0x163f88u: goto label_163f88;
        case 0x163f8cu: goto label_163f8c;
        case 0x163f90u: goto label_163f90;
        case 0x163f94u: goto label_163f94;
        case 0x163f98u: goto label_163f98;
        case 0x163f9cu: goto label_163f9c;
        case 0x163fa0u: goto label_163fa0;
        case 0x163fa4u: goto label_163fa4;
        case 0x163fa8u: goto label_163fa8;
        case 0x163facu: goto label_163fac;
        case 0x163fb0u: goto label_163fb0;
        case 0x163fb4u: goto label_163fb4;
        case 0x163fb8u: goto label_163fb8;
        case 0x163fbcu: goto label_163fbc;
        case 0x163fc0u: goto label_163fc0;
        case 0x163fc4u: goto label_163fc4;
        case 0x163fc8u: goto label_163fc8;
        case 0x163fccu: goto label_163fcc;
        case 0x163fd0u: goto label_163fd0;
        case 0x163fd4u: goto label_163fd4;
        case 0x163fd8u: goto label_163fd8;
        case 0x163fdcu: goto label_163fdc;
        case 0x163fe0u: goto label_163fe0;
        case 0x163fe4u: goto label_163fe4;
        case 0x163fe8u: goto label_163fe8;
        case 0x163fecu: goto label_163fec;
        case 0x163ff0u: goto label_163ff0;
        case 0x163ff4u: goto label_163ff4;
        case 0x163ff8u: goto label_163ff8;
        case 0x163ffcu: goto label_163ffc;
        case 0x164000u: goto label_164000;
        case 0x164004u: goto label_164004;
        case 0x164008u: goto label_164008;
        case 0x16400cu: goto label_16400c;
        case 0x164010u: goto label_164010;
        case 0x164014u: goto label_164014;
        case 0x164018u: goto label_164018;
        case 0x16401cu: goto label_16401c;
        case 0x164020u: goto label_164020;
        case 0x164024u: goto label_164024;
        case 0x164028u: goto label_164028;
        case 0x16402cu: goto label_16402c;
        case 0x164030u: goto label_164030;
        case 0x164034u: goto label_164034;
        case 0x164038u: goto label_164038;
        case 0x16403cu: goto label_16403c;
        case 0x164040u: goto label_164040;
        case 0x164044u: goto label_164044;
        case 0x164048u: goto label_164048;
        case 0x16404cu: goto label_16404c;
        case 0x164050u: goto label_164050;
        case 0x164054u: goto label_164054;
        case 0x164058u: goto label_164058;
        case 0x16405cu: goto label_16405c;
        case 0x164060u: goto label_164060;
        case 0x164064u: goto label_164064;
        case 0x164068u: goto label_164068;
        case 0x16406cu: goto label_16406c;
        case 0x164070u: goto label_164070;
        case 0x164074u: goto label_164074;
        case 0x164078u: goto label_164078;
        case 0x16407cu: goto label_16407c;
        case 0x164080u: goto label_164080;
        case 0x164084u: goto label_164084;
        case 0x164088u: goto label_164088;
        case 0x16408cu: goto label_16408c;
        case 0x164090u: goto label_164090;
        case 0x164094u: goto label_164094;
        case 0x164098u: goto label_164098;
        case 0x16409cu: goto label_16409c;
        case 0x1640a0u: goto label_1640a0;
        case 0x1640a4u: goto label_1640a4;
        case 0x1640a8u: goto label_1640a8;
        case 0x1640acu: goto label_1640ac;
        case 0x1640b0u: goto label_1640b0;
        case 0x1640b4u: goto label_1640b4;
        case 0x1640b8u: goto label_1640b8;
        case 0x1640bcu: goto label_1640bc;
        case 0x1640c0u: goto label_1640c0;
        case 0x1640c4u: goto label_1640c4;
        case 0x1640c8u: goto label_1640c8;
        case 0x1640ccu: goto label_1640cc;
        case 0x1640d0u: goto label_1640d0;
        case 0x1640d4u: goto label_1640d4;
        case 0x1640d8u: goto label_1640d8;
        case 0x1640dcu: goto label_1640dc;
        case 0x1640e0u: goto label_1640e0;
        case 0x1640e4u: goto label_1640e4;
        case 0x1640e8u: goto label_1640e8;
        case 0x1640ecu: goto label_1640ec;
        case 0x1640f0u: goto label_1640f0;
        case 0x1640f4u: goto label_1640f4;
        case 0x1640f8u: goto label_1640f8;
        case 0x1640fcu: goto label_1640fc;
        case 0x164100u: goto label_164100;
        case 0x164104u: goto label_164104;
        case 0x164108u: goto label_164108;
        case 0x16410cu: goto label_16410c;
        case 0x164110u: goto label_164110;
        case 0x164114u: goto label_164114;
        case 0x164118u: goto label_164118;
        case 0x16411cu: goto label_16411c;
        case 0x164120u: goto label_164120;
        case 0x164124u: goto label_164124;
        case 0x164128u: goto label_164128;
        case 0x16412cu: goto label_16412c;
        case 0x164130u: goto label_164130;
        case 0x164134u: goto label_164134;
        case 0x164138u: goto label_164138;
        case 0x16413cu: goto label_16413c;
        case 0x164140u: goto label_164140;
        case 0x164144u: goto label_164144;
        case 0x164148u: goto label_164148;
        case 0x16414cu: goto label_16414c;
        case 0x164150u: goto label_164150;
        case 0x164154u: goto label_164154;
        case 0x164158u: goto label_164158;
        case 0x16415cu: goto label_16415c;
        case 0x164160u: goto label_164160;
        case 0x164164u: goto label_164164;
        case 0x164168u: goto label_164168;
        case 0x16416cu: goto label_16416c;
        case 0x164170u: goto label_164170;
        case 0x164174u: goto label_164174;
        case 0x164178u: goto label_164178;
        case 0x16417cu: goto label_16417c;
        case 0x164180u: goto label_164180;
        case 0x164184u: goto label_164184;
        case 0x164188u: goto label_164188;
        case 0x16418cu: goto label_16418c;
        case 0x164190u: goto label_164190;
        case 0x164194u: goto label_164194;
        case 0x164198u: goto label_164198;
        case 0x16419cu: goto label_16419c;
        case 0x1641a0u: goto label_1641a0;
        case 0x1641a4u: goto label_1641a4;
        case 0x1641a8u: goto label_1641a8;
        case 0x1641acu: goto label_1641ac;
        case 0x1641b0u: goto label_1641b0;
        case 0x1641b4u: goto label_1641b4;
        case 0x1641b8u: goto label_1641b8;
        case 0x1641bcu: goto label_1641bc;
        case 0x1641c0u: goto label_1641c0;
        case 0x1641c4u: goto label_1641c4;
        case 0x1641c8u: goto label_1641c8;
        case 0x1641ccu: goto label_1641cc;
        case 0x1641d0u: goto label_1641d0;
        case 0x1641d4u: goto label_1641d4;
        case 0x1641d8u: goto label_1641d8;
        case 0x1641dcu: goto label_1641dc;
        default: break;
    }

    ctx->pc = 0x163b90u;

label_163b90:
    // 0x163b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_163b94:
    // 0x163b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_163b98:
    // 0x163b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x163b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_163b9c:
    // 0x163b9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163ba0:
    // 0x163ba0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x163ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_163ba4:
    // 0x163ba4: 0xc0557e8  jal         func_155FA0
label_163ba8:
    if (ctx->pc == 0x163BA8u) {
        ctx->pc = 0x163BACu;
        goto label_163bac;
    }
    ctx->pc = 0x163BA4u;
    SET_GPR_U32(ctx, 31, 0x163BACu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x163BA4u, 0x163BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BACu;
label_163bac:
    // 0x163bac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x163bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_163bb0:
    // 0x163bb0: 0x24633af0  addiu       $v1, $v1, 0x3AF0
    ctx->pc = 0x163bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15088));
label_163bb4:
    // 0x163bb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163bb8:
    // 0x163bb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x163bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_163bbc:
    // 0x163bbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163bc0:
    // 0x163bc0: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x163bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 0));
label_163bc4:
    // 0x163bc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163bc8:
    // 0x163bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163bcc:
    // 0x163bcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x163bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_163bd0:
    // 0x163bd0: 0x3e00008  jr          $ra
label_163bd4:
    if (ctx->pc == 0x163BD4u) {
        ctx->pc = 0x163BD8u;
        goto label_163bd8;
    }
    ctx->pc = 0x163BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163BD8u;
label_163bd8:
    // 0x163bd8: 0x0  nop
    ctx->pc = 0x163bd8u;
    // NOP
label_163bdc:
    // 0x163bdc: 0x0  nop
    ctx->pc = 0x163bdcu;
    // NOP
label_163be0:
    // 0x163be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_163be4:
    // 0x163be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_163be8:
    // 0x163be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x163be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_163bec:
    // 0x163bec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x163becu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_163bf0:
    // 0x163bf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163bf4:
    // 0x163bf4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_163bf8:
    if (ctx->pc == 0x163BF8u) {
        ctx->pc = 0x163BFCu;
        goto label_163bfc;
    }
    ctx->pc = 0x163BF4u;
    {
        const bool branch_taken_0x163bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163bf4) {
            ctx->pc = 0x163C3Cu;
            goto label_163c3c;
        }
    }
    ctx->pc = 0x163BFCu;
label_163bfc:
    // 0x163bfc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x163bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_163c00:
    // 0x163c00: 0x24633af0  addiu       $v1, $v1, 0x3AF0
    ctx->pc = 0x163c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15088));
label_163c04:
    // 0x163c04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163c08:
    // 0x163c08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x163c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_163c0c:
    // 0x163c0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163c10:
    // 0x163c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163c14:
    // 0x163c14: 0xc055950  jal         func_156540
label_163c18:
    if (ctx->pc == 0x163C18u) {
        ctx->pc = 0x163C1Cu;
        goto label_163c1c;
    }
    ctx->pc = 0x163C14u;
    SET_GPR_U32(ctx, 31, 0x163C1Cu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x163C14u, 0x163C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C1Cu;
label_163c1c:
    // 0x163c1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x163c1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_163c20:
    // 0x163c20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x163c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_163c24:
    // 0x163c24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x163c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_163c28:
    // 0x163c28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_163c2c:
    if (ctx->pc == 0x163C2Cu) {
        ctx->pc = 0x163C30u;
        goto label_163c30;
    }
    ctx->pc = 0x163C28u;
    {
        const bool branch_taken_0x163c28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x163c28) {
            ctx->pc = 0x163C3Cu;
            goto label_163c3c;
        }
    }
    ctx->pc = 0x163C30u;
label_163c30:
    // 0x163c30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163c34:
    // 0x163c34: 0xc0ba070  jal         func_2E81C0
label_163c38:
    if (ctx->pc == 0x163C38u) {
        ctx->pc = 0x163C3Cu;
        goto label_163c3c;
    }
    ctx->pc = 0x163C34u;
    SET_GPR_U32(ctx, 31, 0x163C3Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x163C34u, 0x163C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C3Cu;
label_163c3c:
    // 0x163c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_163c40:
    // 0x163c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163c44:
    // 0x163c44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_163c48:
    // 0x163c48: 0x3e00008  jr          $ra
label_163c4c:
    if (ctx->pc == 0x163C4Cu) {
        ctx->pc = 0x163C50u;
        goto label_163c50;
    }
    ctx->pc = 0x163C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163C50u;
label_163c50:
    // 0x163c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_163c54:
    // 0x163c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_163c58:
    // 0x163c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_163c5c:
    // 0x163c5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x163c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_163c60:
    // 0x163c60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x163c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_163c64:
    // 0x163c64: 0xc055974  jal         func_1565D0
label_163c68:
    if (ctx->pc == 0x163C68u) {
        ctx->pc = 0x163C6Cu;
        goto label_163c6c;
    }
    ctx->pc = 0x163C64u;
    SET_GPR_U32(ctx, 31, 0x163C6Cu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x163C64u, 0x163C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C6Cu;
label_163c6c:
    // 0x163c6c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x163c6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_163c70:
    // 0x163c70: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x163c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_163c74:
    // 0x163c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163c78:
    // 0x163c78: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_163c7c:
    if (ctx->pc == 0x163C7Cu) {
        ctx->pc = 0x163C80u;
        goto label_163c80;
    }
    ctx->pc = 0x163C78u;
    {
        const bool branch_taken_0x163c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163c78) {
            ctx->pc = 0x163C9Cu;
            goto label_163c9c;
        }
    }
    ctx->pc = 0x163C80u;
label_163c80:
    // 0x163c80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x163c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_163c84:
    // 0x163c84: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163c88:
    // 0x163c88: 0x24a538c0  addiu       $a1, $a1, 0x38C0
    ctx->pc = 0x163c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14528));
label_163c8c:
    // 0x163c8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x163c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_163c90:
    // 0x163c90: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x163c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_163c94:
    // 0x163c94: 0x320f809  jalr        $t9
label_163c98:
    if (ctx->pc == 0x163C98u) {
        ctx->pc = 0x163C9Cu;
        goto label_163c9c;
    }
    ctx->pc = 0x163C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x163C9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C94u, 0x163C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163C9Cu;
label_163c9c:
    // 0x163c9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x163c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163ca0:
    // 0x163ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163ca4:
    // 0x163ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_163ca8:
    // 0x163ca8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_163cac:
    // 0x163cac: 0x3e00008  jr          $ra
label_163cb0:
    if (ctx->pc == 0x163CB0u) {
        ctx->pc = 0x163CB4u;
        goto label_163cb4;
    }
    ctx->pc = 0x163CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163CB4u;
label_163cb4:
    // 0x163cb4: 0x0  nop
    ctx->pc = 0x163cb4u;
    // NOP
label_163cb8:
    // 0x163cb8: 0x0  nop
    ctx->pc = 0x163cb8u;
    // NOP
label_163cbc:
    // 0x163cbc: 0x0  nop
    ctx->pc = 0x163cbcu;
    // NOP
label_163cc0:
    // 0x163cc0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_163cc4:
    // 0x163cc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x163cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_163cc8:
    // 0x163cc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x163cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_163ccc:
    // 0x163ccc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_163cd0:
    // 0x163cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_163cd4:
    // 0x163cd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_163cd8:
    // 0x163cd8: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x163cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_163cdc:
    // 0x163cdc: 0xa3a500f0  sb          $a1, 0xF0($sp)
    ctx->pc = 0x163cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 5));
label_163ce0:
    // 0x163ce0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x163ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_163ce4:
    // 0x163ce4: 0x93a500f0  lbu         $a1, 0xF0($sp)
    ctx->pc = 0x163ce4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
label_163ce8:
    // 0x163ce8: 0xc055a78  jal         func_1569E0
label_163cec:
    if (ctx->pc == 0x163CECu) {
        ctx->pc = 0x163CF0u;
        goto label_163cf0;
    }
    ctx->pc = 0x163CE8u;
    SET_GPR_U32(ctx, 31, 0x163CF0u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x163CE8u, 0x163CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CF0u;
label_163cf0:
    // 0x163cf0: 0x93a300f0  lbu         $v1, 0xF0($sp)
    ctx->pc = 0x163cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
label_163cf4:
    // 0x163cf4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x163cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_163cf8:
    // 0x163cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163cfc:
    // 0x163cfc: 0x148300b6  bne         $a0, $v1, . + 4 + (0xB6 << 2)
label_163d00:
    if (ctx->pc == 0x163D00u) {
        ctx->pc = 0x163D04u;
        goto label_163d04;
    }
    ctx->pc = 0x163CFCu;
    {
        const bool branch_taken_0x163cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x163cfc) {
            ctx->pc = 0x163FD8u;
            goto label_163fd8;
        }
    }
    ctx->pc = 0x163D04u;
label_163d04:
    // 0x163d04: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_163d08:
    // 0x163d08: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x163d08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 0));
label_163d0c:
    // 0x163d0c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x163d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_163d10:
    // 0x163d10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x163d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163d14:
    // 0x163d14: 0xc059078  jal         func_1641E0
label_163d18:
    if (ctx->pc == 0x163D18u) {
        ctx->pc = 0x163D1Cu;
        goto label_163d1c;
    }
    ctx->pc = 0x163D14u;
    SET_GPR_U32(ctx, 31, 0x163D1Cu);
    ctx->pc = 0x1641E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1641E0u, 0x163D14u, 0x163D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D1Cu;
label_163d1c:
    // 0x163d1c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x163d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_163d20:
    // 0x163d20: 0xc047eb8  jal         func_11FAE0
label_163d24:
    if (ctx->pc == 0x163D24u) {
        ctx->pc = 0x163D28u;
        goto label_163d28;
    }
    ctx->pc = 0x163D20u;
    SET_GPR_U32(ctx, 31, 0x163D28u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x163D20u, 0x163D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D28u;
label_163d28:
    // 0x163d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163d2c:
    // 0x163d2c: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x163d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
label_163d30:
    // 0x163d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163d34:
    // 0x163d34: 0xc040ab0  jal         func_102AC0
label_163d38:
    if (ctx->pc == 0x163D38u) {
        ctx->pc = 0x163D3Cu;
        goto label_163d3c;
    }
    ctx->pc = 0x163D34u;
    SET_GPR_U32(ctx, 31, 0x163D3Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x163D34u, 0x163D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D3Cu;
label_163d3c:
    // 0x163d3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163d40:
    // 0x163d40: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x163d40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_163d44:
    // 0x163d44: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
label_163d48:
    if (ctx->pc == 0x163D48u) {
        ctx->pc = 0x163D4Cu;
        goto label_163d4c;
    }
    ctx->pc = 0x163D44u;
    {
        const bool branch_taken_0x163d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d44) {
            ctx->pc = 0x163EA4u;
            goto label_163ea4;
        }
    }
    ctx->pc = 0x163D4Cu;
label_163d4c:
    // 0x163d4c: 0x101023  negu        $v0, $s0
    ctx->pc = 0x163d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_163d50:
    // 0x163d50: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x163d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_163d54:
    // 0x163d54: 0x2a012710  slti        $at, $s0, 0x2710
    ctx->pc = 0x163d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10000) ? 1 : 0);
label_163d58:
    // 0x163d58: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_163d5c:
    if (ctx->pc == 0x163D5Cu) {
        ctx->pc = 0x163D60u;
        goto label_163d60;
    }
    ctx->pc = 0x163D58u;
    {
        const bool branch_taken_0x163d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d58) {
            ctx->pc = 0x163E24u;
            goto label_163e24;
        }
    }
    ctx->pc = 0x163D60u;
label_163d60:
    // 0x163d60: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x163d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_163d64:
    // 0x163d64: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x163d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_163d68:
    // 0x163d68: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163d6c:
    // 0x163d6c: 0x24a538e0  addiu       $a1, $a1, 0x38E0
    ctx->pc = 0x163d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14560));
label_163d70:
    // 0x163d70: 0x27868e40  addiu       $a2, $gp, -0x71C0
    ctx->pc = 0x163d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938176));
label_163d74:
    // 0x163d74: 0xc04206c  jal         func_1081B0
label_163d78:
    if (ctx->pc == 0x163D78u) {
        ctx->pc = 0x163D7Cu;
        goto label_163d7c;
    }
    ctx->pc = 0x163D74u;
    SET_GPR_U32(ctx, 31, 0x163D7Cu);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x163D74u, 0x163D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D7Cu;
label_163d7c:
    // 0x163d7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163d80:
    // 0x163d80: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x163d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_163d84:
    // 0x163d84: 0xc041b48  jal         func_106D20
label_163d88:
    if (ctx->pc == 0x163D88u) {
        ctx->pc = 0x163D8Cu;
        goto label_163d8c;
    }
    ctx->pc = 0x163D84u;
    SET_GPR_U32(ctx, 31, 0x163D8Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x163D84u, 0x163D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D8Cu;
label_163d8c:
    // 0x163d8c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x163d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_163d90:
    // 0x163d90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x163d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163d94:
    // 0x163d94: 0xc040304  jal         func_100C10
label_163d98:
    if (ctx->pc == 0x163D98u) {
        ctx->pc = 0x163D9Cu;
        goto label_163d9c;
    }
    ctx->pc = 0x163D94u;
    SET_GPR_U32(ctx, 31, 0x163D9Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x163D94u, 0x163D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D9Cu;
label_163d9c:
    // 0x163d9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x163d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_163da0:
    // 0x163da0: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x163da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_163da4:
    // 0x163da4: 0xc1190f4  jal         func_4643D0
label_163da8:
    if (ctx->pc == 0x163DA8u) {
        ctx->pc = 0x163DACu;
        goto label_163dac;
    }
    ctx->pc = 0x163DA4u;
    SET_GPR_U32(ctx, 31, 0x163DACu);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x163DA4u, 0x163DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DACu;
label_163dac:
    // 0x163dac: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x163dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_163db0:
    // 0x163db0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163db4:
    // 0x163db4: 0xc0402d4  jal         func_100B50
label_163db8:
    if (ctx->pc == 0x163DB8u) {
        ctx->pc = 0x163DBCu;
        goto label_163dbc;
    }
    ctx->pc = 0x163DB4u;
    SET_GPR_U32(ctx, 31, 0x163DBCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x163DB4u, 0x163DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DBCu;
label_163dbc:
    // 0x163dbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x163dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_163dc0:
    // 0x163dc0: 0xc041b38  jal         func_106CE0
label_163dc4:
    if (ctx->pc == 0x163DC4u) {
        ctx->pc = 0x163DC8u;
        goto label_163dc8;
    }
    ctx->pc = 0x163DC0u;
    SET_GPR_U32(ctx, 31, 0x163DC8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x163DC0u, 0x163DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DC8u;
label_163dc8:
    // 0x163dc8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x163dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_163dcc:
    // 0x163dcc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163dd0:
    // 0x163dd0: 0x24a53900  addiu       $a1, $a1, 0x3900
    ctx->pc = 0x163dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14592));
label_163dd4:
    // 0x163dd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x163dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163dd8:
    // 0x163dd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x163dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163ddc:
    // 0x163ddc: 0xc0bc3e2  jal         func_2F0F88
label_163de0:
    if (ctx->pc == 0x163DE0u) {
        ctx->pc = 0x163DE4u;
        goto label_163de4;
    }
    ctx->pc = 0x163DDCu;
    SET_GPR_U32(ctx, 31, 0x163DE4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x163DDCu, 0x163DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DE4u;
label_163de4:
    // 0x163de4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x163de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_163de8:
    // 0x163de8: 0xc041b38  jal         func_106CE0
label_163dec:
    if (ctx->pc == 0x163DECu) {
        ctx->pc = 0x163DF0u;
        goto label_163df0;
    }
    ctx->pc = 0x163DE8u;
    SET_GPR_U32(ctx, 31, 0x163DF0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x163DE8u, 0x163DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DF0u;
label_163df0:
    // 0x163df0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_163df4:
    // 0x163df4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163df8:
    // 0x163df8: 0x24a53910  addiu       $a1, $a1, 0x3910
    ctx->pc = 0x163df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14608));
label_163dfc:
    // 0x163dfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x163dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163e00:
    // 0x163e00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x163e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163e04:
    // 0x163e04: 0xc0bc3e2  jal         func_2F0F88
label_163e08:
    if (ctx->pc == 0x163E08u) {
        ctx->pc = 0x163E0Cu;
        goto label_163e0c;
    }
    ctx->pc = 0x163E04u;
    SET_GPR_U32(ctx, 31, 0x163E0Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x163E04u, 0x163E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E0Cu;
label_163e0c:
    // 0x163e0c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x163e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_163e10:
    // 0x163e10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163e14:
    // 0x163e14: 0xc0402d4  jal         func_100B50
label_163e18:
    if (ctx->pc == 0x163E18u) {
        ctx->pc = 0x163E1Cu;
        goto label_163e1c;
    }
    ctx->pc = 0x163E14u;
    SET_GPR_U32(ctx, 31, 0x163E1Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x163E14u, 0x163E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E1Cu;
label_163e1c:
    // 0x163e1c: 0x10000038  b           . + 4 + (0x38 << 2)
label_163e20:
    if (ctx->pc == 0x163E20u) {
        ctx->pc = 0x163E24u;
        goto label_163e24;
    }
    ctx->pc = 0x163E1Cu;
    {
        const bool branch_taken_0x163e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e1c) {
            ctx->pc = 0x163F00u;
            goto label_163f00;
        }
    }
    ctx->pc = 0x163E24u;
label_163e24:
    // 0x163e24: 0x2603d8f0  addiu       $v1, $s0, -0x2710
    ctx->pc = 0x163e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957296));
label_163e28:
    // 0x163e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163e2c:
    // 0x163e2c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_163e30:
    if (ctx->pc == 0x163E30u) {
        ctx->pc = 0x163E34u;
        goto label_163e34;
    }
    ctx->pc = 0x163E2Cu;
    {
        const bool branch_taken_0x163e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x163e2c) {
            ctx->pc = 0x163E74u;
            goto label_163e74;
        }
    }
    ctx->pc = 0x163E34u;
label_163e34:
    // 0x163e34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_163e38:
    if (ctx->pc == 0x163E38u) {
        ctx->pc = 0x163E3Cu;
        goto label_163e3c;
    }
    ctx->pc = 0x163E34u;
    {
        const bool branch_taken_0x163e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e34) {
            ctx->pc = 0x163E44u;
            goto label_163e44;
        }
    }
    ctx->pc = 0x163E3Cu;
label_163e3c:
    // 0x163e3c: 0x1000000d  b           . + 4 + (0xD << 2)
label_163e40:
    if (ctx->pc == 0x163E40u) {
        ctx->pc = 0x163E44u;
        goto label_163e44;
    }
    ctx->pc = 0x163E3Cu;
    {
        const bool branch_taken_0x163e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e3c) {
            ctx->pc = 0x163E74u;
            goto label_163e74;
        }
    }
    ctx->pc = 0x163E44u;
label_163e44:
    // 0x163e44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x163e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_163e48:
    // 0x163e48: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163e4c:
    // 0x163e4c: 0x24a53920  addiu       $a1, $a1, 0x3920
    ctx->pc = 0x163e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14624));
label_163e50:
    // 0x163e50: 0xc0bc3e2  jal         func_2F0F88
label_163e54:
    if (ctx->pc == 0x163E54u) {
        ctx->pc = 0x163E58u;
        goto label_163e58;
    }
    ctx->pc = 0x163E50u;
    SET_GPR_U32(ctx, 31, 0x163E58u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x163E50u, 0x163E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E58u;
label_163e58:
    // 0x163e58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_163e5c:
    // 0x163e5c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163e60:
    // 0x163e60: 0x24a53930  addiu       $a1, $a1, 0x3930
    ctx->pc = 0x163e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14640));
label_163e64:
    // 0x163e64: 0xc0bc3e2  jal         func_2F0F88
label_163e68:
    if (ctx->pc == 0x163E68u) {
        ctx->pc = 0x163E6Cu;
        goto label_163e6c;
    }
    ctx->pc = 0x163E64u;
    SET_GPR_U32(ctx, 31, 0x163E6Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x163E64u, 0x163E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E6Cu;
label_163e6c:
    // 0x163e6c: 0x10000024  b           . + 4 + (0x24 << 2)
label_163e70:
    if (ctx->pc == 0x163E70u) {
        ctx->pc = 0x163E74u;
        goto label_163e74;
    }
    ctx->pc = 0x163E6Cu;
    {
        const bool branch_taken_0x163e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e6c) {
            ctx->pc = 0x163F00u;
            goto label_163f00;
        }
    }
    ctx->pc = 0x163E74u;
label_163e74:
    // 0x163e74: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x163e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_163e78:
    // 0x163e78: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163e7c:
    // 0x163e7c: 0x24a53940  addiu       $a1, $a1, 0x3940
    ctx->pc = 0x163e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14656));
label_163e80:
    // 0x163e80: 0xc0bc3e2  jal         func_2F0F88
label_163e84:
    if (ctx->pc == 0x163E84u) {
        ctx->pc = 0x163E88u;
        goto label_163e88;
    }
    ctx->pc = 0x163E80u;
    SET_GPR_U32(ctx, 31, 0x163E88u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x163E80u, 0x163E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E88u;
label_163e88:
    // 0x163e88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_163e8c:
    // 0x163e8c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163e90:
    // 0x163e90: 0x24a53940  addiu       $a1, $a1, 0x3940
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14656));
label_163e94:
    // 0x163e94: 0xc0bc3e2  jal         func_2F0F88
label_163e98:
    if (ctx->pc == 0x163E98u) {
        ctx->pc = 0x163E9Cu;
        goto label_163e9c;
    }
    ctx->pc = 0x163E94u;
    SET_GPR_U32(ctx, 31, 0x163E9Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x163E94u, 0x163E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E9Cu;
label_163e9c:
    // 0x163e9c: 0x10000018  b           . + 4 + (0x18 << 2)
label_163ea0:
    if (ctx->pc == 0x163EA0u) {
        ctx->pc = 0x163EA4u;
        goto label_163ea4;
    }
    ctx->pc = 0x163E9Cu;
    {
        const bool branch_taken_0x163e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e9c) {
            ctx->pc = 0x163F00u;
            goto label_163f00;
        }
    }
    ctx->pc = 0x163EA4u;
label_163ea4:
    // 0x163ea4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x163ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_163ea8:
    // 0x163ea8: 0xc047eb8  jal         func_11FAE0
label_163eac:
    if (ctx->pc == 0x163EACu) {
        ctx->pc = 0x163EB0u;
        goto label_163eb0;
    }
    ctx->pc = 0x163EA8u;
    SET_GPR_U32(ctx, 31, 0x163EB0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x163EA8u, 0x163EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163EB0u;
label_163eb0:
    // 0x163eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163eb4:
    // 0x163eb4: 0xc047eb0  jal         func_11FAC0
label_163eb8:
    if (ctx->pc == 0x163EB8u) {
        ctx->pc = 0x163EBCu;
        goto label_163ebc;
    }
    ctx->pc = 0x163EB4u;
    SET_GPR_U32(ctx, 31, 0x163EBCu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x163EB4u, 0x163EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163EBCu;
label_163ebc:
    // 0x163ebc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163ec0:
    // 0x163ec0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x163ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_163ec4:
    // 0x163ec4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163ec8:
    // 0x163ec8: 0x24a53950  addiu       $a1, $a1, 0x3950
    ctx->pc = 0x163ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14672));
label_163ecc:
    // 0x163ecc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x163eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_163ed0:
    // 0x163ed0: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x163ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_163ed4:
    // 0x163ed4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x163ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163ed8:
    // 0x163ed8: 0xc0bc3e2  jal         func_2F0F88
label_163edc:
    if (ctx->pc == 0x163EDCu) {
        ctx->pc = 0x163EE0u;
        goto label_163ee0;
    }
    ctx->pc = 0x163ED8u;
    SET_GPR_U32(ctx, 31, 0x163EE0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x163ED8u, 0x163EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163EE0u;
label_163ee0:
    // 0x163ee0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_163ee4:
    // 0x163ee4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163ee8:
    // 0x163ee8: 0x24a53970  addiu       $a1, $a1, 0x3970
    ctx->pc = 0x163ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14704));
label_163eec:
    // 0x163eec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x163eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_163ef0:
    // 0x163ef0: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_163ef4:
    // 0x163ef4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x163ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163ef8:
    // 0x163ef8: 0xc0bc3e2  jal         func_2F0F88
label_163efc:
    if (ctx->pc == 0x163EFCu) {
        ctx->pc = 0x163F00u;
        goto label_163f00;
    }
    ctx->pc = 0x163EF8u;
    SET_GPR_U32(ctx, 31, 0x163F00u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x163EF8u, 0x163F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F00u;
label_163f00:
    // 0x163f00: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x163f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_163f04:
    // 0x163f04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x163f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_163f08:
    // 0x163f08: 0xc08e57c  jal         func_2395F0
label_163f0c:
    if (ctx->pc == 0x163F0Cu) {
        ctx->pc = 0x163F10u;
        goto label_163f10;
    }
    ctx->pc = 0x163F08u;
    SET_GPR_U32(ctx, 31, 0x163F10u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x163F08u, 0x163F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F10u;
label_163f10:
    // 0x163f10: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_163f14:
    // 0x163f14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163f18:
    // 0x163f18: 0xc0406d0  jal         func_101B40
label_163f1c:
    if (ctx->pc == 0x163F1Cu) {
        ctx->pc = 0x163F20u;
        goto label_163f20;
    }
    ctx->pc = 0x163F18u;
    SET_GPR_U32(ctx, 31, 0x163F20u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x163F18u, 0x163F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F20u;
label_163f20:
    // 0x163f20: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x163f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_163f24:
    // 0x163f24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_163f28:
    // 0x163f28: 0xc08e57c  jal         func_2395F0
label_163f2c:
    if (ctx->pc == 0x163F2Cu) {
        ctx->pc = 0x163F30u;
        goto label_163f30;
    }
    ctx->pc = 0x163F28u;
    SET_GPR_U32(ctx, 31, 0x163F30u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x163F28u, 0x163F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F30u;
label_163f30:
    // 0x163f30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_163f34:
    // 0x163f34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163f38:
    // 0x163f38: 0xc0406d0  jal         func_101B40
label_163f3c:
    if (ctx->pc == 0x163F3Cu) {
        ctx->pc = 0x163F40u;
        goto label_163f40;
    }
    ctx->pc = 0x163F38u;
    SET_GPR_U32(ctx, 31, 0x163F40u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x163F38u, 0x163F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F40u;
label_163f40:
    // 0x163f40: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x163f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_163f44:
    // 0x163f44: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163f48:
    // 0x163f48: 0x24a53988  addiu       $a1, $a1, 0x3988
    ctx->pc = 0x163f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14728));
label_163f4c:
    // 0x163f4c: 0xc0552e4  jal         func_154B90
label_163f50:
    if (ctx->pc == 0x163F50u) {
        ctx->pc = 0x163F54u;
        goto label_163f54;
    }
    ctx->pc = 0x163F4Cu;
    SET_GPR_U32(ctx, 31, 0x163F54u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x163F4Cu, 0x163F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F54u;
label_163f54:
    // 0x163f54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x163f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163f58:
    // 0x163f58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x163f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_163f5c:
    // 0x163f5c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x163f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_163f60:
    // 0x163f60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163f64:
    // 0x163f64: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x163f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_163f68:
    // 0x163f68: 0xc08c6c8  jal         func_231B20
label_163f6c:
    if (ctx->pc == 0x163F6Cu) {
        ctx->pc = 0x163F70u;
        goto label_163f70;
    }
    ctx->pc = 0x163F68u;
    SET_GPR_U32(ctx, 31, 0x163F70u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x163F68u, 0x163F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F70u;
label_163f70:
    // 0x163f70: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x163f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_163f74:
    // 0x163f74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x163f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_163f78:
    // 0x163f78: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x163f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_163f7c:
    // 0x163f7c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x163f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_163f80:
    // 0x163f80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163f84:
    // 0x163f84: 0x24a53998  addiu       $a1, $a1, 0x3998
    ctx->pc = 0x163f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14744));
label_163f88:
    // 0x163f88: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x163f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_163f8c:
    // 0x163f8c: 0xc055fb0  jal         func_157EC0
label_163f90:
    if (ctx->pc == 0x163F90u) {
        ctx->pc = 0x163F94u;
        goto label_163f94;
    }
    ctx->pc = 0x163F8Cu;
    SET_GPR_U32(ctx, 31, 0x163F94u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x163F8Cu, 0x163F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F94u;
label_163f94:
    // 0x163f94: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x163f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_163f98:
    // 0x163f98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x163f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_163f9c:
    // 0x163f9c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x163f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_163fa0:
    // 0x163fa0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x163fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_163fa4:
    // 0x163fa4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163fa8:
    // 0x163fa8: 0x24a539a8  addiu       $a1, $a1, 0x39A8
    ctx->pc = 0x163fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14760));
label_163fac:
    // 0x163fac: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x163facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_163fb0:
    // 0x163fb0: 0xc055fb0  jal         func_157EC0
label_163fb4:
    if (ctx->pc == 0x163FB4u) {
        ctx->pc = 0x163FB8u;
        goto label_163fb8;
    }
    ctx->pc = 0x163FB0u;
    SET_GPR_U32(ctx, 31, 0x163FB8u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x163FB0u, 0x163FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163FB8u;
label_163fb8:
    // 0x163fb8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_163fbc:
    // 0x163fbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163fc0:
    // 0x163fc0: 0xc0406a0  jal         func_101A80
label_163fc4:
    if (ctx->pc == 0x163FC4u) {
        ctx->pc = 0x163FC8u;
        goto label_163fc8;
    }
    ctx->pc = 0x163FC0u;
    SET_GPR_U32(ctx, 31, 0x163FC8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x163FC0u, 0x163FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163FC8u;
label_163fc8:
    // 0x163fc8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_163fcc:
    // 0x163fcc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163fd0:
    // 0x163fd0: 0xc0406a0  jal         func_101A80
label_163fd4:
    if (ctx->pc == 0x163FD4u) {
        ctx->pc = 0x163FD8u;
        goto label_163fd8;
    }
    ctx->pc = 0x163FD0u;
    SET_GPR_U32(ctx, 31, 0x163FD8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x163FD0u, 0x163FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163FD8u;
label_163fd8:
    // 0x163fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x163fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163fdc:
    // 0x163fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_163fe0:
    // 0x163fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163fe4:
    // 0x163fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_163fe8:
    // 0x163fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_163fec:
    // 0x163fec: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x163fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_163ff0:
    // 0x163ff0: 0x3e00008  jr          $ra
label_163ff4:
    if (ctx->pc == 0x163FF4u) {
        ctx->pc = 0x163FF8u;
        goto label_163ff8;
    }
    ctx->pc = 0x163FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163FF8u;
label_163ff8:
    // 0x163ff8: 0x0  nop
    ctx->pc = 0x163ff8u;
    // NOP
label_163ffc:
    // 0x163ffc: 0x0  nop
    ctx->pc = 0x163ffcu;
    // NOP
label_164000:
    // 0x164000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x164000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_164004:
    // 0x164004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_164008:
    // 0x164008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16400c:
    // 0x16400c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_164010:
    // 0x164010: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x164010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_164014:
    // 0x164014: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x164014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_164018:
    // 0x164018: 0xc055b3c  jal         func_156CF0
label_16401c:
    if (ctx->pc == 0x16401Cu) {
        ctx->pc = 0x164020u;
        goto label_164020;
    }
    ctx->pc = 0x164018u;
    SET_GPR_U32(ctx, 31, 0x164020u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x164018u, 0x164020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164020u;
label_164020:
    // 0x164020: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x164020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_164024:
    // 0x164024: 0x90630050  lbu         $v1, 0x50($v1)
    ctx->pc = 0x164024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_164028:
    // 0x164028: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_16402c:
    if (ctx->pc == 0x16402Cu) {
        ctx->pc = 0x164030u;
        goto label_164030;
    }
    ctx->pc = 0x164028u;
    {
        const bool branch_taken_0x164028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164028) {
            ctx->pc = 0x1640F0u;
            goto label_1640f0;
        }
    }
    ctx->pc = 0x164030u;
label_164030:
    // 0x164030: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x164030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164034:
    // 0x164034: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x164034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_164038:
    // 0x164038: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16403c:
    // 0x16403c: 0x24a539b8  addiu       $a1, $a1, 0x39B8
    ctx->pc = 0x16403cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14776));
label_164040:
    // 0x164040: 0xc05621c  jal         func_158870
label_164044:
    if (ctx->pc == 0x164044u) {
        ctx->pc = 0x164048u;
        goto label_164048;
    }
    ctx->pc = 0x164040u;
    SET_GPR_U32(ctx, 31, 0x164048u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164040u, 0x164048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164048u;
label_164048:
    // 0x164048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16404c:
    // 0x16404c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_164050:
    if (ctx->pc == 0x164050u) {
        ctx->pc = 0x164054u;
        goto label_164054;
    }
    ctx->pc = 0x16404Cu;
    {
        const bool branch_taken_0x16404c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16404c) {
            ctx->pc = 0x164084u;
            goto label_164084;
        }
    }
    ctx->pc = 0x164054u;
label_164054:
    // 0x164054: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x164054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_164058:
    // 0x164058: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16405c:
    // 0x16405c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16405cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164060:
    // 0x164060: 0xc08c9a8  jal         func_2326A0
label_164064:
    if (ctx->pc == 0x164064u) {
        ctx->pc = 0x164068u;
        goto label_164068;
    }
    ctx->pc = 0x164060u;
    SET_GPR_U32(ctx, 31, 0x164068u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x164060u, 0x164068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164068u;
label_164068:
    // 0x164068: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x164068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16406c:
    // 0x16406c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x16406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_164070:
    // 0x164070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x164070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_164074:
    // 0x164074: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x164074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_164078:
    // 0x164078: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x164078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16407c:
    // 0x16407c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_164080:
    // 0x164080: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x164080u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_164084:
    // 0x164084: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x164084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_164088:
    // 0x164088: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16408c:
    // 0x16408c: 0x24a539c8  addiu       $a1, $a1, 0x39C8
    ctx->pc = 0x16408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14792));
label_164090:
    // 0x164090: 0xc05621c  jal         func_158870
label_164094:
    if (ctx->pc == 0x164094u) {
        ctx->pc = 0x164098u;
        goto label_164098;
    }
    ctx->pc = 0x164090u;
    SET_GPR_U32(ctx, 31, 0x164098u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164090u, 0x164098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164098u;
label_164098:
    // 0x164098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16409c:
    // 0x16409c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1640a0:
    if (ctx->pc == 0x1640A0u) {
        ctx->pc = 0x1640A4u;
        goto label_1640a4;
    }
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16409c) {
            ctx->pc = 0x1640D4u;
            goto label_1640d4;
        }
    }
    ctx->pc = 0x1640A4u;
label_1640a4:
    // 0x1640a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1640a8:
    // 0x1640a8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1640a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1640ac:
    // 0x1640ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1640acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1640b0:
    // 0x1640b0: 0xc08c9a8  jal         func_2326A0
label_1640b4:
    if (ctx->pc == 0x1640B4u) {
        ctx->pc = 0x1640B8u;
        goto label_1640b8;
    }
    ctx->pc = 0x1640B0u;
    SET_GPR_U32(ctx, 31, 0x1640B8u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1640B0u, 0x1640B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1640B8u;
label_1640b8:
    // 0x1640b8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1640b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1640bc:
    // 0x1640bc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1640bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1640c0:
    // 0x1640c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1640c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1640c4:
    // 0x1640c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1640c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1640c8:
    // 0x1640c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1640c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1640cc:
    // 0x1640cc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1640ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1640d0:
    // 0x1640d0: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1640d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1640d4:
    // 0x1640d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1640d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1640d8:
    // 0x1640d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1640dc:
    if (ctx->pc == 0x1640DCu) {
        ctx->pc = 0x1640E0u;
        goto label_1640e0;
    }
    ctx->pc = 0x1640D8u;
    {
        const bool branch_taken_0x1640d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1640d8) {
            ctx->pc = 0x1640F0u;
            goto label_1640f0;
        }
    }
    ctx->pc = 0x1640E0u;
label_1640e0:
    // 0x1640e0: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1640e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1640e4:
    // 0x1640e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1640e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1640e8:
    // 0x1640e8: 0xc08ef28  jal         func_23BCA0
label_1640ec:
    if (ctx->pc == 0x1640ECu) {
        ctx->pc = 0x1640F0u;
        goto label_1640f0;
    }
    ctx->pc = 0x1640E8u;
    SET_GPR_U32(ctx, 31, 0x1640F0u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1640E8u, 0x1640F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1640F0u;
label_1640f0:
    // 0x1640f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1640f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1640f4:
    // 0x1640f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1640f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1640f8:
    // 0x1640f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1640f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1640fc:
    // 0x1640fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1640fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_164100:
    // 0x164100: 0x3e00008  jr          $ra
label_164104:
    if (ctx->pc == 0x164104u) {
        ctx->pc = 0x164108u;
        goto label_164108;
    }
    ctx->pc = 0x164100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164108u;
label_164108:
    // 0x164108: 0x0  nop
    ctx->pc = 0x164108u;
    // NOP
label_16410c:
    // 0x16410c: 0x0  nop
    ctx->pc = 0x16410cu;
    // NOP
label_164110:
    // 0x164110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_164114:
    // 0x164114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_164118:
    // 0x164118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16411c:
    // 0x16411c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16411cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_164120:
    // 0x164120: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x164120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_164124:
    // 0x164124: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x164124u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
label_164128:
    // 0x164128: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x164128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_16412c:
    // 0x16412c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16412cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_164130:
    // 0x164130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164134:
    // 0x164134: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_164138:
    if (ctx->pc == 0x164138u) {
        ctx->pc = 0x16413Cu;
        goto label_16413c;
    }
    ctx->pc = 0x164134u;
    {
        const bool branch_taken_0x164134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x164134) {
            ctx->pc = 0x1641C0u;
            goto label_1641c0;
        }
    }
    ctx->pc = 0x16413Cu;
label_16413c:
    // 0x16413c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x16413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_164140:
    // 0x164140: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x164140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_164144:
    // 0x164144: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_164148:
    if (ctx->pc == 0x164148u) {
        ctx->pc = 0x16414Cu;
        goto label_16414c;
    }
    ctx->pc = 0x164144u;
    {
        const bool branch_taken_0x164144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164144) {
            ctx->pc = 0x164154u;
            goto label_164154;
        }
    }
    ctx->pc = 0x16414Cu;
label_16414c:
    // 0x16414c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_164150:
    if (ctx->pc == 0x164150u) {
        ctx->pc = 0x164154u;
        goto label_164154;
    }
    ctx->pc = 0x16414Cu;
    {
        const bool branch_taken_0x16414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16414c) {
            ctx->pc = 0x1641C0u;
            goto label_1641c0;
        }
    }
    ctx->pc = 0x164154u;
label_164154:
    // 0x164154: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x164154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_164158:
    // 0x164158: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16415c:
    // 0x16415c: 0x24a539d8  addiu       $a1, $a1, 0x39D8
    ctx->pc = 0x16415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14808));
label_164160:
    // 0x164160: 0xc05621c  jal         func_158870
label_164164:
    if (ctx->pc == 0x164164u) {
        ctx->pc = 0x164168u;
        goto label_164168;
    }
    ctx->pc = 0x164160u;
    SET_GPR_U32(ctx, 31, 0x164168u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164160u, 0x164168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164168u;
label_164168:
    // 0x164168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16416c:
    // 0x16416c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_164170:
    if (ctx->pc == 0x164170u) {
        ctx->pc = 0x164174u;
        goto label_164174;
    }
    ctx->pc = 0x16416Cu;
    {
        const bool branch_taken_0x16416c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16416c) {
            ctx->pc = 0x16419Cu;
            goto label_16419c;
        }
    }
    ctx->pc = 0x164174u;
label_164174:
    // 0x164174: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x164174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_164178:
    // 0x164178: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16417c:
    // 0x16417c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16417cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164180:
    // 0x164180: 0xc08c49c  jal         func_231270
label_164184:
    if (ctx->pc == 0x164184u) {
        ctx->pc = 0x164188u;
        goto label_164188;
    }
    ctx->pc = 0x164180u;
    SET_GPR_U32(ctx, 31, 0x164188u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x164180u, 0x164188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164188u;
label_164188:
    // 0x164188: 0xc78182d8  lwc1        $f1, -0x7D28($gp)
    ctx->pc = 0x164188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16418c:
    // 0x16418c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16418cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_164190:
    // 0x164190: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_164194:
    if (ctx->pc == 0x164194u) {
        ctx->pc = 0x164198u;
        goto label_164198;
    }
    ctx->pc = 0x164190u;
    {
        const bool branch_taken_0x164190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164190) {
            ctx->pc = 0x16419Cu;
            goto label_16419c;
        }
    }
    ctx->pc = 0x164198u;
label_164198:
    // 0x164198: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x164198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16419c:
    // 0x16419c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_1641a0:
    if (ctx->pc == 0x1641A0u) {
        ctx->pc = 0x1641A4u;
        goto label_1641a4;
    }
    ctx->pc = 0x16419Cu;
    {
        const bool branch_taken_0x16419c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16419c) {
            ctx->pc = 0x1641C0u;
            goto label_1641c0;
        }
    }
    ctx->pc = 0x1641A4u;
label_1641a4:
    // 0x1641a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1641a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1641a8:
    // 0x1641a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1641a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1641ac:
    // 0x1641ac: 0xc059078  jal         func_1641E0
label_1641b0:
    if (ctx->pc == 0x1641B0u) {
        ctx->pc = 0x1641B4u;
        goto label_1641b4;
    }
    ctx->pc = 0x1641ACu;
    SET_GPR_U32(ctx, 31, 0x1641B4u);
    ctx->pc = 0x1641E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1641E0u, 0x1641ACu, 0x1641B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641B4u;
label_1641b4:
    // 0x1641b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1641b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1641b8:
    // 0x1641b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1641b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1641bc:
    // 0x1641bc: 0xa0640050  sb          $a0, 0x50($v1)
    ctx->pc = 0x1641bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 4));
label_1641c0:
    // 0x1641c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1641c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1641c4:
    // 0x1641c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1641c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1641c8:
    // 0x1641c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1641c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1641cc:
    // 0x1641cc: 0x3e00008  jr          $ra
label_1641d0:
    if (ctx->pc == 0x1641D0u) {
        ctx->pc = 0x1641D4u;
        goto label_1641d4;
    }
    ctx->pc = 0x1641CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1641CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1641D4u;
label_1641d4:
    // 0x1641d4: 0x0  nop
    ctx->pc = 0x1641d4u;
    // NOP
label_1641d8:
    // 0x1641d8: 0x0  nop
    ctx->pc = 0x1641d8u;
    // NOP
label_1641dc:
    // 0x1641dc: 0x0  nop
    ctx->pc = 0x1641dcu;
    // NOP
    ctx->pc = 0x1641e0u;
}
