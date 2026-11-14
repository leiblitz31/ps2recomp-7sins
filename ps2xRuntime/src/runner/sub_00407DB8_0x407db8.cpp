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

// Function: sub_00407DB8
// Address: 0x407db8 - 0x408418
void sub_00407DB8_0x407db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407DB8_0x407db8");
#endif

    switch (ctx->pc) {
        case 0x407db8u: goto label_407db8;
        case 0x407dbcu: goto label_407dbc;
        case 0x407dc0u: goto label_407dc0;
        case 0x407dc4u: goto label_407dc4;
        case 0x407dc8u: goto label_407dc8;
        case 0x407dccu: goto label_407dcc;
        case 0x407dd0u: goto label_407dd0;
        case 0x407dd4u: goto label_407dd4;
        case 0x407dd8u: goto label_407dd8;
        case 0x407ddcu: goto label_407ddc;
        case 0x407de0u: goto label_407de0;
        case 0x407de4u: goto label_407de4;
        case 0x407de8u: goto label_407de8;
        case 0x407decu: goto label_407dec;
        case 0x407df0u: goto label_407df0;
        case 0x407df4u: goto label_407df4;
        case 0x407df8u: goto label_407df8;
        case 0x407dfcu: goto label_407dfc;
        case 0x407e00u: goto label_407e00;
        case 0x407e04u: goto label_407e04;
        case 0x407e08u: goto label_407e08;
        case 0x407e0cu: goto label_407e0c;
        case 0x407e10u: goto label_407e10;
        case 0x407e14u: goto label_407e14;
        case 0x407e18u: goto label_407e18;
        case 0x407e1cu: goto label_407e1c;
        case 0x407e20u: goto label_407e20;
        case 0x407e24u: goto label_407e24;
        case 0x407e28u: goto label_407e28;
        case 0x407e2cu: goto label_407e2c;
        case 0x407e30u: goto label_407e30;
        case 0x407e34u: goto label_407e34;
        case 0x407e38u: goto label_407e38;
        case 0x407e3cu: goto label_407e3c;
        case 0x407e40u: goto label_407e40;
        case 0x407e44u: goto label_407e44;
        case 0x407e48u: goto label_407e48;
        case 0x407e4cu: goto label_407e4c;
        case 0x407e50u: goto label_407e50;
        case 0x407e54u: goto label_407e54;
        case 0x407e58u: goto label_407e58;
        case 0x407e5cu: goto label_407e5c;
        case 0x407e60u: goto label_407e60;
        case 0x407e64u: goto label_407e64;
        case 0x407e68u: goto label_407e68;
        case 0x407e6cu: goto label_407e6c;
        case 0x407e70u: goto label_407e70;
        case 0x407e74u: goto label_407e74;
        case 0x407e78u: goto label_407e78;
        case 0x407e7cu: goto label_407e7c;
        case 0x407e80u: goto label_407e80;
        case 0x407e84u: goto label_407e84;
        case 0x407e88u: goto label_407e88;
        case 0x407e8cu: goto label_407e8c;
        case 0x407e90u: goto label_407e90;
        case 0x407e94u: goto label_407e94;
        case 0x407e98u: goto label_407e98;
        case 0x407e9cu: goto label_407e9c;
        case 0x407ea0u: goto label_407ea0;
        case 0x407ea4u: goto label_407ea4;
        case 0x407ea8u: goto label_407ea8;
        case 0x407eacu: goto label_407eac;
        case 0x407eb0u: goto label_407eb0;
        case 0x407eb4u: goto label_407eb4;
        case 0x407eb8u: goto label_407eb8;
        case 0x407ebcu: goto label_407ebc;
        case 0x407ec0u: goto label_407ec0;
        case 0x407ec4u: goto label_407ec4;
        case 0x407ec8u: goto label_407ec8;
        case 0x407eccu: goto label_407ecc;
        case 0x407ed0u: goto label_407ed0;
        case 0x407ed4u: goto label_407ed4;
        case 0x407ed8u: goto label_407ed8;
        case 0x407edcu: goto label_407edc;
        case 0x407ee0u: goto label_407ee0;
        case 0x407ee4u: goto label_407ee4;
        case 0x407ee8u: goto label_407ee8;
        case 0x407eecu: goto label_407eec;
        case 0x407ef0u: goto label_407ef0;
        case 0x407ef4u: goto label_407ef4;
        case 0x407ef8u: goto label_407ef8;
        case 0x407efcu: goto label_407efc;
        case 0x407f00u: goto label_407f00;
        case 0x407f04u: goto label_407f04;
        case 0x407f08u: goto label_407f08;
        case 0x407f0cu: goto label_407f0c;
        case 0x407f10u: goto label_407f10;
        case 0x407f14u: goto label_407f14;
        case 0x407f18u: goto label_407f18;
        case 0x407f1cu: goto label_407f1c;
        case 0x407f20u: goto label_407f20;
        case 0x407f24u: goto label_407f24;
        case 0x407f28u: goto label_407f28;
        case 0x407f2cu: goto label_407f2c;
        case 0x407f30u: goto label_407f30;
        case 0x407f34u: goto label_407f34;
        case 0x407f38u: goto label_407f38;
        case 0x407f3cu: goto label_407f3c;
        case 0x407f40u: goto label_407f40;
        case 0x407f44u: goto label_407f44;
        case 0x407f48u: goto label_407f48;
        case 0x407f4cu: goto label_407f4c;
        case 0x407f50u: goto label_407f50;
        case 0x407f54u: goto label_407f54;
        case 0x407f58u: goto label_407f58;
        case 0x407f5cu: goto label_407f5c;
        case 0x407f60u: goto label_407f60;
        case 0x407f64u: goto label_407f64;
        case 0x407f68u: goto label_407f68;
        case 0x407f6cu: goto label_407f6c;
        case 0x407f70u: goto label_407f70;
        case 0x407f74u: goto label_407f74;
        case 0x407f78u: goto label_407f78;
        case 0x407f7cu: goto label_407f7c;
        case 0x407f80u: goto label_407f80;
        case 0x407f84u: goto label_407f84;
        case 0x407f88u: goto label_407f88;
        case 0x407f8cu: goto label_407f8c;
        case 0x407f90u: goto label_407f90;
        case 0x407f94u: goto label_407f94;
        case 0x407f98u: goto label_407f98;
        case 0x407f9cu: goto label_407f9c;
        case 0x407fa0u: goto label_407fa0;
        case 0x407fa4u: goto label_407fa4;
        case 0x407fa8u: goto label_407fa8;
        case 0x407facu: goto label_407fac;
        case 0x407fb0u: goto label_407fb0;
        case 0x407fb4u: goto label_407fb4;
        case 0x407fb8u: goto label_407fb8;
        case 0x407fbcu: goto label_407fbc;
        case 0x407fc0u: goto label_407fc0;
        case 0x407fc4u: goto label_407fc4;
        case 0x407fc8u: goto label_407fc8;
        case 0x407fccu: goto label_407fcc;
        case 0x407fd0u: goto label_407fd0;
        case 0x407fd4u: goto label_407fd4;
        case 0x407fd8u: goto label_407fd8;
        case 0x407fdcu: goto label_407fdc;
        case 0x407fe0u: goto label_407fe0;
        case 0x407fe4u: goto label_407fe4;
        case 0x407fe8u: goto label_407fe8;
        case 0x407fecu: goto label_407fec;
        case 0x407ff0u: goto label_407ff0;
        case 0x407ff4u: goto label_407ff4;
        case 0x407ff8u: goto label_407ff8;
        case 0x407ffcu: goto label_407ffc;
        case 0x408000u: goto label_408000;
        case 0x408004u: goto label_408004;
        case 0x408008u: goto label_408008;
        case 0x40800cu: goto label_40800c;
        case 0x408010u: goto label_408010;
        case 0x408014u: goto label_408014;
        case 0x408018u: goto label_408018;
        case 0x40801cu: goto label_40801c;
        case 0x408020u: goto label_408020;
        case 0x408024u: goto label_408024;
        case 0x408028u: goto label_408028;
        case 0x40802cu: goto label_40802c;
        case 0x408030u: goto label_408030;
        case 0x408034u: goto label_408034;
        case 0x408038u: goto label_408038;
        case 0x40803cu: goto label_40803c;
        case 0x408040u: goto label_408040;
        case 0x408044u: goto label_408044;
        case 0x408048u: goto label_408048;
        case 0x40804cu: goto label_40804c;
        case 0x408050u: goto label_408050;
        case 0x408054u: goto label_408054;
        case 0x408058u: goto label_408058;
        case 0x40805cu: goto label_40805c;
        case 0x408060u: goto label_408060;
        case 0x408064u: goto label_408064;
        case 0x408068u: goto label_408068;
        case 0x40806cu: goto label_40806c;
        case 0x408070u: goto label_408070;
        case 0x408074u: goto label_408074;
        case 0x408078u: goto label_408078;
        case 0x40807cu: goto label_40807c;
        case 0x408080u: goto label_408080;
        case 0x408084u: goto label_408084;
        case 0x408088u: goto label_408088;
        case 0x40808cu: goto label_40808c;
        case 0x408090u: goto label_408090;
        case 0x408094u: goto label_408094;
        case 0x408098u: goto label_408098;
        case 0x40809cu: goto label_40809c;
        case 0x4080a0u: goto label_4080a0;
        case 0x4080a4u: goto label_4080a4;
        case 0x4080a8u: goto label_4080a8;
        case 0x4080acu: goto label_4080ac;
        case 0x4080b0u: goto label_4080b0;
        case 0x4080b4u: goto label_4080b4;
        case 0x4080b8u: goto label_4080b8;
        case 0x4080bcu: goto label_4080bc;
        case 0x4080c0u: goto label_4080c0;
        case 0x4080c4u: goto label_4080c4;
        case 0x4080c8u: goto label_4080c8;
        case 0x4080ccu: goto label_4080cc;
        case 0x4080d0u: goto label_4080d0;
        case 0x4080d4u: goto label_4080d4;
        case 0x4080d8u: goto label_4080d8;
        case 0x4080dcu: goto label_4080dc;
        case 0x4080e0u: goto label_4080e0;
        case 0x4080e4u: goto label_4080e4;
        case 0x4080e8u: goto label_4080e8;
        case 0x4080ecu: goto label_4080ec;
        case 0x4080f0u: goto label_4080f0;
        case 0x4080f4u: goto label_4080f4;
        case 0x4080f8u: goto label_4080f8;
        case 0x4080fcu: goto label_4080fc;
        case 0x408100u: goto label_408100;
        case 0x408104u: goto label_408104;
        case 0x408108u: goto label_408108;
        case 0x40810cu: goto label_40810c;
        case 0x408110u: goto label_408110;
        case 0x408114u: goto label_408114;
        case 0x408118u: goto label_408118;
        case 0x40811cu: goto label_40811c;
        case 0x408120u: goto label_408120;
        case 0x408124u: goto label_408124;
        case 0x408128u: goto label_408128;
        case 0x40812cu: goto label_40812c;
        case 0x408130u: goto label_408130;
        case 0x408134u: goto label_408134;
        case 0x408138u: goto label_408138;
        case 0x40813cu: goto label_40813c;
        case 0x408140u: goto label_408140;
        case 0x408144u: goto label_408144;
        case 0x408148u: goto label_408148;
        case 0x40814cu: goto label_40814c;
        case 0x408150u: goto label_408150;
        case 0x408154u: goto label_408154;
        case 0x408158u: goto label_408158;
        case 0x40815cu: goto label_40815c;
        case 0x408160u: goto label_408160;
        case 0x408164u: goto label_408164;
        case 0x408168u: goto label_408168;
        case 0x40816cu: goto label_40816c;
        case 0x408170u: goto label_408170;
        case 0x408174u: goto label_408174;
        case 0x408178u: goto label_408178;
        case 0x40817cu: goto label_40817c;
        case 0x408180u: goto label_408180;
        case 0x408184u: goto label_408184;
        case 0x408188u: goto label_408188;
        case 0x40818cu: goto label_40818c;
        case 0x408190u: goto label_408190;
        case 0x408194u: goto label_408194;
        case 0x408198u: goto label_408198;
        case 0x40819cu: goto label_40819c;
        case 0x4081a0u: goto label_4081a0;
        case 0x4081a4u: goto label_4081a4;
        case 0x4081a8u: goto label_4081a8;
        case 0x4081acu: goto label_4081ac;
        case 0x4081b0u: goto label_4081b0;
        case 0x4081b4u: goto label_4081b4;
        case 0x4081b8u: goto label_4081b8;
        case 0x4081bcu: goto label_4081bc;
        case 0x4081c0u: goto label_4081c0;
        case 0x4081c4u: goto label_4081c4;
        case 0x4081c8u: goto label_4081c8;
        case 0x4081ccu: goto label_4081cc;
        case 0x4081d0u: goto label_4081d0;
        case 0x4081d4u: goto label_4081d4;
        case 0x4081d8u: goto label_4081d8;
        case 0x4081dcu: goto label_4081dc;
        case 0x4081e0u: goto label_4081e0;
        case 0x4081e4u: goto label_4081e4;
        case 0x4081e8u: goto label_4081e8;
        case 0x4081ecu: goto label_4081ec;
        case 0x4081f0u: goto label_4081f0;
        case 0x4081f4u: goto label_4081f4;
        case 0x4081f8u: goto label_4081f8;
        case 0x4081fcu: goto label_4081fc;
        case 0x408200u: goto label_408200;
        case 0x408204u: goto label_408204;
        case 0x408208u: goto label_408208;
        case 0x40820cu: goto label_40820c;
        case 0x408210u: goto label_408210;
        case 0x408214u: goto label_408214;
        case 0x408218u: goto label_408218;
        case 0x40821cu: goto label_40821c;
        case 0x408220u: goto label_408220;
        case 0x408224u: goto label_408224;
        case 0x408228u: goto label_408228;
        case 0x40822cu: goto label_40822c;
        case 0x408230u: goto label_408230;
        case 0x408234u: goto label_408234;
        case 0x408238u: goto label_408238;
        case 0x40823cu: goto label_40823c;
        case 0x408240u: goto label_408240;
        case 0x408244u: goto label_408244;
        case 0x408248u: goto label_408248;
        case 0x40824cu: goto label_40824c;
        case 0x408250u: goto label_408250;
        case 0x408254u: goto label_408254;
        case 0x408258u: goto label_408258;
        case 0x40825cu: goto label_40825c;
        case 0x408260u: goto label_408260;
        case 0x408264u: goto label_408264;
        case 0x408268u: goto label_408268;
        case 0x40826cu: goto label_40826c;
        case 0x408270u: goto label_408270;
        case 0x408274u: goto label_408274;
        case 0x408278u: goto label_408278;
        case 0x40827cu: goto label_40827c;
        case 0x408280u: goto label_408280;
        case 0x408284u: goto label_408284;
        case 0x408288u: goto label_408288;
        case 0x40828cu: goto label_40828c;
        case 0x408290u: goto label_408290;
        case 0x408294u: goto label_408294;
        case 0x408298u: goto label_408298;
        case 0x40829cu: goto label_40829c;
        case 0x4082a0u: goto label_4082a0;
        case 0x4082a4u: goto label_4082a4;
        case 0x4082a8u: goto label_4082a8;
        case 0x4082acu: goto label_4082ac;
        case 0x4082b0u: goto label_4082b0;
        case 0x4082b4u: goto label_4082b4;
        case 0x4082b8u: goto label_4082b8;
        case 0x4082bcu: goto label_4082bc;
        case 0x4082c0u: goto label_4082c0;
        case 0x4082c4u: goto label_4082c4;
        case 0x4082c8u: goto label_4082c8;
        case 0x4082ccu: goto label_4082cc;
        case 0x4082d0u: goto label_4082d0;
        case 0x4082d4u: goto label_4082d4;
        case 0x4082d8u: goto label_4082d8;
        case 0x4082dcu: goto label_4082dc;
        case 0x4082e0u: goto label_4082e0;
        case 0x4082e4u: goto label_4082e4;
        case 0x4082e8u: goto label_4082e8;
        case 0x4082ecu: goto label_4082ec;
        case 0x4082f0u: goto label_4082f0;
        case 0x4082f4u: goto label_4082f4;
        case 0x4082f8u: goto label_4082f8;
        case 0x4082fcu: goto label_4082fc;
        case 0x408300u: goto label_408300;
        case 0x408304u: goto label_408304;
        case 0x408308u: goto label_408308;
        case 0x40830cu: goto label_40830c;
        case 0x408310u: goto label_408310;
        case 0x408314u: goto label_408314;
        case 0x408318u: goto label_408318;
        case 0x40831cu: goto label_40831c;
        case 0x408320u: goto label_408320;
        case 0x408324u: goto label_408324;
        case 0x408328u: goto label_408328;
        case 0x40832cu: goto label_40832c;
        case 0x408330u: goto label_408330;
        case 0x408334u: goto label_408334;
        case 0x408338u: goto label_408338;
        case 0x40833cu: goto label_40833c;
        case 0x408340u: goto label_408340;
        case 0x408344u: goto label_408344;
        case 0x408348u: goto label_408348;
        case 0x40834cu: goto label_40834c;
        case 0x408350u: goto label_408350;
        case 0x408354u: goto label_408354;
        case 0x408358u: goto label_408358;
        case 0x40835cu: goto label_40835c;
        case 0x408360u: goto label_408360;
        case 0x408364u: goto label_408364;
        case 0x408368u: goto label_408368;
        case 0x40836cu: goto label_40836c;
        case 0x408370u: goto label_408370;
        case 0x408374u: goto label_408374;
        case 0x408378u: goto label_408378;
        case 0x40837cu: goto label_40837c;
        case 0x408380u: goto label_408380;
        case 0x408384u: goto label_408384;
        case 0x408388u: goto label_408388;
        case 0x40838cu: goto label_40838c;
        case 0x408390u: goto label_408390;
        case 0x408394u: goto label_408394;
        case 0x408398u: goto label_408398;
        case 0x40839cu: goto label_40839c;
        case 0x4083a0u: goto label_4083a0;
        case 0x4083a4u: goto label_4083a4;
        case 0x4083a8u: goto label_4083a8;
        case 0x4083acu: goto label_4083ac;
        case 0x4083b0u: goto label_4083b0;
        case 0x4083b4u: goto label_4083b4;
        case 0x4083b8u: goto label_4083b8;
        case 0x4083bcu: goto label_4083bc;
        case 0x4083c0u: goto label_4083c0;
        case 0x4083c4u: goto label_4083c4;
        case 0x4083c8u: goto label_4083c8;
        case 0x4083ccu: goto label_4083cc;
        case 0x4083d0u: goto label_4083d0;
        case 0x4083d4u: goto label_4083d4;
        case 0x4083d8u: goto label_4083d8;
        case 0x4083dcu: goto label_4083dc;
        case 0x4083e0u: goto label_4083e0;
        case 0x4083e4u: goto label_4083e4;
        case 0x4083e8u: goto label_4083e8;
        case 0x4083ecu: goto label_4083ec;
        case 0x4083f0u: goto label_4083f0;
        case 0x4083f4u: goto label_4083f4;
        case 0x4083f8u: goto label_4083f8;
        case 0x4083fcu: goto label_4083fc;
        case 0x408400u: goto label_408400;
        case 0x408404u: goto label_408404;
        case 0x408408u: goto label_408408;
        case 0x40840cu: goto label_40840c;
        case 0x408410u: goto label_408410;
        case 0x408414u: goto label_408414;
        default: break;
    }

    ctx->pc = 0x407db8u;

label_407db8:
    // 0x407db8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x407db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_407dbc:
    // 0x407dbc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x407dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_407dc0:
    // 0x407dc0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x407dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_407dc4:
    // 0x407dc4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x407dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_407dc8:
    // 0x407dc8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x407dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_407dcc:
    // 0x407dcc: 0x10800180  beqz        $a0, . + 4 + (0x180 << 2)
label_407dd0:
    if (ctx->pc == 0x407DD0u) {
        ctx->pc = 0x407DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DCCu;
        // 0x407dd0: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DD4u;
        goto label_407dd4;
    }
    ctx->pc = 0x407DCCu;
    {
        const bool branch_taken_0x407dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x407DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DCCu;
        // 0x407dd0: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407dcc) {
            ctx->pc = 0x4083D0u;
            goto label_4083d0;
        }
    }
    ctx->pc = 0x407DD4u;
label_407dd4:
    // 0x407dd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x407dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407dd8:
    // 0x407dd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x407dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407ddc:
    // 0x407ddc: 0xc10493e  jal         func_4124F8
label_407de0:
    if (ctx->pc == 0x407DE0u) {
        ctx->pc = 0x407DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DDCu;
        // 0x407de0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DE4u;
        goto label_407de4;
    }
    ctx->pc = 0x407DDCu;
    SET_GPR_U32(ctx, 31, 0x407DE4u);
    ctx->pc = 0x407DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407DDCu;
    // 0x407de0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x407DDCu, 0x407DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407DE4u;
label_407de4:
    // 0x407de4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x407de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407de8:
    // 0x407de8: 0x12000183  beqz        $s0, . + 4 + (0x183 << 2)
label_407dec:
    if (ctx->pc == 0x407DECu) {
        ctx->pc = 0x407DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DE8u;
        // 0x407dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DF0u;
        goto label_407df0;
    }
    ctx->pc = 0x407DE8u;
    {
        const bool branch_taken_0x407de8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x407DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DE8u;
        // 0x407dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407de8) {
            ctx->pc = 0x4083F8u;
            goto label_4083f8;
        }
    }
    ctx->pc = 0x407DF0u;
label_407df0:
    // 0x407df0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x407df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_407df4:
    // 0x407df4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x407df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_407df8:
    // 0x407df8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x407df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_407dfc:
    // 0x407dfc: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x407dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
label_407e00:
    // 0x407e00: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x407e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_407e04:
    // 0x407e04: 0x3c0a0041  lui         $t2, 0x41
    ctx->pc = 0x407e04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65 << 16));
label_407e08:
    // 0x407e08: 0x24849c88  addiu       $a0, $a0, -0x6378
    ctx->pc = 0x407e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941832));
label_407e0c:
    // 0x407e0c: 0x25298418  addiu       $t1, $t1, -0x7BE8
    ctx->pc = 0x407e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935576));
label_407e10:
    // 0x407e10: 0x254a8448  addiu       $t2, $t2, -0x7BB8
    ctx->pc = 0x407e10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935624));
label_407e14:
    // 0x407e14: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x407e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_407e18:
    // 0x407e18: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x407e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
label_407e1c:
    // 0x407e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x407e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407e20:
    // 0x407e20: 0xffa00048  sd          $zero, 0x48($sp)
    ctx->pc = 0x407e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 0));
label_407e24:
    // 0x407e24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x407e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407e28:
    // 0x407e28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x407e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407e2c:
    // 0x407e2c: 0xc0f8bae  jal         func_3E2EB8
label_407e30:
    if (ctx->pc == 0x407E30u) {
        ctx->pc = 0x407E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E2Cu;
        // 0x407e30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E34u;
        goto label_407e34;
    }
    ctx->pc = 0x407E2Cu;
    SET_GPR_U32(ctx, 31, 0x407E34u);
    ctx->pc = 0x407E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E2Cu;
    // 0x407e30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2EB8u, 0x407E2Cu, 0x407E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E34u;
label_407e34:
    // 0x407e34: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x407e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_407e38:
    // 0x407e38: 0xafb00070  sw          $s0, 0x70($sp)
    ctx->pc = 0x407e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 16));
label_407e3c:
    // 0x407e3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x407e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407e40:
    // 0x407e40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_407e44:
    if (ctx->pc == 0x407E44u) {
        ctx->pc = 0x407E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E40u;
        // 0x407e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E48u;
        goto label_407e48;
    }
    ctx->pc = 0x407E40u;
    {
        const bool branch_taken_0x407e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x407E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E40u;
        // 0x407e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407e40) {
            ctx->pc = 0x407E58u;
            goto label_407e58;
        }
    }
    ctx->pc = 0x407E48u;
label_407e48:
    // 0x407e48: 0xc10496a  jal         func_4125A8
label_407e4c:
    if (ctx->pc == 0x407E4Cu) {
        ctx->pc = 0x407E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E48u;
        // 0x407e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E50u;
        goto label_407e50;
    }
    ctx->pc = 0x407E48u;
    SET_GPR_U32(ctx, 31, 0x407E50u);
    ctx->pc = 0x407E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E48u;
    // 0x407e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x407E48u, 0x407E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E50u;
label_407e50:
    // 0x407e50: 0x10000169  b           . + 4 + (0x169 << 2)
label_407e54:
    if (ctx->pc == 0x407E54u) {
        ctx->pc = 0x407E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E50u;
        // 0x407e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E58u;
        goto label_407e58;
    }
    ctx->pc = 0x407E50u;
    {
        const bool branch_taken_0x407e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E50u;
        // 0x407e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407e50) {
            ctx->pc = 0x4083F8u;
            goto label_4083f8;
        }
    }
    ctx->pc = 0x407E58u;
label_407e58:
    // 0x407e58: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407e5c:
    // 0x407e5c: 0xc0f8514  jal         func_3E1450
label_407e60:
    if (ctx->pc == 0x407E60u) {
        ctx->pc = 0x407E64u;
        goto label_407e64;
    }
    ctx->pc = 0x407E5Cu;
    SET_GPR_U32(ctx, 31, 0x407E64u);
    ctx->pc = 0x3E1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1450u, 0x407E5Cu, 0x407E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E64u;
label_407e64:
    // 0x407e64: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x407e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_407e68:
    // 0x407e68: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x407e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_407e6c:
    // 0x407e6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_407e70:
    if (ctx->pc == 0x407E70u) {
        ctx->pc = 0x407E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E6Cu;
        // 0x407e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E74u;
        goto label_407e74;
    }
    ctx->pc = 0x407E6Cu;
    {
        const bool branch_taken_0x407e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x407E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E6Cu;
        // 0x407e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407e6c) {
            ctx->pc = 0x407E94u;
            goto label_407e94;
        }
    }
    ctx->pc = 0x407E74u;
label_407e74:
    // 0x407e74: 0xc10496a  jal         func_4125A8
label_407e78:
    if (ctx->pc == 0x407E78u) {
        ctx->pc = 0x407E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E74u;
        // 0x407e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E7Cu;
        goto label_407e7c;
    }
    ctx->pc = 0x407E74u;
    SET_GPR_U32(ctx, 31, 0x407E7Cu);
    ctx->pc = 0x407E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E74u;
    // 0x407e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x407E74u, 0x407E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E7Cu;
label_407e7c:
    // 0x407e7c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x407e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_407e80:
    // 0x407e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x407e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407e84:
    // 0x407e84: 0xc0f9452  jal         func_3E5148
label_407e88:
    if (ctx->pc == 0x407E88u) {
        ctx->pc = 0x407E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E84u;
        // 0x407e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E8Cu;
        goto label_407e8c;
    }
    ctx->pc = 0x407E84u;
    SET_GPR_U32(ctx, 31, 0x407E8Cu);
    ctx->pc = 0x407E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E84u;
    // 0x407e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5148u, 0x407E84u, 0x407E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E8Cu;
label_407e8c:
    // 0x407e8c: 0x1000015a  b           . + 4 + (0x15A << 2)
label_407e90:
    if (ctx->pc == 0x407E90u) {
        ctx->pc = 0x407E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E8Cu;
        // 0x407e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E94u;
        goto label_407e94;
    }
    ctx->pc = 0x407E8Cu;
    {
        const bool branch_taken_0x407e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E8Cu;
        // 0x407e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407e8c) {
            ctx->pc = 0x4083F8u;
            goto label_4083f8;
        }
    }
    ctx->pc = 0x407E94u;
label_407e94:
    // 0x407e94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407e98:
    // 0x407e98: 0xc0bc204  jal         func_2F0810
label_407e9c:
    if (ctx->pc == 0x407E9Cu) {
        ctx->pc = 0x407EA0u;
        goto label_407ea0;
    }
    ctx->pc = 0x407E98u;
    SET_GPR_U32(ctx, 31, 0x407EA0u);
    ctx->pc = 0x2F0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0810u, 0x407E98u, 0x407EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407EA0u;
label_407ea0:
    // 0x407ea0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_407ea4:
    if (ctx->pc == 0x407EA4u) {
        ctx->pc = 0x407EA8u;
        goto label_407ea8;
    }
    ctx->pc = 0x407EA0u;
    {
        const bool branch_taken_0x407ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x407ea0) {
            ctx->pc = 0x407EF8u;
            goto label_407ef8;
        }
    }
    ctx->pc = 0x407EA8u;
label_407ea8:
    // 0x407ea8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x407ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_407eac:
    // 0x407eac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_407eb0:
    if (ctx->pc == 0x407EB0u) {
        ctx->pc = 0x407EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EACu;
        // 0x407eb0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407EB4u;
        goto label_407eb4;
    }
    ctx->pc = 0x407EACu;
    {
        const bool branch_taken_0x407eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EACu;
        // 0x407eb0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407eac) {
            ctx->pc = 0x407EC8u;
            goto label_407ec8;
        }
    }
    ctx->pc = 0x407EB4u;
label_407eb4:
    // 0x407eb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x407eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_407eb8:
    // 0x407eb8: 0x8c43e98c  lw          $v1, -0x1674($v0)
    ctx->pc = 0x407eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_407ebc:
    // 0x407ebc: 0x60f809  jalr        $v1
label_407ec0:
    if (ctx->pc == 0x407EC0u) {
        ctx->pc = 0x407EC4u;
        goto label_407ec4;
    }
    ctx->pc = 0x407EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x407EC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407EBCu, 0x407EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407EC4u;
label_407ec4:
    // 0x407ec4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x407ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_407ec8:
    // 0x407ec8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x407ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_407ecc:
    // 0x407ecc: 0xc10496a  jal         func_4125A8
label_407ed0:
    if (ctx->pc == 0x407ED0u) {
        ctx->pc = 0x407ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407ECCu;
        // 0x407ed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407ED4u;
        goto label_407ed4;
    }
    ctx->pc = 0x407ECCu;
    SET_GPR_U32(ctx, 31, 0x407ED4u);
    ctx->pc = 0x407ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407ECCu;
    // 0x407ed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x407ECCu, 0x407ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407ED4u;
label_407ed4:
    // 0x407ed4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x407ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_407ed8:
    // 0x407ed8: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x407ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_407edc:
    // 0x407edc: 0xc0f9452  jal         func_3E5148
label_407ee0:
    if (ctx->pc == 0x407EE0u) {
        ctx->pc = 0x407EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EDCu;
        // 0x407ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407EE4u;
        goto label_407ee4;
    }
    ctx->pc = 0x407EDCu;
    SET_GPR_U32(ctx, 31, 0x407EE4u);
    ctx->pc = 0x407EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407EDCu;
    // 0x407ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5148u, 0x407EDCu, 0x407EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407EE4u;
label_407ee4:
    // 0x407ee4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x407ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_407ee8:
    // 0x407ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x407ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407eec:
    // 0x407eec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x407eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_407ef0:
    // 0x407ef0: 0x10000142  b           . + 4 + (0x142 << 2)
label_407ef4:
    if (ctx->pc == 0x407EF4u) {
        ctx->pc = 0x407EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EF0u;
        // 0x407ef4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407EF8u;
        goto label_407ef8;
    }
    ctx->pc = 0x407EF0u;
    {
        const bool branch_taken_0x407ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EF0u;
        // 0x407ef4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407ef0) {
            ctx->pc = 0x4083FCu;
            goto label_4083fc;
        }
    }
    ctx->pc = 0x407EF8u;
label_407ef8:
    // 0x407ef8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407efc:
    // 0x407efc: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x407efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_407f00:
    // 0x407f00: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x407f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_407f04:
    // 0x407f04: 0xc0f94c4  jal         func_3E5310
label_407f08:
    if (ctx->pc == 0x407F08u) {
        ctx->pc = 0x407F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F04u;
        // 0x407f08: 0x24c68470  addiu       $a2, $a2, -0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407F0Cu;
        goto label_407f0c;
    }
    ctx->pc = 0x407F04u;
    SET_GPR_U32(ctx, 31, 0x407F0Cu);
    ctx->pc = 0x407F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407F04u;
    // 0x407f08: 0x24c68470  addiu       $a2, $a2, -0x7B90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5310u, 0x407F04u, 0x407F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407F0Cu;
label_407f0c:
    // 0x407f0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407f10:
    // 0x407f10: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x407f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_407f14:
    // 0x407f14: 0xc0f8cdc  jal         func_3E3370
label_407f18:
    if (ctx->pc == 0x407F18u) {
        ctx->pc = 0x407F1Cu;
        goto label_407f1c;
    }
    ctx->pc = 0x407F14u;
    SET_GPR_U32(ctx, 31, 0x407F1Cu);
    ctx->pc = 0x3E3370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3370u, 0x407F14u, 0x407F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407F1Cu;
label_407f1c:
    // 0x407f1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407f20:
    // 0x407f20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x407f20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407f24:
    // 0x407f24: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x407f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_407f28:
    // 0x407f28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x407f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_407f2c:
    // 0x407f2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x407f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_407f30:
    // 0x407f30: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x407f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_407f34:
    // 0x407f34: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x407f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_407f38:
    // 0x407f38: 0x27a90054  addiu       $t1, $sp, 0x54
    ctx->pc = 0x407f38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_407f3c:
    // 0x407f3c: 0xc0f8980  jal         func_3E2600
label_407f40:
    if (ctx->pc == 0x407F40u) {
        ctx->pc = 0x407F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F3Cu;
        // 0x407f40: 0x27aa0058  addiu       $t2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407F44u;
        goto label_407f44;
    }
    ctx->pc = 0x407F3Cu;
    SET_GPR_U32(ctx, 31, 0x407F44u);
    ctx->pc = 0x407F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407F3Cu;
    // 0x407f40: 0x27aa0058  addiu       $t2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2600u, 0x407F3Cu, 0x407F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407F44u;
label_407f44:
    // 0x407f44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407f48:
    // 0x407f48: 0xc0fc7be  jal         func_3F1EF8
label_407f4c:
    if (ctx->pc == 0x407F4Cu) {
        ctx->pc = 0x407F50u;
        goto label_407f50;
    }
    ctx->pc = 0x407F48u;
    SET_GPR_U32(ctx, 31, 0x407F50u);
    ctx->pc = 0x3F1EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1EF8u, 0x407F48u, 0x407F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407F50u;
label_407f50:
    // 0x407f50: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x407f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_407f54:
    // 0x407f54: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x407f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_407f58:
    // 0x407f58: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_407f5c:
    if (ctx->pc == 0x407F5Cu) {
        ctx->pc = 0x407F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F58u;
        // 0x407f5c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407F60u;
        goto label_407f60;
    }
    ctx->pc = 0x407F58u;
    {
        const bool branch_taken_0x407f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F58u;
        // 0x407f5c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407f58) {
            ctx->pc = 0x408018u;
            goto label_408018;
        }
    }
    ctx->pc = 0x407F60u;
label_407f60:
    // 0x407f60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x407f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_407f64:
    // 0x407f64: 0x244204d0  addiu       $v0, $v0, 0x4D0
    ctx->pc = 0x407f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1232));
label_407f68:
    // 0x407f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x407f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_407f6c:
    // 0x407f6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x407f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_407f70:
    // 0x407f70: 0x800008  jr          $a0
label_407f74:
    if (ctx->pc == 0x407F74u) {
        ctx->pc = 0x407F78u;
        goto label_407f78;
    }
    ctx->pc = 0x407F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x407F78u: goto label_407f78;
            case 0x407FA4u: goto label_407fa4;
            case 0x407FD0u: goto label_407fd0;
            case 0x407FECu: goto label_407fec;
            case 0x408010u: goto label_408010;
            case 0x408018u: goto label_408018;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407F70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x407F78u;
label_407f78:
    // 0x407f78: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x407f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_407f7c:
    // 0x407f7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x407f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_407f80:
    // 0x407f80: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x407f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_407f84:
    // 0x407f84: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x407f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_407f88:
    // 0x407f88: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_407f8c:
    if (ctx->pc == 0x407F8Cu) {
        ctx->pc = 0x407F90u;
        goto label_407f90;
    }
    ctx->pc = 0x407F88u;
    {
        const bool branch_taken_0x407f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x407f88) {
            ctx->pc = 0x408018u;
            goto label_408018;
        }
    }
    ctx->pc = 0x407F90u;
label_407f90:
    // 0x407f90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407f94:
    // 0x407f94: 0xc0ff39c  jal         func_3FCE70
label_407f98:
    if (ctx->pc == 0x407F98u) {
        ctx->pc = 0x407F9Cu;
        goto label_407f9c;
    }
    ctx->pc = 0x407F94u;
    SET_GPR_U32(ctx, 31, 0x407F9Cu);
    ctx->pc = 0x3FCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCE70u, 0x407F94u, 0x407F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407F9Cu;
label_407f9c:
    // 0x407f9c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_407fa0:
    if (ctx->pc == 0x407FA0u) {
        ctx->pc = 0x407FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F9Cu;
        // 0x407fa0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407FA4u;
        goto label_407fa4;
    }
    ctx->pc = 0x407F9Cu;
    {
        const bool branch_taken_0x407f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F9Cu;
        // 0x407fa0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407f9c) {
            ctx->pc = 0x408014u;
            goto label_408014;
        }
    }
    ctx->pc = 0x407FA4u;
label_407fa4:
    // 0x407fa4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x407fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_407fa8:
    // 0x407fa8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x407fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_407fac:
    // 0x407fac: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x407facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_407fb0:
    // 0x407fb0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x407fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_407fb4:
    // 0x407fb4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_407fb8:
    if (ctx->pc == 0x407FB8u) {
        ctx->pc = 0x407FBCu;
        goto label_407fbc;
    }
    ctx->pc = 0x407FB4u;
    {
        const bool branch_taken_0x407fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x407fb4) {
            ctx->pc = 0x408018u;
            goto label_408018;
        }
    }
    ctx->pc = 0x407FBCu;
label_407fbc:
    // 0x407fbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407fc0:
    // 0x407fc0: 0xc0fc690  jal         func_3F1A40
label_407fc4:
    if (ctx->pc == 0x407FC4u) {
        ctx->pc = 0x407FC8u;
        goto label_407fc8;
    }
    ctx->pc = 0x407FC0u;
    SET_GPR_U32(ctx, 31, 0x407FC8u);
    ctx->pc = 0x3F1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1A40u, 0x407FC0u, 0x407FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407FC8u;
label_407fc8:
    // 0x407fc8: 0x10000013  b           . + 4 + (0x13 << 2)
label_407fcc:
    if (ctx->pc == 0x407FCCu) {
        ctx->pc = 0x407FD0u;
        goto label_407fd0;
    }
    ctx->pc = 0x407FC8u;
    {
        const bool branch_taken_0x407fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407fc8) {
            ctx->pc = 0x408018u;
            goto label_408018;
        }
    }
    ctx->pc = 0x407FD0u;
label_407fd0:
    // 0x407fd0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x407fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_407fd4:
    // 0x407fd4: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x407fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_407fd8:
    // 0x407fd8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_407fdc:
    // 0x407fdc: 0xc0fc6a2  jal         func_3F1A88
label_407fe0:
    if (ctx->pc == 0x407FE0u) {
        ctx->pc = 0x407FE4u;
        goto label_407fe4;
    }
    ctx->pc = 0x407FDCu;
    SET_GPR_U32(ctx, 31, 0x407FE4u);
    ctx->pc = 0x3F1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1A88u, 0x407FDCu, 0x407FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407FE4u;
label_407fe4:
    // 0x407fe4: 0x1000000c  b           . + 4 + (0xC << 2)
label_407fe8:
    if (ctx->pc == 0x407FE8u) {
        ctx->pc = 0x407FECu;
        goto label_407fec;
    }
    ctx->pc = 0x407FE4u;
    {
        const bool branch_taken_0x407fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407fe4) {
            ctx->pc = 0x408018u;
            goto label_408018;
        }
    }
    ctx->pc = 0x407FECu;
label_407fec:
    // 0x407fec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x407fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_407ff0:
    // 0x407ff0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x407ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_407ff4:
    // 0x407ff4: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x407ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_407ff8:
    // 0x407ff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x407ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407ffc:
    // 0x407ffc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x407ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_408000:
    // 0x408000: 0xc0ff372  jal         func_3FCDC8
label_408004:
    if (ctx->pc == 0x408004u) {
        ctx->pc = 0x408008u;
        goto label_408008;
    }
    ctx->pc = 0x408000u;
    SET_GPR_U32(ctx, 31, 0x408008u);
    ctx->pc = 0x3FCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCDC8u, 0x408000u, 0x408008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408008u;
label_408008:
    // 0x408008: 0x10000003  b           . + 4 + (0x3 << 2)
label_40800c:
    if (ctx->pc == 0x40800Cu) {
        ctx->pc = 0x408010u;
        goto label_408010;
    }
    ctx->pc = 0x408008u;
    {
        const bool branch_taken_0x408008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x408008) {
            ctx->pc = 0x408018u;
            goto label_408018;
        }
    }
    ctx->pc = 0x408010u;
label_408010:
    // 0x408010: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x408010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_408014:
    // 0x408014: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x408014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_408018:
    // 0x408018: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x408018u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40801c:
    // 0x40801c: 0xdfa50048  ld          $a1, 0x48($sp)
    ctx->pc = 0x40801cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_408020:
    // 0x408020: 0xdfa60020  ld          $a2, 0x20($sp)
    ctx->pc = 0x408020u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_408024:
    // 0x408024: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x408024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_408028:
    // 0x408028: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x408028u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_40802c:
    // 0x40802c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x40802cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_408030:
    // 0x408030: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x408030u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_408034:
    // 0x408034: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x408034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_408038:
    // 0x408038: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x408038u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_40803c:
    // 0x40803c: 0xc107034  jal         func_41C0D0
label_408040:
    if (ctx->pc == 0x408040u) {
        ctx->pc = 0x408044u;
        goto label_408044;
    }
    ctx->pc = 0x40803Cu;
    SET_GPR_U32(ctx, 31, 0x408044u);
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x40803Cu, 0x408044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408044u;
label_408044:
    // 0x408044: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x408044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_408048:
    // 0x408048: 0x124000dd  beqz        $s2, . + 4 + (0xDD << 2)
label_40804c:
    if (ctx->pc == 0x40804Cu) {
        ctx->pc = 0x40804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408048u;
        // 0x40804c: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408050u;
        goto label_408050;
    }
    ctx->pc = 0x408048u;
    {
        const bool branch_taken_0x408048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x40804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408048u;
        // 0x40804c: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408048) {
            ctx->pc = 0x4083C0u;
            goto label_4083c0;
        }
    }
    ctx->pc = 0x408050u;
label_408050:
    // 0x408050: 0xc107078  jal         func_41C1E0
label_408054:
    if (ctx->pc == 0x408054u) {
        ctx->pc = 0x408054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408050u;
        // 0x408054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408058u;
        goto label_408058;
    }
    ctx->pc = 0x408050u;
    SET_GPR_U32(ctx, 31, 0x408058u);
    ctx->pc = 0x408054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408050u;
    // 0x408054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x408050u, 0x408058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408058u;
label_408058:
    // 0x408058: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_40805c:
    if (ctx->pc == 0x40805Cu) {
        ctx->pc = 0x408060u;
        goto label_408060;
    }
    ctx->pc = 0x408058u;
    {
        const bool branch_taken_0x408058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x408058) {
            ctx->pc = 0x40807Cu;
            goto label_40807c;
        }
    }
    ctx->pc = 0x408060u;
label_408060:
    // 0x408060: 0xc10705c  jal         func_41C170
label_408064:
    if (ctx->pc == 0x408064u) {
        ctx->pc = 0x408064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408060u;
        // 0x408064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408068u;
        goto label_408068;
    }
    ctx->pc = 0x408060u;
    SET_GPR_U32(ctx, 31, 0x408068u);
    ctx->pc = 0x408064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408060u;
    // 0x408064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x408060u, 0x408068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408068u;
label_408068:
    // 0x408068: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x408068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_40806c:
    // 0x40806c: 0xc10496a  jal         func_4125A8
label_408070:
    if (ctx->pc == 0x408070u) {
        ctx->pc = 0x408070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40806Cu;
        // 0x408070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408074u;
        goto label_408074;
    }
    ctx->pc = 0x40806Cu;
    SET_GPR_U32(ctx, 31, 0x408074u);
    ctx->pc = 0x408070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40806Cu;
    // 0x408070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x40806Cu, 0x408074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408074u;
label_408074:
    // 0x408074: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_408078:
    if (ctx->pc == 0x408078u) {
        ctx->pc = 0x408078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408074u;
        // 0x408078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40807Cu;
        goto label_40807c;
    }
    ctx->pc = 0x408074u;
    {
        const bool branch_taken_0x408074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408074u;
        // 0x408078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408074) {
            ctx->pc = 0x4083F8u;
            goto label_4083f8;
        }
    }
    ctx->pc = 0x40807Cu;
label_40807c:
    // 0x40807c: 0xdfa40048  ld          $a0, 0x48($sp)
    ctx->pc = 0x40807cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_408080:
    // 0x408080: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x408080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_408084:
    // 0x408084: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x408084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_408088:
    // 0x408088: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x408088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_40808c:
    // 0x40808c: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x40808cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
label_408090:
    // 0x408090: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x408090u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_408094:
    // 0x408094: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x408094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_408098:
    // 0x408098: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x408098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_40809c:
    // 0x40809c: 0x34a5010d  ori         $a1, $a1, 0x10D
    ctx->pc = 0x40809cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
label_4080a0:
    // 0x4080a0: 0x40f809  jalr        $v0
label_4080a4:
    if (ctx->pc == 0x4080A4u) {
        ctx->pc = 0x4080A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080A0u;
        // 0x4080a4: 0x8e530010  lw          $s3, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4080A8u;
        goto label_4080a8;
    }
    ctx->pc = 0x4080A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4080A8u);
        ctx->pc = 0x4080A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080A0u;
        // 0x4080a4: 0x8e530010  lw          $s3, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4080A0u, 0x4080A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4080A8u;
label_4080a8:
    // 0x4080a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4080a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4080ac:
    // 0x4080ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4080acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4080b0:
    // 0x4080b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4080b4:
    if (ctx->pc == 0x4080B4u) {
        ctx->pc = 0x4080B8u;
        goto label_4080b8;
    }
    ctx->pc = 0x4080B0u;
    {
        const bool branch_taken_0x4080b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4080b0) {
            ctx->pc = 0x4080DCu;
            goto label_4080dc;
        }
    }
    ctx->pc = 0x4080B8u;
label_4080b8:
    // 0x4080b8: 0xc1070bc  jal         func_41C2F0
label_4080bc:
    if (ctx->pc == 0x4080BCu) {
        ctx->pc = 0x4080BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080B8u;
        // 0x4080bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4080C0u;
        goto label_4080c0;
    }
    ctx->pc = 0x4080B8u;
    SET_GPR_U32(ctx, 31, 0x4080C0u);
    ctx->pc = 0x4080BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4080B8u;
    // 0x4080bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x4080B8u, 0x4080C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4080C0u;
label_4080c0:
    // 0x4080c0: 0xc10705c  jal         func_41C170
label_4080c4:
    if (ctx->pc == 0x4080C4u) {
        ctx->pc = 0x4080C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080C0u;
        // 0x4080c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4080C8u;
        goto label_4080c8;
    }
    ctx->pc = 0x4080C0u;
    SET_GPR_U32(ctx, 31, 0x4080C8u);
    ctx->pc = 0x4080C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4080C0u;
    // 0x4080c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x4080C0u, 0x4080C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4080C8u;
label_4080c8:
    // 0x4080c8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x4080c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4080cc:
    // 0x4080cc: 0xc10496a  jal         func_4125A8
label_4080d0:
    if (ctx->pc == 0x4080D0u) {
        ctx->pc = 0x4080D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080CCu;
        // 0x4080d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4080D4u;
        goto label_4080d4;
    }
    ctx->pc = 0x4080CCu;
    SET_GPR_U32(ctx, 31, 0x4080D4u);
    ctx->pc = 0x4080D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4080CCu;
    // 0x4080d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x4080CCu, 0x4080D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4080D4u;
label_4080d4:
    // 0x4080d4: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_4080d8:
    if (ctx->pc == 0x4080D8u) {
        ctx->pc = 0x4080D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080D4u;
        // 0x4080d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4080DCu;
        goto label_4080dc;
    }
    ctx->pc = 0x4080D4u;
    {
        const bool branch_taken_0x4080d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4080D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080D4u;
        // 0x4080d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4080d4) {
            ctx->pc = 0x4083F8u;
            goto label_4083f8;
        }
    }
    ctx->pc = 0x4080DCu;
label_4080dc:
    // 0x4080dc: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x4080dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4080e0:
    // 0x4080e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4080e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4080e4:
    // 0x4080e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4080e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4080e8:
    // 0x4080e8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_4080ec:
    if (ctx->pc == 0x4080ECu) {
        ctx->pc = 0x4080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080E8u;
        // 0x4080ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4080F0u;
        goto label_4080f0;
    }
    ctx->pc = 0x4080E8u;
    {
        const bool branch_taken_0x4080e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080E8u;
        // 0x4080ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4080e8) {
            ctx->pc = 0x408128u;
            goto label_408128;
        }
    }
    ctx->pc = 0x4080F0u;
label_4080f0:
    // 0x4080f0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4080f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4080f4:
    // 0x4080f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4080f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4080f8:
    // 0x4080f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4080f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4080fc:
    // 0x4080fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4080fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_408100:
    // 0x408100: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x408100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_408104:
    // 0x408104: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x408104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_408108:
    // 0x408108: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x408108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_40810c:
    // 0x40810c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x40810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_408110:
    // 0x408110: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x408110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_408114:
    // 0x408114: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x408114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_408118:
    // 0x408118: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x408118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_40811c:
    // 0x40811c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x40811cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_408120:
    // 0x408120: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_408124:
    if (ctx->pc == 0x408124u) {
        ctx->pc = 0x408128u;
        goto label_408128;
    }
    ctx->pc = 0x408120u;
    {
        const bool branch_taken_0x408120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x408120) {
            ctx->pc = 0x4080F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4080f8;
        }
    }
    ctx->pc = 0x408128u;
label_408128:
    // 0x408128: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x408128u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40812c:
    // 0x40812c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x40812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_408130:
    // 0x408130: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_408134:
    if (ctx->pc == 0x408134u) {
        ctx->pc = 0x408138u;
        goto label_408138;
    }
    ctx->pc = 0x408130u;
    {
        const bool branch_taken_0x408130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x408130) {
            ctx->pc = 0x408148u;
            goto label_408148;
        }
    }
    ctx->pc = 0x408138u;
label_408138:
    // 0x408138: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x408138u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40813c:
    // 0x40813c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x40813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_408140:
    // 0x408140: 0x1462008a  bne         $v1, $v0, . + 4 + (0x8A << 2)
label_408144:
    if (ctx->pc == 0x408144u) {
        ctx->pc = 0x408148u;
        goto label_408148;
    }
    ctx->pc = 0x408140u;
    {
        const bool branch_taken_0x408140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x408140) {
            ctx->pc = 0x40836Cu;
            goto label_40836c;
        }
    }
    ctx->pc = 0x408148u;
label_408148:
    // 0x408148: 0x12200088  beqz        $s1, . + 4 + (0x88 << 2)
label_40814c:
    if (ctx->pc == 0x40814Cu) {
        ctx->pc = 0x408150u;
        goto label_408150;
    }
    ctx->pc = 0x408148u;
    {
        const bool branch_taken_0x408148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x408148) {
            ctx->pc = 0x40836Cu;
            goto label_40836c;
        }
    }
    ctx->pc = 0x408150u;
label_408150:
    // 0x408150: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x408150u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_408154:
    // 0x408154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x408154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408158:
    // 0x408158: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x408158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_40815c:
    // 0x40815c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x40815cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_408160:
    // 0x408160: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x408160u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_408164:
    // 0x408164: 0x1a00003e  blez        $s0, . + 4 + (0x3E << 2)
label_408168:
    if (ctx->pc == 0x408168u) {
        ctx->pc = 0x408168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408164u;
        // 0x408168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40816Cu;
        goto label_40816c;
    }
    ctx->pc = 0x408164u;
    {
        const bool branch_taken_0x408164 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x408168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408164u;
        // 0x408168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408164) {
            ctx->pc = 0x408260u;
            goto label_408260;
        }
    }
    ctx->pc = 0x40816Cu;
label_40816c:
    // 0x40816c: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x40816cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_408170:
    // 0x408170: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x408170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_408174:
    // 0x408174: 0x1a000014  blez        $s0, . + 4 + (0x14 << 2)
label_408178:
    if (ctx->pc == 0x408178u) {
        ctx->pc = 0x408178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408174u;
        // 0x408178: 0x32040003  andi        $a0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40817Cu;
        goto label_40817c;
    }
    ctx->pc = 0x408174u;
    {
        const bool branch_taken_0x408174 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x408178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408174u;
        // 0x408178: 0x32040003  andi        $a0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x408174) {
            ctx->pc = 0x4081C8u;
            goto label_4081c8;
        }
    }
    ctx->pc = 0x40817Cu;
label_40817c:
    // 0x40817c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_408180:
    if (ctx->pc == 0x408180u) {
        ctx->pc = 0x408180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40817Cu;
        // 0x408180: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408184u;
        goto label_408184;
    }
    ctx->pc = 0x40817Cu;
    {
        const bool branch_taken_0x40817c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x408180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40817Cu;
        // 0x408180: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40817c) {
            ctx->pc = 0x4081E8u;
            goto label_4081e8;
        }
    }
    ctx->pc = 0x408184u;
label_408184:
    // 0x408184: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_408188:
    if (ctx->pc == 0x408188u) {
        ctx->pc = 0x408188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408184u;
        // 0x408188: 0xa0650002  sb          $a1, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40818Cu;
        goto label_40818c;
    }
    ctx->pc = 0x408184u;
    {
        const bool branch_taken_0x408184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x408184) {
            ctx->pc = 0x408188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x408184u;
            // 0x408188: 0xa0650002  sb          $a1, 0x2($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4081CCu;
            goto label_4081cc;
        }
    }
    ctx->pc = 0x40818Cu;
label_40818c:
    // 0x40818c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x40818cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_408190:
    // 0x408190: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_408194:
    if (ctx->pc == 0x408194u) {
        ctx->pc = 0x408194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408190u;
        // 0x408194: 0xa0650002  sb          $a1, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408198u;
        goto label_408198;
    }
    ctx->pc = 0x408190u;
    {
        const bool branch_taken_0x408190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x408190) {
            ctx->pc = 0x408194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x408190u;
            // 0x408194: 0xa0650002  sb          $a1, 0x2($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4081B4u;
            goto label_4081b4;
        }
    }
    ctx->pc = 0x408198u;
label_408198:
    // 0x408198: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x408198u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_40819c:
    // 0x40819c: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x40819cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4081a0:
    // 0x4081a0: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x4081a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_4081a4:
    // 0x4081a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4081a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4081a8:
    // 0x4081a8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x4081a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_4081ac:
    // 0x4081ac: 0xa22b0003  sb          $t3, 0x3($s1)
    ctx->pc = 0x4081acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 11));
label_4081b0:
    // 0x4081b0: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x4081b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
label_4081b4:
    // 0x4081b4: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x4081b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_4081b8:
    // 0x4081b8: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x4081b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_4081bc:
    // 0x4081bc: 0xa06b0003  sb          $t3, 0x3($v1)
    ctx->pc = 0x4081bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 11));
label_4081c0:
    // 0x4081c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4081c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4081c4:
    // 0x4081c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4081c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4081c8:
    // 0x4081c8: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x4081c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
label_4081cc:
    // 0x4081cc: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x4081ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_4081d0:
    // 0x4081d0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x4081d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_4081d4:
    // 0x4081d4: 0xa06b0003  sb          $t3, 0x3($v1)
    ctx->pc = 0x4081d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 11));
label_4081d8:
    // 0x4081d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4081d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4081dc:
    // 0x4081dc: 0xb0502a  slt         $t2, $a1, $s0
    ctx->pc = 0x4081dcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4081e0:
    // 0x4081e0: 0x1140001f  beqz        $t2, . + 4 + (0x1F << 2)
label_4081e4:
    if (ctx->pc == 0x4081E4u) {
        ctx->pc = 0x4081E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4081E0u;
        // 0x4081e4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4081E8u;
        goto label_4081e8;
    }
    ctx->pc = 0x4081E0u;
    {
        const bool branch_taken_0x4081e0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4081E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4081E0u;
        // 0x4081e4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4081e0) {
            ctx->pc = 0x408260u;
            goto label_408260;
        }
    }
    ctx->pc = 0x4081E8u;
label_4081e8:
    // 0x4081e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4081e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4081ec:
    // 0x4081ec: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4081ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4081f0:
    // 0x4081f0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4081f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4081f4:
    // 0x4081f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4081f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4081f8:
    // 0x4081f8: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x4081f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
label_4081fc:
    // 0x4081fc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4081fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_408200:
    // 0x408200: 0xa1050001  sb          $a1, 0x1($t0)
    ctx->pc = 0x408200u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 5));
label_408204:
    // 0x408204: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x408204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_408208:
    // 0x408208: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x408208u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
label_40820c:
    // 0x40820c: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x40820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_408210:
    // 0x408210: 0xa0cb0003  sb          $t3, 0x3($a2)
    ctx->pc = 0x408210u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 11));
label_408214:
    // 0x408214: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x408214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_408218:
    // 0x408218: 0xa0e20006  sb          $v0, 0x6($a3)
    ctx->pc = 0x408218u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 2));
label_40821c:
    // 0x40821c: 0xb0502a  slt         $t2, $a1, $s0
    ctx->pc = 0x40821cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_408220:
    // 0x408220: 0xa1020005  sb          $v0, 0x5($t0)
    ctx->pc = 0x408220u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 2));
label_408224:
    // 0x408224: 0xa1220004  sb          $v0, 0x4($t1)
    ctx->pc = 0x408224u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
label_408228:
    // 0x408228: 0xa0cb0007  sb          $t3, 0x7($a2)
    ctx->pc = 0x408228u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 11));
label_40822c:
    // 0x40822c: 0xa0e3000a  sb          $v1, 0xA($a3)
    ctx->pc = 0x40822cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 3));
label_408230:
    // 0x408230: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x408230u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
label_408234:
    // 0x408234: 0xa1230008  sb          $v1, 0x8($t1)
    ctx->pc = 0x408234u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 3));
label_408238:
    // 0x408238: 0xa0cb000b  sb          $t3, 0xB($a2)
    ctx->pc = 0x408238u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 11));
label_40823c:
    // 0x40823c: 0xa0e4000e  sb          $a0, 0xE($a3)
    ctx->pc = 0x40823cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 4));
label_408240:
    // 0x408240: 0xa104000d  sb          $a0, 0xD($t0)
    ctx->pc = 0x408240u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 13), (uint8_t)GPR_U32(ctx, 4));
label_408244:
    // 0x408244: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x408244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_408248:
    // 0x408248: 0xa124000c  sb          $a0, 0xC($t1)
    ctx->pc = 0x408248u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 4));
label_40824c:
    // 0x40824c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x40824cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_408250:
    // 0x408250: 0xa0cb000f  sb          $t3, 0xF($a2)
    ctx->pc = 0x408250u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 11));
label_408254:
    // 0x408254: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x408254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_408258:
    // 0x408258: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
label_40825c:
    if (ctx->pc == 0x40825Cu) {
        ctx->pc = 0x40825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408258u;
        // 0x40825c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408260u;
        goto label_408260;
    }
    ctx->pc = 0x408258u;
    {
        const bool branch_taken_0x408258 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x40825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408258u;
        // 0x40825c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408258) {
            ctx->pc = 0x4081F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4081f8;
        }
    }
    ctx->pc = 0x408260u;
label_408260:
    // 0x408260: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x408260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_408264:
    // 0x408264: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x408264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_408268:
    // 0x408268: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x408268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_40826c:
    // 0x40826c: 0xc0f87ba  jal         func_3E1EE8
label_408270:
    if (ctx->pc == 0x408270u) {
        ctx->pc = 0x408274u;
        goto label_408274;
    }
    ctx->pc = 0x40826Cu;
    SET_GPR_U32(ctx, 31, 0x408274u);
    ctx->pc = 0x3E1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1EE8u, 0x40826Cu, 0x408274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408274u;
label_408274:
    // 0x408274: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_408278:
    if (ctx->pc == 0x408278u) {
        ctx->pc = 0x40827Cu;
        goto label_40827c;
    }
    ctx->pc = 0x408274u;
    {
        const bool branch_taken_0x408274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x408274) {
            ctx->pc = 0x408300u;
            goto label_408300;
        }
    }
    ctx->pc = 0x40827Cu;
label_40827c:
    // 0x40827c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x40827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_408280:
    // 0x408280: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x408280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_408284:
    // 0x408284: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x408284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_408288:
    // 0x408288: 0xc0f8a22  jal         func_3E2888
label_40828c:
    if (ctx->pc == 0x40828Cu) {
        ctx->pc = 0x40828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408288u;
        // 0x40828c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408290u;
        goto label_408290;
    }
    ctx->pc = 0x408288u;
    SET_GPR_U32(ctx, 31, 0x408290u);
    ctx->pc = 0x40828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408288u;
    // 0x40828c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2888u, 0x408288u, 0x408290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408290u;
label_408290:
    // 0x408290: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x408290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_408294:
    // 0x408294: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x408294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_408298:
    // 0x408298: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_40829c:
    if (ctx->pc == 0x40829Cu) {
        ctx->pc = 0x40829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408298u;
        // 0x40829c: 0xafb00060  sw          $s0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4082A0u;
        goto label_4082a0;
    }
    ctx->pc = 0x408298u;
    {
        const bool branch_taken_0x408298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x408298) {
            ctx->pc = 0x40829Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x408298u;
            // 0x40829c: 0xafb00060  sw          $s0, 0x60($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4082A0u;
            goto label_4082a0;
        }
    }
    ctx->pc = 0x4082A0u;
label_4082a0:
    // 0x4082a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4082a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4082a4:
    // 0x4082a4: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_4082a8:
    if (ctx->pc == 0x4082A8u) {
        ctx->pc = 0x4082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4082A4u;
        // 0x4082a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4082ACu;
        goto label_4082ac;
    }
    ctx->pc = 0x4082A4u;
    {
        const bool branch_taken_0x4082a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4082A4u;
        // 0x4082a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4082a4) {
            ctx->pc = 0x408300u;
            goto label_408300;
        }
    }
    ctx->pc = 0x4082ACu;
label_4082ac:
    // 0x4082ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4082acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4082b0:
    // 0x4082b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4082b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4082b4:
    // 0x4082b4: 0x0  nop
    ctx->pc = 0x4082b4u;
    // NOP
label_4082b8:
    // 0x4082b8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x4082b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_4082bc:
    // 0x4082bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4082bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4082c0:
    // 0x4082c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4082c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4082c4:
    // 0x4082c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4082c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4082c8:
    // 0x4082c8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4082c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4082cc:
    // 0x4082cc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x4082ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_4082d0:
    // 0x4082d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4082d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4082d4:
    // 0x4082d4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x4082d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4082d8:
    // 0x4082d8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x4082d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_4082dc:
    // 0x4082dc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x4082dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_4082e0:
    // 0x4082e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4082e4:
    // 0x4082e4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x4082e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4082e8:
    // 0x4082e8: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x4082e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_4082ec:
    // 0x4082ec: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x4082ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_4082f0:
    // 0x4082f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4082f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4082f4:
    // 0x4082f4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x4082f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4082f8:
    // 0x4082f8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_4082fc:
    if (ctx->pc == 0x4082FCu) {
        ctx->pc = 0x4082FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4082F8u;
        // 0x4082fc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408300u;
        goto label_408300;
    }
    ctx->pc = 0x4082F8u;
    {
        const bool branch_taken_0x4082f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4082FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4082F8u;
        // 0x4082fc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4082f8) {
            ctx->pc = 0x4082B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4082b8;
        }
    }
    ctx->pc = 0x408300u;
label_408300:
    // 0x408300: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x408300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_408304:
    // 0x408304: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x408304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_408308:
    // 0x408308: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x408308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_40830c:
    // 0x40830c: 0xc0f87ba  jal         func_3E1EE8
label_408310:
    if (ctx->pc == 0x408310u) {
        ctx->pc = 0x408314u;
        goto label_408314;
    }
    ctx->pc = 0x40830Cu;
    SET_GPR_U32(ctx, 31, 0x408314u);
    ctx->pc = 0x3E1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1EE8u, 0x40830Cu, 0x408314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408314u;
label_408314:
    // 0x408314: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_408318:
    if (ctx->pc == 0x408318u) {
        ctx->pc = 0x40831Cu;
        goto label_40831c;
    }
    ctx->pc = 0x408314u;
    {
        const bool branch_taken_0x408314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x408314) {
            ctx->pc = 0x40836Cu;
            goto label_40836c;
        }
    }
    ctx->pc = 0x40831Cu;
label_40831c:
    // 0x40831c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x40831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_408320:
    // 0x408320: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x408320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_408324:
    // 0x408324: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x408324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_408328:
    // 0x408328: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x408328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_40832c:
    // 0x40832c: 0xc0f8a9e  jal         func_3E2A78
label_408330:
    if (ctx->pc == 0x408330u) {
        ctx->pc = 0x408330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40832Cu;
        // 0x408330: 0x27a8006c  addiu       $t0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408334u;
        goto label_408334;
    }
    ctx->pc = 0x40832Cu;
    SET_GPR_U32(ctx, 31, 0x408334u);
    ctx->pc = 0x408330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40832Cu;
    // 0x408330: 0x27a8006c  addiu       $t0, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2A78u, 0x40832Cu, 0x408334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408334u;
label_408334:
    // 0x408334: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x408334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_408338:
    // 0x408338: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_40833c:
    if (ctx->pc == 0x40833Cu) {
        ctx->pc = 0x40833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408338u;
        // 0x40833c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408340u;
        goto label_408340;
    }
    ctx->pc = 0x408338u;
    {
        const bool branch_taken_0x408338 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x40833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408338u;
        // 0x40833c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408338) {
            ctx->pc = 0x40836Cu;
            goto label_40836c;
        }
    }
    ctx->pc = 0x408340u;
label_408340:
    // 0x408340: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x408340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_408344:
    // 0x408344: 0x0  nop
    ctx->pc = 0x408344u;
    // NOP
label_408348:
    // 0x408348: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x408348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_40834c:
    // 0x40834c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x40834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_408350:
    // 0x408350: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x408350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_408354:
    // 0x408354: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x408354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_408358:
    // 0x408358: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x408358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_40835c:
    // 0x40835c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x40835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_408360:
    // 0x408360: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x408360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_408364:
    // 0x408364: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_408368:
    if (ctx->pc == 0x408368u) {
        ctx->pc = 0x408368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408364u;
        // 0x408368: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40836Cu;
        goto label_40836c;
    }
    ctx->pc = 0x408364u;
    {
        const bool branch_taken_0x408364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x408368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408364u;
        // 0x408368: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408364) {
            ctx->pc = 0x408348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_408348;
        }
    }
    ctx->pc = 0x40836Cu;
label_40836c:
    // 0x40836c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x40836cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_408370:
    // 0x408370: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x408370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_408374:
    // 0x408374: 0xc0f93f6  jal         func_3E4FD8
label_408378:
    if (ctx->pc == 0x408378u) {
        ctx->pc = 0x40837Cu;
        goto label_40837c;
    }
    ctx->pc = 0x408374u;
    SET_GPR_U32(ctx, 31, 0x40837Cu);
    ctx->pc = 0x3E4FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4FD8u, 0x408374u, 0x40837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40837Cu;
label_40837c:
    // 0x40837c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x40837cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_408380:
    // 0x408380: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x408380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_408384:
    // 0x408384: 0xc0f8fae  jal         func_3E3EB8
label_408388:
    if (ctx->pc == 0x408388u) {
        ctx->pc = 0x40838Cu;
        goto label_40838c;
    }
    ctx->pc = 0x408384u;
    SET_GPR_U32(ctx, 31, 0x40838Cu);
    ctx->pc = 0x3E3EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3EB8u, 0x408384u, 0x40838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40838Cu;
label_40838c:
    // 0x40838c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x40838cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_408390:
    // 0x408390: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x408390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_408394:
    // 0x408394: 0xc0f9452  jal         func_3E5148
label_408398:
    if (ctx->pc == 0x408398u) {
        ctx->pc = 0x408398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408394u;
        // 0x408398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40839Cu;
        goto label_40839c;
    }
    ctx->pc = 0x408394u;
    SET_GPR_U32(ctx, 31, 0x40839Cu);
    ctx->pc = 0x408398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408394u;
    // 0x408398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5148u, 0x408394u, 0x40839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40839Cu;
label_40839c:
    // 0x40839c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x40839cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_4083a0:
    // 0x4083a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4083a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4083a4:
    // 0x4083a4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x4083a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_4083a8:
    // 0x4083a8: 0x8c43e98c  lw          $v1, -0x1674($v0)
    ctx->pc = 0x4083a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_4083ac:
    // 0x4083ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4083acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4083b0:
    // 0x4083b0: 0x60f809  jalr        $v1
label_4083b4:
    if (ctx->pc == 0x4083B4u) {
        ctx->pc = 0x4083B8u;
        goto label_4083b8;
    }
    ctx->pc = 0x4083B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4083B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4083B0u, 0x4083B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4083B8u;
label_4083b8:
    // 0x4083b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4083b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_4083bc:
    // 0x4083bc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x4083bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4083c0:
    // 0x4083c0: 0xc10496a  jal         func_4125A8
label_4083c4:
    if (ctx->pc == 0x4083C4u) {
        ctx->pc = 0x4083C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083C0u;
        // 0x4083c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4083C8u;
        goto label_4083c8;
    }
    ctx->pc = 0x4083C0u;
    SET_GPR_U32(ctx, 31, 0x4083C8u);
    ctx->pc = 0x4083C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4083C0u;
    // 0x4083c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x4083C0u, 0x4083C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4083C8u;
label_4083c8:
    // 0x4083c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4083cc:
    if (ctx->pc == 0x4083CCu) {
        ctx->pc = 0x4083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083C8u;
        // 0x4083cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4083D0u;
        goto label_4083d0;
    }
    ctx->pc = 0x4083C8u;
    {
        const bool branch_taken_0x4083c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083C8u;
        // 0x4083cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4083c8) {
            ctx->pc = 0x4083F8u;
            goto label_4083f8;
        }
    }
    ctx->pc = 0x4083D0u;
label_4083d0:
    // 0x4083d0: 0x2402010d  addiu       $v0, $zero, 0x10D
    ctx->pc = 0x4083d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
label_4083d4:
    // 0x4083d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4083d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4083d8:
    // 0x4083d8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4083d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_4083dc:
    // 0x4083dc: 0xc1035f6  jal         func_40D7D8
label_4083e0:
    if (ctx->pc == 0x4083E0u) {
        ctx->pc = 0x4083E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083DCu;
        // 0x4083e0: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4083E4u;
        goto label_4083e4;
    }
    ctx->pc = 0x4083DCu;
    SET_GPR_U32(ctx, 31, 0x4083E4u);
    ctx->pc = 0x4083E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4083DCu;
    // 0x4083e0: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4083DCu, 0x4083E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4083E4u;
label_4083e4:
    // 0x4083e4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4083e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_4083e8:
    // 0x4083e8: 0xc103628  jal         func_40D8A0
label_4083ec:
    if (ctx->pc == 0x4083ECu) {
        ctx->pc = 0x4083ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083E8u;
        // 0x4083ec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4083F0u;
        goto label_4083f0;
    }
    ctx->pc = 0x4083E8u;
    SET_GPR_U32(ctx, 31, 0x4083F0u);
    ctx->pc = 0x4083ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4083E8u;
    // 0x4083ec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4083E8u, 0x4083F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4083F0u;
label_4083f0:
    // 0x4083f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4083f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4083f4:
    // 0x4083f4: 0x0  nop
    ctx->pc = 0x4083f4u;
    // NOP
label_4083f8:
    // 0x4083f8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4083f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4083fc:
    // 0x4083fc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4083fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_408400:
    // 0x408400: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x408400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_408404:
    // 0x408404: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x408404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_408408:
    // 0x408408: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x408408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_40840c:
    // 0x40840c: 0x3e00008  jr          $ra
label_408410:
    if (ctx->pc == 0x408410u) {
        ctx->pc = 0x408410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40840Cu;
        // 0x408410: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408414u;
        goto label_408414;
    }
    ctx->pc = 0x40840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40840Cu;
        // 0x408410: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40840Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408414u;
label_408414:
    // 0x408414: 0x0  nop
    ctx->pc = 0x408414u;
    // NOP
    ctx->pc = 0x408418u;
}
