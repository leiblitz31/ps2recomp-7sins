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

// Function: sub_00452CE0
// Address: 0x452ce0 - 0x453790
void sub_00452CE0_0x452ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452CE0_0x452ce0");
#endif

    switch (ctx->pc) {
        case 0x452ce0u: goto label_452ce0;
        case 0x452ce4u: goto label_452ce4;
        case 0x452ce8u: goto label_452ce8;
        case 0x452cecu: goto label_452cec;
        case 0x452cf0u: goto label_452cf0;
        case 0x452cf4u: goto label_452cf4;
        case 0x452cf8u: goto label_452cf8;
        case 0x452cfcu: goto label_452cfc;
        case 0x452d00u: goto label_452d00;
        case 0x452d04u: goto label_452d04;
        case 0x452d08u: goto label_452d08;
        case 0x452d0cu: goto label_452d0c;
        case 0x452d10u: goto label_452d10;
        case 0x452d14u: goto label_452d14;
        case 0x452d18u: goto label_452d18;
        case 0x452d1cu: goto label_452d1c;
        case 0x452d20u: goto label_452d20;
        case 0x452d24u: goto label_452d24;
        case 0x452d28u: goto label_452d28;
        case 0x452d2cu: goto label_452d2c;
        case 0x452d30u: goto label_452d30;
        case 0x452d34u: goto label_452d34;
        case 0x452d38u: goto label_452d38;
        case 0x452d3cu: goto label_452d3c;
        case 0x452d40u: goto label_452d40;
        case 0x452d44u: goto label_452d44;
        case 0x452d48u: goto label_452d48;
        case 0x452d4cu: goto label_452d4c;
        case 0x452d50u: goto label_452d50;
        case 0x452d54u: goto label_452d54;
        case 0x452d58u: goto label_452d58;
        case 0x452d5cu: goto label_452d5c;
        case 0x452d60u: goto label_452d60;
        case 0x452d64u: goto label_452d64;
        case 0x452d68u: goto label_452d68;
        case 0x452d6cu: goto label_452d6c;
        case 0x452d70u: goto label_452d70;
        case 0x452d74u: goto label_452d74;
        case 0x452d78u: goto label_452d78;
        case 0x452d7cu: goto label_452d7c;
        case 0x452d80u: goto label_452d80;
        case 0x452d84u: goto label_452d84;
        case 0x452d88u: goto label_452d88;
        case 0x452d8cu: goto label_452d8c;
        case 0x452d90u: goto label_452d90;
        case 0x452d94u: goto label_452d94;
        case 0x452d98u: goto label_452d98;
        case 0x452d9cu: goto label_452d9c;
        case 0x452da0u: goto label_452da0;
        case 0x452da4u: goto label_452da4;
        case 0x452da8u: goto label_452da8;
        case 0x452dacu: goto label_452dac;
        case 0x452db0u: goto label_452db0;
        case 0x452db4u: goto label_452db4;
        case 0x452db8u: goto label_452db8;
        case 0x452dbcu: goto label_452dbc;
        case 0x452dc0u: goto label_452dc0;
        case 0x452dc4u: goto label_452dc4;
        case 0x452dc8u: goto label_452dc8;
        case 0x452dccu: goto label_452dcc;
        case 0x452dd0u: goto label_452dd0;
        case 0x452dd4u: goto label_452dd4;
        case 0x452dd8u: goto label_452dd8;
        case 0x452ddcu: goto label_452ddc;
        case 0x452de0u: goto label_452de0;
        case 0x452de4u: goto label_452de4;
        case 0x452de8u: goto label_452de8;
        case 0x452decu: goto label_452dec;
        case 0x452df0u: goto label_452df0;
        case 0x452df4u: goto label_452df4;
        case 0x452df8u: goto label_452df8;
        case 0x452dfcu: goto label_452dfc;
        case 0x452e00u: goto label_452e00;
        case 0x452e04u: goto label_452e04;
        case 0x452e08u: goto label_452e08;
        case 0x452e0cu: goto label_452e0c;
        case 0x452e10u: goto label_452e10;
        case 0x452e14u: goto label_452e14;
        case 0x452e18u: goto label_452e18;
        case 0x452e1cu: goto label_452e1c;
        case 0x452e20u: goto label_452e20;
        case 0x452e24u: goto label_452e24;
        case 0x452e28u: goto label_452e28;
        case 0x452e2cu: goto label_452e2c;
        case 0x452e30u: goto label_452e30;
        case 0x452e34u: goto label_452e34;
        case 0x452e38u: goto label_452e38;
        case 0x452e3cu: goto label_452e3c;
        case 0x452e40u: goto label_452e40;
        case 0x452e44u: goto label_452e44;
        case 0x452e48u: goto label_452e48;
        case 0x452e4cu: goto label_452e4c;
        case 0x452e50u: goto label_452e50;
        case 0x452e54u: goto label_452e54;
        case 0x452e58u: goto label_452e58;
        case 0x452e5cu: goto label_452e5c;
        case 0x452e60u: goto label_452e60;
        case 0x452e64u: goto label_452e64;
        case 0x452e68u: goto label_452e68;
        case 0x452e6cu: goto label_452e6c;
        case 0x452e70u: goto label_452e70;
        case 0x452e74u: goto label_452e74;
        case 0x452e78u: goto label_452e78;
        case 0x452e7cu: goto label_452e7c;
        case 0x452e80u: goto label_452e80;
        case 0x452e84u: goto label_452e84;
        case 0x452e88u: goto label_452e88;
        case 0x452e8cu: goto label_452e8c;
        case 0x452e90u: goto label_452e90;
        case 0x452e94u: goto label_452e94;
        case 0x452e98u: goto label_452e98;
        case 0x452e9cu: goto label_452e9c;
        case 0x452ea0u: goto label_452ea0;
        case 0x452ea4u: goto label_452ea4;
        case 0x452ea8u: goto label_452ea8;
        case 0x452eacu: goto label_452eac;
        case 0x452eb0u: goto label_452eb0;
        case 0x452eb4u: goto label_452eb4;
        case 0x452eb8u: goto label_452eb8;
        case 0x452ebcu: goto label_452ebc;
        case 0x452ec0u: goto label_452ec0;
        case 0x452ec4u: goto label_452ec4;
        case 0x452ec8u: goto label_452ec8;
        case 0x452eccu: goto label_452ecc;
        case 0x452ed0u: goto label_452ed0;
        case 0x452ed4u: goto label_452ed4;
        case 0x452ed8u: goto label_452ed8;
        case 0x452edcu: goto label_452edc;
        case 0x452ee0u: goto label_452ee0;
        case 0x452ee4u: goto label_452ee4;
        case 0x452ee8u: goto label_452ee8;
        case 0x452eecu: goto label_452eec;
        case 0x452ef0u: goto label_452ef0;
        case 0x452ef4u: goto label_452ef4;
        case 0x452ef8u: goto label_452ef8;
        case 0x452efcu: goto label_452efc;
        case 0x452f00u: goto label_452f00;
        case 0x452f04u: goto label_452f04;
        case 0x452f08u: goto label_452f08;
        case 0x452f0cu: goto label_452f0c;
        case 0x452f10u: goto label_452f10;
        case 0x452f14u: goto label_452f14;
        case 0x452f18u: goto label_452f18;
        case 0x452f1cu: goto label_452f1c;
        case 0x452f20u: goto label_452f20;
        case 0x452f24u: goto label_452f24;
        case 0x452f28u: goto label_452f28;
        case 0x452f2cu: goto label_452f2c;
        case 0x452f30u: goto label_452f30;
        case 0x452f34u: goto label_452f34;
        case 0x452f38u: goto label_452f38;
        case 0x452f3cu: goto label_452f3c;
        case 0x452f40u: goto label_452f40;
        case 0x452f44u: goto label_452f44;
        case 0x452f48u: goto label_452f48;
        case 0x452f4cu: goto label_452f4c;
        case 0x452f50u: goto label_452f50;
        case 0x452f54u: goto label_452f54;
        case 0x452f58u: goto label_452f58;
        case 0x452f5cu: goto label_452f5c;
        case 0x452f60u: goto label_452f60;
        case 0x452f64u: goto label_452f64;
        case 0x452f68u: goto label_452f68;
        case 0x452f6cu: goto label_452f6c;
        case 0x452f70u: goto label_452f70;
        case 0x452f74u: goto label_452f74;
        case 0x452f78u: goto label_452f78;
        case 0x452f7cu: goto label_452f7c;
        case 0x452f80u: goto label_452f80;
        case 0x452f84u: goto label_452f84;
        case 0x452f88u: goto label_452f88;
        case 0x452f8cu: goto label_452f8c;
        case 0x452f90u: goto label_452f90;
        case 0x452f94u: goto label_452f94;
        case 0x452f98u: goto label_452f98;
        case 0x452f9cu: goto label_452f9c;
        case 0x452fa0u: goto label_452fa0;
        case 0x452fa4u: goto label_452fa4;
        case 0x452fa8u: goto label_452fa8;
        case 0x452facu: goto label_452fac;
        case 0x452fb0u: goto label_452fb0;
        case 0x452fb4u: goto label_452fb4;
        case 0x452fb8u: goto label_452fb8;
        case 0x452fbcu: goto label_452fbc;
        case 0x452fc0u: goto label_452fc0;
        case 0x452fc4u: goto label_452fc4;
        case 0x452fc8u: goto label_452fc8;
        case 0x452fccu: goto label_452fcc;
        case 0x452fd0u: goto label_452fd0;
        case 0x452fd4u: goto label_452fd4;
        case 0x452fd8u: goto label_452fd8;
        case 0x452fdcu: goto label_452fdc;
        case 0x452fe0u: goto label_452fe0;
        case 0x452fe4u: goto label_452fe4;
        case 0x452fe8u: goto label_452fe8;
        case 0x452fecu: goto label_452fec;
        case 0x452ff0u: goto label_452ff0;
        case 0x452ff4u: goto label_452ff4;
        case 0x452ff8u: goto label_452ff8;
        case 0x452ffcu: goto label_452ffc;
        case 0x453000u: goto label_453000;
        case 0x453004u: goto label_453004;
        case 0x453008u: goto label_453008;
        case 0x45300cu: goto label_45300c;
        case 0x453010u: goto label_453010;
        case 0x453014u: goto label_453014;
        case 0x453018u: goto label_453018;
        case 0x45301cu: goto label_45301c;
        case 0x453020u: goto label_453020;
        case 0x453024u: goto label_453024;
        case 0x453028u: goto label_453028;
        case 0x45302cu: goto label_45302c;
        case 0x453030u: goto label_453030;
        case 0x453034u: goto label_453034;
        case 0x453038u: goto label_453038;
        case 0x45303cu: goto label_45303c;
        case 0x453040u: goto label_453040;
        case 0x453044u: goto label_453044;
        case 0x453048u: goto label_453048;
        case 0x45304cu: goto label_45304c;
        case 0x453050u: goto label_453050;
        case 0x453054u: goto label_453054;
        case 0x453058u: goto label_453058;
        case 0x45305cu: goto label_45305c;
        case 0x453060u: goto label_453060;
        case 0x453064u: goto label_453064;
        case 0x453068u: goto label_453068;
        case 0x45306cu: goto label_45306c;
        case 0x453070u: goto label_453070;
        case 0x453074u: goto label_453074;
        case 0x453078u: goto label_453078;
        case 0x45307cu: goto label_45307c;
        case 0x453080u: goto label_453080;
        case 0x453084u: goto label_453084;
        case 0x453088u: goto label_453088;
        case 0x45308cu: goto label_45308c;
        case 0x453090u: goto label_453090;
        case 0x453094u: goto label_453094;
        case 0x453098u: goto label_453098;
        case 0x45309cu: goto label_45309c;
        case 0x4530a0u: goto label_4530a0;
        case 0x4530a4u: goto label_4530a4;
        case 0x4530a8u: goto label_4530a8;
        case 0x4530acu: goto label_4530ac;
        case 0x4530b0u: goto label_4530b0;
        case 0x4530b4u: goto label_4530b4;
        case 0x4530b8u: goto label_4530b8;
        case 0x4530bcu: goto label_4530bc;
        case 0x4530c0u: goto label_4530c0;
        case 0x4530c4u: goto label_4530c4;
        case 0x4530c8u: goto label_4530c8;
        case 0x4530ccu: goto label_4530cc;
        case 0x4530d0u: goto label_4530d0;
        case 0x4530d4u: goto label_4530d4;
        case 0x4530d8u: goto label_4530d8;
        case 0x4530dcu: goto label_4530dc;
        case 0x4530e0u: goto label_4530e0;
        case 0x4530e4u: goto label_4530e4;
        case 0x4530e8u: goto label_4530e8;
        case 0x4530ecu: goto label_4530ec;
        case 0x4530f0u: goto label_4530f0;
        case 0x4530f4u: goto label_4530f4;
        case 0x4530f8u: goto label_4530f8;
        case 0x4530fcu: goto label_4530fc;
        case 0x453100u: goto label_453100;
        case 0x453104u: goto label_453104;
        case 0x453108u: goto label_453108;
        case 0x45310cu: goto label_45310c;
        case 0x453110u: goto label_453110;
        case 0x453114u: goto label_453114;
        case 0x453118u: goto label_453118;
        case 0x45311cu: goto label_45311c;
        case 0x453120u: goto label_453120;
        case 0x453124u: goto label_453124;
        case 0x453128u: goto label_453128;
        case 0x45312cu: goto label_45312c;
        case 0x453130u: goto label_453130;
        case 0x453134u: goto label_453134;
        case 0x453138u: goto label_453138;
        case 0x45313cu: goto label_45313c;
        case 0x453140u: goto label_453140;
        case 0x453144u: goto label_453144;
        case 0x453148u: goto label_453148;
        case 0x45314cu: goto label_45314c;
        case 0x453150u: goto label_453150;
        case 0x453154u: goto label_453154;
        case 0x453158u: goto label_453158;
        case 0x45315cu: goto label_45315c;
        case 0x453160u: goto label_453160;
        case 0x453164u: goto label_453164;
        case 0x453168u: goto label_453168;
        case 0x45316cu: goto label_45316c;
        case 0x453170u: goto label_453170;
        case 0x453174u: goto label_453174;
        case 0x453178u: goto label_453178;
        case 0x45317cu: goto label_45317c;
        case 0x453180u: goto label_453180;
        case 0x453184u: goto label_453184;
        case 0x453188u: goto label_453188;
        case 0x45318cu: goto label_45318c;
        case 0x453190u: goto label_453190;
        case 0x453194u: goto label_453194;
        case 0x453198u: goto label_453198;
        case 0x45319cu: goto label_45319c;
        case 0x4531a0u: goto label_4531a0;
        case 0x4531a4u: goto label_4531a4;
        case 0x4531a8u: goto label_4531a8;
        case 0x4531acu: goto label_4531ac;
        case 0x4531b0u: goto label_4531b0;
        case 0x4531b4u: goto label_4531b4;
        case 0x4531b8u: goto label_4531b8;
        case 0x4531bcu: goto label_4531bc;
        case 0x4531c0u: goto label_4531c0;
        case 0x4531c4u: goto label_4531c4;
        case 0x4531c8u: goto label_4531c8;
        case 0x4531ccu: goto label_4531cc;
        case 0x4531d0u: goto label_4531d0;
        case 0x4531d4u: goto label_4531d4;
        case 0x4531d8u: goto label_4531d8;
        case 0x4531dcu: goto label_4531dc;
        case 0x4531e0u: goto label_4531e0;
        case 0x4531e4u: goto label_4531e4;
        case 0x4531e8u: goto label_4531e8;
        case 0x4531ecu: goto label_4531ec;
        case 0x4531f0u: goto label_4531f0;
        case 0x4531f4u: goto label_4531f4;
        case 0x4531f8u: goto label_4531f8;
        case 0x4531fcu: goto label_4531fc;
        case 0x453200u: goto label_453200;
        case 0x453204u: goto label_453204;
        case 0x453208u: goto label_453208;
        case 0x45320cu: goto label_45320c;
        case 0x453210u: goto label_453210;
        case 0x453214u: goto label_453214;
        case 0x453218u: goto label_453218;
        case 0x45321cu: goto label_45321c;
        case 0x453220u: goto label_453220;
        case 0x453224u: goto label_453224;
        case 0x453228u: goto label_453228;
        case 0x45322cu: goto label_45322c;
        case 0x453230u: goto label_453230;
        case 0x453234u: goto label_453234;
        case 0x453238u: goto label_453238;
        case 0x45323cu: goto label_45323c;
        case 0x453240u: goto label_453240;
        case 0x453244u: goto label_453244;
        case 0x453248u: goto label_453248;
        case 0x45324cu: goto label_45324c;
        case 0x453250u: goto label_453250;
        case 0x453254u: goto label_453254;
        case 0x453258u: goto label_453258;
        case 0x45325cu: goto label_45325c;
        case 0x453260u: goto label_453260;
        case 0x453264u: goto label_453264;
        case 0x453268u: goto label_453268;
        case 0x45326cu: goto label_45326c;
        case 0x453270u: goto label_453270;
        case 0x453274u: goto label_453274;
        case 0x453278u: goto label_453278;
        case 0x45327cu: goto label_45327c;
        case 0x453280u: goto label_453280;
        case 0x453284u: goto label_453284;
        case 0x453288u: goto label_453288;
        case 0x45328cu: goto label_45328c;
        case 0x453290u: goto label_453290;
        case 0x453294u: goto label_453294;
        case 0x453298u: goto label_453298;
        case 0x45329cu: goto label_45329c;
        case 0x4532a0u: goto label_4532a0;
        case 0x4532a4u: goto label_4532a4;
        case 0x4532a8u: goto label_4532a8;
        case 0x4532acu: goto label_4532ac;
        case 0x4532b0u: goto label_4532b0;
        case 0x4532b4u: goto label_4532b4;
        case 0x4532b8u: goto label_4532b8;
        case 0x4532bcu: goto label_4532bc;
        case 0x4532c0u: goto label_4532c0;
        case 0x4532c4u: goto label_4532c4;
        case 0x4532c8u: goto label_4532c8;
        case 0x4532ccu: goto label_4532cc;
        case 0x4532d0u: goto label_4532d0;
        case 0x4532d4u: goto label_4532d4;
        case 0x4532d8u: goto label_4532d8;
        case 0x4532dcu: goto label_4532dc;
        case 0x4532e0u: goto label_4532e0;
        case 0x4532e4u: goto label_4532e4;
        case 0x4532e8u: goto label_4532e8;
        case 0x4532ecu: goto label_4532ec;
        case 0x4532f0u: goto label_4532f0;
        case 0x4532f4u: goto label_4532f4;
        case 0x4532f8u: goto label_4532f8;
        case 0x4532fcu: goto label_4532fc;
        case 0x453300u: goto label_453300;
        case 0x453304u: goto label_453304;
        case 0x453308u: goto label_453308;
        case 0x45330cu: goto label_45330c;
        case 0x453310u: goto label_453310;
        case 0x453314u: goto label_453314;
        case 0x453318u: goto label_453318;
        case 0x45331cu: goto label_45331c;
        case 0x453320u: goto label_453320;
        case 0x453324u: goto label_453324;
        case 0x453328u: goto label_453328;
        case 0x45332cu: goto label_45332c;
        case 0x453330u: goto label_453330;
        case 0x453334u: goto label_453334;
        case 0x453338u: goto label_453338;
        case 0x45333cu: goto label_45333c;
        case 0x453340u: goto label_453340;
        case 0x453344u: goto label_453344;
        case 0x453348u: goto label_453348;
        case 0x45334cu: goto label_45334c;
        case 0x453350u: goto label_453350;
        case 0x453354u: goto label_453354;
        case 0x453358u: goto label_453358;
        case 0x45335cu: goto label_45335c;
        case 0x453360u: goto label_453360;
        case 0x453364u: goto label_453364;
        case 0x453368u: goto label_453368;
        case 0x45336cu: goto label_45336c;
        case 0x453370u: goto label_453370;
        case 0x453374u: goto label_453374;
        case 0x453378u: goto label_453378;
        case 0x45337cu: goto label_45337c;
        case 0x453380u: goto label_453380;
        case 0x453384u: goto label_453384;
        case 0x453388u: goto label_453388;
        case 0x45338cu: goto label_45338c;
        case 0x453390u: goto label_453390;
        case 0x453394u: goto label_453394;
        case 0x453398u: goto label_453398;
        case 0x45339cu: goto label_45339c;
        case 0x4533a0u: goto label_4533a0;
        case 0x4533a4u: goto label_4533a4;
        case 0x4533a8u: goto label_4533a8;
        case 0x4533acu: goto label_4533ac;
        case 0x4533b0u: goto label_4533b0;
        case 0x4533b4u: goto label_4533b4;
        case 0x4533b8u: goto label_4533b8;
        case 0x4533bcu: goto label_4533bc;
        case 0x4533c0u: goto label_4533c0;
        case 0x4533c4u: goto label_4533c4;
        case 0x4533c8u: goto label_4533c8;
        case 0x4533ccu: goto label_4533cc;
        case 0x4533d0u: goto label_4533d0;
        case 0x4533d4u: goto label_4533d4;
        case 0x4533d8u: goto label_4533d8;
        case 0x4533dcu: goto label_4533dc;
        case 0x4533e0u: goto label_4533e0;
        case 0x4533e4u: goto label_4533e4;
        case 0x4533e8u: goto label_4533e8;
        case 0x4533ecu: goto label_4533ec;
        case 0x4533f0u: goto label_4533f0;
        case 0x4533f4u: goto label_4533f4;
        case 0x4533f8u: goto label_4533f8;
        case 0x4533fcu: goto label_4533fc;
        case 0x453400u: goto label_453400;
        case 0x453404u: goto label_453404;
        case 0x453408u: goto label_453408;
        case 0x45340cu: goto label_45340c;
        case 0x453410u: goto label_453410;
        case 0x453414u: goto label_453414;
        case 0x453418u: goto label_453418;
        case 0x45341cu: goto label_45341c;
        case 0x453420u: goto label_453420;
        case 0x453424u: goto label_453424;
        case 0x453428u: goto label_453428;
        case 0x45342cu: goto label_45342c;
        case 0x453430u: goto label_453430;
        case 0x453434u: goto label_453434;
        case 0x453438u: goto label_453438;
        case 0x45343cu: goto label_45343c;
        case 0x453440u: goto label_453440;
        case 0x453444u: goto label_453444;
        case 0x453448u: goto label_453448;
        case 0x45344cu: goto label_45344c;
        case 0x453450u: goto label_453450;
        case 0x453454u: goto label_453454;
        case 0x453458u: goto label_453458;
        case 0x45345cu: goto label_45345c;
        case 0x453460u: goto label_453460;
        case 0x453464u: goto label_453464;
        case 0x453468u: goto label_453468;
        case 0x45346cu: goto label_45346c;
        case 0x453470u: goto label_453470;
        case 0x453474u: goto label_453474;
        case 0x453478u: goto label_453478;
        case 0x45347cu: goto label_45347c;
        case 0x453480u: goto label_453480;
        case 0x453484u: goto label_453484;
        case 0x453488u: goto label_453488;
        case 0x45348cu: goto label_45348c;
        case 0x453490u: goto label_453490;
        case 0x453494u: goto label_453494;
        case 0x453498u: goto label_453498;
        case 0x45349cu: goto label_45349c;
        case 0x4534a0u: goto label_4534a0;
        case 0x4534a4u: goto label_4534a4;
        case 0x4534a8u: goto label_4534a8;
        case 0x4534acu: goto label_4534ac;
        case 0x4534b0u: goto label_4534b0;
        case 0x4534b4u: goto label_4534b4;
        case 0x4534b8u: goto label_4534b8;
        case 0x4534bcu: goto label_4534bc;
        case 0x4534c0u: goto label_4534c0;
        case 0x4534c4u: goto label_4534c4;
        case 0x4534c8u: goto label_4534c8;
        case 0x4534ccu: goto label_4534cc;
        case 0x4534d0u: goto label_4534d0;
        case 0x4534d4u: goto label_4534d4;
        case 0x4534d8u: goto label_4534d8;
        case 0x4534dcu: goto label_4534dc;
        case 0x4534e0u: goto label_4534e0;
        case 0x4534e4u: goto label_4534e4;
        case 0x4534e8u: goto label_4534e8;
        case 0x4534ecu: goto label_4534ec;
        case 0x4534f0u: goto label_4534f0;
        case 0x4534f4u: goto label_4534f4;
        case 0x4534f8u: goto label_4534f8;
        case 0x4534fcu: goto label_4534fc;
        case 0x453500u: goto label_453500;
        case 0x453504u: goto label_453504;
        case 0x453508u: goto label_453508;
        case 0x45350cu: goto label_45350c;
        case 0x453510u: goto label_453510;
        case 0x453514u: goto label_453514;
        case 0x453518u: goto label_453518;
        case 0x45351cu: goto label_45351c;
        case 0x453520u: goto label_453520;
        case 0x453524u: goto label_453524;
        case 0x453528u: goto label_453528;
        case 0x45352cu: goto label_45352c;
        case 0x453530u: goto label_453530;
        case 0x453534u: goto label_453534;
        case 0x453538u: goto label_453538;
        case 0x45353cu: goto label_45353c;
        case 0x453540u: goto label_453540;
        case 0x453544u: goto label_453544;
        case 0x453548u: goto label_453548;
        case 0x45354cu: goto label_45354c;
        case 0x453550u: goto label_453550;
        case 0x453554u: goto label_453554;
        case 0x453558u: goto label_453558;
        case 0x45355cu: goto label_45355c;
        case 0x453560u: goto label_453560;
        case 0x453564u: goto label_453564;
        case 0x453568u: goto label_453568;
        case 0x45356cu: goto label_45356c;
        case 0x453570u: goto label_453570;
        case 0x453574u: goto label_453574;
        case 0x453578u: goto label_453578;
        case 0x45357cu: goto label_45357c;
        case 0x453580u: goto label_453580;
        case 0x453584u: goto label_453584;
        case 0x453588u: goto label_453588;
        case 0x45358cu: goto label_45358c;
        case 0x453590u: goto label_453590;
        case 0x453594u: goto label_453594;
        case 0x453598u: goto label_453598;
        case 0x45359cu: goto label_45359c;
        case 0x4535a0u: goto label_4535a0;
        case 0x4535a4u: goto label_4535a4;
        case 0x4535a8u: goto label_4535a8;
        case 0x4535acu: goto label_4535ac;
        case 0x4535b0u: goto label_4535b0;
        case 0x4535b4u: goto label_4535b4;
        case 0x4535b8u: goto label_4535b8;
        case 0x4535bcu: goto label_4535bc;
        case 0x4535c0u: goto label_4535c0;
        case 0x4535c4u: goto label_4535c4;
        case 0x4535c8u: goto label_4535c8;
        case 0x4535ccu: goto label_4535cc;
        case 0x4535d0u: goto label_4535d0;
        case 0x4535d4u: goto label_4535d4;
        case 0x4535d8u: goto label_4535d8;
        case 0x4535dcu: goto label_4535dc;
        case 0x4535e0u: goto label_4535e0;
        case 0x4535e4u: goto label_4535e4;
        case 0x4535e8u: goto label_4535e8;
        case 0x4535ecu: goto label_4535ec;
        case 0x4535f0u: goto label_4535f0;
        case 0x4535f4u: goto label_4535f4;
        case 0x4535f8u: goto label_4535f8;
        case 0x4535fcu: goto label_4535fc;
        case 0x453600u: goto label_453600;
        case 0x453604u: goto label_453604;
        case 0x453608u: goto label_453608;
        case 0x45360cu: goto label_45360c;
        case 0x453610u: goto label_453610;
        case 0x453614u: goto label_453614;
        case 0x453618u: goto label_453618;
        case 0x45361cu: goto label_45361c;
        case 0x453620u: goto label_453620;
        case 0x453624u: goto label_453624;
        case 0x453628u: goto label_453628;
        case 0x45362cu: goto label_45362c;
        case 0x453630u: goto label_453630;
        case 0x453634u: goto label_453634;
        case 0x453638u: goto label_453638;
        case 0x45363cu: goto label_45363c;
        case 0x453640u: goto label_453640;
        case 0x453644u: goto label_453644;
        case 0x453648u: goto label_453648;
        case 0x45364cu: goto label_45364c;
        case 0x453650u: goto label_453650;
        case 0x453654u: goto label_453654;
        case 0x453658u: goto label_453658;
        case 0x45365cu: goto label_45365c;
        case 0x453660u: goto label_453660;
        case 0x453664u: goto label_453664;
        case 0x453668u: goto label_453668;
        case 0x45366cu: goto label_45366c;
        case 0x453670u: goto label_453670;
        case 0x453674u: goto label_453674;
        case 0x453678u: goto label_453678;
        case 0x45367cu: goto label_45367c;
        case 0x453680u: goto label_453680;
        case 0x453684u: goto label_453684;
        case 0x453688u: goto label_453688;
        case 0x45368cu: goto label_45368c;
        case 0x453690u: goto label_453690;
        case 0x453694u: goto label_453694;
        case 0x453698u: goto label_453698;
        case 0x45369cu: goto label_45369c;
        case 0x4536a0u: goto label_4536a0;
        case 0x4536a4u: goto label_4536a4;
        case 0x4536a8u: goto label_4536a8;
        case 0x4536acu: goto label_4536ac;
        case 0x4536b0u: goto label_4536b0;
        case 0x4536b4u: goto label_4536b4;
        case 0x4536b8u: goto label_4536b8;
        case 0x4536bcu: goto label_4536bc;
        case 0x4536c0u: goto label_4536c0;
        case 0x4536c4u: goto label_4536c4;
        case 0x4536c8u: goto label_4536c8;
        case 0x4536ccu: goto label_4536cc;
        case 0x4536d0u: goto label_4536d0;
        case 0x4536d4u: goto label_4536d4;
        case 0x4536d8u: goto label_4536d8;
        case 0x4536dcu: goto label_4536dc;
        case 0x4536e0u: goto label_4536e0;
        case 0x4536e4u: goto label_4536e4;
        case 0x4536e8u: goto label_4536e8;
        case 0x4536ecu: goto label_4536ec;
        case 0x4536f0u: goto label_4536f0;
        case 0x4536f4u: goto label_4536f4;
        case 0x4536f8u: goto label_4536f8;
        case 0x4536fcu: goto label_4536fc;
        case 0x453700u: goto label_453700;
        case 0x453704u: goto label_453704;
        case 0x453708u: goto label_453708;
        case 0x45370cu: goto label_45370c;
        case 0x453710u: goto label_453710;
        case 0x453714u: goto label_453714;
        case 0x453718u: goto label_453718;
        case 0x45371cu: goto label_45371c;
        case 0x453720u: goto label_453720;
        case 0x453724u: goto label_453724;
        case 0x453728u: goto label_453728;
        case 0x45372cu: goto label_45372c;
        case 0x453730u: goto label_453730;
        case 0x453734u: goto label_453734;
        case 0x453738u: goto label_453738;
        case 0x45373cu: goto label_45373c;
        case 0x453740u: goto label_453740;
        case 0x453744u: goto label_453744;
        case 0x453748u: goto label_453748;
        case 0x45374cu: goto label_45374c;
        case 0x453750u: goto label_453750;
        case 0x453754u: goto label_453754;
        case 0x453758u: goto label_453758;
        case 0x45375cu: goto label_45375c;
        case 0x453760u: goto label_453760;
        case 0x453764u: goto label_453764;
        case 0x453768u: goto label_453768;
        case 0x45376cu: goto label_45376c;
        case 0x453770u: goto label_453770;
        case 0x453774u: goto label_453774;
        case 0x453778u: goto label_453778;
        case 0x45377cu: goto label_45377c;
        case 0x453780u: goto label_453780;
        case 0x453784u: goto label_453784;
        case 0x453788u: goto label_453788;
        case 0x45378cu: goto label_45378c;
        default: break;
    }

    ctx->pc = 0x452ce0u;

label_452ce0:
    // 0x452ce0: 0x27bdf810  addiu       $sp, $sp, -0x7F0
    ctx->pc = 0x452ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965264));
label_452ce4:
    // 0x452ce4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x452ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_452ce8:
    // 0x452ce8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x452ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_452cec:
    // 0x452cec: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x452cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_452cf0:
    // 0x452cf0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x452cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_452cf4:
    // 0x452cf4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x452cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_452cf8:
    // 0x452cf8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x452cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_452cfc:
    // 0x452cfc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x452cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_452d00:
    // 0x452d00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x452d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_452d04:
    // 0x452d04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x452d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_452d08:
    // 0x452d08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x452d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_452d0c:
    // 0x452d0c: 0xafa407d0  sw          $a0, 0x7D0($sp)
    ctx->pc = 0x452d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2000), GPR_U32(ctx, 4));
label_452d10:
    // 0x452d10: 0xafa507e0  sw          $a1, 0x7E0($sp)
    ctx->pc = 0x452d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2016), GPR_U32(ctx, 5));
label_452d14:
    // 0x452d14: 0x8fa407e0  lw          $a0, 0x7E0($sp)
    ctx->pc = 0x452d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2016)));
label_452d18:
    // 0x452d18: 0xc042514  jal         func_109450
label_452d1c:
    if (ctx->pc == 0x452D1Cu) {
        ctx->pc = 0x452D20u;
        goto label_452d20;
    }
    ctx->pc = 0x452D18u;
    SET_GPR_U32(ctx, 31, 0x452D20u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x452D18u, 0x452D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452D20u;
label_452d20:
    // 0x452d20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x452d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_452d24:
    // 0x452d24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x452d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_452d28:
    // 0x452d28: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_452d2c:
    if (ctx->pc == 0x452D2Cu) {
        ctx->pc = 0x452D30u;
        goto label_452d30;
    }
    ctx->pc = 0x452D28u;
    {
        const bool branch_taken_0x452d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x452d28) {
            ctx->pc = 0x452DDCu;
            goto label_452ddc;
        }
    }
    ctx->pc = 0x452D30u;
label_452d30:
    // 0x452d30: 0x8f84b010  lw          $a0, -0x4FF0($gp)
    ctx->pc = 0x452d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946832)));
label_452d34:
    // 0x452d34: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
label_452d38:
    if (ctx->pc == 0x452D38u) {
        ctx->pc = 0x452D3Cu;
        goto label_452d3c;
    }
    ctx->pc = 0x452D34u;
    {
        const bool branch_taken_0x452d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x452d34) {
            ctx->pc = 0x452DDCu;
            goto label_452ddc;
        }
    }
    ctx->pc = 0x452D3Cu;
label_452d3c:
    // 0x452d3c: 0x8f85bf38  lw          $a1, -0x40C8($gp)
    ctx->pc = 0x452d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_452d40:
    // 0x452d40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x452d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_452d44:
    // 0x452d44: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x452d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_452d48:
    // 0x452d48: 0x27a607c0  addiu       $a2, $sp, 0x7C0
    ctx->pc = 0x452d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
label_452d4c:
    // 0x452d4c: 0xc115ee8  jal         func_457BA0
label_452d50:
    if (ctx->pc == 0x452D50u) {
        ctx->pc = 0x452D54u;
        goto label_452d54;
    }
    ctx->pc = 0x452D4Cu;
    SET_GPR_U32(ctx, 31, 0x452D54u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x452D4Cu, 0x452D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452D54u;
label_452d54:
    // 0x452d54: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_452d58:
    if (ctx->pc == 0x452D58u) {
        ctx->pc = 0x452D5Cu;
        goto label_452d5c;
    }
    ctx->pc = 0x452D54u;
    {
        const bool branch_taken_0x452d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452d54) {
            ctx->pc = 0x452DDCu;
            goto label_452ddc;
        }
    }
    ctx->pc = 0x452D5Cu;
label_452d5c:
    // 0x452d5c: 0x8fa307c8  lw          $v1, 0x7C8($sp)
    ctx->pc = 0x452d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1992)));
label_452d60:
    // 0x452d60: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_452d64:
    if (ctx->pc == 0x452D64u) {
        ctx->pc = 0x452D68u;
        goto label_452d68;
    }
    ctx->pc = 0x452D60u;
    {
        const bool branch_taken_0x452d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x452d60) {
            ctx->pc = 0x452DDCu;
            goto label_452ddc;
        }
    }
    ctx->pc = 0x452D68u;
label_452d68:
    // 0x452d68: 0x27a405e0  addiu       $a0, $sp, 0x5E0
    ctx->pc = 0x452d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_452d6c:
    // 0x452d6c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x452d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_452d70:
    // 0x452d70: 0x8fa607c4  lw          $a2, 0x7C4($sp)
    ctx->pc = 0x452d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1988)));
label_452d74:
    // 0x452d74: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x452d74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_452d78:
    // 0x452d78: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x452d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_452d7c:
    // 0x452d7c: 0x24080088  addiu       $t0, $zero, 0x88
    ctx->pc = 0x452d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_452d80:
    // 0x452d80: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x452d80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_452d84:
    // 0x452d84: 0x2529de90  addiu       $t1, $t1, -0x2170
    ctx->pc = 0x452d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958736));
label_452d88:
    // 0x452d88: 0xc113940  jal         func_44E500
label_452d8c:
    if (ctx->pc == 0x452D8Cu) {
        ctx->pc = 0x452D90u;
        goto label_452d90;
    }
    ctx->pc = 0x452D88u;
    SET_GPR_U32(ctx, 31, 0x452D90u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x452D88u, 0x452D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452D90u;
label_452d90:
    // 0x452d90: 0x27a405e0  addiu       $a0, $sp, 0x5E0
    ctx->pc = 0x452d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_452d94:
    // 0x452d94: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x452d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_452d98:
    // 0x452d98: 0x24a5deb0  addiu       $a1, $a1, -0x2150
    ctx->pc = 0x452d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958768));
label_452d9c:
    // 0x452d9c: 0xc115c24  jal         func_457090
label_452da0:
    if (ctx->pc == 0x452DA0u) {
        ctx->pc = 0x452DA4u;
        goto label_452da4;
    }
    ctx->pc = 0x452D9Cu;
    SET_GPR_U32(ctx, 31, 0x452DA4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x452D9Cu, 0x452DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452DA4u;
label_452da4:
    // 0x452da4: 0x27a405e0  addiu       $a0, $sp, 0x5E0
    ctx->pc = 0x452da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_452da8:
    // 0x452da8: 0x8fa207c8  lw          $v0, 0x7C8($sp)
    ctx->pc = 0x452da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1992)));
label_452dac:
    // 0x452dac: 0x40f809  jalr        $v0
label_452db0:
    if (ctx->pc == 0x452DB0u) {
        ctx->pc = 0x452DB4u;
        goto label_452db4;
    }
    ctx->pc = 0x452DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x452DB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452DACu, 0x452DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x452DB4u;
label_452db4:
    // 0x452db4: 0xaf82b010  sw          $v0, -0x4FF0($gp)
    ctx->pc = 0x452db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946832), GPR_U32(ctx, 2));
label_452db8:
    // 0x452db8: 0x8fa605e0  lw          $a2, 0x5E0($sp)
    ctx->pc = 0x452db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
label_452dbc:
    // 0x452dbc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_452dc0:
    if (ctx->pc == 0x452DC0u) {
        ctx->pc = 0x452DC4u;
        goto label_452dc4;
    }
    ctx->pc = 0x452DBCu;
    {
        const bool branch_taken_0x452dbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x452dbc) {
            ctx->pc = 0x452DCCu;
            goto label_452dcc;
        }
    }
    ctx->pc = 0x452DC4u;
label_452dc4:
    // 0x452dc4: 0xd  break       0
    ctx->pc = 0x452dc4u;
    runtime->handleBreak(rdram, ctx);
label_452dc8:
    // 0x452dc8: 0x0  nop
    ctx->pc = 0x452dc8u;
    // NOP
label_452dcc:
    // 0x452dcc: 0x27a405e0  addiu       $a0, $sp, 0x5E0
    ctx->pc = 0x452dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_452dd0:
    // 0x452dd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452dd4:
    // 0x452dd4: 0xc11392c  jal         func_44E4B0
label_452dd8:
    if (ctx->pc == 0x452DD8u) {
        ctx->pc = 0x452DDCu;
        goto label_452ddc;
    }
    ctx->pc = 0x452DD4u;
    SET_GPR_U32(ctx, 31, 0x452DDCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x452DD4u, 0x452DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452DDCu;
label_452ddc:
    // 0x452ddc: 0x27a507b0  addiu       $a1, $sp, 0x7B0
    ctx->pc = 0x452ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_452de0:
    // 0x452de0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x452de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_452de4:
    // 0x452de4: 0x2786b00c  addiu       $a2, $gp, -0x4FF4
    ctx->pc = 0x452de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_452de8:
    // 0x452de8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x452de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_452dec:
    // 0x452dec: 0xc040304  jal         func_100C10
label_452df0:
    if (ctx->pc == 0x452DF0u) {
        ctx->pc = 0x452DF4u;
        goto label_452df4;
    }
    ctx->pc = 0x452DECu;
    SET_GPR_U32(ctx, 31, 0x452DF4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x452DECu, 0x452DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452DF4u;
label_452df4:
    // 0x452df4: 0x27a807a0  addiu       $t0, $sp, 0x7A0
    ctx->pc = 0x452df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_452df8:
    // 0x452df8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x452df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_452dfc:
    // 0x452dfc: 0xc041b48  jal         func_106D20
label_452e00:
    if (ctx->pc == 0x452E00u) {
        ctx->pc = 0x452E04u;
        goto label_452e04;
    }
    ctx->pc = 0x452DFCu;
    SET_GPR_U32(ctx, 31, 0x452E04u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x452DFCu, 0x452E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E04u;
label_452e04:
    // 0x452e04: 0x27a40790  addiu       $a0, $sp, 0x790
    ctx->pc = 0x452e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_452e08:
    // 0x452e08: 0xc041b48  jal         func_106D20
label_452e0c:
    if (ctx->pc == 0x452E0Cu) {
        ctx->pc = 0x452E10u;
        goto label_452e10;
    }
    ctx->pc = 0x452E08u;
    SET_GPR_U32(ctx, 31, 0x452E10u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x452E08u, 0x452E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E10u;
label_452e10:
    // 0x452e10: 0x27a50780  addiu       $a1, $sp, 0x780
    ctx->pc = 0x452e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_452e14:
    // 0x452e14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x452e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_452e18:
    // 0x452e18: 0xc041b48  jal         func_106D20
label_452e1c:
    if (ctx->pc == 0x452E1Cu) {
        ctx->pc = 0x452E20u;
        goto label_452e20;
    }
    ctx->pc = 0x452E18u;
    SET_GPR_U32(ctx, 31, 0x452E20u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x452E18u, 0x452E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E20u;
label_452e20:
    // 0x452e20: 0xafa007cc  sw          $zero, 0x7CC($sp)
    ctx->pc = 0x452e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1996), GPR_U32(ctx, 0));
label_452e24:
    // 0x452e24: 0x27a40730  addiu       $a0, $sp, 0x730
    ctx->pc = 0x452e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
label_452e28:
    // 0x452e28: 0x2785b020  addiu       $a1, $gp, -0x4FE0
    ctx->pc = 0x452e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946848));
label_452e2c:
    // 0x452e2c: 0xc040304  jal         func_100C10
label_452e30:
    if (ctx->pc == 0x452E30u) {
        ctx->pc = 0x452E34u;
        goto label_452e34;
    }
    ctx->pc = 0x452E2Cu;
    SET_GPR_U32(ctx, 31, 0x452E34u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x452E2Cu, 0x452E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E34u;
label_452e34:
    // 0x452e34: 0x27a40540  addiu       $a0, $sp, 0x540
    ctx->pc = 0x452e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_452e38:
    // 0x452e38: 0x8fa507e0  lw          $a1, 0x7E0($sp)
    ctx->pc = 0x452e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2016)));
label_452e3c:
    // 0x452e3c: 0x27a60730  addiu       $a2, $sp, 0x730
    ctx->pc = 0x452e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
label_452e40:
    // 0x452e40: 0xc119d74  jal         func_4675D0
label_452e44:
    if (ctx->pc == 0x452E44u) {
        ctx->pc = 0x452E48u;
        goto label_452e48;
    }
    ctx->pc = 0x452E40u;
    SET_GPR_U32(ctx, 31, 0x452E48u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x452E40u, 0x452E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E48u;
label_452e48:
    // 0x452e48: 0x27a40730  addiu       $a0, $sp, 0x730
    ctx->pc = 0x452e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
label_452e4c:
    // 0x452e4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452e50:
    // 0x452e50: 0xc0402d4  jal         func_100B50
label_452e54:
    if (ctx->pc == 0x452E54u) {
        ctx->pc = 0x452E58u;
        goto label_452e58;
    }
    ctx->pc = 0x452E50u;
    SET_GPR_U32(ctx, 31, 0x452E58u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452E50u, 0x452E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E58u;
label_452e58:
    // 0x452e58: 0x8fa407d0  lw          $a0, 0x7D0($sp)
    ctx->pc = 0x452e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2000)));
label_452e5c:
    // 0x452e5c: 0xc114a8c  jal         func_452A30
label_452e60:
    if (ctx->pc == 0x452E60u) {
        ctx->pc = 0x452E64u;
        goto label_452e64;
    }
    ctx->pc = 0x452E5Cu;
    SET_GPR_U32(ctx, 31, 0x452E64u);
    ctx->pc = 0x452A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452A30u, 0x452E5Cu, 0x452E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E64u;
label_452e64:
    // 0x452e64: 0x27a40540  addiu       $a0, $sp, 0x540
    ctx->pc = 0x452e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_452e68:
    // 0x452e68: 0xc119db4  jal         func_4676D0
label_452e6c:
    if (ctx->pc == 0x452E6Cu) {
        ctx->pc = 0x452E70u;
        goto label_452e70;
    }
    ctx->pc = 0x452E68u;
    SET_GPR_U32(ctx, 31, 0x452E70u);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x452E68u, 0x452E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E70u;
label_452e70:
    // 0x452e70: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_452e74:
    if (ctx->pc == 0x452E74u) {
        ctx->pc = 0x452E78u;
        goto label_452e78;
    }
    ctx->pc = 0x452E70u;
    {
        const bool branch_taken_0x452e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x452e70) {
            ctx->pc = 0x452F10u;
            goto label_452f10;
        }
    }
    ctx->pc = 0x452E78u;
label_452e78:
    // 0x452e78: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x452e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_452e7c:
    // 0x452e7c: 0x2484def0  addiu       $a0, $a0, -0x2110
    ctx->pc = 0x452e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958832));
label_452e80:
    // 0x452e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x452e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452e84:
    // 0x452e84: 0xc115ae4  jal         func_456B90
label_452e88:
    if (ctx->pc == 0x452E88u) {
        ctx->pc = 0x452E8Cu;
        goto label_452e8c;
    }
    ctx->pc = 0x452E84u;
    SET_GPR_U32(ctx, 31, 0x452E8Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x452E84u, 0x452E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452E8Cu;
label_452e8c:
    // 0x452e8c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x452e8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452e90:
    // 0x452e90: 0x27a40540  addiu       $a0, $sp, 0x540
    ctx->pc = 0x452e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_452e94:
    // 0x452e94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x452e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452e98:
    // 0x452e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x452e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452e9c:
    // 0x452e9c: 0xc119d90  jal         func_467640
label_452ea0:
    if (ctx->pc == 0x452EA0u) {
        ctx->pc = 0x452EA4u;
        goto label_452ea4;
    }
    ctx->pc = 0x452E9Cu;
    SET_GPR_U32(ctx, 31, 0x452EA4u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x452E9Cu, 0x452EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452EA4u;
label_452ea4:
    // 0x452ea4: 0x27a40780  addiu       $a0, $sp, 0x780
    ctx->pc = 0x452ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_452ea8:
    // 0x452ea8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x452ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452eac:
    // 0x452eac: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x452eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_452eb0:
    // 0x452eb0: 0xc0402d4  jal         func_100B50
label_452eb4:
    if (ctx->pc == 0x452EB4u) {
        ctx->pc = 0x452EB8u;
        goto label_452eb8;
    }
    ctx->pc = 0x452EB0u;
    SET_GPR_U32(ctx, 31, 0x452EB8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452EB0u, 0x452EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452EB8u;
label_452eb8:
    // 0x452eb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x452eb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452ebc:
    // 0x452ebc: 0x27a80790  addiu       $t0, $sp, 0x790
    ctx->pc = 0x452ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_452ec0:
    // 0x452ec0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x452ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_452ec4:
    // 0x452ec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x452ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452ec8:
    // 0x452ec8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x452ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_452ecc:
    // 0x452ecc: 0xc0402d4  jal         func_100B50
label_452ed0:
    if (ctx->pc == 0x452ED0u) {
        ctx->pc = 0x452ED4u;
        goto label_452ed4;
    }
    ctx->pc = 0x452ECCu;
    SET_GPR_U32(ctx, 31, 0x452ED4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452ECCu, 0x452ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452ED4u;
label_452ed4:
    // 0x452ed4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x452ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452ed8:
    // 0x452ed8: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x452ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_452edc:
    // 0x452edc: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x452edcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452ee0:
    // 0x452ee0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x452ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_452ee4:
    // 0x452ee4: 0xc0402d4  jal         func_100B50
label_452ee8:
    if (ctx->pc == 0x452EE8u) {
        ctx->pc = 0x452EECu;
        goto label_452eec;
    }
    ctx->pc = 0x452EE4u;
    SET_GPR_U32(ctx, 31, 0x452EECu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452EE4u, 0x452EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452EECu;
label_452eec:
    // 0x452eec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x452eecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452ef0:
    // 0x452ef0: 0x27a307b0  addiu       $v1, $sp, 0x7B0
    ctx->pc = 0x452ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_452ef4:
    // 0x452ef4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x452ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_452ef8:
    // 0x452ef8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452efc:
    // 0x452efc: 0xc0402d4  jal         func_100B50
label_452f00:
    if (ctx->pc == 0x452F00u) {
        ctx->pc = 0x452F04u;
        goto label_452f04;
    }
    ctx->pc = 0x452EFCu;
    SET_GPR_U32(ctx, 31, 0x452F04u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452EFCu, 0x452F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F04u;
label_452f04:
    // 0x452f04: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x452f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_452f08:
    // 0x452f08: 0x10000211  b           . + 4 + (0x211 << 2)
label_452f0c:
    if (ctx->pc == 0x452F0Cu) {
        ctx->pc = 0x452F10u;
        goto label_452f10;
    }
    ctx->pc = 0x452F08u;
    {
        const bool branch_taken_0x452f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452f08) {
            ctx->pc = 0x453750u;
            goto label_453750;
        }
    }
    ctx->pc = 0x452F10u;
label_452f10:
    // 0x452f10: 0x27a70540  addiu       $a3, $sp, 0x540
    ctx->pc = 0x452f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_452f14:
    // 0x452f14: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x452f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_452f18:
    // 0x452f18: 0x27a80790  addiu       $t0, $sp, 0x790
    ctx->pc = 0x452f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_452f1c:
    // 0x452f1c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x452f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_452f20:
    // 0x452f20: 0xc119ecc  jal         func_467B30
label_452f24:
    if (ctx->pc == 0x452F24u) {
        ctx->pc = 0x452F28u;
        goto label_452f28;
    }
    ctx->pc = 0x452F20u;
    SET_GPR_U32(ctx, 31, 0x452F28u);
    ctx->pc = 0x467B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467B30u, 0x452F20u, 0x452F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F28u;
label_452f28:
    // 0x452f28: 0x27aa0720  addiu       $t2, $sp, 0x720
    ctx->pc = 0x452f28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
label_452f2c:
    // 0x452f2c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x452f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_452f30:
    // 0x452f30: 0x278bb028  addiu       $t3, $gp, -0x4FD8
    ctx->pc = 0x452f30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946856));
label_452f34:
    // 0x452f34: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x452f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_452f38:
    // 0x452f38: 0xc040304  jal         func_100C10
label_452f3c:
    if (ctx->pc == 0x452F3Cu) {
        ctx->pc = 0x452F40u;
        goto label_452f40;
    }
    ctx->pc = 0x452F38u;
    SET_GPR_U32(ctx, 31, 0x452F40u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x452F38u, 0x452F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F40u;
label_452f40:
    // 0x452f40: 0x27a20790  addiu       $v0, $sp, 0x790
    ctx->pc = 0x452f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_452f44:
    // 0x452f44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x452f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452f48:
    // 0x452f48: 0x27a50720  addiu       $a1, $sp, 0x720
    ctx->pc = 0x452f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
label_452f4c:
    // 0x452f4c: 0xc05c618  jal         func_171860
label_452f50:
    if (ctx->pc == 0x452F50u) {
        ctx->pc = 0x452F54u;
        goto label_452f54;
    }
    ctx->pc = 0x452F4Cu;
    SET_GPR_U32(ctx, 31, 0x452F54u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x452F4Cu, 0x452F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F54u;
label_452f54:
    // 0x452f54: 0x401027  not         $v0, $v0
    ctx->pc = 0x452f54u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_452f58:
    // 0x452f58: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x452f58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_452f5c:
    // 0x452f5c: 0x309500ff  andi        $s5, $a0, 0xFF
    ctx->pc = 0x452f5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_452f60:
    // 0x452f60: 0x27a40720  addiu       $a0, $sp, 0x720
    ctx->pc = 0x452f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
label_452f64:
    // 0x452f64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452f68:
    // 0x452f68: 0xc0402d4  jal         func_100B50
label_452f6c:
    if (ctx->pc == 0x452F6Cu) {
        ctx->pc = 0x452F70u;
        goto label_452f70;
    }
    ctx->pc = 0x452F68u;
    SET_GPR_U32(ctx, 31, 0x452F70u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452F68u, 0x452F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F70u;
label_452f70:
    // 0x452f70: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
label_452f74:
    if (ctx->pc == 0x452F74u) {
        ctx->pc = 0x452F78u;
        goto label_452f78;
    }
    ctx->pc = 0x452F70u;
    {
        const bool branch_taken_0x452f70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x452f70) {
            ctx->pc = 0x452FFCu;
            goto label_452ffc;
        }
    }
    ctx->pc = 0x452F78u;
label_452f78:
    // 0x452f78: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x452f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_452f7c:
    // 0x452f7c: 0x2484df30  addiu       $a0, $a0, -0x20D0
    ctx->pc = 0x452f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958896));
label_452f80:
    // 0x452f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x452f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452f84:
    // 0x452f84: 0xc115ae4  jal         func_456B90
label_452f88:
    if (ctx->pc == 0x452F88u) {
        ctx->pc = 0x452F8Cu;
        goto label_452f8c;
    }
    ctx->pc = 0x452F84u;
    SET_GPR_U32(ctx, 31, 0x452F8Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x452F84u, 0x452F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452F8Cu;
label_452f8c:
    // 0x452f8c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x452f8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452f90:
    // 0x452f90: 0x27a40540  addiu       $a0, $sp, 0x540
    ctx->pc = 0x452f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_452f94:
    // 0x452f94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x452f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452f98:
    // 0x452f98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x452f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_452f9c:
    // 0x452f9c: 0xc119d90  jal         func_467640
label_452fa0:
    if (ctx->pc == 0x452FA0u) {
        ctx->pc = 0x452FA4u;
        goto label_452fa4;
    }
    ctx->pc = 0x452F9Cu;
    SET_GPR_U32(ctx, 31, 0x452FA4u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x452F9Cu, 0x452FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452FA4u;
label_452fa4:
    // 0x452fa4: 0x27a80780  addiu       $t0, $sp, 0x780
    ctx->pc = 0x452fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_452fa8:
    // 0x452fa8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x452fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_452fac:
    // 0x452fac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452fb0:
    // 0x452fb0: 0xc0402d4  jal         func_100B50
label_452fb4:
    if (ctx->pc == 0x452FB4u) {
        ctx->pc = 0x452FB8u;
        goto label_452fb8;
    }
    ctx->pc = 0x452FB0u;
    SET_GPR_U32(ctx, 31, 0x452FB8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452FB0u, 0x452FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452FB8u;
label_452fb8:
    // 0x452fb8: 0x27a50790  addiu       $a1, $sp, 0x790
    ctx->pc = 0x452fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_452fbc:
    // 0x452fbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x452fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_452fc0:
    // 0x452fc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452fc4:
    // 0x452fc4: 0xc0402d4  jal         func_100B50
label_452fc8:
    if (ctx->pc == 0x452FC8u) {
        ctx->pc = 0x452FCCu;
        goto label_452fcc;
    }
    ctx->pc = 0x452FC4u;
    SET_GPR_U32(ctx, 31, 0x452FCCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452FC4u, 0x452FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452FCCu;
label_452fcc:
    // 0x452fcc: 0x27a207a0  addiu       $v0, $sp, 0x7A0
    ctx->pc = 0x452fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_452fd0:
    // 0x452fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x452fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452fd4:
    // 0x452fd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452fd8:
    // 0x452fd8: 0xc0402d4  jal         func_100B50
label_452fdc:
    if (ctx->pc == 0x452FDCu) {
        ctx->pc = 0x452FE0u;
        goto label_452fe0;
    }
    ctx->pc = 0x452FD8u;
    SET_GPR_U32(ctx, 31, 0x452FE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452FD8u, 0x452FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452FE0u;
label_452fe0:
    // 0x452fe0: 0x27a407b0  addiu       $a0, $sp, 0x7B0
    ctx->pc = 0x452fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_452fe4:
    // 0x452fe4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_452fe8:
    // 0x452fe8: 0xc0402d4  jal         func_100B50
label_452fec:
    if (ctx->pc == 0x452FECu) {
        ctx->pc = 0x452FF0u;
        goto label_452ff0;
    }
    ctx->pc = 0x452FE8u;
    SET_GPR_U32(ctx, 31, 0x452FF0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x452FE8u, 0x452FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452FF0u;
label_452ff0:
    // 0x452ff0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x452ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_452ff4:
    // 0x452ff4: 0x100001d6  b           . + 4 + (0x1D6 << 2)
label_452ff8:
    if (ctx->pc == 0x452FF8u) {
        ctx->pc = 0x452FFCu;
        goto label_452ffc;
    }
    ctx->pc = 0x452FF4u;
    {
        const bool branch_taken_0x452ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452ff4) {
            ctx->pc = 0x453750u;
            goto label_453750;
        }
    }
    ctx->pc = 0x452FFCu;
label_452ffc:
    // 0x452ffc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x452ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_453000:
    // 0x453000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x453000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_453004:
    // 0x453004: 0x100001af  b           . + 4 + (0x1AF << 2)
label_453008:
    if (ctx->pc == 0x453008u) {
        ctx->pc = 0x45300Cu;
        goto label_45300c;
    }
    ctx->pc = 0x453004u;
    {
        const bool branch_taken_0x453004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453004) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x45300Cu;
label_45300c:
    // 0x45300c: 0x27a507a0  addiu       $a1, $sp, 0x7A0
    ctx->pc = 0x45300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_453010:
    // 0x453010: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x453010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_453014:
    // 0x453014: 0xc119310  jal         func_464C40
label_453018:
    if (ctx->pc == 0x453018u) {
        ctx->pc = 0x45301Cu;
        goto label_45301c;
    }
    ctx->pc = 0x453014u;
    SET_GPR_U32(ctx, 31, 0x45301Cu);
    ctx->pc = 0x464C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C40u, 0x453014u, 0x45301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45301Cu;
label_45301c:
    // 0x45301c: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x45301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_453020:
    // 0x453020: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x453020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_453024:
    // 0x453024: 0xc048c30  jal         func_1230C0
label_453028:
    if (ctx->pc == 0x453028u) {
        ctx->pc = 0x45302Cu;
        goto label_45302c;
    }
    ctx->pc = 0x453024u;
    SET_GPR_U32(ctx, 31, 0x45302Cu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x453024u, 0x45302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45302Cu;
label_45302c:
    // 0x45302c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_453030:
    if (ctx->pc == 0x453030u) {
        ctx->pc = 0x453034u;
        goto label_453034;
    }
    ctx->pc = 0x45302Cu;
    {
        const bool branch_taken_0x45302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45302c) {
            ctx->pc = 0x453088u;
            goto label_453088;
        }
    }
    ctx->pc = 0x453034u;
label_453034:
    // 0x453034: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x453034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_453038:
    // 0x453038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45303c:
    // 0x45303c: 0xc05d680  jal         func_175A00
label_453040:
    if (ctx->pc == 0x453040u) {
        ctx->pc = 0x453044u;
        goto label_453044;
    }
    ctx->pc = 0x45303Cu;
    SET_GPR_U32(ctx, 31, 0x453044u);
    ctx->pc = 0x175A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A00u, 0x45303Cu, 0x453044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453044u;
label_453044:
    // 0x453044: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x453044u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_453048:
    // 0x453048: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x453048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_45304c:
    // 0x45304c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x45304cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_453050:
    // 0x453050: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x453050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_453054:
    // 0x453054: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_453058:
    if (ctx->pc == 0x453058u) {
        ctx->pc = 0x45305Cu;
        goto label_45305c;
    }
    ctx->pc = 0x453054u;
    {
        const bool branch_taken_0x453054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x453054) {
            ctx->pc = 0x453088u;
            goto label_453088;
        }
    }
    ctx->pc = 0x45305Cu;
label_45305c:
    // 0x45305c: 0x27a507a0  addiu       $a1, $sp, 0x7A0
    ctx->pc = 0x45305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_453060:
    // 0x453060: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x453060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_453064:
    // 0x453064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453068:
    // 0x453068: 0xc05d680  jal         func_175A00
label_45306c:
    if (ctx->pc == 0x45306Cu) {
        ctx->pc = 0x453070u;
        goto label_453070;
    }
    ctx->pc = 0x453068u;
    SET_GPR_U32(ctx, 31, 0x453070u);
    ctx->pc = 0x175A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A00u, 0x453068u, 0x453070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453070u;
label_453070:
    // 0x453070: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x453070u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_453074:
    // 0x453074: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x453074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
label_453078:
    // 0x453078: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x453078u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_45307c:
    // 0x45307c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x45307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_453080:
    // 0x453080: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_453084:
    if (ctx->pc == 0x453084u) {
        ctx->pc = 0x453088u;
        goto label_453088;
    }
    ctx->pc = 0x453080u;
    {
        const bool branch_taken_0x453080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x453080) {
            ctx->pc = 0x453094u;
            goto label_453094;
        }
    }
    ctx->pc = 0x453088u;
label_453088:
    // 0x453088: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x453088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45308c:
    // 0x45308c: 0x1000018d  b           . + 4 + (0x18D << 2)
label_453090:
    if (ctx->pc == 0x453090u) {
        ctx->pc = 0x453094u;
        goto label_453094;
    }
    ctx->pc = 0x45308Cu;
    {
        const bool branch_taken_0x45308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45308c) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x453094u;
label_453094:
    // 0x453094: 0x27a50710  addiu       $a1, $sp, 0x710
    ctx->pc = 0x453094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
label_453098:
    // 0x453098: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x453098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_45309c:
    // 0x45309c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45309cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4530a0:
    // 0x4530a0: 0x24a5df90  addiu       $a1, $a1, -0x2070
    ctx->pc = 0x4530a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958992));
label_4530a4:
    // 0x4530a4: 0xc040304  jal         func_100C10
label_4530a8:
    if (ctx->pc == 0x4530A8u) {
        ctx->pc = 0x4530ACu;
        goto label_4530ac;
    }
    ctx->pc = 0x4530A4u;
    SET_GPR_U32(ctx, 31, 0x4530ACu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x4530A4u, 0x4530ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4530ACu;
label_4530ac:
    // 0x4530ac: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x4530acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_4530b0:
    // 0x4530b0: 0x27a50710  addiu       $a1, $sp, 0x710
    ctx->pc = 0x4530b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
label_4530b4:
    // 0x4530b4: 0xc05c618  jal         func_171860
label_4530b8:
    if (ctx->pc == 0x4530B8u) {
        ctx->pc = 0x4530BCu;
        goto label_4530bc;
    }
    ctx->pc = 0x4530B4u;
    SET_GPR_U32(ctx, 31, 0x4530BCu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x4530B4u, 0x4530BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4530BCu;
label_4530bc:
    // 0x4530bc: 0x401027  not         $v0, $v0
    ctx->pc = 0x4530bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4530c0:
    // 0x4530c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4530c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4530c4:
    // 0x4530c4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x4530c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4530c8:
    // 0x4530c8: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x4530c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
label_4530cc:
    // 0x4530cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4530ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4530d0:
    // 0x4530d0: 0xc0402d4  jal         func_100B50
label_4530d4:
    if (ctx->pc == 0x4530D4u) {
        ctx->pc = 0x4530D8u;
        goto label_4530d8;
    }
    ctx->pc = 0x4530D0u;
    SET_GPR_U32(ctx, 31, 0x4530D8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4530D0u, 0x4530D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4530D8u;
label_4530d8:
    // 0x4530d8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_4530dc:
    if (ctx->pc == 0x4530DCu) {
        ctx->pc = 0x4530E0u;
        goto label_4530e0;
    }
    ctx->pc = 0x4530D8u;
    {
        const bool branch_taken_0x4530d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4530d8) {
            ctx->pc = 0x4530ECu;
            goto label_4530ec;
        }
    }
    ctx->pc = 0x4530E0u;
label_4530e0:
    // 0x4530e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4530e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4530e4:
    // 0x4530e4: 0x10000177  b           . + 4 + (0x177 << 2)
label_4530e8:
    if (ctx->pc == 0x4530E8u) {
        ctx->pc = 0x4530ECu;
        goto label_4530ec;
    }
    ctx->pc = 0x4530E4u;
    {
        const bool branch_taken_0x4530e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4530e4) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x4530ECu;
label_4530ec:
    // 0x4530ec: 0x27a40700  addiu       $a0, $sp, 0x700
    ctx->pc = 0x4530ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
label_4530f0:
    // 0x4530f0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4530f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4530f4:
    // 0x4530f4: 0x24a5dfa0  addiu       $a1, $a1, -0x2060
    ctx->pc = 0x4530f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959008));
label_4530f8:
    // 0x4530f8: 0xc040304  jal         func_100C10
label_4530fc:
    if (ctx->pc == 0x4530FCu) {
        ctx->pc = 0x453100u;
        goto label_453100;
    }
    ctx->pc = 0x4530F8u;
    SET_GPR_U32(ctx, 31, 0x453100u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x4530F8u, 0x453100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453100u;
label_453100:
    // 0x453100: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x453100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_453104:
    // 0x453104: 0x27a50700  addiu       $a1, $sp, 0x700
    ctx->pc = 0x453104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
label_453108:
    // 0x453108: 0xc05c618  jal         func_171860
label_45310c:
    if (ctx->pc == 0x45310Cu) {
        ctx->pc = 0x453110u;
        goto label_453110;
    }
    ctx->pc = 0x453108u;
    SET_GPR_U32(ctx, 31, 0x453110u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x453108u, 0x453110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453110u;
label_453110:
    // 0x453110: 0x401027  not         $v0, $v0
    ctx->pc = 0x453110u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_453114:
    // 0x453114: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x453114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_453118:
    // 0x453118: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x453118u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45311c:
    // 0x45311c: 0x27a40700  addiu       $a0, $sp, 0x700
    ctx->pc = 0x45311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
label_453120:
    // 0x453120: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453124:
    // 0x453124: 0xc0402d4  jal         func_100B50
label_453128:
    if (ctx->pc == 0x453128u) {
        ctx->pc = 0x45312Cu;
        goto label_45312c;
    }
    ctx->pc = 0x453124u;
    SET_GPR_U32(ctx, 31, 0x45312Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453124u, 0x45312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45312Cu;
label_45312c:
    // 0x45312c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_453130:
    if (ctx->pc == 0x453130u) {
        ctx->pc = 0x453134u;
        goto label_453134;
    }
    ctx->pc = 0x45312Cu;
    {
        const bool branch_taken_0x45312c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x45312c) {
            ctx->pc = 0x453140u;
            goto label_453140;
        }
    }
    ctx->pc = 0x453134u;
label_453134:
    // 0x453134: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x453134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_453138:
    // 0x453138: 0x10000162  b           . + 4 + (0x162 << 2)
label_45313c:
    if (ctx->pc == 0x45313Cu) {
        ctx->pc = 0x453140u;
        goto label_453140;
    }
    ctx->pc = 0x453138u;
    {
        const bool branch_taken_0x453138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453138) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x453140u;
label_453140:
    // 0x453140: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x453140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_453144:
    // 0x453144: 0x1202015f  beq         $s0, $v0, . + 4 + (0x15F << 2)
label_453148:
    if (ctx->pc == 0x453148u) {
        ctx->pc = 0x45314Cu;
        goto label_45314c;
    }
    ctx->pc = 0x453144u;
    {
        const bool branch_taken_0x453144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x453144) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x45314Cu;
label_45314c:
    // 0x45314c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x45314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_453150:
    // 0x453150: 0xc119b68  jal         func_466DA0
label_453154:
    if (ctx->pc == 0x453154u) {
        ctx->pc = 0x453158u;
        goto label_453158;
    }
    ctx->pc = 0x453150u;
    SET_GPR_U32(ctx, 31, 0x453158u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x453150u, 0x453158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453158u;
label_453158:
    // 0x453158: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x453158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_45315c:
    // 0x45315c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453160:
    // 0x453160: 0xc0400e0  jal         func_100380
label_453164:
    if (ctx->pc == 0x453164u) {
        ctx->pc = 0x453168u;
        goto label_453168;
    }
    ctx->pc = 0x453160u;
    SET_GPR_U32(ctx, 31, 0x453168u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x453160u, 0x453168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453168u;
label_453168:
    // 0x453168: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x453168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45316c:
    // 0x45316c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_453170:
    if (ctx->pc == 0x453170u) {
        ctx->pc = 0x453174u;
        goto label_453174;
    }
    ctx->pc = 0x45316Cu;
    {
        const bool branch_taken_0x45316c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x45316c) {
            ctx->pc = 0x453184u;
            goto label_453184;
        }
    }
    ctx->pc = 0x453174u;
label_453174:
    // 0x453174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x453174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_453178:
    // 0x453178: 0xc114880  jal         func_452200
label_45317c:
    if (ctx->pc == 0x45317Cu) {
        ctx->pc = 0x453180u;
        goto label_453180;
    }
    ctx->pc = 0x453178u;
    SET_GPR_U32(ctx, 31, 0x453180u);
    ctx->pc = 0x452200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452200u, 0x453178u, 0x453180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453180u;
label_453180:
    // 0x453180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x453180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453184:
    // 0x453184: 0xafb207cc  sw          $s2, 0x7CC($sp)
    ctx->pc = 0x453184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1996), GPR_U32(ctx, 18));
label_453188:
    // 0x453188: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x453188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_45318c:
    // 0x45318c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x45318cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_453190:
    // 0x453190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x453190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_453194:
    // 0x453194: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_453198:
    if (ctx->pc == 0x453198u) {
        ctx->pc = 0x45319Cu;
        goto label_45319c;
    }
    ctx->pc = 0x453194u;
    {
        const bool branch_taken_0x453194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453194) {
            ctx->pc = 0x453240u;
            goto label_453240;
        }
    }
    ctx->pc = 0x45319Cu;
label_45319c:
    // 0x45319c: 0x8f82b014  lw          $v0, -0x4FEC($gp)
    ctx->pc = 0x45319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946836)));
label_4531a0:
    // 0x4531a0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4531a4:
    if (ctx->pc == 0x4531A4u) {
        ctx->pc = 0x4531A8u;
        goto label_4531a8;
    }
    ctx->pc = 0x4531A0u;
    {
        const bool branch_taken_0x4531a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4531a0) {
            ctx->pc = 0x453240u;
            goto label_453240;
        }
    }
    ctx->pc = 0x4531A8u;
label_4531a8:
    // 0x4531a8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4531a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4531ac:
    // 0x4531ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4531acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4531b0:
    // 0x4531b0: 0x27a60770  addiu       $a2, $sp, 0x770
    ctx->pc = 0x4531b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
label_4531b4:
    // 0x4531b4: 0xc115ee8  jal         func_457BA0
label_4531b8:
    if (ctx->pc == 0x4531B8u) {
        ctx->pc = 0x4531BCu;
        goto label_4531bc;
    }
    ctx->pc = 0x4531B4u;
    SET_GPR_U32(ctx, 31, 0x4531BCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4531B4u, 0x4531BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4531BCu;
label_4531bc:
    // 0x4531bc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4531c0:
    if (ctx->pc == 0x4531C0u) {
        ctx->pc = 0x4531C4u;
        goto label_4531c4;
    }
    ctx->pc = 0x4531BCu;
    {
        const bool branch_taken_0x4531bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4531bc) {
            ctx->pc = 0x453240u;
            goto label_453240;
        }
    }
    ctx->pc = 0x4531C4u;
label_4531c4:
    // 0x4531c4: 0x8fa20778  lw          $v0, 0x778($sp)
    ctx->pc = 0x4531c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1912)));
label_4531c8:
    // 0x4531c8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4531cc:
    if (ctx->pc == 0x4531CCu) {
        ctx->pc = 0x4531D0u;
        goto label_4531d0;
    }
    ctx->pc = 0x4531C8u;
    {
        const bool branch_taken_0x4531c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4531c8) {
            ctx->pc = 0x453240u;
            goto label_453240;
        }
    }
    ctx->pc = 0x4531D0u;
label_4531d0:
    // 0x4531d0: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x4531d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_4531d4:
    // 0x4531d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4531d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4531d8:
    // 0x4531d8: 0x8fa60774  lw          $a2, 0x774($sp)
    ctx->pc = 0x4531d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1908)));
label_4531dc:
    // 0x4531dc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4531dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4531e0:
    // 0x4531e0: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x4531e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_4531e4:
    // 0x4531e4: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x4531e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_4531e8:
    // 0x4531e8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4531e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4531ec:
    // 0x4531ec: 0x2529dfb0  addiu       $t1, $t1, -0x2050
    ctx->pc = 0x4531ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959024));
label_4531f0:
    // 0x4531f0: 0xc113940  jal         func_44E500
label_4531f4:
    if (ctx->pc == 0x4531F4u) {
        ctx->pc = 0x4531F8u;
        goto label_4531f8;
    }
    ctx->pc = 0x4531F0u;
    SET_GPR_U32(ctx, 31, 0x4531F8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4531F0u, 0x4531F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4531F8u;
label_4531f8:
    // 0x4531f8: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x4531f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_4531fc:
    // 0x4531fc: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x4531fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_453200:
    // 0x453200: 0xc115c24  jal         func_457090
label_453204:
    if (ctx->pc == 0x453204u) {
        ctx->pc = 0x453208u;
        goto label_453208;
    }
    ctx->pc = 0x453200u;
    SET_GPR_U32(ctx, 31, 0x453208u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x453200u, 0x453208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453208u;
label_453208:
    // 0x453208: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x453208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_45320c:
    // 0x45320c: 0x8fa20778  lw          $v0, 0x778($sp)
    ctx->pc = 0x45320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1912)));
label_453210:
    // 0x453210: 0x40f809  jalr        $v0
label_453214:
    if (ctx->pc == 0x453214u) {
        ctx->pc = 0x453218u;
        goto label_453218;
    }
    ctx->pc = 0x453210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x453218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453210u, 0x453218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x453218u;
label_453218:
    // 0x453218: 0xaf82b014  sw          $v0, -0x4FEC($gp)
    ctx->pc = 0x453218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946836), GPR_U32(ctx, 2));
label_45321c:
    // 0x45321c: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x45321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_453220:
    // 0x453220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_453224:
    if (ctx->pc == 0x453224u) {
        ctx->pc = 0x453228u;
        goto label_453228;
    }
    ctx->pc = 0x453220u;
    {
        const bool branch_taken_0x453220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453220) {
            ctx->pc = 0x453230u;
            goto label_453230;
        }
    }
    ctx->pc = 0x453228u;
label_453228:
    // 0x453228: 0xd  break       0
    ctx->pc = 0x453228u;
    runtime->handleBreak(rdram, ctx);
label_45322c:
    // 0x45322c: 0x0  nop
    ctx->pc = 0x45322cu;
    // NOP
label_453230:
    // 0x453230: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x453230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_453234:
    // 0x453234: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453238:
    // 0x453238: 0xc11392c  jal         func_44E4B0
label_45323c:
    if (ctx->pc == 0x45323Cu) {
        ctx->pc = 0x453240u;
        goto label_453240;
    }
    ctx->pc = 0x453238u;
    SET_GPR_U32(ctx, 31, 0x453240u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x453238u, 0x453240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453240u;
label_453240:
    // 0x453240: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x453240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453244:
    // 0x453244: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x453244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_453248:
    // 0x453248: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x453248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_45324c:
    // 0x45324c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x45324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_453250:
    // 0x453250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x453250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_453254:
    // 0x453254: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
label_453258:
    if (ctx->pc == 0x453258u) {
        ctx->pc = 0x45325Cu;
        goto label_45325c;
    }
    ctx->pc = 0x453254u;
    {
        const bool branch_taken_0x453254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x453254) {
            ctx->pc = 0x4533E0u;
            goto label_4533e0;
        }
    }
    ctx->pc = 0x45325Cu;
label_45325c:
    // 0x45325c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_453260:
    if (ctx->pc == 0x453260u) {
        ctx->pc = 0x453264u;
        goto label_453264;
    }
    ctx->pc = 0x45325Cu;
    {
        const bool branch_taken_0x45325c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45325c) {
            ctx->pc = 0x45326Cu;
            goto label_45326c;
        }
    }
    ctx->pc = 0x453264u;
label_453264:
    // 0x453264: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_453268:
    if (ctx->pc == 0x453268u) {
        ctx->pc = 0x45326Cu;
        goto label_45326c;
    }
    ctx->pc = 0x453264u;
    {
        const bool branch_taken_0x453264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453264) {
            ctx->pc = 0x45360Cu;
            goto label_45360c;
        }
    }
    ctx->pc = 0x45326Cu;
label_45326c:
    // 0x45326c: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x45326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_453270:
    // 0x453270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453274:
    // 0x453274: 0xc1193e8  jal         func_464FA0
label_453278:
    if (ctx->pc == 0x453278u) {
        ctx->pc = 0x45327Cu;
        goto label_45327c;
    }
    ctx->pc = 0x453274u;
    SET_GPR_U32(ctx, 31, 0x45327Cu);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x453274u, 0x45327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45327Cu;
label_45327c:
    // 0x45327c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x45327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_453280:
    // 0x453280: 0x14430110  bne         $v0, $v1, . + 4 + (0x110 << 2)
label_453284:
    if (ctx->pc == 0x453284u) {
        ctx->pc = 0x453288u;
        goto label_453288;
    }
    ctx->pc = 0x453280u;
    {
        const bool branch_taken_0x453280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x453280) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x453288u;
label_453288:
    // 0x453288: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x453288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_45328c:
    // 0x45328c: 0xc119b68  jal         func_466DA0
label_453290:
    if (ctx->pc == 0x453290u) {
        ctx->pc = 0x453294u;
        goto label_453294;
    }
    ctx->pc = 0x45328Cu;
    SET_GPR_U32(ctx, 31, 0x453294u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x45328Cu, 0x453294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453294u;
label_453294:
    // 0x453294: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x453294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_453298:
    // 0x453298: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x453298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45329c:
    // 0x45329c: 0xc0400e0  jal         func_100380
label_4532a0:
    if (ctx->pc == 0x4532A0u) {
        ctx->pc = 0x4532A4u;
        goto label_4532a4;
    }
    ctx->pc = 0x45329Cu;
    SET_GPR_U32(ctx, 31, 0x4532A4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x45329Cu, 0x4532A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4532A4u;
label_4532a4:
    // 0x4532a4: 0x8fa307cc  lw          $v1, 0x7CC($sp)
    ctx->pc = 0x4532a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_4532a8:
    // 0x4532a8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x4532a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_4532ac:
    // 0x4532ac: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x4532acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_4532b0:
    // 0x4532b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4532b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4532b4:
    // 0x4532b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4532b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4532b8:
    // 0x4532b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4532b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4532bc:
    // 0x4532bc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4532c0:
    if (ctx->pc == 0x4532C0u) {
        ctx->pc = 0x4532C4u;
        goto label_4532c4;
    }
    ctx->pc = 0x4532BCu;
    {
        const bool branch_taken_0x4532bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4532bc) {
            ctx->pc = 0x453368u;
            goto label_453368;
        }
    }
    ctx->pc = 0x4532C4u;
label_4532c4:
    // 0x4532c4: 0x8f82b018  lw          $v0, -0x4FE8($gp)
    ctx->pc = 0x4532c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946840)));
label_4532c8:
    // 0x4532c8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4532cc:
    if (ctx->pc == 0x4532CCu) {
        ctx->pc = 0x4532D0u;
        goto label_4532d0;
    }
    ctx->pc = 0x4532C8u;
    {
        const bool branch_taken_0x4532c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532c8) {
            ctx->pc = 0x453368u;
            goto label_453368;
        }
    }
    ctx->pc = 0x4532D0u;
label_4532d0:
    // 0x4532d0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4532d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4532d4:
    // 0x4532d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4532d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4532d8:
    // 0x4532d8: 0x27a60760  addiu       $a2, $sp, 0x760
    ctx->pc = 0x4532d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_4532dc:
    // 0x4532dc: 0xc115ee8  jal         func_457BA0
label_4532e0:
    if (ctx->pc == 0x4532E0u) {
        ctx->pc = 0x4532E4u;
        goto label_4532e4;
    }
    ctx->pc = 0x4532DCu;
    SET_GPR_U32(ctx, 31, 0x4532E4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4532DCu, 0x4532E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4532E4u;
label_4532e4:
    // 0x4532e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4532e8:
    if (ctx->pc == 0x4532E8u) {
        ctx->pc = 0x4532ECu;
        goto label_4532ec;
    }
    ctx->pc = 0x4532E4u;
    {
        const bool branch_taken_0x4532e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532e4) {
            ctx->pc = 0x453368u;
            goto label_453368;
        }
    }
    ctx->pc = 0x4532ECu;
label_4532ec:
    // 0x4532ec: 0x8fa20768  lw          $v0, 0x768($sp)
    ctx->pc = 0x4532ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1896)));
label_4532f0:
    // 0x4532f0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4532f4:
    if (ctx->pc == 0x4532F4u) {
        ctx->pc = 0x4532F8u;
        goto label_4532f8;
    }
    ctx->pc = 0x4532F0u;
    {
        const bool branch_taken_0x4532f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532f0) {
            ctx->pc = 0x453368u;
            goto label_453368;
        }
    }
    ctx->pc = 0x4532F8u;
label_4532f8:
    // 0x4532f8: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x4532f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_4532fc:
    // 0x4532fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4532fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_453300:
    // 0x453300: 0x8fa60764  lw          $a2, 0x764($sp)
    ctx->pc = 0x453300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1892)));
label_453304:
    // 0x453304: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x453304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_453308:
    // 0x453308: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x453308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_45330c:
    // 0x45330c: 0x240800d0  addiu       $t0, $zero, 0xD0
    ctx->pc = 0x45330cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_453310:
    // 0x453310: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x453310u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_453314:
    // 0x453314: 0x2529dfc0  addiu       $t1, $t1, -0x2040
    ctx->pc = 0x453314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959040));
label_453318:
    // 0x453318: 0xc113940  jal         func_44E500
label_45331c:
    if (ctx->pc == 0x45331Cu) {
        ctx->pc = 0x453320u;
        goto label_453320;
    }
    ctx->pc = 0x453318u;
    SET_GPR_U32(ctx, 31, 0x453320u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x453318u, 0x453320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453320u;
label_453320:
    // 0x453320: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x453320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_453324:
    // 0x453324: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x453324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_453328:
    // 0x453328: 0xc115c24  jal         func_457090
label_45332c:
    if (ctx->pc == 0x45332Cu) {
        ctx->pc = 0x453330u;
        goto label_453330;
    }
    ctx->pc = 0x453328u;
    SET_GPR_U32(ctx, 31, 0x453330u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x453328u, 0x453330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453330u;
label_453330:
    // 0x453330: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x453330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_453334:
    // 0x453334: 0x8fa20768  lw          $v0, 0x768($sp)
    ctx->pc = 0x453334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1896)));
label_453338:
    // 0x453338: 0x40f809  jalr        $v0
label_45333c:
    if (ctx->pc == 0x45333Cu) {
        ctx->pc = 0x453340u;
        goto label_453340;
    }
    ctx->pc = 0x453338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x453340u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453338u, 0x453340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x453340u;
label_453340:
    // 0x453340: 0xaf82b018  sw          $v0, -0x4FE8($gp)
    ctx->pc = 0x453340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946840), GPR_U32(ctx, 2));
label_453344:
    // 0x453344: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x453344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_453348:
    // 0x453348: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45334c:
    if (ctx->pc == 0x45334Cu) {
        ctx->pc = 0x453350u;
        goto label_453350;
    }
    ctx->pc = 0x453348u;
    {
        const bool branch_taken_0x453348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453348) {
            ctx->pc = 0x453358u;
            goto label_453358;
        }
    }
    ctx->pc = 0x453350u;
label_453350:
    // 0x453350: 0xd  break       0
    ctx->pc = 0x453350u;
    runtime->handleBreak(rdram, ctx);
label_453354:
    // 0x453354: 0x0  nop
    ctx->pc = 0x453354u;
    // NOP
label_453358:
    // 0x453358: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x453358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_45335c:
    // 0x45335c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453360:
    // 0x453360: 0xc11392c  jal         func_44E4B0
label_453364:
    if (ctx->pc == 0x453364u) {
        ctx->pc = 0x453368u;
        goto label_453368;
    }
    ctx->pc = 0x453360u;
    SET_GPR_U32(ctx, 31, 0x453368u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x453360u, 0x453368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453368u;
label_453368:
    // 0x453368: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x453368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_45336c:
    // 0x45336c: 0xc041b38  jal         func_106CE0
label_453370:
    if (ctx->pc == 0x453370u) {
        ctx->pc = 0x453374u;
        goto label_453374;
    }
    ctx->pc = 0x45336Cu;
    SET_GPR_U32(ctx, 31, 0x453374u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x45336Cu, 0x453374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453374u;
label_453374:
    // 0x453374: 0x8fa707cc  lw          $a3, 0x7CC($sp)
    ctx->pc = 0x453374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453378:
    // 0x453378: 0x8fa307cc  lw          $v1, 0x7CC($sp)
    ctx->pc = 0x453378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_45337c:
    // 0x45337c: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x45337cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_453380:
    // 0x453380: 0x8fa307cc  lw          $v1, 0x7CC($sp)
    ctx->pc = 0x453380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453384:
    // 0x453384: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x453384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_453388:
    // 0x453388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45338c:
    // 0x45338c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45338cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_453390:
    // 0x453390: 0x24a5dfe0  addiu       $a1, $a1, -0x2020
    ctx->pc = 0x453390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
label_453394:
    // 0x453394: 0x27a60560  addiu       $a2, $sp, 0x560
    ctx->pc = 0x453394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_453398:
    // 0x453398: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x453398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_45339c:
    // 0x45339c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x45339cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_4533a0:
    // 0x4533a0: 0x24690008  addiu       $t1, $v1, 0x8
    ctx->pc = 0x4533a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_4533a4:
    // 0x4533a4: 0xc0bc408  jal         func_2F1020
label_4533a8:
    if (ctx->pc == 0x4533A8u) {
        ctx->pc = 0x4533ACu;
        goto label_4533ac;
    }
    ctx->pc = 0x4533A4u;
    SET_GPR_U32(ctx, 31, 0x4533ACu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x4533A4u, 0x4533ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4533ACu;
label_4533ac:
    // 0x4533ac: 0x8fa407cc  lw          $a0, 0x7CC($sp)
    ctx->pc = 0x4533acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_4533b0:
    // 0x4533b0: 0x27a20560  addiu       $v0, $sp, 0x560
    ctx->pc = 0x4533b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_4533b4:
    // 0x4533b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4533b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4533b8:
    // 0x4533b8: 0xc041ba4  jal         func_106E90
label_4533bc:
    if (ctx->pc == 0x4533BCu) {
        ctx->pc = 0x4533C0u;
        goto label_4533c0;
    }
    ctx->pc = 0x4533B8u;
    SET_GPR_U32(ctx, 31, 0x4533C0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x4533B8u, 0x4533C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4533C0u;
label_4533c0:
    // 0x4533c0: 0x8fa207d0  lw          $v0, 0x7D0($sp)
    ctx->pc = 0x4533c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2000)));
label_4533c4:
    // 0x4533c4: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x4533c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4533c8:
    // 0x4533c8: 0x27a507cc  addiu       $a1, $sp, 0x7CC
    ctx->pc = 0x4533c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1996));
label_4533cc:
    // 0x4533cc: 0xc114e18  jal         func_453860
label_4533d0:
    if (ctx->pc == 0x4533D0u) {
        ctx->pc = 0x4533D4u;
        goto label_4533d4;
    }
    ctx->pc = 0x4533CCu;
    SET_GPR_U32(ctx, 31, 0x4533D4u);
    ctx->pc = 0x453860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453860u, 0x4533CCu, 0x4533D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4533D4u;
label_4533d4:
    // 0x4533d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4533d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4533d8:
    // 0x4533d8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_4533dc:
    if (ctx->pc == 0x4533DCu) {
        ctx->pc = 0x4533E0u;
        goto label_4533e0;
    }
    ctx->pc = 0x4533D8u;
    {
        const bool branch_taken_0x4533d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4533d8) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x4533E0u;
label_4533e0:
    // 0x4533e0: 0x27a607a0  addiu       $a2, $sp, 0x7A0
    ctx->pc = 0x4533e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_4533e4:
    // 0x4533e4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4533e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4533e8:
    // 0x4533e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4533e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4533ec:
    // 0x4533ec: 0xc1193e8  jal         func_464FA0
label_4533f0:
    if (ctx->pc == 0x4533F0u) {
        ctx->pc = 0x4533F4u;
        goto label_4533f4;
    }
    ctx->pc = 0x4533ECu;
    SET_GPR_U32(ctx, 31, 0x4533F4u);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x4533ECu, 0x4533F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4533F4u;
label_4533f4:
    // 0x4533f4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x4533f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4533f8:
    // 0x4533f8: 0x144300b2  bne         $v0, $v1, . + 4 + (0xB2 << 2)
label_4533fc:
    if (ctx->pc == 0x4533FCu) {
        ctx->pc = 0x453400u;
        goto label_453400;
    }
    ctx->pc = 0x4533F8u;
    {
        const bool branch_taken_0x4533f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4533f8) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x453400u;
label_453400:
    // 0x453400: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x453400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_453404:
    // 0x453404: 0xc119b68  jal         func_466DA0
label_453408:
    if (ctx->pc == 0x453408u) {
        ctx->pc = 0x45340Cu;
        goto label_45340c;
    }
    ctx->pc = 0x453404u;
    SET_GPR_U32(ctx, 31, 0x45340Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x453404u, 0x45340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45340Cu;
label_45340c:
    // 0x45340c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45340cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453410:
    // 0x453410: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x453410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_453414:
    // 0x453414: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x453414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_453418:
    // 0x453418: 0xc0400e0  jal         func_100380
label_45341c:
    if (ctx->pc == 0x45341Cu) {
        ctx->pc = 0x453420u;
        goto label_453420;
    }
    ctx->pc = 0x453418u;
    SET_GPR_U32(ctx, 31, 0x453420u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x453418u, 0x453420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453420u;
label_453420:
    // 0x453420: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x453420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453424:
    // 0x453424: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x453424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_453428:
    // 0x453428: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_45342c:
    if (ctx->pc == 0x45342Cu) {
        ctx->pc = 0x453430u;
        goto label_453430;
    }
    ctx->pc = 0x453428u;
    {
        const bool branch_taken_0x453428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x453428) {
            ctx->pc = 0x453444u;
            goto label_453444;
        }
    }
    ctx->pc = 0x453430u;
label_453430:
    // 0x453430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x453430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_453434:
    // 0x453434: 0xc114de4  jal         func_453790
label_453438:
    if (ctx->pc == 0x453438u) {
        ctx->pc = 0x45343Cu;
        goto label_45343c;
    }
    ctx->pc = 0x453434u;
    SET_GPR_U32(ctx, 31, 0x45343Cu);
    ctx->pc = 0x453790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453790u, 0x453434u, 0x45343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45343Cu;
label_45343c:
    // 0x45343c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x45343cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453440:
    // 0x453440: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x453440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_453444:
    // 0x453444: 0x8fa907cc  lw          $t1, 0x7CC($sp)
    ctx->pc = 0x453444u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453448:
    // 0x453448: 0xad310010  sw          $s1, 0x10($t1)
    ctx->pc = 0x453448u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 17));
label_45344c:
    // 0x45344c: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x45344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453450:
    // 0x453450: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x453450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_453454:
    // 0x453454: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x453454u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_453458:
    // 0x453458: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x453458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_45345c:
    // 0x45345c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_453460:
    if (ctx->pc == 0x453460u) {
        ctx->pc = 0x453464u;
        goto label_453464;
    }
    ctx->pc = 0x45345Cu;
    {
        const bool branch_taken_0x45345c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45345c) {
            ctx->pc = 0x453530u;
            goto label_453530;
        }
    }
    ctx->pc = 0x453464u;
label_453464:
    // 0x453464: 0x8f84b01c  lw          $a0, -0x4FE4($gp)
    ctx->pc = 0x453464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946844)));
label_453468:
    // 0x453468: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
label_45346c:
    if (ctx->pc == 0x45346Cu) {
        ctx->pc = 0x453470u;
        goto label_453470;
    }
    ctx->pc = 0x453468u;
    {
        const bool branch_taken_0x453468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x453468) {
            ctx->pc = 0x453530u;
            goto label_453530;
        }
    }
    ctx->pc = 0x453470u;
label_453470:
    // 0x453470: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x453470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_453474:
    // 0x453474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453478:
    // 0x453478: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x453478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45347c:
    // 0x45347c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45347cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453480:
    // 0x453480: 0x27a60750  addiu       $a2, $sp, 0x750
    ctx->pc = 0x453480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1872));
label_453484:
    // 0x453484: 0xc115ee8  jal         func_457BA0
label_453488:
    if (ctx->pc == 0x453488u) {
        ctx->pc = 0x45348Cu;
        goto label_45348c;
    }
    ctx->pc = 0x453484u;
    SET_GPR_U32(ctx, 31, 0x45348Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x453484u, 0x45348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45348Cu;
label_45348c:
    // 0x45348c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453490:
    // 0x453490: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_453494:
    if (ctx->pc == 0x453494u) {
        ctx->pc = 0x453498u;
        goto label_453498;
    }
    ctx->pc = 0x453490u;
    {
        const bool branch_taken_0x453490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x453490) {
            ctx->pc = 0x453530u;
            goto label_453530;
        }
    }
    ctx->pc = 0x453498u;
label_453498:
    // 0x453498: 0x8fa50758  lw          $a1, 0x758($sp)
    ctx->pc = 0x453498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1880)));
label_45349c:
    // 0x45349c: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_4534a0:
    if (ctx->pc == 0x4534A0u) {
        ctx->pc = 0x4534A4u;
        goto label_4534a4;
    }
    ctx->pc = 0x45349Cu;
    {
        const bool branch_taken_0x45349c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x45349c) {
            ctx->pc = 0x453530u;
            goto label_453530;
        }
    }
    ctx->pc = 0x4534A4u;
label_4534a4:
    // 0x4534a4: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x4534a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4534a8:
    // 0x4534a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4534a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4534ac:
    // 0x4534ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4534acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4534b0:
    // 0x4534b0: 0x8fa60754  lw          $a2, 0x754($sp)
    ctx->pc = 0x4534b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1876)));
label_4534b4:
    // 0x4534b4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4534b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_4534b8:
    // 0x4534b8: 0x2442de80  addiu       $v0, $v0, -0x2180
    ctx->pc = 0x4534b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958720));
label_4534bc:
    // 0x4534bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4534bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4534c0:
    // 0x4534c0: 0x240800e5  addiu       $t0, $zero, 0xE5
    ctx->pc = 0x4534c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_4534c4:
    // 0x4534c4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4534c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_4534c8:
    // 0x4534c8: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x4534c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_4534cc:
    // 0x4534cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4534ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4534d0:
    // 0x4534d0: 0xc113940  jal         func_44E500
label_4534d4:
    if (ctx->pc == 0x4534D4u) {
        ctx->pc = 0x4534D8u;
        goto label_4534d8;
    }
    ctx->pc = 0x4534D0u;
    SET_GPR_U32(ctx, 31, 0x4534D8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4534D0u, 0x4534D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4534D8u;
label_4534d8:
    // 0x4534d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4534d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4534dc:
    // 0x4534dc: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x4534dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4534e0:
    // 0x4534e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4534e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4534e4:
    // 0x4534e4: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x4534e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_4534e8:
    // 0x4534e8: 0xc115c24  jal         func_457090
label_4534ec:
    if (ctx->pc == 0x4534ECu) {
        ctx->pc = 0x4534F0u;
        goto label_4534f0;
    }
    ctx->pc = 0x4534E8u;
    SET_GPR_U32(ctx, 31, 0x4534F0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4534E8u, 0x4534F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4534F0u;
label_4534f0:
    // 0x4534f0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x4534f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4534f4:
    // 0x4534f4: 0x8fa50758  lw          $a1, 0x758($sp)
    ctx->pc = 0x4534f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1880)));
label_4534f8:
    // 0x4534f8: 0xa0f809  jalr        $a1
label_4534fc:
    if (ctx->pc == 0x4534FCu) {
        ctx->pc = 0x453500u;
        goto label_453500;
    }
    ctx->pc = 0x4534F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x453500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4534F8u, 0x453500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x453500u;
label_453500:
    // 0x453500: 0xaf82b01c  sw          $v0, -0x4FE4($gp)
    ctx->pc = 0x453500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946844), GPR_U32(ctx, 2));
label_453504:
    // 0x453504: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x453504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_453508:
    // 0x453508: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_45350c:
    if (ctx->pc == 0x45350Cu) {
        ctx->pc = 0x453510u;
        goto label_453510;
    }
    ctx->pc = 0x453508u;
    {
        const bool branch_taken_0x453508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x453508) {
            ctx->pc = 0x453518u;
            goto label_453518;
        }
    }
    ctx->pc = 0x453510u;
label_453510:
    // 0x453510: 0xd  break       0
    ctx->pc = 0x453510u;
    runtime->handleBreak(rdram, ctx);
label_453514:
    // 0x453514: 0x0  nop
    ctx->pc = 0x453514u;
    // NOP
label_453518:
    // 0x453518: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x453518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_45351c:
    // 0x45351c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x45351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_453520:
    // 0x453520: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x453520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453524:
    // 0x453524: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x453524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_453528:
    // 0x453528: 0xc11392c  jal         func_44E4B0
label_45352c:
    if (ctx->pc == 0x45352Cu) {
        ctx->pc = 0x453530u;
        goto label_453530;
    }
    ctx->pc = 0x453528u;
    SET_GPR_U32(ctx, 31, 0x453530u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x453528u, 0x453530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453530u;
label_453530:
    // 0x453530: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x453530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_453534:
    // 0x453534: 0xc041b38  jal         func_106CE0
label_453538:
    if (ctx->pc == 0x453538u) {
        ctx->pc = 0x45353Cu;
        goto label_45353c;
    }
    ctx->pc = 0x453534u;
    SET_GPR_U32(ctx, 31, 0x45353Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x453534u, 0x45353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45353Cu;
label_45353c:
    // 0x45353c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453540:
    // 0x453540: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x453540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453544:
    // 0x453544: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x453544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_453548:
    // 0x453548: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x453548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_45354c:
    // 0x45354c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x45354cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_453550:
    // 0x453550: 0x8fa407cc  lw          $a0, 0x7CC($sp)
    ctx->pc = 0x453550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453554:
    // 0x453554: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x453554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_453558:
    // 0x453558: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x453558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_45355c:
    // 0x45355c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x45355cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_453560:
    // 0x453560: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x453560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453564:
    // 0x453564: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x453564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_453568:
    // 0x453568: 0x24820038  addiu       $v0, $a0, 0x38
    ctx->pc = 0x453568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_45356c:
    // 0x45356c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x45356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_453570:
    // 0x453570: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x453570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453574:
    // 0x453574: 0x8fa407cc  lw          $a0, 0x7CC($sp)
    ctx->pc = 0x453574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453578:
    // 0x453578: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x453578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_45357c:
    // 0x45357c: 0x8fa307cc  lw          $v1, 0x7CC($sp)
    ctx->pc = 0x45357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453580:
    // 0x453580: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x453580u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_453584:
    // 0x453584: 0x8fa307cc  lw          $v1, 0x7CC($sp)
    ctx->pc = 0x453584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453588:
    // 0x453588: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x453588u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_45358c:
    // 0x45358c: 0x8fa407cc  lw          $a0, 0x7CC($sp)
    ctx->pc = 0x45358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453590:
    // 0x453590: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x453590u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_453594:
    // 0x453594: 0x8fa307cc  lw          $v1, 0x7CC($sp)
    ctx->pc = 0x453594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_453598:
    // 0x453598: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x453598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_45359c:
    // 0x45359c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x45359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4535a0:
    // 0x4535a0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4535a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4535a4:
    // 0x4535a4: 0x24a5dfe0  addiu       $a1, $a1, -0x2020
    ctx->pc = 0x4535a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
label_4535a8:
    // 0x4535a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4535a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4535ac:
    // 0x4535ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4535acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4535b0:
    // 0x4535b0: 0x24e7003c  addiu       $a3, $a3, 0x3C
    ctx->pc = 0x4535b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
label_4535b4:
    // 0x4535b4: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x4535b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_4535b8:
    // 0x4535b8: 0x25220024  addiu       $v0, $t1, 0x24
    ctx->pc = 0x4535b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
label_4535bc:
    // 0x4535bc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4535bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4535c0:
    // 0x4535c0: 0x254a0028  addiu       $t2, $t2, 0x28
    ctx->pc = 0x4535c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
label_4535c4:
    // 0x4535c4: 0x246b002c  addiu       $t3, $v1, 0x2C
    ctx->pc = 0x4535c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
label_4535c8:
    // 0x4535c8: 0xc0bc408  jal         func_2F1020
label_4535cc:
    if (ctx->pc == 0x4535CCu) {
        ctx->pc = 0x4535D0u;
        goto label_4535d0;
    }
    ctx->pc = 0x4535C8u;
    SET_GPR_U32(ctx, 31, 0x4535D0u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x4535C8u, 0x4535D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4535D0u;
label_4535d0:
    // 0x4535d0: 0x8fa207cc  lw          $v0, 0x7CC($sp)
    ctx->pc = 0x4535d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_4535d4:
    // 0x4535d4: 0x8fa507cc  lw          $a1, 0x7CC($sp)
    ctx->pc = 0x4535d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1996)));
label_4535d8:
    // 0x4535d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4535d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4535dc:
    // 0x4535dc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4535dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4535e0:
    // 0x4535e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4535e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4535e4:
    // 0x4535e4: 0xc041ba4  jal         func_106E90
label_4535e8:
    if (ctx->pc == 0x4535E8u) {
        ctx->pc = 0x4535ECu;
        goto label_4535ec;
    }
    ctx->pc = 0x4535E4u;
    SET_GPR_U32(ctx, 31, 0x4535ECu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x4535E4u, 0x4535ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4535ECu;
label_4535ec:
    // 0x4535ec: 0x8fa407d0  lw          $a0, 0x7D0($sp)
    ctx->pc = 0x4535ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2000)));
label_4535f0:
    // 0x4535f0: 0x27b507cc  addiu       $s5, $sp, 0x7CC
    ctx->pc = 0x4535f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1996));
label_4535f4:
    // 0x4535f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4535f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4535f8:
    // 0x4535f8: 0xc114e18  jal         func_453860
label_4535fc:
    if (ctx->pc == 0x4535FCu) {
        ctx->pc = 0x453600u;
        goto label_453600;
    }
    ctx->pc = 0x4535F8u;
    SET_GPR_U32(ctx, 31, 0x453600u);
    ctx->pc = 0x453860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453860u, 0x4535F8u, 0x453600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453600u;
label_453600:
    // 0x453600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453604:
    // 0x453604: 0x1000002f  b           . + 4 + (0x2F << 2)
label_453608:
    if (ctx->pc == 0x453608u) {
        ctx->pc = 0x45360Cu;
        goto label_45360c;
    }
    ctx->pc = 0x453604u;
    {
        const bool branch_taken_0x453604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453604) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x45360Cu;
label_45360c:
    // 0x45360c: 0x8f85bf38  lw          $a1, -0x40C8($gp)
    ctx->pc = 0x45360cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_453610:
    // 0x453610: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x453610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_453614:
    // 0x453614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453618:
    // 0x453618: 0x27a20740  addiu       $v0, $sp, 0x740
    ctx->pc = 0x453618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
label_45361c:
    // 0x45361c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45361cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453620:
    // 0x453620: 0xc115ee8  jal         func_457BA0
label_453624:
    if (ctx->pc == 0x453624u) {
        ctx->pc = 0x453628u;
        goto label_453628;
    }
    ctx->pc = 0x453620u;
    SET_GPR_U32(ctx, 31, 0x453628u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x453620u, 0x453628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453628u;
label_453628:
    // 0x453628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45362c:
    // 0x45362c: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_453630:
    if (ctx->pc == 0x453630u) {
        ctx->pc = 0x453634u;
        goto label_453634;
    }
    ctx->pc = 0x45362Cu;
    {
        const bool branch_taken_0x45362c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x45362c) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x453634u;
label_453634:
    // 0x453634: 0x8fa20748  lw          $v0, 0x748($sp)
    ctx->pc = 0x453634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1864)));
label_453638:
    // 0x453638: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_45363c:
    if (ctx->pc == 0x45363Cu) {
        ctx->pc = 0x453640u;
        goto label_453640;
    }
    ctx->pc = 0x453638u;
    {
        const bool branch_taken_0x453638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453638) {
            ctx->pc = 0x4536C4u;
            goto label_4536c4;
        }
    }
    ctx->pc = 0x453640u;
label_453640:
    // 0x453640: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x453640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_453644:
    // 0x453644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453648:
    // 0x453648: 0x8fa60744  lw          $a2, 0x744($sp)
    ctx->pc = 0x453648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1860)));
label_45364c:
    // 0x45364c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x45364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_453650:
    // 0x453650: 0x2442de80  addiu       $v0, $v0, -0x2180
    ctx->pc = 0x453650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958720));
label_453654:
    // 0x453654: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x453654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453658:
    // 0x453658: 0x240800fd  addiu       $t0, $zero, 0xFD
    ctx->pc = 0x453658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
label_45365c:
    // 0x45365c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x45365cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453660:
    // 0x453660: 0xc113940  jal         func_44E500
label_453664:
    if (ctx->pc == 0x453664u) {
        ctx->pc = 0x453668u;
        goto label_453668;
    }
    ctx->pc = 0x453660u;
    SET_GPR_U32(ctx, 31, 0x453668u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x453660u, 0x453668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453668u;
label_453668:
    // 0x453668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x453668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45366c:
    // 0x45366c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x45366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_453670:
    // 0x453670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453674:
    // 0x453674: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x453674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_453678:
    // 0x453678: 0x24a5e020  addiu       $a1, $a1, -0x1FE0
    ctx->pc = 0x453678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959136));
label_45367c:
    // 0x45367c: 0xc115c24  jal         func_457090
label_453680:
    if (ctx->pc == 0x453680u) {
        ctx->pc = 0x453684u;
        goto label_453684;
    }
    ctx->pc = 0x45367Cu;
    SET_GPR_U32(ctx, 31, 0x453684u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45367Cu, 0x453684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453684u;
label_453684:
    // 0x453684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x453684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453688:
    // 0x453688: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x453688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_45368c:
    // 0x45368c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45368cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453690:
    // 0x453690: 0x8fa20748  lw          $v0, 0x748($sp)
    ctx->pc = 0x453690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1864)));
label_453694:
    // 0x453694: 0x40f809  jalr        $v0
label_453698:
    if (ctx->pc == 0x453698u) {
        ctx->pc = 0x45369Cu;
        goto label_45369c;
    }
    ctx->pc = 0x453694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45369Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453694u, 0x45369Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45369Cu;
label_45369c:
    // 0x45369c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45369cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4536a0:
    // 0x4536a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x4536a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4536a4:
    // 0x4536a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4536a8:
    if (ctx->pc == 0x4536A8u) {
        ctx->pc = 0x4536ACu;
        goto label_4536ac;
    }
    ctx->pc = 0x4536A4u;
    {
        const bool branch_taken_0x4536a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4536a4) {
            ctx->pc = 0x4536B4u;
            goto label_4536b4;
        }
    }
    ctx->pc = 0x4536ACu;
label_4536ac:
    // 0x4536ac: 0xd  break       0
    ctx->pc = 0x4536acu;
    runtime->handleBreak(rdram, ctx);
label_4536b0:
    // 0x4536b0: 0x0  nop
    ctx->pc = 0x4536b0u;
    // NOP
label_4536b4:
    // 0x4536b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4536b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4536b8:
    // 0x4536b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4536b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4536bc:
    // 0x4536bc: 0xc11392c  jal         func_44E4B0
label_4536c0:
    if (ctx->pc == 0x4536C0u) {
        ctx->pc = 0x4536C4u;
        goto label_4536c4;
    }
    ctx->pc = 0x4536BCu;
    SET_GPR_U32(ctx, 31, 0x4536C4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4536BCu, 0x4536C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4536C4u;
label_4536c4:
    // 0x4536c4: 0x27a40540  addiu       $a0, $sp, 0x540
    ctx->pc = 0x4536c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_4536c8:
    // 0x4536c8: 0x27a507a0  addiu       $a1, $sp, 0x7A0
    ctx->pc = 0x4536c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_4536cc:
    // 0x4536cc: 0xc119ecc  jal         func_467B30
label_4536d0:
    if (ctx->pc == 0x4536D0u) {
        ctx->pc = 0x4536D4u;
        goto label_4536d4;
    }
    ctx->pc = 0x4536CCu;
    SET_GPR_U32(ctx, 31, 0x4536D4u);
    ctx->pc = 0x467B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467B30u, 0x4536CCu, 0x4536D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4536D4u;
label_4536d4:
    // 0x4536d4: 0x1440fe4d  bnez        $v0, . + 4 + (-0x1B3 << 2)
label_4536d8:
    if (ctx->pc == 0x4536D8u) {
        ctx->pc = 0x4536DCu;
        goto label_4536dc;
    }
    ctx->pc = 0x4536D4u;
    {
        const bool branch_taken_0x4536d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4536d4) {
            ctx->pc = 0x45300Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45300c;
        }
    }
    ctx->pc = 0x4536DCu;
label_4536dc:
    // 0x4536dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4536dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4536e0:
    // 0x4536e0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4536e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4536e4:
    // 0x4536e4: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x4536e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_4536e8:
    // 0x4536e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4536e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4536ec:
    // 0x4536ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4536ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4536f0:
    // 0x4536f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4536f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4536f4:
    // 0x4536f4: 0xc119d90  jal         func_467640
label_4536f8:
    if (ctx->pc == 0x4536F8u) {
        ctx->pc = 0x4536FCu;
        goto label_4536fc;
    }
    ctx->pc = 0x4536F4u;
    SET_GPR_U32(ctx, 31, 0x4536FCu);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x4536F4u, 0x4536FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4536FCu;
label_4536fc:
    // 0x4536fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4536fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453700:
    // 0x453700: 0x27a20780  addiu       $v0, $sp, 0x780
    ctx->pc = 0x453700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_453704:
    // 0x453704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453708:
    // 0x453708: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45370c:
    // 0x45370c: 0xc0402d4  jal         func_100B50
label_453710:
    if (ctx->pc == 0x453710u) {
        ctx->pc = 0x453714u;
        goto label_453714;
    }
    ctx->pc = 0x45370Cu;
    SET_GPR_U32(ctx, 31, 0x453714u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x45370Cu, 0x453714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453714u;
label_453714:
    // 0x453714: 0x27a40790  addiu       $a0, $sp, 0x790
    ctx->pc = 0x453714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_453718:
    // 0x453718: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45371c:
    // 0x45371c: 0xc0402d4  jal         func_100B50
label_453720:
    if (ctx->pc == 0x453720u) {
        ctx->pc = 0x453724u;
        goto label_453724;
    }
    ctx->pc = 0x45371Cu;
    SET_GPR_U32(ctx, 31, 0x453724u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x45371Cu, 0x453724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453724u;
label_453724:
    // 0x453724: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x453724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_453728:
    // 0x453728: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45372c:
    // 0x45372c: 0xc0402d4  jal         func_100B50
label_453730:
    if (ctx->pc == 0x453730u) {
        ctx->pc = 0x453734u;
        goto label_453734;
    }
    ctx->pc = 0x45372Cu;
    SET_GPR_U32(ctx, 31, 0x453734u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x45372Cu, 0x453734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453734u;
label_453734:
    // 0x453734: 0x27b007b0  addiu       $s0, $sp, 0x7B0
    ctx->pc = 0x453734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_453738:
    // 0x453738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x453738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45373c:
    // 0x45373c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45373cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453740:
    // 0x453740: 0xc0402d4  jal         func_100B50
label_453744:
    if (ctx->pc == 0x453744u) {
        ctx->pc = 0x453748u;
        goto label_453748;
    }
    ctx->pc = 0x453740u;
    SET_GPR_U32(ctx, 31, 0x453748u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453740u, 0x453748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453748u;
label_453748:
    // 0x453748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x453748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45374c:
    // 0x45374c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x45374cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_453750:
    // 0x453750: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x453750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_453754:
    // 0x453754: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x453754u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_453758:
    // 0x453758: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x453758u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45375c:
    // 0x45375c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x45375cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_453760:
    // 0x453760: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x453760u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_453764:
    // 0x453764: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x453764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_453768:
    // 0x453768: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x453768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45376c:
    // 0x45376c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x45376cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_453770:
    // 0x453770: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x453770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_453774:
    // 0x453774: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x453774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_453778:
    // 0x453778: 0x27bd07f0  addiu       $sp, $sp, 0x7F0
    ctx->pc = 0x453778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2032));
label_45377c:
    // 0x45377c: 0x3e00008  jr          $ra
label_453780:
    if (ctx->pc == 0x453780u) {
        ctx->pc = 0x453784u;
        goto label_453784;
    }
    ctx->pc = 0x45377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45377Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453784u;
label_453784:
    // 0x453784: 0x0  nop
    ctx->pc = 0x453784u;
    // NOP
label_453788:
    // 0x453788: 0x0  nop
    ctx->pc = 0x453788u;
    // NOP
label_45378c:
    // 0x45378c: 0x0  nop
    ctx->pc = 0x45378cu;
    // NOP
    ctx->pc = 0x453790u;
}
