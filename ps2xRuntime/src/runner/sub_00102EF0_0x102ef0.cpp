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

// Function: sub_00102EF0
// Address: 0x102ef0 - 0x103800
void sub_00102EF0_0x102ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102EF0_0x102ef0");
#endif

    switch (ctx->pc) {
        case 0x102ef0u: goto label_102ef0;
        case 0x102ef4u: goto label_102ef4;
        case 0x102ef8u: goto label_102ef8;
        case 0x102efcu: goto label_102efc;
        case 0x102f00u: goto label_102f00;
        case 0x102f04u: goto label_102f04;
        case 0x102f08u: goto label_102f08;
        case 0x102f0cu: goto label_102f0c;
        case 0x102f10u: goto label_102f10;
        case 0x102f14u: goto label_102f14;
        case 0x102f18u: goto label_102f18;
        case 0x102f1cu: goto label_102f1c;
        case 0x102f20u: goto label_102f20;
        case 0x102f24u: goto label_102f24;
        case 0x102f28u: goto label_102f28;
        case 0x102f2cu: goto label_102f2c;
        case 0x102f30u: goto label_102f30;
        case 0x102f34u: goto label_102f34;
        case 0x102f38u: goto label_102f38;
        case 0x102f3cu: goto label_102f3c;
        case 0x102f40u: goto label_102f40;
        case 0x102f44u: goto label_102f44;
        case 0x102f48u: goto label_102f48;
        case 0x102f4cu: goto label_102f4c;
        case 0x102f50u: goto label_102f50;
        case 0x102f54u: goto label_102f54;
        case 0x102f58u: goto label_102f58;
        case 0x102f5cu: goto label_102f5c;
        case 0x102f60u: goto label_102f60;
        case 0x102f64u: goto label_102f64;
        case 0x102f68u: goto label_102f68;
        case 0x102f6cu: goto label_102f6c;
        case 0x102f70u: goto label_102f70;
        case 0x102f74u: goto label_102f74;
        case 0x102f78u: goto label_102f78;
        case 0x102f7cu: goto label_102f7c;
        case 0x102f80u: goto label_102f80;
        case 0x102f84u: goto label_102f84;
        case 0x102f88u: goto label_102f88;
        case 0x102f8cu: goto label_102f8c;
        case 0x102f90u: goto label_102f90;
        case 0x102f94u: goto label_102f94;
        case 0x102f98u: goto label_102f98;
        case 0x102f9cu: goto label_102f9c;
        case 0x102fa0u: goto label_102fa0;
        case 0x102fa4u: goto label_102fa4;
        case 0x102fa8u: goto label_102fa8;
        case 0x102facu: goto label_102fac;
        case 0x102fb0u: goto label_102fb0;
        case 0x102fb4u: goto label_102fb4;
        case 0x102fb8u: goto label_102fb8;
        case 0x102fbcu: goto label_102fbc;
        case 0x102fc0u: goto label_102fc0;
        case 0x102fc4u: goto label_102fc4;
        case 0x102fc8u: goto label_102fc8;
        case 0x102fccu: goto label_102fcc;
        case 0x102fd0u: goto label_102fd0;
        case 0x102fd4u: goto label_102fd4;
        case 0x102fd8u: goto label_102fd8;
        case 0x102fdcu: goto label_102fdc;
        case 0x102fe0u: goto label_102fe0;
        case 0x102fe4u: goto label_102fe4;
        case 0x102fe8u: goto label_102fe8;
        case 0x102fecu: goto label_102fec;
        case 0x102ff0u: goto label_102ff0;
        case 0x102ff4u: goto label_102ff4;
        case 0x102ff8u: goto label_102ff8;
        case 0x102ffcu: goto label_102ffc;
        case 0x103000u: goto label_103000;
        case 0x103004u: goto label_103004;
        case 0x103008u: goto label_103008;
        case 0x10300cu: goto label_10300c;
        case 0x103010u: goto label_103010;
        case 0x103014u: goto label_103014;
        case 0x103018u: goto label_103018;
        case 0x10301cu: goto label_10301c;
        case 0x103020u: goto label_103020;
        case 0x103024u: goto label_103024;
        case 0x103028u: goto label_103028;
        case 0x10302cu: goto label_10302c;
        case 0x103030u: goto label_103030;
        case 0x103034u: goto label_103034;
        case 0x103038u: goto label_103038;
        case 0x10303cu: goto label_10303c;
        case 0x103040u: goto label_103040;
        case 0x103044u: goto label_103044;
        case 0x103048u: goto label_103048;
        case 0x10304cu: goto label_10304c;
        case 0x103050u: goto label_103050;
        case 0x103054u: goto label_103054;
        case 0x103058u: goto label_103058;
        case 0x10305cu: goto label_10305c;
        case 0x103060u: goto label_103060;
        case 0x103064u: goto label_103064;
        case 0x103068u: goto label_103068;
        case 0x10306cu: goto label_10306c;
        case 0x103070u: goto label_103070;
        case 0x103074u: goto label_103074;
        case 0x103078u: goto label_103078;
        case 0x10307cu: goto label_10307c;
        case 0x103080u: goto label_103080;
        case 0x103084u: goto label_103084;
        case 0x103088u: goto label_103088;
        case 0x10308cu: goto label_10308c;
        case 0x103090u: goto label_103090;
        case 0x103094u: goto label_103094;
        case 0x103098u: goto label_103098;
        case 0x10309cu: goto label_10309c;
        case 0x1030a0u: goto label_1030a0;
        case 0x1030a4u: goto label_1030a4;
        case 0x1030a8u: goto label_1030a8;
        case 0x1030acu: goto label_1030ac;
        case 0x1030b0u: goto label_1030b0;
        case 0x1030b4u: goto label_1030b4;
        case 0x1030b8u: goto label_1030b8;
        case 0x1030bcu: goto label_1030bc;
        case 0x1030c0u: goto label_1030c0;
        case 0x1030c4u: goto label_1030c4;
        case 0x1030c8u: goto label_1030c8;
        case 0x1030ccu: goto label_1030cc;
        case 0x1030d0u: goto label_1030d0;
        case 0x1030d4u: goto label_1030d4;
        case 0x1030d8u: goto label_1030d8;
        case 0x1030dcu: goto label_1030dc;
        case 0x1030e0u: goto label_1030e0;
        case 0x1030e4u: goto label_1030e4;
        case 0x1030e8u: goto label_1030e8;
        case 0x1030ecu: goto label_1030ec;
        case 0x1030f0u: goto label_1030f0;
        case 0x1030f4u: goto label_1030f4;
        case 0x1030f8u: goto label_1030f8;
        case 0x1030fcu: goto label_1030fc;
        case 0x103100u: goto label_103100;
        case 0x103104u: goto label_103104;
        case 0x103108u: goto label_103108;
        case 0x10310cu: goto label_10310c;
        case 0x103110u: goto label_103110;
        case 0x103114u: goto label_103114;
        case 0x103118u: goto label_103118;
        case 0x10311cu: goto label_10311c;
        case 0x103120u: goto label_103120;
        case 0x103124u: goto label_103124;
        case 0x103128u: goto label_103128;
        case 0x10312cu: goto label_10312c;
        case 0x103130u: goto label_103130;
        case 0x103134u: goto label_103134;
        case 0x103138u: goto label_103138;
        case 0x10313cu: goto label_10313c;
        case 0x103140u: goto label_103140;
        case 0x103144u: goto label_103144;
        case 0x103148u: goto label_103148;
        case 0x10314cu: goto label_10314c;
        case 0x103150u: goto label_103150;
        case 0x103154u: goto label_103154;
        case 0x103158u: goto label_103158;
        case 0x10315cu: goto label_10315c;
        case 0x103160u: goto label_103160;
        case 0x103164u: goto label_103164;
        case 0x103168u: goto label_103168;
        case 0x10316cu: goto label_10316c;
        case 0x103170u: goto label_103170;
        case 0x103174u: goto label_103174;
        case 0x103178u: goto label_103178;
        case 0x10317cu: goto label_10317c;
        case 0x103180u: goto label_103180;
        case 0x103184u: goto label_103184;
        case 0x103188u: goto label_103188;
        case 0x10318cu: goto label_10318c;
        case 0x103190u: goto label_103190;
        case 0x103194u: goto label_103194;
        case 0x103198u: goto label_103198;
        case 0x10319cu: goto label_10319c;
        case 0x1031a0u: goto label_1031a0;
        case 0x1031a4u: goto label_1031a4;
        case 0x1031a8u: goto label_1031a8;
        case 0x1031acu: goto label_1031ac;
        case 0x1031b0u: goto label_1031b0;
        case 0x1031b4u: goto label_1031b4;
        case 0x1031b8u: goto label_1031b8;
        case 0x1031bcu: goto label_1031bc;
        case 0x1031c0u: goto label_1031c0;
        case 0x1031c4u: goto label_1031c4;
        case 0x1031c8u: goto label_1031c8;
        case 0x1031ccu: goto label_1031cc;
        case 0x1031d0u: goto label_1031d0;
        case 0x1031d4u: goto label_1031d4;
        case 0x1031d8u: goto label_1031d8;
        case 0x1031dcu: goto label_1031dc;
        case 0x1031e0u: goto label_1031e0;
        case 0x1031e4u: goto label_1031e4;
        case 0x1031e8u: goto label_1031e8;
        case 0x1031ecu: goto label_1031ec;
        case 0x1031f0u: goto label_1031f0;
        case 0x1031f4u: goto label_1031f4;
        case 0x1031f8u: goto label_1031f8;
        case 0x1031fcu: goto label_1031fc;
        case 0x103200u: goto label_103200;
        case 0x103204u: goto label_103204;
        case 0x103208u: goto label_103208;
        case 0x10320cu: goto label_10320c;
        case 0x103210u: goto label_103210;
        case 0x103214u: goto label_103214;
        case 0x103218u: goto label_103218;
        case 0x10321cu: goto label_10321c;
        case 0x103220u: goto label_103220;
        case 0x103224u: goto label_103224;
        case 0x103228u: goto label_103228;
        case 0x10322cu: goto label_10322c;
        case 0x103230u: goto label_103230;
        case 0x103234u: goto label_103234;
        case 0x103238u: goto label_103238;
        case 0x10323cu: goto label_10323c;
        case 0x103240u: goto label_103240;
        case 0x103244u: goto label_103244;
        case 0x103248u: goto label_103248;
        case 0x10324cu: goto label_10324c;
        case 0x103250u: goto label_103250;
        case 0x103254u: goto label_103254;
        case 0x103258u: goto label_103258;
        case 0x10325cu: goto label_10325c;
        case 0x103260u: goto label_103260;
        case 0x103264u: goto label_103264;
        case 0x103268u: goto label_103268;
        case 0x10326cu: goto label_10326c;
        case 0x103270u: goto label_103270;
        case 0x103274u: goto label_103274;
        case 0x103278u: goto label_103278;
        case 0x10327cu: goto label_10327c;
        case 0x103280u: goto label_103280;
        case 0x103284u: goto label_103284;
        case 0x103288u: goto label_103288;
        case 0x10328cu: goto label_10328c;
        case 0x103290u: goto label_103290;
        case 0x103294u: goto label_103294;
        case 0x103298u: goto label_103298;
        case 0x10329cu: goto label_10329c;
        case 0x1032a0u: goto label_1032a0;
        case 0x1032a4u: goto label_1032a4;
        case 0x1032a8u: goto label_1032a8;
        case 0x1032acu: goto label_1032ac;
        case 0x1032b0u: goto label_1032b0;
        case 0x1032b4u: goto label_1032b4;
        case 0x1032b8u: goto label_1032b8;
        case 0x1032bcu: goto label_1032bc;
        case 0x1032c0u: goto label_1032c0;
        case 0x1032c4u: goto label_1032c4;
        case 0x1032c8u: goto label_1032c8;
        case 0x1032ccu: goto label_1032cc;
        case 0x1032d0u: goto label_1032d0;
        case 0x1032d4u: goto label_1032d4;
        case 0x1032d8u: goto label_1032d8;
        case 0x1032dcu: goto label_1032dc;
        case 0x1032e0u: goto label_1032e0;
        case 0x1032e4u: goto label_1032e4;
        case 0x1032e8u: goto label_1032e8;
        case 0x1032ecu: goto label_1032ec;
        case 0x1032f0u: goto label_1032f0;
        case 0x1032f4u: goto label_1032f4;
        case 0x1032f8u: goto label_1032f8;
        case 0x1032fcu: goto label_1032fc;
        case 0x103300u: goto label_103300;
        case 0x103304u: goto label_103304;
        case 0x103308u: goto label_103308;
        case 0x10330cu: goto label_10330c;
        case 0x103310u: goto label_103310;
        case 0x103314u: goto label_103314;
        case 0x103318u: goto label_103318;
        case 0x10331cu: goto label_10331c;
        case 0x103320u: goto label_103320;
        case 0x103324u: goto label_103324;
        case 0x103328u: goto label_103328;
        case 0x10332cu: goto label_10332c;
        case 0x103330u: goto label_103330;
        case 0x103334u: goto label_103334;
        case 0x103338u: goto label_103338;
        case 0x10333cu: goto label_10333c;
        case 0x103340u: goto label_103340;
        case 0x103344u: goto label_103344;
        case 0x103348u: goto label_103348;
        case 0x10334cu: goto label_10334c;
        case 0x103350u: goto label_103350;
        case 0x103354u: goto label_103354;
        case 0x103358u: goto label_103358;
        case 0x10335cu: goto label_10335c;
        case 0x103360u: goto label_103360;
        case 0x103364u: goto label_103364;
        case 0x103368u: goto label_103368;
        case 0x10336cu: goto label_10336c;
        case 0x103370u: goto label_103370;
        case 0x103374u: goto label_103374;
        case 0x103378u: goto label_103378;
        case 0x10337cu: goto label_10337c;
        case 0x103380u: goto label_103380;
        case 0x103384u: goto label_103384;
        case 0x103388u: goto label_103388;
        case 0x10338cu: goto label_10338c;
        case 0x103390u: goto label_103390;
        case 0x103394u: goto label_103394;
        case 0x103398u: goto label_103398;
        case 0x10339cu: goto label_10339c;
        case 0x1033a0u: goto label_1033a0;
        case 0x1033a4u: goto label_1033a4;
        case 0x1033a8u: goto label_1033a8;
        case 0x1033acu: goto label_1033ac;
        case 0x1033b0u: goto label_1033b0;
        case 0x1033b4u: goto label_1033b4;
        case 0x1033b8u: goto label_1033b8;
        case 0x1033bcu: goto label_1033bc;
        case 0x1033c0u: goto label_1033c0;
        case 0x1033c4u: goto label_1033c4;
        case 0x1033c8u: goto label_1033c8;
        case 0x1033ccu: goto label_1033cc;
        case 0x1033d0u: goto label_1033d0;
        case 0x1033d4u: goto label_1033d4;
        case 0x1033d8u: goto label_1033d8;
        case 0x1033dcu: goto label_1033dc;
        case 0x1033e0u: goto label_1033e0;
        case 0x1033e4u: goto label_1033e4;
        case 0x1033e8u: goto label_1033e8;
        case 0x1033ecu: goto label_1033ec;
        case 0x1033f0u: goto label_1033f0;
        case 0x1033f4u: goto label_1033f4;
        case 0x1033f8u: goto label_1033f8;
        case 0x1033fcu: goto label_1033fc;
        case 0x103400u: goto label_103400;
        case 0x103404u: goto label_103404;
        case 0x103408u: goto label_103408;
        case 0x10340cu: goto label_10340c;
        case 0x103410u: goto label_103410;
        case 0x103414u: goto label_103414;
        case 0x103418u: goto label_103418;
        case 0x10341cu: goto label_10341c;
        case 0x103420u: goto label_103420;
        case 0x103424u: goto label_103424;
        case 0x103428u: goto label_103428;
        case 0x10342cu: goto label_10342c;
        case 0x103430u: goto label_103430;
        case 0x103434u: goto label_103434;
        case 0x103438u: goto label_103438;
        case 0x10343cu: goto label_10343c;
        case 0x103440u: goto label_103440;
        case 0x103444u: goto label_103444;
        case 0x103448u: goto label_103448;
        case 0x10344cu: goto label_10344c;
        case 0x103450u: goto label_103450;
        case 0x103454u: goto label_103454;
        case 0x103458u: goto label_103458;
        case 0x10345cu: goto label_10345c;
        case 0x103460u: goto label_103460;
        case 0x103464u: goto label_103464;
        case 0x103468u: goto label_103468;
        case 0x10346cu: goto label_10346c;
        case 0x103470u: goto label_103470;
        case 0x103474u: goto label_103474;
        case 0x103478u: goto label_103478;
        case 0x10347cu: goto label_10347c;
        case 0x103480u: goto label_103480;
        case 0x103484u: goto label_103484;
        case 0x103488u: goto label_103488;
        case 0x10348cu: goto label_10348c;
        case 0x103490u: goto label_103490;
        case 0x103494u: goto label_103494;
        case 0x103498u: goto label_103498;
        case 0x10349cu: goto label_10349c;
        case 0x1034a0u: goto label_1034a0;
        case 0x1034a4u: goto label_1034a4;
        case 0x1034a8u: goto label_1034a8;
        case 0x1034acu: goto label_1034ac;
        case 0x1034b0u: goto label_1034b0;
        case 0x1034b4u: goto label_1034b4;
        case 0x1034b8u: goto label_1034b8;
        case 0x1034bcu: goto label_1034bc;
        case 0x1034c0u: goto label_1034c0;
        case 0x1034c4u: goto label_1034c4;
        case 0x1034c8u: goto label_1034c8;
        case 0x1034ccu: goto label_1034cc;
        case 0x1034d0u: goto label_1034d0;
        case 0x1034d4u: goto label_1034d4;
        case 0x1034d8u: goto label_1034d8;
        case 0x1034dcu: goto label_1034dc;
        case 0x1034e0u: goto label_1034e0;
        case 0x1034e4u: goto label_1034e4;
        case 0x1034e8u: goto label_1034e8;
        case 0x1034ecu: goto label_1034ec;
        case 0x1034f0u: goto label_1034f0;
        case 0x1034f4u: goto label_1034f4;
        case 0x1034f8u: goto label_1034f8;
        case 0x1034fcu: goto label_1034fc;
        case 0x103500u: goto label_103500;
        case 0x103504u: goto label_103504;
        case 0x103508u: goto label_103508;
        case 0x10350cu: goto label_10350c;
        case 0x103510u: goto label_103510;
        case 0x103514u: goto label_103514;
        case 0x103518u: goto label_103518;
        case 0x10351cu: goto label_10351c;
        case 0x103520u: goto label_103520;
        case 0x103524u: goto label_103524;
        case 0x103528u: goto label_103528;
        case 0x10352cu: goto label_10352c;
        case 0x103530u: goto label_103530;
        case 0x103534u: goto label_103534;
        case 0x103538u: goto label_103538;
        case 0x10353cu: goto label_10353c;
        case 0x103540u: goto label_103540;
        case 0x103544u: goto label_103544;
        case 0x103548u: goto label_103548;
        case 0x10354cu: goto label_10354c;
        case 0x103550u: goto label_103550;
        case 0x103554u: goto label_103554;
        case 0x103558u: goto label_103558;
        case 0x10355cu: goto label_10355c;
        case 0x103560u: goto label_103560;
        case 0x103564u: goto label_103564;
        case 0x103568u: goto label_103568;
        case 0x10356cu: goto label_10356c;
        case 0x103570u: goto label_103570;
        case 0x103574u: goto label_103574;
        case 0x103578u: goto label_103578;
        case 0x10357cu: goto label_10357c;
        case 0x103580u: goto label_103580;
        case 0x103584u: goto label_103584;
        case 0x103588u: goto label_103588;
        case 0x10358cu: goto label_10358c;
        case 0x103590u: goto label_103590;
        case 0x103594u: goto label_103594;
        case 0x103598u: goto label_103598;
        case 0x10359cu: goto label_10359c;
        case 0x1035a0u: goto label_1035a0;
        case 0x1035a4u: goto label_1035a4;
        case 0x1035a8u: goto label_1035a8;
        case 0x1035acu: goto label_1035ac;
        case 0x1035b0u: goto label_1035b0;
        case 0x1035b4u: goto label_1035b4;
        case 0x1035b8u: goto label_1035b8;
        case 0x1035bcu: goto label_1035bc;
        case 0x1035c0u: goto label_1035c0;
        case 0x1035c4u: goto label_1035c4;
        case 0x1035c8u: goto label_1035c8;
        case 0x1035ccu: goto label_1035cc;
        case 0x1035d0u: goto label_1035d0;
        case 0x1035d4u: goto label_1035d4;
        case 0x1035d8u: goto label_1035d8;
        case 0x1035dcu: goto label_1035dc;
        case 0x1035e0u: goto label_1035e0;
        case 0x1035e4u: goto label_1035e4;
        case 0x1035e8u: goto label_1035e8;
        case 0x1035ecu: goto label_1035ec;
        case 0x1035f0u: goto label_1035f0;
        case 0x1035f4u: goto label_1035f4;
        case 0x1035f8u: goto label_1035f8;
        case 0x1035fcu: goto label_1035fc;
        case 0x103600u: goto label_103600;
        case 0x103604u: goto label_103604;
        case 0x103608u: goto label_103608;
        case 0x10360cu: goto label_10360c;
        case 0x103610u: goto label_103610;
        case 0x103614u: goto label_103614;
        case 0x103618u: goto label_103618;
        case 0x10361cu: goto label_10361c;
        case 0x103620u: goto label_103620;
        case 0x103624u: goto label_103624;
        case 0x103628u: goto label_103628;
        case 0x10362cu: goto label_10362c;
        case 0x103630u: goto label_103630;
        case 0x103634u: goto label_103634;
        case 0x103638u: goto label_103638;
        case 0x10363cu: goto label_10363c;
        case 0x103640u: goto label_103640;
        case 0x103644u: goto label_103644;
        case 0x103648u: goto label_103648;
        case 0x10364cu: goto label_10364c;
        case 0x103650u: goto label_103650;
        case 0x103654u: goto label_103654;
        case 0x103658u: goto label_103658;
        case 0x10365cu: goto label_10365c;
        case 0x103660u: goto label_103660;
        case 0x103664u: goto label_103664;
        case 0x103668u: goto label_103668;
        case 0x10366cu: goto label_10366c;
        case 0x103670u: goto label_103670;
        case 0x103674u: goto label_103674;
        case 0x103678u: goto label_103678;
        case 0x10367cu: goto label_10367c;
        case 0x103680u: goto label_103680;
        case 0x103684u: goto label_103684;
        case 0x103688u: goto label_103688;
        case 0x10368cu: goto label_10368c;
        case 0x103690u: goto label_103690;
        case 0x103694u: goto label_103694;
        case 0x103698u: goto label_103698;
        case 0x10369cu: goto label_10369c;
        case 0x1036a0u: goto label_1036a0;
        case 0x1036a4u: goto label_1036a4;
        case 0x1036a8u: goto label_1036a8;
        case 0x1036acu: goto label_1036ac;
        case 0x1036b0u: goto label_1036b0;
        case 0x1036b4u: goto label_1036b4;
        case 0x1036b8u: goto label_1036b8;
        case 0x1036bcu: goto label_1036bc;
        case 0x1036c0u: goto label_1036c0;
        case 0x1036c4u: goto label_1036c4;
        case 0x1036c8u: goto label_1036c8;
        case 0x1036ccu: goto label_1036cc;
        case 0x1036d0u: goto label_1036d0;
        case 0x1036d4u: goto label_1036d4;
        case 0x1036d8u: goto label_1036d8;
        case 0x1036dcu: goto label_1036dc;
        case 0x1036e0u: goto label_1036e0;
        case 0x1036e4u: goto label_1036e4;
        case 0x1036e8u: goto label_1036e8;
        case 0x1036ecu: goto label_1036ec;
        case 0x1036f0u: goto label_1036f0;
        case 0x1036f4u: goto label_1036f4;
        case 0x1036f8u: goto label_1036f8;
        case 0x1036fcu: goto label_1036fc;
        case 0x103700u: goto label_103700;
        case 0x103704u: goto label_103704;
        case 0x103708u: goto label_103708;
        case 0x10370cu: goto label_10370c;
        case 0x103710u: goto label_103710;
        case 0x103714u: goto label_103714;
        case 0x103718u: goto label_103718;
        case 0x10371cu: goto label_10371c;
        case 0x103720u: goto label_103720;
        case 0x103724u: goto label_103724;
        case 0x103728u: goto label_103728;
        case 0x10372cu: goto label_10372c;
        case 0x103730u: goto label_103730;
        case 0x103734u: goto label_103734;
        case 0x103738u: goto label_103738;
        case 0x10373cu: goto label_10373c;
        case 0x103740u: goto label_103740;
        case 0x103744u: goto label_103744;
        case 0x103748u: goto label_103748;
        case 0x10374cu: goto label_10374c;
        case 0x103750u: goto label_103750;
        case 0x103754u: goto label_103754;
        case 0x103758u: goto label_103758;
        case 0x10375cu: goto label_10375c;
        case 0x103760u: goto label_103760;
        case 0x103764u: goto label_103764;
        case 0x103768u: goto label_103768;
        case 0x10376cu: goto label_10376c;
        case 0x103770u: goto label_103770;
        case 0x103774u: goto label_103774;
        case 0x103778u: goto label_103778;
        case 0x10377cu: goto label_10377c;
        case 0x103780u: goto label_103780;
        case 0x103784u: goto label_103784;
        case 0x103788u: goto label_103788;
        case 0x10378cu: goto label_10378c;
        case 0x103790u: goto label_103790;
        case 0x103794u: goto label_103794;
        case 0x103798u: goto label_103798;
        case 0x10379cu: goto label_10379c;
        case 0x1037a0u: goto label_1037a0;
        case 0x1037a4u: goto label_1037a4;
        case 0x1037a8u: goto label_1037a8;
        case 0x1037acu: goto label_1037ac;
        case 0x1037b0u: goto label_1037b0;
        case 0x1037b4u: goto label_1037b4;
        case 0x1037b8u: goto label_1037b8;
        case 0x1037bcu: goto label_1037bc;
        case 0x1037c0u: goto label_1037c0;
        case 0x1037c4u: goto label_1037c4;
        case 0x1037c8u: goto label_1037c8;
        case 0x1037ccu: goto label_1037cc;
        case 0x1037d0u: goto label_1037d0;
        case 0x1037d4u: goto label_1037d4;
        case 0x1037d8u: goto label_1037d8;
        case 0x1037dcu: goto label_1037dc;
        case 0x1037e0u: goto label_1037e0;
        case 0x1037e4u: goto label_1037e4;
        case 0x1037e8u: goto label_1037e8;
        case 0x1037ecu: goto label_1037ec;
        case 0x1037f0u: goto label_1037f0;
        case 0x1037f4u: goto label_1037f4;
        case 0x1037f8u: goto label_1037f8;
        case 0x1037fcu: goto label_1037fc;
        default: break;
    }

    ctx->pc = 0x102ef0u;

label_102ef0:
    // 0x102ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_102ef4:
    // 0x102ef4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x102ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_102ef8:
    // 0x102ef8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x102ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_102efc:
    // 0x102efc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x102efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_102f00:
    // 0x102f00: 0x3e00008  jr          $ra
label_102f04:
    if (ctx->pc == 0x102F04u) {
        ctx->pc = 0x102F08u;
        goto label_102f08;
    }
    ctx->pc = 0x102F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102F08u;
label_102f08:
    // 0x102f08: 0x0  nop
    ctx->pc = 0x102f08u;
    // NOP
label_102f0c:
    // 0x102f0c: 0x0  nop
    ctx->pc = 0x102f0cu;
    // NOP
label_102f10:
    // 0x102f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_102f14:
    // 0x102f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_102f18:
    // 0x102f18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_102f1c:
    // 0x102f1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x102f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_102f20:
    // 0x102f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102f24:
    // 0x102f24: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_102f28:
    if (ctx->pc == 0x102F28u) {
        ctx->pc = 0x102F2Cu;
        goto label_102f2c;
    }
    ctx->pc = 0x102F24u;
    {
        const bool branch_taken_0x102f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102f24) {
            ctx->pc = 0x102F84u;
            goto label_102f84;
        }
    }
    ctx->pc = 0x102F2Cu;
label_102f2c:
    // 0x102f2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x102f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_102f30:
    // 0x102f30: 0x24633280  addiu       $v1, $v1, 0x3280
    ctx->pc = 0x102f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12928));
label_102f34:
    // 0x102f34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102f38:
    // 0x102f38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x102f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_102f3c:
    // 0x102f3c: 0xaf80b99c  sw          $zero, -0x4664($gp)
    ctx->pc = 0x102f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949276), GPR_U32(ctx, 0));
label_102f40:
    // 0x102f40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102f44:
    // 0x102f44: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x102f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_102f48:
    // 0x102f48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x102f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102f4c:
    // 0x102f4c: 0xc040ae4  jal         func_102B90
label_102f50:
    if (ctx->pc == 0x102F50u) {
        ctx->pc = 0x102F54u;
        goto label_102f54;
    }
    ctx->pc = 0x102F4Cu;
    SET_GPR_U32(ctx, 31, 0x102F54u);
    ctx->pc = 0x102B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B90u, 0x102F4Cu, 0x102F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F54u;
label_102f54:
    // 0x102f54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102f58:
    // 0x102f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102f5c:
    // 0x102f5c: 0xc084ffc  jal         func_213FF0
label_102f60:
    if (ctx->pc == 0x102F60u) {
        ctx->pc = 0x102F64u;
        goto label_102f64;
    }
    ctx->pc = 0x102F5Cu;
    SET_GPR_U32(ctx, 31, 0x102F64u);
    ctx->pc = 0x213FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FF0u, 0x102F5Cu, 0x102F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F64u;
label_102f64:
    // 0x102f64: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x102f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_102f68:
    // 0x102f68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x102f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_102f6c:
    // 0x102f6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x102f6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_102f70:
    // 0x102f70: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_102f74:
    if (ctx->pc == 0x102F74u) {
        ctx->pc = 0x102F78u;
        goto label_102f78;
    }
    ctx->pc = 0x102F70u;
    {
        const bool branch_taken_0x102f70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102f70) {
            ctx->pc = 0x102F84u;
            goto label_102f84;
        }
    }
    ctx->pc = 0x102F78u;
label_102f78:
    // 0x102f78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102f7c:
    // 0x102f7c: 0xc0ba070  jal         func_2E81C0
label_102f80:
    if (ctx->pc == 0x102F80u) {
        ctx->pc = 0x102F84u;
        goto label_102f84;
    }
    ctx->pc = 0x102F7Cu;
    SET_GPR_U32(ctx, 31, 0x102F84u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x102F7Cu, 0x102F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F84u;
label_102f84:
    // 0x102f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102f88:
    // 0x102f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102f8c:
    // 0x102f8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102f90:
    // 0x102f90: 0x3e00008  jr          $ra
label_102f94:
    if (ctx->pc == 0x102F94u) {
        ctx->pc = 0x102F98u;
        goto label_102f98;
    }
    ctx->pc = 0x102F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102F98u;
label_102f98:
    // 0x102f98: 0x0  nop
    ctx->pc = 0x102f98u;
    // NOP
label_102f9c:
    // 0x102f9c: 0x0  nop
    ctx->pc = 0x102f9cu;
    // NOP
label_102fa0:
    // 0x102fa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_102fa4:
    // 0x102fa4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x102fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_102fa8:
    // 0x102fa8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x102fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_102fac:
    // 0x102fac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x102facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_102fb0:
    // 0x102fb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x102fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_102fb4:
    // 0x102fb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x102fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_102fb8:
    // 0x102fb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x102fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_102fbc:
    // 0x102fbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x102fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_102fc0:
    // 0x102fc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_102fc4:
    // 0x102fc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x102fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_102fc8:
    // 0x102fc8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x102fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_102fcc:
    // 0x102fcc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x102fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_102fd0:
    // 0x102fd0: 0xc085020  jal         func_214080
label_102fd4:
    if (ctx->pc == 0x102FD4u) {
        ctx->pc = 0x102FD8u;
        goto label_102fd8;
    }
    ctx->pc = 0x102FD0u;
    SET_GPR_U32(ctx, 31, 0x102FD8u);
    ctx->pc = 0x214080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214080u, 0x102FD0u, 0x102FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FD8u;
label_102fd8:
    // 0x102fd8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102fd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102fdc:
    // 0x102fdc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x102fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_102fe0:
    // 0x102fe0: 0xc119b68  jal         func_466DA0
label_102fe4:
    if (ctx->pc == 0x102FE4u) {
        ctx->pc = 0x102FE8u;
        goto label_102fe8;
    }
    ctx->pc = 0x102FE0u;
    SET_GPR_U32(ctx, 31, 0x102FE8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x102FE0u, 0x102FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FE8u;
label_102fe8:
    // 0x102fe8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x102fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_102fec:
    // 0x102fec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102ff0:
    // 0x102ff0: 0xc0400e0  jal         func_100380
label_102ff4:
    if (ctx->pc == 0x102FF4u) {
        ctx->pc = 0x102FF8u;
        goto label_102ff8;
    }
    ctx->pc = 0x102FF0u;
    SET_GPR_U32(ctx, 31, 0x102FF8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x102FF0u, 0x102FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FF8u;
label_102ff8:
    // 0x102ff8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x102ff8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102ffc:
    // 0x102ffc: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_103000:
    if (ctx->pc == 0x103000u) {
        ctx->pc = 0x103004u;
        goto label_103004;
    }
    ctx->pc = 0x102FFCu;
    {
        const bool branch_taken_0x102ffc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x102ffc) {
            ctx->pc = 0x103014u;
            goto label_103014;
        }
    }
    ctx->pc = 0x103004u;
label_103004:
    // 0x103004: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x103004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_103008:
    // 0x103008: 0xc085da4  jal         func_217690
label_10300c:
    if (ctx->pc == 0x10300Cu) {
        ctx->pc = 0x103010u;
        goto label_103010;
    }
    ctx->pc = 0x103008u;
    SET_GPR_U32(ctx, 31, 0x103010u);
    ctx->pc = 0x217690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217690u, 0x103008u, 0x103010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103010u;
label_103010:
    // 0x103010: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x103010u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103014:
    // 0x103014: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x103014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_103018:
    // 0x103018: 0xac57003c  sw          $s7, 0x3C($v0)
    ctx->pc = 0x103018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 23));
label_10301c:
    // 0x10301c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x10301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_103020:
    // 0x103020: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x103020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_103024:
    // 0x103024: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103028:
    // 0x103028: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x103028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10302c:
    // 0x10302c: 0x320f809  jalr        $t9
label_103030:
    if (ctx->pc == 0x103030u) {
        ctx->pc = 0x103034u;
        goto label_103034;
    }
    ctx->pc = 0x10302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10302Cu, 0x103034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103034u;
label_103034:
    // 0x103034: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103038:
    // 0x103038: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10303c:
    // 0x10303c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103040:
    // 0x103040: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103044:
    // 0x103044: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103048:
    // 0x103048: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10304c:
    // 0x10304c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10304cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103050:
    // 0x103050: 0x24041148  addiu       $a0, $zero, 0x1148
    ctx->pc = 0x103050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4424));
label_103054:
    // 0x103054: 0xc119b68  jal         func_466DA0
label_103058:
    if (ctx->pc == 0x103058u) {
        ctx->pc = 0x10305Cu;
        goto label_10305c;
    }
    ctx->pc = 0x103054u;
    SET_GPR_U32(ctx, 31, 0x10305Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x103054u, 0x10305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10305Cu;
label_10305c:
    // 0x10305c: 0x24041148  addiu       $a0, $zero, 0x1148
    ctx->pc = 0x10305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4424));
label_103060:
    // 0x103060: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103064:
    // 0x103064: 0xc0400e0  jal         func_100380
label_103068:
    if (ctx->pc == 0x103068u) {
        ctx->pc = 0x10306Cu;
        goto label_10306c;
    }
    ctx->pc = 0x103064u;
    SET_GPR_U32(ctx, 31, 0x10306Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x103064u, 0x10306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10306Cu;
label_10306c:
    // 0x10306c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10306cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103070:
    // 0x103070: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_103074:
    if (ctx->pc == 0x103074u) {
        ctx->pc = 0x103078u;
        goto label_103078;
    }
    ctx->pc = 0x103070u;
    {
        const bool branch_taken_0x103070 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x103070) {
            ctx->pc = 0x103088u;
            goto label_103088;
        }
    }
    ctx->pc = 0x103078u;
label_103078:
    // 0x103078: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x103078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10307c:
    // 0x10307c: 0xc090088  jal         func_240220
label_103080:
    if (ctx->pc == 0x103080u) {
        ctx->pc = 0x103084u;
        goto label_103084;
    }
    ctx->pc = 0x10307Cu;
    SET_GPR_U32(ctx, 31, 0x103084u);
    ctx->pc = 0x240220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240220u, 0x10307Cu, 0x103084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103084u;
label_103084:
    // 0x103084: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x103084u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103088:
    // 0x103088: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x103088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_10308c:
    // 0x10308c: 0xac560040  sw          $s6, 0x40($v0)
    ctx->pc = 0x10308cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 22));
label_103090:
    // 0x103090: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x103090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_103094:
    // 0x103094: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x103094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_103098:
    // 0x103098: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10309c:
    // 0x10309c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10309cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1030a0:
    // 0x1030a0: 0x320f809  jalr        $t9
label_1030a4:
    if (ctx->pc == 0x1030A4u) {
        ctx->pc = 0x1030A8u;
        goto label_1030a8;
    }
    ctx->pc = 0x1030A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1030A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030A0u, 0x1030A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1030A8u;
label_1030a8:
    // 0x1030a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1030a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1030ac:
    // 0x1030ac: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1030acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1030b0:
    // 0x1030b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1030b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1030b4:
    // 0x1030b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1030b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1030b8:
    // 0x1030b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1030b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1030bc:
    // 0x1030bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1030bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1030c0:
    // 0x1030c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1030c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1030c4:
    // 0x1030c4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1030c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1030c8:
    // 0x1030c8: 0xc119b68  jal         func_466DA0
label_1030cc:
    if (ctx->pc == 0x1030CCu) {
        ctx->pc = 0x1030D0u;
        goto label_1030d0;
    }
    ctx->pc = 0x1030C8u;
    SET_GPR_U32(ctx, 31, 0x1030D0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1030C8u, 0x1030D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030D0u;
label_1030d0:
    // 0x1030d0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1030d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1030d4:
    // 0x1030d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1030d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1030d8:
    // 0x1030d8: 0xc0400e0  jal         func_100380
label_1030dc:
    if (ctx->pc == 0x1030DCu) {
        ctx->pc = 0x1030E0u;
        goto label_1030e0;
    }
    ctx->pc = 0x1030D8u;
    SET_GPR_U32(ctx, 31, 0x1030E0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1030D8u, 0x1030E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030E0u;
label_1030e0:
    // 0x1030e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1030e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1030e4:
    // 0x1030e4: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_1030e8:
    if (ctx->pc == 0x1030E8u) {
        ctx->pc = 0x1030ECu;
        goto label_1030ec;
    }
    ctx->pc = 0x1030E4u;
    {
        const bool branch_taken_0x1030e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1030e4) {
            ctx->pc = 0x1030FCu;
            goto label_1030fc;
        }
    }
    ctx->pc = 0x1030ECu;
label_1030ec:
    // 0x1030ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1030ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1030f0:
    // 0x1030f0: 0xc0ac670  jal         func_2B19C0
label_1030f4:
    if (ctx->pc == 0x1030F4u) {
        ctx->pc = 0x1030F8u;
        goto label_1030f8;
    }
    ctx->pc = 0x1030F0u;
    SET_GPR_U32(ctx, 31, 0x1030F8u);
    ctx->pc = 0x2B19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19C0u, 0x1030F0u, 0x1030F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030F8u;
label_1030f8:
    // 0x1030f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1030f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1030fc:
    // 0x1030fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1030fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_103100:
    // 0x103100: 0xac550048  sw          $s5, 0x48($v0)
    ctx->pc = 0x103100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 21));
label_103104:
    // 0x103104: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x103104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_103108:
    // 0x103108: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x103108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_10310c:
    // 0x10310c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10310cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103110:
    // 0x103110: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x103110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_103114:
    // 0x103114: 0x320f809  jalr        $t9
label_103118:
    if (ctx->pc == 0x103118u) {
        ctx->pc = 0x10311Cu;
        goto label_10311c;
    }
    ctx->pc = 0x103114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10311Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103114u, 0x10311Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10311Cu;
label_10311c:
    // 0x10311c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10311cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103120:
    // 0x103120: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103124:
    // 0x103124: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103128:
    // 0x103128: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10312c:
    // 0x10312c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10312cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103130:
    // 0x103130: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103134:
    // 0x103134: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103138:
    // 0x103138: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x103138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_10313c:
    // 0x10313c: 0xc119b68  jal         func_466DA0
label_103140:
    if (ctx->pc == 0x103140u) {
        ctx->pc = 0x103144u;
        goto label_103144;
    }
    ctx->pc = 0x10313Cu;
    SET_GPR_U32(ctx, 31, 0x103144u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x10313Cu, 0x103144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103144u;
label_103144:
    // 0x103144: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x103144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_103148:
    // 0x103148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10314c:
    // 0x10314c: 0xc0400e0  jal         func_100380
label_103150:
    if (ctx->pc == 0x103150u) {
        ctx->pc = 0x103154u;
        goto label_103154;
    }
    ctx->pc = 0x10314Cu;
    SET_GPR_U32(ctx, 31, 0x103154u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x10314Cu, 0x103154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103154u;
label_103154:
    // 0x103154: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x103154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103158:
    // 0x103158: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_10315c:
    if (ctx->pc == 0x10315Cu) {
        ctx->pc = 0x103160u;
        goto label_103160;
    }
    ctx->pc = 0x103158u;
    {
        const bool branch_taken_0x103158 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x103158) {
            ctx->pc = 0x103170u;
            goto label_103170;
        }
    }
    ctx->pc = 0x103160u;
label_103160:
    // 0x103160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x103160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_103164:
    // 0x103164: 0xc09e288  jal         func_278A20
label_103168:
    if (ctx->pc == 0x103168u) {
        ctx->pc = 0x10316Cu;
        goto label_10316c;
    }
    ctx->pc = 0x103164u;
    SET_GPR_U32(ctx, 31, 0x10316Cu);
    ctx->pc = 0x278A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278A20u, 0x103164u, 0x10316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10316Cu;
label_10316c:
    // 0x10316c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103170:
    // 0x103170: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x103170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_103174:
    // 0x103174: 0xac540044  sw          $s4, 0x44($v0)
    ctx->pc = 0x103174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 20));
label_103178:
    // 0x103178: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x103178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_10317c:
    // 0x10317c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x10317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_103180:
    // 0x103180: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103184:
    // 0x103184: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x103184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_103188:
    // 0x103188: 0x320f809  jalr        $t9
label_10318c:
    if (ctx->pc == 0x10318Cu) {
        ctx->pc = 0x103190u;
        goto label_103190;
    }
    ctx->pc = 0x103188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103190u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103188u, 0x103190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103190u;
label_103190:
    // 0x103190: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103194:
    // 0x103194: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103198:
    // 0x103198: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10319c:
    // 0x10319c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10319cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1031a0:
    // 0x1031a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1031a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1031a4:
    // 0x1031a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1031a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1031a8:
    // 0x1031a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1031a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1031ac:
    // 0x1031ac: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x1031acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1031b0:
    // 0x1031b0: 0xc119b68  jal         func_466DA0
label_1031b4:
    if (ctx->pc == 0x1031B4u) {
        ctx->pc = 0x1031B8u;
        goto label_1031b8;
    }
    ctx->pc = 0x1031B0u;
    SET_GPR_U32(ctx, 31, 0x1031B8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1031B0u, 0x1031B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031B8u;
label_1031b8:
    // 0x1031b8: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x1031b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1031bc:
    // 0x1031bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1031bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1031c0:
    // 0x1031c0: 0xc0400e0  jal         func_100380
label_1031c4:
    if (ctx->pc == 0x1031C4u) {
        ctx->pc = 0x1031C8u;
        goto label_1031c8;
    }
    ctx->pc = 0x1031C0u;
    SET_GPR_U32(ctx, 31, 0x1031C8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1031C0u, 0x1031C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031C8u;
label_1031c8:
    // 0x1031c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1031c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1031cc:
    // 0x1031cc: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1031d0:
    if (ctx->pc == 0x1031D0u) {
        ctx->pc = 0x1031D4u;
        goto label_1031d4;
    }
    ctx->pc = 0x1031CCu;
    {
        const bool branch_taken_0x1031cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1031cc) {
            ctx->pc = 0x1031E4u;
            goto label_1031e4;
        }
    }
    ctx->pc = 0x1031D4u;
label_1031d4:
    // 0x1031d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1031d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1031d8:
    // 0x1031d8: 0xc0ab0a4  jal         func_2AC290
label_1031dc:
    if (ctx->pc == 0x1031DCu) {
        ctx->pc = 0x1031E0u;
        goto label_1031e0;
    }
    ctx->pc = 0x1031D8u;
    SET_GPR_U32(ctx, 31, 0x1031E0u);
    ctx->pc = 0x2AC290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC290u, 0x1031D8u, 0x1031E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031E0u;
label_1031e0:
    // 0x1031e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1031e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1031e4:
    // 0x1031e4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1031e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1031e8:
    // 0x1031e8: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x1031e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
label_1031ec:
    // 0x1031ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1031ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1031f0:
    // 0x1031f0: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x1031f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1031f4:
    // 0x1031f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1031f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1031f8:
    // 0x1031f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1031f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1031fc:
    // 0x1031fc: 0x320f809  jalr        $t9
label_103200:
    if (ctx->pc == 0x103200u) {
        ctx->pc = 0x103204u;
        goto label_103204;
    }
    ctx->pc = 0x1031FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103204u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1031FCu, 0x103204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103204u;
label_103204:
    // 0x103204: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103208:
    // 0x103208: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10320c:
    // 0x10320c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10320cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103210:
    // 0x103210: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103214:
    // 0x103214: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103218:
    // 0x103218: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10321c:
    // 0x10321c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10321cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103220:
    // 0x103220: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x103220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_103224:
    // 0x103224: 0xc119b68  jal         func_466DA0
label_103228:
    if (ctx->pc == 0x103228u) {
        ctx->pc = 0x10322Cu;
        goto label_10322c;
    }
    ctx->pc = 0x103224u;
    SET_GPR_U32(ctx, 31, 0x10322Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x103224u, 0x10322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10322Cu;
label_10322c:
    // 0x10322c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x10322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_103230:
    // 0x103230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103234:
    // 0x103234: 0xc0400e0  jal         func_100380
label_103238:
    if (ctx->pc == 0x103238u) {
        ctx->pc = 0x10323Cu;
        goto label_10323c;
    }
    ctx->pc = 0x103234u;
    SET_GPR_U32(ctx, 31, 0x10323Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x103234u, 0x10323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10323Cu;
label_10323c:
    // 0x10323c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10323cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103240:
    // 0x103240: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_103244:
    if (ctx->pc == 0x103244u) {
        ctx->pc = 0x103248u;
        goto label_103248;
    }
    ctx->pc = 0x103240u;
    {
        const bool branch_taken_0x103240 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x103240) {
            ctx->pc = 0x103258u;
            goto label_103258;
        }
    }
    ctx->pc = 0x103248u;
label_103248:
    // 0x103248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10324c:
    // 0x10324c: 0xc08e400  jal         func_239000
label_103250:
    if (ctx->pc == 0x103250u) {
        ctx->pc = 0x103254u;
        goto label_103254;
    }
    ctx->pc = 0x10324Cu;
    SET_GPR_U32(ctx, 31, 0x103254u);
    ctx->pc = 0x239000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239000u, 0x10324Cu, 0x103254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103254u;
label_103254:
    // 0x103254: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x103254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103258:
    // 0x103258: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x103258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_10325c:
    // 0x10325c: 0xac520054  sw          $s2, 0x54($v0)
    ctx->pc = 0x10325cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 18));
label_103260:
    // 0x103260: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x103260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_103264:
    // 0x103264: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x103264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_103268:
    // 0x103268: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10326c:
    // 0x10326c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10326cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_103270:
    // 0x103270: 0x320f809  jalr        $t9
label_103274:
    if (ctx->pc == 0x103274u) {
        ctx->pc = 0x103278u;
        goto label_103278;
    }
    ctx->pc = 0x103270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103278u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103270u, 0x103278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103278u;
label_103278:
    // 0x103278: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10327c:
    // 0x10327c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103280:
    // 0x103280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103284:
    // 0x103284: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103288:
    // 0x103288: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10328c:
    // 0x10328c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103290:
    // 0x103290: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103294:
    // 0x103294: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x103294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_103298:
    // 0x103298: 0xc119b68  jal         func_466DA0
label_10329c:
    if (ctx->pc == 0x10329Cu) {
        ctx->pc = 0x1032A0u;
        goto label_1032a0;
    }
    ctx->pc = 0x103298u;
    SET_GPR_U32(ctx, 31, 0x1032A0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x103298u, 0x1032A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032A0u;
label_1032a0:
    // 0x1032a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1032a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1032a4:
    // 0x1032a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1032a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1032a8:
    // 0x1032a8: 0xc0400e0  jal         func_100380
label_1032ac:
    if (ctx->pc == 0x1032ACu) {
        ctx->pc = 0x1032B0u;
        goto label_1032b0;
    }
    ctx->pc = 0x1032A8u;
    SET_GPR_U32(ctx, 31, 0x1032B0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1032A8u, 0x1032B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032B0u;
label_1032b0:
    // 0x1032b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1032b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1032b4:
    // 0x1032b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1032b8:
    if (ctx->pc == 0x1032B8u) {
        ctx->pc = 0x1032BCu;
        goto label_1032bc;
    }
    ctx->pc = 0x1032B4u;
    {
        const bool branch_taken_0x1032b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1032b4) {
            ctx->pc = 0x1032D0u;
            goto label_1032d0;
        }
    }
    ctx->pc = 0x1032BCu;
label_1032bc:
    // 0x1032bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1032bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1032c0:
    // 0x1032c0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1032c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1032c4:
    // 0x1032c4: 0xc0409fc  jal         func_1027F0
label_1032c8:
    if (ctx->pc == 0x1032C8u) {
        ctx->pc = 0x1032CCu;
        goto label_1032cc;
    }
    ctx->pc = 0x1032C4u;
    SET_GPR_U32(ctx, 31, 0x1032CCu);
    ctx->pc = 0x1027F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1027F0u, 0x1032C4u, 0x1032CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032CCu;
label_1032cc:
    // 0x1032cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1032ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1032d0:
    // 0x1032d0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1032d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1032d4:
    // 0x1032d4: 0xac510050  sw          $s1, 0x50($v0)
    ctx->pc = 0x1032d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 17));
label_1032d8:
    // 0x1032d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1032d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1032dc:
    // 0x1032dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1032dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1032e0:
    // 0x1032e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1032e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1032e4:
    // 0x1032e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1032e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1032e8:
    // 0x1032e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1032e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1032ec:
    // 0x1032ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1032ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1032f0:
    // 0x1032f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1032f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1032f4:
    // 0x1032f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1032f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1032f8:
    // 0x1032f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1032f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1032fc:
    // 0x1032fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1032fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_103300:
    // 0x103300: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x103300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_103304:
    // 0x103304: 0x3e00008  jr          $ra
label_103308:
    if (ctx->pc == 0x103308u) {
        ctx->pc = 0x10330Cu;
        goto label_10330c;
    }
    ctx->pc = 0x103304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10330Cu;
label_10330c:
    // 0x10330c: 0x0  nop
    ctx->pc = 0x10330cu;
    // NOP
label_103310:
    // 0x103310: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x103310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_103314:
    // 0x103314: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x103314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_103318:
    // 0x103318: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x103318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_10331c:
    // 0x10331c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_103320:
    // 0x103320: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x103320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_103324:
    // 0x103324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x103324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_103328:
    // 0x103328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x103328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10332c:
    // 0x10332c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_103330:
    // 0x103330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x103330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_103334:
    // 0x103334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x103334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_103338:
    // 0x103338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x103338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10333c:
    // 0x10333c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x10333cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_103340:
    // 0x103340: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x103340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103344:
    // 0x103344: 0xc085204  jal         func_214810
label_103348:
    if (ctx->pc == 0x103348u) {
        ctx->pc = 0x10334Cu;
        goto label_10334c;
    }
    ctx->pc = 0x103344u;
    SET_GPR_U32(ctx, 31, 0x10334Cu);
    ctx->pc = 0x214810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214810u, 0x103344u, 0x10334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10334Cu;
label_10334c:
    // 0x10334c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10334cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103350:
    // 0x103350: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103354:
    // 0x103354: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x103354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_103358:
    // 0x103358: 0xc090590  jal         func_241640
label_10335c:
    if (ctx->pc == 0x10335Cu) {
        ctx->pc = 0x103360u;
        goto label_103360;
    }
    ctx->pc = 0x103358u;
    SET_GPR_U32(ctx, 31, 0x103360u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x103358u, 0x103360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103360u;
label_103360:
    // 0x103360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x103360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103364:
    // 0x103364: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x103364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_103368:
    // 0x103368: 0xc09157c  jal         func_2455F0
label_10336c:
    if (ctx->pc == 0x10336Cu) {
        ctx->pc = 0x103370u;
        goto label_103370;
    }
    ctx->pc = 0x103368u;
    SET_GPR_U32(ctx, 31, 0x103370u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x103368u, 0x103370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103370u;
label_103370:
    // 0x103370: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x103370u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103374:
    // 0x103374: 0x10000046  b           . + 4 + (0x46 << 2)
label_103378:
    if (ctx->pc == 0x103378u) {
        ctx->pc = 0x10337Cu;
        goto label_10337c;
    }
    ctx->pc = 0x103374u;
    {
        const bool branch_taken_0x103374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x103374) {
            ctx->pc = 0x103490u;
            goto label_103490;
        }
    }
    ctx->pc = 0x10337Cu;
label_10337c:
    // 0x10337c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_103380:
    // 0x103380: 0xc040e7c  jal         func_1039F0
label_103384:
    if (ctx->pc == 0x103384u) {
        ctx->pc = 0x103388u;
        goto label_103388;
    }
    ctx->pc = 0x103380u;
    SET_GPR_U32(ctx, 31, 0x103388u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x103380u, 0x103388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103388u;
label_103388:
    // 0x103388: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x103388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10338c:
    // 0x10338c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10338cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103390:
    // 0x103390: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x103390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_103394:
    // 0x103394: 0xc085538  jal         func_2154E0
label_103398:
    if (ctx->pc == 0x103398u) {
        ctx->pc = 0x10339Cu;
        goto label_10339c;
    }
    ctx->pc = 0x103394u;
    SET_GPR_U32(ctx, 31, 0x10339Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x103394u, 0x10339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10339Cu;
label_10339c:
    // 0x10339c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10339cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1033a0:
    // 0x1033a0: 0x10130037  beq         $zero, $s3, . + 4 + (0x37 << 2)
label_1033a4:
    if (ctx->pc == 0x1033A4u) {
        ctx->pc = 0x1033A8u;
        goto label_1033a8;
    }
    ctx->pc = 0x1033A0u;
    {
        const bool branch_taken_0x1033a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x1033a0) {
            ctx->pc = 0x103480u;
            goto label_103480;
        }
    }
    ctx->pc = 0x1033A8u;
label_1033a8:
    // 0x1033a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1033a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1033ac:
    // 0x1033ac: 0xc091aa0  jal         func_246A80
label_1033b0:
    if (ctx->pc == 0x1033B0u) {
        ctx->pc = 0x1033B4u;
        goto label_1033b4;
    }
    ctx->pc = 0x1033ACu;
    SET_GPR_U32(ctx, 31, 0x1033B4u);
    ctx->pc = 0x246A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A80u, 0x1033ACu, 0x1033B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033B4u;
label_1033b4:
    // 0x1033b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1033b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1033b8:
    // 0x1033b8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1033bc:
    if (ctx->pc == 0x1033BCu) {
        ctx->pc = 0x1033C0u;
        goto label_1033c0;
    }
    ctx->pc = 0x1033B8u;
    {
        const bool branch_taken_0x1033b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1033b8) {
            ctx->pc = 0x1033FCu;
            goto label_1033fc;
        }
    }
    ctx->pc = 0x1033C0u;
label_1033c0:
    // 0x1033c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1033c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1033c4:
    // 0x1033c4: 0xc040e7c  jal         func_1039F0
label_1033c8:
    if (ctx->pc == 0x1033C8u) {
        ctx->pc = 0x1033CCu;
        goto label_1033cc;
    }
    ctx->pc = 0x1033C4u;
    SET_GPR_U32(ctx, 31, 0x1033CCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1033C4u, 0x1033CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033CCu;
label_1033cc:
    // 0x1033cc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1033ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1033d0:
    // 0x1033d0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1033d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1033d4:
    // 0x1033d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1033d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1033d8:
    // 0x1033d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1033d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1033dc:
    // 0x1033dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1033dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1033e0:
    // 0x1033e0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1033e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1033e4:
    // 0x1033e4: 0x320f809  jalr        $t9
label_1033e8:
    if (ctx->pc == 0x1033E8u) {
        ctx->pc = 0x1033ECu;
        goto label_1033ec;
    }
    ctx->pc = 0x1033E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1033ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1033E4u, 0x1033ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1033ECu;
label_1033ec:
    // 0x1033ec: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1033ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1033f0:
    // 0x1033f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1033f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1033f4:
    // 0x1033f4: 0xc041018  jal         func_104060
label_1033f8:
    if (ctx->pc == 0x1033F8u) {
        ctx->pc = 0x1033FCu;
        goto label_1033fc;
    }
    ctx->pc = 0x1033F4u;
    SET_GPR_U32(ctx, 31, 0x1033FCu);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x1033F4u, 0x1033FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033FCu;
label_1033fc:
    // 0x1033fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1033fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_103400:
    // 0x103400: 0xc040e70  jal         func_1039C0
label_103404:
    if (ctx->pc == 0x103404u) {
        ctx->pc = 0x103408u;
        goto label_103408;
    }
    ctx->pc = 0x103400u;
    SET_GPR_U32(ctx, 31, 0x103408u);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x103400u, 0x103408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103408u;
label_103408:
    // 0x103408: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x103408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10340c:
    // 0x10340c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_103410:
    if (ctx->pc == 0x103410u) {
        ctx->pc = 0x103414u;
        goto label_103414;
    }
    ctx->pc = 0x10340Cu;
    {
        const bool branch_taken_0x10340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10340c) {
            ctx->pc = 0x1033C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1033c0;
        }
    }
    ctx->pc = 0x103414u;
label_103414:
    // 0x103414: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_103418:
    // 0x103418: 0xc091aa8  jal         func_246AA0
label_10341c:
    if (ctx->pc == 0x10341Cu) {
        ctx->pc = 0x103420u;
        goto label_103420;
    }
    ctx->pc = 0x103418u;
    SET_GPR_U32(ctx, 31, 0x103420u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x103418u, 0x103420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103420u;
label_103420:
    // 0x103420: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x103420u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103424:
    // 0x103424: 0x10000010  b           . + 4 + (0x10 << 2)
label_103428:
    if (ctx->pc == 0x103428u) {
        ctx->pc = 0x10342Cu;
        goto label_10342c;
    }
    ctx->pc = 0x103424u;
    {
        const bool branch_taken_0x103424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x103424) {
            ctx->pc = 0x103468u;
            goto label_103468;
        }
    }
    ctx->pc = 0x10342Cu;
label_10342c:
    // 0x10342c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_103430:
    // 0x103430: 0xc040e7c  jal         func_1039F0
label_103434:
    if (ctx->pc == 0x103434u) {
        ctx->pc = 0x103438u;
        goto label_103438;
    }
    ctx->pc = 0x103430u;
    SET_GPR_U32(ctx, 31, 0x103438u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x103430u, 0x103438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103438u;
label_103438:
    // 0x103438: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x103438u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10343c:
    // 0x10343c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x10343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103440:
    // 0x103440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103444:
    // 0x103444: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x103444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103448:
    // 0x103448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10344c:
    // 0x10344c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x10344cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_103450:
    // 0x103450: 0x320f809  jalr        $t9
label_103454:
    if (ctx->pc == 0x103454u) {
        ctx->pc = 0x103458u;
        goto label_103458;
    }
    ctx->pc = 0x103450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103458u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103450u, 0x103458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103458u;
label_103458:
    // 0x103458: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x103458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10345c:
    // 0x10345c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10345cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103460:
    // 0x103460: 0xc041018  jal         func_104060
label_103464:
    if (ctx->pc == 0x103464u) {
        ctx->pc = 0x103468u;
        goto label_103468;
    }
    ctx->pc = 0x103460u;
    SET_GPR_U32(ctx, 31, 0x103468u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x103460u, 0x103468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103468u;
label_103468:
    // 0x103468: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x103468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10346c:
    // 0x10346c: 0xc040e70  jal         func_1039C0
label_103470:
    if (ctx->pc == 0x103470u) {
        ctx->pc = 0x103474u;
        goto label_103474;
    }
    ctx->pc = 0x10346Cu;
    SET_GPR_U32(ctx, 31, 0x103474u);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x10346Cu, 0x103474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103474u;
label_103474:
    // 0x103474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x103474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103478:
    // 0x103478: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_10347c:
    if (ctx->pc == 0x10347Cu) {
        ctx->pc = 0x103480u;
        goto label_103480;
    }
    ctx->pc = 0x103478u;
    {
        const bool branch_taken_0x103478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103478) {
            ctx->pc = 0x10342Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10342c;
        }
    }
    ctx->pc = 0x103480u;
label_103480:
    // 0x103480: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x103480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103484:
    // 0x103484: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103488:
    // 0x103488: 0xc041018  jal         func_104060
label_10348c:
    if (ctx->pc == 0x10348Cu) {
        ctx->pc = 0x103490u;
        goto label_103490;
    }
    ctx->pc = 0x103488u;
    SET_GPR_U32(ctx, 31, 0x103490u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x103488u, 0x103490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103490u;
label_103490:
    // 0x103490: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x103490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_103494:
    // 0x103494: 0xc040e70  jal         func_1039C0
label_103498:
    if (ctx->pc == 0x103498u) {
        ctx->pc = 0x10349Cu;
        goto label_10349c;
    }
    ctx->pc = 0x103494u;
    SET_GPR_U32(ctx, 31, 0x10349Cu);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x103494u, 0x10349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10349Cu;
label_10349c:
    // 0x10349c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1034a0:
    // 0x1034a0: 0x1040ffb6  beqz        $v0, . + 4 + (-0x4A << 2)
label_1034a4:
    if (ctx->pc == 0x1034A4u) {
        ctx->pc = 0x1034A8u;
        goto label_1034a8;
    }
    ctx->pc = 0x1034A0u;
    {
        const bool branch_taken_0x1034a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1034a0) {
            ctx->pc = 0x10337Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10337c;
        }
    }
    ctx->pc = 0x1034A8u;
label_1034a8:
    // 0x1034a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1034a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1034ac:
    // 0x1034ac: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1034acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1034b0:
    // 0x1034b0: 0xc090590  jal         func_241640
label_1034b4:
    if (ctx->pc == 0x1034B4u) {
        ctx->pc = 0x1034B8u;
        goto label_1034b8;
    }
    ctx->pc = 0x1034B0u;
    SET_GPR_U32(ctx, 31, 0x1034B8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1034B0u, 0x1034B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034B8u;
label_1034b8:
    // 0x1034b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1034b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1034bc:
    // 0x1034bc: 0xc091574  jal         func_2455D0
label_1034c0:
    if (ctx->pc == 0x1034C0u) {
        ctx->pc = 0x1034C4u;
        goto label_1034c4;
    }
    ctx->pc = 0x1034BCu;
    SET_GPR_U32(ctx, 31, 0x1034C4u);
    ctx->pc = 0x2455D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455D0u, 0x1034BCu, 0x1034C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034C4u;
label_1034c4:
    // 0x1034c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1034c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1034c8:
    // 0x1034c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1034cc:
    if (ctx->pc == 0x1034CCu) {
        ctx->pc = 0x1034D0u;
        goto label_1034d0;
    }
    ctx->pc = 0x1034C8u;
    {
        const bool branch_taken_0x1034c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1034c8) {
            ctx->pc = 0x1034F0u;
            goto label_1034f0;
        }
    }
    ctx->pc = 0x1034D0u;
label_1034d0:
    // 0x1034d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1034d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1034d4:
    // 0x1034d4: 0xc040e7c  jal         func_1039F0
label_1034d8:
    if (ctx->pc == 0x1034D8u) {
        ctx->pc = 0x1034DCu;
        goto label_1034dc;
    }
    ctx->pc = 0x1034D4u;
    SET_GPR_U32(ctx, 31, 0x1034DCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1034D4u, 0x1034DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034DCu;
label_1034dc:
    // 0x1034dc: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x1034dcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1034e0:
    // 0x1034e0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1034e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1034e4:
    // 0x1034e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1034e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1034e8:
    // 0x1034e8: 0xc041018  jal         func_104060
label_1034ec:
    if (ctx->pc == 0x1034ECu) {
        ctx->pc = 0x1034F0u;
        goto label_1034f0;
    }
    ctx->pc = 0x1034E8u;
    SET_GPR_U32(ctx, 31, 0x1034F0u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x1034E8u, 0x1034F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034F0u;
label_1034f0:
    // 0x1034f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1034f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1034f4:
    // 0x1034f4: 0xc040e70  jal         func_1039C0
label_1034f8:
    if (ctx->pc == 0x1034F8u) {
        ctx->pc = 0x1034FCu;
        goto label_1034fc;
    }
    ctx->pc = 0x1034F4u;
    SET_GPR_U32(ctx, 31, 0x1034FCu);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x1034F4u, 0x1034FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034FCu;
label_1034fc:
    // 0x1034fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1034fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103500:
    // 0x103500: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_103504:
    if (ctx->pc == 0x103504u) {
        ctx->pc = 0x103508u;
        goto label_103508;
    }
    ctx->pc = 0x103500u;
    {
        const bool branch_taken_0x103500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103500) {
            ctx->pc = 0x1034D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1034d0;
        }
    }
    ctx->pc = 0x103508u;
label_103508:
    // 0x103508: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10350c:
    // 0x10350c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x10350cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_103510:
    // 0x103510: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103514:
    // 0x103514: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x103514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_103518:
    // 0x103518: 0x320f809  jalr        $t9
label_10351c:
    if (ctx->pc == 0x10351Cu) {
        ctx->pc = 0x103520u;
        goto label_103520;
    }
    ctx->pc = 0x103518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103520u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103518u, 0x103520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103520u;
label_103520:
    // 0x103520: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103524:
    // 0x103524: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103528:
    // 0x103528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10352c:
    // 0x10352c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10352cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103530:
    // 0x103530: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103534:
    // 0x103534: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103538:
    // 0x103538: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103538u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10353c:
    // 0x10353c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103540:
    // 0x103540: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x103540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_103544:
    // 0x103544: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_103548:
    if (ctx->pc == 0x103548u) {
        ctx->pc = 0x10354Cu;
        goto label_10354c;
    }
    ctx->pc = 0x103544u;
    {
        const bool branch_taken_0x103544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103544) {
            ctx->pc = 0x103574u;
            goto label_103574;
        }
    }
    ctx->pc = 0x10354Cu;
label_10354c:
    // 0x10354c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103550:
    // 0x103550: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x103550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_103554:
    // 0x103554: 0xc040e60  jal         func_103980
label_103558:
    if (ctx->pc == 0x103558u) {
        ctx->pc = 0x10355Cu;
        goto label_10355c;
    }
    ctx->pc = 0x103554u;
    SET_GPR_U32(ctx, 31, 0x10355Cu);
    ctx->pc = 0x103980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103980u, 0x103554u, 0x10355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10355Cu;
label_10355c:
    // 0x10355c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103560:
    // 0x103560: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x103560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_103564:
    // 0x103564: 0xc119c5c  jal         func_467170
label_103568:
    if (ctx->pc == 0x103568u) {
        ctx->pc = 0x10356Cu;
        goto label_10356c;
    }
    ctx->pc = 0x103564u;
    SET_GPR_U32(ctx, 31, 0x10356Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x103564u, 0x10356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10356Cu;
label_10356c:
    // 0x10356c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103570:
    // 0x103570: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x103570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_103574:
    // 0x103574: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103578:
    // 0x103578: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x103578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_10357c:
    // 0x10357c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10357cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103580:
    // 0x103580: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x103580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_103584:
    // 0x103584: 0x320f809  jalr        $t9
label_103588:
    if (ctx->pc == 0x103588u) {
        ctx->pc = 0x10358Cu;
        goto label_10358c;
    }
    ctx->pc = 0x103584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10358Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103584u, 0x10358Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10358Cu;
label_10358c:
    // 0x10358c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103590:
    // 0x103590: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103594:
    // 0x103594: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103598:
    // 0x103598: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10359c:
    // 0x10359c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1035a0:
    // 0x1035a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1035a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1035a4:
    // 0x1035a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1035a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1035a8:
    // 0x1035a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1035a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1035ac:
    // 0x1035ac: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1035acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1035b0:
    // 0x1035b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1035b4:
    if (ctx->pc == 0x1035B4u) {
        ctx->pc = 0x1035B8u;
        goto label_1035b8;
    }
    ctx->pc = 0x1035B0u;
    {
        const bool branch_taken_0x1035b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1035b0) {
            ctx->pc = 0x1035E0u;
            goto label_1035e0;
        }
    }
    ctx->pc = 0x1035B8u;
label_1035b8:
    // 0x1035b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1035b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1035bc:
    // 0x1035bc: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x1035bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1035c0:
    // 0x1035c0: 0xc040e50  jal         func_103940
label_1035c4:
    if (ctx->pc == 0x1035C4u) {
        ctx->pc = 0x1035C8u;
        goto label_1035c8;
    }
    ctx->pc = 0x1035C0u;
    SET_GPR_U32(ctx, 31, 0x1035C8u);
    ctx->pc = 0x103940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103940u, 0x1035C0u, 0x1035C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1035C8u;
label_1035c8:
    // 0x1035c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1035c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1035cc:
    // 0x1035cc: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x1035ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1035d0:
    // 0x1035d0: 0xc119c5c  jal         func_467170
label_1035d4:
    if (ctx->pc == 0x1035D4u) {
        ctx->pc = 0x1035D8u;
        goto label_1035d8;
    }
    ctx->pc = 0x1035D0u;
    SET_GPR_U32(ctx, 31, 0x1035D8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1035D0u, 0x1035D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1035D8u;
label_1035d8:
    // 0x1035d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1035d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1035dc:
    // 0x1035dc: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1035dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_1035e0:
    // 0x1035e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1035e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1035e4:
    // 0x1035e4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1035e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1035e8:
    // 0x1035e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1035e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1035ec:
    // 0x1035ec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1035ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1035f0:
    // 0x1035f0: 0x320f809  jalr        $t9
label_1035f4:
    if (ctx->pc == 0x1035F4u) {
        ctx->pc = 0x1035F8u;
        goto label_1035f8;
    }
    ctx->pc = 0x1035F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1035F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1035F0u, 0x1035F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1035F8u;
label_1035f8:
    // 0x1035f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1035f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1035fc:
    // 0x1035fc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1035fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103600:
    // 0x103600: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103604:
    // 0x103604: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103608:
    // 0x103608: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10360c:
    // 0x10360c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10360cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103610:
    // 0x103610: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103614:
    // 0x103614: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103618:
    // 0x103618: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x103618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_10361c:
    // 0x10361c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_103620:
    if (ctx->pc == 0x103620u) {
        ctx->pc = 0x103624u;
        goto label_103624;
    }
    ctx->pc = 0x10361Cu;
    {
        const bool branch_taken_0x10361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10361c) {
            ctx->pc = 0x10364Cu;
            goto label_10364c;
        }
    }
    ctx->pc = 0x103624u;
label_103624:
    // 0x103624: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103628:
    // 0x103628: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x103628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_10362c:
    // 0x10362c: 0xc040e40  jal         func_103900
label_103630:
    if (ctx->pc == 0x103630u) {
        ctx->pc = 0x103634u;
        goto label_103634;
    }
    ctx->pc = 0x10362Cu;
    SET_GPR_U32(ctx, 31, 0x103634u);
    ctx->pc = 0x103900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103900u, 0x10362Cu, 0x103634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103634u;
label_103634:
    // 0x103634: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103638:
    // 0x103638: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x103638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_10363c:
    // 0x10363c: 0xc119c5c  jal         func_467170
label_103640:
    if (ctx->pc == 0x103640u) {
        ctx->pc = 0x103644u;
        goto label_103644;
    }
    ctx->pc = 0x10363Cu;
    SET_GPR_U32(ctx, 31, 0x103644u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10363Cu, 0x103644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103644u;
label_103644:
    // 0x103644: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103648:
    // 0x103648: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x103648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_10364c:
    // 0x10364c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103650:
    // 0x103650: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x103650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_103654:
    // 0x103654: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103658:
    // 0x103658: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x103658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_10365c:
    // 0x10365c: 0x320f809  jalr        $t9
label_103660:
    if (ctx->pc == 0x103660u) {
        ctx->pc = 0x103664u;
        goto label_103664;
    }
    ctx->pc = 0x10365Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10365Cu, 0x103664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103664u;
label_103664:
    // 0x103664: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103668:
    // 0x103668: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10366c:
    // 0x10366c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103670:
    // 0x103670: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103674:
    // 0x103674: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103678:
    // 0x103678: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10367c:
    // 0x10367c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10367cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103680:
    // 0x103680: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103684:
    // 0x103684: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x103684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_103688:
    // 0x103688: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10368c:
    if (ctx->pc == 0x10368Cu) {
        ctx->pc = 0x103690u;
        goto label_103690;
    }
    ctx->pc = 0x103688u;
    {
        const bool branch_taken_0x103688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103688) {
            ctx->pc = 0x1036B8u;
            goto label_1036b8;
        }
    }
    ctx->pc = 0x103690u;
label_103690:
    // 0x103690: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103694:
    // 0x103694: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x103694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_103698:
    // 0x103698: 0xc040e30  jal         func_1038C0
label_10369c:
    if (ctx->pc == 0x10369Cu) {
        ctx->pc = 0x1036A0u;
        goto label_1036a0;
    }
    ctx->pc = 0x103698u;
    SET_GPR_U32(ctx, 31, 0x1036A0u);
    ctx->pc = 0x1038C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038C0u, 0x103698u, 0x1036A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1036A0u;
label_1036a0:
    // 0x1036a0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1036a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1036a4:
    // 0x1036a4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1036a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1036a8:
    // 0x1036a8: 0xc119c5c  jal         func_467170
label_1036ac:
    if (ctx->pc == 0x1036ACu) {
        ctx->pc = 0x1036B0u;
        goto label_1036b0;
    }
    ctx->pc = 0x1036A8u;
    SET_GPR_U32(ctx, 31, 0x1036B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1036A8u, 0x1036B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1036B0u;
label_1036b0:
    // 0x1036b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1036b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1036b4:
    // 0x1036b4: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1036b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_1036b8:
    // 0x1036b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1036b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1036bc:
    // 0x1036bc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1036bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1036c0:
    // 0x1036c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1036c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1036c4:
    // 0x1036c4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1036c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1036c8:
    // 0x1036c8: 0x320f809  jalr        $t9
label_1036cc:
    if (ctx->pc == 0x1036CCu) {
        ctx->pc = 0x1036D0u;
        goto label_1036d0;
    }
    ctx->pc = 0x1036C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1036D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1036C8u, 0x1036D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1036D0u;
label_1036d0:
    // 0x1036d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1036d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1036d4:
    // 0x1036d4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1036d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1036d8:
    // 0x1036d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1036d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1036dc:
    // 0x1036dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1036dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1036e0:
    // 0x1036e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1036e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1036e4:
    // 0x1036e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1036e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1036e8:
    // 0x1036e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1036e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1036ec:
    // 0x1036ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1036ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1036f0:
    // 0x1036f0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1036f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1036f4:
    // 0x1036f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1036f8:
    if (ctx->pc == 0x1036F8u) {
        ctx->pc = 0x1036FCu;
        goto label_1036fc;
    }
    ctx->pc = 0x1036F4u;
    {
        const bool branch_taken_0x1036f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1036f4) {
            ctx->pc = 0x103724u;
            goto label_103724;
        }
    }
    ctx->pc = 0x1036FCu;
label_1036fc:
    // 0x1036fc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1036fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103700:
    // 0x103700: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x103700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_103704:
    // 0x103704: 0xc040e20  jal         func_103880
label_103708:
    if (ctx->pc == 0x103708u) {
        ctx->pc = 0x10370Cu;
        goto label_10370c;
    }
    ctx->pc = 0x103704u;
    SET_GPR_U32(ctx, 31, 0x10370Cu);
    ctx->pc = 0x103880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103880u, 0x103704u, 0x10370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10370Cu;
label_10370c:
    // 0x10370c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103710:
    // 0x103710: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x103710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_103714:
    // 0x103714: 0xc119c5c  jal         func_467170
label_103718:
    if (ctx->pc == 0x103718u) {
        ctx->pc = 0x10371Cu;
        goto label_10371c;
    }
    ctx->pc = 0x103714u;
    SET_GPR_U32(ctx, 31, 0x10371Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x103714u, 0x10371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10371Cu;
label_10371c:
    // 0x10371c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103720:
    // 0x103720: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x103720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_103724:
    // 0x103724: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103728:
    // 0x103728: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x103728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_10372c:
    // 0x10372c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10372cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103730:
    // 0x103730: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x103730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_103734:
    // 0x103734: 0x320f809  jalr        $t9
label_103738:
    if (ctx->pc == 0x103738u) {
        ctx->pc = 0x10373Cu;
        goto label_10373c;
    }
    ctx->pc = 0x103734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10373Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103734u, 0x10373Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10373Cu;
label_10373c:
    // 0x10373c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103740:
    // 0x103740: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103744:
    // 0x103744: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103748:
    // 0x103748: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10374c:
    // 0x10374c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10374cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103750:
    // 0x103750: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103754:
    // 0x103754: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103758:
    // 0x103758: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10375c:
    // 0x10375c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x10375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_103760:
    // 0x103760: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_103764:
    if (ctx->pc == 0x103764u) {
        ctx->pc = 0x103768u;
        goto label_103768;
    }
    ctx->pc = 0x103760u;
    {
        const bool branch_taken_0x103760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103760) {
            ctx->pc = 0x103790u;
            goto label_103790;
        }
    }
    ctx->pc = 0x103768u;
label_103768:
    // 0x103768: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10376c:
    // 0x10376c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x10376cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_103770:
    // 0x103770: 0xc040e10  jal         func_103840
label_103774:
    if (ctx->pc == 0x103774u) {
        ctx->pc = 0x103778u;
        goto label_103778;
    }
    ctx->pc = 0x103770u;
    SET_GPR_U32(ctx, 31, 0x103778u);
    ctx->pc = 0x103840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103840u, 0x103770u, 0x103778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103778u;
label_103778:
    // 0x103778: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10377c:
    // 0x10377c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x10377cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_103780:
    // 0x103780: 0xc119c5c  jal         func_467170
label_103784:
    if (ctx->pc == 0x103784u) {
        ctx->pc = 0x103788u;
        goto label_103788;
    }
    ctx->pc = 0x103780u;
    SET_GPR_U32(ctx, 31, 0x103788u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x103780u, 0x103788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103788u;
label_103788:
    // 0x103788: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10378c:
    // 0x10378c: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x10378cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_103790:
    // 0x103790: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x103790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_103794:
    // 0x103794: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x103794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_103798:
    // 0x103798: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10379c:
    if (ctx->pc == 0x10379Cu) {
        ctx->pc = 0x1037A0u;
        goto label_1037a0;
    }
    ctx->pc = 0x103798u;
    {
        const bool branch_taken_0x103798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103798) {
            ctx->pc = 0x1037C8u;
            goto label_1037c8;
        }
    }
    ctx->pc = 0x1037A0u;
label_1037a0:
    // 0x1037a0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1037a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1037a4:
    // 0x1037a4: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x1037a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1037a8:
    // 0x1037a8: 0xc040e00  jal         func_103800
label_1037ac:
    if (ctx->pc == 0x1037ACu) {
        ctx->pc = 0x1037B0u;
        goto label_1037b0;
    }
    ctx->pc = 0x1037A8u;
    SET_GPR_U32(ctx, 31, 0x1037B0u);
    ctx->pc = 0x103800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103800u, 0x1037A8u, 0x1037B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037B0u;
label_1037b0:
    // 0x1037b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1037b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1037b4:
    // 0x1037b4: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x1037b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1037b8:
    // 0x1037b8: 0xc119c5c  jal         func_467170
label_1037bc:
    if (ctx->pc == 0x1037BCu) {
        ctx->pc = 0x1037C0u;
        goto label_1037c0;
    }
    ctx->pc = 0x1037B8u;
    SET_GPR_U32(ctx, 31, 0x1037C0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1037B8u, 0x1037C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037C0u;
label_1037c0:
    // 0x1037c0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1037c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1037c4:
    // 0x1037c4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1037c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_1037c8:
    // 0x1037c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1037c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1037cc:
    // 0x1037cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1037ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1037d0:
    // 0x1037d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1037d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1037d4:
    // 0x1037d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1037d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1037d8:
    // 0x1037d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1037d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1037dc:
    // 0x1037dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1037dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1037e0:
    // 0x1037e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1037e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1037e4:
    // 0x1037e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1037e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1037e8:
    // 0x1037e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1037e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1037ec:
    // 0x1037ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1037ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1037f0:
    // 0x1037f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1037f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1037f4:
    // 0x1037f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1037f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1037f8:
    // 0x1037f8: 0x3e00008  jr          $ra
label_1037fc:
    if (ctx->pc == 0x1037FCu) {
        ctx->pc = 0x103800u;
        goto label_fallthrough_0x1037f8;
    }
    ctx->pc = 0x1037F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1037F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1037f8:
    ctx->pc = 0x103800u;
}
