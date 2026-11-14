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

// Function: sub_002AB220
// Address: 0x2ab220 - 0x2abcf0
void sub_002AB220_0x2ab220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB220_0x2ab220");
#endif

    switch (ctx->pc) {
        case 0x2ab220u: goto label_2ab220;
        case 0x2ab224u: goto label_2ab224;
        case 0x2ab228u: goto label_2ab228;
        case 0x2ab22cu: goto label_2ab22c;
        case 0x2ab230u: goto label_2ab230;
        case 0x2ab234u: goto label_2ab234;
        case 0x2ab238u: goto label_2ab238;
        case 0x2ab23cu: goto label_2ab23c;
        case 0x2ab240u: goto label_2ab240;
        case 0x2ab244u: goto label_2ab244;
        case 0x2ab248u: goto label_2ab248;
        case 0x2ab24cu: goto label_2ab24c;
        case 0x2ab250u: goto label_2ab250;
        case 0x2ab254u: goto label_2ab254;
        case 0x2ab258u: goto label_2ab258;
        case 0x2ab25cu: goto label_2ab25c;
        case 0x2ab260u: goto label_2ab260;
        case 0x2ab264u: goto label_2ab264;
        case 0x2ab268u: goto label_2ab268;
        case 0x2ab26cu: goto label_2ab26c;
        case 0x2ab270u: goto label_2ab270;
        case 0x2ab274u: goto label_2ab274;
        case 0x2ab278u: goto label_2ab278;
        case 0x2ab27cu: goto label_2ab27c;
        case 0x2ab280u: goto label_2ab280;
        case 0x2ab284u: goto label_2ab284;
        case 0x2ab288u: goto label_2ab288;
        case 0x2ab28cu: goto label_2ab28c;
        case 0x2ab290u: goto label_2ab290;
        case 0x2ab294u: goto label_2ab294;
        case 0x2ab298u: goto label_2ab298;
        case 0x2ab29cu: goto label_2ab29c;
        case 0x2ab2a0u: goto label_2ab2a0;
        case 0x2ab2a4u: goto label_2ab2a4;
        case 0x2ab2a8u: goto label_2ab2a8;
        case 0x2ab2acu: goto label_2ab2ac;
        case 0x2ab2b0u: goto label_2ab2b0;
        case 0x2ab2b4u: goto label_2ab2b4;
        case 0x2ab2b8u: goto label_2ab2b8;
        case 0x2ab2bcu: goto label_2ab2bc;
        case 0x2ab2c0u: goto label_2ab2c0;
        case 0x2ab2c4u: goto label_2ab2c4;
        case 0x2ab2c8u: goto label_2ab2c8;
        case 0x2ab2ccu: goto label_2ab2cc;
        case 0x2ab2d0u: goto label_2ab2d0;
        case 0x2ab2d4u: goto label_2ab2d4;
        case 0x2ab2d8u: goto label_2ab2d8;
        case 0x2ab2dcu: goto label_2ab2dc;
        case 0x2ab2e0u: goto label_2ab2e0;
        case 0x2ab2e4u: goto label_2ab2e4;
        case 0x2ab2e8u: goto label_2ab2e8;
        case 0x2ab2ecu: goto label_2ab2ec;
        case 0x2ab2f0u: goto label_2ab2f0;
        case 0x2ab2f4u: goto label_2ab2f4;
        case 0x2ab2f8u: goto label_2ab2f8;
        case 0x2ab2fcu: goto label_2ab2fc;
        case 0x2ab300u: goto label_2ab300;
        case 0x2ab304u: goto label_2ab304;
        case 0x2ab308u: goto label_2ab308;
        case 0x2ab30cu: goto label_2ab30c;
        case 0x2ab310u: goto label_2ab310;
        case 0x2ab314u: goto label_2ab314;
        case 0x2ab318u: goto label_2ab318;
        case 0x2ab31cu: goto label_2ab31c;
        case 0x2ab320u: goto label_2ab320;
        case 0x2ab324u: goto label_2ab324;
        case 0x2ab328u: goto label_2ab328;
        case 0x2ab32cu: goto label_2ab32c;
        case 0x2ab330u: goto label_2ab330;
        case 0x2ab334u: goto label_2ab334;
        case 0x2ab338u: goto label_2ab338;
        case 0x2ab33cu: goto label_2ab33c;
        case 0x2ab340u: goto label_2ab340;
        case 0x2ab344u: goto label_2ab344;
        case 0x2ab348u: goto label_2ab348;
        case 0x2ab34cu: goto label_2ab34c;
        case 0x2ab350u: goto label_2ab350;
        case 0x2ab354u: goto label_2ab354;
        case 0x2ab358u: goto label_2ab358;
        case 0x2ab35cu: goto label_2ab35c;
        case 0x2ab360u: goto label_2ab360;
        case 0x2ab364u: goto label_2ab364;
        case 0x2ab368u: goto label_2ab368;
        case 0x2ab36cu: goto label_2ab36c;
        case 0x2ab370u: goto label_2ab370;
        case 0x2ab374u: goto label_2ab374;
        case 0x2ab378u: goto label_2ab378;
        case 0x2ab37cu: goto label_2ab37c;
        case 0x2ab380u: goto label_2ab380;
        case 0x2ab384u: goto label_2ab384;
        case 0x2ab388u: goto label_2ab388;
        case 0x2ab38cu: goto label_2ab38c;
        case 0x2ab390u: goto label_2ab390;
        case 0x2ab394u: goto label_2ab394;
        case 0x2ab398u: goto label_2ab398;
        case 0x2ab39cu: goto label_2ab39c;
        case 0x2ab3a0u: goto label_2ab3a0;
        case 0x2ab3a4u: goto label_2ab3a4;
        case 0x2ab3a8u: goto label_2ab3a8;
        case 0x2ab3acu: goto label_2ab3ac;
        case 0x2ab3b0u: goto label_2ab3b0;
        case 0x2ab3b4u: goto label_2ab3b4;
        case 0x2ab3b8u: goto label_2ab3b8;
        case 0x2ab3bcu: goto label_2ab3bc;
        case 0x2ab3c0u: goto label_2ab3c0;
        case 0x2ab3c4u: goto label_2ab3c4;
        case 0x2ab3c8u: goto label_2ab3c8;
        case 0x2ab3ccu: goto label_2ab3cc;
        case 0x2ab3d0u: goto label_2ab3d0;
        case 0x2ab3d4u: goto label_2ab3d4;
        case 0x2ab3d8u: goto label_2ab3d8;
        case 0x2ab3dcu: goto label_2ab3dc;
        case 0x2ab3e0u: goto label_2ab3e0;
        case 0x2ab3e4u: goto label_2ab3e4;
        case 0x2ab3e8u: goto label_2ab3e8;
        case 0x2ab3ecu: goto label_2ab3ec;
        case 0x2ab3f0u: goto label_2ab3f0;
        case 0x2ab3f4u: goto label_2ab3f4;
        case 0x2ab3f8u: goto label_2ab3f8;
        case 0x2ab3fcu: goto label_2ab3fc;
        case 0x2ab400u: goto label_2ab400;
        case 0x2ab404u: goto label_2ab404;
        case 0x2ab408u: goto label_2ab408;
        case 0x2ab40cu: goto label_2ab40c;
        case 0x2ab410u: goto label_2ab410;
        case 0x2ab414u: goto label_2ab414;
        case 0x2ab418u: goto label_2ab418;
        case 0x2ab41cu: goto label_2ab41c;
        case 0x2ab420u: goto label_2ab420;
        case 0x2ab424u: goto label_2ab424;
        case 0x2ab428u: goto label_2ab428;
        case 0x2ab42cu: goto label_2ab42c;
        case 0x2ab430u: goto label_2ab430;
        case 0x2ab434u: goto label_2ab434;
        case 0x2ab438u: goto label_2ab438;
        case 0x2ab43cu: goto label_2ab43c;
        case 0x2ab440u: goto label_2ab440;
        case 0x2ab444u: goto label_2ab444;
        case 0x2ab448u: goto label_2ab448;
        case 0x2ab44cu: goto label_2ab44c;
        case 0x2ab450u: goto label_2ab450;
        case 0x2ab454u: goto label_2ab454;
        case 0x2ab458u: goto label_2ab458;
        case 0x2ab45cu: goto label_2ab45c;
        case 0x2ab460u: goto label_2ab460;
        case 0x2ab464u: goto label_2ab464;
        case 0x2ab468u: goto label_2ab468;
        case 0x2ab46cu: goto label_2ab46c;
        case 0x2ab470u: goto label_2ab470;
        case 0x2ab474u: goto label_2ab474;
        case 0x2ab478u: goto label_2ab478;
        case 0x2ab47cu: goto label_2ab47c;
        case 0x2ab480u: goto label_2ab480;
        case 0x2ab484u: goto label_2ab484;
        case 0x2ab488u: goto label_2ab488;
        case 0x2ab48cu: goto label_2ab48c;
        case 0x2ab490u: goto label_2ab490;
        case 0x2ab494u: goto label_2ab494;
        case 0x2ab498u: goto label_2ab498;
        case 0x2ab49cu: goto label_2ab49c;
        case 0x2ab4a0u: goto label_2ab4a0;
        case 0x2ab4a4u: goto label_2ab4a4;
        case 0x2ab4a8u: goto label_2ab4a8;
        case 0x2ab4acu: goto label_2ab4ac;
        case 0x2ab4b0u: goto label_2ab4b0;
        case 0x2ab4b4u: goto label_2ab4b4;
        case 0x2ab4b8u: goto label_2ab4b8;
        case 0x2ab4bcu: goto label_2ab4bc;
        case 0x2ab4c0u: goto label_2ab4c0;
        case 0x2ab4c4u: goto label_2ab4c4;
        case 0x2ab4c8u: goto label_2ab4c8;
        case 0x2ab4ccu: goto label_2ab4cc;
        case 0x2ab4d0u: goto label_2ab4d0;
        case 0x2ab4d4u: goto label_2ab4d4;
        case 0x2ab4d8u: goto label_2ab4d8;
        case 0x2ab4dcu: goto label_2ab4dc;
        case 0x2ab4e0u: goto label_2ab4e0;
        case 0x2ab4e4u: goto label_2ab4e4;
        case 0x2ab4e8u: goto label_2ab4e8;
        case 0x2ab4ecu: goto label_2ab4ec;
        case 0x2ab4f0u: goto label_2ab4f0;
        case 0x2ab4f4u: goto label_2ab4f4;
        case 0x2ab4f8u: goto label_2ab4f8;
        case 0x2ab4fcu: goto label_2ab4fc;
        case 0x2ab500u: goto label_2ab500;
        case 0x2ab504u: goto label_2ab504;
        case 0x2ab508u: goto label_2ab508;
        case 0x2ab50cu: goto label_2ab50c;
        case 0x2ab510u: goto label_2ab510;
        case 0x2ab514u: goto label_2ab514;
        case 0x2ab518u: goto label_2ab518;
        case 0x2ab51cu: goto label_2ab51c;
        case 0x2ab520u: goto label_2ab520;
        case 0x2ab524u: goto label_2ab524;
        case 0x2ab528u: goto label_2ab528;
        case 0x2ab52cu: goto label_2ab52c;
        case 0x2ab530u: goto label_2ab530;
        case 0x2ab534u: goto label_2ab534;
        case 0x2ab538u: goto label_2ab538;
        case 0x2ab53cu: goto label_2ab53c;
        case 0x2ab540u: goto label_2ab540;
        case 0x2ab544u: goto label_2ab544;
        case 0x2ab548u: goto label_2ab548;
        case 0x2ab54cu: goto label_2ab54c;
        case 0x2ab550u: goto label_2ab550;
        case 0x2ab554u: goto label_2ab554;
        case 0x2ab558u: goto label_2ab558;
        case 0x2ab55cu: goto label_2ab55c;
        case 0x2ab560u: goto label_2ab560;
        case 0x2ab564u: goto label_2ab564;
        case 0x2ab568u: goto label_2ab568;
        case 0x2ab56cu: goto label_2ab56c;
        case 0x2ab570u: goto label_2ab570;
        case 0x2ab574u: goto label_2ab574;
        case 0x2ab578u: goto label_2ab578;
        case 0x2ab57cu: goto label_2ab57c;
        case 0x2ab580u: goto label_2ab580;
        case 0x2ab584u: goto label_2ab584;
        case 0x2ab588u: goto label_2ab588;
        case 0x2ab58cu: goto label_2ab58c;
        case 0x2ab590u: goto label_2ab590;
        case 0x2ab594u: goto label_2ab594;
        case 0x2ab598u: goto label_2ab598;
        case 0x2ab59cu: goto label_2ab59c;
        case 0x2ab5a0u: goto label_2ab5a0;
        case 0x2ab5a4u: goto label_2ab5a4;
        case 0x2ab5a8u: goto label_2ab5a8;
        case 0x2ab5acu: goto label_2ab5ac;
        case 0x2ab5b0u: goto label_2ab5b0;
        case 0x2ab5b4u: goto label_2ab5b4;
        case 0x2ab5b8u: goto label_2ab5b8;
        case 0x2ab5bcu: goto label_2ab5bc;
        case 0x2ab5c0u: goto label_2ab5c0;
        case 0x2ab5c4u: goto label_2ab5c4;
        case 0x2ab5c8u: goto label_2ab5c8;
        case 0x2ab5ccu: goto label_2ab5cc;
        case 0x2ab5d0u: goto label_2ab5d0;
        case 0x2ab5d4u: goto label_2ab5d4;
        case 0x2ab5d8u: goto label_2ab5d8;
        case 0x2ab5dcu: goto label_2ab5dc;
        case 0x2ab5e0u: goto label_2ab5e0;
        case 0x2ab5e4u: goto label_2ab5e4;
        case 0x2ab5e8u: goto label_2ab5e8;
        case 0x2ab5ecu: goto label_2ab5ec;
        case 0x2ab5f0u: goto label_2ab5f0;
        case 0x2ab5f4u: goto label_2ab5f4;
        case 0x2ab5f8u: goto label_2ab5f8;
        case 0x2ab5fcu: goto label_2ab5fc;
        case 0x2ab600u: goto label_2ab600;
        case 0x2ab604u: goto label_2ab604;
        case 0x2ab608u: goto label_2ab608;
        case 0x2ab60cu: goto label_2ab60c;
        case 0x2ab610u: goto label_2ab610;
        case 0x2ab614u: goto label_2ab614;
        case 0x2ab618u: goto label_2ab618;
        case 0x2ab61cu: goto label_2ab61c;
        case 0x2ab620u: goto label_2ab620;
        case 0x2ab624u: goto label_2ab624;
        case 0x2ab628u: goto label_2ab628;
        case 0x2ab62cu: goto label_2ab62c;
        case 0x2ab630u: goto label_2ab630;
        case 0x2ab634u: goto label_2ab634;
        case 0x2ab638u: goto label_2ab638;
        case 0x2ab63cu: goto label_2ab63c;
        case 0x2ab640u: goto label_2ab640;
        case 0x2ab644u: goto label_2ab644;
        case 0x2ab648u: goto label_2ab648;
        case 0x2ab64cu: goto label_2ab64c;
        case 0x2ab650u: goto label_2ab650;
        case 0x2ab654u: goto label_2ab654;
        case 0x2ab658u: goto label_2ab658;
        case 0x2ab65cu: goto label_2ab65c;
        case 0x2ab660u: goto label_2ab660;
        case 0x2ab664u: goto label_2ab664;
        case 0x2ab668u: goto label_2ab668;
        case 0x2ab66cu: goto label_2ab66c;
        case 0x2ab670u: goto label_2ab670;
        case 0x2ab674u: goto label_2ab674;
        case 0x2ab678u: goto label_2ab678;
        case 0x2ab67cu: goto label_2ab67c;
        case 0x2ab680u: goto label_2ab680;
        case 0x2ab684u: goto label_2ab684;
        case 0x2ab688u: goto label_2ab688;
        case 0x2ab68cu: goto label_2ab68c;
        case 0x2ab690u: goto label_2ab690;
        case 0x2ab694u: goto label_2ab694;
        case 0x2ab698u: goto label_2ab698;
        case 0x2ab69cu: goto label_2ab69c;
        case 0x2ab6a0u: goto label_2ab6a0;
        case 0x2ab6a4u: goto label_2ab6a4;
        case 0x2ab6a8u: goto label_2ab6a8;
        case 0x2ab6acu: goto label_2ab6ac;
        case 0x2ab6b0u: goto label_2ab6b0;
        case 0x2ab6b4u: goto label_2ab6b4;
        case 0x2ab6b8u: goto label_2ab6b8;
        case 0x2ab6bcu: goto label_2ab6bc;
        case 0x2ab6c0u: goto label_2ab6c0;
        case 0x2ab6c4u: goto label_2ab6c4;
        case 0x2ab6c8u: goto label_2ab6c8;
        case 0x2ab6ccu: goto label_2ab6cc;
        case 0x2ab6d0u: goto label_2ab6d0;
        case 0x2ab6d4u: goto label_2ab6d4;
        case 0x2ab6d8u: goto label_2ab6d8;
        case 0x2ab6dcu: goto label_2ab6dc;
        case 0x2ab6e0u: goto label_2ab6e0;
        case 0x2ab6e4u: goto label_2ab6e4;
        case 0x2ab6e8u: goto label_2ab6e8;
        case 0x2ab6ecu: goto label_2ab6ec;
        case 0x2ab6f0u: goto label_2ab6f0;
        case 0x2ab6f4u: goto label_2ab6f4;
        case 0x2ab6f8u: goto label_2ab6f8;
        case 0x2ab6fcu: goto label_2ab6fc;
        case 0x2ab700u: goto label_2ab700;
        case 0x2ab704u: goto label_2ab704;
        case 0x2ab708u: goto label_2ab708;
        case 0x2ab70cu: goto label_2ab70c;
        case 0x2ab710u: goto label_2ab710;
        case 0x2ab714u: goto label_2ab714;
        case 0x2ab718u: goto label_2ab718;
        case 0x2ab71cu: goto label_2ab71c;
        case 0x2ab720u: goto label_2ab720;
        case 0x2ab724u: goto label_2ab724;
        case 0x2ab728u: goto label_2ab728;
        case 0x2ab72cu: goto label_2ab72c;
        case 0x2ab730u: goto label_2ab730;
        case 0x2ab734u: goto label_2ab734;
        case 0x2ab738u: goto label_2ab738;
        case 0x2ab73cu: goto label_2ab73c;
        case 0x2ab740u: goto label_2ab740;
        case 0x2ab744u: goto label_2ab744;
        case 0x2ab748u: goto label_2ab748;
        case 0x2ab74cu: goto label_2ab74c;
        case 0x2ab750u: goto label_2ab750;
        case 0x2ab754u: goto label_2ab754;
        case 0x2ab758u: goto label_2ab758;
        case 0x2ab75cu: goto label_2ab75c;
        case 0x2ab760u: goto label_2ab760;
        case 0x2ab764u: goto label_2ab764;
        case 0x2ab768u: goto label_2ab768;
        case 0x2ab76cu: goto label_2ab76c;
        case 0x2ab770u: goto label_2ab770;
        case 0x2ab774u: goto label_2ab774;
        case 0x2ab778u: goto label_2ab778;
        case 0x2ab77cu: goto label_2ab77c;
        case 0x2ab780u: goto label_2ab780;
        case 0x2ab784u: goto label_2ab784;
        case 0x2ab788u: goto label_2ab788;
        case 0x2ab78cu: goto label_2ab78c;
        case 0x2ab790u: goto label_2ab790;
        case 0x2ab794u: goto label_2ab794;
        case 0x2ab798u: goto label_2ab798;
        case 0x2ab79cu: goto label_2ab79c;
        case 0x2ab7a0u: goto label_2ab7a0;
        case 0x2ab7a4u: goto label_2ab7a4;
        case 0x2ab7a8u: goto label_2ab7a8;
        case 0x2ab7acu: goto label_2ab7ac;
        case 0x2ab7b0u: goto label_2ab7b0;
        case 0x2ab7b4u: goto label_2ab7b4;
        case 0x2ab7b8u: goto label_2ab7b8;
        case 0x2ab7bcu: goto label_2ab7bc;
        case 0x2ab7c0u: goto label_2ab7c0;
        case 0x2ab7c4u: goto label_2ab7c4;
        case 0x2ab7c8u: goto label_2ab7c8;
        case 0x2ab7ccu: goto label_2ab7cc;
        case 0x2ab7d0u: goto label_2ab7d0;
        case 0x2ab7d4u: goto label_2ab7d4;
        case 0x2ab7d8u: goto label_2ab7d8;
        case 0x2ab7dcu: goto label_2ab7dc;
        case 0x2ab7e0u: goto label_2ab7e0;
        case 0x2ab7e4u: goto label_2ab7e4;
        case 0x2ab7e8u: goto label_2ab7e8;
        case 0x2ab7ecu: goto label_2ab7ec;
        case 0x2ab7f0u: goto label_2ab7f0;
        case 0x2ab7f4u: goto label_2ab7f4;
        case 0x2ab7f8u: goto label_2ab7f8;
        case 0x2ab7fcu: goto label_2ab7fc;
        case 0x2ab800u: goto label_2ab800;
        case 0x2ab804u: goto label_2ab804;
        case 0x2ab808u: goto label_2ab808;
        case 0x2ab80cu: goto label_2ab80c;
        case 0x2ab810u: goto label_2ab810;
        case 0x2ab814u: goto label_2ab814;
        case 0x2ab818u: goto label_2ab818;
        case 0x2ab81cu: goto label_2ab81c;
        case 0x2ab820u: goto label_2ab820;
        case 0x2ab824u: goto label_2ab824;
        case 0x2ab828u: goto label_2ab828;
        case 0x2ab82cu: goto label_2ab82c;
        case 0x2ab830u: goto label_2ab830;
        case 0x2ab834u: goto label_2ab834;
        case 0x2ab838u: goto label_2ab838;
        case 0x2ab83cu: goto label_2ab83c;
        case 0x2ab840u: goto label_2ab840;
        case 0x2ab844u: goto label_2ab844;
        case 0x2ab848u: goto label_2ab848;
        case 0x2ab84cu: goto label_2ab84c;
        case 0x2ab850u: goto label_2ab850;
        case 0x2ab854u: goto label_2ab854;
        case 0x2ab858u: goto label_2ab858;
        case 0x2ab85cu: goto label_2ab85c;
        case 0x2ab860u: goto label_2ab860;
        case 0x2ab864u: goto label_2ab864;
        case 0x2ab868u: goto label_2ab868;
        case 0x2ab86cu: goto label_2ab86c;
        case 0x2ab870u: goto label_2ab870;
        case 0x2ab874u: goto label_2ab874;
        case 0x2ab878u: goto label_2ab878;
        case 0x2ab87cu: goto label_2ab87c;
        case 0x2ab880u: goto label_2ab880;
        case 0x2ab884u: goto label_2ab884;
        case 0x2ab888u: goto label_2ab888;
        case 0x2ab88cu: goto label_2ab88c;
        case 0x2ab890u: goto label_2ab890;
        case 0x2ab894u: goto label_2ab894;
        case 0x2ab898u: goto label_2ab898;
        case 0x2ab89cu: goto label_2ab89c;
        case 0x2ab8a0u: goto label_2ab8a0;
        case 0x2ab8a4u: goto label_2ab8a4;
        case 0x2ab8a8u: goto label_2ab8a8;
        case 0x2ab8acu: goto label_2ab8ac;
        case 0x2ab8b0u: goto label_2ab8b0;
        case 0x2ab8b4u: goto label_2ab8b4;
        case 0x2ab8b8u: goto label_2ab8b8;
        case 0x2ab8bcu: goto label_2ab8bc;
        case 0x2ab8c0u: goto label_2ab8c0;
        case 0x2ab8c4u: goto label_2ab8c4;
        case 0x2ab8c8u: goto label_2ab8c8;
        case 0x2ab8ccu: goto label_2ab8cc;
        case 0x2ab8d0u: goto label_2ab8d0;
        case 0x2ab8d4u: goto label_2ab8d4;
        case 0x2ab8d8u: goto label_2ab8d8;
        case 0x2ab8dcu: goto label_2ab8dc;
        case 0x2ab8e0u: goto label_2ab8e0;
        case 0x2ab8e4u: goto label_2ab8e4;
        case 0x2ab8e8u: goto label_2ab8e8;
        case 0x2ab8ecu: goto label_2ab8ec;
        case 0x2ab8f0u: goto label_2ab8f0;
        case 0x2ab8f4u: goto label_2ab8f4;
        case 0x2ab8f8u: goto label_2ab8f8;
        case 0x2ab8fcu: goto label_2ab8fc;
        case 0x2ab900u: goto label_2ab900;
        case 0x2ab904u: goto label_2ab904;
        case 0x2ab908u: goto label_2ab908;
        case 0x2ab90cu: goto label_2ab90c;
        case 0x2ab910u: goto label_2ab910;
        case 0x2ab914u: goto label_2ab914;
        case 0x2ab918u: goto label_2ab918;
        case 0x2ab91cu: goto label_2ab91c;
        case 0x2ab920u: goto label_2ab920;
        case 0x2ab924u: goto label_2ab924;
        case 0x2ab928u: goto label_2ab928;
        case 0x2ab92cu: goto label_2ab92c;
        case 0x2ab930u: goto label_2ab930;
        case 0x2ab934u: goto label_2ab934;
        case 0x2ab938u: goto label_2ab938;
        case 0x2ab93cu: goto label_2ab93c;
        case 0x2ab940u: goto label_2ab940;
        case 0x2ab944u: goto label_2ab944;
        case 0x2ab948u: goto label_2ab948;
        case 0x2ab94cu: goto label_2ab94c;
        case 0x2ab950u: goto label_2ab950;
        case 0x2ab954u: goto label_2ab954;
        case 0x2ab958u: goto label_2ab958;
        case 0x2ab95cu: goto label_2ab95c;
        case 0x2ab960u: goto label_2ab960;
        case 0x2ab964u: goto label_2ab964;
        case 0x2ab968u: goto label_2ab968;
        case 0x2ab96cu: goto label_2ab96c;
        case 0x2ab970u: goto label_2ab970;
        case 0x2ab974u: goto label_2ab974;
        case 0x2ab978u: goto label_2ab978;
        case 0x2ab97cu: goto label_2ab97c;
        case 0x2ab980u: goto label_2ab980;
        case 0x2ab984u: goto label_2ab984;
        case 0x2ab988u: goto label_2ab988;
        case 0x2ab98cu: goto label_2ab98c;
        case 0x2ab990u: goto label_2ab990;
        case 0x2ab994u: goto label_2ab994;
        case 0x2ab998u: goto label_2ab998;
        case 0x2ab99cu: goto label_2ab99c;
        case 0x2ab9a0u: goto label_2ab9a0;
        case 0x2ab9a4u: goto label_2ab9a4;
        case 0x2ab9a8u: goto label_2ab9a8;
        case 0x2ab9acu: goto label_2ab9ac;
        case 0x2ab9b0u: goto label_2ab9b0;
        case 0x2ab9b4u: goto label_2ab9b4;
        case 0x2ab9b8u: goto label_2ab9b8;
        case 0x2ab9bcu: goto label_2ab9bc;
        case 0x2ab9c0u: goto label_2ab9c0;
        case 0x2ab9c4u: goto label_2ab9c4;
        case 0x2ab9c8u: goto label_2ab9c8;
        case 0x2ab9ccu: goto label_2ab9cc;
        case 0x2ab9d0u: goto label_2ab9d0;
        case 0x2ab9d4u: goto label_2ab9d4;
        case 0x2ab9d8u: goto label_2ab9d8;
        case 0x2ab9dcu: goto label_2ab9dc;
        case 0x2ab9e0u: goto label_2ab9e0;
        case 0x2ab9e4u: goto label_2ab9e4;
        case 0x2ab9e8u: goto label_2ab9e8;
        case 0x2ab9ecu: goto label_2ab9ec;
        case 0x2ab9f0u: goto label_2ab9f0;
        case 0x2ab9f4u: goto label_2ab9f4;
        case 0x2ab9f8u: goto label_2ab9f8;
        case 0x2ab9fcu: goto label_2ab9fc;
        case 0x2aba00u: goto label_2aba00;
        case 0x2aba04u: goto label_2aba04;
        case 0x2aba08u: goto label_2aba08;
        case 0x2aba0cu: goto label_2aba0c;
        case 0x2aba10u: goto label_2aba10;
        case 0x2aba14u: goto label_2aba14;
        case 0x2aba18u: goto label_2aba18;
        case 0x2aba1cu: goto label_2aba1c;
        case 0x2aba20u: goto label_2aba20;
        case 0x2aba24u: goto label_2aba24;
        case 0x2aba28u: goto label_2aba28;
        case 0x2aba2cu: goto label_2aba2c;
        case 0x2aba30u: goto label_2aba30;
        case 0x2aba34u: goto label_2aba34;
        case 0x2aba38u: goto label_2aba38;
        case 0x2aba3cu: goto label_2aba3c;
        case 0x2aba40u: goto label_2aba40;
        case 0x2aba44u: goto label_2aba44;
        case 0x2aba48u: goto label_2aba48;
        case 0x2aba4cu: goto label_2aba4c;
        case 0x2aba50u: goto label_2aba50;
        case 0x2aba54u: goto label_2aba54;
        case 0x2aba58u: goto label_2aba58;
        case 0x2aba5cu: goto label_2aba5c;
        case 0x2aba60u: goto label_2aba60;
        case 0x2aba64u: goto label_2aba64;
        case 0x2aba68u: goto label_2aba68;
        case 0x2aba6cu: goto label_2aba6c;
        case 0x2aba70u: goto label_2aba70;
        case 0x2aba74u: goto label_2aba74;
        case 0x2aba78u: goto label_2aba78;
        case 0x2aba7cu: goto label_2aba7c;
        case 0x2aba80u: goto label_2aba80;
        case 0x2aba84u: goto label_2aba84;
        case 0x2aba88u: goto label_2aba88;
        case 0x2aba8cu: goto label_2aba8c;
        case 0x2aba90u: goto label_2aba90;
        case 0x2aba94u: goto label_2aba94;
        case 0x2aba98u: goto label_2aba98;
        case 0x2aba9cu: goto label_2aba9c;
        case 0x2abaa0u: goto label_2abaa0;
        case 0x2abaa4u: goto label_2abaa4;
        case 0x2abaa8u: goto label_2abaa8;
        case 0x2abaacu: goto label_2abaac;
        case 0x2abab0u: goto label_2abab0;
        case 0x2abab4u: goto label_2abab4;
        case 0x2abab8u: goto label_2abab8;
        case 0x2ababcu: goto label_2ababc;
        case 0x2abac0u: goto label_2abac0;
        case 0x2abac4u: goto label_2abac4;
        case 0x2abac8u: goto label_2abac8;
        case 0x2abaccu: goto label_2abacc;
        case 0x2abad0u: goto label_2abad0;
        case 0x2abad4u: goto label_2abad4;
        case 0x2abad8u: goto label_2abad8;
        case 0x2abadcu: goto label_2abadc;
        case 0x2abae0u: goto label_2abae0;
        case 0x2abae4u: goto label_2abae4;
        case 0x2abae8u: goto label_2abae8;
        case 0x2abaecu: goto label_2abaec;
        case 0x2abaf0u: goto label_2abaf0;
        case 0x2abaf4u: goto label_2abaf4;
        case 0x2abaf8u: goto label_2abaf8;
        case 0x2abafcu: goto label_2abafc;
        case 0x2abb00u: goto label_2abb00;
        case 0x2abb04u: goto label_2abb04;
        case 0x2abb08u: goto label_2abb08;
        case 0x2abb0cu: goto label_2abb0c;
        case 0x2abb10u: goto label_2abb10;
        case 0x2abb14u: goto label_2abb14;
        case 0x2abb18u: goto label_2abb18;
        case 0x2abb1cu: goto label_2abb1c;
        case 0x2abb20u: goto label_2abb20;
        case 0x2abb24u: goto label_2abb24;
        case 0x2abb28u: goto label_2abb28;
        case 0x2abb2cu: goto label_2abb2c;
        case 0x2abb30u: goto label_2abb30;
        case 0x2abb34u: goto label_2abb34;
        case 0x2abb38u: goto label_2abb38;
        case 0x2abb3cu: goto label_2abb3c;
        case 0x2abb40u: goto label_2abb40;
        case 0x2abb44u: goto label_2abb44;
        case 0x2abb48u: goto label_2abb48;
        case 0x2abb4cu: goto label_2abb4c;
        case 0x2abb50u: goto label_2abb50;
        case 0x2abb54u: goto label_2abb54;
        case 0x2abb58u: goto label_2abb58;
        case 0x2abb5cu: goto label_2abb5c;
        case 0x2abb60u: goto label_2abb60;
        case 0x2abb64u: goto label_2abb64;
        case 0x2abb68u: goto label_2abb68;
        case 0x2abb6cu: goto label_2abb6c;
        case 0x2abb70u: goto label_2abb70;
        case 0x2abb74u: goto label_2abb74;
        case 0x2abb78u: goto label_2abb78;
        case 0x2abb7cu: goto label_2abb7c;
        case 0x2abb80u: goto label_2abb80;
        case 0x2abb84u: goto label_2abb84;
        case 0x2abb88u: goto label_2abb88;
        case 0x2abb8cu: goto label_2abb8c;
        case 0x2abb90u: goto label_2abb90;
        case 0x2abb94u: goto label_2abb94;
        case 0x2abb98u: goto label_2abb98;
        case 0x2abb9cu: goto label_2abb9c;
        case 0x2abba0u: goto label_2abba0;
        case 0x2abba4u: goto label_2abba4;
        case 0x2abba8u: goto label_2abba8;
        case 0x2abbacu: goto label_2abbac;
        case 0x2abbb0u: goto label_2abbb0;
        case 0x2abbb4u: goto label_2abbb4;
        case 0x2abbb8u: goto label_2abbb8;
        case 0x2abbbcu: goto label_2abbbc;
        case 0x2abbc0u: goto label_2abbc0;
        case 0x2abbc4u: goto label_2abbc4;
        case 0x2abbc8u: goto label_2abbc8;
        case 0x2abbccu: goto label_2abbcc;
        case 0x2abbd0u: goto label_2abbd0;
        case 0x2abbd4u: goto label_2abbd4;
        case 0x2abbd8u: goto label_2abbd8;
        case 0x2abbdcu: goto label_2abbdc;
        case 0x2abbe0u: goto label_2abbe0;
        case 0x2abbe4u: goto label_2abbe4;
        case 0x2abbe8u: goto label_2abbe8;
        case 0x2abbecu: goto label_2abbec;
        case 0x2abbf0u: goto label_2abbf0;
        case 0x2abbf4u: goto label_2abbf4;
        case 0x2abbf8u: goto label_2abbf8;
        case 0x2abbfcu: goto label_2abbfc;
        case 0x2abc00u: goto label_2abc00;
        case 0x2abc04u: goto label_2abc04;
        case 0x2abc08u: goto label_2abc08;
        case 0x2abc0cu: goto label_2abc0c;
        case 0x2abc10u: goto label_2abc10;
        case 0x2abc14u: goto label_2abc14;
        case 0x2abc18u: goto label_2abc18;
        case 0x2abc1cu: goto label_2abc1c;
        case 0x2abc20u: goto label_2abc20;
        case 0x2abc24u: goto label_2abc24;
        case 0x2abc28u: goto label_2abc28;
        case 0x2abc2cu: goto label_2abc2c;
        case 0x2abc30u: goto label_2abc30;
        case 0x2abc34u: goto label_2abc34;
        case 0x2abc38u: goto label_2abc38;
        case 0x2abc3cu: goto label_2abc3c;
        case 0x2abc40u: goto label_2abc40;
        case 0x2abc44u: goto label_2abc44;
        case 0x2abc48u: goto label_2abc48;
        case 0x2abc4cu: goto label_2abc4c;
        case 0x2abc50u: goto label_2abc50;
        case 0x2abc54u: goto label_2abc54;
        case 0x2abc58u: goto label_2abc58;
        case 0x2abc5cu: goto label_2abc5c;
        case 0x2abc60u: goto label_2abc60;
        case 0x2abc64u: goto label_2abc64;
        case 0x2abc68u: goto label_2abc68;
        case 0x2abc6cu: goto label_2abc6c;
        case 0x2abc70u: goto label_2abc70;
        case 0x2abc74u: goto label_2abc74;
        case 0x2abc78u: goto label_2abc78;
        case 0x2abc7cu: goto label_2abc7c;
        case 0x2abc80u: goto label_2abc80;
        case 0x2abc84u: goto label_2abc84;
        case 0x2abc88u: goto label_2abc88;
        case 0x2abc8cu: goto label_2abc8c;
        case 0x2abc90u: goto label_2abc90;
        case 0x2abc94u: goto label_2abc94;
        case 0x2abc98u: goto label_2abc98;
        case 0x2abc9cu: goto label_2abc9c;
        case 0x2abca0u: goto label_2abca0;
        case 0x2abca4u: goto label_2abca4;
        case 0x2abca8u: goto label_2abca8;
        case 0x2abcacu: goto label_2abcac;
        case 0x2abcb0u: goto label_2abcb0;
        case 0x2abcb4u: goto label_2abcb4;
        case 0x2abcb8u: goto label_2abcb8;
        case 0x2abcbcu: goto label_2abcbc;
        case 0x2abcc0u: goto label_2abcc0;
        case 0x2abcc4u: goto label_2abcc4;
        case 0x2abcc8u: goto label_2abcc8;
        case 0x2abcccu: goto label_2abccc;
        case 0x2abcd0u: goto label_2abcd0;
        case 0x2abcd4u: goto label_2abcd4;
        case 0x2abcd8u: goto label_2abcd8;
        case 0x2abcdcu: goto label_2abcdc;
        case 0x2abce0u: goto label_2abce0;
        case 0x2abce4u: goto label_2abce4;
        case 0x2abce8u: goto label_2abce8;
        case 0x2abcecu: goto label_2abcec;
        default: break;
    }

    ctx->pc = 0x2ab220u;

label_2ab220:
    // 0x2ab220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ab224:
    // 0x2ab224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ab228:
    // 0x2ab228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ab228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2ab22c:
    // 0x2ab22c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ab22cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2ab230:
    // 0x2ab230: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ab230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab234:
    // 0x2ab234: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ab238:
    if (ctx->pc == 0x2AB238u) {
        ctx->pc = 0x2AB23Cu;
        goto label_2ab23c;
    }
    ctx->pc = 0x2AB234u;
    {
        const bool branch_taken_0x2ab234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab234) {
            ctx->pc = 0x2AB26Cu;
            goto label_2ab26c;
        }
    }
    ctx->pc = 0x2AB23Cu;
label_2ab23c:
    // 0x2ab23c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2ab23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2ab240:
    // 0x2ab240: 0x246364c0  addiu       $v1, $v1, 0x64C0
    ctx->pc = 0x2ab240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25792));
label_2ab244:
    // 0x2ab244: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ab244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab248:
    // 0x2ab248: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ab248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2ab24c:
    // 0x2ab24c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ab24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2ab250:
    // 0x2ab250: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ab250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2ab254:
    // 0x2ab254: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ab254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ab258:
    // 0x2ab258: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2ab25c:
    if (ctx->pc == 0x2AB25Cu) {
        ctx->pc = 0x2AB260u;
        goto label_2ab260;
    }
    ctx->pc = 0x2AB258u;
    {
        const bool branch_taken_0x2ab258 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ab258) {
            ctx->pc = 0x2AB26Cu;
            goto label_2ab26c;
        }
    }
    ctx->pc = 0x2AB260u;
label_2ab260:
    // 0x2ab260: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ab260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab264:
    // 0x2ab264: 0xc0ba070  jal         func_2E81C0
label_2ab268:
    if (ctx->pc == 0x2AB268u) {
        ctx->pc = 0x2AB26Cu;
        goto label_2ab26c;
    }
    ctx->pc = 0x2AB264u;
    SET_GPR_U32(ctx, 31, 0x2AB26Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AB264u, 0x2AB26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB26Cu;
label_2ab26c:
    // 0x2ab26c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ab26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab270:
    // 0x2ab270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab274:
    // 0x2ab274: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ab274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ab278:
    // 0x2ab278: 0x3e00008  jr          $ra
label_2ab27c:
    if (ctx->pc == 0x2AB27Cu) {
        ctx->pc = 0x2AB280u;
        goto label_2ab280;
    }
    ctx->pc = 0x2AB278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB280u;
label_2ab280:
    // 0x2ab280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ab280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ab284:
    // 0x2ab284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ab288:
    // 0x2ab288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ab28c:
    // 0x2ab28c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2ab28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2ab290:
    // 0x2ab290: 0xc12242c  jal         func_4890B0
label_2ab294:
    if (ctx->pc == 0x2AB294u) {
        ctx->pc = 0x2AB298u;
        goto label_2ab298;
    }
    ctx->pc = 0x2AB290u;
    SET_GPR_U32(ctx, 31, 0x2AB298u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x2AB290u, 0x2AB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB298u;
label_2ab298:
    // 0x2ab298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab29c:
    // 0x2ab29c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ab29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ab2a0:
    // 0x2ab2a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ab2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ab2a4:
    // 0x2ab2a4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2ab2a8:
    if (ctx->pc == 0x2AB2A8u) {
        ctx->pc = 0x2AB2ACu;
        goto label_2ab2ac;
    }
    ctx->pc = 0x2AB2A4u;
    {
        const bool branch_taken_0x2ab2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab2a4) {
            ctx->pc = 0x2AB2CCu;
            goto label_2ab2cc;
        }
    }
    ctx->pc = 0x2AB2ACu;
label_2ab2ac:
    // 0x2ab2ac: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2ab2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2ab2b0:
    // 0x2ab2b0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2ab2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ab2b4:
    // 0x2ab2b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ab2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ab2b8:
    // 0x2ab2b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ab2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ab2bc:
    // 0x2ab2bc: 0x0  nop
    ctx->pc = 0x2ab2bcu;
    // NOP
label_2ab2c0:
    // 0x2ab2c0: 0x0  nop
    ctx->pc = 0x2ab2c0u;
    // NOP
label_2ab2c4:
    // 0x2ab2c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2ab2c8:
    if (ctx->pc == 0x2AB2C8u) {
        ctx->pc = 0x2AB2CCu;
        goto label_2ab2cc;
    }
    ctx->pc = 0x2AB2C4u;
    {
        const bool branch_taken_0x2ab2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab2c4) {
            ctx->pc = 0x2AB2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab2b0;
        }
    }
    ctx->pc = 0x2AB2CCu;
label_2ab2cc:
    // 0x2ab2cc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2ab2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2ab2d0:
    // 0x2ab2d0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ab2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ab2d4:
    // 0x2ab2d4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2ab2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_2ab2d8:
    // 0x2ab2d8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2ab2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2ab2dc:
    // 0x2ab2dc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2ab2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2ab2e0:
    // 0x2ab2e0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2ab2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2ab2e4:
    // 0x2ab2e4: 0xc10d510  jal         func_435440
label_2ab2e8:
    if (ctx->pc == 0x2AB2E8u) {
        ctx->pc = 0x2AB2ECu;
        goto label_2ab2ec;
    }
    ctx->pc = 0x2AB2E4u;
    SET_GPR_U32(ctx, 31, 0x2AB2ECu);
    ctx->pc = 0x435440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435440u, 0x2AB2E4u, 0x2AB2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2ECu;
label_2ab2ec:
    // 0x2ab2ec: 0xaf82bc58  sw          $v0, -0x43A8($gp)
    ctx->pc = 0x2ab2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949976), GPR_U32(ctx, 2));
label_2ab2f0:
    // 0x2ab2f0: 0x8f82bc58  lw          $v0, -0x43A8($gp)
    ctx->pc = 0x2ab2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949976)));
label_2ab2f4:
    // 0x2ab2f4: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
label_2ab2f8:
    if (ctx->pc == 0x2AB2F8u) {
        ctx->pc = 0x2AB2FCu;
        goto label_2ab2fc;
    }
    ctx->pc = 0x2AB2F4u;
    {
        const bool branch_taken_0x2ab2f4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ab2f4) {
            ctx->pc = 0x2AB308u;
            goto label_2ab308;
        }
    }
    ctx->pc = 0x2AB2FCu;
label_2ab2fc:
    // 0x2ab2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ab2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab300:
    // 0x2ab300: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ab304:
    if (ctx->pc == 0x2AB304u) {
        ctx->pc = 0x2AB308u;
        goto label_2ab308;
    }
    ctx->pc = 0x2AB300u;
    {
        const bool branch_taken_0x2ab300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab300) {
            ctx->pc = 0x2AB31Cu;
            goto label_2ab31c;
        }
    }
    ctx->pc = 0x2AB308u;
label_2ab308:
    // 0x2ab308: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2ab308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2ab30c:
    // 0x2ab30c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ab30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab310:
    // 0x2ab310: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2ab310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ab314:
    // 0x2ab314: 0xc0aaf3c  jal         func_2ABCF0
label_2ab318:
    if (ctx->pc == 0x2AB318u) {
        ctx->pc = 0x2AB31Cu;
        goto label_2ab31c;
    }
    ctx->pc = 0x2AB314u;
    SET_GPR_U32(ctx, 31, 0x2AB31Cu);
    ctx->pc = 0x2ABCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCF0u, 0x2AB314u, 0x2AB31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB31Cu;
label_2ab31c:
    // 0x2ab31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab320:
    // 0x2ab320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab324:
    // 0x2ab324: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2ab324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2ab328:
    // 0x2ab328: 0x3e00008  jr          $ra
label_2ab32c:
    if (ctx->pc == 0x2AB32Cu) {
        ctx->pc = 0x2AB330u;
        goto label_2ab330;
    }
    ctx->pc = 0x2AB328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB330u;
label_2ab330:
    // 0x2ab330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ab334:
    // 0x2ab334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ab338:
    // 0x2ab338: 0x8f82bc54  lw          $v0, -0x43AC($gp)
    ctx->pc = 0x2ab338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949972)));
label_2ab33c:
    // 0x2ab33c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ab340:
    if (ctx->pc == 0x2AB340u) {
        ctx->pc = 0x2AB344u;
        goto label_2ab344;
    }
    ctx->pc = 0x2AB33Cu;
    {
        const bool branch_taken_0x2ab33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab33c) {
            ctx->pc = 0x2AB350u;
            goto label_2ab350;
        }
    }
    ctx->pc = 0x2AB344u;
label_2ab344:
    // 0x2ab344: 0x8f84bc54  lw          $a0, -0x43AC($gp)
    ctx->pc = 0x2ab344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949972)));
label_2ab348:
    // 0x2ab348: 0xc1074ac  jal         func_41D2B0
label_2ab34c:
    if (ctx->pc == 0x2AB34Cu) {
        ctx->pc = 0x2AB350u;
        goto label_2ab350;
    }
    ctx->pc = 0x2AB348u;
    SET_GPR_U32(ctx, 31, 0x2AB350u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x2AB348u, 0x2AB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB350u;
label_2ab350:
    // 0x2ab350: 0xaf80bc58  sw          $zero, -0x43A8($gp)
    ctx->pc = 0x2ab350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949976), GPR_U32(ctx, 0));
label_2ab354:
    // 0x2ab354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab358:
    // 0x2ab358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab35c:
    // 0x2ab35c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ab360:
    // 0x2ab360: 0x3e00008  jr          $ra
label_2ab364:
    if (ctx->pc == 0x2AB364u) {
        ctx->pc = 0x2AB368u;
        goto label_2ab368;
    }
    ctx->pc = 0x2AB360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB368u;
label_2ab368:
    // 0x2ab368: 0x0  nop
    ctx->pc = 0x2ab368u;
    // NOP
label_2ab36c:
    // 0x2ab36c: 0x0  nop
    ctx->pc = 0x2ab36cu;
    // NOP
label_2ab370:
    // 0x2ab370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ab370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ab374:
    // 0x2ab374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ab378:
    // 0x2ab378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ab37c:
    // 0x2ab37c: 0x8f82bc58  lw          $v0, -0x43A8($gp)
    ctx->pc = 0x2ab37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949976)));
label_2ab380:
    // 0x2ab380: 0x10020254  beq         $zero, $v0, . + 4 + (0x254 << 2)
label_2ab384:
    if (ctx->pc == 0x2AB384u) {
        ctx->pc = 0x2AB388u;
        goto label_2ab388;
    }
    ctx->pc = 0x2AB380u;
    {
        const bool branch_taken_0x2ab380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ab380) {
            ctx->pc = 0x2ABCD4u;
            goto label_2abcd4;
        }
    }
    ctx->pc = 0x2AB388u;
label_2ab388:
    // 0x2ab388: 0x9382bc5c  lbu         $v0, -0x43A4($gp)
    ctx->pc = 0x2ab388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949980)));
label_2ab38c:
    // 0x2ab38c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ab38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ab390:
    // 0x2ab390: 0x10400250  beqz        $v0, . + 4 + (0x250 << 2)
label_2ab394:
    if (ctx->pc == 0x2AB394u) {
        ctx->pc = 0x2AB398u;
        goto label_2ab398;
    }
    ctx->pc = 0x2AB390u;
    {
        const bool branch_taken_0x2ab390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab390) {
            ctx->pc = 0x2ABCD4u;
            goto label_2abcd4;
        }
    }
    ctx->pc = 0x2AB398u;
label_2ab398:
    // 0x2ab398: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab39c:
    // 0x2ab39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab3a0:
    // 0x2ab3a0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab3a4:
    // 0x2ab3a4: 0xe440c1f0  swc1        $f0, -0x3E10($v0)
    ctx->pc = 0x2ab3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951408), bits); }
label_2ab3a8:
    // 0x2ab3a8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab3ac:
    // 0x2ab3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab3b0:
    // 0x2ab3b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab3b4:
    // 0x2ab3b4: 0xe440c1f4  swc1        $f0, -0x3E0C($v0)
    ctx->pc = 0x2ab3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951412), bits); }
label_2ab3b8:
    // 0x2ab3b8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab3bc:
    // 0x2ab3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab3c0:
    // 0x2ab3c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab3c4:
    // 0x2ab3c4: 0xe440c1f8  swc1        $f0, -0x3E08($v0)
    ctx->pc = 0x2ab3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951416), bits); }
label_2ab3c8:
    // 0x2ab3c8: 0x9382bc5c  lbu         $v0, -0x43A4($gp)
    ctx->pc = 0x2ab3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949980)));
label_2ab3cc:
    // 0x2ab3cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab3d0:
    if (ctx->pc == 0x2AB3D0u) {
        ctx->pc = 0x2AB3D4u;
        goto label_2ab3d4;
    }
    ctx->pc = 0x2AB3CCu;
    {
        const bool branch_taken_0x2ab3cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab3cc) {
            ctx->pc = 0x2AB3E8u;
            goto label_2ab3e8;
        }
    }
    ctx->pc = 0x2AB3D4u;
label_2ab3d4:
    // 0x2ab3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab3d8:
    // 0x2ab3d8: 0x0  nop
    ctx->pc = 0x2ab3d8u;
    // NOP
label_2ab3dc:
    // 0x2ab3dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab3dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab3e0:
    // 0x2ab3e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab3e4:
    if (ctx->pc == 0x2AB3E4u) {
        ctx->pc = 0x2AB3E8u;
        goto label_2ab3e8;
    }
    ctx->pc = 0x2AB3E0u;
    {
        const bool branch_taken_0x2ab3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab3e0) {
            ctx->pc = 0x2AB404u;
            goto label_2ab404;
        }
    }
    ctx->pc = 0x2AB3E8u;
label_2ab3e8:
    // 0x2ab3e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab3ec:
    // 0x2ab3ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab3f0:
    // 0x2ab3f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab3f4:
    // 0x2ab3f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab3f8:
    // 0x2ab3f8: 0x0  nop
    ctx->pc = 0x2ab3f8u;
    // NOP
label_2ab3fc:
    // 0x2ab3fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab400:
    // 0x2ab400: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab404:
    // 0x2ab404: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab408:
    // 0x2ab408: 0xe440c1fc  swc1        $f0, -0x3E04($v0)
    ctx->pc = 0x2ab408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951420), bits); }
label_2ab40c:
    // 0x2ab40c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab410:
    // 0x2ab410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab414:
    // 0x2ab414: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab418:
    // 0x2ab418: 0xe440c230  swc1        $f0, -0x3DD0($v0)
    ctx->pc = 0x2ab418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951472), bits); }
label_2ab41c:
    // 0x2ab41c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab420:
    // 0x2ab420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab424:
    // 0x2ab424: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab428:
    // 0x2ab428: 0xe440c234  swc1        $f0, -0x3DCC($v0)
    ctx->pc = 0x2ab428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951476), bits); }
label_2ab42c:
    // 0x2ab42c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab430:
    // 0x2ab430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab434:
    // 0x2ab434: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab438:
    // 0x2ab438: 0xe440c238  swc1        $f0, -0x3DC8($v0)
    ctx->pc = 0x2ab438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951480), bits); }
label_2ab43c:
    // 0x2ab43c: 0x9382bc5c  lbu         $v0, -0x43A4($gp)
    ctx->pc = 0x2ab43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949980)));
label_2ab440:
    // 0x2ab440: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab444:
    if (ctx->pc == 0x2AB444u) {
        ctx->pc = 0x2AB448u;
        goto label_2ab448;
    }
    ctx->pc = 0x2AB440u;
    {
        const bool branch_taken_0x2ab440 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab440) {
            ctx->pc = 0x2AB45Cu;
            goto label_2ab45c;
        }
    }
    ctx->pc = 0x2AB448u;
label_2ab448:
    // 0x2ab448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab44c:
    // 0x2ab44c: 0x0  nop
    ctx->pc = 0x2ab44cu;
    // NOP
label_2ab450:
    // 0x2ab450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab454:
    // 0x2ab454: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab458:
    if (ctx->pc == 0x2AB458u) {
        ctx->pc = 0x2AB45Cu;
        goto label_2ab45c;
    }
    ctx->pc = 0x2AB454u;
    {
        const bool branch_taken_0x2ab454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab454) {
            ctx->pc = 0x2AB478u;
            goto label_2ab478;
        }
    }
    ctx->pc = 0x2AB45Cu;
label_2ab45c:
    // 0x2ab45c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab460:
    // 0x2ab460: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab464:
    // 0x2ab464: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab468:
    // 0x2ab468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab46c:
    // 0x2ab46c: 0x0  nop
    ctx->pc = 0x2ab46cu;
    // NOP
label_2ab470:
    // 0x2ab470: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab474:
    // 0x2ab474: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab478:
    // 0x2ab478: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab47c:
    // 0x2ab47c: 0xe440c23c  swc1        $f0, -0x3DC4($v0)
    ctx->pc = 0x2ab47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951484), bits); }
label_2ab480:
    // 0x2ab480: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab484:
    // 0x2ab484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab488:
    // 0x2ab488: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab48c:
    // 0x2ab48c: 0xe440c270  swc1        $f0, -0x3D90($v0)
    ctx->pc = 0x2ab48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951536), bits); }
label_2ab490:
    // 0x2ab490: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab494:
    // 0x2ab494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab498:
    // 0x2ab498: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab49c:
    // 0x2ab49c: 0xe440c274  swc1        $f0, -0x3D8C($v0)
    ctx->pc = 0x2ab49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951540), bits); }
label_2ab4a0:
    // 0x2ab4a0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab4a4:
    // 0x2ab4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab4a8:
    // 0x2ab4a8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab4ac:
    // 0x2ab4ac: 0xe440c278  swc1        $f0, -0x3D88($v0)
    ctx->pc = 0x2ab4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951544), bits); }
label_2ab4b0:
    // 0x2ab4b0: 0x9382bc5c  lbu         $v0, -0x43A4($gp)
    ctx->pc = 0x2ab4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949980)));
label_2ab4b4:
    // 0x2ab4b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab4b8:
    if (ctx->pc == 0x2AB4B8u) {
        ctx->pc = 0x2AB4BCu;
        goto label_2ab4bc;
    }
    ctx->pc = 0x2AB4B4u;
    {
        const bool branch_taken_0x2ab4b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab4b4) {
            ctx->pc = 0x2AB4D0u;
            goto label_2ab4d0;
        }
    }
    ctx->pc = 0x2AB4BCu;
label_2ab4bc:
    // 0x2ab4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab4c0:
    // 0x2ab4c0: 0x0  nop
    ctx->pc = 0x2ab4c0u;
    // NOP
label_2ab4c4:
    // 0x2ab4c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab4c8:
    // 0x2ab4c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab4cc:
    if (ctx->pc == 0x2AB4CCu) {
        ctx->pc = 0x2AB4D0u;
        goto label_2ab4d0;
    }
    ctx->pc = 0x2AB4C8u;
    {
        const bool branch_taken_0x2ab4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab4c8) {
            ctx->pc = 0x2AB4ECu;
            goto label_2ab4ec;
        }
    }
    ctx->pc = 0x2AB4D0u;
label_2ab4d0:
    // 0x2ab4d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab4d4:
    // 0x2ab4d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab4d8:
    // 0x2ab4d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab4dc:
    // 0x2ab4dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab4e0:
    // 0x2ab4e0: 0x0  nop
    ctx->pc = 0x2ab4e0u;
    // NOP
label_2ab4e4:
    // 0x2ab4e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab4e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab4e8:
    // 0x2ab4e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab4e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab4ec:
    // 0x2ab4ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab4f0:
    // 0x2ab4f0: 0xe440c27c  swc1        $f0, -0x3D84($v0)
    ctx->pc = 0x2ab4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951548), bits); }
label_2ab4f4:
    // 0x2ab4f4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab4f8:
    // 0x2ab4f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab4fc:
    // 0x2ab4fc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab500:
    // 0x2ab500: 0xe440c2b0  swc1        $f0, -0x3D50($v0)
    ctx->pc = 0x2ab500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951600), bits); }
label_2ab504:
    // 0x2ab504: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab508:
    // 0x2ab508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab50c:
    // 0x2ab50c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab510:
    // 0x2ab510: 0xe440c2b4  swc1        $f0, -0x3D4C($v0)
    ctx->pc = 0x2ab510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951604), bits); }
label_2ab514:
    // 0x2ab514: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ab514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2ab518:
    // 0x2ab518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab51c:
    // 0x2ab51c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab520:
    // 0x2ab520: 0xe440c2b8  swc1        $f0, -0x3D48($v0)
    ctx->pc = 0x2ab520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951608), bits); }
label_2ab524:
    // 0x2ab524: 0x9382bc5c  lbu         $v0, -0x43A4($gp)
    ctx->pc = 0x2ab524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949980)));
label_2ab528:
    // 0x2ab528: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab52c:
    if (ctx->pc == 0x2AB52Cu) {
        ctx->pc = 0x2AB530u;
        goto label_2ab530;
    }
    ctx->pc = 0x2AB528u;
    {
        const bool branch_taken_0x2ab528 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab528) {
            ctx->pc = 0x2AB544u;
            goto label_2ab544;
        }
    }
    ctx->pc = 0x2AB530u;
label_2ab530:
    // 0x2ab530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab534:
    // 0x2ab534: 0x0  nop
    ctx->pc = 0x2ab534u;
    // NOP
label_2ab538:
    // 0x2ab538: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab53c:
    // 0x2ab53c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab540:
    if (ctx->pc == 0x2AB540u) {
        ctx->pc = 0x2AB544u;
        goto label_2ab544;
    }
    ctx->pc = 0x2AB53Cu;
    {
        const bool branch_taken_0x2ab53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab53c) {
            ctx->pc = 0x2AB560u;
            goto label_2ab560;
        }
    }
    ctx->pc = 0x2AB544u;
label_2ab544:
    // 0x2ab544: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab548:
    // 0x2ab548: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab54c:
    // 0x2ab54c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab550:
    // 0x2ab550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab554:
    // 0x2ab554: 0x0  nop
    ctx->pc = 0x2ab554u;
    // NOP
label_2ab558:
    // 0x2ab558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab55c:
    // 0x2ab55c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab560:
    // 0x2ab560: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab564:
    // 0x2ab564: 0xe440c2bc  swc1        $f0, -0x3D44($v0)
    ctx->pc = 0x2ab564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951612), bits); }
label_2ab568:
    // 0x2ab568: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2ab568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2ab56c:
    // 0x2ab56c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ab56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ab570:
    // 0x2ab570: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab574:
    // 0x2ab574: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x2ab574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_2ab578:
    // 0x2ab578: 0x40f809  jalr        $v0
label_2ab57c:
    if (ctx->pc == 0x2AB57Cu) {
        ctx->pc = 0x2AB580u;
        goto label_2ab580;
    }
    ctx->pc = 0x2AB578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB580u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB578u, 0x2AB580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB580u;
label_2ab580:
    // 0x2ab580: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ab580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ab584:
    // 0x2ab584: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x2ab584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_2ab588:
    // 0x2ab588: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab58c:
    // 0x2ab58c: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x2ab58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_2ab590:
    // 0x2ab590: 0x40f809  jalr        $v0
label_2ab594:
    if (ctx->pc == 0x2AB594u) {
        ctx->pc = 0x2AB598u;
        goto label_2ab598;
    }
    ctx->pc = 0x2AB590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB598u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB590u, 0x2AB598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB598u;
label_2ab598:
    // 0x2ab598: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2ab598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ab59c:
    // 0x2ab59c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x2ab59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2ab5a0:
    // 0x2ab5a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab5a4:
    // 0x2ab5a4: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x2ab5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_2ab5a8:
    // 0x2ab5a8: 0x40f809  jalr        $v0
label_2ab5ac:
    if (ctx->pc == 0x2AB5ACu) {
        ctx->pc = 0x2AB5B0u;
        goto label_2ab5b0;
    }
    ctx->pc = 0x2AB5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB5B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB5A8u, 0x2AB5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB5B0u;
label_2ab5b0:
    // 0x2ab5b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ab5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ab5b4:
    // 0x2ab5b4: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x2ab5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2ab5b8:
    // 0x2ab5b8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab5bc:
    // 0x2ab5bc: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x2ab5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_2ab5c0:
    // 0x2ab5c0: 0x40f809  jalr        $v0
label_2ab5c4:
    if (ctx->pc == 0x2AB5C4u) {
        ctx->pc = 0x2AB5C8u;
        goto label_2ab5c8;
    }
    ctx->pc = 0x2AB5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB5C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB5C0u, 0x2AB5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB5C8u;
label_2ab5c8:
    // 0x2ab5c8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ab5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ab5cc:
    // 0x2ab5cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2ab5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ab5d0:
    // 0x2ab5d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab5d4:
    // 0x2ab5d4: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x2ab5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_2ab5d8:
    // 0x2ab5d8: 0x40f809  jalr        $v0
label_2ab5dc:
    if (ctx->pc == 0x2AB5DCu) {
        ctx->pc = 0x2AB5E0u;
        goto label_2ab5e0;
    }
    ctx->pc = 0x2AB5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB5E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB5D8u, 0x2AB5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB5E0u;
label_2ab5e0:
    // 0x2ab5e0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2ab5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ab5e4:
    // 0x2ab5e4: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x2ab5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2ab5e8:
    // 0x2ab5e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab5ec:
    // 0x2ab5ec: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x2ab5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_2ab5f0:
    // 0x2ab5f0: 0x40f809  jalr        $v0
label_2ab5f4:
    if (ctx->pc == 0x2AB5F4u) {
        ctx->pc = 0x2AB5F8u;
        goto label_2ab5f8;
    }
    ctx->pc = 0x2AB5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB5F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB5F0u, 0x2AB5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB5F8u;
label_2ab5f8:
    // 0x2ab5f8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ab5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2ab5fc:
    // 0x2ab5fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ab5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab600:
    // 0x2ab600: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab604:
    // 0x2ab604: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab608:
    // 0x2ab608: 0x40f809  jalr        $v0
label_2ab60c:
    if (ctx->pc == 0x2AB60Cu) {
        ctx->pc = 0x2AB610u;
        goto label_2ab610;
    }
    ctx->pc = 0x2AB608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB610u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB608u, 0x2AB610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB610u;
label_2ab610:
    // 0x2ab610: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2ab610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2ab614:
    // 0x2ab614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab618:
    // 0x2ab618: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab61c:
    // 0x2ab61c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab620:
    // 0x2ab620: 0x40f809  jalr        $v0
label_2ab624:
    if (ctx->pc == 0x2AB624u) {
        ctx->pc = 0x2AB628u;
        goto label_2ab628;
    }
    ctx->pc = 0x2AB620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB628u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB620u, 0x2AB628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB628u;
label_2ab628:
    // 0x2ab628: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ab628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ab62c:
    // 0x2ab62c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab630:
    // 0x2ab630: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab634:
    // 0x2ab634: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab638:
    // 0x2ab638: 0x40f809  jalr        $v0
label_2ab63c:
    if (ctx->pc == 0x2AB63Cu) {
        ctx->pc = 0x2AB640u;
        goto label_2ab640;
    }
    ctx->pc = 0x2AB638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB640u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB638u, 0x2AB640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB640u;
label_2ab640:
    // 0x2ab640: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2ab640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ab644:
    // 0x2ab644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab648:
    // 0x2ab648: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab64c:
    // 0x2ab64c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab650:
    // 0x2ab650: 0x40f809  jalr        $v0
label_2ab654:
    if (ctx->pc == 0x2AB654u) {
        ctx->pc = 0x2AB658u;
        goto label_2ab658;
    }
    ctx->pc = 0x2AB650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB658u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB650u, 0x2AB658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB658u;
label_2ab658:
    // 0x2ab658: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ab658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab65c:
    // 0x2ab65c: 0x8f85bc58  lw          $a1, -0x43A8($gp)
    ctx->pc = 0x2ab65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949976)));
label_2ab660:
    // 0x2ab660: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab664:
    // 0x2ab664: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab668:
    // 0x2ab668: 0x40f809  jalr        $v0
label_2ab66c:
    if (ctx->pc == 0x2AB66Cu) {
        ctx->pc = 0x2AB670u;
        goto label_2ab670;
    }
    ctx->pc = 0x2AB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB670u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB668u, 0x2AB670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB670u;
label_2ab670:
    // 0x2ab670: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ab670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ab674:
    // 0x2ab674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ab674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab678:
    // 0x2ab678: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab67c:
    // 0x2ab67c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab680:
    // 0x2ab680: 0x40f809  jalr        $v0
label_2ab684:
    if (ctx->pc == 0x2AB684u) {
        ctx->pc = 0x2AB688u;
        goto label_2ab688;
    }
    ctx->pc = 0x2AB680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB688u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB680u, 0x2AB688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB688u;
label_2ab688:
    // 0x2ab688: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ab688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ab68c:
    // 0x2ab68c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ab68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ab690:
    // 0x2ab690: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab694:
    // 0x2ab694: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab698:
    // 0x2ab698: 0x40f809  jalr        $v0
label_2ab69c:
    if (ctx->pc == 0x2AB69Cu) {
        ctx->pc = 0x2AB6A0u;
        goto label_2ab6a0;
    }
    ctx->pc = 0x2AB698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB6A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB698u, 0x2AB6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB6A0u;
label_2ab6a0:
    // 0x2ab6a0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2ab6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ab6a4:
    // 0x2ab6a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ab6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ab6a8:
    // 0x2ab6a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab6ac:
    // 0x2ab6ac: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab6b0:
    // 0x2ab6b0: 0x40f809  jalr        $v0
label_2ab6b4:
    if (ctx->pc == 0x2AB6B4u) {
        ctx->pc = 0x2AB6B8u;
        goto label_2ab6b8;
    }
    ctx->pc = 0x2AB6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB6B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB6B0u, 0x2AB6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB6B8u;
label_2ab6b8:
    // 0x2ab6b8: 0x8f82bc54  lw          $v0, -0x43AC($gp)
    ctx->pc = 0x2ab6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949972)));
label_2ab6bc:
    // 0x2ab6bc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2ab6c0:
    if (ctx->pc == 0x2AB6C0u) {
        ctx->pc = 0x2AB6C4u;
        goto label_2ab6c4;
    }
    ctx->pc = 0x2AB6BCu;
    {
        const bool branch_taken_0x2ab6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab6bc) {
            ctx->pc = 0x2AB724u;
            goto label_2ab724;
        }
    }
    ctx->pc = 0x2AB6C4u;
label_2ab6c4:
    // 0x2ab6c4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ab6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2ab6c8:
    // 0x2ab6c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ab6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ab6cc:
    // 0x2ab6cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab6d0:
    // 0x2ab6d0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab6d4:
    // 0x2ab6d4: 0x40f809  jalr        $v0
label_2ab6d8:
    if (ctx->pc == 0x2AB6D8u) {
        ctx->pc = 0x2AB6DCu;
        goto label_2ab6dc;
    }
    ctx->pc = 0x2AB6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB6DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB6D4u, 0x2AB6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB6DCu;
label_2ab6dc:
    // 0x2ab6dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ab6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab6e0:
    // 0x2ab6e0: 0x8f85bc54  lw          $a1, -0x43AC($gp)
    ctx->pc = 0x2ab6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949972)));
label_2ab6e4:
    // 0x2ab6e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab6e8:
    // 0x2ab6e8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab6ec:
    // 0x2ab6ec: 0x40f809  jalr        $v0
label_2ab6f0:
    if (ctx->pc == 0x2AB6F0u) {
        ctx->pc = 0x2AB6F4u;
        goto label_2ab6f4;
    }
    ctx->pc = 0x2AB6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB6F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB6ECu, 0x2AB6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB6F4u;
label_2ab6f4:
    // 0x2ab6f4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ab6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ab6f8:
    // 0x2ab6f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ab6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ab6fc:
    // 0x2ab6fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab700:
    // 0x2ab700: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab704:
    // 0x2ab704: 0x40f809  jalr        $v0
label_2ab708:
    if (ctx->pc == 0x2AB708u) {
        ctx->pc = 0x2AB70Cu;
        goto label_2ab70c;
    }
    ctx->pc = 0x2AB704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB70Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB704u, 0x2AB70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB70Cu;
label_2ab70c:
    // 0x2ab70c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2ab70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ab710:
    // 0x2ab710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ab710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab714:
    // 0x2ab714: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab718:
    // 0x2ab718: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab71c:
    // 0x2ab71c: 0x40f809  jalr        $v0
label_2ab720:
    if (ctx->pc == 0x2AB720u) {
        ctx->pc = 0x2AB724u;
        goto label_2ab724;
    }
    ctx->pc = 0x2AB71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB724u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB71Cu, 0x2AB724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB724u;
label_2ab724:
    // 0x2ab724: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ab724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ab728:
    // 0x2ab728: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2ab728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_2ab72c:
    // 0x2ab72c: 0x24a5c1d0  addiu       $a1, $a1, -0x3E30
    ctx->pc = 0x2ab72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951376));
label_2ab730:
    // 0x2ab730: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ab730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ab734:
    // 0x2ab734: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x2ab734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
label_2ab738:
    // 0x2ab738: 0x24e7dde0  addiu       $a3, $a3, -0x2220
    ctx->pc = 0x2ab738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958560));
label_2ab73c:
    // 0x2ab73c: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2ab73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ab740:
    // 0x2ab740: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab744:
    // 0x2ab744: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x2ab744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
label_2ab748:
    // 0x2ab748: 0x40f809  jalr        $v0
label_2ab74c:
    if (ctx->pc == 0x2AB74Cu) {
        ctx->pc = 0x2AB750u;
        goto label_2ab750;
    }
    ctx->pc = 0x2AB748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB750u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB748u, 0x2AB750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB750u;
label_2ab750:
    // 0x2ab750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab754:
    // 0x2ab754: 0x12000132  beqz        $s0, . + 4 + (0x132 << 2)
label_2ab758:
    if (ctx->pc == 0x2AB758u) {
        ctx->pc = 0x2AB75Cu;
        goto label_2ab75c;
    }
    ctx->pc = 0x2AB754u;
    {
        const bool branch_taken_0x2ab754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab754) {
            ctx->pc = 0x2ABC20u;
            goto label_2abc20;
        }
    }
    ctx->pc = 0x2AB75Cu;
label_2ab75c:
    // 0x2ab75c: 0x8f82bc54  lw          $v0, -0x43AC($gp)
    ctx->pc = 0x2ab75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949972)));
label_2ab760:
    // 0x2ab760: 0x1440012f  bnez        $v0, . + 4 + (0x12F << 2)
label_2ab764:
    if (ctx->pc == 0x2AB764u) {
        ctx->pc = 0x2AB768u;
        goto label_2ab768;
    }
    ctx->pc = 0x2AB760u;
    {
        const bool branch_taken_0x2ab760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab760) {
            ctx->pc = 0x2ABC20u;
            goto label_2abc20;
        }
    }
    ctx->pc = 0x2AB768u;
label_2ab768:
    // 0x2ab768: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ab768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ab76c:
    // 0x2ab76c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2ab76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ab770:
    // 0x2ab770: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab774:
    // 0x2ab774: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab778:
    // 0x2ab778: 0x40f809  jalr        $v0
label_2ab77c:
    if (ctx->pc == 0x2AB77Cu) {
        ctx->pc = 0x2AB780u;
        goto label_2ab780;
    }
    ctx->pc = 0x2AB778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB780u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB778u, 0x2AB780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB780u;
label_2ab780:
    // 0x2ab780: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2ab780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ab784:
    // 0x2ab784: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ab784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ab788:
    // 0x2ab788: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab78c:
    // 0x2ab78c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab790:
    // 0x2ab790: 0x40f809  jalr        $v0
label_2ab794:
    if (ctx->pc == 0x2AB794u) {
        ctx->pc = 0x2AB798u;
        goto label_2ab798;
    }
    ctx->pc = 0x2AB790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB790u, 0x2AB798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB798u;
label_2ab798:
    // 0x2ab798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ab798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab79c:
    // 0x2ab79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7a0:
    // 0x2ab7a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ab7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2ab7a4:
    // 0x2ab7a4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2ab7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2ab7a8:
    // 0x2ab7a8: 0x40f809  jalr        $v0
label_2ab7ac:
    if (ctx->pc == 0x2AB7ACu) {
        ctx->pc = 0x2AB7B0u;
        goto label_2ab7b0;
    }
    ctx->pc = 0x2AB7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB7B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB7A8u, 0x2AB7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB7B0u;
label_2ab7b0:
    // 0x2ab7b0: 0x9382a474  lbu         $v0, -0x5B8C($gp)
    ctx->pc = 0x2ab7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943860)));
label_2ab7b4:
    // 0x2ab7b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab7b8:
    if (ctx->pc == 0x2AB7B8u) {
        ctx->pc = 0x2AB7BCu;
        goto label_2ab7bc;
    }
    ctx->pc = 0x2AB7B4u;
    {
        const bool branch_taken_0x2ab7b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab7b4) {
            ctx->pc = 0x2AB7D0u;
            goto label_2ab7d0;
        }
    }
    ctx->pc = 0x2AB7BCu;
label_2ab7bc:
    // 0x2ab7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab7c0:
    // 0x2ab7c0: 0x0  nop
    ctx->pc = 0x2ab7c0u;
    // NOP
label_2ab7c4:
    // 0x2ab7c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab7c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab7c8:
    // 0x2ab7c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab7cc:
    if (ctx->pc == 0x2AB7CCu) {
        ctx->pc = 0x2AB7D0u;
        goto label_2ab7d0;
    }
    ctx->pc = 0x2AB7C8u;
    {
        const bool branch_taken_0x2ab7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab7c8) {
            ctx->pc = 0x2AB7ECu;
            goto label_2ab7ec;
        }
    }
    ctx->pc = 0x2AB7D0u;
label_2ab7d0:
    // 0x2ab7d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab7d4:
    // 0x2ab7d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab7d8:
    // 0x2ab7d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab7dc:
    // 0x2ab7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab7e0:
    // 0x2ab7e0: 0x0  nop
    ctx->pc = 0x2ab7e0u;
    // NOP
label_2ab7e4:
    // 0x2ab7e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab7e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab7e8:
    // 0x2ab7e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab7e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab7ec:
    // 0x2ab7ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab7f0:
    // 0x2ab7f0: 0xe440c1f0  swc1        $f0, -0x3E10($v0)
    ctx->pc = 0x2ab7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951408), bits); }
label_2ab7f4:
    // 0x2ab7f4: 0x9382a475  lbu         $v0, -0x5B8B($gp)
    ctx->pc = 0x2ab7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943861)));
label_2ab7f8:
    // 0x2ab7f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab7fc:
    if (ctx->pc == 0x2AB7FCu) {
        ctx->pc = 0x2AB800u;
        goto label_2ab800;
    }
    ctx->pc = 0x2AB7F8u;
    {
        const bool branch_taken_0x2ab7f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab7f8) {
            ctx->pc = 0x2AB814u;
            goto label_2ab814;
        }
    }
    ctx->pc = 0x2AB800u;
label_2ab800:
    // 0x2ab800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab804:
    // 0x2ab804: 0x0  nop
    ctx->pc = 0x2ab804u;
    // NOP
label_2ab808:
    // 0x2ab808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab80c:
    // 0x2ab80c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab810:
    if (ctx->pc == 0x2AB810u) {
        ctx->pc = 0x2AB814u;
        goto label_2ab814;
    }
    ctx->pc = 0x2AB80Cu;
    {
        const bool branch_taken_0x2ab80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab80c) {
            ctx->pc = 0x2AB830u;
            goto label_2ab830;
        }
    }
    ctx->pc = 0x2AB814u;
label_2ab814:
    // 0x2ab814: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab814u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab818:
    // 0x2ab818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab81c:
    // 0x2ab81c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab820:
    // 0x2ab820: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab824:
    // 0x2ab824: 0x0  nop
    ctx->pc = 0x2ab824u;
    // NOP
label_2ab828:
    // 0x2ab828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab82c:
    // 0x2ab82c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab830:
    // 0x2ab830: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab834:
    // 0x2ab834: 0xe440c1f4  swc1        $f0, -0x3E0C($v0)
    ctx->pc = 0x2ab834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951412), bits); }
label_2ab838:
    // 0x2ab838: 0x9382a476  lbu         $v0, -0x5B8A($gp)
    ctx->pc = 0x2ab838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943862)));
label_2ab83c:
    // 0x2ab83c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab840:
    if (ctx->pc == 0x2AB840u) {
        ctx->pc = 0x2AB844u;
        goto label_2ab844;
    }
    ctx->pc = 0x2AB83Cu;
    {
        const bool branch_taken_0x2ab83c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab83c) {
            ctx->pc = 0x2AB858u;
            goto label_2ab858;
        }
    }
    ctx->pc = 0x2AB844u;
label_2ab844:
    // 0x2ab844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab848:
    // 0x2ab848: 0x0  nop
    ctx->pc = 0x2ab848u;
    // NOP
label_2ab84c:
    // 0x2ab84c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab850:
    // 0x2ab850: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab854:
    if (ctx->pc == 0x2AB854u) {
        ctx->pc = 0x2AB858u;
        goto label_2ab858;
    }
    ctx->pc = 0x2AB850u;
    {
        const bool branch_taken_0x2ab850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab850) {
            ctx->pc = 0x2AB874u;
            goto label_2ab874;
        }
    }
    ctx->pc = 0x2AB858u;
label_2ab858:
    // 0x2ab858: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab85c:
    // 0x2ab85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab860:
    // 0x2ab860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab864:
    // 0x2ab864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab868:
    // 0x2ab868: 0x0  nop
    ctx->pc = 0x2ab868u;
    // NOP
label_2ab86c:
    // 0x2ab86c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab870:
    // 0x2ab870: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab874:
    // 0x2ab874: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab878:
    // 0x2ab878: 0xe440c1f8  swc1        $f0, -0x3E08($v0)
    ctx->pc = 0x2ab878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951416), bits); }
label_2ab87c:
    // 0x2ab87c: 0x9382a477  lbu         $v0, -0x5B89($gp)
    ctx->pc = 0x2ab87cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943863)));
label_2ab880:
    // 0x2ab880: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab884:
    if (ctx->pc == 0x2AB884u) {
        ctx->pc = 0x2AB888u;
        goto label_2ab888;
    }
    ctx->pc = 0x2AB880u;
    {
        const bool branch_taken_0x2ab880 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab880) {
            ctx->pc = 0x2AB89Cu;
            goto label_2ab89c;
        }
    }
    ctx->pc = 0x2AB888u;
label_2ab888:
    // 0x2ab888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab88c:
    // 0x2ab88c: 0x0  nop
    ctx->pc = 0x2ab88cu;
    // NOP
label_2ab890:
    // 0x2ab890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab894:
    // 0x2ab894: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab898:
    if (ctx->pc == 0x2AB898u) {
        ctx->pc = 0x2AB89Cu;
        goto label_2ab89c;
    }
    ctx->pc = 0x2AB894u;
    {
        const bool branch_taken_0x2ab894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab894) {
            ctx->pc = 0x2AB8B8u;
            goto label_2ab8b8;
        }
    }
    ctx->pc = 0x2AB89Cu;
label_2ab89c:
    // 0x2ab89c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab8a0:
    // 0x2ab8a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab8a4:
    // 0x2ab8a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab8a8:
    // 0x2ab8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab8ac:
    // 0x2ab8ac: 0x0  nop
    ctx->pc = 0x2ab8acu;
    // NOP
label_2ab8b0:
    // 0x2ab8b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab8b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab8b4:
    // 0x2ab8b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab8b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab8b8:
    // 0x2ab8b8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab8bc:
    // 0x2ab8bc: 0xe440c1fc  swc1        $f0, -0x3E04($v0)
    ctx->pc = 0x2ab8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951420), bits); }
label_2ab8c0:
    // 0x2ab8c0: 0x9382a474  lbu         $v0, -0x5B8C($gp)
    ctx->pc = 0x2ab8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943860)));
label_2ab8c4:
    // 0x2ab8c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab8c8:
    if (ctx->pc == 0x2AB8C8u) {
        ctx->pc = 0x2AB8CCu;
        goto label_2ab8cc;
    }
    ctx->pc = 0x2AB8C4u;
    {
        const bool branch_taken_0x2ab8c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab8c4) {
            ctx->pc = 0x2AB8E0u;
            goto label_2ab8e0;
        }
    }
    ctx->pc = 0x2AB8CCu;
label_2ab8cc:
    // 0x2ab8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab8d0:
    // 0x2ab8d0: 0x0  nop
    ctx->pc = 0x2ab8d0u;
    // NOP
label_2ab8d4:
    // 0x2ab8d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab8d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab8d8:
    // 0x2ab8d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab8dc:
    if (ctx->pc == 0x2AB8DCu) {
        ctx->pc = 0x2AB8E0u;
        goto label_2ab8e0;
    }
    ctx->pc = 0x2AB8D8u;
    {
        const bool branch_taken_0x2ab8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab8d8) {
            ctx->pc = 0x2AB8FCu;
            goto label_2ab8fc;
        }
    }
    ctx->pc = 0x2AB8E0u;
label_2ab8e0:
    // 0x2ab8e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab8e4:
    // 0x2ab8e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab8e8:
    // 0x2ab8e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab8ec:
    // 0x2ab8ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab8ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab8f0:
    // 0x2ab8f0: 0x0  nop
    ctx->pc = 0x2ab8f0u;
    // NOP
label_2ab8f4:
    // 0x2ab8f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab8f8:
    // 0x2ab8f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab8fc:
    // 0x2ab8fc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab900:
    // 0x2ab900: 0xe440c230  swc1        $f0, -0x3DD0($v0)
    ctx->pc = 0x2ab900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951472), bits); }
label_2ab904:
    // 0x2ab904: 0x9382a475  lbu         $v0, -0x5B8B($gp)
    ctx->pc = 0x2ab904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943861)));
label_2ab908:
    // 0x2ab908: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab90c:
    if (ctx->pc == 0x2AB90Cu) {
        ctx->pc = 0x2AB910u;
        goto label_2ab910;
    }
    ctx->pc = 0x2AB908u;
    {
        const bool branch_taken_0x2ab908 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab908) {
            ctx->pc = 0x2AB924u;
            goto label_2ab924;
        }
    }
    ctx->pc = 0x2AB910u;
label_2ab910:
    // 0x2ab910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab914:
    // 0x2ab914: 0x0  nop
    ctx->pc = 0x2ab914u;
    // NOP
label_2ab918:
    // 0x2ab918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab91c:
    // 0x2ab91c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab920:
    if (ctx->pc == 0x2AB920u) {
        ctx->pc = 0x2AB924u;
        goto label_2ab924;
    }
    ctx->pc = 0x2AB91Cu;
    {
        const bool branch_taken_0x2ab91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab91c) {
            ctx->pc = 0x2AB940u;
            goto label_2ab940;
        }
    }
    ctx->pc = 0x2AB924u;
label_2ab924:
    // 0x2ab924: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab924u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab928:
    // 0x2ab928: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab92c:
    // 0x2ab92c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab930:
    // 0x2ab930: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab934:
    // 0x2ab934: 0x0  nop
    ctx->pc = 0x2ab934u;
    // NOP
label_2ab938:
    // 0x2ab938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab93c:
    // 0x2ab93c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab93cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab940:
    // 0x2ab940: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab944:
    // 0x2ab944: 0xe440c234  swc1        $f0, -0x3DCC($v0)
    ctx->pc = 0x2ab944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951476), bits); }
label_2ab948:
    // 0x2ab948: 0x9382a476  lbu         $v0, -0x5B8A($gp)
    ctx->pc = 0x2ab948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943862)));
label_2ab94c:
    // 0x2ab94c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab950:
    if (ctx->pc == 0x2AB950u) {
        ctx->pc = 0x2AB954u;
        goto label_2ab954;
    }
    ctx->pc = 0x2AB94Cu;
    {
        const bool branch_taken_0x2ab94c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab94c) {
            ctx->pc = 0x2AB968u;
            goto label_2ab968;
        }
    }
    ctx->pc = 0x2AB954u;
label_2ab954:
    // 0x2ab954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab958:
    // 0x2ab958: 0x0  nop
    ctx->pc = 0x2ab958u;
    // NOP
label_2ab95c:
    // 0x2ab95c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab95cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab960:
    // 0x2ab960: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab964:
    if (ctx->pc == 0x2AB964u) {
        ctx->pc = 0x2AB968u;
        goto label_2ab968;
    }
    ctx->pc = 0x2AB960u;
    {
        const bool branch_taken_0x2ab960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab960) {
            ctx->pc = 0x2AB984u;
            goto label_2ab984;
        }
    }
    ctx->pc = 0x2AB968u;
label_2ab968:
    // 0x2ab968: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab968u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab96c:
    // 0x2ab96c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab970:
    // 0x2ab970: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab974:
    // 0x2ab974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab978:
    // 0x2ab978: 0x0  nop
    ctx->pc = 0x2ab978u;
    // NOP
label_2ab97c:
    // 0x2ab97c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab980:
    // 0x2ab980: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab984:
    // 0x2ab984: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab988:
    // 0x2ab988: 0xe440c238  swc1        $f0, -0x3DC8($v0)
    ctx->pc = 0x2ab988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951480), bits); }
label_2ab98c:
    // 0x2ab98c: 0x9382a477  lbu         $v0, -0x5B89($gp)
    ctx->pc = 0x2ab98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943863)));
label_2ab990:
    // 0x2ab990: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab994:
    if (ctx->pc == 0x2AB994u) {
        ctx->pc = 0x2AB998u;
        goto label_2ab998;
    }
    ctx->pc = 0x2AB990u;
    {
        const bool branch_taken_0x2ab990 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab990) {
            ctx->pc = 0x2AB9ACu;
            goto label_2ab9ac;
        }
    }
    ctx->pc = 0x2AB998u;
label_2ab998:
    // 0x2ab998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab99c:
    // 0x2ab99c: 0x0  nop
    ctx->pc = 0x2ab99cu;
    // NOP
label_2ab9a0:
    // 0x2ab9a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab9a4:
    // 0x2ab9a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab9a8:
    if (ctx->pc == 0x2AB9A8u) {
        ctx->pc = 0x2AB9ACu;
        goto label_2ab9ac;
    }
    ctx->pc = 0x2AB9A4u;
    {
        const bool branch_taken_0x2ab9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab9a4) {
            ctx->pc = 0x2AB9C8u;
            goto label_2ab9c8;
        }
    }
    ctx->pc = 0x2AB9ACu;
label_2ab9ac:
    // 0x2ab9ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab9b0:
    // 0x2ab9b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab9b4:
    // 0x2ab9b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab9b8:
    // 0x2ab9b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab9b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab9bc:
    // 0x2ab9bc: 0x0  nop
    ctx->pc = 0x2ab9bcu;
    // NOP
label_2ab9c0:
    // 0x2ab9c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab9c4:
    // 0x2ab9c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ab9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ab9c8:
    // 0x2ab9c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ab9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2ab9cc:
    // 0x2ab9cc: 0xe440c23c  swc1        $f0, -0x3DC4($v0)
    ctx->pc = 0x2ab9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951484), bits); }
label_2ab9d0:
    // 0x2ab9d0: 0x9382a474  lbu         $v0, -0x5B8C($gp)
    ctx->pc = 0x2ab9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943860)));
label_2ab9d4:
    // 0x2ab9d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ab9d8:
    if (ctx->pc == 0x2AB9D8u) {
        ctx->pc = 0x2AB9DCu;
        goto label_2ab9dc;
    }
    ctx->pc = 0x2AB9D4u;
    {
        const bool branch_taken_0x2ab9d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab9d4) {
            ctx->pc = 0x2AB9F0u;
            goto label_2ab9f0;
        }
    }
    ctx->pc = 0x2AB9DCu;
label_2ab9dc:
    // 0x2ab9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab9e0:
    // 0x2ab9e0: 0x0  nop
    ctx->pc = 0x2ab9e0u;
    // NOP
label_2ab9e4:
    // 0x2ab9e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ab9e8:
    // 0x2ab9e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ab9ec:
    if (ctx->pc == 0x2AB9ECu) {
        ctx->pc = 0x2AB9F0u;
        goto label_2ab9f0;
    }
    ctx->pc = 0x2AB9E8u;
    {
        const bool branch_taken_0x2ab9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab9e8) {
            ctx->pc = 0x2ABA0Cu;
            goto label_2aba0c;
        }
    }
    ctx->pc = 0x2AB9F0u;
label_2ab9f0:
    // 0x2ab9f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ab9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ab9f4:
    // 0x2ab9f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ab9f8:
    // 0x2ab9f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ab9fc:
    // 0x2ab9fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab9fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aba00:
    // 0x2aba00: 0x0  nop
    ctx->pc = 0x2aba00u;
    // NOP
label_2aba04:
    // 0x2aba04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aba04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2aba08:
    // 0x2aba08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aba08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aba0c:
    // 0x2aba0c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2aba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2aba10:
    // 0x2aba10: 0xe440c270  swc1        $f0, -0x3D90($v0)
    ctx->pc = 0x2aba10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951536), bits); }
label_2aba14:
    // 0x2aba14: 0x9382a475  lbu         $v0, -0x5B8B($gp)
    ctx->pc = 0x2aba14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943861)));
label_2aba18:
    // 0x2aba18: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2aba1c:
    if (ctx->pc == 0x2ABA1Cu) {
        ctx->pc = 0x2ABA20u;
        goto label_2aba20;
    }
    ctx->pc = 0x2ABA18u;
    {
        const bool branch_taken_0x2aba18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2aba18) {
            ctx->pc = 0x2ABA34u;
            goto label_2aba34;
        }
    }
    ctx->pc = 0x2ABA20u;
label_2aba20:
    // 0x2aba20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aba20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aba24:
    // 0x2aba24: 0x0  nop
    ctx->pc = 0x2aba24u;
    // NOP
label_2aba28:
    // 0x2aba28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aba28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2aba2c:
    // 0x2aba2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2aba30:
    if (ctx->pc == 0x2ABA30u) {
        ctx->pc = 0x2ABA34u;
        goto label_2aba34;
    }
    ctx->pc = 0x2ABA2Cu;
    {
        const bool branch_taken_0x2aba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba2c) {
            ctx->pc = 0x2ABA50u;
            goto label_2aba50;
        }
    }
    ctx->pc = 0x2ABA34u;
label_2aba34:
    // 0x2aba34: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2aba34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2aba38:
    // 0x2aba38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2aba3c:
    // 0x2aba3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2aba3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2aba40:
    // 0x2aba40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aba40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aba44:
    // 0x2aba44: 0x0  nop
    ctx->pc = 0x2aba44u;
    // NOP
label_2aba48:
    // 0x2aba48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aba48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2aba4c:
    // 0x2aba4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aba4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aba50:
    // 0x2aba50: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2aba50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2aba54:
    // 0x2aba54: 0xe440c274  swc1        $f0, -0x3D8C($v0)
    ctx->pc = 0x2aba54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951540), bits); }
label_2aba58:
    // 0x2aba58: 0x9382a476  lbu         $v0, -0x5B8A($gp)
    ctx->pc = 0x2aba58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943862)));
label_2aba5c:
    // 0x2aba5c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2aba60:
    if (ctx->pc == 0x2ABA60u) {
        ctx->pc = 0x2ABA64u;
        goto label_2aba64;
    }
    ctx->pc = 0x2ABA5Cu;
    {
        const bool branch_taken_0x2aba5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2aba5c) {
            ctx->pc = 0x2ABA78u;
            goto label_2aba78;
        }
    }
    ctx->pc = 0x2ABA64u;
label_2aba64:
    // 0x2aba64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aba64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aba68:
    // 0x2aba68: 0x0  nop
    ctx->pc = 0x2aba68u;
    // NOP
label_2aba6c:
    // 0x2aba6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aba6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2aba70:
    // 0x2aba70: 0x10000008  b           . + 4 + (0x8 << 2)
label_2aba74:
    if (ctx->pc == 0x2ABA74u) {
        ctx->pc = 0x2ABA78u;
        goto label_2aba78;
    }
    ctx->pc = 0x2ABA70u;
    {
        const bool branch_taken_0x2aba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba70) {
            ctx->pc = 0x2ABA94u;
            goto label_2aba94;
        }
    }
    ctx->pc = 0x2ABA78u;
label_2aba78:
    // 0x2aba78: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2aba78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2aba7c:
    // 0x2aba7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2aba80:
    // 0x2aba80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2aba80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2aba84:
    // 0x2aba84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aba84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aba88:
    // 0x2aba88: 0x0  nop
    ctx->pc = 0x2aba88u;
    // NOP
label_2aba8c:
    // 0x2aba8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aba8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2aba90:
    // 0x2aba90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aba90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aba94:
    // 0x2aba94: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2aba94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2aba98:
    // 0x2aba98: 0xe440c278  swc1        $f0, -0x3D88($v0)
    ctx->pc = 0x2aba98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951544), bits); }
label_2aba9c:
    // 0x2aba9c: 0x9382a477  lbu         $v0, -0x5B89($gp)
    ctx->pc = 0x2aba9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943863)));
label_2abaa0:
    // 0x2abaa0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2abaa4:
    if (ctx->pc == 0x2ABAA4u) {
        ctx->pc = 0x2ABAA8u;
        goto label_2abaa8;
    }
    ctx->pc = 0x2ABAA0u;
    {
        const bool branch_taken_0x2abaa0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2abaa0) {
            ctx->pc = 0x2ABABCu;
            goto label_2ababc;
        }
    }
    ctx->pc = 0x2ABAA8u;
label_2abaa8:
    // 0x2abaa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abaac:
    // 0x2abaac: 0x0  nop
    ctx->pc = 0x2abaacu;
    // NOP
label_2abab0:
    // 0x2abab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abab4:
    // 0x2abab4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2abab8:
    if (ctx->pc == 0x2ABAB8u) {
        ctx->pc = 0x2ABABCu;
        goto label_2ababc;
    }
    ctx->pc = 0x2ABAB4u;
    {
        const bool branch_taken_0x2abab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abab4) {
            ctx->pc = 0x2ABAD8u;
            goto label_2abad8;
        }
    }
    ctx->pc = 0x2ABABCu;
label_2ababc:
    // 0x2ababc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ababcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2abac0:
    // 0x2abac0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2abac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2abac4:
    // 0x2abac4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2abac8:
    // 0x2abac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abacc:
    // 0x2abacc: 0x0  nop
    ctx->pc = 0x2abaccu;
    // NOP
label_2abad0:
    // 0x2abad0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abad4:
    // 0x2abad4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abad8:
    // 0x2abad8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2abadc:
    // 0x2abadc: 0xe440c27c  swc1        $f0, -0x3D84($v0)
    ctx->pc = 0x2abadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951548), bits); }
label_2abae0:
    // 0x2abae0: 0x9382a474  lbu         $v0, -0x5B8C($gp)
    ctx->pc = 0x2abae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943860)));
label_2abae4:
    // 0x2abae4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2abae8:
    if (ctx->pc == 0x2ABAE8u) {
        ctx->pc = 0x2ABAECu;
        goto label_2abaec;
    }
    ctx->pc = 0x2ABAE4u;
    {
        const bool branch_taken_0x2abae4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2abae4) {
            ctx->pc = 0x2ABB00u;
            goto label_2abb00;
        }
    }
    ctx->pc = 0x2ABAECu;
label_2abaec:
    // 0x2abaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abaf0:
    // 0x2abaf0: 0x0  nop
    ctx->pc = 0x2abaf0u;
    // NOP
label_2abaf4:
    // 0x2abaf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abaf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abaf8:
    // 0x2abaf8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2abafc:
    if (ctx->pc == 0x2ABAFCu) {
        ctx->pc = 0x2ABB00u;
        goto label_2abb00;
    }
    ctx->pc = 0x2ABAF8u;
    {
        const bool branch_taken_0x2abaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abaf8) {
            ctx->pc = 0x2ABB1Cu;
            goto label_2abb1c;
        }
    }
    ctx->pc = 0x2ABB00u;
label_2abb00:
    // 0x2abb00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2abb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2abb04:
    // 0x2abb04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2abb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2abb08:
    // 0x2abb08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2abb0c:
    // 0x2abb0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abb0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abb10:
    // 0x2abb10: 0x0  nop
    ctx->pc = 0x2abb10u;
    // NOP
label_2abb14:
    // 0x2abb14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abb14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abb18:
    // 0x2abb18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abb1c:
    // 0x2abb1c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2abb20:
    // 0x2abb20: 0xe440c2b0  swc1        $f0, -0x3D50($v0)
    ctx->pc = 0x2abb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951600), bits); }
label_2abb24:
    // 0x2abb24: 0x9382a475  lbu         $v0, -0x5B8B($gp)
    ctx->pc = 0x2abb24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943861)));
label_2abb28:
    // 0x2abb28: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2abb2c:
    if (ctx->pc == 0x2ABB2Cu) {
        ctx->pc = 0x2ABB30u;
        goto label_2abb30;
    }
    ctx->pc = 0x2ABB28u;
    {
        const bool branch_taken_0x2abb28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2abb28) {
            ctx->pc = 0x2ABB44u;
            goto label_2abb44;
        }
    }
    ctx->pc = 0x2ABB30u;
label_2abb30:
    // 0x2abb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abb34:
    // 0x2abb34: 0x0  nop
    ctx->pc = 0x2abb34u;
    // NOP
label_2abb38:
    // 0x2abb38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abb3c:
    // 0x2abb3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2abb40:
    if (ctx->pc == 0x2ABB40u) {
        ctx->pc = 0x2ABB44u;
        goto label_2abb44;
    }
    ctx->pc = 0x2ABB3Cu;
    {
        const bool branch_taken_0x2abb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb3c) {
            ctx->pc = 0x2ABB60u;
            goto label_2abb60;
        }
    }
    ctx->pc = 0x2ABB44u;
label_2abb44:
    // 0x2abb44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2abb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2abb48:
    // 0x2abb48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2abb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2abb4c:
    // 0x2abb4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2abb50:
    // 0x2abb50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abb54:
    // 0x2abb54: 0x0  nop
    ctx->pc = 0x2abb54u;
    // NOP
label_2abb58:
    // 0x2abb58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abb5c:
    // 0x2abb5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abb60:
    // 0x2abb60: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2abb64:
    // 0x2abb64: 0xe440c2b4  swc1        $f0, -0x3D4C($v0)
    ctx->pc = 0x2abb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951604), bits); }
label_2abb68:
    // 0x2abb68: 0x9382a476  lbu         $v0, -0x5B8A($gp)
    ctx->pc = 0x2abb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943862)));
label_2abb6c:
    // 0x2abb6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2abb70:
    if (ctx->pc == 0x2ABB70u) {
        ctx->pc = 0x2ABB74u;
        goto label_2abb74;
    }
    ctx->pc = 0x2ABB6Cu;
    {
        const bool branch_taken_0x2abb6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2abb6c) {
            ctx->pc = 0x2ABB88u;
            goto label_2abb88;
        }
    }
    ctx->pc = 0x2ABB74u;
label_2abb74:
    // 0x2abb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abb78:
    // 0x2abb78: 0x0  nop
    ctx->pc = 0x2abb78u;
    // NOP
label_2abb7c:
    // 0x2abb7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abb7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abb80:
    // 0x2abb80: 0x10000008  b           . + 4 + (0x8 << 2)
label_2abb84:
    if (ctx->pc == 0x2ABB84u) {
        ctx->pc = 0x2ABB88u;
        goto label_2abb88;
    }
    ctx->pc = 0x2ABB80u;
    {
        const bool branch_taken_0x2abb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb80) {
            ctx->pc = 0x2ABBA4u;
            goto label_2abba4;
        }
    }
    ctx->pc = 0x2ABB88u;
label_2abb88:
    // 0x2abb88: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2abb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2abb8c:
    // 0x2abb8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2abb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2abb90:
    // 0x2abb90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2abb94:
    // 0x2abb94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abb94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abb98:
    // 0x2abb98: 0x0  nop
    ctx->pc = 0x2abb98u;
    // NOP
label_2abb9c:
    // 0x2abb9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abb9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abba0:
    // 0x2abba0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abba4:
    // 0x2abba4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2abba8:
    // 0x2abba8: 0xe440c2b8  swc1        $f0, -0x3D48($v0)
    ctx->pc = 0x2abba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951608), bits); }
label_2abbac:
    // 0x2abbac: 0x9382a477  lbu         $v0, -0x5B89($gp)
    ctx->pc = 0x2abbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943863)));
label_2abbb0:
    // 0x2abbb0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2abbb4:
    if (ctx->pc == 0x2ABBB4u) {
        ctx->pc = 0x2ABBB8u;
        goto label_2abbb8;
    }
    ctx->pc = 0x2ABBB0u;
    {
        const bool branch_taken_0x2abbb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2abbb0) {
            ctx->pc = 0x2ABBCCu;
            goto label_2abbcc;
        }
    }
    ctx->pc = 0x2ABBB8u;
label_2abbb8:
    // 0x2abbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abbbc:
    // 0x2abbbc: 0x0  nop
    ctx->pc = 0x2abbbcu;
    // NOP
label_2abbc0:
    // 0x2abbc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abbc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abbc4:
    // 0x2abbc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2abbc8:
    if (ctx->pc == 0x2ABBC8u) {
        ctx->pc = 0x2ABBCCu;
        goto label_2abbcc;
    }
    ctx->pc = 0x2ABBC4u;
    {
        const bool branch_taken_0x2abbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abbc4) {
            ctx->pc = 0x2ABBE8u;
            goto label_2abbe8;
        }
    }
    ctx->pc = 0x2ABBCCu;
label_2abbcc:
    // 0x2abbcc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2abbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2abbd0:
    // 0x2abbd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2abbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2abbd4:
    // 0x2abbd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2abbd8:
    // 0x2abbd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abbd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abbdc:
    // 0x2abbdc: 0x0  nop
    ctx->pc = 0x2abbdcu;
    // NOP
label_2abbe0:
    // 0x2abbe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abbe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2abbe4:
    // 0x2abbe4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abbe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abbe8:
    // 0x2abbe8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2abbec:
    // 0x2abbec: 0xe440c2bc  swc1        $f0, -0x3D44($v0)
    ctx->pc = 0x2abbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951612), bits); }
label_2abbf0:
    // 0x2abbf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2abbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2abbf4:
    // 0x2abbf4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2abbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_2abbf8:
    // 0x2abbf8: 0x24a5c1d0  addiu       $a1, $a1, -0x3E30
    ctx->pc = 0x2abbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951376));
label_2abbfc:
    // 0x2abbfc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2abbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2abc00:
    // 0x2abc00: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x2abc00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
label_2abc04:
    // 0x2abc04: 0x24e7dde0  addiu       $a3, $a3, -0x2220
    ctx->pc = 0x2abc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958560));
label_2abc08:
    // 0x2abc08: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2abc08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2abc0c:
    // 0x2abc0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2abc10:
    // 0x2abc10: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x2abc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
label_2abc14:
    // 0x2abc14: 0x40f809  jalr        $v0
label_2abc18:
    if (ctx->pc == 0x2ABC18u) {
        ctx->pc = 0x2ABC1Cu;
        goto label_2abc1c;
    }
    ctx->pc = 0x2ABC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABC1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC14u, 0x2ABC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABC1Cu;
label_2abc1c:
    // 0x2abc1c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2abc1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_2abc20:
    // 0x2abc20: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2abc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2abc24:
    // 0x2abc24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2abc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2abc28:
    // 0x2abc28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2abc2c:
    // 0x2abc2c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2abc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2abc30:
    // 0x2abc30: 0x40f809  jalr        $v0
label_2abc34:
    if (ctx->pc == 0x2ABC34u) {
        ctx->pc = 0x2ABC38u;
        goto label_2abc38;
    }
    ctx->pc = 0x2ABC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABC38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC30u, 0x2ABC38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABC38u;
label_2abc38:
    // 0x2abc38: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2abc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2abc3c:
    // 0x2abc3c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2abc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2abc40:
    // 0x2abc40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2abc44:
    // 0x2abc44: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2abc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2abc48:
    // 0x2abc48: 0x40f809  jalr        $v0
label_2abc4c:
    if (ctx->pc == 0x2ABC4Cu) {
        ctx->pc = 0x2ABC50u;
        goto label_2abc50;
    }
    ctx->pc = 0x2ABC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABC50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC48u, 0x2ABC50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABC50u;
label_2abc50:
    // 0x2abc50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2abc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2abc54:
    // 0x2abc54: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2abc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2abc58:
    // 0x2abc58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2abc5c:
    // 0x2abc5c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2abc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2abc60:
    // 0x2abc60: 0x40f809  jalr        $v0
label_2abc64:
    if (ctx->pc == 0x2ABC64u) {
        ctx->pc = 0x2ABC68u;
        goto label_2abc68;
    }
    ctx->pc = 0x2ABC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABC68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC60u, 0x2ABC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABC68u;
label_2abc68:
    // 0x2abc68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2abc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abc6c:
    // 0x2abc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2abc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abc70:
    // 0x2abc70: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2abc74:
    // 0x2abc74: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2abc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2abc78:
    // 0x2abc78: 0x40f809  jalr        $v0
label_2abc7c:
    if (ctx->pc == 0x2ABC7Cu) {
        ctx->pc = 0x2ABC80u;
        goto label_2abc80;
    }
    ctx->pc = 0x2ABC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABC80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC78u, 0x2ABC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABC80u;
label_2abc80:
    // 0x2abc80: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2abc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2abc84:
    // 0x2abc84: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2abc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2abc88:
    // 0x2abc88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2abc8c:
    // 0x2abc8c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2abc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2abc90:
    // 0x2abc90: 0x40f809  jalr        $v0
label_2abc94:
    if (ctx->pc == 0x2ABC94u) {
        ctx->pc = 0x2ABC98u;
        goto label_2abc98;
    }
    ctx->pc = 0x2ABC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABC98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC90u, 0x2ABC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABC98u;
label_2abc98:
    // 0x2abc98: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2abc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2abc9c:
    // 0x2abc9c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2abc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2abca0:
    // 0x2abca0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2abca4:
    // 0x2abca4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2abca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2abca8:
    // 0x2abca8: 0x40f809  jalr        $v0
label_2abcac:
    if (ctx->pc == 0x2ABCACu) {
        ctx->pc = 0x2ABCB0u;
        goto label_2abcb0;
    }
    ctx->pc = 0x2ABCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABCB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABCA8u, 0x2ABCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABCB0u;
label_2abcb0:
    // 0x2abcb0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2abcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2abcb4:
    // 0x2abcb4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2abcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2abcb8:
    // 0x2abcb8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2abcbc:
    // 0x2abcbc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2abcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2abcc0:
    // 0x2abcc0: 0x40f809  jalr        $v0
label_2abcc4:
    if (ctx->pc == 0x2ABCC4u) {
        ctx->pc = 0x2ABCC8u;
        goto label_2abcc8;
    }
    ctx->pc = 0x2ABCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABCC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABCC0u, 0x2ABCC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABCC8u;
label_2abcc8:
    // 0x2abcc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abccc:
    // 0x2abccc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2abcd0:
    if (ctx->pc == 0x2ABCD0u) {
        ctx->pc = 0x2ABCD4u;
        goto label_2abcd4;
    }
    ctx->pc = 0x2ABCCCu;
    {
        const bool branch_taken_0x2abccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abccc) {
            ctx->pc = 0x2ABCD8u;
            goto label_2abcd8;
        }
    }
    ctx->pc = 0x2ABCD4u;
label_2abcd4:
    // 0x2abcd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2abcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abcd8:
    // 0x2abcd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2abcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2abcdc:
    // 0x2abcdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2abcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2abce0:
    // 0x2abce0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2abce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2abce4:
    // 0x2abce4: 0x3e00008  jr          $ra
label_2abce8:
    if (ctx->pc == 0x2ABCE8u) {
        ctx->pc = 0x2ABCECu;
        goto label_2abcec;
    }
    ctx->pc = 0x2ABCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABCECu;
label_2abcec:
    // 0x2abcec: 0x0  nop
    ctx->pc = 0x2abcecu;
    // NOP
    ctx->pc = 0x2abcf0u;
}
