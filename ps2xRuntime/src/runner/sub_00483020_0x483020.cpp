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

// Function: sub_00483020
// Address: 0x483020 - 0x483810
void sub_00483020_0x483020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483020_0x483020");
#endif

    switch (ctx->pc) {
        case 0x483020u: goto label_483020;
        case 0x483024u: goto label_483024;
        case 0x483028u: goto label_483028;
        case 0x48302cu: goto label_48302c;
        case 0x483030u: goto label_483030;
        case 0x483034u: goto label_483034;
        case 0x483038u: goto label_483038;
        case 0x48303cu: goto label_48303c;
        case 0x483040u: goto label_483040;
        case 0x483044u: goto label_483044;
        case 0x483048u: goto label_483048;
        case 0x48304cu: goto label_48304c;
        case 0x483050u: goto label_483050;
        case 0x483054u: goto label_483054;
        case 0x483058u: goto label_483058;
        case 0x48305cu: goto label_48305c;
        case 0x483060u: goto label_483060;
        case 0x483064u: goto label_483064;
        case 0x483068u: goto label_483068;
        case 0x48306cu: goto label_48306c;
        case 0x483070u: goto label_483070;
        case 0x483074u: goto label_483074;
        case 0x483078u: goto label_483078;
        case 0x48307cu: goto label_48307c;
        case 0x483080u: goto label_483080;
        case 0x483084u: goto label_483084;
        case 0x483088u: goto label_483088;
        case 0x48308cu: goto label_48308c;
        case 0x483090u: goto label_483090;
        case 0x483094u: goto label_483094;
        case 0x483098u: goto label_483098;
        case 0x48309cu: goto label_48309c;
        case 0x4830a0u: goto label_4830a0;
        case 0x4830a4u: goto label_4830a4;
        case 0x4830a8u: goto label_4830a8;
        case 0x4830acu: goto label_4830ac;
        case 0x4830b0u: goto label_4830b0;
        case 0x4830b4u: goto label_4830b4;
        case 0x4830b8u: goto label_4830b8;
        case 0x4830bcu: goto label_4830bc;
        case 0x4830c0u: goto label_4830c0;
        case 0x4830c4u: goto label_4830c4;
        case 0x4830c8u: goto label_4830c8;
        case 0x4830ccu: goto label_4830cc;
        case 0x4830d0u: goto label_4830d0;
        case 0x4830d4u: goto label_4830d4;
        case 0x4830d8u: goto label_4830d8;
        case 0x4830dcu: goto label_4830dc;
        case 0x4830e0u: goto label_4830e0;
        case 0x4830e4u: goto label_4830e4;
        case 0x4830e8u: goto label_4830e8;
        case 0x4830ecu: goto label_4830ec;
        case 0x4830f0u: goto label_4830f0;
        case 0x4830f4u: goto label_4830f4;
        case 0x4830f8u: goto label_4830f8;
        case 0x4830fcu: goto label_4830fc;
        case 0x483100u: goto label_483100;
        case 0x483104u: goto label_483104;
        case 0x483108u: goto label_483108;
        case 0x48310cu: goto label_48310c;
        case 0x483110u: goto label_483110;
        case 0x483114u: goto label_483114;
        case 0x483118u: goto label_483118;
        case 0x48311cu: goto label_48311c;
        case 0x483120u: goto label_483120;
        case 0x483124u: goto label_483124;
        case 0x483128u: goto label_483128;
        case 0x48312cu: goto label_48312c;
        case 0x483130u: goto label_483130;
        case 0x483134u: goto label_483134;
        case 0x483138u: goto label_483138;
        case 0x48313cu: goto label_48313c;
        case 0x483140u: goto label_483140;
        case 0x483144u: goto label_483144;
        case 0x483148u: goto label_483148;
        case 0x48314cu: goto label_48314c;
        case 0x483150u: goto label_483150;
        case 0x483154u: goto label_483154;
        case 0x483158u: goto label_483158;
        case 0x48315cu: goto label_48315c;
        case 0x483160u: goto label_483160;
        case 0x483164u: goto label_483164;
        case 0x483168u: goto label_483168;
        case 0x48316cu: goto label_48316c;
        case 0x483170u: goto label_483170;
        case 0x483174u: goto label_483174;
        case 0x483178u: goto label_483178;
        case 0x48317cu: goto label_48317c;
        case 0x483180u: goto label_483180;
        case 0x483184u: goto label_483184;
        case 0x483188u: goto label_483188;
        case 0x48318cu: goto label_48318c;
        case 0x483190u: goto label_483190;
        case 0x483194u: goto label_483194;
        case 0x483198u: goto label_483198;
        case 0x48319cu: goto label_48319c;
        case 0x4831a0u: goto label_4831a0;
        case 0x4831a4u: goto label_4831a4;
        case 0x4831a8u: goto label_4831a8;
        case 0x4831acu: goto label_4831ac;
        case 0x4831b0u: goto label_4831b0;
        case 0x4831b4u: goto label_4831b4;
        case 0x4831b8u: goto label_4831b8;
        case 0x4831bcu: goto label_4831bc;
        case 0x4831c0u: goto label_4831c0;
        case 0x4831c4u: goto label_4831c4;
        case 0x4831c8u: goto label_4831c8;
        case 0x4831ccu: goto label_4831cc;
        case 0x4831d0u: goto label_4831d0;
        case 0x4831d4u: goto label_4831d4;
        case 0x4831d8u: goto label_4831d8;
        case 0x4831dcu: goto label_4831dc;
        case 0x4831e0u: goto label_4831e0;
        case 0x4831e4u: goto label_4831e4;
        case 0x4831e8u: goto label_4831e8;
        case 0x4831ecu: goto label_4831ec;
        case 0x4831f0u: goto label_4831f0;
        case 0x4831f4u: goto label_4831f4;
        case 0x4831f8u: goto label_4831f8;
        case 0x4831fcu: goto label_4831fc;
        case 0x483200u: goto label_483200;
        case 0x483204u: goto label_483204;
        case 0x483208u: goto label_483208;
        case 0x48320cu: goto label_48320c;
        case 0x483210u: goto label_483210;
        case 0x483214u: goto label_483214;
        case 0x483218u: goto label_483218;
        case 0x48321cu: goto label_48321c;
        case 0x483220u: goto label_483220;
        case 0x483224u: goto label_483224;
        case 0x483228u: goto label_483228;
        case 0x48322cu: goto label_48322c;
        case 0x483230u: goto label_483230;
        case 0x483234u: goto label_483234;
        case 0x483238u: goto label_483238;
        case 0x48323cu: goto label_48323c;
        case 0x483240u: goto label_483240;
        case 0x483244u: goto label_483244;
        case 0x483248u: goto label_483248;
        case 0x48324cu: goto label_48324c;
        case 0x483250u: goto label_483250;
        case 0x483254u: goto label_483254;
        case 0x483258u: goto label_483258;
        case 0x48325cu: goto label_48325c;
        case 0x483260u: goto label_483260;
        case 0x483264u: goto label_483264;
        case 0x483268u: goto label_483268;
        case 0x48326cu: goto label_48326c;
        case 0x483270u: goto label_483270;
        case 0x483274u: goto label_483274;
        case 0x483278u: goto label_483278;
        case 0x48327cu: goto label_48327c;
        case 0x483280u: goto label_483280;
        case 0x483284u: goto label_483284;
        case 0x483288u: goto label_483288;
        case 0x48328cu: goto label_48328c;
        case 0x483290u: goto label_483290;
        case 0x483294u: goto label_483294;
        case 0x483298u: goto label_483298;
        case 0x48329cu: goto label_48329c;
        case 0x4832a0u: goto label_4832a0;
        case 0x4832a4u: goto label_4832a4;
        case 0x4832a8u: goto label_4832a8;
        case 0x4832acu: goto label_4832ac;
        case 0x4832b0u: goto label_4832b0;
        case 0x4832b4u: goto label_4832b4;
        case 0x4832b8u: goto label_4832b8;
        case 0x4832bcu: goto label_4832bc;
        case 0x4832c0u: goto label_4832c0;
        case 0x4832c4u: goto label_4832c4;
        case 0x4832c8u: goto label_4832c8;
        case 0x4832ccu: goto label_4832cc;
        case 0x4832d0u: goto label_4832d0;
        case 0x4832d4u: goto label_4832d4;
        case 0x4832d8u: goto label_4832d8;
        case 0x4832dcu: goto label_4832dc;
        case 0x4832e0u: goto label_4832e0;
        case 0x4832e4u: goto label_4832e4;
        case 0x4832e8u: goto label_4832e8;
        case 0x4832ecu: goto label_4832ec;
        case 0x4832f0u: goto label_4832f0;
        case 0x4832f4u: goto label_4832f4;
        case 0x4832f8u: goto label_4832f8;
        case 0x4832fcu: goto label_4832fc;
        case 0x483300u: goto label_483300;
        case 0x483304u: goto label_483304;
        case 0x483308u: goto label_483308;
        case 0x48330cu: goto label_48330c;
        case 0x483310u: goto label_483310;
        case 0x483314u: goto label_483314;
        case 0x483318u: goto label_483318;
        case 0x48331cu: goto label_48331c;
        case 0x483320u: goto label_483320;
        case 0x483324u: goto label_483324;
        case 0x483328u: goto label_483328;
        case 0x48332cu: goto label_48332c;
        case 0x483330u: goto label_483330;
        case 0x483334u: goto label_483334;
        case 0x483338u: goto label_483338;
        case 0x48333cu: goto label_48333c;
        case 0x483340u: goto label_483340;
        case 0x483344u: goto label_483344;
        case 0x483348u: goto label_483348;
        case 0x48334cu: goto label_48334c;
        case 0x483350u: goto label_483350;
        case 0x483354u: goto label_483354;
        case 0x483358u: goto label_483358;
        case 0x48335cu: goto label_48335c;
        case 0x483360u: goto label_483360;
        case 0x483364u: goto label_483364;
        case 0x483368u: goto label_483368;
        case 0x48336cu: goto label_48336c;
        case 0x483370u: goto label_483370;
        case 0x483374u: goto label_483374;
        case 0x483378u: goto label_483378;
        case 0x48337cu: goto label_48337c;
        case 0x483380u: goto label_483380;
        case 0x483384u: goto label_483384;
        case 0x483388u: goto label_483388;
        case 0x48338cu: goto label_48338c;
        case 0x483390u: goto label_483390;
        case 0x483394u: goto label_483394;
        case 0x483398u: goto label_483398;
        case 0x48339cu: goto label_48339c;
        case 0x4833a0u: goto label_4833a0;
        case 0x4833a4u: goto label_4833a4;
        case 0x4833a8u: goto label_4833a8;
        case 0x4833acu: goto label_4833ac;
        case 0x4833b0u: goto label_4833b0;
        case 0x4833b4u: goto label_4833b4;
        case 0x4833b8u: goto label_4833b8;
        case 0x4833bcu: goto label_4833bc;
        case 0x4833c0u: goto label_4833c0;
        case 0x4833c4u: goto label_4833c4;
        case 0x4833c8u: goto label_4833c8;
        case 0x4833ccu: goto label_4833cc;
        case 0x4833d0u: goto label_4833d0;
        case 0x4833d4u: goto label_4833d4;
        case 0x4833d8u: goto label_4833d8;
        case 0x4833dcu: goto label_4833dc;
        case 0x4833e0u: goto label_4833e0;
        case 0x4833e4u: goto label_4833e4;
        case 0x4833e8u: goto label_4833e8;
        case 0x4833ecu: goto label_4833ec;
        case 0x4833f0u: goto label_4833f0;
        case 0x4833f4u: goto label_4833f4;
        case 0x4833f8u: goto label_4833f8;
        case 0x4833fcu: goto label_4833fc;
        case 0x483400u: goto label_483400;
        case 0x483404u: goto label_483404;
        case 0x483408u: goto label_483408;
        case 0x48340cu: goto label_48340c;
        case 0x483410u: goto label_483410;
        case 0x483414u: goto label_483414;
        case 0x483418u: goto label_483418;
        case 0x48341cu: goto label_48341c;
        case 0x483420u: goto label_483420;
        case 0x483424u: goto label_483424;
        case 0x483428u: goto label_483428;
        case 0x48342cu: goto label_48342c;
        case 0x483430u: goto label_483430;
        case 0x483434u: goto label_483434;
        case 0x483438u: goto label_483438;
        case 0x48343cu: goto label_48343c;
        case 0x483440u: goto label_483440;
        case 0x483444u: goto label_483444;
        case 0x483448u: goto label_483448;
        case 0x48344cu: goto label_48344c;
        case 0x483450u: goto label_483450;
        case 0x483454u: goto label_483454;
        case 0x483458u: goto label_483458;
        case 0x48345cu: goto label_48345c;
        case 0x483460u: goto label_483460;
        case 0x483464u: goto label_483464;
        case 0x483468u: goto label_483468;
        case 0x48346cu: goto label_48346c;
        case 0x483470u: goto label_483470;
        case 0x483474u: goto label_483474;
        case 0x483478u: goto label_483478;
        case 0x48347cu: goto label_48347c;
        case 0x483480u: goto label_483480;
        case 0x483484u: goto label_483484;
        case 0x483488u: goto label_483488;
        case 0x48348cu: goto label_48348c;
        case 0x483490u: goto label_483490;
        case 0x483494u: goto label_483494;
        case 0x483498u: goto label_483498;
        case 0x48349cu: goto label_48349c;
        case 0x4834a0u: goto label_4834a0;
        case 0x4834a4u: goto label_4834a4;
        case 0x4834a8u: goto label_4834a8;
        case 0x4834acu: goto label_4834ac;
        case 0x4834b0u: goto label_4834b0;
        case 0x4834b4u: goto label_4834b4;
        case 0x4834b8u: goto label_4834b8;
        case 0x4834bcu: goto label_4834bc;
        case 0x4834c0u: goto label_4834c0;
        case 0x4834c4u: goto label_4834c4;
        case 0x4834c8u: goto label_4834c8;
        case 0x4834ccu: goto label_4834cc;
        case 0x4834d0u: goto label_4834d0;
        case 0x4834d4u: goto label_4834d4;
        case 0x4834d8u: goto label_4834d8;
        case 0x4834dcu: goto label_4834dc;
        case 0x4834e0u: goto label_4834e0;
        case 0x4834e4u: goto label_4834e4;
        case 0x4834e8u: goto label_4834e8;
        case 0x4834ecu: goto label_4834ec;
        case 0x4834f0u: goto label_4834f0;
        case 0x4834f4u: goto label_4834f4;
        case 0x4834f8u: goto label_4834f8;
        case 0x4834fcu: goto label_4834fc;
        case 0x483500u: goto label_483500;
        case 0x483504u: goto label_483504;
        case 0x483508u: goto label_483508;
        case 0x48350cu: goto label_48350c;
        case 0x483510u: goto label_483510;
        case 0x483514u: goto label_483514;
        case 0x483518u: goto label_483518;
        case 0x48351cu: goto label_48351c;
        case 0x483520u: goto label_483520;
        case 0x483524u: goto label_483524;
        case 0x483528u: goto label_483528;
        case 0x48352cu: goto label_48352c;
        case 0x483530u: goto label_483530;
        case 0x483534u: goto label_483534;
        case 0x483538u: goto label_483538;
        case 0x48353cu: goto label_48353c;
        case 0x483540u: goto label_483540;
        case 0x483544u: goto label_483544;
        case 0x483548u: goto label_483548;
        case 0x48354cu: goto label_48354c;
        case 0x483550u: goto label_483550;
        case 0x483554u: goto label_483554;
        case 0x483558u: goto label_483558;
        case 0x48355cu: goto label_48355c;
        case 0x483560u: goto label_483560;
        case 0x483564u: goto label_483564;
        case 0x483568u: goto label_483568;
        case 0x48356cu: goto label_48356c;
        case 0x483570u: goto label_483570;
        case 0x483574u: goto label_483574;
        case 0x483578u: goto label_483578;
        case 0x48357cu: goto label_48357c;
        case 0x483580u: goto label_483580;
        case 0x483584u: goto label_483584;
        case 0x483588u: goto label_483588;
        case 0x48358cu: goto label_48358c;
        case 0x483590u: goto label_483590;
        case 0x483594u: goto label_483594;
        case 0x483598u: goto label_483598;
        case 0x48359cu: goto label_48359c;
        case 0x4835a0u: goto label_4835a0;
        case 0x4835a4u: goto label_4835a4;
        case 0x4835a8u: goto label_4835a8;
        case 0x4835acu: goto label_4835ac;
        case 0x4835b0u: goto label_4835b0;
        case 0x4835b4u: goto label_4835b4;
        case 0x4835b8u: goto label_4835b8;
        case 0x4835bcu: goto label_4835bc;
        case 0x4835c0u: goto label_4835c0;
        case 0x4835c4u: goto label_4835c4;
        case 0x4835c8u: goto label_4835c8;
        case 0x4835ccu: goto label_4835cc;
        case 0x4835d0u: goto label_4835d0;
        case 0x4835d4u: goto label_4835d4;
        case 0x4835d8u: goto label_4835d8;
        case 0x4835dcu: goto label_4835dc;
        case 0x4835e0u: goto label_4835e0;
        case 0x4835e4u: goto label_4835e4;
        case 0x4835e8u: goto label_4835e8;
        case 0x4835ecu: goto label_4835ec;
        case 0x4835f0u: goto label_4835f0;
        case 0x4835f4u: goto label_4835f4;
        case 0x4835f8u: goto label_4835f8;
        case 0x4835fcu: goto label_4835fc;
        case 0x483600u: goto label_483600;
        case 0x483604u: goto label_483604;
        case 0x483608u: goto label_483608;
        case 0x48360cu: goto label_48360c;
        case 0x483610u: goto label_483610;
        case 0x483614u: goto label_483614;
        case 0x483618u: goto label_483618;
        case 0x48361cu: goto label_48361c;
        case 0x483620u: goto label_483620;
        case 0x483624u: goto label_483624;
        case 0x483628u: goto label_483628;
        case 0x48362cu: goto label_48362c;
        case 0x483630u: goto label_483630;
        case 0x483634u: goto label_483634;
        case 0x483638u: goto label_483638;
        case 0x48363cu: goto label_48363c;
        case 0x483640u: goto label_483640;
        case 0x483644u: goto label_483644;
        case 0x483648u: goto label_483648;
        case 0x48364cu: goto label_48364c;
        case 0x483650u: goto label_483650;
        case 0x483654u: goto label_483654;
        case 0x483658u: goto label_483658;
        case 0x48365cu: goto label_48365c;
        case 0x483660u: goto label_483660;
        case 0x483664u: goto label_483664;
        case 0x483668u: goto label_483668;
        case 0x48366cu: goto label_48366c;
        case 0x483670u: goto label_483670;
        case 0x483674u: goto label_483674;
        case 0x483678u: goto label_483678;
        case 0x48367cu: goto label_48367c;
        case 0x483680u: goto label_483680;
        case 0x483684u: goto label_483684;
        case 0x483688u: goto label_483688;
        case 0x48368cu: goto label_48368c;
        case 0x483690u: goto label_483690;
        case 0x483694u: goto label_483694;
        case 0x483698u: goto label_483698;
        case 0x48369cu: goto label_48369c;
        case 0x4836a0u: goto label_4836a0;
        case 0x4836a4u: goto label_4836a4;
        case 0x4836a8u: goto label_4836a8;
        case 0x4836acu: goto label_4836ac;
        case 0x4836b0u: goto label_4836b0;
        case 0x4836b4u: goto label_4836b4;
        case 0x4836b8u: goto label_4836b8;
        case 0x4836bcu: goto label_4836bc;
        case 0x4836c0u: goto label_4836c0;
        case 0x4836c4u: goto label_4836c4;
        case 0x4836c8u: goto label_4836c8;
        case 0x4836ccu: goto label_4836cc;
        case 0x4836d0u: goto label_4836d0;
        case 0x4836d4u: goto label_4836d4;
        case 0x4836d8u: goto label_4836d8;
        case 0x4836dcu: goto label_4836dc;
        case 0x4836e0u: goto label_4836e0;
        case 0x4836e4u: goto label_4836e4;
        case 0x4836e8u: goto label_4836e8;
        case 0x4836ecu: goto label_4836ec;
        case 0x4836f0u: goto label_4836f0;
        case 0x4836f4u: goto label_4836f4;
        case 0x4836f8u: goto label_4836f8;
        case 0x4836fcu: goto label_4836fc;
        case 0x483700u: goto label_483700;
        case 0x483704u: goto label_483704;
        case 0x483708u: goto label_483708;
        case 0x48370cu: goto label_48370c;
        case 0x483710u: goto label_483710;
        case 0x483714u: goto label_483714;
        case 0x483718u: goto label_483718;
        case 0x48371cu: goto label_48371c;
        case 0x483720u: goto label_483720;
        case 0x483724u: goto label_483724;
        case 0x483728u: goto label_483728;
        case 0x48372cu: goto label_48372c;
        case 0x483730u: goto label_483730;
        case 0x483734u: goto label_483734;
        case 0x483738u: goto label_483738;
        case 0x48373cu: goto label_48373c;
        case 0x483740u: goto label_483740;
        case 0x483744u: goto label_483744;
        case 0x483748u: goto label_483748;
        case 0x48374cu: goto label_48374c;
        case 0x483750u: goto label_483750;
        case 0x483754u: goto label_483754;
        case 0x483758u: goto label_483758;
        case 0x48375cu: goto label_48375c;
        case 0x483760u: goto label_483760;
        case 0x483764u: goto label_483764;
        case 0x483768u: goto label_483768;
        case 0x48376cu: goto label_48376c;
        case 0x483770u: goto label_483770;
        case 0x483774u: goto label_483774;
        case 0x483778u: goto label_483778;
        case 0x48377cu: goto label_48377c;
        case 0x483780u: goto label_483780;
        case 0x483784u: goto label_483784;
        case 0x483788u: goto label_483788;
        case 0x48378cu: goto label_48378c;
        case 0x483790u: goto label_483790;
        case 0x483794u: goto label_483794;
        case 0x483798u: goto label_483798;
        case 0x48379cu: goto label_48379c;
        case 0x4837a0u: goto label_4837a0;
        case 0x4837a4u: goto label_4837a4;
        case 0x4837a8u: goto label_4837a8;
        case 0x4837acu: goto label_4837ac;
        case 0x4837b0u: goto label_4837b0;
        case 0x4837b4u: goto label_4837b4;
        case 0x4837b8u: goto label_4837b8;
        case 0x4837bcu: goto label_4837bc;
        case 0x4837c0u: goto label_4837c0;
        case 0x4837c4u: goto label_4837c4;
        case 0x4837c8u: goto label_4837c8;
        case 0x4837ccu: goto label_4837cc;
        case 0x4837d0u: goto label_4837d0;
        case 0x4837d4u: goto label_4837d4;
        case 0x4837d8u: goto label_4837d8;
        case 0x4837dcu: goto label_4837dc;
        case 0x4837e0u: goto label_4837e0;
        case 0x4837e4u: goto label_4837e4;
        case 0x4837e8u: goto label_4837e8;
        case 0x4837ecu: goto label_4837ec;
        case 0x4837f0u: goto label_4837f0;
        case 0x4837f4u: goto label_4837f4;
        case 0x4837f8u: goto label_4837f8;
        case 0x4837fcu: goto label_4837fc;
        case 0x483800u: goto label_483800;
        case 0x483804u: goto label_483804;
        case 0x483808u: goto label_483808;
        case 0x48380cu: goto label_48380c;
        default: break;
    }

    ctx->pc = 0x483020u;

label_483020:
    // 0x483020: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x483020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
label_483024:
    // 0x483024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x483024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_483028:
    // 0x483028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x483028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48302c:
    // 0x48302c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_483030:
    // 0x483030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483034:
    // 0x483034: 0xafa40520  sw          $a0, 0x520($sp)
    ctx->pc = 0x483034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 4));
label_483038:
    // 0x483038: 0xafa50530  sw          $a1, 0x530($sp)
    ctx->pc = 0x483038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1328), GPR_U32(ctx, 5));
label_48303c:
    // 0x48303c: 0xafa60540  sw          $a2, 0x540($sp)
    ctx->pc = 0x48303cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 6));
label_483040:
    // 0x483040: 0xafa70550  sw          $a3, 0x550($sp)
    ctx->pc = 0x483040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 7));
label_483044:
    // 0x483044: 0xafa80560  sw          $t0, 0x560($sp)
    ctx->pc = 0x483044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 8));
label_483048:
    // 0x483048: 0xafa90570  sw          $t1, 0x570($sp)
    ctx->pc = 0x483048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 9));
label_48304c:
    // 0x48304c: 0xafaa0580  sw          $t2, 0x580($sp)
    ctx->pc = 0x48304cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1408), GPR_U32(ctx, 10));
label_483050:
    // 0x483050: 0xafab0590  sw          $t3, 0x590($sp)
    ctx->pc = 0x483050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1424), GPR_U32(ctx, 11));
label_483054:
    // 0x483054: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x483054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_483058:
    // 0x483058: 0x8fa50520  lw          $a1, 0x520($sp)
    ctx->pc = 0x483058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_48305c:
    // 0x48305c: 0x8fa60550  lw          $a2, 0x550($sp)
    ctx->pc = 0x48305cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_483060:
    // 0x483060: 0xc1213b4  jal         func_484ED0
label_483064:
    if (ctx->pc == 0x483064u) {
        ctx->pc = 0x483068u;
        goto label_483068;
    }
    ctx->pc = 0x483060u;
    SET_GPR_U32(ctx, 31, 0x483068u);
    ctx->pc = 0x484ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484ED0u, 0x483060u, 0x483068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483068u;
label_483068:
    // 0x483068: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x483068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_48306c:
    // 0x48306c: 0x27a404b8  addiu       $a0, $sp, 0x4B8
    ctx->pc = 0x48306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_483070:
    // 0x483070: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x483070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_483074:
    // 0x483074: 0xc0a0284  jal         func_280A10
label_483078:
    if (ctx->pc == 0x483078u) {
        ctx->pc = 0x48307Cu;
        goto label_48307c;
    }
    ctx->pc = 0x483074u;
    SET_GPR_U32(ctx, 31, 0x48307Cu);
    ctx->pc = 0x280A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A10u, 0x483074u, 0x48307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48307Cu;
label_48307c:
    // 0x48307c: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x48307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_483080:
    // 0x483080: 0x27a504b8  addiu       $a1, $sp, 0x4B8
    ctx->pc = 0x483080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_483084:
    // 0x483084: 0xc0a0278  jal         func_2809E0
label_483088:
    if (ctx->pc == 0x483088u) {
        ctx->pc = 0x48308Cu;
        goto label_48308c;
    }
    ctx->pc = 0x483084u;
    SET_GPR_U32(ctx, 31, 0x48308Cu);
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x483084u, 0x48308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48308Cu;
label_48308c:
    // 0x48308c: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
label_483090:
    if (ctx->pc == 0x483090u) {
        ctx->pc = 0x483094u;
        goto label_483094;
    }
    ctx->pc = 0x48308Cu;
    {
        const bool branch_taken_0x48308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48308c) {
            ctx->pc = 0x48359Cu;
            goto label_48359c;
        }
    }
    ctx->pc = 0x483094u;
label_483094:
    // 0x483094: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x483094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_483098:
    // 0x483098: 0xc0a041c  jal         func_281070
label_48309c:
    if (ctx->pc == 0x48309Cu) {
        ctx->pc = 0x4830A0u;
        goto label_4830a0;
    }
    ctx->pc = 0x483098u;
    SET_GPR_U32(ctx, 31, 0x4830A0u);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x483098u, 0x4830A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4830A0u;
label_4830a0:
    // 0x4830a0: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x4830a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4830a4:
    // 0x4830a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4830a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4830a8:
    // 0x4830a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4830a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4830ac:
    // 0x4830ac: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_4830b0:
    if (ctx->pc == 0x4830B0u) {
        ctx->pc = 0x4830B4u;
        goto label_4830b4;
    }
    ctx->pc = 0x4830ACu;
    {
        const bool branch_taken_0x4830ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4830ac) {
            ctx->pc = 0x4830C0u;
            goto label_4830c0;
        }
    }
    ctx->pc = 0x4830B4u;
label_4830b4:
    // 0x4830b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4830b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4830b8:
    // 0x4830b8: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
label_4830bc:
    if (ctx->pc == 0x4830BCu) {
        ctx->pc = 0x4830C0u;
        goto label_4830c0;
    }
    ctx->pc = 0x4830B8u;
    {
        const bool branch_taken_0x4830b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4830b8) {
            ctx->pc = 0x48332Cu;
            goto label_48332c;
        }
    }
    ctx->pc = 0x4830C0u;
label_4830c0:
    // 0x4830c0: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x4830c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_4830c4:
    // 0x4830c4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x4830c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4830c8:
    // 0x4830c8: 0x2c850001  sltiu       $a1, $a0, 0x1
    ctx->pc = 0x4830c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4830cc:
    // 0x4830cc: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x4830ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4830d0:
    // 0x4830d0: 0x14c0002d  bnez        $a2, . + 4 + (0x2D << 2)
label_4830d4:
    if (ctx->pc == 0x4830D4u) {
        ctx->pc = 0x4830D8u;
        goto label_4830d8;
    }
    ctx->pc = 0x4830D0u;
    {
        const bool branch_taken_0x4830d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4830d0) {
            ctx->pc = 0x483188u;
            goto label_483188;
        }
    }
    ctx->pc = 0x4830D8u;
label_4830d8:
    // 0x4830d8: 0x8f82b590  lw          $v0, -0x4A70($gp)
    ctx->pc = 0x4830d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948240)));
label_4830dc:
    // 0x4830dc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_4830e0:
    if (ctx->pc == 0x4830E0u) {
        ctx->pc = 0x4830E4u;
        goto label_4830e4;
    }
    ctx->pc = 0x4830DCu;
    {
        const bool branch_taken_0x4830dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4830dc) {
            ctx->pc = 0x483188u;
            goto label_483188;
        }
    }
    ctx->pc = 0x4830E4u;
label_4830e4:
    // 0x4830e4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4830e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4830e8:
    // 0x4830e8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4830e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4830ec:
    // 0x4830ec: 0x27a604f0  addiu       $a2, $sp, 0x4F0
    ctx->pc = 0x4830ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_4830f0:
    // 0x4830f0: 0xc115ee8  jal         func_457BA0
label_4830f4:
    if (ctx->pc == 0x4830F4u) {
        ctx->pc = 0x4830F8u;
        goto label_4830f8;
    }
    ctx->pc = 0x4830F0u;
    SET_GPR_U32(ctx, 31, 0x4830F8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4830F0u, 0x4830F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4830F8u;
label_4830f8:
    // 0x4830f8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4830fc:
    if (ctx->pc == 0x4830FCu) {
        ctx->pc = 0x483100u;
        goto label_483100;
    }
    ctx->pc = 0x4830F8u;
    {
        const bool branch_taken_0x4830f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4830f8) {
            ctx->pc = 0x483188u;
            goto label_483188;
        }
    }
    ctx->pc = 0x483100u;
label_483100:
    // 0x483100: 0x8fa704f8  lw          $a3, 0x4F8($sp)
    ctx->pc = 0x483100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1272)));
label_483104:
    // 0x483104: 0x10e00020  beqz        $a3, . + 4 + (0x20 << 2)
label_483108:
    if (ctx->pc == 0x483108u) {
        ctx->pc = 0x48310Cu;
        goto label_48310c;
    }
    ctx->pc = 0x483104u;
    {
        const bool branch_taken_0x483104 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x483104) {
            ctx->pc = 0x483188u;
            goto label_483188;
        }
    }
    ctx->pc = 0x48310Cu;
label_48310c:
    // 0x48310c: 0x27a803a0  addiu       $t0, $sp, 0x3A0
    ctx->pc = 0x48310cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_483110:
    // 0x483110: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x483110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_483114:
    // 0x483114: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x483114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_483118:
    // 0x483118: 0x8fa604f4  lw          $a2, 0x4F4($sp)
    ctx->pc = 0x483118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
label_48311c:
    // 0x48311c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48311cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_483120:
    // 0x483120: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x483120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_483124:
    // 0x483124: 0x24080051  addiu       $t0, $zero, 0x51
    ctx->pc = 0x483124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_483128:
    // 0x483128: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x483128u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48312c:
    // 0x48312c: 0x25293b30  addiu       $t1, $t1, 0x3B30
    ctx->pc = 0x48312cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15152));
label_483130:
    // 0x483130: 0xc113940  jal         func_44E500
label_483134:
    if (ctx->pc == 0x483134u) {
        ctx->pc = 0x483138u;
        goto label_483138;
    }
    ctx->pc = 0x483130u;
    SET_GPR_U32(ctx, 31, 0x483138u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x483130u, 0x483138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483138u;
label_483138:
    // 0x483138: 0x27a203a0  addiu       $v0, $sp, 0x3A0
    ctx->pc = 0x483138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_48313c:
    // 0x48313c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48313cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483140:
    // 0x483140: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x483140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_483144:
    // 0x483144: 0x24a53b40  addiu       $a1, $a1, 0x3B40
    ctx->pc = 0x483144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15168));
label_483148:
    // 0x483148: 0xc115c24  jal         func_457090
label_48314c:
    if (ctx->pc == 0x48314Cu) {
        ctx->pc = 0x483150u;
        goto label_483150;
    }
    ctx->pc = 0x483148u;
    SET_GPR_U32(ctx, 31, 0x483150u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x483148u, 0x483150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483150u;
label_483150:
    // 0x483150: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x483150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_483154:
    // 0x483154: 0x8fa504f8  lw          $a1, 0x4F8($sp)
    ctx->pc = 0x483154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1272)));
label_483158:
    // 0x483158: 0xa0f809  jalr        $a1
label_48315c:
    if (ctx->pc == 0x48315Cu) {
        ctx->pc = 0x483160u;
        goto label_483160;
    }
    ctx->pc = 0x483158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x483160u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483158u, 0x483160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483160u;
label_483160:
    // 0x483160: 0xaf82b590  sw          $v0, -0x4A70($gp)
    ctx->pc = 0x483160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948240), GPR_U32(ctx, 2));
label_483164:
    // 0x483164: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x483164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_483168:
    // 0x483168: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48316c:
    if (ctx->pc == 0x48316Cu) {
        ctx->pc = 0x483170u;
        goto label_483170;
    }
    ctx->pc = 0x483168u;
    {
        const bool branch_taken_0x483168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x483168) {
            ctx->pc = 0x483178u;
            goto label_483178;
        }
    }
    ctx->pc = 0x483170u;
label_483170:
    // 0x483170: 0xd  break       0
    ctx->pc = 0x483170u;
    runtime->handleBreak(rdram, ctx);
label_483174:
    // 0x483174: 0x0  nop
    ctx->pc = 0x483174u;
    // NOP
label_483178:
    // 0x483178: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x483178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_48317c:
    // 0x48317c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48317cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_483180:
    // 0x483180: 0xc11392c  jal         func_44E4B0
label_483184:
    if (ctx->pc == 0x483184u) {
        ctx->pc = 0x483188u;
        goto label_483188;
    }
    ctx->pc = 0x483180u;
    SET_GPR_U32(ctx, 31, 0x483188u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x483180u, 0x483188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483188u;
label_483188:
    // 0x483188: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x483188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_48318c:
    // 0x48318c: 0xc119b68  jal         func_466DA0
label_483190:
    if (ctx->pc == 0x483190u) {
        ctx->pc = 0x483194u;
        goto label_483194;
    }
    ctx->pc = 0x48318Cu;
    SET_GPR_U32(ctx, 31, 0x483194u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x48318Cu, 0x483194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483194u;
label_483194:
    // 0x483194: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x483194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_483198:
    // 0x483198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x483198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48319c:
    // 0x48319c: 0xc0400e0  jal         func_100380
label_4831a0:
    if (ctx->pc == 0x4831A0u) {
        ctx->pc = 0x4831A4u;
        goto label_4831a4;
    }
    ctx->pc = 0x48319Cu;
    SET_GPR_U32(ctx, 31, 0x4831A4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x48319Cu, 0x4831A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4831A4u;
label_4831a4:
    // 0x4831a4: 0xafa2051c  sw          $v0, 0x51C($sp)
    ctx->pc = 0x4831a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1308), GPR_U32(ctx, 2));
label_4831a8:
    // 0x4831a8: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x4831a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_4831ac:
    // 0x4831ac: 0x8fa3051c  lw          $v1, 0x51C($sp)
    ctx->pc = 0x4831acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_4831b0:
    // 0x4831b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4831b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4831b4:
    // 0x4831b4: 0x8fa30570  lw          $v1, 0x570($sp)
    ctx->pc = 0x4831b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_4831b8:
    // 0x4831b8: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x4831b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_4831bc:
    // 0x4831bc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4831bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4831c0:
    // 0x4831c0: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x4831c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_4831c4:
    // 0x4831c4: 0xc0a041c  jal         func_281070
label_4831c8:
    if (ctx->pc == 0x4831C8u) {
        ctx->pc = 0x4831CCu;
        goto label_4831cc;
    }
    ctx->pc = 0x4831C4u;
    SET_GPR_U32(ctx, 31, 0x4831CCu);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x4831C4u, 0x4831CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4831CCu;
label_4831cc:
    // 0x4831cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4831ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4831d0:
    // 0x4831d0: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x4831d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_4831d4:
    // 0x4831d4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x4831d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_4831d8:
    // 0x4831d8: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x4831d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_4831dc:
    // 0x4831dc: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x4831dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4831e0:
    // 0x4831e0: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x4831e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4831e4:
    // 0x4831e4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4831e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4831e8:
    // 0x4831e8: 0xc0bc77e  jal         func_2F1DF8
label_4831ec:
    if (ctx->pc == 0x4831ECu) {
        ctx->pc = 0x4831F0u;
        goto label_4831f0;
    }
    ctx->pc = 0x4831E8u;
    SET_GPR_U32(ctx, 31, 0x4831F0u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x4831E8u, 0x4831F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4831F0u;
label_4831f0:
    // 0x4831f0: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x4831f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_4831f4:
    // 0x4831f4: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x4831f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
label_4831f8:
    // 0x4831f8: 0x8fa30580  lw          $v1, 0x580($sp)
    ctx->pc = 0x4831f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
label_4831fc:
    // 0x4831fc: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x4831fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_483200:
    // 0x483200: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x483200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_483204:
    // 0x483204: 0x8fa30590  lw          $v1, 0x590($sp)
    ctx->pc = 0x483204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
label_483208:
    // 0x483208: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x483208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_48320c:
    // 0x48320c: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x48320cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_483210:
    // 0x483210: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x483210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_483214:
    // 0x483214: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_483218:
    if (ctx->pc == 0x483218u) {
        ctx->pc = 0x48321Cu;
        goto label_48321c;
    }
    ctx->pc = 0x483214u;
    {
        const bool branch_taken_0x483214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483214) {
            ctx->pc = 0x4832F8u;
            goto label_4832f8;
        }
    }
    ctx->pc = 0x48321Cu;
label_48321c:
    // 0x48321c: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x48321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_483220:
    // 0x483220: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x483220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_483224:
    // 0x483224: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x483224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_483228:
    // 0x483228: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x483228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_48322c:
    // 0x48322c: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x48322cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
label_483230:
    // 0x483230: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x483230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_483234:
    // 0x483234: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x483234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_483238:
    // 0x483238: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x483238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48323c:
    // 0x48323c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48323cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_483240:
    // 0x483240: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_483244:
    if (ctx->pc == 0x483244u) {
        ctx->pc = 0x483248u;
        goto label_483248;
    }
    ctx->pc = 0x483240u;
    {
        const bool branch_taken_0x483240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483240) {
            ctx->pc = 0x483304u;
            goto label_483304;
        }
    }
    ctx->pc = 0x483248u;
label_483248:
    // 0x483248: 0x8f82b594  lw          $v0, -0x4A6C($gp)
    ctx->pc = 0x483248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948244)));
label_48324c:
    // 0x48324c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_483250:
    if (ctx->pc == 0x483250u) {
        ctx->pc = 0x483254u;
        goto label_483254;
    }
    ctx->pc = 0x48324Cu;
    {
        const bool branch_taken_0x48324c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48324c) {
            ctx->pc = 0x483304u;
            goto label_483304;
        }
    }
    ctx->pc = 0x483254u;
label_483254:
    // 0x483254: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x483254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_483258:
    // 0x483258: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x483258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48325c:
    // 0x48325c: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x48325cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_483260:
    // 0x483260: 0xc115ee8  jal         func_457BA0
label_483264:
    if (ctx->pc == 0x483264u) {
        ctx->pc = 0x483268u;
        goto label_483268;
    }
    ctx->pc = 0x483260u;
    SET_GPR_U32(ctx, 31, 0x483268u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x483260u, 0x483268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483268u;
label_483268:
    // 0x483268: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_48326c:
    if (ctx->pc == 0x48326Cu) {
        ctx->pc = 0x483270u;
        goto label_483270;
    }
    ctx->pc = 0x483268u;
    {
        const bool branch_taken_0x483268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483268) {
            ctx->pc = 0x483304u;
            goto label_483304;
        }
    }
    ctx->pc = 0x483270u;
label_483270:
    // 0x483270: 0x8fa204e8  lw          $v0, 0x4E8($sp)
    ctx->pc = 0x483270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_483274:
    // 0x483274: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_483278:
    if (ctx->pc == 0x483278u) {
        ctx->pc = 0x48327Cu;
        goto label_48327c;
    }
    ctx->pc = 0x483274u;
    {
        const bool branch_taken_0x483274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483274) {
            ctx->pc = 0x483304u;
            goto label_483304;
        }
    }
    ctx->pc = 0x48327Cu;
label_48327c:
    // 0x48327c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x48327cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_483280:
    // 0x483280: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x483280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_483284:
    // 0x483284: 0x8fa604e4  lw          $a2, 0x4E4($sp)
    ctx->pc = 0x483284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1252)));
label_483288:
    // 0x483288: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x483288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48328c:
    // 0x48328c: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x48328cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_483290:
    // 0x483290: 0x24080061  addiu       $t0, $zero, 0x61
    ctx->pc = 0x483290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_483294:
    // 0x483294: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x483294u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_483298:
    // 0x483298: 0x25293ba0  addiu       $t1, $t1, 0x3BA0
    ctx->pc = 0x483298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15264));
label_48329c:
    // 0x48329c: 0xc113940  jal         func_44E500
label_4832a0:
    if (ctx->pc == 0x4832A0u) {
        ctx->pc = 0x4832A4u;
        goto label_4832a4;
    }
    ctx->pc = 0x48329Cu;
    SET_GPR_U32(ctx, 31, 0x4832A4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48329Cu, 0x4832A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4832A4u;
label_4832a4:
    // 0x4832a4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4832a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4832a8:
    // 0x4832a8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4832a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4832ac:
    // 0x4832ac: 0x24a53bc0  addiu       $a1, $a1, 0x3BC0
    ctx->pc = 0x4832acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15296));
label_4832b0:
    // 0x4832b0: 0xc115c24  jal         func_457090
label_4832b4:
    if (ctx->pc == 0x4832B4u) {
        ctx->pc = 0x4832B8u;
        goto label_4832b8;
    }
    ctx->pc = 0x4832B0u;
    SET_GPR_U32(ctx, 31, 0x4832B8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4832B0u, 0x4832B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4832B8u;
label_4832b8:
    // 0x4832b8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4832b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4832bc:
    // 0x4832bc: 0x8fa204e8  lw          $v0, 0x4E8($sp)
    ctx->pc = 0x4832bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_4832c0:
    // 0x4832c0: 0x40f809  jalr        $v0
label_4832c4:
    if (ctx->pc == 0x4832C4u) {
        ctx->pc = 0x4832C8u;
        goto label_4832c8;
    }
    ctx->pc = 0x4832C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4832C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4832C0u, 0x4832C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4832C8u;
label_4832c8:
    // 0x4832c8: 0xaf82b594  sw          $v0, -0x4A6C($gp)
    ctx->pc = 0x4832c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948244), GPR_U32(ctx, 2));
label_4832cc:
    // 0x4832cc: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4832ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4832d0:
    // 0x4832d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4832d4:
    if (ctx->pc == 0x4832D4u) {
        ctx->pc = 0x4832D8u;
        goto label_4832d8;
    }
    ctx->pc = 0x4832D0u;
    {
        const bool branch_taken_0x4832d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4832d0) {
            ctx->pc = 0x4832E0u;
            goto label_4832e0;
        }
    }
    ctx->pc = 0x4832D8u;
label_4832d8:
    // 0x4832d8: 0xd  break       0
    ctx->pc = 0x4832d8u;
    runtime->handleBreak(rdram, ctx);
label_4832dc:
    // 0x4832dc: 0x0  nop
    ctx->pc = 0x4832dcu;
    // NOP
label_4832e0:
    // 0x4832e0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4832e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4832e4:
    // 0x4832e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4832e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4832e8:
    // 0x4832e8: 0xc11392c  jal         func_44E4B0
label_4832ec:
    if (ctx->pc == 0x4832ECu) {
        ctx->pc = 0x4832F0u;
        goto label_4832f0;
    }
    ctx->pc = 0x4832E8u;
    SET_GPR_U32(ctx, 31, 0x4832F0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4832E8u, 0x4832F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4832F0u;
label_4832f0:
    // 0x4832f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_4832f4:
    if (ctx->pc == 0x4832F4u) {
        ctx->pc = 0x4832F8u;
        goto label_4832f8;
    }
    ctx->pc = 0x4832F0u;
    {
        const bool branch_taken_0x4832f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4832f0) {
            ctx->pc = 0x483304u;
            goto label_483304;
        }
    }
    ctx->pc = 0x4832F8u;
label_4832f8:
    // 0x4832f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4832f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4832fc:
    // 0x4832fc: 0x8fa2051c  lw          $v0, 0x51C($sp)
    ctx->pc = 0x4832fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_483300:
    // 0x483300: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x483300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_483304:
    // 0x483304: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x483304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_483308:
    // 0x483308: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x483308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_48330c:
    // 0x48330c: 0x27a5051c  addiu       $a1, $sp, 0x51C
    ctx->pc = 0x48330cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
label_483310:
    // 0x483310: 0xc120eb8  jal         func_483AE0
label_483314:
    if (ctx->pc == 0x483314u) {
        ctx->pc = 0x483318u;
        goto label_483318;
    }
    ctx->pc = 0x483310u;
    SET_GPR_U32(ctx, 31, 0x483318u);
    ctx->pc = 0x483AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483AE0u, 0x483310u, 0x483318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483318u;
label_483318:
    // 0x483318: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x483318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48331c:
    // 0x48331c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_483320:
    // 0x483320: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x483320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_483324:
    // 0x483324: 0x1000009a  b           . + 4 + (0x9A << 2)
label_483328:
    if (ctx->pc == 0x483328u) {
        ctx->pc = 0x48332Cu;
        goto label_48332c;
    }
    ctx->pc = 0x483324u;
    {
        const bool branch_taken_0x483324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483324) {
            ctx->pc = 0x483590u;
            goto label_483590;
        }
    }
    ctx->pc = 0x48332Cu;
label_48332c:
    // 0x48332c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x48332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_483330:
    // 0x483330: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x483330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_483334:
    // 0x483334: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
label_483338:
    if (ctx->pc == 0x483338u) {
        ctx->pc = 0x48333Cu;
        goto label_48333c;
    }
    ctx->pc = 0x483334u;
    {
        const bool branch_taken_0x483334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x483334) {
            ctx->pc = 0x4834B8u;
            goto label_4834b8;
        }
    }
    ctx->pc = 0x48333Cu;
label_48333c:
    // 0x48333c: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x48333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_483340:
    // 0x483340: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x483340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_483344:
    // 0x483344: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x483344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_483348:
    // 0x483348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x483348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48334c:
    // 0x48334c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_483350:
    if (ctx->pc == 0x483350u) {
        ctx->pc = 0x483354u;
        goto label_483354;
    }
    ctx->pc = 0x48334Cu;
    {
        const bool branch_taken_0x48334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48334c) {
            ctx->pc = 0x4833FCu;
            goto label_4833fc;
        }
    }
    ctx->pc = 0x483354u;
label_483354:
    // 0x483354: 0x8f82b598  lw          $v0, -0x4A68($gp)
    ctx->pc = 0x483354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948248)));
label_483358:
    // 0x483358: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48335c:
    if (ctx->pc == 0x48335Cu) {
        ctx->pc = 0x483360u;
        goto label_483360;
    }
    ctx->pc = 0x483358u;
    {
        const bool branch_taken_0x483358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483358) {
            ctx->pc = 0x4833FCu;
            goto label_4833fc;
        }
    }
    ctx->pc = 0x483360u;
label_483360:
    // 0x483360: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x483360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_483364:
    // 0x483364: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x483364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_483368:
    // 0x483368: 0x27a604d0  addiu       $a2, $sp, 0x4D0
    ctx->pc = 0x483368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_48336c:
    // 0x48336c: 0xc115ee8  jal         func_457BA0
label_483370:
    if (ctx->pc == 0x483370u) {
        ctx->pc = 0x483374u;
        goto label_483374;
    }
    ctx->pc = 0x48336Cu;
    SET_GPR_U32(ctx, 31, 0x483374u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48336Cu, 0x483374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483374u;
label_483374:
    // 0x483374: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_483378:
    if (ctx->pc == 0x483378u) {
        ctx->pc = 0x48337Cu;
        goto label_48337c;
    }
    ctx->pc = 0x483374u;
    {
        const bool branch_taken_0x483374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483374) {
            ctx->pc = 0x4833FCu;
            goto label_4833fc;
        }
    }
    ctx->pc = 0x48337Cu;
label_48337c:
    // 0x48337c: 0x8fa204d8  lw          $v0, 0x4D8($sp)
    ctx->pc = 0x48337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_483380:
    // 0x483380: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_483384:
    if (ctx->pc == 0x483384u) {
        ctx->pc = 0x483388u;
        goto label_483388;
    }
    ctx->pc = 0x483380u;
    {
        const bool branch_taken_0x483380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483380) {
            ctx->pc = 0x4833FCu;
            goto label_4833fc;
        }
    }
    ctx->pc = 0x483388u;
label_483388:
    // 0x483388: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x483388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_48338c:
    // 0x48338c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48338cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_483390:
    // 0x483390: 0x8fa604d4  lw          $a2, 0x4D4($sp)
    ctx->pc = 0x483390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_483394:
    // 0x483394: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x483394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_483398:
    // 0x483398: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x483398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_48339c:
    // 0x48339c: 0x24080072  addiu       $t0, $zero, 0x72
    ctx->pc = 0x48339cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_4833a0:
    // 0x4833a0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4833a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4833a4:
    // 0x4833a4: 0x25293b30  addiu       $t1, $t1, 0x3B30
    ctx->pc = 0x4833a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15152));
label_4833a8:
    // 0x4833a8: 0xc113940  jal         func_44E500
label_4833ac:
    if (ctx->pc == 0x4833ACu) {
        ctx->pc = 0x4833B0u;
        goto label_4833b0;
    }
    ctx->pc = 0x4833A8u;
    SET_GPR_U32(ctx, 31, 0x4833B0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4833A8u, 0x4833B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4833B0u;
label_4833b0:
    // 0x4833b0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4833b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4833b4:
    // 0x4833b4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4833b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4833b8:
    // 0x4833b8: 0x24a53b40  addiu       $a1, $a1, 0x3B40
    ctx->pc = 0x4833b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15168));
label_4833bc:
    // 0x4833bc: 0xc115c24  jal         func_457090
label_4833c0:
    if (ctx->pc == 0x4833C0u) {
        ctx->pc = 0x4833C4u;
        goto label_4833c4;
    }
    ctx->pc = 0x4833BCu;
    SET_GPR_U32(ctx, 31, 0x4833C4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4833BCu, 0x4833C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4833C4u;
label_4833c4:
    // 0x4833c4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4833c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4833c8:
    // 0x4833c8: 0x8fa204d8  lw          $v0, 0x4D8($sp)
    ctx->pc = 0x4833c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_4833cc:
    // 0x4833cc: 0x40f809  jalr        $v0
label_4833d0:
    if (ctx->pc == 0x4833D0u) {
        ctx->pc = 0x4833D4u;
        goto label_4833d4;
    }
    ctx->pc = 0x4833CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4833D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4833CCu, 0x4833D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4833D4u;
label_4833d4:
    // 0x4833d4: 0xaf82b598  sw          $v0, -0x4A68($gp)
    ctx->pc = 0x4833d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948248), GPR_U32(ctx, 2));
label_4833d8:
    // 0x4833d8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4833d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4833dc:
    // 0x4833dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4833e0:
    if (ctx->pc == 0x4833E0u) {
        ctx->pc = 0x4833E4u;
        goto label_4833e4;
    }
    ctx->pc = 0x4833DCu;
    {
        const bool branch_taken_0x4833dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4833dc) {
            ctx->pc = 0x4833ECu;
            goto label_4833ec;
        }
    }
    ctx->pc = 0x4833E4u;
label_4833e4:
    // 0x4833e4: 0xd  break       0
    ctx->pc = 0x4833e4u;
    runtime->handleBreak(rdram, ctx);
label_4833e8:
    // 0x4833e8: 0x0  nop
    ctx->pc = 0x4833e8u;
    // NOP
label_4833ec:
    // 0x4833ec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4833ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4833f0:
    // 0x4833f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4833f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4833f4:
    // 0x4833f4: 0xc11392c  jal         func_44E4B0
label_4833f8:
    if (ctx->pc == 0x4833F8u) {
        ctx->pc = 0x4833FCu;
        goto label_4833fc;
    }
    ctx->pc = 0x4833F4u;
    SET_GPR_U32(ctx, 31, 0x4833FCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4833F4u, 0x4833FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4833FCu;
label_4833fc:
    // 0x4833fc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4833fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_483400:
    // 0x483400: 0xc119b68  jal         func_466DA0
label_483404:
    if (ctx->pc == 0x483404u) {
        ctx->pc = 0x483408u;
        goto label_483408;
    }
    ctx->pc = 0x483400u;
    SET_GPR_U32(ctx, 31, 0x483408u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x483400u, 0x483408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483408u;
label_483408:
    // 0x483408: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x483408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_48340c:
    // 0x48340c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48340cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483410:
    // 0x483410: 0xc0400e0  jal         func_100380
label_483414:
    if (ctx->pc == 0x483414u) {
        ctx->pc = 0x483418u;
        goto label_483418;
    }
    ctx->pc = 0x483410u;
    SET_GPR_U32(ctx, 31, 0x483418u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x483410u, 0x483418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483418u;
label_483418:
    // 0x483418: 0xafa20518  sw          $v0, 0x518($sp)
    ctx->pc = 0x483418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1304), GPR_U32(ctx, 2));
label_48341c:
    // 0x48341c: 0x8fa30560  lw          $v1, 0x560($sp)
    ctx->pc = 0x48341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_483420:
    // 0x483420: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x483420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_483424:
    // 0x483424: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x483424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_483428:
    // 0x483428: 0x8fa30570  lw          $v1, 0x570($sp)
    ctx->pc = 0x483428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_48342c:
    // 0x48342c: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x48342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_483430:
    // 0x483430: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x483430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_483434:
    // 0x483434: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x483434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_483438:
    // 0x483438: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x483438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_48343c:
    // 0x48343c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x48343cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_483440:
    // 0x483440: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x483440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_483444:
    // 0x483444: 0xc0a041c  jal         func_281070
label_483448:
    if (ctx->pc == 0x483448u) {
        ctx->pc = 0x48344Cu;
        goto label_48344c;
    }
    ctx->pc = 0x483444u;
    SET_GPR_U32(ctx, 31, 0x48344Cu);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x483444u, 0x48344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48344Cu;
label_48344c:
    // 0x48344c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48344cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_483450:
    // 0x483450: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x483450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_483454:
    // 0x483454: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x483454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_483458:
    // 0x483458: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x483458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_48345c:
    // 0x48345c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x48345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_483460:
    // 0x483460: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x483460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_483464:
    // 0x483464: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x483464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_483468:
    // 0x483468: 0xc0bc77e  jal         func_2F1DF8
label_48346c:
    if (ctx->pc == 0x48346Cu) {
        ctx->pc = 0x483470u;
        goto label_483470;
    }
    ctx->pc = 0x483468u;
    SET_GPR_U32(ctx, 31, 0x483470u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x483468u, 0x483470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483470u;
label_483470:
    // 0x483470: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x483470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_483474:
    // 0x483474: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x483474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
label_483478:
    // 0x483478: 0x8fa30580  lw          $v1, 0x580($sp)
    ctx->pc = 0x483478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
label_48347c:
    // 0x48347c: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x48347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_483480:
    // 0x483480: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x483480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_483484:
    // 0x483484: 0x8fa30590  lw          $v1, 0x590($sp)
    ctx->pc = 0x483484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
label_483488:
    // 0x483488: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x483488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_48348c:
    // 0x48348c: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x48348cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_483490:
    // 0x483490: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x483490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_483494:
    // 0x483494: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x483494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_483498:
    // 0x483498: 0x27a50518  addiu       $a1, $sp, 0x518
    ctx->pc = 0x483498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
label_48349c:
    // 0x48349c: 0xc120eb8  jal         func_483AE0
label_4834a0:
    if (ctx->pc == 0x4834A0u) {
        ctx->pc = 0x4834A4u;
        goto label_4834a4;
    }
    ctx->pc = 0x48349Cu;
    SET_GPR_U32(ctx, 31, 0x4834A4u);
    ctx->pc = 0x483AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483AE0u, 0x48349Cu, 0x4834A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4834A4u;
label_4834a4:
    // 0x4834a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4834a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4834a8:
    // 0x4834a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4834a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4834ac:
    // 0x4834ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4834acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4834b0:
    // 0x4834b0: 0x10000037  b           . + 4 + (0x37 << 2)
label_4834b4:
    if (ctx->pc == 0x4834B4u) {
        ctx->pc = 0x4834B8u;
        goto label_4834b8;
    }
    ctx->pc = 0x4834B0u;
    {
        const bool branch_taken_0x4834b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4834b0) {
            ctx->pc = 0x483590u;
            goto label_483590;
        }
    }
    ctx->pc = 0x4834B8u;
label_4834b8:
    // 0x4834b8: 0x8fa30540  lw          $v1, 0x540($sp)
    ctx->pc = 0x4834b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_4834bc:
    // 0x4834bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4834bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4834c0:
    // 0x4834c0: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_4834c4:
    if (ctx->pc == 0x4834C4u) {
        ctx->pc = 0x4834C8u;
        goto label_4834c8;
    }
    ctx->pc = 0x4834C0u;
    {
        const bool branch_taken_0x4834c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4834c0) {
            ctx->pc = 0x483584u;
            goto label_483584;
        }
    }
    ctx->pc = 0x4834C8u;
label_4834c8:
    // 0x4834c8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4834c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4834cc:
    // 0x4834cc: 0xc119b68  jal         func_466DA0
label_4834d0:
    if (ctx->pc == 0x4834D0u) {
        ctx->pc = 0x4834D4u;
        goto label_4834d4;
    }
    ctx->pc = 0x4834CCu;
    SET_GPR_U32(ctx, 31, 0x4834D4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4834CCu, 0x4834D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4834D4u;
label_4834d4:
    // 0x4834d4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4834d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4834d8:
    // 0x4834d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4834d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4834dc:
    // 0x4834dc: 0xc0400e0  jal         func_100380
label_4834e0:
    if (ctx->pc == 0x4834E0u) {
        ctx->pc = 0x4834E4u;
        goto label_4834e4;
    }
    ctx->pc = 0x4834DCu;
    SET_GPR_U32(ctx, 31, 0x4834E4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4834DCu, 0x4834E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4834E4u;
label_4834e4:
    // 0x4834e4: 0xafa20514  sw          $v0, 0x514($sp)
    ctx->pc = 0x4834e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1300), GPR_U32(ctx, 2));
label_4834e8:
    // 0x4834e8: 0x8fa30560  lw          $v1, 0x560($sp)
    ctx->pc = 0x4834e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_4834ec:
    // 0x4834ec: 0x8fa20514  lw          $v0, 0x514($sp)
    ctx->pc = 0x4834ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_4834f0:
    // 0x4834f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4834f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4834f4:
    // 0x4834f4: 0x8fa30570  lw          $v1, 0x570($sp)
    ctx->pc = 0x4834f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_4834f8:
    // 0x4834f8: 0x8fa20514  lw          $v0, 0x514($sp)
    ctx->pc = 0x4834f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_4834fc:
    // 0x4834fc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4834fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_483500:
    // 0x483500: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x483500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_483504:
    // 0x483504: 0x8fa20514  lw          $v0, 0x514($sp)
    ctx->pc = 0x483504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_483508:
    // 0x483508: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x483508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_48350c:
    // 0x48350c: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x48350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_483510:
    // 0x483510: 0xc0a041c  jal         func_281070
label_483514:
    if (ctx->pc == 0x483514u) {
        ctx->pc = 0x483518u;
        goto label_483518;
    }
    ctx->pc = 0x483510u;
    SET_GPR_U32(ctx, 31, 0x483518u);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x483510u, 0x483518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483518u;
label_483518:
    // 0x483518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x483518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48351c:
    // 0x48351c: 0x8fa20514  lw          $v0, 0x514($sp)
    ctx->pc = 0x48351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_483520:
    // 0x483520: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x483520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_483524:
    // 0x483524: 0x8fa20514  lw          $v0, 0x514($sp)
    ctx->pc = 0x483524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_483528:
    // 0x483528: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x483528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_48352c:
    // 0x48352c: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x48352cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_483530:
    // 0x483530: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x483530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_483534:
    // 0x483534: 0xc0bc77e  jal         func_2F1DF8
label_483538:
    if (ctx->pc == 0x483538u) {
        ctx->pc = 0x48353Cu;
        goto label_48353c;
    }
    ctx->pc = 0x483534u;
    SET_GPR_U32(ctx, 31, 0x48353Cu);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x483534u, 0x48353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48353Cu;
label_48353c:
    // 0x48353c: 0x8fa20514  lw          $v0, 0x514($sp)
    ctx->pc = 0x48353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_483540:
    // 0x483540: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x483540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
label_483544:
    // 0x483544: 0x8fa30580  lw          $v1, 0x580($sp)
    ctx->pc = 0x483544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
label_483548:
    // 0x483548: 0x8fa20514  lw          $v0, 0x514($sp)
    ctx->pc = 0x483548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_48354c:
    // 0x48354c: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x48354cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_483550:
    // 0x483550: 0x8fa30590  lw          $v1, 0x590($sp)
    ctx->pc = 0x483550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
label_483554:
    // 0x483554: 0x8fa20514  lw          $v0, 0x514($sp)
    ctx->pc = 0x483554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_483558:
    // 0x483558: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x483558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_48355c:
    // 0x48355c: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x48355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_483560:
    // 0x483560: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x483560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_483564:
    // 0x483564: 0x27a50514  addiu       $a1, $sp, 0x514
    ctx->pc = 0x483564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1300));
label_483568:
    // 0x483568: 0xc120eb8  jal         func_483AE0
label_48356c:
    if (ctx->pc == 0x48356Cu) {
        ctx->pc = 0x483570u;
        goto label_483570;
    }
    ctx->pc = 0x483568u;
    SET_GPR_U32(ctx, 31, 0x483570u);
    ctx->pc = 0x483AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483AE0u, 0x483568u, 0x483570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483570u;
label_483570:
    // 0x483570: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x483570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_483574:
    // 0x483574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x483574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_483578:
    // 0x483578: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x483578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_48357c:
    // 0x48357c: 0x10000004  b           . + 4 + (0x4 << 2)
label_483580:
    if (ctx->pc == 0x483580u) {
        ctx->pc = 0x483584u;
        goto label_483584;
    }
    ctx->pc = 0x48357Cu;
    {
        const bool branch_taken_0x48357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48357c) {
            ctx->pc = 0x483590u;
            goto label_483590;
        }
    }
    ctx->pc = 0x483584u;
label_483584:
    // 0x483584: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x483584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_483588:
    // 0x483588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x483588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_48358c:
    // 0x48358c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x48358cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_483590:
    // 0x483590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x483590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483594:
    // 0x483594: 0x10000097  b           . + 4 + (0x97 << 2)
label_483598:
    if (ctx->pc == 0x483598u) {
        ctx->pc = 0x48359Cu;
        goto label_48359c;
    }
    ctx->pc = 0x483594u;
    {
        const bool branch_taken_0x483594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483594) {
            ctx->pc = 0x4837F4u;
            goto label_4837f4;
        }
    }
    ctx->pc = 0x48359Cu;
label_48359c:
    // 0x48359c: 0x8fa40550  lw          $a0, 0x550($sp)
    ctx->pc = 0x48359cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_4835a0:
    // 0x4835a0: 0xc1213d8  jal         func_484F60
label_4835a4:
    if (ctx->pc == 0x4835A4u) {
        ctx->pc = 0x4835A8u;
        goto label_4835a8;
    }
    ctx->pc = 0x4835A0u;
    SET_GPR_U32(ctx, 31, 0x4835A8u);
    ctx->pc = 0x484F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484F60u, 0x4835A0u, 0x4835A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4835A8u;
label_4835a8:
    // 0x4835a8: 0xafa20510  sw          $v0, 0x510($sp)
    ctx->pc = 0x4835a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 2));
label_4835ac:
    // 0x4835ac: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x4835acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_4835b0:
    // 0x4835b0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4835b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_4835b4:
    // 0x4835b4: 0x27a50510  addiu       $a1, $sp, 0x510
    ctx->pc = 0x4835b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_4835b8:
    // 0x4835b8: 0xc120e04  jal         func_483810
label_4835bc:
    if (ctx->pc == 0x4835BCu) {
        ctx->pc = 0x4835C0u;
        goto label_4835c0;
    }
    ctx->pc = 0x4835B8u;
    SET_GPR_U32(ctx, 31, 0x4835C0u);
    ctx->pc = 0x483810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483810u, 0x4835B8u, 0x4835C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4835C0u;
label_4835c0:
    // 0x4835c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4835c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4835c4:
    // 0x4835c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4835c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4835c8:
    // 0x4835c8: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x4835c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_4835cc:
    // 0x4835cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4835d0:
    if (ctx->pc == 0x4835D0u) {
        ctx->pc = 0x4835D4u;
        goto label_4835d4;
    }
    ctx->pc = 0x4835CCu;
    {
        const bool branch_taken_0x4835cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4835cc) {
            ctx->pc = 0x4835ECu;
            goto label_4835ec;
        }
    }
    ctx->pc = 0x4835D4u;
label_4835d4:
    // 0x4835d4: 0x8fa40530  lw          $a0, 0x530($sp)
    ctx->pc = 0x4835d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4835d8:
    // 0x4835d8: 0xc0ef2e6  jal         func_3BCB98
label_4835dc:
    if (ctx->pc == 0x4835DCu) {
        ctx->pc = 0x4835E0u;
        goto label_4835e0;
    }
    ctx->pc = 0x4835D8u;
    SET_GPR_U32(ctx, 31, 0x4835E0u);
    ctx->pc = 0x3BCB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB98u, 0x4835D8u, 0x4835E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4835E0u;
label_4835e0:
    // 0x4835e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4835e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4835e4:
    // 0x4835e4: 0x10000036  b           . + 4 + (0x36 << 2)
label_4835e8:
    if (ctx->pc == 0x4835E8u) {
        ctx->pc = 0x4835ECu;
        goto label_4835ec;
    }
    ctx->pc = 0x4835E4u;
    {
        const bool branch_taken_0x4835e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4835e4) {
            ctx->pc = 0x4836C0u;
            goto label_4836c0;
        }
    }
    ctx->pc = 0x4835ECu;
label_4835ec:
    // 0x4835ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4835ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4835f0:
    // 0x4835f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4835f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4835f4:
    // 0x4835f4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4835f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4835f8:
    // 0x4835f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4835f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_4835fc:
    // 0x4835fc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4835fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_483600:
    // 0x483600: 0xc119b68  jal         func_466DA0
label_483604:
    if (ctx->pc == 0x483604u) {
        ctx->pc = 0x483608u;
        goto label_483608;
    }
    ctx->pc = 0x483600u;
    SET_GPR_U32(ctx, 31, 0x483608u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x483600u, 0x483608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483608u;
label_483608:
    // 0x483608: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x483608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_48360c:
    // 0x48360c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48360cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483610:
    // 0x483610: 0xc0400e0  jal         func_100380
label_483614:
    if (ctx->pc == 0x483614u) {
        ctx->pc = 0x483618u;
        goto label_483618;
    }
    ctx->pc = 0x483610u;
    SET_GPR_U32(ctx, 31, 0x483618u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x483610u, 0x483618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483618u;
label_483618:
    // 0x483618: 0xafa2050c  sw          $v0, 0x50C($sp)
    ctx->pc = 0x483618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 2));
label_48361c:
    // 0x48361c: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x48361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_483620:
    // 0x483620: 0x8fa2050c  lw          $v0, 0x50C($sp)
    ctx->pc = 0x483620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_483624:
    // 0x483624: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x483624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
label_483628:
    // 0x483628: 0x8fa30560  lw          $v1, 0x560($sp)
    ctx->pc = 0x483628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_48362c:
    // 0x48362c: 0x8fa2050c  lw          $v0, 0x50C($sp)
    ctx->pc = 0x48362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_483630:
    // 0x483630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x483630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_483634:
    // 0x483634: 0x8fa30570  lw          $v1, 0x570($sp)
    ctx->pc = 0x483634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_483638:
    // 0x483638: 0x8fa2050c  lw          $v0, 0x50C($sp)
    ctx->pc = 0x483638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_48363c:
    // 0x48363c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48363cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_483640:
    // 0x483640: 0x8fa30510  lw          $v1, 0x510($sp)
    ctx->pc = 0x483640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_483644:
    // 0x483644: 0x8fa2050c  lw          $v0, 0x50C($sp)
    ctx->pc = 0x483644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_483648:
    // 0x483648: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x483648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_48364c:
    // 0x48364c: 0x8fa2050c  lw          $v0, 0x50C($sp)
    ctx->pc = 0x48364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_483650:
    // 0x483650: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x483650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_483654:
    // 0x483654: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x483654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_483658:
    // 0x483658: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x483658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_48365c:
    // 0x48365c: 0xc0bc77e  jal         func_2F1DF8
label_483660:
    if (ctx->pc == 0x483660u) {
        ctx->pc = 0x483664u;
        goto label_483664;
    }
    ctx->pc = 0x48365Cu;
    SET_GPR_U32(ctx, 31, 0x483664u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x48365Cu, 0x483664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483664u;
label_483664:
    // 0x483664: 0x8fa2050c  lw          $v0, 0x50C($sp)
    ctx->pc = 0x483664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_483668:
    // 0x483668: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x483668u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
label_48366c:
    // 0x48366c: 0x8fa4050c  lw          $a0, 0x50C($sp)
    ctx->pc = 0x48366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_483670:
    // 0x483670: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x483670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_483674:
    // 0x483674: 0x8fa50580  lw          $a1, 0x580($sp)
    ctx->pc = 0x483674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
label_483678:
    // 0x483678: 0x8fa6050c  lw          $a2, 0x50C($sp)
    ctx->pc = 0x483678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_48367c:
    // 0x48367c: 0xacc50058  sw          $a1, 0x58($a2)
    ctx->pc = 0x48367cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 5));
label_483680:
    // 0x483680: 0x8fa20590  lw          $v0, 0x590($sp)
    ctx->pc = 0x483680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
label_483684:
    // 0x483684: 0x8fa4050c  lw          $a0, 0x50C($sp)
    ctx->pc = 0x483684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_483688:
    // 0x483688: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x483688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
label_48368c:
    // 0x48368c: 0x8fa50520  lw          $a1, 0x520($sp)
    ctx->pc = 0x48368cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_483690:
    // 0x483690: 0x24a4001c  addiu       $a0, $a1, 0x1C
    ctx->pc = 0x483690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_483694:
    // 0x483694: 0x27a5050c  addiu       $a1, $sp, 0x50C
    ctx->pc = 0x483694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1292));
label_483698:
    // 0x483698: 0xc120eb8  jal         func_483AE0
label_48369c:
    if (ctx->pc == 0x48369Cu) {
        ctx->pc = 0x4836A0u;
        goto label_4836a0;
    }
    ctx->pc = 0x483698u;
    SET_GPR_U32(ctx, 31, 0x4836A0u);
    ctx->pc = 0x483AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483AE0u, 0x483698u, 0x4836A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4836A0u;
label_4836a0:
    // 0x4836a0: 0x8fa40520  lw          $a0, 0x520($sp)
    ctx->pc = 0x4836a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_4836a4:
    // 0x4836a4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x4836a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4836a8:
    // 0x4836a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4836ac:
    if (ctx->pc == 0x4836ACu) {
        ctx->pc = 0x4836B0u;
        goto label_4836b0;
    }
    ctx->pc = 0x4836A8u;
    {
        const bool branch_taken_0x4836a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4836a8) {
            ctx->pc = 0x4836C0u;
            goto label_4836c0;
        }
    }
    ctx->pc = 0x4836B0u;
label_4836b0:
    // 0x4836b0: 0x8fb00520  lw          $s0, 0x520($sp)
    ctx->pc = 0x4836b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_4836b4:
    // 0x4836b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4836b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4836b8:
    // 0x4836b8: 0xc121094  jal         func_484250
label_4836bc:
    if (ctx->pc == 0x4836BCu) {
        ctx->pc = 0x4836C0u;
        goto label_4836c0;
    }
    ctx->pc = 0x4836B8u;
    SET_GPR_U32(ctx, 31, 0x4836C0u);
    ctx->pc = 0x484250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484250u, 0x4836B8u, 0x4836C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4836C0u;
label_4836c0:
    // 0x4836c0: 0x1240004a  beqz        $s2, . + 4 + (0x4A << 2)
label_4836c4:
    if (ctx->pc == 0x4836C4u) {
        ctx->pc = 0x4836C8u;
        goto label_4836c8;
    }
    ctx->pc = 0x4836C0u;
    {
        const bool branch_taken_0x4836c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4836c0) {
            ctx->pc = 0x4837ECu;
            goto label_4837ec;
        }
    }
    ctx->pc = 0x4836C8u;
label_4836c8:
    // 0x4836c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4836c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4836cc:
    // 0x4836cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4836ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4836d0:
    // 0x4836d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4836d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4836d4:
    // 0x4836d4: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
label_4836d8:
    if (ctx->pc == 0x4836D8u) {
        ctx->pc = 0x4836DCu;
        goto label_4836dc;
    }
    ctx->pc = 0x4836D4u;
    {
        const bool branch_taken_0x4836d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4836d4) {
            ctx->pc = 0x4837B4u;
            goto label_4837b4;
        }
    }
    ctx->pc = 0x4836DCu;
label_4836dc:
    // 0x4836dc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4836dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4836e0:
    // 0x4836e0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4836e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4836e4:
    // 0x4836e4: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x4836e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_4836e8:
    // 0x4836e8: 0xc115ee8  jal         func_457BA0
label_4836ec:
    if (ctx->pc == 0x4836ECu) {
        ctx->pc = 0x4836F0u;
        goto label_4836f0;
    }
    ctx->pc = 0x4836E8u;
    SET_GPR_U32(ctx, 31, 0x4836F0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4836E8u, 0x4836F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4836F0u;
label_4836f0:
    // 0x4836f0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_4836f4:
    if (ctx->pc == 0x4836F4u) {
        ctx->pc = 0x4836F8u;
        goto label_4836f8;
    }
    ctx->pc = 0x4836F0u;
    {
        const bool branch_taken_0x4836f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4836f0) {
            ctx->pc = 0x48379Cu;
            goto label_48379c;
        }
    }
    ctx->pc = 0x4836F8u;
label_4836f8:
    // 0x4836f8: 0x8fa404c8  lw          $a0, 0x4C8($sp)
    ctx->pc = 0x4836f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_4836fc:
    // 0x4836fc: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_483700:
    if (ctx->pc == 0x483700u) {
        ctx->pc = 0x483704u;
        goto label_483704;
    }
    ctx->pc = 0x4836FCu;
    {
        const bool branch_taken_0x4836fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4836fc) {
            ctx->pc = 0x48379Cu;
            goto label_48379c;
        }
    }
    ctx->pc = 0x483704u;
label_483704:
    // 0x483704: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x483704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_483708:
    // 0x483708: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x483708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48370c:
    // 0x48370c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x48370cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_483710:
    // 0x483710: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x483710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_483714:
    // 0x483714: 0x8fa204c4  lw          $v0, 0x4C4($sp)
    ctx->pc = 0x483714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1220)));
label_483718:
    // 0x483718: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x483718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48371c:
    // 0x48371c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48371cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_483720:
    // 0x483720: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x483720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_483724:
    // 0x483724: 0x240800c9  addiu       $t0, $zero, 0xC9
    ctx->pc = 0x483724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_483728:
    // 0x483728: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x483728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48372c:
    // 0x48372c: 0xc113940  jal         func_44E500
label_483730:
    if (ctx->pc == 0x483730u) {
        ctx->pc = 0x483734u;
        goto label_483734;
    }
    ctx->pc = 0x48372Cu;
    SET_GPR_U32(ctx, 31, 0x483734u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48372Cu, 0x483734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483734u;
label_483734:
    // 0x483734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x483734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483738:
    // 0x483738: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x483738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48373c:
    // 0x48373c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x48373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_483740:
    // 0x483740: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x483740u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_483744:
    // 0x483744: 0x24e73be0  addiu       $a3, $a3, 0x3BE0
    ctx->pc = 0x483744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15328));
label_483748:
    // 0x483748: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x483748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_48374c:
    // 0x48374c: 0x8fa80530  lw          $t0, 0x530($sp)
    ctx->pc = 0x48374cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_483750:
    // 0x483750: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x483750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_483754:
    // 0x483754: 0xc115c24  jal         func_457090
label_483758:
    if (ctx->pc == 0x483758u) {
        ctx->pc = 0x48375Cu;
        goto label_48375c;
    }
    ctx->pc = 0x483754u;
    SET_GPR_U32(ctx, 31, 0x48375Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x483754u, 0x48375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48375Cu;
label_48375c:
    // 0x48375c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x48375cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483760:
    // 0x483760: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x483760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_483764:
    // 0x483764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x483764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483768:
    // 0x483768: 0x8fa204c8  lw          $v0, 0x4C8($sp)
    ctx->pc = 0x483768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_48376c:
    // 0x48376c: 0x40f809  jalr        $v0
label_483770:
    if (ctx->pc == 0x483770u) {
        ctx->pc = 0x483774u;
        goto label_483774;
    }
    ctx->pc = 0x48376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483774u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48376Cu, 0x483774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483774u;
label_483774:
    // 0x483774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x483774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483778:
    // 0x483778: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x483778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48377c:
    // 0x48377c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_483780:
    if (ctx->pc == 0x483780u) {
        ctx->pc = 0x483784u;
        goto label_483784;
    }
    ctx->pc = 0x48377Cu;
    {
        const bool branch_taken_0x48377c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48377c) {
            ctx->pc = 0x48378Cu;
            goto label_48378c;
        }
    }
    ctx->pc = 0x483784u;
label_483784:
    // 0x483784: 0xd  break       0
    ctx->pc = 0x483784u;
    runtime->handleBreak(rdram, ctx);
label_483788:
    // 0x483788: 0x0  nop
    ctx->pc = 0x483788u;
    // NOP
label_48378c:
    // 0x48378c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_483790:
    // 0x483790: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x483790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_483794:
    // 0x483794: 0xc11392c  jal         func_44E4B0
label_483798:
    if (ctx->pc == 0x483798u) {
        ctx->pc = 0x48379Cu;
        goto label_48379c;
    }
    ctx->pc = 0x483794u;
    SET_GPR_U32(ctx, 31, 0x48379Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x483794u, 0x48379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48379Cu;
label_48379c:
    // 0x48379c: 0x8fa40520  lw          $a0, 0x520($sp)
    ctx->pc = 0x48379cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_4837a0:
    // 0x4837a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4837a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4837a4:
    // 0x4837a4: 0xc1208e8  jal         func_4823A0
label_4837a8:
    if (ctx->pc == 0x4837A8u) {
        ctx->pc = 0x4837ACu;
        goto label_4837ac;
    }
    ctx->pc = 0x4837A4u;
    SET_GPR_U32(ctx, 31, 0x4837ACu);
    ctx->pc = 0x4823A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4823A0u, 0x4837A4u, 0x4837ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4837ACu;
label_4837ac:
    // 0x4837ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4837acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4837b0:
    // 0x4837b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4837b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4837b4:
    // 0x4837b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4837b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4837b8:
    // 0x4837b8: 0xc0ef356  jal         func_3BCD58
label_4837bc:
    if (ctx->pc == 0x4837BCu) {
        ctx->pc = 0x4837C0u;
        goto label_4837c0;
    }
    ctx->pc = 0x4837B8u;
    SET_GPR_U32(ctx, 31, 0x4837C0u);
    ctx->pc = 0x3BCD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD58u, 0x4837B8u, 0x4837C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4837C0u;
label_4837c0:
    // 0x4837c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4837c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4837c4:
    // 0x4837c4: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x4837c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_4837c8:
    // 0x4837c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4837c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4837cc:
    // 0x4837cc: 0xc1208a8  jal         func_4822A0
label_4837d0:
    if (ctx->pc == 0x4837D0u) {
        ctx->pc = 0x4837D4u;
        goto label_4837d4;
    }
    ctx->pc = 0x4837CCu;
    SET_GPR_U32(ctx, 31, 0x4837D4u);
    ctx->pc = 0x4822A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4822A0u, 0x4837CCu, 0x4837D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4837D4u;
label_4837d4:
    // 0x4837d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4837d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4837d8:
    // 0x4837d8: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x4837d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_4837dc:
    // 0x4837dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4837dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4837e0:
    // 0x4837e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4837e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4837e4:
    // 0x4837e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4837e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4837e8:
    // 0x4837e8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x4837e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_4837ec:
    // 0x4837ec: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x4837ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4837f0:
    // 0x4837f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4837f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4837f4:
    // 0x4837f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4837f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4837f8:
    // 0x4837f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4837f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4837fc:
    // 0x4837fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4837fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483800:
    // 0x483800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_483804:
    // 0x483804: 0x27bd05a0  addiu       $sp, $sp, 0x5A0
    ctx->pc = 0x483804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
label_483808:
    // 0x483808: 0x3e00008  jr          $ra
label_48380c:
    if (ctx->pc == 0x48380Cu) {
        ctx->pc = 0x483810u;
        goto label_fallthrough_0x483808;
    }
    ctx->pc = 0x483808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x483808:
    ctx->pc = 0x483810u;
}
