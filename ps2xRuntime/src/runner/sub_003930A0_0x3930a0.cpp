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

// Function: sub_003930A0
// Address: 0x3930a0 - 0x393a80
void sub_003930A0_0x3930a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003930A0_0x3930a0");
#endif

    switch (ctx->pc) {
        case 0x3930a0u: goto label_3930a0;
        case 0x3930a4u: goto label_3930a4;
        case 0x3930a8u: goto label_3930a8;
        case 0x3930acu: goto label_3930ac;
        case 0x3930b0u: goto label_3930b0;
        case 0x3930b4u: goto label_3930b4;
        case 0x3930b8u: goto label_3930b8;
        case 0x3930bcu: goto label_3930bc;
        case 0x3930c0u: goto label_3930c0;
        case 0x3930c4u: goto label_3930c4;
        case 0x3930c8u: goto label_3930c8;
        case 0x3930ccu: goto label_3930cc;
        case 0x3930d0u: goto label_3930d0;
        case 0x3930d4u: goto label_3930d4;
        case 0x3930d8u: goto label_3930d8;
        case 0x3930dcu: goto label_3930dc;
        case 0x3930e0u: goto label_3930e0;
        case 0x3930e4u: goto label_3930e4;
        case 0x3930e8u: goto label_3930e8;
        case 0x3930ecu: goto label_3930ec;
        case 0x3930f0u: goto label_3930f0;
        case 0x3930f4u: goto label_3930f4;
        case 0x3930f8u: goto label_3930f8;
        case 0x3930fcu: goto label_3930fc;
        case 0x393100u: goto label_393100;
        case 0x393104u: goto label_393104;
        case 0x393108u: goto label_393108;
        case 0x39310cu: goto label_39310c;
        case 0x393110u: goto label_393110;
        case 0x393114u: goto label_393114;
        case 0x393118u: goto label_393118;
        case 0x39311cu: goto label_39311c;
        case 0x393120u: goto label_393120;
        case 0x393124u: goto label_393124;
        case 0x393128u: goto label_393128;
        case 0x39312cu: goto label_39312c;
        case 0x393130u: goto label_393130;
        case 0x393134u: goto label_393134;
        case 0x393138u: goto label_393138;
        case 0x39313cu: goto label_39313c;
        case 0x393140u: goto label_393140;
        case 0x393144u: goto label_393144;
        case 0x393148u: goto label_393148;
        case 0x39314cu: goto label_39314c;
        case 0x393150u: goto label_393150;
        case 0x393154u: goto label_393154;
        case 0x393158u: goto label_393158;
        case 0x39315cu: goto label_39315c;
        case 0x393160u: goto label_393160;
        case 0x393164u: goto label_393164;
        case 0x393168u: goto label_393168;
        case 0x39316cu: goto label_39316c;
        case 0x393170u: goto label_393170;
        case 0x393174u: goto label_393174;
        case 0x393178u: goto label_393178;
        case 0x39317cu: goto label_39317c;
        case 0x393180u: goto label_393180;
        case 0x393184u: goto label_393184;
        case 0x393188u: goto label_393188;
        case 0x39318cu: goto label_39318c;
        case 0x393190u: goto label_393190;
        case 0x393194u: goto label_393194;
        case 0x393198u: goto label_393198;
        case 0x39319cu: goto label_39319c;
        case 0x3931a0u: goto label_3931a0;
        case 0x3931a4u: goto label_3931a4;
        case 0x3931a8u: goto label_3931a8;
        case 0x3931acu: goto label_3931ac;
        case 0x3931b0u: goto label_3931b0;
        case 0x3931b4u: goto label_3931b4;
        case 0x3931b8u: goto label_3931b8;
        case 0x3931bcu: goto label_3931bc;
        case 0x3931c0u: goto label_3931c0;
        case 0x3931c4u: goto label_3931c4;
        case 0x3931c8u: goto label_3931c8;
        case 0x3931ccu: goto label_3931cc;
        case 0x3931d0u: goto label_3931d0;
        case 0x3931d4u: goto label_3931d4;
        case 0x3931d8u: goto label_3931d8;
        case 0x3931dcu: goto label_3931dc;
        case 0x3931e0u: goto label_3931e0;
        case 0x3931e4u: goto label_3931e4;
        case 0x3931e8u: goto label_3931e8;
        case 0x3931ecu: goto label_3931ec;
        case 0x3931f0u: goto label_3931f0;
        case 0x3931f4u: goto label_3931f4;
        case 0x3931f8u: goto label_3931f8;
        case 0x3931fcu: goto label_3931fc;
        case 0x393200u: goto label_393200;
        case 0x393204u: goto label_393204;
        case 0x393208u: goto label_393208;
        case 0x39320cu: goto label_39320c;
        case 0x393210u: goto label_393210;
        case 0x393214u: goto label_393214;
        case 0x393218u: goto label_393218;
        case 0x39321cu: goto label_39321c;
        case 0x393220u: goto label_393220;
        case 0x393224u: goto label_393224;
        case 0x393228u: goto label_393228;
        case 0x39322cu: goto label_39322c;
        case 0x393230u: goto label_393230;
        case 0x393234u: goto label_393234;
        case 0x393238u: goto label_393238;
        case 0x39323cu: goto label_39323c;
        case 0x393240u: goto label_393240;
        case 0x393244u: goto label_393244;
        case 0x393248u: goto label_393248;
        case 0x39324cu: goto label_39324c;
        case 0x393250u: goto label_393250;
        case 0x393254u: goto label_393254;
        case 0x393258u: goto label_393258;
        case 0x39325cu: goto label_39325c;
        case 0x393260u: goto label_393260;
        case 0x393264u: goto label_393264;
        case 0x393268u: goto label_393268;
        case 0x39326cu: goto label_39326c;
        case 0x393270u: goto label_393270;
        case 0x393274u: goto label_393274;
        case 0x393278u: goto label_393278;
        case 0x39327cu: goto label_39327c;
        case 0x393280u: goto label_393280;
        case 0x393284u: goto label_393284;
        case 0x393288u: goto label_393288;
        case 0x39328cu: goto label_39328c;
        case 0x393290u: goto label_393290;
        case 0x393294u: goto label_393294;
        case 0x393298u: goto label_393298;
        case 0x39329cu: goto label_39329c;
        case 0x3932a0u: goto label_3932a0;
        case 0x3932a4u: goto label_3932a4;
        case 0x3932a8u: goto label_3932a8;
        case 0x3932acu: goto label_3932ac;
        case 0x3932b0u: goto label_3932b0;
        case 0x3932b4u: goto label_3932b4;
        case 0x3932b8u: goto label_3932b8;
        case 0x3932bcu: goto label_3932bc;
        case 0x3932c0u: goto label_3932c0;
        case 0x3932c4u: goto label_3932c4;
        case 0x3932c8u: goto label_3932c8;
        case 0x3932ccu: goto label_3932cc;
        case 0x3932d0u: goto label_3932d0;
        case 0x3932d4u: goto label_3932d4;
        case 0x3932d8u: goto label_3932d8;
        case 0x3932dcu: goto label_3932dc;
        case 0x3932e0u: goto label_3932e0;
        case 0x3932e4u: goto label_3932e4;
        case 0x3932e8u: goto label_3932e8;
        case 0x3932ecu: goto label_3932ec;
        case 0x3932f0u: goto label_3932f0;
        case 0x3932f4u: goto label_3932f4;
        case 0x3932f8u: goto label_3932f8;
        case 0x3932fcu: goto label_3932fc;
        case 0x393300u: goto label_393300;
        case 0x393304u: goto label_393304;
        case 0x393308u: goto label_393308;
        case 0x39330cu: goto label_39330c;
        case 0x393310u: goto label_393310;
        case 0x393314u: goto label_393314;
        case 0x393318u: goto label_393318;
        case 0x39331cu: goto label_39331c;
        case 0x393320u: goto label_393320;
        case 0x393324u: goto label_393324;
        case 0x393328u: goto label_393328;
        case 0x39332cu: goto label_39332c;
        case 0x393330u: goto label_393330;
        case 0x393334u: goto label_393334;
        case 0x393338u: goto label_393338;
        case 0x39333cu: goto label_39333c;
        case 0x393340u: goto label_393340;
        case 0x393344u: goto label_393344;
        case 0x393348u: goto label_393348;
        case 0x39334cu: goto label_39334c;
        case 0x393350u: goto label_393350;
        case 0x393354u: goto label_393354;
        case 0x393358u: goto label_393358;
        case 0x39335cu: goto label_39335c;
        case 0x393360u: goto label_393360;
        case 0x393364u: goto label_393364;
        case 0x393368u: goto label_393368;
        case 0x39336cu: goto label_39336c;
        case 0x393370u: goto label_393370;
        case 0x393374u: goto label_393374;
        case 0x393378u: goto label_393378;
        case 0x39337cu: goto label_39337c;
        case 0x393380u: goto label_393380;
        case 0x393384u: goto label_393384;
        case 0x393388u: goto label_393388;
        case 0x39338cu: goto label_39338c;
        case 0x393390u: goto label_393390;
        case 0x393394u: goto label_393394;
        case 0x393398u: goto label_393398;
        case 0x39339cu: goto label_39339c;
        case 0x3933a0u: goto label_3933a0;
        case 0x3933a4u: goto label_3933a4;
        case 0x3933a8u: goto label_3933a8;
        case 0x3933acu: goto label_3933ac;
        case 0x3933b0u: goto label_3933b0;
        case 0x3933b4u: goto label_3933b4;
        case 0x3933b8u: goto label_3933b8;
        case 0x3933bcu: goto label_3933bc;
        case 0x3933c0u: goto label_3933c0;
        case 0x3933c4u: goto label_3933c4;
        case 0x3933c8u: goto label_3933c8;
        case 0x3933ccu: goto label_3933cc;
        case 0x3933d0u: goto label_3933d0;
        case 0x3933d4u: goto label_3933d4;
        case 0x3933d8u: goto label_3933d8;
        case 0x3933dcu: goto label_3933dc;
        case 0x3933e0u: goto label_3933e0;
        case 0x3933e4u: goto label_3933e4;
        case 0x3933e8u: goto label_3933e8;
        case 0x3933ecu: goto label_3933ec;
        case 0x3933f0u: goto label_3933f0;
        case 0x3933f4u: goto label_3933f4;
        case 0x3933f8u: goto label_3933f8;
        case 0x3933fcu: goto label_3933fc;
        case 0x393400u: goto label_393400;
        case 0x393404u: goto label_393404;
        case 0x393408u: goto label_393408;
        case 0x39340cu: goto label_39340c;
        case 0x393410u: goto label_393410;
        case 0x393414u: goto label_393414;
        case 0x393418u: goto label_393418;
        case 0x39341cu: goto label_39341c;
        case 0x393420u: goto label_393420;
        case 0x393424u: goto label_393424;
        case 0x393428u: goto label_393428;
        case 0x39342cu: goto label_39342c;
        case 0x393430u: goto label_393430;
        case 0x393434u: goto label_393434;
        case 0x393438u: goto label_393438;
        case 0x39343cu: goto label_39343c;
        case 0x393440u: goto label_393440;
        case 0x393444u: goto label_393444;
        case 0x393448u: goto label_393448;
        case 0x39344cu: goto label_39344c;
        case 0x393450u: goto label_393450;
        case 0x393454u: goto label_393454;
        case 0x393458u: goto label_393458;
        case 0x39345cu: goto label_39345c;
        case 0x393460u: goto label_393460;
        case 0x393464u: goto label_393464;
        case 0x393468u: goto label_393468;
        case 0x39346cu: goto label_39346c;
        case 0x393470u: goto label_393470;
        case 0x393474u: goto label_393474;
        case 0x393478u: goto label_393478;
        case 0x39347cu: goto label_39347c;
        case 0x393480u: goto label_393480;
        case 0x393484u: goto label_393484;
        case 0x393488u: goto label_393488;
        case 0x39348cu: goto label_39348c;
        case 0x393490u: goto label_393490;
        case 0x393494u: goto label_393494;
        case 0x393498u: goto label_393498;
        case 0x39349cu: goto label_39349c;
        case 0x3934a0u: goto label_3934a0;
        case 0x3934a4u: goto label_3934a4;
        case 0x3934a8u: goto label_3934a8;
        case 0x3934acu: goto label_3934ac;
        case 0x3934b0u: goto label_3934b0;
        case 0x3934b4u: goto label_3934b4;
        case 0x3934b8u: goto label_3934b8;
        case 0x3934bcu: goto label_3934bc;
        case 0x3934c0u: goto label_3934c0;
        case 0x3934c4u: goto label_3934c4;
        case 0x3934c8u: goto label_3934c8;
        case 0x3934ccu: goto label_3934cc;
        case 0x3934d0u: goto label_3934d0;
        case 0x3934d4u: goto label_3934d4;
        case 0x3934d8u: goto label_3934d8;
        case 0x3934dcu: goto label_3934dc;
        case 0x3934e0u: goto label_3934e0;
        case 0x3934e4u: goto label_3934e4;
        case 0x3934e8u: goto label_3934e8;
        case 0x3934ecu: goto label_3934ec;
        case 0x3934f0u: goto label_3934f0;
        case 0x3934f4u: goto label_3934f4;
        case 0x3934f8u: goto label_3934f8;
        case 0x3934fcu: goto label_3934fc;
        case 0x393500u: goto label_393500;
        case 0x393504u: goto label_393504;
        case 0x393508u: goto label_393508;
        case 0x39350cu: goto label_39350c;
        case 0x393510u: goto label_393510;
        case 0x393514u: goto label_393514;
        case 0x393518u: goto label_393518;
        case 0x39351cu: goto label_39351c;
        case 0x393520u: goto label_393520;
        case 0x393524u: goto label_393524;
        case 0x393528u: goto label_393528;
        case 0x39352cu: goto label_39352c;
        case 0x393530u: goto label_393530;
        case 0x393534u: goto label_393534;
        case 0x393538u: goto label_393538;
        case 0x39353cu: goto label_39353c;
        case 0x393540u: goto label_393540;
        case 0x393544u: goto label_393544;
        case 0x393548u: goto label_393548;
        case 0x39354cu: goto label_39354c;
        case 0x393550u: goto label_393550;
        case 0x393554u: goto label_393554;
        case 0x393558u: goto label_393558;
        case 0x39355cu: goto label_39355c;
        case 0x393560u: goto label_393560;
        case 0x393564u: goto label_393564;
        case 0x393568u: goto label_393568;
        case 0x39356cu: goto label_39356c;
        case 0x393570u: goto label_393570;
        case 0x393574u: goto label_393574;
        case 0x393578u: goto label_393578;
        case 0x39357cu: goto label_39357c;
        case 0x393580u: goto label_393580;
        case 0x393584u: goto label_393584;
        case 0x393588u: goto label_393588;
        case 0x39358cu: goto label_39358c;
        case 0x393590u: goto label_393590;
        case 0x393594u: goto label_393594;
        case 0x393598u: goto label_393598;
        case 0x39359cu: goto label_39359c;
        case 0x3935a0u: goto label_3935a0;
        case 0x3935a4u: goto label_3935a4;
        case 0x3935a8u: goto label_3935a8;
        case 0x3935acu: goto label_3935ac;
        case 0x3935b0u: goto label_3935b0;
        case 0x3935b4u: goto label_3935b4;
        case 0x3935b8u: goto label_3935b8;
        case 0x3935bcu: goto label_3935bc;
        case 0x3935c0u: goto label_3935c0;
        case 0x3935c4u: goto label_3935c4;
        case 0x3935c8u: goto label_3935c8;
        case 0x3935ccu: goto label_3935cc;
        case 0x3935d0u: goto label_3935d0;
        case 0x3935d4u: goto label_3935d4;
        case 0x3935d8u: goto label_3935d8;
        case 0x3935dcu: goto label_3935dc;
        case 0x3935e0u: goto label_3935e0;
        case 0x3935e4u: goto label_3935e4;
        case 0x3935e8u: goto label_3935e8;
        case 0x3935ecu: goto label_3935ec;
        case 0x3935f0u: goto label_3935f0;
        case 0x3935f4u: goto label_3935f4;
        case 0x3935f8u: goto label_3935f8;
        case 0x3935fcu: goto label_3935fc;
        case 0x393600u: goto label_393600;
        case 0x393604u: goto label_393604;
        case 0x393608u: goto label_393608;
        case 0x39360cu: goto label_39360c;
        case 0x393610u: goto label_393610;
        case 0x393614u: goto label_393614;
        case 0x393618u: goto label_393618;
        case 0x39361cu: goto label_39361c;
        case 0x393620u: goto label_393620;
        case 0x393624u: goto label_393624;
        case 0x393628u: goto label_393628;
        case 0x39362cu: goto label_39362c;
        case 0x393630u: goto label_393630;
        case 0x393634u: goto label_393634;
        case 0x393638u: goto label_393638;
        case 0x39363cu: goto label_39363c;
        case 0x393640u: goto label_393640;
        case 0x393644u: goto label_393644;
        case 0x393648u: goto label_393648;
        case 0x39364cu: goto label_39364c;
        case 0x393650u: goto label_393650;
        case 0x393654u: goto label_393654;
        case 0x393658u: goto label_393658;
        case 0x39365cu: goto label_39365c;
        case 0x393660u: goto label_393660;
        case 0x393664u: goto label_393664;
        case 0x393668u: goto label_393668;
        case 0x39366cu: goto label_39366c;
        case 0x393670u: goto label_393670;
        case 0x393674u: goto label_393674;
        case 0x393678u: goto label_393678;
        case 0x39367cu: goto label_39367c;
        case 0x393680u: goto label_393680;
        case 0x393684u: goto label_393684;
        case 0x393688u: goto label_393688;
        case 0x39368cu: goto label_39368c;
        case 0x393690u: goto label_393690;
        case 0x393694u: goto label_393694;
        case 0x393698u: goto label_393698;
        case 0x39369cu: goto label_39369c;
        case 0x3936a0u: goto label_3936a0;
        case 0x3936a4u: goto label_3936a4;
        case 0x3936a8u: goto label_3936a8;
        case 0x3936acu: goto label_3936ac;
        case 0x3936b0u: goto label_3936b0;
        case 0x3936b4u: goto label_3936b4;
        case 0x3936b8u: goto label_3936b8;
        case 0x3936bcu: goto label_3936bc;
        case 0x3936c0u: goto label_3936c0;
        case 0x3936c4u: goto label_3936c4;
        case 0x3936c8u: goto label_3936c8;
        case 0x3936ccu: goto label_3936cc;
        case 0x3936d0u: goto label_3936d0;
        case 0x3936d4u: goto label_3936d4;
        case 0x3936d8u: goto label_3936d8;
        case 0x3936dcu: goto label_3936dc;
        case 0x3936e0u: goto label_3936e0;
        case 0x3936e4u: goto label_3936e4;
        case 0x3936e8u: goto label_3936e8;
        case 0x3936ecu: goto label_3936ec;
        case 0x3936f0u: goto label_3936f0;
        case 0x3936f4u: goto label_3936f4;
        case 0x3936f8u: goto label_3936f8;
        case 0x3936fcu: goto label_3936fc;
        case 0x393700u: goto label_393700;
        case 0x393704u: goto label_393704;
        case 0x393708u: goto label_393708;
        case 0x39370cu: goto label_39370c;
        case 0x393710u: goto label_393710;
        case 0x393714u: goto label_393714;
        case 0x393718u: goto label_393718;
        case 0x39371cu: goto label_39371c;
        case 0x393720u: goto label_393720;
        case 0x393724u: goto label_393724;
        case 0x393728u: goto label_393728;
        case 0x39372cu: goto label_39372c;
        case 0x393730u: goto label_393730;
        case 0x393734u: goto label_393734;
        case 0x393738u: goto label_393738;
        case 0x39373cu: goto label_39373c;
        case 0x393740u: goto label_393740;
        case 0x393744u: goto label_393744;
        case 0x393748u: goto label_393748;
        case 0x39374cu: goto label_39374c;
        case 0x393750u: goto label_393750;
        case 0x393754u: goto label_393754;
        case 0x393758u: goto label_393758;
        case 0x39375cu: goto label_39375c;
        case 0x393760u: goto label_393760;
        case 0x393764u: goto label_393764;
        case 0x393768u: goto label_393768;
        case 0x39376cu: goto label_39376c;
        case 0x393770u: goto label_393770;
        case 0x393774u: goto label_393774;
        case 0x393778u: goto label_393778;
        case 0x39377cu: goto label_39377c;
        case 0x393780u: goto label_393780;
        case 0x393784u: goto label_393784;
        case 0x393788u: goto label_393788;
        case 0x39378cu: goto label_39378c;
        case 0x393790u: goto label_393790;
        case 0x393794u: goto label_393794;
        case 0x393798u: goto label_393798;
        case 0x39379cu: goto label_39379c;
        case 0x3937a0u: goto label_3937a0;
        case 0x3937a4u: goto label_3937a4;
        case 0x3937a8u: goto label_3937a8;
        case 0x3937acu: goto label_3937ac;
        case 0x3937b0u: goto label_3937b0;
        case 0x3937b4u: goto label_3937b4;
        case 0x3937b8u: goto label_3937b8;
        case 0x3937bcu: goto label_3937bc;
        case 0x3937c0u: goto label_3937c0;
        case 0x3937c4u: goto label_3937c4;
        case 0x3937c8u: goto label_3937c8;
        case 0x3937ccu: goto label_3937cc;
        case 0x3937d0u: goto label_3937d0;
        case 0x3937d4u: goto label_3937d4;
        case 0x3937d8u: goto label_3937d8;
        case 0x3937dcu: goto label_3937dc;
        case 0x3937e0u: goto label_3937e0;
        case 0x3937e4u: goto label_3937e4;
        case 0x3937e8u: goto label_3937e8;
        case 0x3937ecu: goto label_3937ec;
        case 0x3937f0u: goto label_3937f0;
        case 0x3937f4u: goto label_3937f4;
        case 0x3937f8u: goto label_3937f8;
        case 0x3937fcu: goto label_3937fc;
        case 0x393800u: goto label_393800;
        case 0x393804u: goto label_393804;
        case 0x393808u: goto label_393808;
        case 0x39380cu: goto label_39380c;
        case 0x393810u: goto label_393810;
        case 0x393814u: goto label_393814;
        case 0x393818u: goto label_393818;
        case 0x39381cu: goto label_39381c;
        case 0x393820u: goto label_393820;
        case 0x393824u: goto label_393824;
        case 0x393828u: goto label_393828;
        case 0x39382cu: goto label_39382c;
        case 0x393830u: goto label_393830;
        case 0x393834u: goto label_393834;
        case 0x393838u: goto label_393838;
        case 0x39383cu: goto label_39383c;
        case 0x393840u: goto label_393840;
        case 0x393844u: goto label_393844;
        case 0x393848u: goto label_393848;
        case 0x39384cu: goto label_39384c;
        case 0x393850u: goto label_393850;
        case 0x393854u: goto label_393854;
        case 0x393858u: goto label_393858;
        case 0x39385cu: goto label_39385c;
        case 0x393860u: goto label_393860;
        case 0x393864u: goto label_393864;
        case 0x393868u: goto label_393868;
        case 0x39386cu: goto label_39386c;
        case 0x393870u: goto label_393870;
        case 0x393874u: goto label_393874;
        case 0x393878u: goto label_393878;
        case 0x39387cu: goto label_39387c;
        case 0x393880u: goto label_393880;
        case 0x393884u: goto label_393884;
        case 0x393888u: goto label_393888;
        case 0x39388cu: goto label_39388c;
        case 0x393890u: goto label_393890;
        case 0x393894u: goto label_393894;
        case 0x393898u: goto label_393898;
        case 0x39389cu: goto label_39389c;
        case 0x3938a0u: goto label_3938a0;
        case 0x3938a4u: goto label_3938a4;
        case 0x3938a8u: goto label_3938a8;
        case 0x3938acu: goto label_3938ac;
        case 0x3938b0u: goto label_3938b0;
        case 0x3938b4u: goto label_3938b4;
        case 0x3938b8u: goto label_3938b8;
        case 0x3938bcu: goto label_3938bc;
        case 0x3938c0u: goto label_3938c0;
        case 0x3938c4u: goto label_3938c4;
        case 0x3938c8u: goto label_3938c8;
        case 0x3938ccu: goto label_3938cc;
        case 0x3938d0u: goto label_3938d0;
        case 0x3938d4u: goto label_3938d4;
        case 0x3938d8u: goto label_3938d8;
        case 0x3938dcu: goto label_3938dc;
        case 0x3938e0u: goto label_3938e0;
        case 0x3938e4u: goto label_3938e4;
        case 0x3938e8u: goto label_3938e8;
        case 0x3938ecu: goto label_3938ec;
        case 0x3938f0u: goto label_3938f0;
        case 0x3938f4u: goto label_3938f4;
        case 0x3938f8u: goto label_3938f8;
        case 0x3938fcu: goto label_3938fc;
        case 0x393900u: goto label_393900;
        case 0x393904u: goto label_393904;
        case 0x393908u: goto label_393908;
        case 0x39390cu: goto label_39390c;
        case 0x393910u: goto label_393910;
        case 0x393914u: goto label_393914;
        case 0x393918u: goto label_393918;
        case 0x39391cu: goto label_39391c;
        case 0x393920u: goto label_393920;
        case 0x393924u: goto label_393924;
        case 0x393928u: goto label_393928;
        case 0x39392cu: goto label_39392c;
        case 0x393930u: goto label_393930;
        case 0x393934u: goto label_393934;
        case 0x393938u: goto label_393938;
        case 0x39393cu: goto label_39393c;
        case 0x393940u: goto label_393940;
        case 0x393944u: goto label_393944;
        case 0x393948u: goto label_393948;
        case 0x39394cu: goto label_39394c;
        case 0x393950u: goto label_393950;
        case 0x393954u: goto label_393954;
        case 0x393958u: goto label_393958;
        case 0x39395cu: goto label_39395c;
        case 0x393960u: goto label_393960;
        case 0x393964u: goto label_393964;
        case 0x393968u: goto label_393968;
        case 0x39396cu: goto label_39396c;
        case 0x393970u: goto label_393970;
        case 0x393974u: goto label_393974;
        case 0x393978u: goto label_393978;
        case 0x39397cu: goto label_39397c;
        case 0x393980u: goto label_393980;
        case 0x393984u: goto label_393984;
        case 0x393988u: goto label_393988;
        case 0x39398cu: goto label_39398c;
        case 0x393990u: goto label_393990;
        case 0x393994u: goto label_393994;
        case 0x393998u: goto label_393998;
        case 0x39399cu: goto label_39399c;
        case 0x3939a0u: goto label_3939a0;
        case 0x3939a4u: goto label_3939a4;
        case 0x3939a8u: goto label_3939a8;
        case 0x3939acu: goto label_3939ac;
        case 0x3939b0u: goto label_3939b0;
        case 0x3939b4u: goto label_3939b4;
        case 0x3939b8u: goto label_3939b8;
        case 0x3939bcu: goto label_3939bc;
        case 0x3939c0u: goto label_3939c0;
        case 0x3939c4u: goto label_3939c4;
        case 0x3939c8u: goto label_3939c8;
        case 0x3939ccu: goto label_3939cc;
        case 0x3939d0u: goto label_3939d0;
        case 0x3939d4u: goto label_3939d4;
        case 0x3939d8u: goto label_3939d8;
        case 0x3939dcu: goto label_3939dc;
        case 0x3939e0u: goto label_3939e0;
        case 0x3939e4u: goto label_3939e4;
        case 0x3939e8u: goto label_3939e8;
        case 0x3939ecu: goto label_3939ec;
        case 0x3939f0u: goto label_3939f0;
        case 0x3939f4u: goto label_3939f4;
        case 0x3939f8u: goto label_3939f8;
        case 0x3939fcu: goto label_3939fc;
        case 0x393a00u: goto label_393a00;
        case 0x393a04u: goto label_393a04;
        case 0x393a08u: goto label_393a08;
        case 0x393a0cu: goto label_393a0c;
        case 0x393a10u: goto label_393a10;
        case 0x393a14u: goto label_393a14;
        case 0x393a18u: goto label_393a18;
        case 0x393a1cu: goto label_393a1c;
        case 0x393a20u: goto label_393a20;
        case 0x393a24u: goto label_393a24;
        case 0x393a28u: goto label_393a28;
        case 0x393a2cu: goto label_393a2c;
        case 0x393a30u: goto label_393a30;
        case 0x393a34u: goto label_393a34;
        case 0x393a38u: goto label_393a38;
        case 0x393a3cu: goto label_393a3c;
        case 0x393a40u: goto label_393a40;
        case 0x393a44u: goto label_393a44;
        case 0x393a48u: goto label_393a48;
        case 0x393a4cu: goto label_393a4c;
        case 0x393a50u: goto label_393a50;
        case 0x393a54u: goto label_393a54;
        case 0x393a58u: goto label_393a58;
        case 0x393a5cu: goto label_393a5c;
        case 0x393a60u: goto label_393a60;
        case 0x393a64u: goto label_393a64;
        case 0x393a68u: goto label_393a68;
        case 0x393a6cu: goto label_393a6c;
        case 0x393a70u: goto label_393a70;
        case 0x393a74u: goto label_393a74;
        case 0x393a78u: goto label_393a78;
        case 0x393a7cu: goto label_393a7c;
        default: break;
    }

    ctx->pc = 0x3930a0u;

label_3930a0:
    // 0x3930a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3930a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3930a4:
    // 0x3930a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3930a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3930a8:
    // 0x3930a8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3930a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3930ac:
    // 0x3930ac: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3930acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3930b0:
    // 0x3930b0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3930b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_3930b4:
    // 0x3930b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3930b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3930b8:
    // 0x3930b8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3930b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3930bc:
    // 0x3930bc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3930bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3930c0:
    // 0x3930c0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3930c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3930c4:
    // 0x3930c4: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x3930c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_3930c8:
    // 0x3930c8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3930c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3930cc:
    // 0x3930cc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3930ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3930d0:
    // 0x3930d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3930d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3930d4:
    // 0x3930d4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3930d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3930d8:
    // 0x3930d8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3930d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3930dc:
    // 0x3930dc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3930dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3930e0:
    // 0x3930e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3930e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3930e4:
    // 0x3930e4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3930e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3930e8:
    // 0x3930e8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3930e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3930ec:
    // 0x3930ec: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3930ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_3930f0:
    // 0x3930f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3930f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3930f4:
    // 0x3930f4: 0x40f809  jalr        $v0
label_3930f8:
    if (ctx->pc == 0x3930F8u) {
        ctx->pc = 0x3930F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930F4u;
        // 0x3930f8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930FCu;
        goto label_3930fc;
    }
    ctx->pc = 0x3930F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3930FCu);
        ctx->pc = 0x3930F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930F4u;
        // 0x3930f8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3930F4u, 0x3930FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3930FCu;
label_3930fc:
    // 0x3930fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_393100:
    if (ctx->pc == 0x393100u) {
        ctx->pc = 0x393100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930FCu;
        // 0x393100: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393104u;
        goto label_393104;
    }
    ctx->pc = 0x3930FCu;
    {
        const bool branch_taken_0x3930fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930FCu;
        // 0x393100: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930fc) {
            ctx->pc = 0x39310Cu;
            goto label_39310c;
        }
    }
    ctx->pc = 0x393104u;
label_393104:
    // 0x393104: 0x10000251  b           . + 4 + (0x251 << 2)
label_393108:
    if (ctx->pc == 0x393108u) {
        ctx->pc = 0x393108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393104u;
        // 0x393108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39310Cu;
        goto label_39310c;
    }
    ctx->pc = 0x393104u;
    {
        const bool branch_taken_0x393104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393104u;
        // 0x393108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393104) {
            ctx->pc = 0x393A4Cu;
            goto label_393a4c;
        }
    }
    ctx->pc = 0x39310Cu;
label_39310c:
    // 0x39310c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x39310cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_393110:
    // 0x393110: 0x11200035  beqz        $t1, . + 4 + (0x35 << 2)
label_393114:
    if (ctx->pc == 0x393114u) {
        ctx->pc = 0x393114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393110u;
        // 0x393114: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393118u;
        goto label_393118;
    }
    ctx->pc = 0x393110u;
    {
        const bool branch_taken_0x393110 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x393114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393110u;
        // 0x393114: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393110) {
            ctx->pc = 0x3931E8u;
            goto label_3931e8;
        }
    }
    ctx->pc = 0x393118u;
label_393118:
    // 0x393118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x393118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39311c:
    // 0x39311c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x39311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_393120:
    // 0x393120: 0x19200013  blez        $t1, . + 4 + (0x13 << 2)
label_393124:
    if (ctx->pc == 0x393124u) {
        ctx->pc = 0x393124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393120u;
        // 0x393124: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393128u;
        goto label_393128;
    }
    ctx->pc = 0x393120u;
    {
        const bool branch_taken_0x393120 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x393124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393120u;
        // 0x393124: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393120) {
            ctx->pc = 0x393170u;
            goto label_393170;
        }
    }
    ctx->pc = 0x393128u;
label_393128:
    // 0x393128: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_39312c:
    if (ctx->pc == 0x39312Cu) {
        ctx->pc = 0x39312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393128u;
        // 0x39312c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393130u;
        goto label_393130;
    }
    ctx->pc = 0x393128u;
    {
        const bool branch_taken_0x393128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393128u;
        // 0x39312c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393128) {
            ctx->pc = 0x393190u;
            goto label_393190;
        }
    }
    ctx->pc = 0x393130u;
label_393130:
    // 0x393130: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_393134:
    if (ctx->pc == 0x393134u) {
        ctx->pc = 0x393134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393130u;
        // 0x393134: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393138u;
        goto label_393138;
    }
    ctx->pc = 0x393130u;
    {
        const bool branch_taken_0x393130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393130) {
            ctx->pc = 0x393134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393130u;
            // 0x393134: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393174u;
            goto label_393174;
        }
    }
    ctx->pc = 0x393138u;
label_393138:
    // 0x393138: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x393138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_39313c:
    // 0x39313c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_393140:
    if (ctx->pc == 0x393140u) {
        ctx->pc = 0x393140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39313Cu;
        // 0x393140: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393144u;
        goto label_393144;
    }
    ctx->pc = 0x39313Cu;
    {
        const bool branch_taken_0x39313c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39313Cu;
        // 0x393140: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39313c) {
            ctx->pc = 0x39315Cu;
            goto label_39315c;
        }
    }
    ctx->pc = 0x393144u;
label_393144:
    // 0x393144: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x393144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_393148:
    // 0x393148: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x393148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_39314c:
    // 0x39314c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x39314cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_393150:
    // 0x393150: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x393150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393154:
    // 0x393154: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x393154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_393158:
    // 0x393158: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x393158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39315c:
    // 0x39315c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39315cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_393160:
    // 0x393160: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x393160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_393164:
    // 0x393164: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x393164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_393168:
    // 0x393168: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x393168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_39316c:
    // 0x39316c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x39316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_393170:
    // 0x393170: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x393170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_393174:
    // 0x393174: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x393174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_393178:
    // 0x393178: 0x269402b  sltu        $t0, $s3, $t1
    ctx->pc = 0x393178u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_39317c:
    // 0x39317c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_393180:
    // 0x393180: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x393180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_393184:
    // 0x393184: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x393184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_393188:
    // 0x393188: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_39318c:
    if (ctx->pc == 0x39318Cu) {
        ctx->pc = 0x39318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393188u;
        // 0x39318c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393190u;
        goto label_393190;
    }
    ctx->pc = 0x393188u;
    {
        const bool branch_taken_0x393188 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x39318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393188u;
        // 0x39318c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393188) {
            ctx->pc = 0x3931E8u;
            goto label_3931e8;
        }
    }
    ctx->pc = 0x393190u;
label_393190:
    // 0x393190: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x393190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393194:
    // 0x393194: 0x0  nop
    ctx->pc = 0x393194u;
    // NOP
label_393198:
    // 0x393198: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x393198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39319c:
    // 0x39319c: 0x24e30014  addiu       $v1, $a3, 0x14
    ctx->pc = 0x39319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_3931a0:
    // 0x3931a0: 0x24e40028  addiu       $a0, $a3, 0x28
    ctx->pc = 0x3931a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
label_3931a4:
    // 0x3931a4: 0x24e5003c  addiu       $a1, $a3, 0x3C
    ctx->pc = 0x3931a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
label_3931a8:
    // 0x3931a8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3931a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3931ac:
    // 0x3931ac: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3931acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3931b0:
    // 0x3931b0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3931b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3931b4:
    // 0x3931b4: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x3931b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_3931b8:
    // 0x3931b8: 0x269402b  sltu        $t0, $s3, $t1
    ctx->pc = 0x3931b8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3931bc:
    // 0x3931bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3931bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3931c0:
    // 0x3931c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3931c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3931c4:
    // 0x3931c4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3931c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_3931c8:
    // 0x3931c8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3931c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3931cc:
    // 0x3931cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3931ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3931d0:
    // 0x3931d0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3931d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_3931d4:
    // 0x3931d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3931d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3931d8:
    // 0x3931d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3931d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3931dc:
    // 0x3931dc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x3931dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_3931e0:
    // 0x3931e0: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
label_3931e4:
    if (ctx->pc == 0x3931E4u) {
        ctx->pc = 0x3931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931E0u;
        // 0x3931e4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931E8u;
        goto label_3931e8;
    }
    ctx->pc = 0x3931E0u;
    {
        const bool branch_taken_0x3931e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931E0u;
        // 0x3931e4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931e0) {
            ctx->pc = 0x393198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393198;
        }
    }
    ctx->pc = 0x3931E8u;
label_3931e8:
    // 0x3931e8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3931e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3931ec:
    // 0x3931ec: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x3931ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_3931f0:
    // 0x3931f0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3931f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3931f4:
    // 0x3931f4: 0x24e70458  addiu       $a3, $a3, 0x458
    ctx->pc = 0x3931f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1112));
label_3931f8:
    // 0x3931f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3931f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3931fc:
    // 0x3931fc: 0xc0bbc9c  jal         func_2EF270
label_393200:
    if (ctx->pc == 0x393200u) {
        ctx->pc = 0x393200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931FCu;
        // 0x393200: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393204u;
        goto label_393204;
    }
    ctx->pc = 0x3931FCu;
    SET_GPR_U32(ctx, 31, 0x393204u);
    ctx->pc = 0x393200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3931FCu;
    // 0x393200: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x3931FCu, 0x393204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393204u;
label_393204:
    // 0x393204: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x393204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_393208:
    // 0x393208: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x393208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39320c:
    // 0x39320c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
label_393210:
    if (ctx->pc == 0x393210u) {
        ctx->pc = 0x393210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39320Cu;
        // 0x393210: 0x3c0a0062  lui         $t2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393214u;
        goto label_393214;
    }
    ctx->pc = 0x39320Cu;
    {
        const bool branch_taken_0x39320c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39320Cu;
        // 0x393210: 0x3c0a0062  lui         $t2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39320c) {
            ctx->pc = 0x393340u;
            goto label_393340;
        }
    }
    ctx->pc = 0x393214u;
label_393214:
    // 0x393214: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x393214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_393218:
    // 0x393218: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x393218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39321c:
    // 0x39321c: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x39321cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_393220:
    // 0x393220: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x393220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_393224:
    // 0x393224: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_393228:
    if (ctx->pc == 0x393228u) {
        ctx->pc = 0x393228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393224u;
        // 0x393228: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39322Cu;
        goto label_39322c;
    }
    ctx->pc = 0x393224u;
    {
        const bool branch_taken_0x393224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393224u;
        // 0x393228: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393224) {
            ctx->pc = 0x393340u;
            goto label_393340;
        }
    }
    ctx->pc = 0x39322Cu;
label_39322c:
    // 0x39322c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x39322cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_393230:
    // 0x393230: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x393230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_393234:
    // 0x393234: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x393234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_393238:
    // 0x393238: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x393238u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_39323c:
    // 0x39323c: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x39323cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_393240:
    // 0x393240: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_393244:
    if (ctx->pc == 0x393244u) {
        ctx->pc = 0x393244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393240u;
        // 0x393244: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393248u;
        goto label_393248;
    }
    ctx->pc = 0x393240u;
    {
        const bool branch_taken_0x393240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x393244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393240u;
        // 0x393244: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393240) {
            ctx->pc = 0x3932A4u;
            goto label_3932a4;
        }
    }
    ctx->pc = 0x393248u;
label_393248:
    // 0x393248: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_39324c:
    if (ctx->pc == 0x39324Cu) {
        ctx->pc = 0x39324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393248u;
        // 0x39324c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393250u;
        goto label_393250;
    }
    ctx->pc = 0x393248u;
    {
        const bool branch_taken_0x393248 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393248u;
        // 0x39324c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393248) {
            ctx->pc = 0x3932C8u;
            goto label_3932c8;
        }
    }
    ctx->pc = 0x393250u;
label_393250:
    // 0x393250: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_393254:
    if (ctx->pc == 0x393254u) {
        ctx->pc = 0x393254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393250u;
        // 0x393254: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393258u;
        goto label_393258;
    }
    ctx->pc = 0x393250u;
    {
        const bool branch_taken_0x393250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393250) {
            ctx->pc = 0x393254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393250u;
            // 0x393254: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3932A8u;
            goto label_3932a8;
        }
    }
    ctx->pc = 0x393258u;
label_393258:
    // 0x393258: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x393258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_39325c:
    // 0x39325c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_393260:
    if (ctx->pc == 0x393260u) {
        ctx->pc = 0x393260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39325Cu;
        // 0x393260: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393264u;
        goto label_393264;
    }
    ctx->pc = 0x39325Cu;
    {
        const bool branch_taken_0x39325c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39325c) {
            ctx->pc = 0x393260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39325Cu;
            // 0x393260: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39328Cu;
            goto label_39328c;
        }
    }
    ctx->pc = 0x393264u;
label_393264:
    // 0x393264: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x393264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_393268:
    // 0x393268: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x393268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39326c:
    // 0x39326c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x39326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_393270:
    // 0x393270: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_393274:
    if (ctx->pc == 0x393274u) {
        ctx->pc = 0x393274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393270u;
        // 0x393274: 0x8fa9000c  lw          $t1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393278u;
        goto label_393278;
    }
    ctx->pc = 0x393270u;
    {
        const bool branch_taken_0x393270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x393274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393270u;
        // 0x393274: 0x8fa9000c  lw          $t1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393270) {
            ctx->pc = 0x393280u;
            goto label_393280;
        }
    }
    ctx->pc = 0x393278u;
label_393278:
    // 0x393278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39327c:
    // 0x39327c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x39327cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_393280:
    // 0x393280: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x393280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_393284:
    // 0x393284: 0x25260008  addiu       $a2, $t1, 0x8
    ctx->pc = 0x393284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_393288:
    // 0x393288: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x393288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39328c:
    // 0x39328c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x39328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_393290:
    // 0x393290: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_393294:
    if (ctx->pc == 0x393294u) {
        ctx->pc = 0x393294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393290u;
        // 0x393294: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393298u;
        goto label_393298;
    }
    ctx->pc = 0x393290u;
    {
        const bool branch_taken_0x393290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x393294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393290u;
        // 0x393294: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393290) {
            ctx->pc = 0x3932A0u;
            goto label_3932a0;
        }
    }
    ctx->pc = 0x393298u;
label_393298:
    // 0x393298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39329c:
    // 0x39329c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39329cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3932a0:
    // 0x3932a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3932a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3932a4:
    // 0x3932a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3932a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3932a8:
    // 0x3932a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3932a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3932ac:
    // 0x3932ac: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_3932b0:
    if (ctx->pc == 0x3932B0u) {
        ctx->pc = 0x3932B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932ACu;
        // 0x3932b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3932B4u;
        goto label_3932b4;
    }
    ctx->pc = 0x3932ACu;
    {
        const bool branch_taken_0x3932ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3932B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932ACu;
        // 0x3932b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932ac) {
            ctx->pc = 0x3932BCu;
            goto label_3932bc;
        }
    }
    ctx->pc = 0x3932B4u;
label_3932b4:
    // 0x3932b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3932b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3932b8:
    // 0x3932b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3932b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3932bc:
    // 0x3932bc: 0x267102b  sltu        $v0, $s3, $a3
    ctx->pc = 0x3932bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3932c0:
    // 0x3932c0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3932c4:
    if (ctx->pc == 0x3932C4u) {
        ctx->pc = 0x3932C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932C0u;
        // 0x3932c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3932C8u;
        goto label_3932c8;
    }
    ctx->pc = 0x3932C0u;
    {
        const bool branch_taken_0x3932c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3932C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932C0u;
        // 0x3932c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932c0) {
            ctx->pc = 0x39333Cu;
            goto label_39333c;
        }
    }
    ctx->pc = 0x3932C8u;
label_3932c8:
    // 0x3932c8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3932c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3932cc:
    // 0x3932cc: 0x0  nop
    ctx->pc = 0x3932ccu;
    // NOP
label_3932d0:
    // 0x3932d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3932d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3932d4:
    // 0x3932d4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3932d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3932d8:
    // 0x3932d8: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_3932dc:
    if (ctx->pc == 0x3932DCu) {
        ctx->pc = 0x3932DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932D8u;
        // 0x3932dc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3932E0u;
        goto label_3932e0;
    }
    ctx->pc = 0x3932D8u;
    {
        const bool branch_taken_0x3932d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3932d8) {
            ctx->pc = 0x3932DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3932D8u;
            // 0x3932dc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3932ECu;
            goto label_3932ec;
        }
    }
    ctx->pc = 0x3932E0u;
label_3932e0:
    // 0x3932e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3932e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3932e4:
    // 0x3932e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3932e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3932e8:
    // 0x3932e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3932e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3932ec:
    // 0x3932ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3932ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3932f0:
    // 0x3932f0: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_3932f4:
    if (ctx->pc == 0x3932F4u) {
        ctx->pc = 0x3932F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932F0u;
        // 0x3932f4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3932F8u;
        goto label_3932f8;
    }
    ctx->pc = 0x3932F0u;
    {
        const bool branch_taken_0x3932f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3932f0) {
            ctx->pc = 0x3932F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3932F0u;
            // 0x3932f4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393304u;
            goto label_393304;
        }
    }
    ctx->pc = 0x3932F8u;
label_3932f8:
    // 0x3932f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3932f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3932fc:
    // 0x3932fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3932fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_393300:
    // 0x393300: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x393300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_393304:
    // 0x393304: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x393304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_393308:
    // 0x393308: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_39330c:
    if (ctx->pc == 0x39330Cu) {
        ctx->pc = 0x39330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393308u;
        // 0x39330c: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393310u;
        goto label_393310;
    }
    ctx->pc = 0x393308u;
    {
        const bool branch_taken_0x393308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x393308) {
            ctx->pc = 0x39330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393308u;
            // 0x39330c: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39331Cu;
            goto label_39331c;
        }
    }
    ctx->pc = 0x393310u;
label_393310:
    // 0x393310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393314:
    // 0x393314: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x393314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_393318:
    // 0x393318: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x393318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39331c:
    // 0x39331c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x39331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_393320:
    // 0x393320: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_393324:
    if (ctx->pc == 0x393324u) {
        ctx->pc = 0x393324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393320u;
        // 0x393324: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393328u;
        goto label_393328;
    }
    ctx->pc = 0x393320u;
    {
        const bool branch_taken_0x393320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x393324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393320u;
        // 0x393324: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393320) {
            ctx->pc = 0x393330u;
            goto label_393330;
        }
    }
    ctx->pc = 0x393328u;
label_393328:
    // 0x393328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39332c:
    // 0x39332c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39332cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_393330:
    // 0x393330: 0x267102b  sltu        $v0, $s3, $a3
    ctx->pc = 0x393330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_393334:
    // 0x393334: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_393338:
    if (ctx->pc == 0x393338u) {
        ctx->pc = 0x393338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393334u;
        // 0x393338: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39333Cu;
        goto label_39333c;
    }
    ctx->pc = 0x393334u;
    {
        const bool branch_taken_0x393334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393334u;
        // 0x393338: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393334) {
            ctx->pc = 0x3932D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3932d0;
        }
    }
    ctx->pc = 0x39333Cu;
label_39333c:
    // 0x39333c: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x39333cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_393340:
    // 0x393340: 0x3c050101  lui         $a1, 0x101
    ctx->pc = 0x393340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)257 << 16));
label_393344:
    // 0x393344: 0x2550e880  addiu       $s0, $t2, -0x1780
    ctx->pc = 0x393344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
label_393348:
    // 0x393348: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x393348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_39334c:
    // 0x39334c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x39334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_393350:
    // 0x393350: 0x40f809  jalr        $v0
label_393354:
    if (ctx->pc == 0x393354u) {
        ctx->pc = 0x393354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393350u;
        // 0x393354: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393358u;
        goto label_393358;
    }
    ctx->pc = 0x393350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393358u);
        ctx->pc = 0x393354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393350u;
        // 0x393354: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393350u, 0x393358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393358u;
label_393358:
    // 0x393358: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x393358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_39335c:
    // 0x39335c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x39335cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_393360:
    // 0x393360: 0x2440018  mult        $zero, $s2, $a0
    ctx->pc = 0x393360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_393364:
    // 0x393364: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x393364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_393368:
    // 0x393368: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x393368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39336c:
    // 0x39336c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39336cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393370:
    // 0x393370: 0x2012  mflo        $a0
    ctx->pc = 0x393370u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_393374:
    // 0x393374: 0x40f809  jalr        $v0
label_393378:
    if (ctx->pc == 0x393378u) {
        ctx->pc = 0x393378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393374u;
        // 0x393378: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39337Cu;
        goto label_39337c;
    }
    ctx->pc = 0x393374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39337Cu);
        ctx->pc = 0x393378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393374u;
        // 0x393378: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393374u, 0x39337Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39337Cu;
label_39337c:
    // 0x39337c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x39337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_393380:
    // 0x393380: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x393380u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393384:
    // 0x393384: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x393384u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_393388:
    // 0x393388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x393388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39338c:
    // 0x39338c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x39338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_393390:
    // 0x393390: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x393390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_393394:
    // 0x393394: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x393394u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_393398:
    // 0x393398: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x393398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39339c:
    // 0x39339c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_3933a0:
    if (ctx->pc == 0x3933A0u) {
        ctx->pc = 0x3933A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39339Cu;
        // 0x3933a0: 0xafc30008  sw          $v1, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933A4u;
        goto label_3933a4;
    }
    ctx->pc = 0x39339Cu;
    {
        const bool branch_taken_0x39339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3933A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39339Cu;
        // 0x3933a0: 0xafc30008  sw          $v1, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39339c) {
            ctx->pc = 0x393414u;
            goto label_393414;
        }
    }
    ctx->pc = 0x3933A4u;
label_3933a4:
    // 0x3933a4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3933a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3933a8:
    // 0x3933a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3933ac:
    if (ctx->pc == 0x3933ACu) {
        ctx->pc = 0x3933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933A8u;
        // 0x3933ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933B0u;
        goto label_3933b0;
    }
    ctx->pc = 0x3933A8u;
    {
        const bool branch_taken_0x3933a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933A8u;
        // 0x3933ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933a8) {
            ctx->pc = 0x393414u;
            goto label_393414;
        }
    }
    ctx->pc = 0x3933B0u;
label_3933b0:
    // 0x3933b0: 0x27c50004  addiu       $a1, $fp, 0x4
    ctx->pc = 0x3933b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_3933b4:
    // 0x3933b4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3933b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3933b8:
    // 0x3933b8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3933b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3933bc:
    // 0x3933bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3933bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3933c0:
    // 0x3933c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3933c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3933c4:
    // 0x3933c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3933c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3933c8:
    // 0x3933c8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3933c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3933cc:
    // 0x3933cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3933ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3933d0:
    // 0x3933d0: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_3933d4:
    if (ctx->pc == 0x3933D4u) {
        ctx->pc = 0x3933D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933D0u;
        // 0x3933d4: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933D8u;
        goto label_3933d8;
    }
    ctx->pc = 0x3933D0u;
    {
        const bool branch_taken_0x3933d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3933D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933D0u;
        // 0x3933d4: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933d0) {
            ctx->pc = 0x3933FCu;
            goto label_3933fc;
        }
    }
    ctx->pc = 0x3933D8u;
label_3933d8:
    // 0x3933d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3933d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3933dc:
    // 0x3933dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3933dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3933e0:
    // 0x3933e0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3933e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_3933e4:
    // 0x3933e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3933e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3933e8:
    // 0x3933e8: 0xacb4000c  sw          $s4, 0xC($a1)
    ctx->pc = 0x3933e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 20));
label_3933ec:
    // 0x3933ec: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3933ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3933f0:
    // 0x3933f0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3933f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_3933f4:
    // 0x3933f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3933f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3933f8:
    // 0x3933f8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3933f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3933fc:
    // 0x3933fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3933fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_393400:
    // 0x393400: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x393400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_393404:
    // 0x393404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x393404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_393408:
    // 0x393408: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x393408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39340c:
    // 0x39340c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_393410:
    if (ctx->pc == 0x393410u) {
        ctx->pc = 0x393410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39340Cu;
        // 0x393410: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393414u;
        goto label_393414;
    }
    ctx->pc = 0x39340Cu;
    {
        const bool branch_taken_0x39340c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39340Cu;
        // 0x393410: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39340c) {
            ctx->pc = 0x3933B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3933b8;
        }
    }
    ctx->pc = 0x393414u;
label_393414:
    // 0x393414: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x393414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_393418:
    // 0x393418: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x393418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39341c:
    // 0x39341c: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x39341cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_393420:
    // 0x393420: 0x8fb6000c  lw          $s6, 0xC($sp)
    ctx->pc = 0x393420u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_393424:
    // 0x393424: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x393424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_393428:
    // 0x393428: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x393428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_39342c:
    // 0x39342c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x39342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_393430:
    // 0x393430: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x393430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_393434:
    // 0x393434: 0x34e70502  ori         $a3, $a3, 0x502
    ctx->pc = 0x393434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
label_393438:
    // 0x393438: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x393438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39343c:
    // 0x39343c: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x39343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_393440:
    // 0x393440: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x393440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_393444:
    // 0x393444: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x393444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_393448:
    // 0x393448: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x393448u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39344c:
    // 0x39344c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x39344cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_393450:
    // 0x393450: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_393454:
    if (ctx->pc == 0x393454u) {
        ctx->pc = 0x393454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393450u;
        // 0x393454: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393458u;
        goto label_393458;
    }
    ctx->pc = 0x393450u;
    {
        const bool branch_taken_0x393450 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x393450) {
            ctx->pc = 0x393454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393450u;
            // 0x393454: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x393458u;
            goto label_393458;
        }
    }
    ctx->pc = 0x393458u;
label_393458:
    // 0x393458: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x393458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39345c:
    // 0x39345c: 0xa8001b  divu        $zero, $a1, $t0
    ctx->pc = 0x39345cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_393460:
    // 0x393460: 0x2812  mflo        $a1
    ctx->pc = 0x393460u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_393464:
    // 0x393464: 0xc103fb2  jal         func_40FEC8
label_393468:
    if (ctx->pc == 0x393468u) {
        ctx->pc = 0x393468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393464u;
        // 0x393468: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39346Cu;
        goto label_39346c;
    }
    ctx->pc = 0x393464u;
    SET_GPR_U32(ctx, 31, 0x39346Cu);
    ctx->pc = 0x393468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393464u;
    // 0x393468: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FEC8u, 0x393464u, 0x39346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39346Cu;
label_39346c:
    // 0x39346c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_393470:
    // 0x393470: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x393470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_393474:
    // 0x393474: 0x2464e880  addiu       $a0, $v1, -0x1780
    ctx->pc = 0x393474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_393478:
    // 0x393478: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x393478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_39347c:
    // 0x39347c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39347cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_393480:
    // 0x393480: 0x124000a1  beqz        $s2, . + 4 + (0xA1 << 2)
label_393484:
    if (ctx->pc == 0x393484u) {
        ctx->pc = 0x393484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393480u;
        // 0x393484: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393488u;
        goto label_393488;
    }
    ctx->pc = 0x393480u;
    {
        const bool branch_taken_0x393480 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x393484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393480u;
        // 0x393484: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393480) {
            ctx->pc = 0x393708u;
            goto label_393708;
        }
    }
    ctx->pc = 0x393488u;
label_393488:
    // 0x393488: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x393488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_39348c:
    // 0x39348c: 0x0  nop
    ctx->pc = 0x39348cu;
    // NOP
label_393490:
    // 0x393490: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x393490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_393494:
    // 0x393494: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x393494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_393498:
    // 0x393498: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x393498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_39349c:
    // 0x39349c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39349cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3934a0:
    // 0x3934a0: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x3934a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3934a4:
    // 0x3934a4: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x3934a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3934a8:
    // 0x3934a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3934a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3934ac:
    // 0x3934ac: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3934acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3934b0:
    // 0x3934b0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3934b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3934b4:
    // 0x3934b4: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x3934b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3934b8:
    // 0x3934b8: 0x2012  mflo        $a0
    ctx->pc = 0x3934b8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3934bc:
    // 0x3934bc: 0x40f809  jalr        $v0
label_3934c0:
    if (ctx->pc == 0x3934C0u) {
        ctx->pc = 0x3934C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934BCu;
        // 0x3934c0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3934C4u;
        goto label_3934c4;
    }
    ctx->pc = 0x3934BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3934C4u);
        ctx->pc = 0x3934C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934BCu;
        // 0x3934c0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3934BCu, 0x3934C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3934C4u;
label_3934c4:
    // 0x3934c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3934c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3934c8:
    // 0x3934c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3934c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3934cc:
    // 0x3934cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3934d0:
    if (ctx->pc == 0x3934D0u) {
        ctx->pc = 0x3934D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934CCu;
        // 0x3934d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3934D4u;
        goto label_3934d4;
    }
    ctx->pc = 0x3934CCu;
    {
        const bool branch_taken_0x3934cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3934D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934CCu;
        // 0x3934d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934cc) {
            ctx->pc = 0x393530u;
            goto label_393530;
        }
    }
    ctx->pc = 0x3934D4u;
label_3934d4:
    // 0x3934d4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3934d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3934d8:
    // 0x3934d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3934d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3934dc:
    // 0x3934dc: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x3934dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3934e0:
    // 0x3934e0: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x3934e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3934e4:
    // 0x3934e4: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x3934e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3934e8:
    // 0x3934e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3934e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3934ec:
    // 0x3934ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3934ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3934f0:
    // 0x3934f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3934f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3934f4:
    // 0x3934f4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x3934f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_3934f8:
    // 0x3934f8: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x3934f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3934fc:
    // 0x3934fc: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x3934fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_393500:
    // 0x393500: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x393500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_393504:
    // 0x393504: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x393504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_393508:
    // 0x393508: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x393508u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39350c:
    // 0x39350c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x39350cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_393510:
    // 0x393510: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x393510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_393514:
    // 0x393514: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x393514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_393518:
    // 0x393518: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x393518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39351c:
    // 0x39351c: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x39351cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
label_393520:
    // 0x393520: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x393520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_393524:
    // 0x393524: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x393524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_393528:
    // 0x393528: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_39352c:
    if (ctx->pc == 0x39352Cu) {
        ctx->pc = 0x39352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393528u;
        // 0x39352c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393530u;
        goto label_393530;
    }
    ctx->pc = 0x393528u;
    {
        const bool branch_taken_0x393528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393528u;
        // 0x39352c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393528) {
            ctx->pc = 0x3934E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3934e8;
        }
    }
    ctx->pc = 0x393530u;
label_393530:
    // 0x393530: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x393530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_393534:
    // 0x393534: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x393534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_393538:
    // 0x393538: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x393538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_39353c:
    // 0x39353c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_393540:
    // 0x393540: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x393540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_393544:
    // 0x393544: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x393544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_393548:
    // 0x393548: 0xc0e448c  jal         func_391230
label_39354c:
    if (ctx->pc == 0x39354Cu) {
        ctx->pc = 0x39354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393548u;
        // 0x39354c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393550u;
        goto label_393550;
    }
    ctx->pc = 0x393548u;
    SET_GPR_U32(ctx, 31, 0x393550u);
    ctx->pc = 0x39354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393548u;
    // 0x39354c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391230u, 0x393548u, 0x393550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393550u;
label_393550:
    // 0x393550: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x393550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_393554:
    // 0x393554: 0xc0e4b42  jal         func_392D08
label_393558:
    if (ctx->pc == 0x393558u) {
        ctx->pc = 0x393558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393554u;
        // 0x393558: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39355Cu;
        goto label_39355c;
    }
    ctx->pc = 0x393554u;
    SET_GPR_U32(ctx, 31, 0x39355Cu);
    ctx->pc = 0x393558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393554u;
    // 0x393558: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392D08u, 0x393554u, 0x39355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39355Cu;
label_39355c:
    // 0x39355c: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x39355cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_393560:
    // 0x393560: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
label_393564:
    if (ctx->pc == 0x393564u) {
        ctx->pc = 0x393564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393560u;
        // 0x393564: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393568u;
        goto label_393568;
    }
    ctx->pc = 0x393560u;
    {
        const bool branch_taken_0x393560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x393564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393560u;
        // 0x393564: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393560) {
            ctx->pc = 0x393690u;
            goto label_393690;
        }
    }
    ctx->pc = 0x393568u;
label_393568:
    // 0x393568: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x393568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39356c:
    // 0x39356c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x39356cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_393570:
    // 0x393570: 0x2477e880  addiu       $s7, $v1, -0x1780
    ctx->pc = 0x393570u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_393574:
    // 0x393574: 0x5e9821  addu        $s3, $v0, $fp
    ctx->pc = 0x393574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_393578:
    // 0x393578: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x393578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39357c:
    // 0x39357c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39357cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_393580:
    // 0x393580: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x393580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_393584:
    // 0x393584: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x393584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_393588:
    // 0x393588: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x393588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_39358c:
    // 0x39358c: 0x40f809  jalr        $v0
label_393590:
    if (ctx->pc == 0x393590u) {
        ctx->pc = 0x393590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39358Cu;
        // 0x393590: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393594u;
        goto label_393594;
    }
    ctx->pc = 0x39358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393594u);
        ctx->pc = 0x393590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39358Cu;
        // 0x393590: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39358Cu, 0x393594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393594u;
label_393594:
    // 0x393594: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x393594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_393598:
    // 0x393598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x393598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39359c:
    // 0x39359c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x39359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3935a0:
    // 0x3935a0: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x3935a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3935a4:
    // 0x3935a4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3935a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3935a8:
    // 0x3935a8: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x3935a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3935ac:
    // 0x3935ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3935acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3935b0:
    // 0x3935b0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3935b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_3935b4:
    // 0x3935b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3935b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3935b8:
    // 0x3935b8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3935b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3935bc:
    // 0x3935bc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_3935c0:
    if (ctx->pc == 0x3935C0u) {
        ctx->pc = 0x3935C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935BCu;
        // 0x3935c0: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935C4u;
        goto label_3935c4;
    }
    ctx->pc = 0x3935BCu;
    {
        const bool branch_taken_0x3935bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3935C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935BCu;
        // 0x3935c0: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3935bc) {
            ctx->pc = 0x393674u;
            goto label_393674;
        }
    }
    ctx->pc = 0x3935C4u;
label_3935c4:
    // 0x3935c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3935c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3935c8:
    // 0x3935c8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x3935c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3935cc:
    // 0x3935cc: 0x31450003  andi        $a1, $t2, 0x3
    ctx->pc = 0x3935ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
label_3935d0:
    // 0x3935d0: 0x19400012  blez        $t2, . + 4 + (0x12 << 2)
label_3935d4:
    if (ctx->pc == 0x3935D4u) {
        ctx->pc = 0x3935D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935D0u;
        // 0x3935d4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935D8u;
        goto label_3935d8;
    }
    ctx->pc = 0x3935D0u;
    {
        const bool branch_taken_0x3935d0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3935D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935D0u;
        // 0x3935d4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3935d0) {
            ctx->pc = 0x39361Cu;
            goto label_39361c;
        }
    }
    ctx->pc = 0x3935D8u;
label_3935d8:
    // 0x3935d8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_3935dc:
    if (ctx->pc == 0x3935DCu) {
        ctx->pc = 0x3935DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935D8u;
        // 0x3935dc: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935E0u;
        goto label_3935e0;
    }
    ctx->pc = 0x3935D8u;
    {
        const bool branch_taken_0x3935d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3935DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935D8u;
        // 0x3935dc: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3935d8) {
            ctx->pc = 0x393638u;
            goto label_393638;
        }
    }
    ctx->pc = 0x3935E0u;
label_3935e0:
    // 0x3935e0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3935e4:
    if (ctx->pc == 0x3935E4u) {
        ctx->pc = 0x3935E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935E0u;
        // 0x3935e4: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935E8u;
        goto label_3935e8;
    }
    ctx->pc = 0x3935E0u;
    {
        const bool branch_taken_0x3935e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3935e0) {
            ctx->pc = 0x3935E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3935E0u;
            // 0x3935e4: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393620u;
            goto label_393620;
        }
    }
    ctx->pc = 0x3935E8u;
label_3935e8:
    // 0x3935e8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3935e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_3935ec:
    // 0x3935ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3935f0:
    if (ctx->pc == 0x3935F0u) {
        ctx->pc = 0x3935F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935ECu;
        // 0x3935f0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3935F4u;
        goto label_3935f4;
    }
    ctx->pc = 0x3935ECu;
    {
        const bool branch_taken_0x3935ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3935ec) {
            ctx->pc = 0x3935F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3935ECu;
            // 0x3935f0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39360Cu;
            goto label_39360c;
        }
    }
    ctx->pc = 0x3935F4u;
label_3935f4:
    // 0x3935f4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x3935f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3935f8:
    // 0x3935f8: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x3935f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3935fc:
    // 0x3935fc: 0x2627000e  addiu       $a3, $s1, 0xE
    ctx->pc = 0x3935fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_393600:
    // 0x393600: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x393600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393604:
    // 0x393604: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x393604u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_393608:
    // 0x393608: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x393608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_39360c:
    // 0x39360c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39360cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_393610:
    // 0x393610: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x393610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_393614:
    // 0x393614: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x393614u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_393618:
    // 0x393618: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x393618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_39361c:
    // 0x39361c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x39361cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_393620:
    // 0x393620: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x393620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_393624:
    // 0x393624: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x393624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_393628:
    // 0x393628: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x393628u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_39362c:
    // 0x39362c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x39362cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_393630:
    // 0x393630: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
label_393634:
    if (ctx->pc == 0x393634u) {
        ctx->pc = 0x393634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393630u;
        // 0x393634: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393638u;
        goto label_393638;
    }
    ctx->pc = 0x393630u;
    {
        const bool branch_taken_0x393630 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x393634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393630u;
        // 0x393634: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393630) {
            ctx->pc = 0x393674u;
            goto label_393674;
        }
    }
    ctx->pc = 0x393638u;
label_393638:
    // 0x393638: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x393638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39363c:
    // 0x39363c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x39363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_393640:
    // 0x393640: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x393640u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_393644:
    // 0x393644: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x393644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_393648:
    // 0x393648: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x393648u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_39364c:
    // 0x39364c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x39364cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_393650:
    // 0x393650: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x393650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_393654:
    // 0x393654: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x393654u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_393658:
    // 0x393658: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x393658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_39365c:
    // 0x39365c: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x39365cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
label_393660:
    // 0x393660: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x393660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_393664:
    // 0x393664: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x393664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_393668:
    // 0x393668: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x393668u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_39366c:
    // 0x39366c: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
label_393670:
    if (ctx->pc == 0x393670u) {
        ctx->pc = 0x393670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39366Cu;
        // 0x393670: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393674u;
        goto label_393674;
    }
    ctx->pc = 0x39366Cu;
    {
        const bool branch_taken_0x39366c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x393670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39366Cu;
        // 0x393670: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39366c) {
            ctx->pc = 0x393640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393640;
        }
    }
    ctx->pc = 0x393674u;
label_393674:
    // 0x393674: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x393674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_393678:
    // 0x393678: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x393678u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_39367c:
    // 0x39367c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x39367cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_393680:
    // 0x393680: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x393680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_393684:
    // 0x393684: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x393684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_393688:
    // 0x393688: 0x1600ffbb  bnez        $s0, . + 4 + (-0x45 << 2)
label_39368c:
    if (ctx->pc == 0x39368Cu) {
        ctx->pc = 0x39368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393688u;
        // 0x39368c: 0xafab0010  sw          $t3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393690u;
        goto label_393690;
    }
    ctx->pc = 0x393688u;
    {
        const bool branch_taken_0x393688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393688u;
        // 0x39368c: 0xafab0010  sw          $t3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393688) {
            ctx->pc = 0x393578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393578;
        }
    }
    ctx->pc = 0x393690u;
label_393690:
    // 0x393690: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x393690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_393694:
    // 0x393694: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_393698:
    if (ctx->pc == 0x393698u) {
        ctx->pc = 0x393698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393694u;
        // 0x393698: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39369Cu;
        goto label_39369c;
    }
    ctx->pc = 0x393694u;
    {
        const bool branch_taken_0x393694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393694u;
        // 0x393698: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393694) {
            ctx->pc = 0x3936E4u;
            goto label_3936e4;
        }
    }
    ctx->pc = 0x39369Cu;
label_39369c:
    // 0x39369c: 0x24d1e880  addiu       $s1, $a2, -0x1780
    ctx->pc = 0x39369cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_3936a0:
    // 0x3936a0: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x3936a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3936a4:
    // 0x3936a4: 0x0  nop
    ctx->pc = 0x3936a4u;
    // NOP
label_3936a8:
    // 0x3936a8: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x3936a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3936ac:
    // 0x3936ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3936acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3936b0:
    // 0x3936b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3936b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3936b4:
    // 0x3936b4: 0xa0f809  jalr        $a1
label_3936b8:
    if (ctx->pc == 0x3936B8u) {
        ctx->pc = 0x3936B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936B4u;
        // 0x3936b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3936BCu;
        goto label_3936bc;
    }
    ctx->pc = 0x3936B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3936BCu);
        ctx->pc = 0x3936B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936B4u;
        // 0x3936b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3936B4u, 0x3936BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3936BCu;
label_3936bc:
    // 0x3936bc: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x3936bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_3936c0:
    // 0x3936c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3936c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3936c4:
    // 0x3936c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3936c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3936c8:
    // 0x3936c8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3936c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3936cc:
    // 0x3936cc: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x3936ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_3936d0:
    // 0x3936d0: 0x40f809  jalr        $v0
label_3936d4:
    if (ctx->pc == 0x3936D4u) {
        ctx->pc = 0x3936D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936D0u;
        // 0x3936d4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3936D8u;
        goto label_3936d8;
    }
    ctx->pc = 0x3936D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3936D8u);
        ctx->pc = 0x3936D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936D0u;
        // 0x3936d4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3936D0u, 0x3936D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3936D8u;
label_3936d8:
    // 0x3936d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3936d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3936dc:
    // 0x3936dc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_3936e0:
    if (ctx->pc == 0x3936E0u) {
        ctx->pc = 0x3936E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936DCu;
        // 0x3936e0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3936E4u;
        goto label_3936e4;
    }
    ctx->pc = 0x3936DCu;
    {
        const bool branch_taken_0x3936dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3936E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936DCu;
        // 0x3936e0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3936dc) {
            ctx->pc = 0x3936A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3936a8;
        }
    }
    ctx->pc = 0x3936E4u;
label_3936e4:
    // 0x3936e4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3936e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3936e8:
    // 0x3936e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3936e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3936ec:
    // 0x3936ec: 0x24e7e880  addiu       $a3, $a3, -0x1780
    ctx->pc = 0x3936ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_3936f0:
    // 0x3936f0: 0x8ce3010c  lw          $v1, 0x10C($a3)
    ctx->pc = 0x3936f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 268)));
label_3936f4:
    // 0x3936f4: 0x60f809  jalr        $v1
label_3936f8:
    if (ctx->pc == 0x3936F8u) {
        ctx->pc = 0x3936F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936F4u;
        // 0x3936f8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3936FCu;
        goto label_3936fc;
    }
    ctx->pc = 0x3936F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3936FCu);
        ctx->pc = 0x3936F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936F4u;
        // 0x3936f8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3936F4u, 0x3936FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3936FCu;
label_3936fc:
    // 0x3936fc: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x3936fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_393700:
    // 0x393700: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
label_393704:
    if (ctx->pc == 0x393704u) {
        ctx->pc = 0x393704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393700u;
        // 0x393704: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393708u;
        goto label_393708;
    }
    ctx->pc = 0x393700u;
    {
        const bool branch_taken_0x393700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393700u;
        // 0x393704: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393700) {
            ctx->pc = 0x393490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393490;
        }
    }
    ctx->pc = 0x393708u;
label_393708:
    // 0x393708: 0x8f82bd50  lw          $v0, -0x42B0($gp)
    ctx->pc = 0x393708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_39370c:
    // 0x39370c: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x39370cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_393710:
    // 0x393710: 0x2530e880  addiu       $s0, $t1, -0x1780
    ctx->pc = 0x393710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
label_393714:
    // 0x393714: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x393714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393718:
    // 0x393718: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x393718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39371c:
    // 0x39371c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39371cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393720:
    // 0x393720: 0xc104284  jal         func_410A10
label_393724:
    if (ctx->pc == 0x393724u) {
        ctx->pc = 0x393724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393720u;
        // 0x393724: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393728u;
        goto label_393728;
    }
    ctx->pc = 0x393720u;
    SET_GPR_U32(ctx, 31, 0x393728u);
    ctx->pc = 0x393724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393720u;
    // 0x393724: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x393720u, 0x393728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393728u;
label_393728:
    // 0x393728: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x393728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_39372c:
    // 0x39372c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x39372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_393730:
    // 0x393730: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x393730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_393734:
    // 0x393734: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x393734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_393738:
    // 0x393738: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_39373c:
    if (ctx->pc == 0x39373Cu) {
        ctx->pc = 0x39373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393738u;
        // 0x39373c: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393740u;
        goto label_393740;
    }
    ctx->pc = 0x393738u;
    {
        const bool branch_taken_0x393738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393738u;
        // 0x39373c: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393738) {
            ctx->pc = 0x39384Cu;
            goto label_39384c;
        }
    }
    ctx->pc = 0x393740u;
label_393740:
    // 0x393740: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x393740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_393744:
    // 0x393744: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
label_393748:
    if (ctx->pc == 0x393748u) {
        ctx->pc = 0x393748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393744u;
        // 0x393748: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39374Cu;
        goto label_39374c;
    }
    ctx->pc = 0x393744u;
    {
        const bool branch_taken_0x393744 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x393748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393744u;
        // 0x393748: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393744) {
            ctx->pc = 0x3937A4u;
            goto label_3937a4;
        }
    }
    ctx->pc = 0x39374Cu;
label_39374c:
    // 0x39374c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_393750:
    if (ctx->pc == 0x393750u) {
        ctx->pc = 0x393750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39374Cu;
        // 0x393750: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393754u;
        goto label_393754;
    }
    ctx->pc = 0x39374Cu;
    {
        const bool branch_taken_0x39374c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39374Cu;
        // 0x393750: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39374c) {
            ctx->pc = 0x3937D0u;
            goto label_3937d0;
        }
    }
    ctx->pc = 0x393754u;
label_393754:
    // 0x393754: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_393758:
    if (ctx->pc == 0x393758u) {
        ctx->pc = 0x393758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393754u;
        // 0x393758: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39375Cu;
        goto label_39375c;
    }
    ctx->pc = 0x393754u;
    {
        const bool branch_taken_0x393754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393754) {
            ctx->pc = 0x393758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393754u;
            // 0x393758: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3937A8u;
            goto label_3937a8;
        }
    }
    ctx->pc = 0x39375Cu;
label_39375c:
    // 0x39375c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39375cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_393760:
    // 0x393760: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_393764:
    if (ctx->pc == 0x393764u) {
        ctx->pc = 0x393764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393760u;
        // 0x393764: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393768u;
        goto label_393768;
    }
    ctx->pc = 0x393760u;
    {
        const bool branch_taken_0x393760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393760) {
            ctx->pc = 0x393764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393760u;
            // 0x393764: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393788u;
            goto label_393788;
        }
    }
    ctx->pc = 0x393768u;
label_393768:
    // 0x393768: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x393768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39376c:
    // 0x39376c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39376cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393770:
    // 0x393770: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x393770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_393774:
    // 0x393774: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x393774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_393778:
    // 0x393778: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x393778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_39377c:
    // 0x39377c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x39377cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_393780:
    // 0x393780: 0x248a001c  addiu       $t2, $a0, 0x1C
    ctx->pc = 0x393780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_393784:
    // 0x393784: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x393784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_393788:
    // 0x393788: 0x2545000c  addiu       $a1, $t2, 0xC
    ctx->pc = 0x393788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_39378c:
    // 0x39378c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x39378cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_393790:
    // 0x393790: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x393790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_393794:
    // 0x393794: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x393794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_393798:
    // 0x393798: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x393798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_39379c:
    // 0x39379c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x39379cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3937a0:
    // 0x3937a0: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x3937a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3937a4:
    // 0x3937a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3937a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3937a8:
    // 0x3937a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3937a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3937ac:
    // 0x3937ac: 0x2544000c  addiu       $a0, $t2, 0xC
    ctx->pc = 0x3937acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_3937b0:
    // 0x3937b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3937b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3937b4:
    // 0x3937b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3937b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3937b8:
    // 0x3937b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3937b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3937bc:
    // 0x3937bc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3937bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3937c0:
    // 0x3937c0: 0x263582b  sltu        $t3, $s3, $v1
    ctx->pc = 0x3937c0u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3937c4:
    // 0x3937c4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3937c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3937c8:
    // 0x3937c8: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
label_3937cc:
    if (ctx->pc == 0x3937CCu) {
        ctx->pc = 0x3937CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937C8u;
        // 0x3937cc: 0x835021  addu        $t2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3937D0u;
        goto label_3937d0;
    }
    ctx->pc = 0x3937C8u;
    {
        const bool branch_taken_0x3937c8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3937CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937C8u;
        // 0x3937cc: 0x835021  addu        $t2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3937c8) {
            ctx->pc = 0x39384Cu;
            goto label_39384c;
        }
    }
    ctx->pc = 0x3937D0u;
label_3937d0:
    // 0x3937d0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3937d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3937d4:
    // 0x3937d4: 0x0  nop
    ctx->pc = 0x3937d4u;
    // NOP
label_3937d8:
    // 0x3937d8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3937d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3937dc:
    // 0x3937dc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3937dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3937e0:
    // 0x3937e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3937e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3937e4:
    // 0x3937e4: 0x2546000c  addiu       $a2, $t2, 0xC
    ctx->pc = 0x3937e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_3937e8:
    // 0x3937e8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x3937e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_3937ec:
    // 0x3937ec: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x3937ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3937f0:
    // 0x3937f0: 0x264582b  sltu        $t3, $s3, $a0
    ctx->pc = 0x3937f0u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3937f4:
    // 0x3937f4: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x3937f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3937f8:
    // 0x3937f8: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x3937f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3937fc:
    // 0x3937fc: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3937fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_393800:
    // 0x393800: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x393800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_393804:
    // 0x393804: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x393804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_393808:
    // 0x393808: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x393808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_39380c:
    // 0x39380c: 0x2543000c  addiu       $v1, $t2, 0xC
    ctx->pc = 0x39380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_393810:
    // 0x393810: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x393810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_393814:
    // 0x393814: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x393814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_393818:
    // 0x393818: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x393818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39381c:
    // 0x39381c: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x39381cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_393820:
    // 0x393820: 0x2543000c  addiu       $v1, $t2, 0xC
    ctx->pc = 0x393820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_393824:
    // 0x393824: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x393824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_393828:
    // 0x393828: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x393828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39382c:
    // 0x39382c: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x39382cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_393830:
    // 0x393830: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x393830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_393834:
    // 0x393834: 0x2543000c  addiu       $v1, $t2, 0xC
    ctx->pc = 0x393834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_393838:
    // 0x393838: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x393838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_39383c:
    // 0x39383c: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x39383cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_393840:
    // 0x393840: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x393840u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_393844:
    // 0x393844: 0x1560ffe4  bnez        $t3, . + 4 + (-0x1C << 2)
label_393848:
    if (ctx->pc == 0x393848u) {
        ctx->pc = 0x393848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393844u;
        // 0x393848: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39384Cu;
        goto label_39384c;
    }
    ctx->pc = 0x393844u;
    {
        const bool branch_taken_0x393844 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x393848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393844u;
        // 0x393848: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393844) {
            ctx->pc = 0x3937D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3937d8;
        }
    }
    ctx->pc = 0x39384Cu;
label_39384c:
    // 0x39384c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x39384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_393850:
    // 0x393850: 0xc0e410c  jal         func_390430
label_393854:
    if (ctx->pc == 0x393854u) {
        ctx->pc = 0x393854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393850u;
        // 0x393854: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393858u;
        goto label_393858;
    }
    ctx->pc = 0x393850u;
    SET_GPR_U32(ctx, 31, 0x393858u);
    ctx->pc = 0x393854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393850u;
    // 0x393854: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390430u, 0x393850u, 0x393858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393858u;
label_393858:
    // 0x393858: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x393858u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39385c:
    // 0x39385c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x39385cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_393860:
    // 0x393860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x393860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393864:
    // 0x393864: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x393864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_393868:
    // 0x393868: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x393868u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_39386c:
    // 0x39386c: 0x24a6e880  addiu       $a2, $a1, -0x1780
    ctx->pc = 0x39386cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_393870:
    // 0x393870: 0xa6e70004  sh          $a3, 0x4($s7)
    ctx->pc = 0x393870u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 7));
label_393874:
    // 0x393874: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x393874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_393878:
    // 0x393878: 0x8f82bd50  lw          $v0, -0x42B0($gp)
    ctx->pc = 0x393878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_39387c:
    // 0x39387c: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x39387cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_393880:
    // 0x393880: 0xaef20008  sw          $s2, 0x8($s7)
    ctx->pc = 0x393880u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 18));
label_393884:
    // 0x393884: 0x26f10010  addiu       $s1, $s7, 0x10
    ctx->pc = 0x393884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_393888:
    // 0x393888: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x393888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_39388c:
    // 0x39388c: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x39388cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
label_393890:
    // 0x393890: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x393890u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_393894:
    // 0x393894: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x393894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_393898:
    // 0x393898: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x393898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_39389c:
    // 0x39389c: 0xa6e50006  sh          $a1, 0x6($s7)
    ctx->pc = 0x39389cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 5));
label_3938a0:
    // 0x3938a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3938a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3938a4:
    // 0x3938a4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3938a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3938a8:
    // 0x3938a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3938a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3938ac:
    // 0x3938ac: 0x10e0005b  beqz        $a3, . + 4 + (0x5B << 2)
label_3938b0:
    if (ctx->pc == 0x3938B0u) {
        ctx->pc = 0x3938B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938ACu;
        // 0x3938b0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938B4u;
        goto label_3938b4;
    }
    ctx->pc = 0x3938ACu;
    {
        const bool branch_taken_0x3938ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3938B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938ACu;
        // 0x3938b0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3938ac) {
            ctx->pc = 0x393A1Cu;
            goto label_393a1c;
        }
    }
    ctx->pc = 0x3938B4u;
label_3938b4:
    // 0x3938b4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3938b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3938b8:
    // 0x3938b8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3938b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3938bc:
    // 0x3938bc: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
label_3938c0:
    if (ctx->pc == 0x3938C0u) {
        ctx->pc = 0x3938C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938BCu;
        // 0x3938c0: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938C4u;
        goto label_3938c4;
    }
    ctx->pc = 0x3938BCu;
    {
        const bool branch_taken_0x3938bc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3938C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938BCu;
        // 0x3938c0: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3938bc) {
            ctx->pc = 0x3938CCu;
            goto label_3938cc;
        }
    }
    ctx->pc = 0x3938C4u;
label_3938c4:
    // 0x3938c4: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_3938c8:
    if (ctx->pc == 0x3938C8u) {
        ctx->pc = 0x3938C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938C4u;
        // 0x3938c8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938CCu;
        goto label_3938cc;
    }
    ctx->pc = 0x3938C4u;
    {
        const bool branch_taken_0x3938c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3938c4) {
            ctx->pc = 0x3938C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3938C4u;
            // 0x3938c8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393944u;
            goto label_393944;
        }
    }
    ctx->pc = 0x3938CCu;
label_3938cc:
    // 0x3938cc: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x3938ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3938d0:
    // 0x3938d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3938d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3938d4:
    // 0x3938d4: 0xaef20010  sw          $s2, 0x10($s7)
    ctx->pc = 0x3938d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 18));
label_3938d8:
    // 0x3938d8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3938d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3938dc:
    // 0x3938dc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3938dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3938e0:
    // 0x3938e0: 0x26f0001c  addiu       $s0, $s7, 0x1C
    ctx->pc = 0x3938e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
label_3938e4:
    // 0x3938e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3938e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3938e8:
    // 0x3938e8: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3938e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3938ec:
    // 0x3938ec: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3938ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_3938f0:
    // 0x3938f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3938f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3938f4:
    // 0x3938f4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3938f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3938f8:
    // 0x3938f8: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x3938f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
label_3938fc:
    // 0x3938fc: 0xc0bb778  jal         func_2EDDE0
label_393900:
    if (ctx->pc == 0x393900u) {
        ctx->pc = 0x393900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938FCu;
        // 0x393900: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393904u;
        goto label_393904;
    }
    ctx->pc = 0x3938FCu;
    SET_GPR_U32(ctx, 31, 0x393904u);
    ctx->pc = 0x393900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3938FCu;
    // 0x393900: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3938FCu, 0x393904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393904u;
label_393904:
    // 0x393904: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x393904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_393908:
    // 0x393908: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x393908u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_39390c:
    // 0x39390c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x39390cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_393910:
    // 0x393910: 0x254ae880  addiu       $t2, $t2, -0x1780
    ctx->pc = 0x393910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
label_393914:
    // 0x393914: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x393914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_393918:
    // 0x393918: 0x8d42010c  lw          $v0, 0x10C($t2)
    ctx->pc = 0x393918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 268)));
label_39391c:
    // 0x39391c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x39391cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_393920:
    // 0x393920: 0x40f809  jalr        $v0
label_393924:
    if (ctx->pc == 0x393924u) {
        ctx->pc = 0x393924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393920u;
        // 0x393924: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393928u;
        goto label_393928;
    }
    ctx->pc = 0x393920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393928u);
        ctx->pc = 0x393924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393920u;
        // 0x393924: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393920u, 0x393928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393928u;
label_393928:
    // 0x393928: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x393928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39392c:
    // 0x39392c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x39392cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_393930:
    // 0x393930: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x393930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_393934:
    // 0x393934: 0x267102b  sltu        $v0, $s3, $a3
    ctx->pc = 0x393934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_393938:
    // 0x393938: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_39393c:
    if (ctx->pc == 0x39393Cu) {
        ctx->pc = 0x39393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393938u;
        // 0x39393c: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393940u;
        goto label_393940;
    }
    ctx->pc = 0x393938u;
    {
        const bool branch_taken_0x393938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393938u;
        // 0x39393c: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393938) {
            ctx->pc = 0x393A1Cu;
            goto label_393a1c;
        }
    }
    ctx->pc = 0x393940u;
label_393940:
    // 0x393940: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x393940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393944:
    // 0x393944: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x393944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_393948:
    // 0x393948: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x393948u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39394c:
    // 0x39394c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x39394cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393950:
    // 0x393950: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x393950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393954:
    // 0x393954: 0x0  nop
    ctx->pc = 0x393954u;
    // NOP
label_393958:
    // 0x393958: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x393958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39395c:
    // 0x39395c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393960:
    // 0x393960: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x393960u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_393964:
    // 0x393964: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x393964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_393968:
    // 0x393968: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x393968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_39396c:
    // 0x39396c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x39396cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_393970:
    // 0x393970: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x393970u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_393974:
    // 0x393974: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x393974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_393978:
    // 0x393978: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x393978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_39397c:
    // 0x39397c: 0xaec70008  sw          $a3, 0x8($s6)
    ctx->pc = 0x39397cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 7));
label_393980:
    // 0x393980: 0xc0bb778  jal         func_2EDDE0
label_393984:
    if (ctx->pc == 0x393984u) {
        ctx->pc = 0x393984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393980u;
        // 0x393984: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393988u;
        goto label_393988;
    }
    ctx->pc = 0x393980u;
    SET_GPR_U32(ctx, 31, 0x393988u);
    ctx->pc = 0x393984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393980u;
    // 0x393984: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x393980u, 0x393988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393988u;
label_393988:
    // 0x393988: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x393988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39398c:
    // 0x39398c: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x39398cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_393990:
    // 0x393990: 0x2529e880  addiu       $t1, $t1, -0x1780
    ctx->pc = 0x393990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
label_393994:
    // 0x393994: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x393994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_393998:
    // 0x393998: 0x8d22010c  lw          $v0, 0x10C($t1)
    ctx->pc = 0x393998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 268)));
label_39399c:
    // 0x39399c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x39399cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3939a0:
    // 0x3939a0: 0x40f809  jalr        $v0
label_3939a4:
    if (ctx->pc == 0x3939A4u) {
        ctx->pc = 0x3939A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3939A0u;
        // 0x3939a4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3939A8u;
        goto label_3939a8;
    }
    ctx->pc = 0x3939A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3939A8u);
        ctx->pc = 0x3939A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3939A0u;
        // 0x3939a4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3939A0u, 0x3939A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3939A8u;
label_3939a8:
    // 0x3939a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3939a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3939ac:
    // 0x3939ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3939acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3939b0:
    // 0x3939b0: 0xae92000c  sw          $s2, 0xC($s4)
    ctx->pc = 0x3939b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 18));
label_3939b4:
    // 0x3939b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3939b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3939b8:
    // 0x3939b8: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x3939b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_3939bc:
    // 0x3939bc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x3939bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3939c0:
    // 0x3939c0: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x3939c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_3939c4:
    // 0x3939c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3939c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3939c8:
    // 0x3939c8: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x3939c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_3939cc:
    // 0x3939cc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x3939ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3939d0:
    // 0x3939d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3939d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3939d4:
    // 0x3939d4: 0xaec70014  sw          $a3, 0x14($s6)
    ctx->pc = 0x3939d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 7));
label_3939d8:
    // 0x3939d8: 0xc0bb778  jal         func_2EDDE0
label_3939dc:
    if (ctx->pc == 0x3939DCu) {
        ctx->pc = 0x3939DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3939D8u;
        // 0x3939dc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3939E0u;
        goto label_3939e0;
    }
    ctx->pc = 0x3939D8u;
    SET_GPR_U32(ctx, 31, 0x3939E0u);
    ctx->pc = 0x3939DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3939D8u;
    // 0x3939dc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3939D8u, 0x3939E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3939E0u;
label_3939e0:
    // 0x3939e0: 0x26d60018  addiu       $s6, $s6, 0x18
    ctx->pc = 0x3939e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_3939e4:
    // 0x3939e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3939e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3939e8:
    // 0x3939e8: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x3939e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_3939ec:
    // 0x3939ec: 0x254ae880  addiu       $t2, $t2, -0x1780
    ctx->pc = 0x3939ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
label_3939f0:
    // 0x3939f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3939f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3939f4:
    // 0x3939f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3939f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3939f8:
    // 0x3939f8: 0x8d43010c  lw          $v1, 0x10C($t2)
    ctx->pc = 0x3939f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 268)));
label_3939fc:
    // 0x3939fc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3939fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_393a00:
    // 0x393a00: 0x60f809  jalr        $v1
label_393a04:
    if (ctx->pc == 0x393A04u) {
        ctx->pc = 0x393A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A00u;
        // 0x393a04: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A08u;
        goto label_393a08;
    }
    ctx->pc = 0x393A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x393A08u);
        ctx->pc = 0x393A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A00u;
        // 0x393a04: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393A00u, 0x393A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393A08u;
label_393a08:
    // 0x393a08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x393a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_393a0c:
    // 0x393a0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x393a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_393a10:
    // 0x393a10: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x393a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_393a14:
    // 0x393a14: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_393a18:
    if (ctx->pc == 0x393A18u) {
        ctx->pc = 0x393A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A14u;
        // 0x393a18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A1Cu;
        goto label_393a1c;
    }
    ctx->pc = 0x393A14u;
    {
        const bool branch_taken_0x393a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A14u;
        // 0x393a18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a14) {
            ctx->pc = 0x393958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393958;
        }
    }
    ctx->pc = 0x393A1Cu;
label_393a1c:
    // 0x393a1c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x393a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_393a20:
    // 0x393a20: 0x2490e880  addiu       $s0, $a0, -0x1780
    ctx->pc = 0x393a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_393a24:
    // 0x393a24: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x393a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_393a28:
    // 0x393a28: 0x40f809  jalr        $v0
label_393a2c:
    if (ctx->pc == 0x393A2Cu) {
        ctx->pc = 0x393A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A28u;
        // 0x393a2c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A30u;
        goto label_393a30;
    }
    ctx->pc = 0x393A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393A30u);
        ctx->pc = 0x393A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A28u;
        // 0x393a2c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393A28u, 0x393A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393A30u;
label_393a30:
    // 0x393a30: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x393a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_393a34:
    // 0x393a34: 0x60f809  jalr        $v1
label_393a38:
    if (ctx->pc == 0x393A38u) {
        ctx->pc = 0x393A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A34u;
        // 0x393a38: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A3Cu;
        goto label_393a3c;
    }
    ctx->pc = 0x393A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x393A3Cu);
        ctx->pc = 0x393A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A34u;
        // 0x393a38: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393A34u, 0x393A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393A3Cu;
label_393a3c:
    // 0x393a3c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x393a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_393a40:
    // 0x393a40: 0x40f809  jalr        $v0
label_393a44:
    if (ctx->pc == 0x393A44u) {
        ctx->pc = 0x393A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A40u;
        // 0x393a44: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A48u;
        goto label_393a48;
    }
    ctx->pc = 0x393A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393A48u);
        ctx->pc = 0x393A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A40u;
        // 0x393a44: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393A40u, 0x393A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393A48u;
label_393a48:
    // 0x393a48: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x393a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_393a4c:
    // 0x393a4c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x393a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_393a50:
    // 0x393a50: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x393a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_393a54:
    // 0x393a54: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x393a54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_393a58:
    // 0x393a58: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x393a58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_393a5c:
    // 0x393a5c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x393a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_393a60:
    // 0x393a60: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x393a60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_393a64:
    // 0x393a64: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x393a64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_393a68:
    // 0x393a68: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x393a68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_393a6c:
    // 0x393a6c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x393a6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_393a70:
    // 0x393a70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x393a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_393a74:
    // 0x393a74: 0x3e00008  jr          $ra
label_393a78:
    if (ctx->pc == 0x393A78u) {
        ctx->pc = 0x393A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A74u;
        // 0x393a78: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393A7Cu;
        goto label_393a7c;
    }
    ctx->pc = 0x393A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A74u;
        // 0x393a78: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393A7Cu;
label_393a7c:
    // 0x393a7c: 0x0  nop
    ctx->pc = 0x393a7cu;
    // NOP
    ctx->pc = 0x393a80u;
}
