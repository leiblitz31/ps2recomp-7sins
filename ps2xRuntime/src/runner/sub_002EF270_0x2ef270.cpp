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

// Function: sub_002EF270
// Address: 0x2ef270 - 0x2efc78
void sub_002EF270_0x2ef270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF270_0x2ef270");
#endif

    switch (ctx->pc) {
        case 0x2ef270u: goto label_2ef270;
        case 0x2ef274u: goto label_2ef274;
        case 0x2ef278u: goto label_2ef278;
        case 0x2ef27cu: goto label_2ef27c;
        case 0x2ef280u: goto label_2ef280;
        case 0x2ef284u: goto label_2ef284;
        case 0x2ef288u: goto label_2ef288;
        case 0x2ef28cu: goto label_2ef28c;
        case 0x2ef290u: goto label_2ef290;
        case 0x2ef294u: goto label_2ef294;
        case 0x2ef298u: goto label_2ef298;
        case 0x2ef29cu: goto label_2ef29c;
        case 0x2ef2a0u: goto label_2ef2a0;
        case 0x2ef2a4u: goto label_2ef2a4;
        case 0x2ef2a8u: goto label_2ef2a8;
        case 0x2ef2acu: goto label_2ef2ac;
        case 0x2ef2b0u: goto label_2ef2b0;
        case 0x2ef2b4u: goto label_2ef2b4;
        case 0x2ef2b8u: goto label_2ef2b8;
        case 0x2ef2bcu: goto label_2ef2bc;
        case 0x2ef2c0u: goto label_2ef2c0;
        case 0x2ef2c4u: goto label_2ef2c4;
        case 0x2ef2c8u: goto label_2ef2c8;
        case 0x2ef2ccu: goto label_2ef2cc;
        case 0x2ef2d0u: goto label_2ef2d0;
        case 0x2ef2d4u: goto label_2ef2d4;
        case 0x2ef2d8u: goto label_2ef2d8;
        case 0x2ef2dcu: goto label_2ef2dc;
        case 0x2ef2e0u: goto label_2ef2e0;
        case 0x2ef2e4u: goto label_2ef2e4;
        case 0x2ef2e8u: goto label_2ef2e8;
        case 0x2ef2ecu: goto label_2ef2ec;
        case 0x2ef2f0u: goto label_2ef2f0;
        case 0x2ef2f4u: goto label_2ef2f4;
        case 0x2ef2f8u: goto label_2ef2f8;
        case 0x2ef2fcu: goto label_2ef2fc;
        case 0x2ef300u: goto label_2ef300;
        case 0x2ef304u: goto label_2ef304;
        case 0x2ef308u: goto label_2ef308;
        case 0x2ef30cu: goto label_2ef30c;
        case 0x2ef310u: goto label_2ef310;
        case 0x2ef314u: goto label_2ef314;
        case 0x2ef318u: goto label_2ef318;
        case 0x2ef31cu: goto label_2ef31c;
        case 0x2ef320u: goto label_2ef320;
        case 0x2ef324u: goto label_2ef324;
        case 0x2ef328u: goto label_2ef328;
        case 0x2ef32cu: goto label_2ef32c;
        case 0x2ef330u: goto label_2ef330;
        case 0x2ef334u: goto label_2ef334;
        case 0x2ef338u: goto label_2ef338;
        case 0x2ef33cu: goto label_2ef33c;
        case 0x2ef340u: goto label_2ef340;
        case 0x2ef344u: goto label_2ef344;
        case 0x2ef348u: goto label_2ef348;
        case 0x2ef34cu: goto label_2ef34c;
        case 0x2ef350u: goto label_2ef350;
        case 0x2ef354u: goto label_2ef354;
        case 0x2ef358u: goto label_2ef358;
        case 0x2ef35cu: goto label_2ef35c;
        case 0x2ef360u: goto label_2ef360;
        case 0x2ef364u: goto label_2ef364;
        case 0x2ef368u: goto label_2ef368;
        case 0x2ef36cu: goto label_2ef36c;
        case 0x2ef370u: goto label_2ef370;
        case 0x2ef374u: goto label_2ef374;
        case 0x2ef378u: goto label_2ef378;
        case 0x2ef37cu: goto label_2ef37c;
        case 0x2ef380u: goto label_2ef380;
        case 0x2ef384u: goto label_2ef384;
        case 0x2ef388u: goto label_2ef388;
        case 0x2ef38cu: goto label_2ef38c;
        case 0x2ef390u: goto label_2ef390;
        case 0x2ef394u: goto label_2ef394;
        case 0x2ef398u: goto label_2ef398;
        case 0x2ef39cu: goto label_2ef39c;
        case 0x2ef3a0u: goto label_2ef3a0;
        case 0x2ef3a4u: goto label_2ef3a4;
        case 0x2ef3a8u: goto label_2ef3a8;
        case 0x2ef3acu: goto label_2ef3ac;
        case 0x2ef3b0u: goto label_2ef3b0;
        case 0x2ef3b4u: goto label_2ef3b4;
        case 0x2ef3b8u: goto label_2ef3b8;
        case 0x2ef3bcu: goto label_2ef3bc;
        case 0x2ef3c0u: goto label_2ef3c0;
        case 0x2ef3c4u: goto label_2ef3c4;
        case 0x2ef3c8u: goto label_2ef3c8;
        case 0x2ef3ccu: goto label_2ef3cc;
        case 0x2ef3d0u: goto label_2ef3d0;
        case 0x2ef3d4u: goto label_2ef3d4;
        case 0x2ef3d8u: goto label_2ef3d8;
        case 0x2ef3dcu: goto label_2ef3dc;
        case 0x2ef3e0u: goto label_2ef3e0;
        case 0x2ef3e4u: goto label_2ef3e4;
        case 0x2ef3e8u: goto label_2ef3e8;
        case 0x2ef3ecu: goto label_2ef3ec;
        case 0x2ef3f0u: goto label_2ef3f0;
        case 0x2ef3f4u: goto label_2ef3f4;
        case 0x2ef3f8u: goto label_2ef3f8;
        case 0x2ef3fcu: goto label_2ef3fc;
        case 0x2ef400u: goto label_2ef400;
        case 0x2ef404u: goto label_2ef404;
        case 0x2ef408u: goto label_2ef408;
        case 0x2ef40cu: goto label_2ef40c;
        case 0x2ef410u: goto label_2ef410;
        case 0x2ef414u: goto label_2ef414;
        case 0x2ef418u: goto label_2ef418;
        case 0x2ef41cu: goto label_2ef41c;
        case 0x2ef420u: goto label_2ef420;
        case 0x2ef424u: goto label_2ef424;
        case 0x2ef428u: goto label_2ef428;
        case 0x2ef42cu: goto label_2ef42c;
        case 0x2ef430u: goto label_2ef430;
        case 0x2ef434u: goto label_2ef434;
        case 0x2ef438u: goto label_2ef438;
        case 0x2ef43cu: goto label_2ef43c;
        case 0x2ef440u: goto label_2ef440;
        case 0x2ef444u: goto label_2ef444;
        case 0x2ef448u: goto label_2ef448;
        case 0x2ef44cu: goto label_2ef44c;
        case 0x2ef450u: goto label_2ef450;
        case 0x2ef454u: goto label_2ef454;
        case 0x2ef458u: goto label_2ef458;
        case 0x2ef45cu: goto label_2ef45c;
        case 0x2ef460u: goto label_2ef460;
        case 0x2ef464u: goto label_2ef464;
        case 0x2ef468u: goto label_2ef468;
        case 0x2ef46cu: goto label_2ef46c;
        case 0x2ef470u: goto label_2ef470;
        case 0x2ef474u: goto label_2ef474;
        case 0x2ef478u: goto label_2ef478;
        case 0x2ef47cu: goto label_2ef47c;
        case 0x2ef480u: goto label_2ef480;
        case 0x2ef484u: goto label_2ef484;
        case 0x2ef488u: goto label_2ef488;
        case 0x2ef48cu: goto label_2ef48c;
        case 0x2ef490u: goto label_2ef490;
        case 0x2ef494u: goto label_2ef494;
        case 0x2ef498u: goto label_2ef498;
        case 0x2ef49cu: goto label_2ef49c;
        case 0x2ef4a0u: goto label_2ef4a0;
        case 0x2ef4a4u: goto label_2ef4a4;
        case 0x2ef4a8u: goto label_2ef4a8;
        case 0x2ef4acu: goto label_2ef4ac;
        case 0x2ef4b0u: goto label_2ef4b0;
        case 0x2ef4b4u: goto label_2ef4b4;
        case 0x2ef4b8u: goto label_2ef4b8;
        case 0x2ef4bcu: goto label_2ef4bc;
        case 0x2ef4c0u: goto label_2ef4c0;
        case 0x2ef4c4u: goto label_2ef4c4;
        case 0x2ef4c8u: goto label_2ef4c8;
        case 0x2ef4ccu: goto label_2ef4cc;
        case 0x2ef4d0u: goto label_2ef4d0;
        case 0x2ef4d4u: goto label_2ef4d4;
        case 0x2ef4d8u: goto label_2ef4d8;
        case 0x2ef4dcu: goto label_2ef4dc;
        case 0x2ef4e0u: goto label_2ef4e0;
        case 0x2ef4e4u: goto label_2ef4e4;
        case 0x2ef4e8u: goto label_2ef4e8;
        case 0x2ef4ecu: goto label_2ef4ec;
        case 0x2ef4f0u: goto label_2ef4f0;
        case 0x2ef4f4u: goto label_2ef4f4;
        case 0x2ef4f8u: goto label_2ef4f8;
        case 0x2ef4fcu: goto label_2ef4fc;
        case 0x2ef500u: goto label_2ef500;
        case 0x2ef504u: goto label_2ef504;
        case 0x2ef508u: goto label_2ef508;
        case 0x2ef50cu: goto label_2ef50c;
        case 0x2ef510u: goto label_2ef510;
        case 0x2ef514u: goto label_2ef514;
        case 0x2ef518u: goto label_2ef518;
        case 0x2ef51cu: goto label_2ef51c;
        case 0x2ef520u: goto label_2ef520;
        case 0x2ef524u: goto label_2ef524;
        case 0x2ef528u: goto label_2ef528;
        case 0x2ef52cu: goto label_2ef52c;
        case 0x2ef530u: goto label_2ef530;
        case 0x2ef534u: goto label_2ef534;
        case 0x2ef538u: goto label_2ef538;
        case 0x2ef53cu: goto label_2ef53c;
        case 0x2ef540u: goto label_2ef540;
        case 0x2ef544u: goto label_2ef544;
        case 0x2ef548u: goto label_2ef548;
        case 0x2ef54cu: goto label_2ef54c;
        case 0x2ef550u: goto label_2ef550;
        case 0x2ef554u: goto label_2ef554;
        case 0x2ef558u: goto label_2ef558;
        case 0x2ef55cu: goto label_2ef55c;
        case 0x2ef560u: goto label_2ef560;
        case 0x2ef564u: goto label_2ef564;
        case 0x2ef568u: goto label_2ef568;
        case 0x2ef56cu: goto label_2ef56c;
        case 0x2ef570u: goto label_2ef570;
        case 0x2ef574u: goto label_2ef574;
        case 0x2ef578u: goto label_2ef578;
        case 0x2ef57cu: goto label_2ef57c;
        case 0x2ef580u: goto label_2ef580;
        case 0x2ef584u: goto label_2ef584;
        case 0x2ef588u: goto label_2ef588;
        case 0x2ef58cu: goto label_2ef58c;
        case 0x2ef590u: goto label_2ef590;
        case 0x2ef594u: goto label_2ef594;
        case 0x2ef598u: goto label_2ef598;
        case 0x2ef59cu: goto label_2ef59c;
        case 0x2ef5a0u: goto label_2ef5a0;
        case 0x2ef5a4u: goto label_2ef5a4;
        case 0x2ef5a8u: goto label_2ef5a8;
        case 0x2ef5acu: goto label_2ef5ac;
        case 0x2ef5b0u: goto label_2ef5b0;
        case 0x2ef5b4u: goto label_2ef5b4;
        case 0x2ef5b8u: goto label_2ef5b8;
        case 0x2ef5bcu: goto label_2ef5bc;
        case 0x2ef5c0u: goto label_2ef5c0;
        case 0x2ef5c4u: goto label_2ef5c4;
        case 0x2ef5c8u: goto label_2ef5c8;
        case 0x2ef5ccu: goto label_2ef5cc;
        case 0x2ef5d0u: goto label_2ef5d0;
        case 0x2ef5d4u: goto label_2ef5d4;
        case 0x2ef5d8u: goto label_2ef5d8;
        case 0x2ef5dcu: goto label_2ef5dc;
        case 0x2ef5e0u: goto label_2ef5e0;
        case 0x2ef5e4u: goto label_2ef5e4;
        case 0x2ef5e8u: goto label_2ef5e8;
        case 0x2ef5ecu: goto label_2ef5ec;
        case 0x2ef5f0u: goto label_2ef5f0;
        case 0x2ef5f4u: goto label_2ef5f4;
        case 0x2ef5f8u: goto label_2ef5f8;
        case 0x2ef5fcu: goto label_2ef5fc;
        case 0x2ef600u: goto label_2ef600;
        case 0x2ef604u: goto label_2ef604;
        case 0x2ef608u: goto label_2ef608;
        case 0x2ef60cu: goto label_2ef60c;
        case 0x2ef610u: goto label_2ef610;
        case 0x2ef614u: goto label_2ef614;
        case 0x2ef618u: goto label_2ef618;
        case 0x2ef61cu: goto label_2ef61c;
        case 0x2ef620u: goto label_2ef620;
        case 0x2ef624u: goto label_2ef624;
        case 0x2ef628u: goto label_2ef628;
        case 0x2ef62cu: goto label_2ef62c;
        case 0x2ef630u: goto label_2ef630;
        case 0x2ef634u: goto label_2ef634;
        case 0x2ef638u: goto label_2ef638;
        case 0x2ef63cu: goto label_2ef63c;
        case 0x2ef640u: goto label_2ef640;
        case 0x2ef644u: goto label_2ef644;
        case 0x2ef648u: goto label_2ef648;
        case 0x2ef64cu: goto label_2ef64c;
        case 0x2ef650u: goto label_2ef650;
        case 0x2ef654u: goto label_2ef654;
        case 0x2ef658u: goto label_2ef658;
        case 0x2ef65cu: goto label_2ef65c;
        case 0x2ef660u: goto label_2ef660;
        case 0x2ef664u: goto label_2ef664;
        case 0x2ef668u: goto label_2ef668;
        case 0x2ef66cu: goto label_2ef66c;
        case 0x2ef670u: goto label_2ef670;
        case 0x2ef674u: goto label_2ef674;
        case 0x2ef678u: goto label_2ef678;
        case 0x2ef67cu: goto label_2ef67c;
        case 0x2ef680u: goto label_2ef680;
        case 0x2ef684u: goto label_2ef684;
        case 0x2ef688u: goto label_2ef688;
        case 0x2ef68cu: goto label_2ef68c;
        case 0x2ef690u: goto label_2ef690;
        case 0x2ef694u: goto label_2ef694;
        case 0x2ef698u: goto label_2ef698;
        case 0x2ef69cu: goto label_2ef69c;
        case 0x2ef6a0u: goto label_2ef6a0;
        case 0x2ef6a4u: goto label_2ef6a4;
        case 0x2ef6a8u: goto label_2ef6a8;
        case 0x2ef6acu: goto label_2ef6ac;
        case 0x2ef6b0u: goto label_2ef6b0;
        case 0x2ef6b4u: goto label_2ef6b4;
        case 0x2ef6b8u: goto label_2ef6b8;
        case 0x2ef6bcu: goto label_2ef6bc;
        case 0x2ef6c0u: goto label_2ef6c0;
        case 0x2ef6c4u: goto label_2ef6c4;
        case 0x2ef6c8u: goto label_2ef6c8;
        case 0x2ef6ccu: goto label_2ef6cc;
        case 0x2ef6d0u: goto label_2ef6d0;
        case 0x2ef6d4u: goto label_2ef6d4;
        case 0x2ef6d8u: goto label_2ef6d8;
        case 0x2ef6dcu: goto label_2ef6dc;
        case 0x2ef6e0u: goto label_2ef6e0;
        case 0x2ef6e4u: goto label_2ef6e4;
        case 0x2ef6e8u: goto label_2ef6e8;
        case 0x2ef6ecu: goto label_2ef6ec;
        case 0x2ef6f0u: goto label_2ef6f0;
        case 0x2ef6f4u: goto label_2ef6f4;
        case 0x2ef6f8u: goto label_2ef6f8;
        case 0x2ef6fcu: goto label_2ef6fc;
        case 0x2ef700u: goto label_2ef700;
        case 0x2ef704u: goto label_2ef704;
        case 0x2ef708u: goto label_2ef708;
        case 0x2ef70cu: goto label_2ef70c;
        case 0x2ef710u: goto label_2ef710;
        case 0x2ef714u: goto label_2ef714;
        case 0x2ef718u: goto label_2ef718;
        case 0x2ef71cu: goto label_2ef71c;
        case 0x2ef720u: goto label_2ef720;
        case 0x2ef724u: goto label_2ef724;
        case 0x2ef728u: goto label_2ef728;
        case 0x2ef72cu: goto label_2ef72c;
        case 0x2ef730u: goto label_2ef730;
        case 0x2ef734u: goto label_2ef734;
        case 0x2ef738u: goto label_2ef738;
        case 0x2ef73cu: goto label_2ef73c;
        case 0x2ef740u: goto label_2ef740;
        case 0x2ef744u: goto label_2ef744;
        case 0x2ef748u: goto label_2ef748;
        case 0x2ef74cu: goto label_2ef74c;
        case 0x2ef750u: goto label_2ef750;
        case 0x2ef754u: goto label_2ef754;
        case 0x2ef758u: goto label_2ef758;
        case 0x2ef75cu: goto label_2ef75c;
        case 0x2ef760u: goto label_2ef760;
        case 0x2ef764u: goto label_2ef764;
        case 0x2ef768u: goto label_2ef768;
        case 0x2ef76cu: goto label_2ef76c;
        case 0x2ef770u: goto label_2ef770;
        case 0x2ef774u: goto label_2ef774;
        case 0x2ef778u: goto label_2ef778;
        case 0x2ef77cu: goto label_2ef77c;
        case 0x2ef780u: goto label_2ef780;
        case 0x2ef784u: goto label_2ef784;
        case 0x2ef788u: goto label_2ef788;
        case 0x2ef78cu: goto label_2ef78c;
        case 0x2ef790u: goto label_2ef790;
        case 0x2ef794u: goto label_2ef794;
        case 0x2ef798u: goto label_2ef798;
        case 0x2ef79cu: goto label_2ef79c;
        case 0x2ef7a0u: goto label_2ef7a0;
        case 0x2ef7a4u: goto label_2ef7a4;
        case 0x2ef7a8u: goto label_2ef7a8;
        case 0x2ef7acu: goto label_2ef7ac;
        case 0x2ef7b0u: goto label_2ef7b0;
        case 0x2ef7b4u: goto label_2ef7b4;
        case 0x2ef7b8u: goto label_2ef7b8;
        case 0x2ef7bcu: goto label_2ef7bc;
        case 0x2ef7c0u: goto label_2ef7c0;
        case 0x2ef7c4u: goto label_2ef7c4;
        case 0x2ef7c8u: goto label_2ef7c8;
        case 0x2ef7ccu: goto label_2ef7cc;
        case 0x2ef7d0u: goto label_2ef7d0;
        case 0x2ef7d4u: goto label_2ef7d4;
        case 0x2ef7d8u: goto label_2ef7d8;
        case 0x2ef7dcu: goto label_2ef7dc;
        case 0x2ef7e0u: goto label_2ef7e0;
        case 0x2ef7e4u: goto label_2ef7e4;
        case 0x2ef7e8u: goto label_2ef7e8;
        case 0x2ef7ecu: goto label_2ef7ec;
        case 0x2ef7f0u: goto label_2ef7f0;
        case 0x2ef7f4u: goto label_2ef7f4;
        case 0x2ef7f8u: goto label_2ef7f8;
        case 0x2ef7fcu: goto label_2ef7fc;
        case 0x2ef800u: goto label_2ef800;
        case 0x2ef804u: goto label_2ef804;
        case 0x2ef808u: goto label_2ef808;
        case 0x2ef80cu: goto label_2ef80c;
        case 0x2ef810u: goto label_2ef810;
        case 0x2ef814u: goto label_2ef814;
        case 0x2ef818u: goto label_2ef818;
        case 0x2ef81cu: goto label_2ef81c;
        case 0x2ef820u: goto label_2ef820;
        case 0x2ef824u: goto label_2ef824;
        case 0x2ef828u: goto label_2ef828;
        case 0x2ef82cu: goto label_2ef82c;
        case 0x2ef830u: goto label_2ef830;
        case 0x2ef834u: goto label_2ef834;
        case 0x2ef838u: goto label_2ef838;
        case 0x2ef83cu: goto label_2ef83c;
        case 0x2ef840u: goto label_2ef840;
        case 0x2ef844u: goto label_2ef844;
        case 0x2ef848u: goto label_2ef848;
        case 0x2ef84cu: goto label_2ef84c;
        case 0x2ef850u: goto label_2ef850;
        case 0x2ef854u: goto label_2ef854;
        case 0x2ef858u: goto label_2ef858;
        case 0x2ef85cu: goto label_2ef85c;
        case 0x2ef860u: goto label_2ef860;
        case 0x2ef864u: goto label_2ef864;
        case 0x2ef868u: goto label_2ef868;
        case 0x2ef86cu: goto label_2ef86c;
        case 0x2ef870u: goto label_2ef870;
        case 0x2ef874u: goto label_2ef874;
        case 0x2ef878u: goto label_2ef878;
        case 0x2ef87cu: goto label_2ef87c;
        case 0x2ef880u: goto label_2ef880;
        case 0x2ef884u: goto label_2ef884;
        case 0x2ef888u: goto label_2ef888;
        case 0x2ef88cu: goto label_2ef88c;
        case 0x2ef890u: goto label_2ef890;
        case 0x2ef894u: goto label_2ef894;
        case 0x2ef898u: goto label_2ef898;
        case 0x2ef89cu: goto label_2ef89c;
        case 0x2ef8a0u: goto label_2ef8a0;
        case 0x2ef8a4u: goto label_2ef8a4;
        case 0x2ef8a8u: goto label_2ef8a8;
        case 0x2ef8acu: goto label_2ef8ac;
        case 0x2ef8b0u: goto label_2ef8b0;
        case 0x2ef8b4u: goto label_2ef8b4;
        case 0x2ef8b8u: goto label_2ef8b8;
        case 0x2ef8bcu: goto label_2ef8bc;
        case 0x2ef8c0u: goto label_2ef8c0;
        case 0x2ef8c4u: goto label_2ef8c4;
        case 0x2ef8c8u: goto label_2ef8c8;
        case 0x2ef8ccu: goto label_2ef8cc;
        case 0x2ef8d0u: goto label_2ef8d0;
        case 0x2ef8d4u: goto label_2ef8d4;
        case 0x2ef8d8u: goto label_2ef8d8;
        case 0x2ef8dcu: goto label_2ef8dc;
        case 0x2ef8e0u: goto label_2ef8e0;
        case 0x2ef8e4u: goto label_2ef8e4;
        case 0x2ef8e8u: goto label_2ef8e8;
        case 0x2ef8ecu: goto label_2ef8ec;
        case 0x2ef8f0u: goto label_2ef8f0;
        case 0x2ef8f4u: goto label_2ef8f4;
        case 0x2ef8f8u: goto label_2ef8f8;
        case 0x2ef8fcu: goto label_2ef8fc;
        case 0x2ef900u: goto label_2ef900;
        case 0x2ef904u: goto label_2ef904;
        case 0x2ef908u: goto label_2ef908;
        case 0x2ef90cu: goto label_2ef90c;
        case 0x2ef910u: goto label_2ef910;
        case 0x2ef914u: goto label_2ef914;
        case 0x2ef918u: goto label_2ef918;
        case 0x2ef91cu: goto label_2ef91c;
        case 0x2ef920u: goto label_2ef920;
        case 0x2ef924u: goto label_2ef924;
        case 0x2ef928u: goto label_2ef928;
        case 0x2ef92cu: goto label_2ef92c;
        case 0x2ef930u: goto label_2ef930;
        case 0x2ef934u: goto label_2ef934;
        case 0x2ef938u: goto label_2ef938;
        case 0x2ef93cu: goto label_2ef93c;
        case 0x2ef940u: goto label_2ef940;
        case 0x2ef944u: goto label_2ef944;
        case 0x2ef948u: goto label_2ef948;
        case 0x2ef94cu: goto label_2ef94c;
        case 0x2ef950u: goto label_2ef950;
        case 0x2ef954u: goto label_2ef954;
        case 0x2ef958u: goto label_2ef958;
        case 0x2ef95cu: goto label_2ef95c;
        case 0x2ef960u: goto label_2ef960;
        case 0x2ef964u: goto label_2ef964;
        case 0x2ef968u: goto label_2ef968;
        case 0x2ef96cu: goto label_2ef96c;
        case 0x2ef970u: goto label_2ef970;
        case 0x2ef974u: goto label_2ef974;
        case 0x2ef978u: goto label_2ef978;
        case 0x2ef97cu: goto label_2ef97c;
        case 0x2ef980u: goto label_2ef980;
        case 0x2ef984u: goto label_2ef984;
        case 0x2ef988u: goto label_2ef988;
        case 0x2ef98cu: goto label_2ef98c;
        case 0x2ef990u: goto label_2ef990;
        case 0x2ef994u: goto label_2ef994;
        case 0x2ef998u: goto label_2ef998;
        case 0x2ef99cu: goto label_2ef99c;
        case 0x2ef9a0u: goto label_2ef9a0;
        case 0x2ef9a4u: goto label_2ef9a4;
        case 0x2ef9a8u: goto label_2ef9a8;
        case 0x2ef9acu: goto label_2ef9ac;
        case 0x2ef9b0u: goto label_2ef9b0;
        case 0x2ef9b4u: goto label_2ef9b4;
        case 0x2ef9b8u: goto label_2ef9b8;
        case 0x2ef9bcu: goto label_2ef9bc;
        case 0x2ef9c0u: goto label_2ef9c0;
        case 0x2ef9c4u: goto label_2ef9c4;
        case 0x2ef9c8u: goto label_2ef9c8;
        case 0x2ef9ccu: goto label_2ef9cc;
        case 0x2ef9d0u: goto label_2ef9d0;
        case 0x2ef9d4u: goto label_2ef9d4;
        case 0x2ef9d8u: goto label_2ef9d8;
        case 0x2ef9dcu: goto label_2ef9dc;
        case 0x2ef9e0u: goto label_2ef9e0;
        case 0x2ef9e4u: goto label_2ef9e4;
        case 0x2ef9e8u: goto label_2ef9e8;
        case 0x2ef9ecu: goto label_2ef9ec;
        case 0x2ef9f0u: goto label_2ef9f0;
        case 0x2ef9f4u: goto label_2ef9f4;
        case 0x2ef9f8u: goto label_2ef9f8;
        case 0x2ef9fcu: goto label_2ef9fc;
        case 0x2efa00u: goto label_2efa00;
        case 0x2efa04u: goto label_2efa04;
        case 0x2efa08u: goto label_2efa08;
        case 0x2efa0cu: goto label_2efa0c;
        case 0x2efa10u: goto label_2efa10;
        case 0x2efa14u: goto label_2efa14;
        case 0x2efa18u: goto label_2efa18;
        case 0x2efa1cu: goto label_2efa1c;
        case 0x2efa20u: goto label_2efa20;
        case 0x2efa24u: goto label_2efa24;
        case 0x2efa28u: goto label_2efa28;
        case 0x2efa2cu: goto label_2efa2c;
        case 0x2efa30u: goto label_2efa30;
        case 0x2efa34u: goto label_2efa34;
        case 0x2efa38u: goto label_2efa38;
        case 0x2efa3cu: goto label_2efa3c;
        case 0x2efa40u: goto label_2efa40;
        case 0x2efa44u: goto label_2efa44;
        case 0x2efa48u: goto label_2efa48;
        case 0x2efa4cu: goto label_2efa4c;
        case 0x2efa50u: goto label_2efa50;
        case 0x2efa54u: goto label_2efa54;
        case 0x2efa58u: goto label_2efa58;
        case 0x2efa5cu: goto label_2efa5c;
        case 0x2efa60u: goto label_2efa60;
        case 0x2efa64u: goto label_2efa64;
        case 0x2efa68u: goto label_2efa68;
        case 0x2efa6cu: goto label_2efa6c;
        case 0x2efa70u: goto label_2efa70;
        case 0x2efa74u: goto label_2efa74;
        case 0x2efa78u: goto label_2efa78;
        case 0x2efa7cu: goto label_2efa7c;
        case 0x2efa80u: goto label_2efa80;
        case 0x2efa84u: goto label_2efa84;
        case 0x2efa88u: goto label_2efa88;
        case 0x2efa8cu: goto label_2efa8c;
        case 0x2efa90u: goto label_2efa90;
        case 0x2efa94u: goto label_2efa94;
        case 0x2efa98u: goto label_2efa98;
        case 0x2efa9cu: goto label_2efa9c;
        case 0x2efaa0u: goto label_2efaa0;
        case 0x2efaa4u: goto label_2efaa4;
        case 0x2efaa8u: goto label_2efaa8;
        case 0x2efaacu: goto label_2efaac;
        case 0x2efab0u: goto label_2efab0;
        case 0x2efab4u: goto label_2efab4;
        case 0x2efab8u: goto label_2efab8;
        case 0x2efabcu: goto label_2efabc;
        case 0x2efac0u: goto label_2efac0;
        case 0x2efac4u: goto label_2efac4;
        case 0x2efac8u: goto label_2efac8;
        case 0x2efaccu: goto label_2efacc;
        case 0x2efad0u: goto label_2efad0;
        case 0x2efad4u: goto label_2efad4;
        case 0x2efad8u: goto label_2efad8;
        case 0x2efadcu: goto label_2efadc;
        case 0x2efae0u: goto label_2efae0;
        case 0x2efae4u: goto label_2efae4;
        case 0x2efae8u: goto label_2efae8;
        case 0x2efaecu: goto label_2efaec;
        case 0x2efaf0u: goto label_2efaf0;
        case 0x2efaf4u: goto label_2efaf4;
        case 0x2efaf8u: goto label_2efaf8;
        case 0x2efafcu: goto label_2efafc;
        case 0x2efb00u: goto label_2efb00;
        case 0x2efb04u: goto label_2efb04;
        case 0x2efb08u: goto label_2efb08;
        case 0x2efb0cu: goto label_2efb0c;
        case 0x2efb10u: goto label_2efb10;
        case 0x2efb14u: goto label_2efb14;
        case 0x2efb18u: goto label_2efb18;
        case 0x2efb1cu: goto label_2efb1c;
        case 0x2efb20u: goto label_2efb20;
        case 0x2efb24u: goto label_2efb24;
        case 0x2efb28u: goto label_2efb28;
        case 0x2efb2cu: goto label_2efb2c;
        case 0x2efb30u: goto label_2efb30;
        case 0x2efb34u: goto label_2efb34;
        case 0x2efb38u: goto label_2efb38;
        case 0x2efb3cu: goto label_2efb3c;
        case 0x2efb40u: goto label_2efb40;
        case 0x2efb44u: goto label_2efb44;
        case 0x2efb48u: goto label_2efb48;
        case 0x2efb4cu: goto label_2efb4c;
        case 0x2efb50u: goto label_2efb50;
        case 0x2efb54u: goto label_2efb54;
        case 0x2efb58u: goto label_2efb58;
        case 0x2efb5cu: goto label_2efb5c;
        case 0x2efb60u: goto label_2efb60;
        case 0x2efb64u: goto label_2efb64;
        case 0x2efb68u: goto label_2efb68;
        case 0x2efb6cu: goto label_2efb6c;
        case 0x2efb70u: goto label_2efb70;
        case 0x2efb74u: goto label_2efb74;
        case 0x2efb78u: goto label_2efb78;
        case 0x2efb7cu: goto label_2efb7c;
        case 0x2efb80u: goto label_2efb80;
        case 0x2efb84u: goto label_2efb84;
        case 0x2efb88u: goto label_2efb88;
        case 0x2efb8cu: goto label_2efb8c;
        case 0x2efb90u: goto label_2efb90;
        case 0x2efb94u: goto label_2efb94;
        case 0x2efb98u: goto label_2efb98;
        case 0x2efb9cu: goto label_2efb9c;
        case 0x2efba0u: goto label_2efba0;
        case 0x2efba4u: goto label_2efba4;
        case 0x2efba8u: goto label_2efba8;
        case 0x2efbacu: goto label_2efbac;
        case 0x2efbb0u: goto label_2efbb0;
        case 0x2efbb4u: goto label_2efbb4;
        case 0x2efbb8u: goto label_2efbb8;
        case 0x2efbbcu: goto label_2efbbc;
        case 0x2efbc0u: goto label_2efbc0;
        case 0x2efbc4u: goto label_2efbc4;
        case 0x2efbc8u: goto label_2efbc8;
        case 0x2efbccu: goto label_2efbcc;
        case 0x2efbd0u: goto label_2efbd0;
        case 0x2efbd4u: goto label_2efbd4;
        case 0x2efbd8u: goto label_2efbd8;
        case 0x2efbdcu: goto label_2efbdc;
        case 0x2efbe0u: goto label_2efbe0;
        case 0x2efbe4u: goto label_2efbe4;
        case 0x2efbe8u: goto label_2efbe8;
        case 0x2efbecu: goto label_2efbec;
        case 0x2efbf0u: goto label_2efbf0;
        case 0x2efbf4u: goto label_2efbf4;
        case 0x2efbf8u: goto label_2efbf8;
        case 0x2efbfcu: goto label_2efbfc;
        case 0x2efc00u: goto label_2efc00;
        case 0x2efc04u: goto label_2efc04;
        case 0x2efc08u: goto label_2efc08;
        case 0x2efc0cu: goto label_2efc0c;
        case 0x2efc10u: goto label_2efc10;
        case 0x2efc14u: goto label_2efc14;
        case 0x2efc18u: goto label_2efc18;
        case 0x2efc1cu: goto label_2efc1c;
        case 0x2efc20u: goto label_2efc20;
        case 0x2efc24u: goto label_2efc24;
        case 0x2efc28u: goto label_2efc28;
        case 0x2efc2cu: goto label_2efc2c;
        case 0x2efc30u: goto label_2efc30;
        case 0x2efc34u: goto label_2efc34;
        case 0x2efc38u: goto label_2efc38;
        case 0x2efc3cu: goto label_2efc3c;
        case 0x2efc40u: goto label_2efc40;
        case 0x2efc44u: goto label_2efc44;
        case 0x2efc48u: goto label_2efc48;
        case 0x2efc4cu: goto label_2efc4c;
        case 0x2efc50u: goto label_2efc50;
        case 0x2efc54u: goto label_2efc54;
        case 0x2efc58u: goto label_2efc58;
        case 0x2efc5cu: goto label_2efc5c;
        case 0x2efc60u: goto label_2efc60;
        case 0x2efc64u: goto label_2efc64;
        case 0x2efc68u: goto label_2efc68;
        case 0x2efc6cu: goto label_2efc6c;
        case 0x2efc70u: goto label_2efc70;
        case 0x2efc74u: goto label_2efc74;
        default: break;
    }

    ctx->pc = 0x2ef270u;

label_2ef270:
    // 0x2ef270: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ef270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2ef274:
    // 0x2ef274: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2ef274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_2ef278:
    // 0x2ef278: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2ef278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_2ef27c:
    // 0x2ef27c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2ef27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_2ef280:
    // 0x2ef280: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2ef280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_2ef284:
    // 0x2ef284: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2ef284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_2ef288:
    // 0x2ef288: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x2ef288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_2ef28c:
    // 0x2ef28c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x2ef28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_2ef290:
    // 0x2ef290: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2ef290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2ef294:
    // 0x2ef294: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2ef294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2ef298:
    // 0x2ef298: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2ef298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ef29c:
    // 0x2ef29c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2ef29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_2ef2a0:
    // 0x2ef2a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ef2a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef2a4:
    // 0x2ef2a4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2ef2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_2ef2a8:
    // 0x2ef2a8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2ef2a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ef2ac:
    // 0x2ef2ac: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x2ef2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_2ef2b0:
    // 0x2ef2b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2ef2b4:
    if (ctx->pc == 0x2EF2B4u) {
        ctx->pc = 0x2EF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2B0u;
        // 0x2ef2b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF2B8u;
        goto label_2ef2b8;
    }
    ctx->pc = 0x2EF2B0u;
    {
        const bool branch_taken_0x2ef2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2B0u;
        // 0x2ef2b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2b0) {
            ctx->pc = 0x2EF2CCu;
            goto label_2ef2cc;
        }
    }
    ctx->pc = 0x2EF2B8u;
label_2ef2b8:
    // 0x2ef2b8: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x2ef2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
label_2ef2bc:
    // 0x2ef2bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2ef2c0:
    if (ctx->pc == 0x2EF2C0u) {
        ctx->pc = 0x2EF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2BCu;
        // 0x2ef2c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF2C4u;
        goto label_2ef2c4;
    }
    ctx->pc = 0x2EF2BCu;
    {
        const bool branch_taken_0x2ef2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2bc) {
            ctx->pc = 0x2EF2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF2BCu;
            // 0x2ef2c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF2CCu;
            goto label_2ef2cc;
        }
    }
    ctx->pc = 0x2EF2C4u;
label_2ef2c4:
    // 0x2ef2c4: 0x3a820008  xori        $v0, $s4, 0x8
    ctx->pc = 0x2ef2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)8);
label_2ef2c8:
    // 0x2ef2c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ef2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ef2cc:
    // 0x2ef2cc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2ef2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2ef2d0:
    // 0x2ef2d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ef2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef2d4:
    // 0x2ef2d4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2ef2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2ef2d8:
    // 0x2ef2d8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_2ef2dc:
    if (ctx->pc == 0x2EF2DCu) {
        ctx->pc = 0x2EF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2D8u;
        // 0x2ef2dc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF2E0u;
        goto label_2ef2e0;
    }
    ctx->pc = 0x2EF2D8u;
    {
        const bool branch_taken_0x2ef2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2D8u;
        // 0x2ef2dc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2d8) {
            ctx->pc = 0x2EF3E0u;
            goto label_2ef3e0;
        }
    }
    ctx->pc = 0x2EF2E0u;
label_2ef2e0:
    // 0x2ef2e0: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x2ef2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2ef2e4:
    // 0x2ef2e4: 0x2d49821  addu        $s3, $s6, $s4
    ctx->pc = 0x2ef2e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_2ef2e8:
    // 0x2ef2e8: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x2ef2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2ef2ec:
    // 0x2ef2ec: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2ef2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ef2f0:
    // 0x2ef2f0: 0x5040024f  beql        $v0, $zero, . + 4 + (0x24F << 2)
label_2ef2f4:
    if (ctx->pc == 0x2EF2F4u) {
        ctx->pc = 0x2EF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2F0u;
        // 0x2ef2f4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF2F8u;
        goto label_2ef2f8;
    }
    ctx->pc = 0x2EF2F0u;
    {
        const bool branch_taken_0x2ef2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2f0) {
            ctx->pc = 0x2EF2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF2F0u;
            // 0x2ef2f4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC30u;
            goto label_2efc30;
        }
    }
    ctx->pc = 0x2EF2F8u;
label_2ef2f8:
    // 0x2ef2f8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2ef2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2ef2fc:
    // 0x2ef2fc: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x2ef2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_2ef300:
    // 0x2ef300: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ef300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef304:
    // 0x2ef304: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x2ef304u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_2ef308:
    // 0x2ef308: 0x14903c  dsll32      $s2, $s4, 0
    ctx->pc = 0x2ef308u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 0));
label_2ef30c:
    // 0x2ef30c: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x2ef30cu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ef310:
    // 0x2ef310: 0x10000022  b           . + 4 + (0x22 << 2)
label_2ef314:
    if (ctx->pc == 0x2EF314u) {
        ctx->pc = 0x2EF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF310u;
        // 0x2ef314: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF318u;
        goto label_2ef318;
    }
    ctx->pc = 0x2EF310u;
    {
        const bool branch_taken_0x2ef310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF310u;
        // 0x2ef314: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef310) {
            ctx->pc = 0x2EF39Cu;
            goto label_2ef39c;
        }
    }
    ctx->pc = 0x2EF318u;
label_2ef318:
    // 0x2ef318: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2ef31c:
    if (ctx->pc == 0x2EF31Cu) {
        ctx->pc = 0x2EF320u;
        goto label_2ef320;
    }
    ctx->pc = 0x2EF318u;
    {
        const bool branch_taken_0x2ef318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef318) {
            ctx->pc = 0x2EF338u;
            goto label_2ef338;
        }
    }
    ctx->pc = 0x2EF320u;
label_2ef320:
    // 0x2ef320: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x2ef320u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef324:
    // 0x2ef324: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2ef324u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef328:
    // 0x2ef328: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2ef328u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_2ef32c:
    // 0x2ef32c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2ef330:
    if (ctx->pc == 0x2EF330u) {
        ctx->pc = 0x2EF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF32Cu;
        // 0x2ef330: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF334u;
        goto label_2ef334;
    }
    ctx->pc = 0x2EF32Cu;
    {
        const bool branch_taken_0x2ef32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF32Cu;
        // 0x2ef330: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef32c) {
            ctx->pc = 0x2EF398u;
            goto label_2ef398;
        }
    }
    ctx->pc = 0x2EF334u;
label_2ef334:
    // 0x2ef334: 0x0  nop
    ctx->pc = 0x2ef334u;
    // NOP
label_2ef338:
    // 0x2ef338: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_2ef33c:
    if (ctx->pc == 0x2EF33Cu) {
        ctx->pc = 0x2EF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF338u;
        // 0x2ef33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF340u;
        goto label_2ef340;
    }
    ctx->pc = 0x2EF338u;
    {
        const bool branch_taken_0x2ef338 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF338u;
        // 0x2ef33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef338) {
            ctx->pc = 0x2EF370u;
            goto label_2ef370;
        }
    }
    ctx->pc = 0x2EF340u;
label_2ef340:
    // 0x2ef340: 0x17283e  dsrl32      $a1, $s7, 0
    ctx->pc = 0x2ef340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 0));
label_2ef344:
    // 0x2ef344: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ef344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef348:
    // 0x2ef348: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2ef348u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef34c:
    // 0x2ef34c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2ef34cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2ef350:
    // 0x2ef350: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2ef350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2ef354:
    // 0x2ef354: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2ef354u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2ef358:
    // 0x2ef358: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2ef358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2ef35c:
    // 0x2ef35c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2ef35cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_2ef360:
    // 0x2ef360: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2ef364:
    if (ctx->pc == 0x2EF364u) {
        ctx->pc = 0x2EF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF360u;
        // 0x2ef364: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF368u;
        goto label_2ef368;
    }
    ctx->pc = 0x2EF360u;
    {
        const bool branch_taken_0x2ef360 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF360u;
        // 0x2ef364: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef360) {
            ctx->pc = 0x2EF348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef348;
        }
    }
    ctx->pc = 0x2EF368u;
label_2ef368:
    // 0x2ef368: 0x1000000c  b           . + 4 + (0xC << 2)
label_2ef36c:
    if (ctx->pc == 0x2EF36Cu) {
        ctx->pc = 0x2EF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF368u;
        // 0x2ef36c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF370u;
        goto label_2ef370;
    }
    ctx->pc = 0x2EF368u;
    {
        const bool branch_taken_0x2ef368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF368u;
        // 0x2ef36c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef368) {
            ctx->pc = 0x2EF39Cu;
            goto label_2ef39c;
        }
    }
    ctx->pc = 0x2EF370u;
label_2ef370:
    // 0x2ef370: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x2ef370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
label_2ef374:
    // 0x2ef374: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ef374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef378:
    // 0x2ef378: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2ef378u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef37c:
    // 0x2ef37c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2ef37cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2ef380:
    // 0x2ef380: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2ef380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2ef384:
    // 0x2ef384: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2ef384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ef388:
    // 0x2ef388: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ef388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ef38c:
    // 0x2ef38c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2ef38cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ef390:
    // 0x2ef390: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2ef394:
    if (ctx->pc == 0x2EF394u) {
        ctx->pc = 0x2EF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF390u;
        // 0x2ef394: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF398u;
        goto label_2ef398;
    }
    ctx->pc = 0x2EF390u;
    {
        const bool branch_taken_0x2ef390 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF390u;
        // 0x2ef394: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef390) {
            ctx->pc = 0x2EF378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef378;
        }
    }
    ctx->pc = 0x2EF398u;
label_2ef398:
    // 0x2ef398: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2ef398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef39c:
    // 0x2ef39c: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x2ef39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2ef3a0:
    // 0x2ef3a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ef3a4:
    if (ctx->pc == 0x2EF3A4u) {
        ctx->pc = 0x2EF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3A0u;
        // 0x2ef3a4: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3A8u;
        goto label_2ef3a8;
    }
    ctx->pc = 0x2EF3A0u;
    {
        const bool branch_taken_0x2ef3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3A0u;
        // 0x2ef3a4: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3a0) {
            ctx->pc = 0x2EF3C4u;
            goto label_2ef3c4;
        }
    }
    ctx->pc = 0x2EF3A8u;
label_2ef3a8:
    // 0x2ef3a8: 0x2148823  subu        $s1, $s0, $s4
    ctx->pc = 0x2ef3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2ef3ac:
    // 0x2ef3ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ef3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef3b0:
    // 0x2ef3b0: 0x3c0f809  jalr        $fp
label_2ef3b4:
    if (ctx->pc == 0x2EF3B4u) {
        ctx->pc = 0x2EF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3B0u;
        // 0x2ef3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3B8u;
        goto label_2ef3b8;
    }
    ctx->pc = 0x2EF3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF3B8u);
        ctx->pc = 0x2EF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3B0u;
        // 0x2ef3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF3B0u, 0x2EF3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF3B8u;
label_2ef3b8:
    // 0x2ef3b8: 0x5c40ffd7  bgtzl       $v0, . + 4 + (-0x29 << 2)
label_2ef3bc:
    if (ctx->pc == 0x2EF3BCu) {
        ctx->pc = 0x2EF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3B8u;
        // 0x2ef3bc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3C0u;
        goto label_2ef3c0;
    }
    ctx->pc = 0x2EF3B8u;
    {
        const bool branch_taken_0x2ef3b8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ef3b8) {
            ctx->pc = 0x2EF3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF3B8u;
            // 0x2ef3bc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef318;
        }
    }
    ctx->pc = 0x2EF3C0u;
label_2ef3c0:
    // 0x2ef3c0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2ef3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2ef3c4:
    // 0x2ef3c4: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x2ef3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_2ef3c8:
    // 0x2ef3c8: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2ef3c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ef3cc:
    // 0x2ef3cc: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_2ef3d0:
    if (ctx->pc == 0x2EF3D0u) {
        ctx->pc = 0x2EF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3CCu;
        // 0x2ef3d0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3D4u;
        goto label_2ef3d4;
    }
    ctx->pc = 0x2EF3CCu;
    {
        const bool branch_taken_0x2ef3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef3cc) {
            ctx->pc = 0x2EF3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF3CCu;
            // 0x2ef3d0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF39Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef39c;
        }
    }
    ctx->pc = 0x2EF3D4u;
label_2ef3d4:
    // 0x2ef3d4: 0x10000216  b           . + 4 + (0x216 << 2)
label_2ef3d8:
    if (ctx->pc == 0x2EF3D8u) {
        ctx->pc = 0x2EF3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3D4u;
        // 0x2ef3d8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3DCu;
        goto label_2ef3dc;
    }
    ctx->pc = 0x2EF3D4u;
    {
        const bool branch_taken_0x2ef3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3D4u;
        // 0x2ef3d8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3d4) {
            ctx->pc = 0x2EFC30u;
            goto label_2efc30;
        }
    }
    ctx->pc = 0x2EF3DCu;
label_2ef3dc:
    // 0x2ef3dc: 0x0  nop
    ctx->pc = 0x2ef3dcu;
    // NOP
label_2ef3e0:
    // 0x2ef3e0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ef3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef3e4:
    // 0x2ef3e4: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x2ef3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2ef3e8:
    // 0x2ef3e8: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x2ef3e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2ef3ec:
    // 0x2ef3ec: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x2ef3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2ef3f0:
    // 0x2ef3f0: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
label_2ef3f4:
    if (ctx->pc == 0x2EF3F4u) {
        ctx->pc = 0x2EF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3F0u;
        // 0x2ef3f4: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3F8u;
        goto label_2ef3f8;
    }
    ctx->pc = 0x2EF3F0u;
    {
        const bool branch_taken_0x2ef3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3F0u;
        // 0x2ef3f4: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3f0) {
            ctx->pc = 0x2EF630u;
            goto label_2ef630;
        }
    }
    ctx->pc = 0x2EF3F8u;
label_2ef3f8:
    // 0x2ef3f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ef3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef3fc:
    // 0x2ef3fc: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2ef3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef400:
    // 0x2ef400: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ef400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef404:
    // 0x2ef404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ef404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ef408:
    // 0x2ef408: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2ef408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ef40c:
    // 0x2ef40c: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x2ef40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_2ef410:
    // 0x2ef410: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ef410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ef414:
    // 0x2ef414: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x2ef414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2ef418:
    // 0x2ef418: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_2ef41c:
    if (ctx->pc == 0x2EF41Cu) {
        ctx->pc = 0x2EF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF418u;
        // 0x2ef41c: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF420u;
        goto label_2ef420;
    }
    ctx->pc = 0x2EF418u;
    {
        const bool branch_taken_0x2ef418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF418u;
        // 0x2ef41c: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef418) {
            ctx->pc = 0x2EF5B0u;
            goto label_2ef5b0;
        }
    }
    ctx->pc = 0x2EF420u;
label_2ef420:
    // 0x2ef420: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ef420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef424:
    // 0x2ef424: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x2ef424u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_2ef428:
    // 0x2ef428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ef428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef42c:
    // 0x2ef42c: 0x54b818  mult        $s7, $v0, $s4
    ctx->pc = 0x2ef42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_2ef430:
    // 0x2ef430: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x2ef430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_2ef434:
    // 0x2ef434: 0x2d78021  addu        $s0, $s6, $s7
    ctx->pc = 0x2ef434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_2ef438:
    // 0x2ef438: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2ef438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2ef43c:
    // 0x2ef43c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ef43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef440:
    // 0x2ef440: 0x3c0f809  jalr        $fp
label_2ef444:
    if (ctx->pc == 0x2EF444u) {
        ctx->pc = 0x2EF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF440u;
        // 0x2ef444: 0x568821  addu        $s1, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF448u;
        goto label_2ef448;
    }
    ctx->pc = 0x2EF440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF448u);
        ctx->pc = 0x2EF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF440u;
        // 0x2ef444: 0x568821  addu        $s1, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF440u, 0x2EF448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF448u;
label_2ef448:
    // 0x2ef448: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_2ef44c:
    if (ctx->pc == 0x2EF44Cu) {
        ctx->pc = 0x2EF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF448u;
        // 0x2ef44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF450u;
        goto label_2ef450;
    }
    ctx->pc = 0x2EF448u;
    {
        const bool branch_taken_0x2ef448 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF448u;
        // 0x2ef44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef448) {
            ctx->pc = 0x2EF478u;
            goto label_2ef478;
        }
    }
    ctx->pc = 0x2EF450u;
label_2ef450:
    // 0x2ef450: 0x3c0f809  jalr        $fp
label_2ef454:
    if (ctx->pc == 0x2EF454u) {
        ctx->pc = 0x2EF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF450u;
        // 0x2ef454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF458u;
        goto label_2ef458;
    }
    ctx->pc = 0x2EF450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF458u);
        ctx->pc = 0x2EF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF450u;
        // 0x2ef454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF450u, 0x2EF458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF458u;
label_2ef458:
    // 0x2ef458: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_2ef45c:
    if (ctx->pc == 0x2EF45Cu) {
        ctx->pc = 0x2EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF458u;
        // 0x2ef45c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF460u;
        goto label_2ef460;
    }
    ctx->pc = 0x2EF458u;
    {
        const bool branch_taken_0x2ef458 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF458u;
        // 0x2ef45c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef458) {
            ctx->pc = 0x2EF4A8u;
            goto label_2ef4a8;
        }
    }
    ctx->pc = 0x2EF460u;
label_2ef460:
    // 0x2ef460: 0x3c0f809  jalr        $fp
label_2ef464:
    if (ctx->pc == 0x2EF464u) {
        ctx->pc = 0x2EF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF460u;
        // 0x2ef464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF468u;
        goto label_2ef468;
    }
    ctx->pc = 0x2EF460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF468u);
        ctx->pc = 0x2EF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF460u;
        // 0x2ef464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF460u, 0x2EF468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF468u;
label_2ef468:
    // 0x2ef468: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2ef468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef46c:
    // 0x2ef46c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef470:
    // 0x2ef470: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ef474:
    if (ctx->pc == 0x2EF474u) {
        ctx->pc = 0x2EF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF470u;
        // 0x2ef474: 0x2c2180a  movz        $v1, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF478u;
        goto label_2ef478;
    }
    ctx->pc = 0x2EF470u;
    {
        const bool branch_taken_0x2ef470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF470u;
        // 0x2ef474: 0x2c2180a  movz        $v1, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef470) {
            ctx->pc = 0x2EF4ACu;
            goto label_2ef4ac;
        }
    }
    ctx->pc = 0x2EF478u;
label_2ef478:
    // 0x2ef478: 0x3c0f809  jalr        $fp
label_2ef47c:
    if (ctx->pc == 0x2EF47Cu) {
        ctx->pc = 0x2EF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF478u;
        // 0x2ef47c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF480u;
        goto label_2ef480;
    }
    ctx->pc = 0x2EF478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF480u);
        ctx->pc = 0x2EF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF478u;
        // 0x2ef47c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF478u, 0x2EF480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF480u;
label_2ef480:
    // 0x2ef480: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_2ef484:
    if (ctx->pc == 0x2EF484u) {
        ctx->pc = 0x2EF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF480u;
        // 0x2ef484: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF488u;
        goto label_2ef488;
    }
    ctx->pc = 0x2EF480u;
    {
        const bool branch_taken_0x2ef480 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF480u;
        // 0x2ef484: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef480) {
            ctx->pc = 0x2EF4ACu;
            goto label_2ef4ac;
        }
    }
    ctx->pc = 0x2EF488u;
label_2ef488:
    // 0x2ef488: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ef488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef48c:
    // 0x2ef48c: 0x3c0f809  jalr        $fp
label_2ef490:
    if (ctx->pc == 0x2EF490u) {
        ctx->pc = 0x2EF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF48Cu;
        // 0x2ef490: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF494u;
        goto label_2ef494;
    }
    ctx->pc = 0x2EF48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF494u);
        ctx->pc = 0x2EF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF48Cu;
        // 0x2ef490: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF48Cu, 0x2EF494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF494u;
label_2ef494:
    // 0x2ef494: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x2ef494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef498:
    // 0x2ef498: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef49c:
    // 0x2ef49c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ef4a0:
    if (ctx->pc == 0x2EF4A0u) {
        ctx->pc = 0x2EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF49Cu;
        // 0x2ef4a0: 0x222180a  movz        $v1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4A4u;
        goto label_2ef4a4;
    }
    ctx->pc = 0x2EF49Cu;
    {
        const bool branch_taken_0x2ef49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF49Cu;
        // 0x2ef4a0: 0x222180a  movz        $v1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef49c) {
            ctx->pc = 0x2EF4ACu;
            goto label_2ef4ac;
        }
    }
    ctx->pc = 0x2EF4A4u;
label_2ef4a4:
    // 0x2ef4a4: 0x0  nop
    ctx->pc = 0x2ef4a4u;
    // NOP
label_2ef4a8:
    // 0x2ef4a8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2ef4a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef4ac:
    // 0x2ef4ac: 0x2779023  subu        $s2, $s3, $s7
    ctx->pc = 0x2ef4acu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_2ef4b0:
    // 0x2ef4b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef4b4:
    // 0x2ef4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef4b8:
    // 0x2ef4b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ef4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ef4bc:
    // 0x2ef4bc: 0x3c0f809  jalr        $fp
label_2ef4c0:
    if (ctx->pc == 0x2EF4C0u) {
        ctx->pc = 0x2EF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4BCu;
        // 0x2ef4c0: 0x2778821  addu        $s1, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4C4u;
        goto label_2ef4c4;
    }
    ctx->pc = 0x2EF4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF4C4u);
        ctx->pc = 0x2EF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4BCu;
        // 0x2ef4c0: 0x2778821  addu        $s1, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF4BCu, 0x2EF4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF4C4u;
label_2ef4c4:
    // 0x2ef4c4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_2ef4c8:
    if (ctx->pc == 0x2EF4C8u) {
        ctx->pc = 0x2EF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4C4u;
        // 0x2ef4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4CCu;
        goto label_2ef4cc;
    }
    ctx->pc = 0x2EF4C4u;
    {
        const bool branch_taken_0x2ef4c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4C4u;
        // 0x2ef4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4c4) {
            ctx->pc = 0x2EF4F8u;
            goto label_2ef4f8;
        }
    }
    ctx->pc = 0x2EF4CCu;
label_2ef4cc:
    // 0x2ef4cc: 0x3c0f809  jalr        $fp
label_2ef4d0:
    if (ctx->pc == 0x2EF4D0u) {
        ctx->pc = 0x2EF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4CCu;
        // 0x2ef4d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4D4u;
        goto label_2ef4d4;
    }
    ctx->pc = 0x2EF4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF4D4u);
        ctx->pc = 0x2EF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4CCu;
        // 0x2ef4d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF4CCu, 0x2EF4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF4D4u;
label_2ef4d4:
    // 0x2ef4d4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_2ef4d8:
    if (ctx->pc == 0x2EF4D8u) {
        ctx->pc = 0x2EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D4u;
        // 0x2ef4d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4DCu;
        goto label_2ef4dc;
    }
    ctx->pc = 0x2EF4D4u;
    {
        const bool branch_taken_0x2ef4d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D4u;
        // 0x2ef4d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4d4) {
            ctx->pc = 0x2EF528u;
            goto label_2ef528;
        }
    }
    ctx->pc = 0x2EF4DCu;
label_2ef4dc:
    // 0x2ef4dc: 0x3c0f809  jalr        $fp
label_2ef4e0:
    if (ctx->pc == 0x2EF4E0u) {
        ctx->pc = 0x2EF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4DCu;
        // 0x2ef4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4E4u;
        goto label_2ef4e4;
    }
    ctx->pc = 0x2EF4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF4E4u);
        ctx->pc = 0x2EF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4DCu;
        // 0x2ef4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF4DCu, 0x2EF4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF4E4u;
label_2ef4e4:
    // 0x2ef4e4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef4e8:
    // 0x2ef4e8: 0x242880a  movz        $s1, $s2, $v0
    ctx->pc = 0x2ef4e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_2ef4ec:
    // 0x2ef4ec: 0x1000000f  b           . + 4 + (0xF << 2)
label_2ef4f0:
    if (ctx->pc == 0x2EF4F0u) {
        ctx->pc = 0x2EF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4ECu;
        // 0x2ef4f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4F4u;
        goto label_2ef4f4;
    }
    ctx->pc = 0x2EF4ECu;
    {
        const bool branch_taken_0x2ef4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4ECu;
        // 0x2ef4f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4ec) {
            ctx->pc = 0x2EF52Cu;
            goto label_2ef52c;
        }
    }
    ctx->pc = 0x2EF4F4u;
label_2ef4f4:
    // 0x2ef4f4: 0x0  nop
    ctx->pc = 0x2ef4f4u;
    // NOP
label_2ef4f8:
    // 0x2ef4f8: 0x3c0f809  jalr        $fp
label_2ef4fc:
    if (ctx->pc == 0x2EF4FCu) {
        ctx->pc = 0x2EF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4F8u;
        // 0x2ef4fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF500u;
        goto label_2ef500;
    }
    ctx->pc = 0x2EF4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF500u);
        ctx->pc = 0x2EF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4F8u;
        // 0x2ef4fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF4F8u, 0x2EF500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF500u;
label_2ef500:
    // 0x2ef500: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_2ef504:
    if (ctx->pc == 0x2EF504u) {
        ctx->pc = 0x2EF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF500u;
        // 0x2ef504: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF508u;
        goto label_2ef508;
    }
    ctx->pc = 0x2EF500u;
    {
        const bool branch_taken_0x2ef500 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ef500) {
            ctx->pc = 0x2EF504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF500u;
            // 0x2ef504: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF52Cu;
            goto label_2ef52c;
        }
    }
    ctx->pc = 0x2EF508u;
label_2ef508:
    // 0x2ef508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef50c:
    // 0x2ef50c: 0x3c0f809  jalr        $fp
label_2ef510:
    if (ctx->pc == 0x2EF510u) {
        ctx->pc = 0x2EF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF50Cu;
        // 0x2ef510: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF514u;
        goto label_2ef514;
    }
    ctx->pc = 0x2EF50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF514u);
        ctx->pc = 0x2EF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF50Cu;
        // 0x2ef510: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF50Cu, 0x2EF514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF514u;
label_2ef514:
    // 0x2ef514: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef518:
    // 0x2ef518: 0x222900a  movz        $s2, $s1, $v0
    ctx->pc = 0x2ef518u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
label_2ef51c:
    // 0x2ef51c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ef520:
    if (ctx->pc == 0x2EF520u) {
        ctx->pc = 0x2EF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF51Cu;
        // 0x2ef520: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF524u;
        goto label_2ef524;
    }
    ctx->pc = 0x2EF51Cu;
    {
        const bool branch_taken_0x2ef51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF51Cu;
        // 0x2ef520: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef51c) {
            ctx->pc = 0x2EF52Cu;
            goto label_2ef52c;
        }
    }
    ctx->pc = 0x2EF524u;
label_2ef524:
    // 0x2ef524: 0x0  nop
    ctx->pc = 0x2ef524u;
    // NOP
label_2ef528:
    // 0x2ef528: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ef528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef52c:
    // 0x2ef52c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ef52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef530:
    // 0x2ef530: 0x2b78823  subu        $s1, $s5, $s7
    ctx->pc = 0x2ef530u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_2ef534:
    // 0x2ef534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ef534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef538:
    // 0x2ef538: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ef538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef53c:
    // 0x2ef53c: 0x2a39023  subu        $s2, $s5, $v1
    ctx->pc = 0x2ef53cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2ef540:
    // 0x2ef540: 0x3c0f809  jalr        $fp
label_2ef544:
    if (ctx->pc == 0x2EF544u) {
        ctx->pc = 0x2EF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF540u;
        // 0x2ef544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF548u;
        goto label_2ef548;
    }
    ctx->pc = 0x2EF540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF548u);
        ctx->pc = 0x2EF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF540u;
        // 0x2ef544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF540u, 0x2EF548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF548u;
label_2ef548:
    // 0x2ef548: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_2ef54c:
    if (ctx->pc == 0x2EF54Cu) {
        ctx->pc = 0x2EF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF548u;
        // 0x2ef54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF550u;
        goto label_2ef550;
    }
    ctx->pc = 0x2EF548u;
    {
        const bool branch_taken_0x2ef548 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF548u;
        // 0x2ef54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef548) {
            ctx->pc = 0x2EF578u;
            goto label_2ef578;
        }
    }
    ctx->pc = 0x2EF550u;
label_2ef550:
    // 0x2ef550: 0x3c0f809  jalr        $fp
label_2ef554:
    if (ctx->pc == 0x2EF554u) {
        ctx->pc = 0x2EF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF550u;
        // 0x2ef554: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF558u;
        goto label_2ef558;
    }
    ctx->pc = 0x2EF550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF558u);
        ctx->pc = 0x2EF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF550u;
        // 0x2ef554: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF550u, 0x2EF558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF558u;
label_2ef558:
    // 0x2ef558: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_2ef55c:
    if (ctx->pc == 0x2EF55Cu) {
        ctx->pc = 0x2EF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF558u;
        // 0x2ef55c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF560u;
        goto label_2ef560;
    }
    ctx->pc = 0x2EF558u;
    {
        const bool branch_taken_0x2ef558 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF558u;
        // 0x2ef55c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef558) {
            ctx->pc = 0x2EF5A8u;
            goto label_2ef5a8;
        }
    }
    ctx->pc = 0x2EF560u;
label_2ef560:
    // 0x2ef560: 0x3c0f809  jalr        $fp
label_2ef564:
    if (ctx->pc == 0x2EF564u) {
        ctx->pc = 0x2EF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF560u;
        // 0x2ef564: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF568u;
        goto label_2ef568;
    }
    ctx->pc = 0x2EF560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF568u);
        ctx->pc = 0x2EF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF560u;
        // 0x2ef564: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF560u, 0x2EF568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF568u;
label_2ef568:
    // 0x2ef568: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef56c:
    // 0x2ef56c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef570:
    // 0x2ef570: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ef574:
    if (ctx->pc == 0x2EF574u) {
        ctx->pc = 0x2EF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF570u;
        // 0x2ef574: 0x242200a  movz        $a0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF578u;
        goto label_2ef578;
    }
    ctx->pc = 0x2EF570u;
    {
        const bool branch_taken_0x2ef570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF570u;
        // 0x2ef574: 0x242200a  movz        $a0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef570) {
            ctx->pc = 0x2EF5ACu;
            goto label_2ef5ac;
        }
    }
    ctx->pc = 0x2EF578u;
label_2ef578:
    // 0x2ef578: 0x3c0f809  jalr        $fp
label_2ef57c:
    if (ctx->pc == 0x2EF57Cu) {
        ctx->pc = 0x2EF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF578u;
        // 0x2ef57c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF580u;
        goto label_2ef580;
    }
    ctx->pc = 0x2EF578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF580u);
        ctx->pc = 0x2EF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF578u;
        // 0x2ef57c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF578u, 0x2EF580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF580u;
label_2ef580:
    // 0x2ef580: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_2ef584:
    if (ctx->pc == 0x2EF584u) {
        ctx->pc = 0x2EF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF580u;
        // 0x2ef584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF588u;
        goto label_2ef588;
    }
    ctx->pc = 0x2EF580u;
    {
        const bool branch_taken_0x2ef580 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF580u;
        // 0x2ef584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef580) {
            ctx->pc = 0x2EF5ACu;
            goto label_2ef5ac;
        }
    }
    ctx->pc = 0x2EF588u;
label_2ef588:
    // 0x2ef588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef58c:
    // 0x2ef58c: 0x3c0f809  jalr        $fp
label_2ef590:
    if (ctx->pc == 0x2EF590u) {
        ctx->pc = 0x2EF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF58Cu;
        // 0x2ef590: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF594u;
        goto label_2ef594;
    }
    ctx->pc = 0x2EF58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF594u);
        ctx->pc = 0x2EF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF58Cu;
        // 0x2ef590: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF58Cu, 0x2EF594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF594u;
label_2ef594:
    // 0x2ef594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef598:
    // 0x2ef598: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef59c:
    // 0x2ef59c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ef5a0:
    if (ctx->pc == 0x2EF5A0u) {
        ctx->pc = 0x2EF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF59Cu;
        // 0x2ef5a0: 0x2a2200a  movz        $a0, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5A4u;
        goto label_2ef5a4;
    }
    ctx->pc = 0x2EF59Cu;
    {
        const bool branch_taken_0x2ef59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF59Cu;
        // 0x2ef5a0: 0x2a2200a  movz        $a0, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef59c) {
            ctx->pc = 0x2EF5ACu;
            goto label_2ef5ac;
        }
    }
    ctx->pc = 0x2EF5A4u;
label_2ef5a4:
    // 0x2ef5a4: 0x0  nop
    ctx->pc = 0x2ef5a4u;
    // NOP
label_2ef5a8:
    // 0x2ef5a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5ac:
    // 0x2ef5ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ef5acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5b0:
    // 0x2ef5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5b4:
    // 0x2ef5b4: 0x3c0f809  jalr        $fp
label_2ef5b8:
    if (ctx->pc == 0x2EF5B8u) {
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5B4u;
        // 0x2ef5b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5BCu;
        goto label_2ef5bc;
    }
    ctx->pc = 0x2EF5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF5BCu);
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5B4u;
        // 0x2ef5b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF5B4u, 0x2EF5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF5BCu;
label_2ef5bc:
    // 0x2ef5bc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_2ef5c0:
    if (ctx->pc == 0x2EF5C0u) {
        ctx->pc = 0x2EF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5BCu;
        // 0x2ef5c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5C4u;
        goto label_2ef5c4;
    }
    ctx->pc = 0x2EF5BCu;
    {
        const bool branch_taken_0x2ef5bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5BCu;
        // 0x2ef5c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5bc) {
            ctx->pc = 0x2EF5F0u;
            goto label_2ef5f0;
        }
    }
    ctx->pc = 0x2EF5C4u;
label_2ef5c4:
    // 0x2ef5c4: 0x3c0f809  jalr        $fp
label_2ef5c8:
    if (ctx->pc == 0x2EF5C8u) {
        ctx->pc = 0x2EF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5C4u;
        // 0x2ef5c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5CCu;
        goto label_2ef5cc;
    }
    ctx->pc = 0x2EF5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF5CCu);
        ctx->pc = 0x2EF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5C4u;
        // 0x2ef5c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF5C4u, 0x2EF5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF5CCu;
label_2ef5cc:
    // 0x2ef5cc: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_2ef5d0:
    if (ctx->pc == 0x2EF5D0u) {
        ctx->pc = 0x2EF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5CCu;
        // 0x2ef5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5D4u;
        goto label_2ef5d4;
    }
    ctx->pc = 0x2EF5CCu;
    {
        const bool branch_taken_0x2ef5cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5CCu;
        // 0x2ef5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5cc) {
            ctx->pc = 0x2EF620u;
            goto label_2ef620;
        }
    }
    ctx->pc = 0x2EF5D4u;
label_2ef5d4:
    // 0x2ef5d4: 0x3c0f809  jalr        $fp
label_2ef5d8:
    if (ctx->pc == 0x2EF5D8u) {
        ctx->pc = 0x2EF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5D4u;
        // 0x2ef5d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5DCu;
        goto label_2ef5dc;
    }
    ctx->pc = 0x2EF5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF5DCu);
        ctx->pc = 0x2EF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5D4u;
        // 0x2ef5d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF5D4u, 0x2EF5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF5DCu;
label_2ef5dc:
    // 0x2ef5dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5e0:
    // 0x2ef5e0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef5e4:
    // 0x2ef5e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2ef5e8:
    if (ctx->pc == 0x2EF5E8u) {
        ctx->pc = 0x2EF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5E4u;
        // 0x2ef5e8: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5ECu;
        goto label_2ef5ec;
    }
    ctx->pc = 0x2EF5E4u;
    {
        const bool branch_taken_0x2ef5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5E4u;
        // 0x2ef5e8: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5e4) {
            ctx->pc = 0x2EF624u;
            goto label_2ef624;
        }
    }
    ctx->pc = 0x2EF5ECu;
label_2ef5ec:
    // 0x2ef5ec: 0x0  nop
    ctx->pc = 0x2ef5ecu;
    // NOP
label_2ef5f0:
    // 0x2ef5f0: 0x3c0f809  jalr        $fp
label_2ef5f4:
    if (ctx->pc == 0x2EF5F4u) {
        ctx->pc = 0x2EF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5F0u;
        // 0x2ef5f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5F8u;
        goto label_2ef5f8;
    }
    ctx->pc = 0x2EF5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF5F8u);
        ctx->pc = 0x2EF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5F0u;
        // 0x2ef5f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF5F0u, 0x2EF5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF5F8u;
label_2ef5f8:
    // 0x2ef5f8: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_2ef5fc:
    if (ctx->pc == 0x2EF5FCu) {
        ctx->pc = 0x2EF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5F8u;
        // 0x2ef5fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF600u;
        goto label_2ef600;
    }
    ctx->pc = 0x2EF5F8u;
    {
        const bool branch_taken_0x2ef5f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5F8u;
        // 0x2ef5fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5f8) {
            ctx->pc = 0x2EF624u;
            goto label_2ef624;
        }
    }
    ctx->pc = 0x2EF600u;
label_2ef600:
    // 0x2ef600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef604:
    // 0x2ef604: 0x3c0f809  jalr        $fp
label_2ef608:
    if (ctx->pc == 0x2EF608u) {
        ctx->pc = 0x2EF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF604u;
        // 0x2ef608: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF60Cu;
        goto label_2ef60c;
    }
    ctx->pc = 0x2EF604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF60Cu);
        ctx->pc = 0x2EF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF604u;
        // 0x2ef608: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF604u, 0x2EF60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF60Cu;
label_2ef60c:
    // 0x2ef60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef610:
    // 0x2ef610: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ef610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef614:
    // 0x2ef614: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ef618:
    if (ctx->pc == 0x2EF618u) {
        ctx->pc = 0x2EF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF614u;
        // 0x2ef618: 0x2a2200a  movz        $a0, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF61Cu;
        goto label_2ef61c;
    }
    ctx->pc = 0x2EF614u;
    {
        const bool branch_taken_0x2ef614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF614u;
        // 0x2ef618: 0x2a2200a  movz        $a0, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef614) {
            ctx->pc = 0x2EF624u;
            goto label_2ef624;
        }
    }
    ctx->pc = 0x2EF61Cu;
label_2ef61c:
    // 0x2ef61c: 0x0  nop
    ctx->pc = 0x2ef61cu;
    // NOP
label_2ef620:
    // 0x2ef620: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef624:
    // 0x2ef624: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ef628:
    if (ctx->pc == 0x2EF628u) {
        ctx->pc = 0x2EF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF624u;
        // 0x2ef628: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF62Cu;
        goto label_2ef62c;
    }
    ctx->pc = 0x2EF624u;
    {
        const bool branch_taken_0x2ef624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF624u;
        // 0x2ef628: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef624) {
            ctx->pc = 0x2EF63Cu;
            goto label_2ef63c;
        }
    }
    ctx->pc = 0x2EF62Cu;
label_2ef62c:
    // 0x2ef62c: 0x0  nop
    ctx->pc = 0x2ef62cu;
    // NOP
label_2ef630:
    // 0x2ef630: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ef630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef634:
    // 0x2ef634: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ef634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2ef638:
    // 0x2ef638: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ef638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2ef63c:
    // 0x2ef63c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ef63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef640:
    // 0x2ef640: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ef644:
    if (ctx->pc == 0x2EF644u) {
        ctx->pc = 0x2EF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF640u;
        // 0x2ef644: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF648u;
        goto label_2ef648;
    }
    ctx->pc = 0x2EF640u;
    {
        const bool branch_taken_0x2ef640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF640u;
        // 0x2ef644: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef640) {
            ctx->pc = 0x2EF660u;
            goto label_2ef660;
        }
    }
    ctx->pc = 0x2EF648u;
label_2ef648:
    // 0x2ef648: 0xdec30000  ld          $v1, 0x0($s6)
    ctx->pc = 0x2ef648u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_2ef64c:
    // 0x2ef64c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x2ef64cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_2ef650:
    // 0x2ef650: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x2ef650u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
label_2ef654:
    // 0x2ef654: 0x10000020  b           . + 4 + (0x20 << 2)
label_2ef658:
    if (ctx->pc == 0x2EF658u) {
        ctx->pc = 0x2EF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF654u;
        // 0x2ef658: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF65Cu;
        goto label_2ef65c;
    }
    ctx->pc = 0x2EF654u;
    {
        const bool branch_taken_0x2ef654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF654u;
        // 0x2ef658: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef654) {
            ctx->pc = 0x2EF6D8u;
            goto label_2ef6d8;
        }
    }
    ctx->pc = 0x2EF65Cu;
label_2ef65c:
    // 0x2ef65c: 0x0  nop
    ctx->pc = 0x2ef65cu;
    // NOP
label_2ef660:
    // 0x2ef660: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2ef660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ef664:
    // 0x2ef664: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2ef668:
    if (ctx->pc == 0x2EF668u) {
        ctx->pc = 0x2EF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF664u;
        // 0x2ef668: 0x14103c  dsll32      $v0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF66Cu;
        goto label_2ef66c;
    }
    ctx->pc = 0x2EF664u;
    {
        const bool branch_taken_0x2ef664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF664u;
        // 0x2ef668: 0x14103c  dsll32      $v0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef664) {
            ctx->pc = 0x2EF6A8u;
            goto label_2ef6a8;
        }
    }
    ctx->pc = 0x2EF66Cu;
label_2ef66c:
    // 0x2ef66c: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x2ef66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_2ef670:
    // 0x2ef670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef674:
    // 0x2ef674: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ef678:
    // 0x2ef678: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ef678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef67c:
    // 0x2ef67c: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x2ef67cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_2ef680:
    // 0x2ef680: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2ef680u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2ef684:
    // 0x2ef684: 0x64e7ffff  daddiu      $a3, $a3, -0x1
    ctx->pc = 0x2ef684u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
label_2ef688:
    // 0x2ef688: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2ef688u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef68c:
    // 0x2ef68c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2ef68cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_2ef690:
    // 0x2ef690: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2ef690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2ef694:
    // 0x2ef694: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2ef694u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2ef698:
    // 0x2ef698: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
label_2ef69c:
    if (ctx->pc == 0x2EF69Cu) {
        ctx->pc = 0x2EF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF698u;
        // 0x2ef69c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6A0u;
        goto label_2ef6a0;
    }
    ctx->pc = 0x2EF698u;
    {
        const bool branch_taken_0x2ef698 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2EF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF698u;
        // 0x2ef69c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef698) {
            ctx->pc = 0x2EF680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef680;
        }
    }
    ctx->pc = 0x2EF6A0u;
label_2ef6a0:
    // 0x2ef6a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ef6a4:
    if (ctx->pc == 0x2EF6A4u) {
        ctx->pc = 0x2EF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6A0u;
        // 0x2ef6a4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6A8u;
        goto label_2ef6a8;
    }
    ctx->pc = 0x2EF6A0u;
    {
        const bool branch_taken_0x2ef6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6A0u;
        // 0x2ef6a4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6a0) {
            ctx->pc = 0x2EF6DCu;
            goto label_2ef6dc;
        }
    }
    ctx->pc = 0x2EF6A8u;
label_2ef6a8:
    // 0x2ef6a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef6ac:
    // 0x2ef6ac: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x2ef6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_2ef6b0:
    // 0x2ef6b0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ef6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef6b4:
    // 0x2ef6b4: 0x0  nop
    ctx->pc = 0x2ef6b4u;
    // NOP
label_2ef6b8:
    // 0x2ef6b8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2ef6b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2ef6bc:
    // 0x2ef6bc: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2ef6bcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2ef6c0:
    // 0x2ef6c0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2ef6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef6c4:
    // 0x2ef6c4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2ef6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ef6c8:
    // 0x2ef6c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ef6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2ef6cc:
    // 0x2ef6cc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2ef6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ef6d0:
    // 0x2ef6d0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2ef6d4:
    if (ctx->pc == 0x2EF6D4u) {
        ctx->pc = 0x2EF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6D0u;
        // 0x2ef6d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6D8u;
        goto label_2ef6d8;
    }
    ctx->pc = 0x2EF6D0u;
    {
        const bool branch_taken_0x2ef6d0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6D0u;
        // 0x2ef6d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6d0) {
            ctx->pc = 0x2EF6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef6b8;
        }
    }
    ctx->pc = 0x2EF6D8u;
label_2ef6d8:
    // 0x2ef6d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ef6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ef6dc:
    // 0x2ef6dc: 0x2d48821  addu        $s1, $s6, $s4
    ctx->pc = 0x2ef6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_2ef6e0:
    // 0x2ef6e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ef6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef6e4:
    // 0x2ef6e4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2ef6e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef6e8:
    // 0x2ef6e8: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2ef6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2ef6ec:
    // 0x2ef6ec: 0x14483c  dsll32      $t1, $s4, 0
    ctx->pc = 0x2ef6ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 0));
label_2ef6f0:
    // 0x2ef6f0: 0x286a0002  slti        $t2, $v1, 0x2
    ctx->pc = 0x2ef6f0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ef6f4:
    // 0x2ef6f4: 0xafb1001c  sw          $s1, 0x1C($sp)
    ctx->pc = 0x2ef6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 17));
label_2ef6f8:
    // 0x2ef6f8: 0x569821  addu        $s3, $v0, $s6
    ctx->pc = 0x2ef6f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2ef6fc:
    // 0x2ef6fc: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x2ef6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_2ef700:
    // 0x2ef700: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x2ef700u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
label_2ef704:
    // 0x2ef704: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2ef708:
    if (ctx->pc == 0x2EF708u) {
        ctx->pc = 0x2EF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF704u;
        // 0x2ef708: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF70Cu;
        goto label_2ef70c;
    }
    ctx->pc = 0x2EF704u;
    {
        const bool branch_taken_0x2ef704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF704u;
        // 0x2ef708: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef704) {
            ctx->pc = 0x2EF7B0u;
            goto label_2ef7b0;
        }
    }
    ctx->pc = 0x2EF70Cu;
label_2ef70c:
    // 0x2ef70c: 0x0  nop
    ctx->pc = 0x2ef70cu;
    // NOP
label_2ef710:
    // 0x2ef710: 0x54a00027  bnel        $a1, $zero, . + 4 + (0x27 << 2)
label_2ef714:
    if (ctx->pc == 0x2EF714u) {
        ctx->pc = 0x2EF714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF710u;
        // 0x2ef714: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF718u;
        goto label_2ef718;
    }
    ctx->pc = 0x2EF710u;
    {
        const bool branch_taken_0x2ef710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef710) {
            ctx->pc = 0x2EF714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF710u;
            // 0x2ef714: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF7B0u;
            goto label_2ef7b0;
        }
    }
    ctx->pc = 0x2EF718u;
label_2ef718:
    // 0x2ef718: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ef718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef71c:
    // 0x2ef71c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ef71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef720:
    // 0x2ef720: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ef724:
    if (ctx->pc == 0x2EF724u) {
        ctx->pc = 0x2EF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF720u;
        // 0x2ef724: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF728u;
        goto label_2ef728;
    }
    ctx->pc = 0x2EF720u;
    {
        const bool branch_taken_0x2ef720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF720u;
        // 0x2ef724: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef720) {
            ctx->pc = 0x2EF740u;
            goto label_2ef740;
        }
    }
    ctx->pc = 0x2EF728u;
label_2ef728:
    // 0x2ef728: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x2ef728u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_2ef72c:
    // 0x2ef72c: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2ef72cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef730:
    // 0x2ef730: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x2ef730u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_2ef734:
    // 0x2ef734: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2ef738:
    if (ctx->pc == 0x2EF738u) {
        ctx->pc = 0x2EF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF734u;
        // 0x2ef738: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF73Cu;
        goto label_2ef73c;
    }
    ctx->pc = 0x2EF734u;
    {
        const bool branch_taken_0x2ef734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF734u;
        // 0x2ef738: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef734) {
            ctx->pc = 0x2EF7A8u;
            goto label_2ef7a8;
        }
    }
    ctx->pc = 0x2EF73Cu;
label_2ef73c:
    // 0x2ef73c: 0x0  nop
    ctx->pc = 0x2ef73cu;
    // NOP
label_2ef740:
    // 0x2ef740: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_2ef744:
    if (ctx->pc == 0x2EF744u) {
        ctx->pc = 0x2EF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF740u;
        // 0x2ef744: 0xb303e  dsrl32      $a2, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF748u;
        goto label_2ef748;
    }
    ctx->pc = 0x2EF740u;
    {
        const bool branch_taken_0x2ef740 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF740u;
        // 0x2ef744: 0xb303e  dsrl32      $a2, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef740) {
            ctx->pc = 0x2EF778u;
            goto label_2ef778;
        }
    }
    ctx->pc = 0x2EF748u;
label_2ef748:
    // 0x2ef748: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ef748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef74c:
    // 0x2ef74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef750:
    // 0x2ef750: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2ef750u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2ef754:
    // 0x2ef754: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x2ef754u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_2ef758:
    // 0x2ef758: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2ef758u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef75c:
    // 0x2ef75c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2ef75cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_2ef760:
    // 0x2ef760: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ef760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2ef764:
    // 0x2ef764: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2ef764u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2ef768:
    // 0x2ef768: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_2ef76c:
    if (ctx->pc == 0x2EF76Cu) {
        ctx->pc = 0x2EF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF768u;
        // 0x2ef76c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF770u;
        goto label_2ef770;
    }
    ctx->pc = 0x2EF768u;
    {
        const bool branch_taken_0x2ef768 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2EF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF768u;
        // 0x2ef76c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef768) {
            ctx->pc = 0x2EF750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef750;
        }
    }
    ctx->pc = 0x2EF770u;
label_2ef770:
    // 0x2ef770: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ef774:
    if (ctx->pc == 0x2EF774u) {
        ctx->pc = 0x2EF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF770u;
        // 0x2ef774: 0x2b4a821  addu        $s5, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF778u;
        goto label_2ef778;
    }
    ctx->pc = 0x2EF770u;
    {
        const bool branch_taken_0x2ef770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF770u;
        // 0x2ef774: 0x2b4a821  addu        $s5, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef770) {
            ctx->pc = 0x2EF7ACu;
            goto label_2ef7ac;
        }
    }
    ctx->pc = 0x2EF778u;
label_2ef778:
    // 0x2ef778: 0x9303e  dsrl32      $a2, $t1, 0
    ctx->pc = 0x2ef778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) >> (32 + 0));
label_2ef77c:
    // 0x2ef77c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ef77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef780:
    // 0x2ef780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef784:
    // 0x2ef784: 0x0  nop
    ctx->pc = 0x2ef784u;
    // NOP
label_2ef788:
    // 0x2ef788: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2ef788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2ef78c:
    // 0x2ef78c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x2ef78cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_2ef790:
    // 0x2ef790: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2ef790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef794:
    // 0x2ef794: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2ef794u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ef798:
    // 0x2ef798: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ef798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2ef79c:
    // 0x2ef79c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2ef79cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ef7a0:
    // 0x2ef7a0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_2ef7a4:
    if (ctx->pc == 0x2EF7A4u) {
        ctx->pc = 0x2EF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7A0u;
        // 0x2ef7a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF7A8u;
        goto label_2ef7a8;
    }
    ctx->pc = 0x2EF7A0u;
    {
        const bool branch_taken_0x2ef7a0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2EF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7A0u;
        // 0x2ef7a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7a0) {
            ctx->pc = 0x2EF788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef788;
        }
    }
    ctx->pc = 0x2EF7A8u;
label_2ef7a8:
    // 0x2ef7a8: 0x2b4a821  addu        $s5, $s5, $s4
    ctx->pc = 0x2ef7a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_2ef7ac:
    // 0x2ef7ac: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2ef7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_2ef7b0:
    // 0x2ef7b0: 0x251802b  sltu        $s0, $s2, $s1
    ctx->pc = 0x2ef7b0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2ef7b4:
    // 0x2ef7b4: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_2ef7b8:
    if (ctx->pc == 0x2EF7B8u) {
        ctx->pc = 0x2EF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7B4u;
        // 0x2ef7b8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF7BCu;
        goto label_2ef7bc;
    }
    ctx->pc = 0x2EF7B4u;
    {
        const bool branch_taken_0x2ef7b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7B4u;
        // 0x2ef7b8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7b4) {
            ctx->pc = 0x2EF7ECu;
            goto label_2ef7ec;
        }
    }
    ctx->pc = 0x2EF7BCu;
label_2ef7bc:
    // 0x2ef7bc: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x2ef7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_2ef7c0:
    // 0x2ef7c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ef7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef7c4:
    // 0x2ef7c4: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x2ef7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
label_2ef7c8:
    // 0x2ef7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef7cc:
    // 0x2ef7cc: 0x3c0f809  jalr        $fp
label_2ef7d0:
    if (ctx->pc == 0x2EF7D0u) {
        ctx->pc = 0x2EF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7CCu;
        // 0x2ef7d0: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF7D4u;
        goto label_2ef7d4;
    }
    ctx->pc = 0x2EF7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF7D4u);
        ctx->pc = 0x2EF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7CCu;
        // 0x2ef7d0: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF7CCu, 0x2EF7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF7D4u;
label_2ef7d4:
    // 0x2ef7d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ef7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef7d8:
    // 0x2ef7d8: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x2ef7d8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef7dc:
    // 0x2ef7dc: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x2ef7dcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef7e0:
    // 0x2ef7e0: 0x18a0ffcb  blez        $a1, . + 4 + (-0x35 << 2)
label_2ef7e4:
    if (ctx->pc == 0x2EF7E4u) {
        ctx->pc = 0x2EF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7E0u;
        // 0x2ef7e4: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF7E8u;
        goto label_2ef7e8;
    }
    ctx->pc = 0x2EF7E0u;
    {
        const bool branch_taken_0x2ef7e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2EF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7E0u;
        // 0x2ef7e4: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7e0) {
            ctx->pc = 0x2EF710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef710;
        }
    }
    ctx->pc = 0x2EF7E8u;
label_2ef7e8:
    // 0x2ef7e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ef7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef7ec:
    // 0x2ef7ec: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x2ef7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_2ef7f0:
    // 0x2ef7f0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ef7f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2ef7f4:
    // 0x2ef7f4: 0x14b83c  dsll32      $s7, $s4, 0
    ctx->pc = 0x2ef7f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) << (32 + 0));
label_2ef7f8:
    // 0x2ef7f8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2ef7fc:
    if (ctx->pc == 0x2EF7FCu) {
        ctx->pc = 0x2EF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7F8u;
        // 0x2ef7fc: 0x28680002  slti        $t0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF800u;
        goto label_2ef800;
    }
    ctx->pc = 0x2EF7F8u;
    {
        const bool branch_taken_0x2ef7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7F8u;
        // 0x2ef7fc: 0x28680002  slti        $t0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7f8) {
            ctx->pc = 0x2EF8A4u;
            goto label_2ef8a4;
        }
    }
    ctx->pc = 0x2EF800u;
label_2ef800:
    // 0x2ef800: 0x54a00027  bnel        $a1, $zero, . + 4 + (0x27 << 2)
label_2ef804:
    if (ctx->pc == 0x2EF804u) {
        ctx->pc = 0x2EF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF800u;
        // 0x2ef804: 0x2549023  subu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF808u;
        goto label_2ef808;
    }
    ctx->pc = 0x2EF800u;
    {
        const bool branch_taken_0x2ef800 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef800) {
            ctx->pc = 0x2EF804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF800u;
            // 0x2ef804: 0x2549023  subu        $s2, $s2, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF8A0u;
            goto label_2ef8a0;
        }
    }
    ctx->pc = 0x2EF808u;
label_2ef808:
    // 0x2ef808: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ef808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef80c:
    // 0x2ef80c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ef80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef810:
    // 0x2ef810: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ef814:
    if (ctx->pc == 0x2EF814u) {
        ctx->pc = 0x2EF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF810u;
        // 0x2ef814: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF818u;
        goto label_2ef818;
    }
    ctx->pc = 0x2EF810u;
    {
        const bool branch_taken_0x2ef810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF810u;
        // 0x2ef814: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef810) {
            ctx->pc = 0x2EF830u;
            goto label_2ef830;
        }
    }
    ctx->pc = 0x2EF818u;
label_2ef818:
    // 0x2ef818: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x2ef818u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef81c:
    // 0x2ef81c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x2ef81cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_2ef820:
    // 0x2ef820: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2ef820u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_2ef824:
    // 0x2ef824: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2ef828:
    if (ctx->pc == 0x2EF828u) {
        ctx->pc = 0x2EF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF824u;
        // 0x2ef828: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF82Cu;
        goto label_2ef82c;
    }
    ctx->pc = 0x2EF824u;
    {
        const bool branch_taken_0x2ef824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF824u;
        // 0x2ef828: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef824) {
            ctx->pc = 0x2EF898u;
            goto label_2ef898;
        }
    }
    ctx->pc = 0x2EF82Cu;
label_2ef82c:
    // 0x2ef82c: 0x0  nop
    ctx->pc = 0x2ef82cu;
    // NOP
label_2ef830:
    // 0x2ef830: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
label_2ef834:
    if (ctx->pc == 0x2EF834u) {
        ctx->pc = 0x2EF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF830u;
        // 0x2ef834: 0x7303e  dsrl32      $a2, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF838u;
        goto label_2ef838;
    }
    ctx->pc = 0x2EF830u;
    {
        const bool branch_taken_0x2ef830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF830u;
        // 0x2ef834: 0x7303e  dsrl32      $a2, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef830) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF838u;
label_2ef838:
    // 0x2ef838: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ef838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef83c:
    // 0x2ef83c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef840:
    // 0x2ef840: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2ef840u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2ef844:
    // 0x2ef844: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x2ef844u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_2ef848:
    // 0x2ef848: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2ef848u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef84c:
    // 0x2ef84c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2ef84cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_2ef850:
    // 0x2ef850: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ef850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2ef854:
    // 0x2ef854: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2ef854u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2ef858:
    // 0x2ef858: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_2ef85c:
    if (ctx->pc == 0x2EF85Cu) {
        ctx->pc = 0x2EF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF858u;
        // 0x2ef85c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF860u;
        goto label_2ef860;
    }
    ctx->pc = 0x2EF858u;
    {
        const bool branch_taken_0x2ef858 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2EF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF858u;
        // 0x2ef85c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef858) {
            ctx->pc = 0x2EF840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef840;
        }
    }
    ctx->pc = 0x2EF860u;
label_2ef860:
    // 0x2ef860: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ef864:
    if (ctx->pc == 0x2EF864u) {
        ctx->pc = 0x2EF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF860u;
        // 0x2ef864: 0x2749823  subu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF868u;
        goto label_2ef868;
    }
    ctx->pc = 0x2EF860u;
    {
        const bool branch_taken_0x2ef860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF860u;
        // 0x2ef864: 0x2749823  subu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef860) {
            ctx->pc = 0x2EF89Cu;
            goto label_2ef89c;
        }
    }
    ctx->pc = 0x2EF868u;
label_2ef868:
    // 0x2ef868: 0x17303e  dsrl32      $a2, $s7, 0
    ctx->pc = 0x2ef868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 0));
label_2ef86c:
    // 0x2ef86c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ef86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef870:
    // 0x2ef870: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef874:
    // 0x2ef874: 0x0  nop
    ctx->pc = 0x2ef874u;
    // NOP
label_2ef878:
    // 0x2ef878: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2ef878u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2ef87c:
    // 0x2ef87c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x2ef87cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_2ef880:
    // 0x2ef880: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2ef880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef884:
    // 0x2ef884: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2ef884u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ef888:
    // 0x2ef888: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ef888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2ef88c:
    // 0x2ef88c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2ef88cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ef890:
    // 0x2ef890: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_2ef894:
    if (ctx->pc == 0x2EF894u) {
        ctx->pc = 0x2EF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF890u;
        // 0x2ef894: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF898u;
        goto label_2ef898;
    }
    ctx->pc = 0x2EF890u;
    {
        const bool branch_taken_0x2ef890 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2EF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF890u;
        // 0x2ef894: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef890) {
            ctx->pc = 0x2EF878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef878;
        }
    }
    ctx->pc = 0x2EF898u;
label_2ef898:
    // 0x2ef898: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x2ef898u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_2ef89c:
    // 0x2ef89c: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x2ef89cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_2ef8a0:
    // 0x2ef8a0: 0x251802b  sltu        $s0, $s2, $s1
    ctx->pc = 0x2ef8a0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2ef8a4:
    // 0x2ef8a4: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
label_2ef8a8:
    if (ctx->pc == 0x2EF8A8u) {
        ctx->pc = 0x2EF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8A4u;
        // 0x2ef8a8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8ACu;
        goto label_2ef8ac;
    }
    ctx->pc = 0x2EF8A4u;
    {
        const bool branch_taken_0x2ef8a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8A4u;
        // 0x2ef8a8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8a4) {
            ctx->pc = 0x2EF988u;
            goto label_2ef988;
        }
    }
    ctx->pc = 0x2EF8ACu;
label_2ef8ac:
    // 0x2ef8ac: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x2ef8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_2ef8b0:
    // 0x2ef8b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ef8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef8b4:
    // 0x2ef8b4: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x2ef8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
label_2ef8b8:
    // 0x2ef8b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef8bc:
    // 0x2ef8bc: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x2ef8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_2ef8c0:
    // 0x2ef8c0: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x2ef8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
label_2ef8c4:
    // 0x2ef8c4: 0x3c0f809  jalr        $fp
label_2ef8c8:
    if (ctx->pc == 0x2EF8C8u) {
        ctx->pc = 0x2EF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8C4u;
        // 0x2ef8c8: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8CCu;
        goto label_2ef8cc;
    }
    ctx->pc = 0x2EF8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EF8CCu);
        ctx->pc = 0x2EF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8C4u;
        // 0x2ef8c8: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF8C4u, 0x2EF8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF8CCu;
label_2ef8cc:
    // 0x2ef8cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ef8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef8d0:
    // 0x2ef8d0: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x2ef8d0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef8d4:
    // 0x2ef8d4: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x2ef8d4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ef8d8:
    // 0x2ef8d8: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x2ef8d8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef8dc:
    // 0x2ef8dc: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x2ef8dcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef8e0:
    // 0x2ef8e0: 0x4a1ffc7  bgez        $a1, . + 4 + (-0x39 << 2)
label_2ef8e4:
    if (ctx->pc == 0x2EF8E4u) {
        ctx->pc = 0x2EF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8E0u;
        // 0x2ef8e4: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8E8u;
        goto label_2ef8e8;
    }
    ctx->pc = 0x2EF8E0u;
    {
        const bool branch_taken_0x2ef8e0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2EF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8E0u;
        // 0x2ef8e4: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8e0) {
            ctx->pc = 0x2EF800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef800;
        }
    }
    ctx->pc = 0x2EF8E8u;
label_2ef8e8:
    // 0x2ef8e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ef8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef8ec:
    // 0x2ef8ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2ef8f0:
    if (ctx->pc == 0x2EF8F0u) {
        ctx->pc = 0x2EF8F4u;
        goto label_2ef8f4;
    }
    ctx->pc = 0x2EF8ECu;
    {
        const bool branch_taken_0x2ef8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef8ec) {
            ctx->pc = 0x2EF908u;
            goto label_2ef908;
        }
    }
    ctx->pc = 0x2EF8F4u;
label_2ef8f4:
    // 0x2ef8f4: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x2ef8f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef8f8:
    // 0x2ef8f8: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x2ef8f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef8fc:
    // 0x2ef8fc: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2ef8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_2ef900:
    // 0x2ef900: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2ef904:
    if (ctx->pc == 0x2EF904u) {
        ctx->pc = 0x2EF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF900u;
        // 0x2ef904: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF908u;
        goto label_2ef908;
    }
    ctx->pc = 0x2EF900u;
    {
        const bool branch_taken_0x2ef900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF900u;
        // 0x2ef904: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef900) {
            ctx->pc = 0x2EF970u;
            goto label_2ef970;
        }
    }
    ctx->pc = 0x2EF908u;
label_2ef908:
    // 0x2ef908: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_2ef90c:
    if (ctx->pc == 0x2EF90Cu) {
        ctx->pc = 0x2EF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF908u;
        // 0x2ef90c: 0xb303e  dsrl32      $a2, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF910u;
        goto label_2ef910;
    }
    ctx->pc = 0x2EF908u;
    {
        const bool branch_taken_0x2ef908 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF908u;
        // 0x2ef90c: 0xb303e  dsrl32      $a2, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef908) {
            ctx->pc = 0x2EF940u;
            goto label_2ef940;
        }
    }
    ctx->pc = 0x2EF910u;
label_2ef910:
    // 0x2ef910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ef910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef914:
    // 0x2ef914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef918:
    // 0x2ef918: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2ef918u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2ef91c:
    // 0x2ef91c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x2ef91cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_2ef920:
    // 0x2ef920: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2ef920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef924:
    // 0x2ef924: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2ef924u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_2ef928:
    // 0x2ef928: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ef928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2ef92c:
    // 0x2ef92c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2ef92cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2ef930:
    // 0x2ef930: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_2ef934:
    if (ctx->pc == 0x2EF934u) {
        ctx->pc = 0x2EF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF930u;
        // 0x2ef934: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF938u;
        goto label_2ef938;
    }
    ctx->pc = 0x2EF930u;
    {
        const bool branch_taken_0x2ef930 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2EF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF930u;
        // 0x2ef934: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef930) {
            ctx->pc = 0x2EF918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef918;
        }
    }
    ctx->pc = 0x2EF938u;
label_2ef938:
    // 0x2ef938: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ef93c:
    if (ctx->pc == 0x2EF93Cu) {
        ctx->pc = 0x2EF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF938u;
        // 0x2ef93c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF940u;
        goto label_2ef940;
    }
    ctx->pc = 0x2EF938u;
    {
        const bool branch_taken_0x2ef938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF938u;
        // 0x2ef93c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef938) {
            ctx->pc = 0x2EF974u;
            goto label_2ef974;
        }
    }
    ctx->pc = 0x2EF940u;
label_2ef940:
    // 0x2ef940: 0x9303e  dsrl32      $a2, $t1, 0
    ctx->pc = 0x2ef940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) >> (32 + 0));
label_2ef944:
    // 0x2ef944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ef944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef948:
    // 0x2ef948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef94c:
    // 0x2ef94c: 0x0  nop
    ctx->pc = 0x2ef94cu;
    // NOP
label_2ef950:
    // 0x2ef950: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2ef950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2ef954:
    // 0x2ef954: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x2ef954u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_2ef958:
    // 0x2ef958: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2ef958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef95c:
    // 0x2ef95c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2ef95cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ef960:
    // 0x2ef960: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ef960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2ef964:
    // 0x2ef964: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2ef964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ef968:
    // 0x2ef968: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_2ef96c:
    if (ctx->pc == 0x2EF96Cu) {
        ctx->pc = 0x2EF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF968u;
        // 0x2ef96c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF970u;
        goto label_2ef970;
    }
    ctx->pc = 0x2EF968u;
    {
        const bool branch_taken_0x2ef968 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2EF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF968u;
        // 0x2ef96c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef968) {
            ctx->pc = 0x2EF950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef950;
        }
    }
    ctx->pc = 0x2EF970u;
label_2ef970:
    // 0x2ef970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ef970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef974:
    // 0x2ef974: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2ef974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_2ef978:
    // 0x2ef978: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ef978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2ef97c:
    // 0x2ef97c: 0x1000ff8c  b           . + 4 + (-0x74 << 2)
label_2ef980:
    if (ctx->pc == 0x2EF980u) {
        ctx->pc = 0x2EF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF97Cu;
        // 0x2ef980: 0x2549023  subu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF984u;
        goto label_2ef984;
    }
    ctx->pc = 0x2EF97Cu;
    {
        const bool branch_taken_0x2ef97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF97Cu;
        // 0x2ef980: 0x2549023  subu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef97c) {
            ctx->pc = 0x2EF7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef7b0;
        }
    }
    ctx->pc = 0x2EF984u;
label_2ef984:
    // 0x2ef984: 0x0  nop
    ctx->pc = 0x2ef984u;
    // NOP
label_2ef988:
    // 0x2ef988: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_2ef98c:
    if (ctx->pc == 0x2EF98Cu) {
        ctx->pc = 0x2EF98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF988u;
        // 0x2ef98c: 0x2352823  subu        $a1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF990u;
        goto label_2ef990;
    }
    ctx->pc = 0x2EF988u;
    {
        const bool branch_taken_0x2ef988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF988u;
        // 0x2ef98c: 0x2352823  subu        $a1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef988) {
            ctx->pc = 0x2EFA98u;
            goto label_2efa98;
        }
    }
    ctx->pc = 0x2EF990u;
label_2ef990:
    // 0x2ef990: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ef990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef994:
    // 0x2ef994: 0x8fb3001c  lw          $s3, 0x1C($sp)
    ctx->pc = 0x2ef994u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2ef998:
    // 0x2ef998: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2ef998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2ef99c:
    // 0x2ef99c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x2ef99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2ef9a0:
    // 0x2ef9a0: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2ef9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ef9a4:
    // 0x2ef9a4: 0x504000a2  beql        $v0, $zero, . + 4 + (0xA2 << 2)
label_2ef9a8:
    if (ctx->pc == 0x2EF9A8u) {
        ctx->pc = 0x2EF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9A4u;
        // 0x2ef9a8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9ACu;
        goto label_2ef9ac;
    }
    ctx->pc = 0x2EF9A4u;
    {
        const bool branch_taken_0x2ef9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef9a4) {
            ctx->pc = 0x2EF9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF9A4u;
            // 0x2ef9a8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC30u;
            goto label_2efc30;
        }
    }
    ctx->pc = 0x2EF9ACu;
label_2ef9ac:
    // 0x2ef9ac: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2ef9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2ef9b0:
    // 0x2ef9b0: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x2ef9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_2ef9b4:
    // 0x2ef9b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ef9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef9b8:
    // 0x2ef9b8: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x2ef9b8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_2ef9bc:
    // 0x2ef9bc: 0x14903c  dsll32      $s2, $s4, 0
    ctx->pc = 0x2ef9bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 0));
label_2ef9c0:
    // 0x2ef9c0: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x2ef9c0u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ef9c4:
    // 0x2ef9c4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2ef9c8:
    if (ctx->pc == 0x2EF9C8u) {
        ctx->pc = 0x2EF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9C4u;
        // 0x2ef9c8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9CCu;
        goto label_2ef9cc;
    }
    ctx->pc = 0x2EF9C4u;
    {
        const bool branch_taken_0x2ef9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9C4u;
        // 0x2ef9c8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9c4) {
            ctx->pc = 0x2EFA54u;
            goto label_2efa54;
        }
    }
    ctx->pc = 0x2EF9CCu;
label_2ef9cc:
    // 0x2ef9cc: 0x0  nop
    ctx->pc = 0x2ef9ccu;
    // NOP
label_2ef9d0:
    // 0x2ef9d0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2ef9d4:
    if (ctx->pc == 0x2EF9D4u) {
        ctx->pc = 0x2EF9D8u;
        goto label_2ef9d8;
    }
    ctx->pc = 0x2EF9D0u;
    {
        const bool branch_taken_0x2ef9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef9d0) {
            ctx->pc = 0x2EF9F0u;
            goto label_2ef9f0;
        }
    }
    ctx->pc = 0x2EF9D8u;
label_2ef9d8:
    // 0x2ef9d8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x2ef9d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef9dc:
    // 0x2ef9dc: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2ef9dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef9e0:
    // 0x2ef9e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2ef9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_2ef9e4:
    // 0x2ef9e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2ef9e8:
    if (ctx->pc == 0x2EF9E8u) {
        ctx->pc = 0x2EF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9E4u;
        // 0x2ef9e8: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9ECu;
        goto label_2ef9ec;
    }
    ctx->pc = 0x2EF9E4u;
    {
        const bool branch_taken_0x2ef9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9E4u;
        // 0x2ef9e8: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9e4) {
            ctx->pc = 0x2EFA50u;
            goto label_2efa50;
        }
    }
    ctx->pc = 0x2EF9ECu;
label_2ef9ec:
    // 0x2ef9ec: 0x0  nop
    ctx->pc = 0x2ef9ecu;
    // NOP
label_2ef9f0:
    // 0x2ef9f0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_2ef9f4:
    if (ctx->pc == 0x2EF9F4u) {
        ctx->pc = 0x2EF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9F0u;
        // 0x2ef9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9F8u;
        goto label_2ef9f8;
    }
    ctx->pc = 0x2EF9F0u;
    {
        const bool branch_taken_0x2ef9f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9F0u;
        // 0x2ef9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9f0) {
            ctx->pc = 0x2EFA28u;
            goto label_2efa28;
        }
    }
    ctx->pc = 0x2EF9F8u;
label_2ef9f8:
    // 0x2ef9f8: 0x17283e  dsrl32      $a1, $s7, 0
    ctx->pc = 0x2ef9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 0));
label_2ef9fc:
    // 0x2ef9fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ef9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efa00:
    // 0x2efa00: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2efa00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2efa04:
    // 0x2efa04: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2efa04u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2efa08:
    // 0x2efa08: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2efa08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2efa0c:
    // 0x2efa0c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2efa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2efa10:
    // 0x2efa10: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2efa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2efa14:
    // 0x2efa14: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2efa14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_2efa18:
    // 0x2efa18: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2efa1c:
    if (ctx->pc == 0x2EFA1Cu) {
        ctx->pc = 0x2EFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA18u;
        // 0x2efa1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA20u;
        goto label_2efa20;
    }
    ctx->pc = 0x2EFA18u;
    {
        const bool branch_taken_0x2efa18 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA18u;
        // 0x2efa1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa18) {
            ctx->pc = 0x2EFA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efa00;
        }
    }
    ctx->pc = 0x2EFA20u;
label_2efa20:
    // 0x2efa20: 0x1000000c  b           . + 4 + (0xC << 2)
label_2efa24:
    if (ctx->pc == 0x2EFA24u) {
        ctx->pc = 0x2EFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA20u;
        // 0x2efa24: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA28u;
        goto label_2efa28;
    }
    ctx->pc = 0x2EFA20u;
    {
        const bool branch_taken_0x2efa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA20u;
        // 0x2efa24: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa20) {
            ctx->pc = 0x2EFA54u;
            goto label_2efa54;
        }
    }
    ctx->pc = 0x2EFA28u;
label_2efa28:
    // 0x2efa28: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x2efa28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
label_2efa2c:
    // 0x2efa2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2efa2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efa30:
    // 0x2efa30: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2efa30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2efa34:
    // 0x2efa34: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2efa34u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2efa38:
    // 0x2efa38: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2efa38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2efa3c:
    // 0x2efa3c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2efa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2efa40:
    // 0x2efa40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2efa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2efa44:
    // 0x2efa44: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2efa44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_2efa48:
    // 0x2efa48: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2efa4c:
    if (ctx->pc == 0x2EFA4Cu) {
        ctx->pc = 0x2EFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA48u;
        // 0x2efa4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA50u;
        goto label_2efa50;
    }
    ctx->pc = 0x2EFA48u;
    {
        const bool branch_taken_0x2efa48 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA48u;
        // 0x2efa4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa48) {
            ctx->pc = 0x2EFA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efa30;
        }
    }
    ctx->pc = 0x2EFA50u;
label_2efa50:
    // 0x2efa50: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2efa50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efa54:
    // 0x2efa54: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x2efa54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2efa58:
    // 0x2efa58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2efa5c:
    if (ctx->pc == 0x2EFA5Cu) {
        ctx->pc = 0x2EFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA58u;
        // 0x2efa5c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA60u;
        goto label_2efa60;
    }
    ctx->pc = 0x2EFA58u;
    {
        const bool branch_taken_0x2efa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA58u;
        // 0x2efa5c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa58) {
            ctx->pc = 0x2EFA7Cu;
            goto label_2efa7c;
        }
    }
    ctx->pc = 0x2EFA60u;
label_2efa60:
    // 0x2efa60: 0x2148823  subu        $s1, $s0, $s4
    ctx->pc = 0x2efa60u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2efa64:
    // 0x2efa64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efa64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efa68:
    // 0x2efa68: 0x3c0f809  jalr        $fp
label_2efa6c:
    if (ctx->pc == 0x2EFA6Cu) {
        ctx->pc = 0x2EFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA68u;
        // 0x2efa6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA70u;
        goto label_2efa70;
    }
    ctx->pc = 0x2EFA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2EFA70u);
        ctx->pc = 0x2EFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA68u;
        // 0x2efa6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFA68u, 0x2EFA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFA70u;
label_2efa70:
    // 0x2efa70: 0x5c40ffd7  bgtzl       $v0, . + 4 + (-0x29 << 2)
label_2efa74:
    if (ctx->pc == 0x2EFA74u) {
        ctx->pc = 0x2EFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA70u;
        // 0x2efa74: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA78u;
        goto label_2efa78;
    }
    ctx->pc = 0x2EFA70u;
    {
        const bool branch_taken_0x2efa70 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2efa70) {
            ctx->pc = 0x2EFA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA70u;
            // 0x2efa74: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef9d0;
        }
    }
    ctx->pc = 0x2EFA78u;
label_2efa78:
    // 0x2efa78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2efa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2efa7c:
    // 0x2efa7c: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x2efa7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_2efa80:
    // 0x2efa80: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2efa80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2efa84:
    // 0x2efa84: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_2efa88:
    if (ctx->pc == 0x2EFA88u) {
        ctx->pc = 0x2EFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA84u;
        // 0x2efa88: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA8Cu;
        goto label_2efa8c;
    }
    ctx->pc = 0x2EFA84u;
    {
        const bool branch_taken_0x2efa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efa84) {
            ctx->pc = 0x2EFA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA84u;
            // 0x2efa88: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efa54;
        }
    }
    ctx->pc = 0x2EFA8Cu;
label_2efa8c:
    // 0x2efa8c: 0x10000068  b           . + 4 + (0x68 << 2)
label_2efa90:
    if (ctx->pc == 0x2EFA90u) {
        ctx->pc = 0x2EFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA8Cu;
        // 0x2efa90: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA94u;
        goto label_2efa94;
    }
    ctx->pc = 0x2EFA8Cu;
    {
        const bool branch_taken_0x2efa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA8Cu;
        // 0x2efa90: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa8c) {
            ctx->pc = 0x2EFC30u;
            goto label_2efc30;
        }
    }
    ctx->pc = 0x2EFA94u;
label_2efa94:
    // 0x2efa94: 0x0  nop
    ctx->pc = 0x2efa94u;
    // NOP
label_2efa98:
    // 0x2efa98: 0x2b61023  subu        $v0, $s5, $s6
    ctx->pc = 0x2efa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_2efa9c:
    // 0x2efa9c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x2efa9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2efaa0:
    // 0x2efaa0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2efaa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2efaa4:
    // 0x2efaa4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2efaa4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2efaa8:
    // 0x2efaa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2efaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2efaac:
    // 0x2efaac: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2efaacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2efab0:
    // 0x2efab0: 0x18a00021  blez        $a1, . + 4 + (0x21 << 2)
label_2efab4:
    if (ctx->pc == 0x2EFAB4u) {
        ctx->pc = 0x2EFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAB0u;
        // 0x2efab4: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFAB8u;
        goto label_2efab8;
    }
    ctx->pc = 0x2EFAB0u;
    {
        const bool branch_taken_0x2efab0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2EFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAB0u;
        // 0x2efab4: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efab0) {
            ctx->pc = 0x2EFB38u;
            goto label_2efb38;
        }
    }
    ctx->pc = 0x2EFAB8u;
label_2efab8:
    // 0x2efab8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2efab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2efabc:
    // 0x2efabc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2efabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2efac0:
    // 0x2efac0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2efac4:
    if (ctx->pc == 0x2EFAC4u) {
        ctx->pc = 0x2EFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAC0u;
        // 0x2efac4: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFAC8u;
        goto label_2efac8;
    }
    ctx->pc = 0x2EFAC0u;
    {
        const bool branch_taken_0x2efac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAC0u;
        // 0x2efac4: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efac0) {
            ctx->pc = 0x2EFB08u;
            goto label_2efb08;
        }
    }
    ctx->pc = 0x2EFAC8u;
label_2efac8:
    // 0x2efac8: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_2efacc:
    // 0x2efacc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2efaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2efad0:
    // 0x2efad0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2efad4:
    // 0x2efad4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2efad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2efad8:
    // 0x2efad8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x2efad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_2efadc:
    // 0x2efadc: 0x0  nop
    ctx->pc = 0x2efadcu;
    // NOP
label_2efae0:
    // 0x2efae0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2efae0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2efae4:
    // 0x2efae4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2efae4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2efae8:
    // 0x2efae8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2efae8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2efaec:
    // 0x2efaec: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2efaecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2efaf0:
    // 0x2efaf0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2efaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2efaf4:
    // 0x2efaf4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2efaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_2efaf8:
    // 0x2efaf8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2efafc:
    if (ctx->pc == 0x2EFAFCu) {
        ctx->pc = 0x2EFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAF8u;
        // 0x2efafc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFB00u;
        goto label_2efb00;
    }
    ctx->pc = 0x2EFAF8u;
    {
        const bool branch_taken_0x2efaf8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAF8u;
        // 0x2efafc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efaf8) {
            ctx->pc = 0x2EFAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efae0;
        }
    }
    ctx->pc = 0x2EFB00u;
label_2efb00:
    // 0x2efb00: 0x1000000e  b           . + 4 + (0xE << 2)
label_2efb04:
    if (ctx->pc == 0x2EFB04u) {
        ctx->pc = 0x2EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB00u;
        // 0x2efb04: 0x2b31823  subu        $v1, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFB08u;
        goto label_2efb08;
    }
    ctx->pc = 0x2EFB00u;
    {
        const bool branch_taken_0x2efb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB00u;
        // 0x2efb04: 0x2b31823  subu        $v1, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb00) {
            ctx->pc = 0x2EFB3Cu;
            goto label_2efb3c;
        }
    }
    ctx->pc = 0x2EFB08u;
label_2efb08:
    // 0x2efb08: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2efb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_2efb0c:
    // 0x2efb0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2efb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2efb10:
    // 0x2efb10: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x2efb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_2efb14:
    // 0x2efb14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2efb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2efb18:
    // 0x2efb18: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2efb18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2efb1c:
    // 0x2efb1c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2efb1cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2efb20:
    // 0x2efb20: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2efb20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2efb24:
    // 0x2efb24: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2efb24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2efb28:
    // 0x2efb28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2efb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2efb2c:
    // 0x2efb2c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2efb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_2efb30:
    // 0x2efb30: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2efb34:
    if (ctx->pc == 0x2EFB34u) {
        ctx->pc = 0x2EFB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB30u;
        // 0x2efb34: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFB38u;
        goto label_2efb38;
    }
    ctx->pc = 0x2EFB30u;
    {
        const bool branch_taken_0x2efb30 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EFB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB30u;
        // 0x2efb34: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb30) {
            ctx->pc = 0x2EFB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efb18;
        }
    }
    ctx->pc = 0x2EFB38u;
label_2efb38:
    // 0x2efb38: 0x2b31823  subu        $v1, $s5, $s3
    ctx->pc = 0x2efb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2efb3c:
    // 0x2efb3c: 0x2728023  subu        $s0, $s3, $s2
    ctx->pc = 0x2efb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_2efb40:
    // 0x2efb40: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x2efb40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2efb44:
    // 0x2efb44: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x2efb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2efb48:
    // 0x2efb48: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x2efb48u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_2efb4c:
    // 0x2efb4c: 0x58a00021  blezl       $a1, . + 4 + (0x21 << 2)
label_2efb50:
    if (ctx->pc == 0x2EFB50u) {
        ctx->pc = 0x2EFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB4Cu;
        // 0x2efb50: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFB54u;
        goto label_2efb54;
    }
    ctx->pc = 0x2EFB4Cu;
    {
        const bool branch_taken_0x2efb4c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2efb4c) {
            ctx->pc = 0x2EFB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB4Cu;
            // 0x2efb50: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFBD4u;
            goto label_2efbd4;
        }
    }
    ctx->pc = 0x2EFB54u;
label_2efb54:
    // 0x2efb54: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2efb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2efb58:
    // 0x2efb58: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2efb58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2efb5c:
    // 0x2efb5c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2efb60:
    if (ctx->pc == 0x2EFB60u) {
        ctx->pc = 0x2EFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB5Cu;
        // 0x2efb60: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFB64u;
        goto label_2efb64;
    }
    ctx->pc = 0x2EFB5Cu;
    {
        const bool branch_taken_0x2efb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB5Cu;
        // 0x2efb60: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb5c) {
            ctx->pc = 0x2EFBA0u;
            goto label_2efba0;
        }
    }
    ctx->pc = 0x2EFB64u;
label_2efb64:
    // 0x2efb64: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x2efb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_2efb68:
    // 0x2efb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efb6c:
    // 0x2efb6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2efb70:
    // 0x2efb70: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2efb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2efb74:
    // 0x2efb74: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x2efb74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_2efb78:
    // 0x2efb78: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2efb78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2efb7c:
    // 0x2efb7c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2efb7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2efb80:
    // 0x2efb80: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2efb80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2efb84:
    // 0x2efb84: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2efb84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2efb88:
    // 0x2efb88: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2efb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2efb8c:
    // 0x2efb8c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2efb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_2efb90:
    // 0x2efb90: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2efb94:
    if (ctx->pc == 0x2EFB94u) {
        ctx->pc = 0x2EFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB90u;
        // 0x2efb94: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFB98u;
        goto label_2efb98;
    }
    ctx->pc = 0x2EFB90u;
    {
        const bool branch_taken_0x2efb90 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB90u;
        // 0x2efb94: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb90) {
            ctx->pc = 0x2EFB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efb78;
        }
    }
    ctx->pc = 0x2EFB98u;
label_2efb98:
    // 0x2efb98: 0x1000000e  b           . + 4 + (0xE << 2)
label_2efb9c:
    if (ctx->pc == 0x2EFB9Cu) {
        ctx->pc = 0x2EFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB98u;
        // 0x2efb9c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBA0u;
        goto label_2efba0;
    }
    ctx->pc = 0x2EFB98u;
    {
        const bool branch_taken_0x2efb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB98u;
        // 0x2efb9c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb98) {
            ctx->pc = 0x2EFBD4u;
            goto label_2efbd4;
        }
    }
    ctx->pc = 0x2EFBA0u;
label_2efba0:
    // 0x2efba0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2efba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_2efba4:
    // 0x2efba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efba8:
    // 0x2efba8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x2efba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_2efbac:
    // 0x2efbac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2efbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2efbb0:
    // 0x2efbb0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2efbb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2efbb4:
    // 0x2efbb4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x2efbb4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_2efbb8:
    // 0x2efbb8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2efbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2efbbc:
    // 0x2efbbc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2efbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2efbc0:
    // 0x2efbc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2efbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2efbc4:
    // 0x2efbc4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2efbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_2efbc8:
    // 0x2efbc8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2efbcc:
    if (ctx->pc == 0x2EFBCCu) {
        ctx->pc = 0x2EFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBC8u;
        // 0x2efbcc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBD0u;
        goto label_2efbd0;
    }
    ctx->pc = 0x2EFBC8u;
    {
        const bool branch_taken_0x2efbc8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2EFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBC8u;
        // 0x2efbcc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbc8) {
            ctx->pc = 0x2EFBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFBD0u;
label_2efbd0:
    // 0x2efbd0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2efbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2efbd4:
    // 0x2efbd4: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x2efbd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2efbd8:
    // 0x2efbd8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2efbdc:
    if (ctx->pc == 0x2EFBDCu) {
        ctx->pc = 0x2EFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBD8u;
        // 0x2efbdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBE0u;
        goto label_2efbe0;
    }
    ctx->pc = 0x2EFBD8u;
    {
        const bool branch_taken_0x2efbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efbd8) {
            ctx->pc = 0x2EFBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFBD8u;
            // 0x2efbdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC08u;
            goto label_2efc08;
        }
    }
    ctx->pc = 0x2EFBE0u;
label_2efbe0:
    // 0x2efbe0: 0xb4001b  divu        $zero, $a1, $s4
    ctx->pc = 0x2efbe0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_2efbe4:
    // 0x2efbe4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2efbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2efbe8:
    // 0x2efbe8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2efbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2efbec:
    // 0x2efbec: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2efbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2efbf0:
    // 0x2efbf0: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_2efbf4:
    if (ctx->pc == 0x2EFBF4u) {
        ctx->pc = 0x2EFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBF0u;
        // 0x2efbf4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBF8u;
        goto label_2efbf8;
    }
    ctx->pc = 0x2EFBF0u;
    {
        const bool branch_taken_0x2efbf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efbf0) {
            ctx->pc = 0x2EFBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFBF0u;
            // 0x2efbf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFBF8u;
            goto label_2efbf8;
        }
    }
    ctx->pc = 0x2EFBF8u;
label_2efbf8:
    // 0x2efbf8: 0x2812  mflo        $a1
    ctx->pc = 0x2efbf8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2efbfc:
    // 0x2efbfc: 0xc0bbc9c  jal         func_2EF270
label_2efc00:
    if (ctx->pc == 0x2EFC00u) {
        ctx->pc = 0x2EFC04u;
        goto label_2efc04;
    }
    ctx->pc = 0x2EFBFCu;
    SET_GPR_U32(ctx, 31, 0x2EFC04u);
    ctx->pc = 0x2EF270u;
    goto label_2ef270;
    ctx->pc = 0x2EFC04u;
label_2efc04:
    // 0x2efc04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efc08:
    // 0x2efc08: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x2efc08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2efc0c:
    // 0x2efc0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2efc10:
    if (ctx->pc == 0x2EFC10u) {
        ctx->pc = 0x2EFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC0Cu;
        // 0x2efc10: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC14u;
        goto label_2efc14;
    }
    ctx->pc = 0x2EFC0Cu;
    {
        const bool branch_taken_0x2efc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC0Cu;
        // 0x2efc10: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc0c) {
            ctx->pc = 0x2EFC30u;
            goto label_2efc30;
        }
    }
    ctx->pc = 0x2EFC14u;
label_2efc14:
    // 0x2efc14: 0xb4001b  divu        $zero, $a1, $s4
    ctx->pc = 0x2efc14u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_2efc18:
    // 0x2efc18: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_2efc1c:
    if (ctx->pc == 0x2EFC1Cu) {
        ctx->pc = 0x2EFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC18u;
        // 0x2efc1c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC20u;
        goto label_2efc20;
    }
    ctx->pc = 0x2EFC18u;
    {
        const bool branch_taken_0x2efc18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efc18) {
            ctx->pc = 0x2EFC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFC18u;
            // 0x2efc1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC20u;
            goto label_2efc20;
        }
    }
    ctx->pc = 0x2EFC20u;
label_2efc20:
    // 0x2efc20: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x2efc20u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_2efc24:
    // 0x2efc24: 0x1012  mflo        $v0
    ctx->pc = 0x2efc24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2efc28:
    // 0x2efc28: 0x1000fda0  b           . + 4 + (-0x260 << 2)
label_2efc2c:
    if (ctx->pc == 0x2EFC2Cu) {
        ctx->pc = 0x2EFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC28u;
        // 0x2efc2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC30u;
        goto label_2efc30;
    }
    ctx->pc = 0x2EFC28u;
    {
        const bool branch_taken_0x2efc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC28u;
        // 0x2efc2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc28) {
            ctx->pc = 0x2EF2ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef2ac;
        }
    }
    ctx->pc = 0x2EFC30u;
label_2efc30:
    // 0x2efc30: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2efc30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2efc34:
    // 0x2efc34: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2efc34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2efc38:
    // 0x2efc38: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2efc38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2efc3c:
    // 0x2efc3c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2efc3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2efc40:
    // 0x2efc40: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2efc40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2efc44:
    // 0x2efc44: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2efc44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2efc48:
    // 0x2efc48: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2efc48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2efc4c:
    // 0x2efc4c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2efc4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2efc50:
    // 0x2efc50: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2efc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2efc54:
    // 0x2efc54: 0x3e00008  jr          $ra
label_2efc58:
    if (ctx->pc == 0x2EFC58u) {
        ctx->pc = 0x2EFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC54u;
        // 0x2efc58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC5Cu;
        goto label_2efc5c;
    }
    ctx->pc = 0x2EFC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC54u;
        // 0x2efc58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFC5Cu;
label_2efc5c:
    // 0x2efc5c: 0x0  nop
    ctx->pc = 0x2efc5cu;
    // NOP
label_2efc60:
    // 0x2efc60: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2efc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2efc64:
    // 0x2efc64: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2efc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_2efc68:
    // 0x2efc68: 0x8c43ea90  lw          $v1, -0x1570($v0)
    ctx->pc = 0x2efc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961808)));
label_2efc6c:
    // 0x2efc6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2efc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2efc70:
    // 0x2efc70: 0x3e00008  jr          $ra
label_2efc74:
    if (ctx->pc == 0x2EFC74u) {
        ctx->pc = 0x2EFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC70u;
        // 0x2efc74: 0xfc6400a8  sd          $a0, 0xA8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC78u;
        goto label_fallthrough_0x2efc70;
    }
    ctx->pc = 0x2EFC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC70u;
        // 0x2efc74: 0xfc6400a8  sd          $a0, 0xA8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2efc70:
    ctx->pc = 0x2EFC78u;
}
