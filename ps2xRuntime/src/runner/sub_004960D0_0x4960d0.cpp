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

// Function: sub_004960D0
// Address: 0x4960d0 - 0x4968e0
void sub_004960D0_0x4960d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004960D0_0x4960d0");
#endif

    switch (ctx->pc) {
        case 0x4960d0u: goto label_4960d0;
        case 0x4960d4u: goto label_4960d4;
        case 0x4960d8u: goto label_4960d8;
        case 0x4960dcu: goto label_4960dc;
        case 0x4960e0u: goto label_4960e0;
        case 0x4960e4u: goto label_4960e4;
        case 0x4960e8u: goto label_4960e8;
        case 0x4960ecu: goto label_4960ec;
        case 0x4960f0u: goto label_4960f0;
        case 0x4960f4u: goto label_4960f4;
        case 0x4960f8u: goto label_4960f8;
        case 0x4960fcu: goto label_4960fc;
        case 0x496100u: goto label_496100;
        case 0x496104u: goto label_496104;
        case 0x496108u: goto label_496108;
        case 0x49610cu: goto label_49610c;
        case 0x496110u: goto label_496110;
        case 0x496114u: goto label_496114;
        case 0x496118u: goto label_496118;
        case 0x49611cu: goto label_49611c;
        case 0x496120u: goto label_496120;
        case 0x496124u: goto label_496124;
        case 0x496128u: goto label_496128;
        case 0x49612cu: goto label_49612c;
        case 0x496130u: goto label_496130;
        case 0x496134u: goto label_496134;
        case 0x496138u: goto label_496138;
        case 0x49613cu: goto label_49613c;
        case 0x496140u: goto label_496140;
        case 0x496144u: goto label_496144;
        case 0x496148u: goto label_496148;
        case 0x49614cu: goto label_49614c;
        case 0x496150u: goto label_496150;
        case 0x496154u: goto label_496154;
        case 0x496158u: goto label_496158;
        case 0x49615cu: goto label_49615c;
        case 0x496160u: goto label_496160;
        case 0x496164u: goto label_496164;
        case 0x496168u: goto label_496168;
        case 0x49616cu: goto label_49616c;
        case 0x496170u: goto label_496170;
        case 0x496174u: goto label_496174;
        case 0x496178u: goto label_496178;
        case 0x49617cu: goto label_49617c;
        case 0x496180u: goto label_496180;
        case 0x496184u: goto label_496184;
        case 0x496188u: goto label_496188;
        case 0x49618cu: goto label_49618c;
        case 0x496190u: goto label_496190;
        case 0x496194u: goto label_496194;
        case 0x496198u: goto label_496198;
        case 0x49619cu: goto label_49619c;
        case 0x4961a0u: goto label_4961a0;
        case 0x4961a4u: goto label_4961a4;
        case 0x4961a8u: goto label_4961a8;
        case 0x4961acu: goto label_4961ac;
        case 0x4961b0u: goto label_4961b0;
        case 0x4961b4u: goto label_4961b4;
        case 0x4961b8u: goto label_4961b8;
        case 0x4961bcu: goto label_4961bc;
        case 0x4961c0u: goto label_4961c0;
        case 0x4961c4u: goto label_4961c4;
        case 0x4961c8u: goto label_4961c8;
        case 0x4961ccu: goto label_4961cc;
        case 0x4961d0u: goto label_4961d0;
        case 0x4961d4u: goto label_4961d4;
        case 0x4961d8u: goto label_4961d8;
        case 0x4961dcu: goto label_4961dc;
        case 0x4961e0u: goto label_4961e0;
        case 0x4961e4u: goto label_4961e4;
        case 0x4961e8u: goto label_4961e8;
        case 0x4961ecu: goto label_4961ec;
        case 0x4961f0u: goto label_4961f0;
        case 0x4961f4u: goto label_4961f4;
        case 0x4961f8u: goto label_4961f8;
        case 0x4961fcu: goto label_4961fc;
        case 0x496200u: goto label_496200;
        case 0x496204u: goto label_496204;
        case 0x496208u: goto label_496208;
        case 0x49620cu: goto label_49620c;
        case 0x496210u: goto label_496210;
        case 0x496214u: goto label_496214;
        case 0x496218u: goto label_496218;
        case 0x49621cu: goto label_49621c;
        case 0x496220u: goto label_496220;
        case 0x496224u: goto label_496224;
        case 0x496228u: goto label_496228;
        case 0x49622cu: goto label_49622c;
        case 0x496230u: goto label_496230;
        case 0x496234u: goto label_496234;
        case 0x496238u: goto label_496238;
        case 0x49623cu: goto label_49623c;
        case 0x496240u: goto label_496240;
        case 0x496244u: goto label_496244;
        case 0x496248u: goto label_496248;
        case 0x49624cu: goto label_49624c;
        case 0x496250u: goto label_496250;
        case 0x496254u: goto label_496254;
        case 0x496258u: goto label_496258;
        case 0x49625cu: goto label_49625c;
        case 0x496260u: goto label_496260;
        case 0x496264u: goto label_496264;
        case 0x496268u: goto label_496268;
        case 0x49626cu: goto label_49626c;
        case 0x496270u: goto label_496270;
        case 0x496274u: goto label_496274;
        case 0x496278u: goto label_496278;
        case 0x49627cu: goto label_49627c;
        case 0x496280u: goto label_496280;
        case 0x496284u: goto label_496284;
        case 0x496288u: goto label_496288;
        case 0x49628cu: goto label_49628c;
        case 0x496290u: goto label_496290;
        case 0x496294u: goto label_496294;
        case 0x496298u: goto label_496298;
        case 0x49629cu: goto label_49629c;
        case 0x4962a0u: goto label_4962a0;
        case 0x4962a4u: goto label_4962a4;
        case 0x4962a8u: goto label_4962a8;
        case 0x4962acu: goto label_4962ac;
        case 0x4962b0u: goto label_4962b0;
        case 0x4962b4u: goto label_4962b4;
        case 0x4962b8u: goto label_4962b8;
        case 0x4962bcu: goto label_4962bc;
        case 0x4962c0u: goto label_4962c0;
        case 0x4962c4u: goto label_4962c4;
        case 0x4962c8u: goto label_4962c8;
        case 0x4962ccu: goto label_4962cc;
        case 0x4962d0u: goto label_4962d0;
        case 0x4962d4u: goto label_4962d4;
        case 0x4962d8u: goto label_4962d8;
        case 0x4962dcu: goto label_4962dc;
        case 0x4962e0u: goto label_4962e0;
        case 0x4962e4u: goto label_4962e4;
        case 0x4962e8u: goto label_4962e8;
        case 0x4962ecu: goto label_4962ec;
        case 0x4962f0u: goto label_4962f0;
        case 0x4962f4u: goto label_4962f4;
        case 0x4962f8u: goto label_4962f8;
        case 0x4962fcu: goto label_4962fc;
        case 0x496300u: goto label_496300;
        case 0x496304u: goto label_496304;
        case 0x496308u: goto label_496308;
        case 0x49630cu: goto label_49630c;
        case 0x496310u: goto label_496310;
        case 0x496314u: goto label_496314;
        case 0x496318u: goto label_496318;
        case 0x49631cu: goto label_49631c;
        case 0x496320u: goto label_496320;
        case 0x496324u: goto label_496324;
        case 0x496328u: goto label_496328;
        case 0x49632cu: goto label_49632c;
        case 0x496330u: goto label_496330;
        case 0x496334u: goto label_496334;
        case 0x496338u: goto label_496338;
        case 0x49633cu: goto label_49633c;
        case 0x496340u: goto label_496340;
        case 0x496344u: goto label_496344;
        case 0x496348u: goto label_496348;
        case 0x49634cu: goto label_49634c;
        case 0x496350u: goto label_496350;
        case 0x496354u: goto label_496354;
        case 0x496358u: goto label_496358;
        case 0x49635cu: goto label_49635c;
        case 0x496360u: goto label_496360;
        case 0x496364u: goto label_496364;
        case 0x496368u: goto label_496368;
        case 0x49636cu: goto label_49636c;
        case 0x496370u: goto label_496370;
        case 0x496374u: goto label_496374;
        case 0x496378u: goto label_496378;
        case 0x49637cu: goto label_49637c;
        case 0x496380u: goto label_496380;
        case 0x496384u: goto label_496384;
        case 0x496388u: goto label_496388;
        case 0x49638cu: goto label_49638c;
        case 0x496390u: goto label_496390;
        case 0x496394u: goto label_496394;
        case 0x496398u: goto label_496398;
        case 0x49639cu: goto label_49639c;
        case 0x4963a0u: goto label_4963a0;
        case 0x4963a4u: goto label_4963a4;
        case 0x4963a8u: goto label_4963a8;
        case 0x4963acu: goto label_4963ac;
        case 0x4963b0u: goto label_4963b0;
        case 0x4963b4u: goto label_4963b4;
        case 0x4963b8u: goto label_4963b8;
        case 0x4963bcu: goto label_4963bc;
        case 0x4963c0u: goto label_4963c0;
        case 0x4963c4u: goto label_4963c4;
        case 0x4963c8u: goto label_4963c8;
        case 0x4963ccu: goto label_4963cc;
        case 0x4963d0u: goto label_4963d0;
        case 0x4963d4u: goto label_4963d4;
        case 0x4963d8u: goto label_4963d8;
        case 0x4963dcu: goto label_4963dc;
        case 0x4963e0u: goto label_4963e0;
        case 0x4963e4u: goto label_4963e4;
        case 0x4963e8u: goto label_4963e8;
        case 0x4963ecu: goto label_4963ec;
        case 0x4963f0u: goto label_4963f0;
        case 0x4963f4u: goto label_4963f4;
        case 0x4963f8u: goto label_4963f8;
        case 0x4963fcu: goto label_4963fc;
        case 0x496400u: goto label_496400;
        case 0x496404u: goto label_496404;
        case 0x496408u: goto label_496408;
        case 0x49640cu: goto label_49640c;
        case 0x496410u: goto label_496410;
        case 0x496414u: goto label_496414;
        case 0x496418u: goto label_496418;
        case 0x49641cu: goto label_49641c;
        case 0x496420u: goto label_496420;
        case 0x496424u: goto label_496424;
        case 0x496428u: goto label_496428;
        case 0x49642cu: goto label_49642c;
        case 0x496430u: goto label_496430;
        case 0x496434u: goto label_496434;
        case 0x496438u: goto label_496438;
        case 0x49643cu: goto label_49643c;
        case 0x496440u: goto label_496440;
        case 0x496444u: goto label_496444;
        case 0x496448u: goto label_496448;
        case 0x49644cu: goto label_49644c;
        case 0x496450u: goto label_496450;
        case 0x496454u: goto label_496454;
        case 0x496458u: goto label_496458;
        case 0x49645cu: goto label_49645c;
        case 0x496460u: goto label_496460;
        case 0x496464u: goto label_496464;
        case 0x496468u: goto label_496468;
        case 0x49646cu: goto label_49646c;
        case 0x496470u: goto label_496470;
        case 0x496474u: goto label_496474;
        case 0x496478u: goto label_496478;
        case 0x49647cu: goto label_49647c;
        case 0x496480u: goto label_496480;
        case 0x496484u: goto label_496484;
        case 0x496488u: goto label_496488;
        case 0x49648cu: goto label_49648c;
        case 0x496490u: goto label_496490;
        case 0x496494u: goto label_496494;
        case 0x496498u: goto label_496498;
        case 0x49649cu: goto label_49649c;
        case 0x4964a0u: goto label_4964a0;
        case 0x4964a4u: goto label_4964a4;
        case 0x4964a8u: goto label_4964a8;
        case 0x4964acu: goto label_4964ac;
        case 0x4964b0u: goto label_4964b0;
        case 0x4964b4u: goto label_4964b4;
        case 0x4964b8u: goto label_4964b8;
        case 0x4964bcu: goto label_4964bc;
        case 0x4964c0u: goto label_4964c0;
        case 0x4964c4u: goto label_4964c4;
        case 0x4964c8u: goto label_4964c8;
        case 0x4964ccu: goto label_4964cc;
        case 0x4964d0u: goto label_4964d0;
        case 0x4964d4u: goto label_4964d4;
        case 0x4964d8u: goto label_4964d8;
        case 0x4964dcu: goto label_4964dc;
        case 0x4964e0u: goto label_4964e0;
        case 0x4964e4u: goto label_4964e4;
        case 0x4964e8u: goto label_4964e8;
        case 0x4964ecu: goto label_4964ec;
        case 0x4964f0u: goto label_4964f0;
        case 0x4964f4u: goto label_4964f4;
        case 0x4964f8u: goto label_4964f8;
        case 0x4964fcu: goto label_4964fc;
        case 0x496500u: goto label_496500;
        case 0x496504u: goto label_496504;
        case 0x496508u: goto label_496508;
        case 0x49650cu: goto label_49650c;
        case 0x496510u: goto label_496510;
        case 0x496514u: goto label_496514;
        case 0x496518u: goto label_496518;
        case 0x49651cu: goto label_49651c;
        case 0x496520u: goto label_496520;
        case 0x496524u: goto label_496524;
        case 0x496528u: goto label_496528;
        case 0x49652cu: goto label_49652c;
        case 0x496530u: goto label_496530;
        case 0x496534u: goto label_496534;
        case 0x496538u: goto label_496538;
        case 0x49653cu: goto label_49653c;
        case 0x496540u: goto label_496540;
        case 0x496544u: goto label_496544;
        case 0x496548u: goto label_496548;
        case 0x49654cu: goto label_49654c;
        case 0x496550u: goto label_496550;
        case 0x496554u: goto label_496554;
        case 0x496558u: goto label_496558;
        case 0x49655cu: goto label_49655c;
        case 0x496560u: goto label_496560;
        case 0x496564u: goto label_496564;
        case 0x496568u: goto label_496568;
        case 0x49656cu: goto label_49656c;
        case 0x496570u: goto label_496570;
        case 0x496574u: goto label_496574;
        case 0x496578u: goto label_496578;
        case 0x49657cu: goto label_49657c;
        case 0x496580u: goto label_496580;
        case 0x496584u: goto label_496584;
        case 0x496588u: goto label_496588;
        case 0x49658cu: goto label_49658c;
        case 0x496590u: goto label_496590;
        case 0x496594u: goto label_496594;
        case 0x496598u: goto label_496598;
        case 0x49659cu: goto label_49659c;
        case 0x4965a0u: goto label_4965a0;
        case 0x4965a4u: goto label_4965a4;
        case 0x4965a8u: goto label_4965a8;
        case 0x4965acu: goto label_4965ac;
        case 0x4965b0u: goto label_4965b0;
        case 0x4965b4u: goto label_4965b4;
        case 0x4965b8u: goto label_4965b8;
        case 0x4965bcu: goto label_4965bc;
        case 0x4965c0u: goto label_4965c0;
        case 0x4965c4u: goto label_4965c4;
        case 0x4965c8u: goto label_4965c8;
        case 0x4965ccu: goto label_4965cc;
        case 0x4965d0u: goto label_4965d0;
        case 0x4965d4u: goto label_4965d4;
        case 0x4965d8u: goto label_4965d8;
        case 0x4965dcu: goto label_4965dc;
        case 0x4965e0u: goto label_4965e0;
        case 0x4965e4u: goto label_4965e4;
        case 0x4965e8u: goto label_4965e8;
        case 0x4965ecu: goto label_4965ec;
        case 0x4965f0u: goto label_4965f0;
        case 0x4965f4u: goto label_4965f4;
        case 0x4965f8u: goto label_4965f8;
        case 0x4965fcu: goto label_4965fc;
        case 0x496600u: goto label_496600;
        case 0x496604u: goto label_496604;
        case 0x496608u: goto label_496608;
        case 0x49660cu: goto label_49660c;
        case 0x496610u: goto label_496610;
        case 0x496614u: goto label_496614;
        case 0x496618u: goto label_496618;
        case 0x49661cu: goto label_49661c;
        case 0x496620u: goto label_496620;
        case 0x496624u: goto label_496624;
        case 0x496628u: goto label_496628;
        case 0x49662cu: goto label_49662c;
        case 0x496630u: goto label_496630;
        case 0x496634u: goto label_496634;
        case 0x496638u: goto label_496638;
        case 0x49663cu: goto label_49663c;
        case 0x496640u: goto label_496640;
        case 0x496644u: goto label_496644;
        case 0x496648u: goto label_496648;
        case 0x49664cu: goto label_49664c;
        case 0x496650u: goto label_496650;
        case 0x496654u: goto label_496654;
        case 0x496658u: goto label_496658;
        case 0x49665cu: goto label_49665c;
        case 0x496660u: goto label_496660;
        case 0x496664u: goto label_496664;
        case 0x496668u: goto label_496668;
        case 0x49666cu: goto label_49666c;
        case 0x496670u: goto label_496670;
        case 0x496674u: goto label_496674;
        case 0x496678u: goto label_496678;
        case 0x49667cu: goto label_49667c;
        case 0x496680u: goto label_496680;
        case 0x496684u: goto label_496684;
        case 0x496688u: goto label_496688;
        case 0x49668cu: goto label_49668c;
        case 0x496690u: goto label_496690;
        case 0x496694u: goto label_496694;
        case 0x496698u: goto label_496698;
        case 0x49669cu: goto label_49669c;
        case 0x4966a0u: goto label_4966a0;
        case 0x4966a4u: goto label_4966a4;
        case 0x4966a8u: goto label_4966a8;
        case 0x4966acu: goto label_4966ac;
        case 0x4966b0u: goto label_4966b0;
        case 0x4966b4u: goto label_4966b4;
        case 0x4966b8u: goto label_4966b8;
        case 0x4966bcu: goto label_4966bc;
        case 0x4966c0u: goto label_4966c0;
        case 0x4966c4u: goto label_4966c4;
        case 0x4966c8u: goto label_4966c8;
        case 0x4966ccu: goto label_4966cc;
        case 0x4966d0u: goto label_4966d0;
        case 0x4966d4u: goto label_4966d4;
        case 0x4966d8u: goto label_4966d8;
        case 0x4966dcu: goto label_4966dc;
        case 0x4966e0u: goto label_4966e0;
        case 0x4966e4u: goto label_4966e4;
        case 0x4966e8u: goto label_4966e8;
        case 0x4966ecu: goto label_4966ec;
        case 0x4966f0u: goto label_4966f0;
        case 0x4966f4u: goto label_4966f4;
        case 0x4966f8u: goto label_4966f8;
        case 0x4966fcu: goto label_4966fc;
        case 0x496700u: goto label_496700;
        case 0x496704u: goto label_496704;
        case 0x496708u: goto label_496708;
        case 0x49670cu: goto label_49670c;
        case 0x496710u: goto label_496710;
        case 0x496714u: goto label_496714;
        case 0x496718u: goto label_496718;
        case 0x49671cu: goto label_49671c;
        case 0x496720u: goto label_496720;
        case 0x496724u: goto label_496724;
        case 0x496728u: goto label_496728;
        case 0x49672cu: goto label_49672c;
        case 0x496730u: goto label_496730;
        case 0x496734u: goto label_496734;
        case 0x496738u: goto label_496738;
        case 0x49673cu: goto label_49673c;
        case 0x496740u: goto label_496740;
        case 0x496744u: goto label_496744;
        case 0x496748u: goto label_496748;
        case 0x49674cu: goto label_49674c;
        case 0x496750u: goto label_496750;
        case 0x496754u: goto label_496754;
        case 0x496758u: goto label_496758;
        case 0x49675cu: goto label_49675c;
        case 0x496760u: goto label_496760;
        case 0x496764u: goto label_496764;
        case 0x496768u: goto label_496768;
        case 0x49676cu: goto label_49676c;
        case 0x496770u: goto label_496770;
        case 0x496774u: goto label_496774;
        case 0x496778u: goto label_496778;
        case 0x49677cu: goto label_49677c;
        case 0x496780u: goto label_496780;
        case 0x496784u: goto label_496784;
        case 0x496788u: goto label_496788;
        case 0x49678cu: goto label_49678c;
        case 0x496790u: goto label_496790;
        case 0x496794u: goto label_496794;
        case 0x496798u: goto label_496798;
        case 0x49679cu: goto label_49679c;
        case 0x4967a0u: goto label_4967a0;
        case 0x4967a4u: goto label_4967a4;
        case 0x4967a8u: goto label_4967a8;
        case 0x4967acu: goto label_4967ac;
        case 0x4967b0u: goto label_4967b0;
        case 0x4967b4u: goto label_4967b4;
        case 0x4967b8u: goto label_4967b8;
        case 0x4967bcu: goto label_4967bc;
        case 0x4967c0u: goto label_4967c0;
        case 0x4967c4u: goto label_4967c4;
        case 0x4967c8u: goto label_4967c8;
        case 0x4967ccu: goto label_4967cc;
        case 0x4967d0u: goto label_4967d0;
        case 0x4967d4u: goto label_4967d4;
        case 0x4967d8u: goto label_4967d8;
        case 0x4967dcu: goto label_4967dc;
        case 0x4967e0u: goto label_4967e0;
        case 0x4967e4u: goto label_4967e4;
        case 0x4967e8u: goto label_4967e8;
        case 0x4967ecu: goto label_4967ec;
        case 0x4967f0u: goto label_4967f0;
        case 0x4967f4u: goto label_4967f4;
        case 0x4967f8u: goto label_4967f8;
        case 0x4967fcu: goto label_4967fc;
        case 0x496800u: goto label_496800;
        case 0x496804u: goto label_496804;
        case 0x496808u: goto label_496808;
        case 0x49680cu: goto label_49680c;
        case 0x496810u: goto label_496810;
        case 0x496814u: goto label_496814;
        case 0x496818u: goto label_496818;
        case 0x49681cu: goto label_49681c;
        case 0x496820u: goto label_496820;
        case 0x496824u: goto label_496824;
        case 0x496828u: goto label_496828;
        case 0x49682cu: goto label_49682c;
        case 0x496830u: goto label_496830;
        case 0x496834u: goto label_496834;
        case 0x496838u: goto label_496838;
        case 0x49683cu: goto label_49683c;
        case 0x496840u: goto label_496840;
        case 0x496844u: goto label_496844;
        case 0x496848u: goto label_496848;
        case 0x49684cu: goto label_49684c;
        case 0x496850u: goto label_496850;
        case 0x496854u: goto label_496854;
        case 0x496858u: goto label_496858;
        case 0x49685cu: goto label_49685c;
        case 0x496860u: goto label_496860;
        case 0x496864u: goto label_496864;
        case 0x496868u: goto label_496868;
        case 0x49686cu: goto label_49686c;
        case 0x496870u: goto label_496870;
        case 0x496874u: goto label_496874;
        case 0x496878u: goto label_496878;
        case 0x49687cu: goto label_49687c;
        case 0x496880u: goto label_496880;
        case 0x496884u: goto label_496884;
        case 0x496888u: goto label_496888;
        case 0x49688cu: goto label_49688c;
        case 0x496890u: goto label_496890;
        case 0x496894u: goto label_496894;
        case 0x496898u: goto label_496898;
        case 0x49689cu: goto label_49689c;
        case 0x4968a0u: goto label_4968a0;
        case 0x4968a4u: goto label_4968a4;
        case 0x4968a8u: goto label_4968a8;
        case 0x4968acu: goto label_4968ac;
        case 0x4968b0u: goto label_4968b0;
        case 0x4968b4u: goto label_4968b4;
        case 0x4968b8u: goto label_4968b8;
        case 0x4968bcu: goto label_4968bc;
        case 0x4968c0u: goto label_4968c0;
        case 0x4968c4u: goto label_4968c4;
        case 0x4968c8u: goto label_4968c8;
        case 0x4968ccu: goto label_4968cc;
        case 0x4968d0u: goto label_4968d0;
        case 0x4968d4u: goto label_4968d4;
        case 0x4968d8u: goto label_4968d8;
        case 0x4968dcu: goto label_4968dc;
        default: break;
    }

    ctx->pc = 0x4960d0u;

label_4960d0:
    // 0x4960d0: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x4960d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_4960d4:
    // 0x4960d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4960d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4960d8:
    // 0x4960d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4960d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4960dc:
    // 0x4960dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4960dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4960e0:
    // 0x4960e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4960e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4960e4:
    // 0x4960e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4960e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4960e8:
    // 0x4960e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4960e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4960ec:
    // 0x4960ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4960ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4960f0:
    // 0x4960f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4960f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4960f4:
    // 0x4960f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4960f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4960f8:
    // 0x4960f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4960f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4960fc:
    // 0x4960fc: 0xafa0045c  sw          $zero, 0x45C($sp)
    ctx->pc = 0x4960fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 0));
label_496100:
    // 0x496100: 0xafa00458  sw          $zero, 0x458($sp)
    ctx->pc = 0x496100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1112), GPR_U32(ctx, 0));
label_496104:
    // 0x496104: 0xafa00454  sw          $zero, 0x454($sp)
    ctx->pc = 0x496104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 0));
label_496108:
    // 0x496108: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x496108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49610c:
    // 0x49610c: 0x27a40448  addiu       $a0, $sp, 0x448
    ctx->pc = 0x49610cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1096));
label_496110:
    // 0x496110: 0xc0495e0  jal         func_125780
label_496114:
    if (ctx->pc == 0x496114u) {
        ctx->pc = 0x496118u;
        goto label_496118;
    }
    ctx->pc = 0x496110u;
    SET_GPR_U32(ctx, 31, 0x496118u);
    ctx->pc = 0x125780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125780u, 0x496110u, 0x496118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496118u;
label_496118:
    // 0x496118: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x496118u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49611c:
    // 0x49611c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x49611cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496120:
    // 0x496120: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x496120u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496124:
    // 0x496124: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x496124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496128:
    // 0x496128: 0x8f82c15c  lw          $v0, -0x3EA4($gp)
    ctx->pc = 0x496128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_49612c:
    // 0x49612c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_496130:
    if (ctx->pc == 0x496130u) {
        ctx->pc = 0x496134u;
        goto label_496134;
    }
    ctx->pc = 0x49612Cu;
    {
        const bool branch_taken_0x49612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49612c) {
            ctx->pc = 0x496140u;
            goto label_496140;
        }
    }
    ctx->pc = 0x496134u;
label_496134:
    // 0x496134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x496134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496138:
    // 0x496138: 0x100001db  b           . + 4 + (0x1DB << 2)
label_49613c:
    if (ctx->pc == 0x49613Cu) {
        ctx->pc = 0x496140u;
        goto label_496140;
    }
    ctx->pc = 0x496138u;
    {
        const bool branch_taken_0x496138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496138) {
            ctx->pc = 0x4968A8u;
            goto label_4968a8;
        }
    }
    ctx->pc = 0x496140u;
label_496140:
    // 0x496140: 0x8f83c15c  lw          $v1, -0x3EA4($gp)
    ctx->pc = 0x496140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_496144:
    // 0x496144: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x496144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_496148:
    // 0x496148: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_49614c:
    if (ctx->pc == 0x49614Cu) {
        ctx->pc = 0x496150u;
        goto label_496150;
    }
    ctx->pc = 0x496148u;
    {
        const bool branch_taken_0x496148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496148) {
            ctx->pc = 0x49616Cu;
            goto label_49616c;
        }
    }
    ctx->pc = 0x496150u;
label_496150:
    // 0x496150: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x496150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496154:
    // 0x496154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496158:
    // 0x496158: 0xc125548  jal         func_495520
label_49615c:
    if (ctx->pc == 0x49615Cu) {
        ctx->pc = 0x496160u;
        goto label_496160;
    }
    ctx->pc = 0x496158u;
    SET_GPR_U32(ctx, 31, 0x496160u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x496158u, 0x496160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496160u;
label_496160:
    // 0x496160: 0x8f82c17c  lw          $v0, -0x3E84($gp)
    ctx->pc = 0x496160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951292)));
label_496164:
    // 0x496164: 0x100001d0  b           . + 4 + (0x1D0 << 2)
label_496168:
    if (ctx->pc == 0x496168u) {
        ctx->pc = 0x49616Cu;
        goto label_49616c;
    }
    ctx->pc = 0x496164u;
    {
        const bool branch_taken_0x496164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496164) {
            ctx->pc = 0x4968A8u;
            goto label_4968a8;
        }
    }
    ctx->pc = 0x49616Cu;
label_49616c:
    // 0x49616c: 0xc117bcc  jal         func_45EF30
label_496170:
    if (ctx->pc == 0x496170u) {
        ctx->pc = 0x496174u;
        goto label_496174;
    }
    ctx->pc = 0x49616Cu;
    SET_GPR_U32(ctx, 31, 0x496174u);
    ctx->pc = 0x45EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF30u, 0x49616Cu, 0x496174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496174u;
label_496174:
    // 0x496174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x496174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_496178:
    // 0x496178: 0x2001027  not         $v0, $s0
    ctx->pc = 0x496178u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_49617c:
    // 0x49617c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x49617cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_496180:
    // 0x496180: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x496180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_496184:
    // 0x496184: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_496188:
    if (ctx->pc == 0x496188u) {
        ctx->pc = 0x49618Cu;
        goto label_49618c;
    }
    ctx->pc = 0x496184u;
    {
        const bool branch_taken_0x496184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x496184) {
            ctx->pc = 0x49623Cu;
            goto label_49623c;
        }
    }
    ctx->pc = 0x49618Cu;
label_49618c:
    // 0x49618c: 0x8f82b78c  lw          $v0, -0x4874($gp)
    ctx->pc = 0x49618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948748)));
label_496190:
    // 0x496190: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_496194:
    if (ctx->pc == 0x496194u) {
        ctx->pc = 0x496198u;
        goto label_496198;
    }
    ctx->pc = 0x496190u;
    {
        const bool branch_taken_0x496190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496190) {
            ctx->pc = 0x49623Cu;
            goto label_49623c;
        }
    }
    ctx->pc = 0x496198u;
label_496198:
    // 0x496198: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x496198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_49619c:
    // 0x49619c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x49619cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4961a0:
    // 0x4961a0: 0x27a60428  addiu       $a2, $sp, 0x428
    ctx->pc = 0x4961a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
label_4961a4:
    // 0x4961a4: 0xc115ee8  jal         func_457BA0
label_4961a8:
    if (ctx->pc == 0x4961A8u) {
        ctx->pc = 0x4961ACu;
        goto label_4961ac;
    }
    ctx->pc = 0x4961A4u;
    SET_GPR_U32(ctx, 31, 0x4961ACu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4961A4u, 0x4961ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4961ACu;
label_4961ac:
    // 0x4961ac: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4961b0:
    if (ctx->pc == 0x4961B0u) {
        ctx->pc = 0x4961B4u;
        goto label_4961b4;
    }
    ctx->pc = 0x4961ACu;
    {
        const bool branch_taken_0x4961ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4961ac) {
            ctx->pc = 0x49623Cu;
            goto label_49623c;
        }
    }
    ctx->pc = 0x4961B4u;
label_4961b4:
    // 0x4961b4: 0x8fa20430  lw          $v0, 0x430($sp)
    ctx->pc = 0x4961b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_4961b8:
    // 0x4961b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4961bc:
    if (ctx->pc == 0x4961BCu) {
        ctx->pc = 0x4961C0u;
        goto label_4961c0;
    }
    ctx->pc = 0x4961B8u;
    {
        const bool branch_taken_0x4961b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4961b8) {
            ctx->pc = 0x49623Cu;
            goto label_49623c;
        }
    }
    ctx->pc = 0x4961C0u;
label_4961c0:
    // 0x4961c0: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x4961c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4961c4:
    // 0x4961c4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4961c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4961c8:
    // 0x4961c8: 0x8fa6042c  lw          $a2, 0x42C($sp)
    ctx->pc = 0x4961c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
label_4961cc:
    // 0x4961cc: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4961ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4961d0:
    // 0x4961d0: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x4961d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_4961d4:
    // 0x4961d4: 0x240802f4  addiu       $t0, $zero, 0x2F4
    ctx->pc = 0x4961d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 756));
label_4961d8:
    // 0x4961d8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4961d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4961dc:
    // 0x4961dc: 0x25295660  addiu       $t1, $t1, 0x5660
    ctx->pc = 0x4961dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22112));
label_4961e0:
    // 0x4961e0: 0xc113940  jal         func_44E500
label_4961e4:
    if (ctx->pc == 0x4961E4u) {
        ctx->pc = 0x4961E8u;
        goto label_4961e8;
    }
    ctx->pc = 0x4961E0u;
    SET_GPR_U32(ctx, 31, 0x4961E8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4961E0u, 0x4961E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4961E8u;
label_4961e8:
    // 0x4961e8: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x4961e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4961ec:
    // 0x4961ec: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4961ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4961f0:
    // 0x4961f0: 0x24a55690  addiu       $a1, $a1, 0x5690
    ctx->pc = 0x4961f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22160));
label_4961f4:
    // 0x4961f4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4961f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4961f8:
    // 0x4961f8: 0x8c467e78  lw          $a2, 0x7E78($v0)
    ctx->pc = 0x4961f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_4961fc:
    // 0x4961fc: 0xc115c24  jal         func_457090
label_496200:
    if (ctx->pc == 0x496200u) {
        ctx->pc = 0x496204u;
        goto label_496204;
    }
    ctx->pc = 0x4961FCu;
    SET_GPR_U32(ctx, 31, 0x496204u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4961FCu, 0x496204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496204u;
label_496204:
    // 0x496204: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x496204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_496208:
    // 0x496208: 0x8fa20430  lw          $v0, 0x430($sp)
    ctx->pc = 0x496208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_49620c:
    // 0x49620c: 0x40f809  jalr        $v0
label_496210:
    if (ctx->pc == 0x496210u) {
        ctx->pc = 0x496214u;
        goto label_496214;
    }
    ctx->pc = 0x49620Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x496214u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49620Cu, 0x496214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x496214u;
label_496214:
    // 0x496214: 0xaf82b78c  sw          $v0, -0x4874($gp)
    ctx->pc = 0x496214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948748), GPR_U32(ctx, 2));
label_496218:
    // 0x496218: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x496218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_49621c:
    // 0x49621c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_496220:
    if (ctx->pc == 0x496220u) {
        ctx->pc = 0x496224u;
        goto label_496224;
    }
    ctx->pc = 0x49621Cu;
    {
        const bool branch_taken_0x49621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49621c) {
            ctx->pc = 0x49622Cu;
            goto label_49622c;
        }
    }
    ctx->pc = 0x496224u;
label_496224:
    // 0x496224: 0xd  break       0
    ctx->pc = 0x496224u;
    runtime->handleBreak(rdram, ctx);
label_496228:
    // 0x496228: 0x0  nop
    ctx->pc = 0x496228u;
    // NOP
label_49622c:
    // 0x49622c: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x49622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_496230:
    // 0x496230: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496234:
    // 0x496234: 0xc11392c  jal         func_44E4B0
label_496238:
    if (ctx->pc == 0x496238u) {
        ctx->pc = 0x49623Cu;
        goto label_49623c;
    }
    ctx->pc = 0x496234u;
    SET_GPR_U32(ctx, 31, 0x49623Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x496234u, 0x49623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49623Cu;
label_49623c:
    // 0x49623c: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_496240:
    if (ctx->pc == 0x496240u) {
        ctx->pc = 0x496244u;
        goto label_496244;
    }
    ctx->pc = 0x49623Cu;
    {
        const bool branch_taken_0x49623c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49623c) {
            ctx->pc = 0x496274u;
            goto label_496274;
        }
    }
    ctx->pc = 0x496244u;
label_496244:
    // 0x496244: 0x8f83c15c  lw          $v1, -0x3EA4($gp)
    ctx->pc = 0x496244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_496248:
    // 0x496248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49624c:
    // 0x49624c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_496250:
    if (ctx->pc == 0x496250u) {
        ctx->pc = 0x496254u;
        goto label_496254;
    }
    ctx->pc = 0x49624Cu;
    {
        const bool branch_taken_0x49624c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49624c) {
            ctx->pc = 0x496274u;
            goto label_496274;
        }
    }
    ctx->pc = 0x496254u;
label_496254:
    // 0x496254: 0x8f83c15c  lw          $v1, -0x3EA4($gp)
    ctx->pc = 0x496254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_496258:
    // 0x496258: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x496258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_49625c:
    // 0x49625c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_496260:
    if (ctx->pc == 0x496260u) {
        ctx->pc = 0x496264u;
        goto label_496264;
    }
    ctx->pc = 0x49625Cu;
    {
        const bool branch_taken_0x49625c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49625c) {
            ctx->pc = 0x496274u;
            goto label_496274;
        }
    }
    ctx->pc = 0x496264u;
label_496264:
    // 0x496264: 0x8f83c15c  lw          $v1, -0x3EA4($gp)
    ctx->pc = 0x496264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_496268:
    // 0x496268: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x496268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_49626c:
    // 0x49626c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_496270:
    if (ctx->pc == 0x496270u) {
        ctx->pc = 0x496274u;
        goto label_496274;
    }
    ctx->pc = 0x49626Cu;
    {
        const bool branch_taken_0x49626c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x49626c) {
            ctx->pc = 0x496280u;
            goto label_496280;
        }
    }
    ctx->pc = 0x496274u;
label_496274:
    // 0x496274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496278:
    // 0x496278: 0x1000018b  b           . + 4 + (0x18B << 2)
label_49627c:
    if (ctx->pc == 0x49627Cu) {
        ctx->pc = 0x496280u;
        goto label_496280;
    }
    ctx->pc = 0x496278u;
    {
        const bool branch_taken_0x496278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496278) {
            ctx->pc = 0x4968A8u;
            goto label_4968a8;
        }
    }
    ctx->pc = 0x496280u;
label_496280:
    // 0x496280: 0x27a40448  addiu       $a0, $sp, 0x448
    ctx->pc = 0x496280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1096));
label_496284:
    // 0x496284: 0xc117c04  jal         func_45F010
label_496288:
    if (ctx->pc == 0x496288u) {
        ctx->pc = 0x49628Cu;
        goto label_49628c;
    }
    ctx->pc = 0x496284u;
    SET_GPR_U32(ctx, 31, 0x49628Cu);
    ctx->pc = 0x45F010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F010u, 0x496284u, 0x49628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49628Cu;
label_49628c:
    // 0x49628c: 0x8f84b72c  lw          $a0, -0x48D4($gp)
    ctx->pc = 0x49628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948652)));
label_496290:
    // 0x496290: 0x27a50438  addiu       $a1, $sp, 0x438
    ctx->pc = 0x496290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
label_496294:
    // 0x496294: 0xc117c14  jal         func_45F050
label_496298:
    if (ctx->pc == 0x496298u) {
        ctx->pc = 0x49629Cu;
        goto label_49629c;
    }
    ctx->pc = 0x496294u;
    SET_GPR_U32(ctx, 31, 0x49629Cu);
    ctx->pc = 0x45F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F050u, 0x496294u, 0x49629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49629Cu;
label_49629c:
    // 0x49629c: 0x8f83c15c  lw          $v1, -0x3EA4($gp)
    ctx->pc = 0x49629cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_4962a0:
    // 0x4962a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4962a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4962a4:
    // 0x4962a4: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_4962a8:
    if (ctx->pc == 0x4962A8u) {
        ctx->pc = 0x4962ACu;
        goto label_4962ac;
    }
    ctx->pc = 0x4962A4u;
    {
        const bool branch_taken_0x4962a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4962a4) {
            ctx->pc = 0x4963E8u;
            goto label_4963e8;
        }
    }
    ctx->pc = 0x4962ACu;
label_4962ac:
    // 0x4962ac: 0x8fa30438  lw          $v1, 0x438($sp)
    ctx->pc = 0x4962acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_4962b0:
    // 0x4962b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4962b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4962b4:
    // 0x4962b4: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
label_4962b8:
    if (ctx->pc == 0x4962B8u) {
        ctx->pc = 0x4962BCu;
        goto label_4962bc;
    }
    ctx->pc = 0x4962B4u;
    {
        const bool branch_taken_0x4962b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4962b4) {
            ctx->pc = 0x4963D8u;
            goto label_4963d8;
        }
    }
    ctx->pc = 0x4962BCu;
label_4962bc:
    // 0x4962bc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4962bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4962c0:
    // 0x4962c0: 0x8c437e78  lw          $v1, 0x7E78($v0)
    ctx->pc = 0x4962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_4962c4:
    // 0x4962c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4962c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4962c8:
    // 0x4962c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4962c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4962cc:
    // 0x4962cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4962ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4962d0:
    // 0x4962d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4962d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4962d4:
    // 0x4962d4: 0x244281a0  addiu       $v0, $v0, -0x7E60
    ctx->pc = 0x4962d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
label_4962d8:
    // 0x4962d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4962d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4962dc:
    // 0x4962dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4962dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4962e0:
    // 0x4962e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4962e4:
    if (ctx->pc == 0x4962E4u) {
        ctx->pc = 0x4962E8u;
        goto label_4962e8;
    }
    ctx->pc = 0x4962E0u;
    {
        const bool branch_taken_0x4962e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4962e0) {
            ctx->pc = 0x4962F4u;
            goto label_4962f4;
        }
    }
    ctx->pc = 0x4962E8u;
label_4962e8:
    // 0x4962e8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4962e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4962ec:
    // 0x4962ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_4962f0:
    if (ctx->pc == 0x4962F0u) {
        ctx->pc = 0x4962F4u;
        goto label_4962f4;
    }
    ctx->pc = 0x4962ECu;
    {
        const bool branch_taken_0x4962ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4962ec) {
            ctx->pc = 0x4962F8u;
            goto label_4962f8;
        }
    }
    ctx->pc = 0x4962F4u;
label_4962f4:
    // 0x4962f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4962f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4962f8:
    // 0x4962f8: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x4962f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4962fc:
    // 0x4962fc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4962fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496300:
    // 0x496300: 0x8c437e78  lw          $v1, 0x7E78($v0)
    ctx->pc = 0x496300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_496304:
    // 0x496304: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x496304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_496308:
    // 0x496308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x496308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49630c:
    // 0x49630c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x49630cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_496310:
    // 0x496310: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x496310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_496314:
    // 0x496314: 0x244281a0  addiu       $v0, $v0, -0x7E60
    ctx->pc = 0x496314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
label_496318:
    // 0x496318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x496318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49631c:
    // 0x49631c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_496320:
    // 0x496320: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x496320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_496324:
    // 0x496324: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_496328:
    if (ctx->pc == 0x496328u) {
        ctx->pc = 0x49632Cu;
        goto label_49632c;
    }
    ctx->pc = 0x496324u;
    {
        const bool branch_taken_0x496324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496324) {
            ctx->pc = 0x496338u;
            goto label_496338;
        }
    }
    ctx->pc = 0x49632Cu;
label_49632c:
    // 0x49632c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x49632cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496330:
    // 0x496330: 0x10000002  b           . + 4 + (0x2 << 2)
label_496334:
    if (ctx->pc == 0x496334u) {
        ctx->pc = 0x496338u;
        goto label_496338;
    }
    ctx->pc = 0x496330u;
    {
        const bool branch_taken_0x496330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496330) {
            ctx->pc = 0x49633Cu;
            goto label_49633c;
        }
    }
    ctx->pc = 0x496338u;
label_496338:
    // 0x496338: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x496338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49633c:
    // 0x49633c: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x49633cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_496340:
    // 0x496340: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x496340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496344:
    // 0x496344: 0x8c437e78  lw          $v1, 0x7E78($v0)
    ctx->pc = 0x496344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_496348:
    // 0x496348: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x496348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_49634c:
    // 0x49634c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_496350:
    // 0x496350: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x496350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_496354:
    // 0x496354: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x496354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_496358:
    // 0x496358: 0x244281a0  addiu       $v0, $v0, -0x7E60
    ctx->pc = 0x496358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
label_49635c:
    // 0x49635c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_496360:
    // 0x496360: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x496360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_496364:
    // 0x496364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496368:
    // 0x496368: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_49636c:
    if (ctx->pc == 0x49636Cu) {
        ctx->pc = 0x496370u;
        goto label_496370;
    }
    ctx->pc = 0x496368u;
    {
        const bool branch_taken_0x496368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496368) {
            ctx->pc = 0x49637Cu;
            goto label_49637c;
        }
    }
    ctx->pc = 0x496370u;
label_496370:
    // 0x496370: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x496370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496374:
    // 0x496374: 0x10000002  b           . + 4 + (0x2 << 2)
label_496378:
    if (ctx->pc == 0x496378u) {
        ctx->pc = 0x49637Cu;
        goto label_49637c;
    }
    ctx->pc = 0x496374u;
    {
        const bool branch_taken_0x496374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496374) {
            ctx->pc = 0x496380u;
            goto label_496380;
        }
    }
    ctx->pc = 0x49637Cu;
label_49637c:
    // 0x49637c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49637cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496380:
    // 0x496380: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x496380u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_496384:
    // 0x496384: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x496384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496388:
    // 0x496388: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_49638c:
    if (ctx->pc == 0x49638Cu) {
        ctx->pc = 0x496390u;
        goto label_496390;
    }
    ctx->pc = 0x496388u;
    {
        const bool branch_taken_0x496388 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x496388) {
            ctx->pc = 0x4963A0u;
            goto label_4963a0;
        }
    }
    ctx->pc = 0x496390u;
label_496390:
    // 0x496390: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_496394:
    if (ctx->pc == 0x496394u) {
        ctx->pc = 0x496398u;
        goto label_496398;
    }
    ctx->pc = 0x496390u;
    {
        const bool branch_taken_0x496390 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x496390) {
            ctx->pc = 0x4963A0u;
            goto label_4963a0;
        }
    }
    ctx->pc = 0x496398u;
label_496398:
    // 0x496398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49639c:
    // 0x49639c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x49639cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4963a0:
    // 0x4963a0: 0x323500ff  andi        $s5, $s1, 0xFF
    ctx->pc = 0x4963a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4963a4:
    // 0x4963a4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4963a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4963a8:
    // 0x4963a8: 0x8c437e78  lw          $v1, 0x7E78($v0)
    ctx->pc = 0x4963a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_4963ac:
    // 0x4963ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4963acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4963b0:
    // 0x4963b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4963b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4963b4:
    // 0x4963b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4963b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4963b8:
    // 0x4963b8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4963b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4963bc:
    // 0x4963bc: 0x244281a0  addiu       $v0, $v0, -0x7E60
    ctx->pc = 0x4963bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
label_4963c0:
    // 0x4963c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4963c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4963c4:
    // 0x4963c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4963c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4963c8:
    // 0x4963c8: 0xc117bdc  jal         func_45EF70
label_4963cc:
    if (ctx->pc == 0x4963CCu) {
        ctx->pc = 0x4963D0u;
        goto label_4963d0;
    }
    ctx->pc = 0x4963C8u;
    SET_GPR_U32(ctx, 31, 0x4963D0u);
    ctx->pc = 0x45EF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF70u, 0x4963C8u, 0x4963D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4963D0u;
label_4963d0:
    // 0x4963d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4963d4:
    if (ctx->pc == 0x4963D4u) {
        ctx->pc = 0x4963D8u;
        goto label_4963d8;
    }
    ctx->pc = 0x4963D0u;
    {
        const bool branch_taken_0x4963d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4963d0) {
            ctx->pc = 0x4963E8u;
            goto label_4963e8;
        }
    }
    ctx->pc = 0x4963D8u;
label_4963d8:
    // 0x4963d8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4963d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4963dc:
    // 0x4963dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4963dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4963e0:
    // 0x4963e0: 0xc125548  jal         func_495520
label_4963e4:
    if (ctx->pc == 0x4963E4u) {
        ctx->pc = 0x4963E8u;
        goto label_4963e8;
    }
    ctx->pc = 0x4963E0u;
    SET_GPR_U32(ctx, 31, 0x4963E8u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4963E0u, 0x4963E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4963E8u;
label_4963e8:
    // 0x4963e8: 0x8f82c15c  lw          $v0, -0x3EA4($gp)
    ctx->pc = 0x4963e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_4963ec:
    // 0x4963ec: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x4963ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_4963f0:
    // 0x4963f0: 0x1020012c  beqz        $at, . + 4 + (0x12C << 2)
label_4963f4:
    if (ctx->pc == 0x4963F4u) {
        ctx->pc = 0x4963F8u;
        goto label_4963f8;
    }
    ctx->pc = 0x4963F0u;
    {
        const bool branch_taken_0x4963f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4963f0) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4963F8u;
label_4963f8:
    // 0x4963f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4963f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4963fc:
    // 0x4963fc: 0x24631e70  addiu       $v1, $v1, 0x1E70
    ctx->pc = 0x4963fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7792));
label_496400:
    // 0x496400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x496400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_496404:
    // 0x496404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x496404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_496408:
    // 0x496408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x496408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49640c:
    // 0x49640c: 0x400008  jr          $v0
label_496410:
    if (ctx->pc == 0x496410u) {
        ctx->pc = 0x496414u;
        goto label_496414;
    }
    ctx->pc = 0x49640Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x496414u: goto label_496414;
            case 0x4965CCu: goto label_4965cc;
            case 0x4965FCu: goto label_4965fc;
            case 0x496698u: goto label_496698;
            case 0x4966FCu: goto label_4966fc;
            case 0x496768u: goto label_496768;
            case 0x4967C0u: goto label_4967c0;
            case 0x4968A4u: goto label_4968a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49640Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x496414u;
label_496414:
    // 0x496414: 0x8fa30438  lw          $v1, 0x438($sp)
    ctx->pc = 0x496414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_496418:
    // 0x496418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49641c:
    // 0x49641c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_496420:
    if (ctx->pc == 0x496420u) {
        ctx->pc = 0x496424u;
        goto label_496424;
    }
    ctx->pc = 0x49641Cu;
    {
        const bool branch_taken_0x49641c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x49641c) {
            ctx->pc = 0x49642Cu;
            goto label_49642c;
        }
    }
    ctx->pc = 0x496424u;
label_496424:
    // 0x496424: 0x16a0003b  bnez        $s5, . + 4 + (0x3B << 2)
label_496428:
    if (ctx->pc == 0x496428u) {
        ctx->pc = 0x49642Cu;
        goto label_49642c;
    }
    ctx->pc = 0x496424u;
    {
        const bool branch_taken_0x496424 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x496424) {
            ctx->pc = 0x496514u;
            goto label_496514;
        }
    }
    ctx->pc = 0x49642Cu;
label_49642c:
    // 0x49642c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49642cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496430:
    // 0x496430: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x496430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_496434:
    // 0x496434: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x496434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_496438:
    // 0x496438: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_49643c:
    if (ctx->pc == 0x49643Cu) {
        ctx->pc = 0x496440u;
        goto label_496440;
    }
    ctx->pc = 0x496438u;
    {
        const bool branch_taken_0x496438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496438) {
            ctx->pc = 0x496458u;
            goto label_496458;
        }
    }
    ctx->pc = 0x496440u;
label_496440:
    // 0x496440: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x496440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_496444:
    // 0x496444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496448:
    // 0x496448: 0xc125548  jal         func_495520
label_49644c:
    if (ctx->pc == 0x49644Cu) {
        ctx->pc = 0x496450u;
        goto label_496450;
    }
    ctx->pc = 0x496448u;
    SET_GPR_U32(ctx, 31, 0x496450u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x496448u, 0x496450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496450u;
label_496450:
    // 0x496450: 0x10000114  b           . + 4 + (0x114 << 2)
label_496454:
    if (ctx->pc == 0x496454u) {
        ctx->pc = 0x496458u;
        goto label_496458;
    }
    ctx->pc = 0x496450u;
    {
        const bool branch_taken_0x496450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496450) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496458u;
label_496458:
    // 0x496458: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x496458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49645c:
    // 0x49645c: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x49645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_496460:
    // 0x496460: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x496460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_496464:
    // 0x496464: 0x1462010f  bne         $v1, $v0, . + 4 + (0x10F << 2)
label_496468:
    if (ctx->pc == 0x496468u) {
        ctx->pc = 0x49646Cu;
        goto label_49646c;
    }
    ctx->pc = 0x496464u;
    {
        const bool branch_taken_0x496464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496464) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x49646Cu;
label_49646c:
    // 0x49646c: 0x8f82b790  lw          $v0, -0x4870($gp)
    ctx->pc = 0x49646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948752)));
label_496470:
    // 0x496470: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
label_496474:
    if (ctx->pc == 0x496474u) {
        ctx->pc = 0x496478u;
        goto label_496478;
    }
    ctx->pc = 0x496470u;
    {
        const bool branch_taken_0x496470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496470) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496478u;
label_496478:
    // 0x496478: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x496478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_49647c:
    // 0x49647c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x49647cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_496480:
    // 0x496480: 0x27a60418  addiu       $a2, $sp, 0x418
    ctx->pc = 0x496480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1048));
label_496484:
    // 0x496484: 0xc115ee8  jal         func_457BA0
label_496488:
    if (ctx->pc == 0x496488u) {
        ctx->pc = 0x49648Cu;
        goto label_49648c;
    }
    ctx->pc = 0x496484u;
    SET_GPR_U32(ctx, 31, 0x49648Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x496484u, 0x49648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49648Cu;
label_49648c:
    // 0x49648c: 0x10400105  beqz        $v0, . + 4 + (0x105 << 2)
label_496490:
    if (ctx->pc == 0x496490u) {
        ctx->pc = 0x496494u;
        goto label_496494;
    }
    ctx->pc = 0x49648Cu;
    {
        const bool branch_taken_0x49648c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49648c) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496494u;
label_496494:
    // 0x496494: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x496494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_496498:
    // 0x496498: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
label_49649c:
    if (ctx->pc == 0x49649Cu) {
        ctx->pc = 0x4964A0u;
        goto label_4964a0;
    }
    ctx->pc = 0x496498u;
    {
        const bool branch_taken_0x496498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496498) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4964A0u;
label_4964a0:
    // 0x4964a0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4964a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4964a4:
    // 0x4964a4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4964a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4964a8:
    // 0x4964a8: 0x8fa6041c  lw          $a2, 0x41C($sp)
    ctx->pc = 0x4964a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1052)));
label_4964ac:
    // 0x4964ac: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4964acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4964b0:
    // 0x4964b0: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x4964b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_4964b4:
    // 0x4964b4: 0x2408032a  addiu       $t0, $zero, 0x32A
    ctx->pc = 0x4964b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 810));
label_4964b8:
    // 0x4964b8: 0x2789b754  addiu       $t1, $gp, -0x48AC
    ctx->pc = 0x4964b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948692));
label_4964bc:
    // 0x4964bc: 0xc113940  jal         func_44E500
label_4964c0:
    if (ctx->pc == 0x4964C0u) {
        ctx->pc = 0x4964C4u;
        goto label_4964c4;
    }
    ctx->pc = 0x4964BCu;
    SET_GPR_U32(ctx, 31, 0x4964C4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4964BCu, 0x4964C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4964C4u;
label_4964c4:
    // 0x4964c4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4964c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4964c8:
    // 0x4964c8: 0x2785b798  addiu       $a1, $gp, -0x4868
    ctx->pc = 0x4964c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948760));
label_4964cc:
    // 0x4964cc: 0xc115c24  jal         func_457090
label_4964d0:
    if (ctx->pc == 0x4964D0u) {
        ctx->pc = 0x4964D4u;
        goto label_4964d4;
    }
    ctx->pc = 0x4964CCu;
    SET_GPR_U32(ctx, 31, 0x4964D4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4964CCu, 0x4964D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4964D4u;
label_4964d4:
    // 0x4964d4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4964d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4964d8:
    // 0x4964d8: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x4964d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_4964dc:
    // 0x4964dc: 0x40f809  jalr        $v0
label_4964e0:
    if (ctx->pc == 0x4964E0u) {
        ctx->pc = 0x4964E4u;
        goto label_4964e4;
    }
    ctx->pc = 0x4964DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4964E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4964DCu, 0x4964E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4964E4u;
label_4964e4:
    // 0x4964e4: 0xaf82b790  sw          $v0, -0x4870($gp)
    ctx->pc = 0x4964e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948752), GPR_U32(ctx, 2));
label_4964e8:
    // 0x4964e8: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x4964e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_4964ec:
    // 0x4964ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4964f0:
    if (ctx->pc == 0x4964F0u) {
        ctx->pc = 0x4964F4u;
        goto label_4964f4;
    }
    ctx->pc = 0x4964ECu;
    {
        const bool branch_taken_0x4964ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4964ec) {
            ctx->pc = 0x4964FCu;
            goto label_4964fc;
        }
    }
    ctx->pc = 0x4964F4u;
label_4964f4:
    // 0x4964f4: 0xd  break       0
    ctx->pc = 0x4964f4u;
    runtime->handleBreak(rdram, ctx);
label_4964f8:
    // 0x4964f8: 0x0  nop
    ctx->pc = 0x4964f8u;
    // NOP
label_4964fc:
    // 0x4964fc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4964fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_496500:
    // 0x496500: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496504:
    // 0x496504: 0xc11392c  jal         func_44E4B0
label_496508:
    if (ctx->pc == 0x496508u) {
        ctx->pc = 0x49650Cu;
        goto label_49650c;
    }
    ctx->pc = 0x496504u;
    SET_GPR_U32(ctx, 31, 0x49650Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x496504u, 0x49650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49650Cu;
label_49650c:
    // 0x49650c: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_496510:
    if (ctx->pc == 0x496510u) {
        ctx->pc = 0x496514u;
        goto label_496514;
    }
    ctx->pc = 0x49650Cu;
    {
        const bool branch_taken_0x49650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49650c) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496514u;
label_496514:
    // 0x496514: 0x16c00017  bnez        $s6, . + 4 + (0x17 << 2)
label_496518:
    if (ctx->pc == 0x496518u) {
        ctx->pc = 0x49651Cu;
        goto label_49651c;
    }
    ctx->pc = 0x496514u;
    {
        const bool branch_taken_0x496514 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x496514) {
            ctx->pc = 0x496574u;
            goto label_496574;
        }
    }
    ctx->pc = 0x49651Cu;
label_49651c:
    // 0x49651c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496520:
    // 0x496520: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x496520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_496524:
    // 0x496524: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x496524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_496528:
    // 0x496528: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_49652c:
    if (ctx->pc == 0x49652Cu) {
        ctx->pc = 0x496530u;
        goto label_496530;
    }
    ctx->pc = 0x496528u;
    {
        const bool branch_taken_0x496528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x496528) {
            ctx->pc = 0x49655Cu;
            goto label_49655c;
        }
    }
    ctx->pc = 0x496530u;
label_496530:
    // 0x496530: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x496530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_496534:
    // 0x496534: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_496538:
    if (ctx->pc == 0x496538u) {
        ctx->pc = 0x49653Cu;
        goto label_49653c;
    }
    ctx->pc = 0x496534u;
    {
        const bool branch_taken_0x496534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x496534) {
            ctx->pc = 0x496544u;
            goto label_496544;
        }
    }
    ctx->pc = 0x49653Cu;
label_49653c:
    // 0x49653c: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_496540:
    if (ctx->pc == 0x496540u) {
        ctx->pc = 0x496544u;
        goto label_496544;
    }
    ctx->pc = 0x49653Cu;
    {
        const bool branch_taken_0x49653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49653c) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496544u;
label_496544:
    // 0x496544: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x496544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_496548:
    // 0x496548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49654c:
    // 0x49654c: 0xc125548  jal         func_495520
label_496550:
    if (ctx->pc == 0x496550u) {
        ctx->pc = 0x496554u;
        goto label_496554;
    }
    ctx->pc = 0x49654Cu;
    SET_GPR_U32(ctx, 31, 0x496554u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x49654Cu, 0x496554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496554u;
label_496554:
    // 0x496554: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_496558:
    if (ctx->pc == 0x496558u) {
        ctx->pc = 0x49655Cu;
        goto label_49655c;
    }
    ctx->pc = 0x496554u;
    {
        const bool branch_taken_0x496554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496554) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x49655Cu;
label_49655c:
    // 0x49655c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x49655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_496560:
    // 0x496560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496564:
    // 0x496564: 0xc125548  jal         func_495520
label_496568:
    if (ctx->pc == 0x496568u) {
        ctx->pc = 0x49656Cu;
        goto label_49656c;
    }
    ctx->pc = 0x496564u;
    SET_GPR_U32(ctx, 31, 0x49656Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x496564u, 0x49656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49656Cu;
label_49656c:
    // 0x49656c: 0x100000cd  b           . + 4 + (0xCD << 2)
label_496570:
    if (ctx->pc == 0x496570u) {
        ctx->pc = 0x496574u;
        goto label_496574;
    }
    ctx->pc = 0x49656Cu;
    {
        const bool branch_taken_0x49656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49656c) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496574u;
label_496574:
    // 0x496574: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x496574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496578:
    // 0x496578: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x496578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_49657c:
    // 0x49657c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x49657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_496580:
    // 0x496580: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_496584:
    if (ctx->pc == 0x496584u) {
        ctx->pc = 0x496588u;
        goto label_496588;
    }
    ctx->pc = 0x496580u;
    {
        const bool branch_taken_0x496580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x496580) {
            ctx->pc = 0x4965B4u;
            goto label_4965b4;
        }
    }
    ctx->pc = 0x496588u;
label_496588:
    // 0x496588: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x496588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49658c:
    // 0x49658c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_496590:
    if (ctx->pc == 0x496590u) {
        ctx->pc = 0x496594u;
        goto label_496594;
    }
    ctx->pc = 0x49658Cu;
    {
        const bool branch_taken_0x49658c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49658c) {
            ctx->pc = 0x49659Cu;
            goto label_49659c;
        }
    }
    ctx->pc = 0x496594u;
label_496594:
    // 0x496594: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_496598:
    if (ctx->pc == 0x496598u) {
        ctx->pc = 0x49659Cu;
        goto label_49659c;
    }
    ctx->pc = 0x496594u;
    {
        const bool branch_taken_0x496594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496594) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x49659Cu;
label_49659c:
    // 0x49659c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x49659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4965a0:
    // 0x4965a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4965a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4965a4:
    // 0x4965a4: 0xc125548  jal         func_495520
label_4965a8:
    if (ctx->pc == 0x4965A8u) {
        ctx->pc = 0x4965ACu;
        goto label_4965ac;
    }
    ctx->pc = 0x4965A4u;
    SET_GPR_U32(ctx, 31, 0x4965ACu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4965A4u, 0x4965ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4965ACu;
label_4965ac:
    // 0x4965ac: 0x100000bd  b           . + 4 + (0xBD << 2)
label_4965b0:
    if (ctx->pc == 0x4965B0u) {
        ctx->pc = 0x4965B4u;
        goto label_4965b4;
    }
    ctx->pc = 0x4965ACu;
    {
        const bool branch_taken_0x4965ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4965ac) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4965B4u;
label_4965b4:
    // 0x4965b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4965b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4965b8:
    // 0x4965b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4965b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4965bc:
    // 0x4965bc: 0xc125548  jal         func_495520
label_4965c0:
    if (ctx->pc == 0x4965C0u) {
        ctx->pc = 0x4965C4u;
        goto label_4965c4;
    }
    ctx->pc = 0x4965BCu;
    SET_GPR_U32(ctx, 31, 0x4965C4u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4965BCu, 0x4965C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4965C4u;
label_4965c4:
    // 0x4965c4: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_4965c8:
    if (ctx->pc == 0x4965C8u) {
        ctx->pc = 0x4965CCu;
        goto label_4965cc;
    }
    ctx->pc = 0x4965C4u;
    {
        const bool branch_taken_0x4965c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4965c4) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4965CCu;
label_4965cc:
    // 0x4965cc: 0x8fa30448  lw          $v1, 0x448($sp)
    ctx->pc = 0x4965ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1096)));
label_4965d0:
    // 0x4965d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4965d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4965d4:
    // 0x4965d4: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
label_4965d8:
    if (ctx->pc == 0x4965D8u) {
        ctx->pc = 0x4965DCu;
        goto label_4965dc;
    }
    ctx->pc = 0x4965D4u;
    {
        const bool branch_taken_0x4965d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4965d4) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4965DCu;
label_4965dc:
    // 0x4965dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4965dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4965e0:
    // 0x4965e0: 0xaf82c158  sw          $v0, -0x3EA8($gp)
    ctx->pc = 0x4965e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951256), GPR_U32(ctx, 2));
label_4965e4:
    // 0x4965e4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4965e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4965e8:
    // 0x4965e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4965e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4965ec:
    // 0x4965ec: 0xc125548  jal         func_495520
label_4965f0:
    if (ctx->pc == 0x4965F0u) {
        ctx->pc = 0x4965F4u;
        goto label_4965f4;
    }
    ctx->pc = 0x4965ECu;
    SET_GPR_U32(ctx, 31, 0x4965F4u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4965ECu, 0x4965F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4965F4u;
label_4965f4:
    // 0x4965f4: 0x100000ab  b           . + 4 + (0xAB << 2)
label_4965f8:
    if (ctx->pc == 0x4965F8u) {
        ctx->pc = 0x4965FCu;
        goto label_4965fc;
    }
    ctx->pc = 0x4965F4u;
    {
        const bool branch_taken_0x4965f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4965f4) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4965FCu;
label_4965fc:
    // 0x4965fc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4965fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_496600:
    // 0x496600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496604:
    // 0x496604: 0x27a60408  addiu       $a2, $sp, 0x408
    ctx->pc = 0x496604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
label_496608:
    // 0x496608: 0xc115ee8  jal         func_457BA0
label_49660c:
    if (ctx->pc == 0x49660Cu) {
        ctx->pc = 0x496610u;
        goto label_496610;
    }
    ctx->pc = 0x496608u;
    SET_GPR_U32(ctx, 31, 0x496610u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x496608u, 0x496610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496610u;
label_496610:
    // 0x496610: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_496614:
    if (ctx->pc == 0x496614u) {
        ctx->pc = 0x496618u;
        goto label_496618;
    }
    ctx->pc = 0x496610u;
    {
        const bool branch_taken_0x496610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496610) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496618u;
label_496618:
    // 0x496618: 0x8fa20410  lw          $v0, 0x410($sp)
    ctx->pc = 0x496618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_49661c:
    // 0x49661c: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
label_496620:
    if (ctx->pc == 0x496620u) {
        ctx->pc = 0x496624u;
        goto label_496624;
    }
    ctx->pc = 0x49661Cu;
    {
        const bool branch_taken_0x49661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49661c) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496624u;
label_496624:
    // 0x496624: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x496624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_496628:
    // 0x496628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49662c:
    // 0x49662c: 0x8fa6040c  lw          $a2, 0x40C($sp)
    ctx->pc = 0x49662cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1036)));
label_496630:
    // 0x496630: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x496630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_496634:
    // 0x496634: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x496634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_496638:
    // 0x496638: 0x24080365  addiu       $t0, $zero, 0x365
    ctx->pc = 0x496638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
label_49663c:
    // 0x49663c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49663cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496640:
    // 0x496640: 0xc113940  jal         func_44E500
label_496644:
    if (ctx->pc == 0x496644u) {
        ctx->pc = 0x496648u;
        goto label_496648;
    }
    ctx->pc = 0x496640u;
    SET_GPR_U32(ctx, 31, 0x496648u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x496640u, 0x496648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496648u;
label_496648:
    // 0x496648: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x496648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_49664c:
    // 0x49664c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x49664cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496650:
    // 0x496650: 0x24a556d0  addiu       $a1, $a1, 0x56D0
    ctx->pc = 0x496650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22224));
label_496654:
    // 0x496654: 0xc115c24  jal         func_457090
label_496658:
    if (ctx->pc == 0x496658u) {
        ctx->pc = 0x49665Cu;
        goto label_49665c;
    }
    ctx->pc = 0x496654u;
    SET_GPR_U32(ctx, 31, 0x49665Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x496654u, 0x49665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49665Cu;
label_49665c:
    // 0x49665c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x49665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_496660:
    // 0x496660: 0x8fa20410  lw          $v0, 0x410($sp)
    ctx->pc = 0x496660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_496664:
    // 0x496664: 0x40f809  jalr        $v0
label_496668:
    if (ctx->pc == 0x496668u) {
        ctx->pc = 0x49666Cu;
        goto label_49666c;
    }
    ctx->pc = 0x496664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49666Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496664u, 0x49666Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49666Cu;
label_49666c:
    // 0x49666c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x49666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_496670:
    // 0x496670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_496674:
    if (ctx->pc == 0x496674u) {
        ctx->pc = 0x496678u;
        goto label_496678;
    }
    ctx->pc = 0x496670u;
    {
        const bool branch_taken_0x496670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496670) {
            ctx->pc = 0x496680u;
            goto label_496680;
        }
    }
    ctx->pc = 0x496678u;
label_496678:
    // 0x496678: 0xd  break       0
    ctx->pc = 0x496678u;
    runtime->handleBreak(rdram, ctx);
label_49667c:
    // 0x49667c: 0x0  nop
    ctx->pc = 0x49667cu;
    // NOP
label_496680:
    // 0x496680: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x496680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_496684:
    // 0x496684: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496688:
    // 0x496688: 0xc11392c  jal         func_44E4B0
label_49668c:
    if (ctx->pc == 0x49668Cu) {
        ctx->pc = 0x496690u;
        goto label_496690;
    }
    ctx->pc = 0x496688u;
    SET_GPR_U32(ctx, 31, 0x496690u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x496688u, 0x496690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496690u;
label_496690:
    // 0x496690: 0x10000084  b           . + 4 + (0x84 << 2)
label_496694:
    if (ctx->pc == 0x496694u) {
        ctx->pc = 0x496698u;
        goto label_496698;
    }
    ctx->pc = 0x496690u;
    {
        const bool branch_taken_0x496690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496690) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496698u;
label_496698:
    // 0x496698: 0x8fa30448  lw          $v1, 0x448($sp)
    ctx->pc = 0x496698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1096)));
label_49669c:
    // 0x49669c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4966a0:
    // 0x4966a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_4966a4:
    if (ctx->pc == 0x4966A4u) {
        ctx->pc = 0x4966A8u;
        goto label_4966a8;
    }
    ctx->pc = 0x4966A0u;
    {
        const bool branch_taken_0x4966a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4966a0) {
            ctx->pc = 0x4966B4u;
            goto label_4966b4;
        }
    }
    ctx->pc = 0x4966A8u;
label_4966a8:
    // 0x4966a8: 0x8fa20438  lw          $v0, 0x438($sp)
    ctx->pc = 0x4966a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_4966ac:
    // 0x4966ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4966b0:
    if (ctx->pc == 0x4966B0u) {
        ctx->pc = 0x4966B4u;
        goto label_4966b4;
    }
    ctx->pc = 0x4966ACu;
    {
        const bool branch_taken_0x4966ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4966ac) {
            ctx->pc = 0x4966D4u;
            goto label_4966d4;
        }
    }
    ctx->pc = 0x4966B4u;
label_4966b4:
    // 0x4966b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4966b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4966b8:
    // 0x4966b8: 0xaf82c154  sw          $v0, -0x3EAC($gp)
    ctx->pc = 0x4966b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951252), GPR_U32(ctx, 2));
label_4966bc:
    // 0x4966bc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4966bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4966c0:
    // 0x4966c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4966c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4966c4:
    // 0x4966c4: 0xc125548  jal         func_495520
label_4966c8:
    if (ctx->pc == 0x4966C8u) {
        ctx->pc = 0x4966CCu;
        goto label_4966cc;
    }
    ctx->pc = 0x4966C4u;
    SET_GPR_U32(ctx, 31, 0x4966CCu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4966C4u, 0x4966CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4966CCu;
label_4966cc:
    // 0x4966cc: 0x10000075  b           . + 4 + (0x75 << 2)
label_4966d0:
    if (ctx->pc == 0x4966D0u) {
        ctx->pc = 0x4966D4u;
        goto label_4966d4;
    }
    ctx->pc = 0x4966CCu;
    {
        const bool branch_taken_0x4966cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4966cc) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4966D4u;
label_4966d4:
    // 0x4966d4: 0x8fa30438  lw          $v1, 0x438($sp)
    ctx->pc = 0x4966d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_4966d8:
    // 0x4966d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4966d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4966dc:
    // 0x4966dc: 0x14620071  bne         $v1, $v0, . + 4 + (0x71 << 2)
label_4966e0:
    if (ctx->pc == 0x4966E0u) {
        ctx->pc = 0x4966E4u;
        goto label_4966e4;
    }
    ctx->pc = 0x4966DCu;
    {
        const bool branch_taken_0x4966dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4966dc) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4966E4u;
label_4966e4:
    // 0x4966e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4966e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4966e8:
    // 0x4966e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4966e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4966ec:
    // 0x4966ec: 0xc125548  jal         func_495520
label_4966f0:
    if (ctx->pc == 0x4966F0u) {
        ctx->pc = 0x4966F4u;
        goto label_4966f4;
    }
    ctx->pc = 0x4966ECu;
    SET_GPR_U32(ctx, 31, 0x4966F4u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4966ECu, 0x4966F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4966F4u;
label_4966f4:
    // 0x4966f4: 0x1000006b  b           . + 4 + (0x6B << 2)
label_4966f8:
    if (ctx->pc == 0x4966F8u) {
        ctx->pc = 0x4966FCu;
        goto label_4966fc;
    }
    ctx->pc = 0x4966F4u;
    {
        const bool branch_taken_0x4966f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4966f4) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4966FCu;
label_4966fc:
    // 0x4966fc: 0x8fa30438  lw          $v1, 0x438($sp)
    ctx->pc = 0x4966fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_496700:
    // 0x496700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496704:
    // 0x496704: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_496708:
    if (ctx->pc == 0x496708u) {
        ctx->pc = 0x49670Cu;
        goto label_49670c;
    }
    ctx->pc = 0x496704u;
    {
        const bool branch_taken_0x496704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496704) {
            ctx->pc = 0x49674Cu;
            goto label_49674c;
        }
    }
    ctx->pc = 0x49670Cu;
label_49670c:
    // 0x49670c: 0x8f83c178  lw          $v1, -0x3E88($gp)
    ctx->pc = 0x49670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951288)));
label_496710:
    // 0x496710: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x496710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496714:
    // 0x496714: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_496718:
    if (ctx->pc == 0x496718u) {
        ctx->pc = 0x49671Cu;
        goto label_49671c;
    }
    ctx->pc = 0x496714u;
    {
        const bool branch_taken_0x496714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x496714) {
            ctx->pc = 0x496734u;
            goto label_496734;
        }
    }
    ctx->pc = 0x49671Cu;
label_49671c:
    // 0x49671c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x49671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_496720:
    // 0x496720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496724:
    // 0x496724: 0xc125548  jal         func_495520
label_496728:
    if (ctx->pc == 0x496728u) {
        ctx->pc = 0x49672Cu;
        goto label_49672c;
    }
    ctx->pc = 0x496724u;
    SET_GPR_U32(ctx, 31, 0x49672Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x496724u, 0x49672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49672Cu;
label_49672c:
    // 0x49672c: 0x1000005d  b           . + 4 + (0x5D << 2)
label_496730:
    if (ctx->pc == 0x496730u) {
        ctx->pc = 0x496734u;
        goto label_496734;
    }
    ctx->pc = 0x49672Cu;
    {
        const bool branch_taken_0x49672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49672c) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496734u;
label_496734:
    // 0x496734: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x496734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_496738:
    // 0x496738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49673c:
    // 0x49673c: 0xc125548  jal         func_495520
label_496740:
    if (ctx->pc == 0x496740u) {
        ctx->pc = 0x496744u;
        goto label_496744;
    }
    ctx->pc = 0x49673Cu;
    SET_GPR_U32(ctx, 31, 0x496744u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x49673Cu, 0x496744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496744u;
label_496744:
    // 0x496744: 0x10000057  b           . + 4 + (0x57 << 2)
label_496748:
    if (ctx->pc == 0x496748u) {
        ctx->pc = 0x49674Cu;
        goto label_49674c;
    }
    ctx->pc = 0x496744u;
    {
        const bool branch_taken_0x496744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496744) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x49674Cu;
label_49674c:
    // 0x49674c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496750:
    // 0x496750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496754:
    // 0x496754: 0xc125548  jal         func_495520
label_496758:
    if (ctx->pc == 0x496758u) {
        ctx->pc = 0x49675Cu;
        goto label_49675c;
    }
    ctx->pc = 0x496754u;
    SET_GPR_U32(ctx, 31, 0x49675Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x496754u, 0x49675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49675Cu;
label_49675c:
    // 0x49675c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x49675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_496760:
    // 0x496760: 0x10000051  b           . + 4 + (0x51 << 2)
label_496764:
    if (ctx->pc == 0x496764u) {
        ctx->pc = 0x496768u;
        goto label_496768;
    }
    ctx->pc = 0x496760u;
    {
        const bool branch_taken_0x496760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496760) {
            ctx->pc = 0x4968A8u;
            goto label_4968a8;
        }
    }
    ctx->pc = 0x496768u;
label_496768:
    // 0x496768: 0x8fa30438  lw          $v1, 0x438($sp)
    ctx->pc = 0x496768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_49676c:
    // 0x49676c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496770:
    // 0x496770: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_496774:
    if (ctx->pc == 0x496774u) {
        ctx->pc = 0x496778u;
        goto label_496778;
    }
    ctx->pc = 0x496770u;
    {
        const bool branch_taken_0x496770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496770) {
            ctx->pc = 0x4967A4u;
            goto label_4967a4;
        }
    }
    ctx->pc = 0x496778u;
label_496778:
    // 0x496778: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x496778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49677c:
    // 0x49677c: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x49677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_496780:
    // 0x496780: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x496780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_496784:
    // 0x496784: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_496788:
    if (ctx->pc == 0x496788u) {
        ctx->pc = 0x49678Cu;
        goto label_49678c;
    }
    ctx->pc = 0x496784u;
    {
        const bool branch_taken_0x496784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496784) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x49678Cu;
label_49678c:
    // 0x49678c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x49678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_496790:
    // 0x496790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496794:
    // 0x496794: 0xc125548  jal         func_495520
label_496798:
    if (ctx->pc == 0x496798u) {
        ctx->pc = 0x49679Cu;
        goto label_49679c;
    }
    ctx->pc = 0x496794u;
    SET_GPR_U32(ctx, 31, 0x49679Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x496794u, 0x49679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49679Cu;
label_49679c:
    // 0x49679c: 0x10000041  b           . + 4 + (0x41 << 2)
label_4967a0:
    if (ctx->pc == 0x4967A0u) {
        ctx->pc = 0x4967A4u;
        goto label_4967a4;
    }
    ctx->pc = 0x49679Cu;
    {
        const bool branch_taken_0x49679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49679c) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4967A4u;
label_4967a4:
    // 0x4967a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4967a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4967a8:
    // 0x4967a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4967a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4967ac:
    // 0x4967ac: 0xc125548  jal         func_495520
label_4967b0:
    if (ctx->pc == 0x4967B0u) {
        ctx->pc = 0x4967B4u;
        goto label_4967b4;
    }
    ctx->pc = 0x4967ACu;
    SET_GPR_U32(ctx, 31, 0x4967B4u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4967ACu, 0x4967B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4967B4u;
label_4967b4:
    // 0x4967b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4967b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4967b8:
    // 0x4967b8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4967bc:
    if (ctx->pc == 0x4967BCu) {
        ctx->pc = 0x4967C0u;
        goto label_4967c0;
    }
    ctx->pc = 0x4967B8u;
    {
        const bool branch_taken_0x4967b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4967b8) {
            ctx->pc = 0x4968A8u;
            goto label_4968a8;
        }
    }
    ctx->pc = 0x4967C0u;
label_4967c0:
    // 0x4967c0: 0x8fa30448  lw          $v1, 0x448($sp)
    ctx->pc = 0x4967c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1096)));
label_4967c4:
    // 0x4967c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4967c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4967c8:
    // 0x4967c8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_4967cc:
    if (ctx->pc == 0x4967CCu) {
        ctx->pc = 0x4967D0u;
        goto label_4967d0;
    }
    ctx->pc = 0x4967C8u;
    {
        const bool branch_taken_0x4967c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4967c8) {
            ctx->pc = 0x4967F0u;
            goto label_4967f0;
        }
    }
    ctx->pc = 0x4967D0u;
label_4967d0:
    // 0x4967d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4967d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4967d4:
    // 0x4967d4: 0xaf82c158  sw          $v0, -0x3EA8($gp)
    ctx->pc = 0x4967d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951256), GPR_U32(ctx, 2));
label_4967d8:
    // 0x4967d8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4967d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4967dc:
    // 0x4967dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4967dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4967e0:
    // 0x4967e0: 0xc125548  jal         func_495520
label_4967e4:
    if (ctx->pc == 0x4967E4u) {
        ctx->pc = 0x4967E8u;
        goto label_4967e8;
    }
    ctx->pc = 0x4967E0u;
    SET_GPR_U32(ctx, 31, 0x4967E8u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4967E0u, 0x4967E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4967E8u;
label_4967e8:
    // 0x4967e8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4967ec:
    if (ctx->pc == 0x4967ECu) {
        ctx->pc = 0x4967F0u;
        goto label_4967f0;
    }
    ctx->pc = 0x4967E8u;
    {
        const bool branch_taken_0x4967e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4967e8) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x4967F0u;
label_4967f0:
    // 0x4967f0: 0x8fa30438  lw          $v1, 0x438($sp)
    ctx->pc = 0x4967f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_4967f4:
    // 0x4967f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4967f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4967f8:
    // 0x4967f8: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_4967fc:
    if (ctx->pc == 0x4967FCu) {
        ctx->pc = 0x496800u;
        goto label_496800;
    }
    ctx->pc = 0x4967F8u;
    {
        const bool branch_taken_0x4967f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4967f8) {
            ctx->pc = 0x496894u;
            goto label_496894;
        }
    }
    ctx->pc = 0x496800u;
label_496800:
    // 0x496800: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x496800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_496804:
    // 0x496804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x496804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_496808:
    // 0x496808: 0xaf82c174  sw          $v0, -0x3E8C($gp)
    ctx->pc = 0x496808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951284), GPR_U32(ctx, 2));
label_49680c:
    // 0x49680c: 0x8f83c174  lw          $v1, -0x3E8C($gp)
    ctx->pc = 0x49680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_496810:
    // 0x496810: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x496810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496814:
    // 0x496814: 0x8c427ea0  lw          $v0, 0x7EA0($v0)
    ctx->pc = 0x496814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32416)));
label_496818:
    // 0x496818: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x496818u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49681c:
    // 0x49681c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_496820:
    if (ctx->pc == 0x496820u) {
        ctx->pc = 0x496824u;
        goto label_496824;
    }
    ctx->pc = 0x49681Cu;
    {
        const bool branch_taken_0x49681c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49681c) {
            ctx->pc = 0x49683Cu;
            goto label_49683c;
        }
    }
    ctx->pc = 0x496824u;
label_496824:
    // 0x496824: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x496824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_496828:
    // 0x496828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49682c:
    // 0x49682c: 0xc125548  jal         func_495520
label_496830:
    if (ctx->pc == 0x496830u) {
        ctx->pc = 0x496834u;
        goto label_496834;
    }
    ctx->pc = 0x49682Cu;
    SET_GPR_U32(ctx, 31, 0x496834u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x49682Cu, 0x496834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496834u;
label_496834:
    // 0x496834: 0x1000001b  b           . + 4 + (0x1B << 2)
label_496838:
    if (ctx->pc == 0x496838u) {
        ctx->pc = 0x49683Cu;
        goto label_49683c;
    }
    ctx->pc = 0x496834u;
    {
        const bool branch_taken_0x496834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496834) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x49683Cu;
label_49683c:
    // 0x49683c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496840:
    // 0x496840: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x496840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_496844:
    // 0x496844: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x496844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_496848:
    // 0x496848: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_49684c:
    if (ctx->pc == 0x49684Cu) {
        ctx->pc = 0x496850u;
        goto label_496850;
    }
    ctx->pc = 0x496848u;
    {
        const bool branch_taken_0x496848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496848) {
            ctx->pc = 0x49687Cu;
            goto label_49687c;
        }
    }
    ctx->pc = 0x496850u;
label_496850:
    // 0x496850: 0xc11904c  jal         func_464130
label_496854:
    if (ctx->pc == 0x496854u) {
        ctx->pc = 0x496858u;
        goto label_496858;
    }
    ctx->pc = 0x496850u;
    SET_GPR_U32(ctx, 31, 0x496858u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x496850u, 0x496858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496858u;
label_496858:
    // 0x496858: 0xffa20400  sd          $v0, 0x400($sp)
    ctx->pc = 0x496858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 2));
label_49685c:
    // 0x49685c: 0xc11904c  jal         func_464130
label_496860:
    if (ctx->pc == 0x496860u) {
        ctx->pc = 0x496864u;
        goto label_496864;
    }
    ctx->pc = 0x49685Cu;
    SET_GPR_U32(ctx, 31, 0x496864u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x49685Cu, 0x496864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496864u;
label_496864:
    // 0x496864: 0xdfa30400  ld          $v1, 0x400($sp)
    ctx->pc = 0x496864u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_496868:
    // 0x496868: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x496868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_49686c:
    // 0x49686c: 0x2c4207d0  sltiu       $v0, $v0, 0x7D0
    ctx->pc = 0x49686cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
label_496870:
    // 0x496870: 0x0  nop
    ctx->pc = 0x496870u;
    // NOP
label_496874:
    // 0x496874: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_496878:
    if (ctx->pc == 0x496878u) {
        ctx->pc = 0x49687Cu;
        goto label_49687c;
    }
    ctx->pc = 0x496874u;
    {
        const bool branch_taken_0x496874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x496874) {
            ctx->pc = 0x49685Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49685c;
        }
    }
    ctx->pc = 0x49687Cu;
label_49687c:
    // 0x49687c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x49687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_496880:
    // 0x496880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496884:
    // 0x496884: 0xc125548  jal         func_495520
label_496888:
    if (ctx->pc == 0x496888u) {
        ctx->pc = 0x49688Cu;
        goto label_49688c;
    }
    ctx->pc = 0x496884u;
    SET_GPR_U32(ctx, 31, 0x49688Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x496884u, 0x49688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49688Cu;
label_49688c:
    // 0x49688c: 0x10000005  b           . + 4 + (0x5 << 2)
label_496890:
    if (ctx->pc == 0x496890u) {
        ctx->pc = 0x496894u;
        goto label_496894;
    }
    ctx->pc = 0x49688Cu;
    {
        const bool branch_taken_0x49688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49688c) {
            ctx->pc = 0x4968A4u;
            goto label_4968a4;
        }
    }
    ctx->pc = 0x496894u;
label_496894:
    // 0x496894: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x496894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_496898:
    // 0x496898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49689c:
    // 0x49689c: 0xc125548  jal         func_495520
label_4968a0:
    if (ctx->pc == 0x4968A0u) {
        ctx->pc = 0x4968A4u;
        goto label_4968a4;
    }
    ctx->pc = 0x49689Cu;
    SET_GPR_U32(ctx, 31, 0x4968A4u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x49689Cu, 0x4968A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4968A4u;
label_4968a4:
    // 0x4968a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4968a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4968a8:
    // 0x4968a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4968a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4968ac:
    // 0x4968ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4968acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4968b0:
    // 0x4968b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4968b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4968b4:
    // 0x4968b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4968b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4968b8:
    // 0x4968b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4968b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4968bc:
    // 0x4968bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4968bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4968c0:
    // 0x4968c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4968c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4968c4:
    // 0x4968c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4968c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4968c8:
    // 0x4968c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4968c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4968cc:
    // 0x4968cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4968ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4968d0:
    // 0x4968d0: 0x27bd0480  addiu       $sp, $sp, 0x480
    ctx->pc = 0x4968d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_4968d4:
    // 0x4968d4: 0x3e00008  jr          $ra
label_4968d8:
    if (ctx->pc == 0x4968D8u) {
        ctx->pc = 0x4968DCu;
        goto label_4968dc;
    }
    ctx->pc = 0x4968D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4968D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4968DCu;
label_4968dc:
    // 0x4968dc: 0x0  nop
    ctx->pc = 0x4968dcu;
    // NOP
    ctx->pc = 0x4968e0u;
}
