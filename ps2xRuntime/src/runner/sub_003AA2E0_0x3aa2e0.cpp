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

// Function: sub_003AA2E0
// Address: 0x3aa2e0 - 0x3aac98
void sub_003AA2E0_0x3aa2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA2E0_0x3aa2e0");
#endif

    switch (ctx->pc) {
        case 0x3aa2e0u: goto label_3aa2e0;
        case 0x3aa2e4u: goto label_3aa2e4;
        case 0x3aa2e8u: goto label_3aa2e8;
        case 0x3aa2ecu: goto label_3aa2ec;
        case 0x3aa2f0u: goto label_3aa2f0;
        case 0x3aa2f4u: goto label_3aa2f4;
        case 0x3aa2f8u: goto label_3aa2f8;
        case 0x3aa2fcu: goto label_3aa2fc;
        case 0x3aa300u: goto label_3aa300;
        case 0x3aa304u: goto label_3aa304;
        case 0x3aa308u: goto label_3aa308;
        case 0x3aa30cu: goto label_3aa30c;
        case 0x3aa310u: goto label_3aa310;
        case 0x3aa314u: goto label_3aa314;
        case 0x3aa318u: goto label_3aa318;
        case 0x3aa31cu: goto label_3aa31c;
        case 0x3aa320u: goto label_3aa320;
        case 0x3aa324u: goto label_3aa324;
        case 0x3aa328u: goto label_3aa328;
        case 0x3aa32cu: goto label_3aa32c;
        case 0x3aa330u: goto label_3aa330;
        case 0x3aa334u: goto label_3aa334;
        case 0x3aa338u: goto label_3aa338;
        case 0x3aa33cu: goto label_3aa33c;
        case 0x3aa340u: goto label_3aa340;
        case 0x3aa344u: goto label_3aa344;
        case 0x3aa348u: goto label_3aa348;
        case 0x3aa34cu: goto label_3aa34c;
        case 0x3aa350u: goto label_3aa350;
        case 0x3aa354u: goto label_3aa354;
        case 0x3aa358u: goto label_3aa358;
        case 0x3aa35cu: goto label_3aa35c;
        case 0x3aa360u: goto label_3aa360;
        case 0x3aa364u: goto label_3aa364;
        case 0x3aa368u: goto label_3aa368;
        case 0x3aa36cu: goto label_3aa36c;
        case 0x3aa370u: goto label_3aa370;
        case 0x3aa374u: goto label_3aa374;
        case 0x3aa378u: goto label_3aa378;
        case 0x3aa37cu: goto label_3aa37c;
        case 0x3aa380u: goto label_3aa380;
        case 0x3aa384u: goto label_3aa384;
        case 0x3aa388u: goto label_3aa388;
        case 0x3aa38cu: goto label_3aa38c;
        case 0x3aa390u: goto label_3aa390;
        case 0x3aa394u: goto label_3aa394;
        case 0x3aa398u: goto label_3aa398;
        case 0x3aa39cu: goto label_3aa39c;
        case 0x3aa3a0u: goto label_3aa3a0;
        case 0x3aa3a4u: goto label_3aa3a4;
        case 0x3aa3a8u: goto label_3aa3a8;
        case 0x3aa3acu: goto label_3aa3ac;
        case 0x3aa3b0u: goto label_3aa3b0;
        case 0x3aa3b4u: goto label_3aa3b4;
        case 0x3aa3b8u: goto label_3aa3b8;
        case 0x3aa3bcu: goto label_3aa3bc;
        case 0x3aa3c0u: goto label_3aa3c0;
        case 0x3aa3c4u: goto label_3aa3c4;
        case 0x3aa3c8u: goto label_3aa3c8;
        case 0x3aa3ccu: goto label_3aa3cc;
        case 0x3aa3d0u: goto label_3aa3d0;
        case 0x3aa3d4u: goto label_3aa3d4;
        case 0x3aa3d8u: goto label_3aa3d8;
        case 0x3aa3dcu: goto label_3aa3dc;
        case 0x3aa3e0u: goto label_3aa3e0;
        case 0x3aa3e4u: goto label_3aa3e4;
        case 0x3aa3e8u: goto label_3aa3e8;
        case 0x3aa3ecu: goto label_3aa3ec;
        case 0x3aa3f0u: goto label_3aa3f0;
        case 0x3aa3f4u: goto label_3aa3f4;
        case 0x3aa3f8u: goto label_3aa3f8;
        case 0x3aa3fcu: goto label_3aa3fc;
        case 0x3aa400u: goto label_3aa400;
        case 0x3aa404u: goto label_3aa404;
        case 0x3aa408u: goto label_3aa408;
        case 0x3aa40cu: goto label_3aa40c;
        case 0x3aa410u: goto label_3aa410;
        case 0x3aa414u: goto label_3aa414;
        case 0x3aa418u: goto label_3aa418;
        case 0x3aa41cu: goto label_3aa41c;
        case 0x3aa420u: goto label_3aa420;
        case 0x3aa424u: goto label_3aa424;
        case 0x3aa428u: goto label_3aa428;
        case 0x3aa42cu: goto label_3aa42c;
        case 0x3aa430u: goto label_3aa430;
        case 0x3aa434u: goto label_3aa434;
        case 0x3aa438u: goto label_3aa438;
        case 0x3aa43cu: goto label_3aa43c;
        case 0x3aa440u: goto label_3aa440;
        case 0x3aa444u: goto label_3aa444;
        case 0x3aa448u: goto label_3aa448;
        case 0x3aa44cu: goto label_3aa44c;
        case 0x3aa450u: goto label_3aa450;
        case 0x3aa454u: goto label_3aa454;
        case 0x3aa458u: goto label_3aa458;
        case 0x3aa45cu: goto label_3aa45c;
        case 0x3aa460u: goto label_3aa460;
        case 0x3aa464u: goto label_3aa464;
        case 0x3aa468u: goto label_3aa468;
        case 0x3aa46cu: goto label_3aa46c;
        case 0x3aa470u: goto label_3aa470;
        case 0x3aa474u: goto label_3aa474;
        case 0x3aa478u: goto label_3aa478;
        case 0x3aa47cu: goto label_3aa47c;
        case 0x3aa480u: goto label_3aa480;
        case 0x3aa484u: goto label_3aa484;
        case 0x3aa488u: goto label_3aa488;
        case 0x3aa48cu: goto label_3aa48c;
        case 0x3aa490u: goto label_3aa490;
        case 0x3aa494u: goto label_3aa494;
        case 0x3aa498u: goto label_3aa498;
        case 0x3aa49cu: goto label_3aa49c;
        case 0x3aa4a0u: goto label_3aa4a0;
        case 0x3aa4a4u: goto label_3aa4a4;
        case 0x3aa4a8u: goto label_3aa4a8;
        case 0x3aa4acu: goto label_3aa4ac;
        case 0x3aa4b0u: goto label_3aa4b0;
        case 0x3aa4b4u: goto label_3aa4b4;
        case 0x3aa4b8u: goto label_3aa4b8;
        case 0x3aa4bcu: goto label_3aa4bc;
        case 0x3aa4c0u: goto label_3aa4c0;
        case 0x3aa4c4u: goto label_3aa4c4;
        case 0x3aa4c8u: goto label_3aa4c8;
        case 0x3aa4ccu: goto label_3aa4cc;
        case 0x3aa4d0u: goto label_3aa4d0;
        case 0x3aa4d4u: goto label_3aa4d4;
        case 0x3aa4d8u: goto label_3aa4d8;
        case 0x3aa4dcu: goto label_3aa4dc;
        case 0x3aa4e0u: goto label_3aa4e0;
        case 0x3aa4e4u: goto label_3aa4e4;
        case 0x3aa4e8u: goto label_3aa4e8;
        case 0x3aa4ecu: goto label_3aa4ec;
        case 0x3aa4f0u: goto label_3aa4f0;
        case 0x3aa4f4u: goto label_3aa4f4;
        case 0x3aa4f8u: goto label_3aa4f8;
        case 0x3aa4fcu: goto label_3aa4fc;
        case 0x3aa500u: goto label_3aa500;
        case 0x3aa504u: goto label_3aa504;
        case 0x3aa508u: goto label_3aa508;
        case 0x3aa50cu: goto label_3aa50c;
        case 0x3aa510u: goto label_3aa510;
        case 0x3aa514u: goto label_3aa514;
        case 0x3aa518u: goto label_3aa518;
        case 0x3aa51cu: goto label_3aa51c;
        case 0x3aa520u: goto label_3aa520;
        case 0x3aa524u: goto label_3aa524;
        case 0x3aa528u: goto label_3aa528;
        case 0x3aa52cu: goto label_3aa52c;
        case 0x3aa530u: goto label_3aa530;
        case 0x3aa534u: goto label_3aa534;
        case 0x3aa538u: goto label_3aa538;
        case 0x3aa53cu: goto label_3aa53c;
        case 0x3aa540u: goto label_3aa540;
        case 0x3aa544u: goto label_3aa544;
        case 0x3aa548u: goto label_3aa548;
        case 0x3aa54cu: goto label_3aa54c;
        case 0x3aa550u: goto label_3aa550;
        case 0x3aa554u: goto label_3aa554;
        case 0x3aa558u: goto label_3aa558;
        case 0x3aa55cu: goto label_3aa55c;
        case 0x3aa560u: goto label_3aa560;
        case 0x3aa564u: goto label_3aa564;
        case 0x3aa568u: goto label_3aa568;
        case 0x3aa56cu: goto label_3aa56c;
        case 0x3aa570u: goto label_3aa570;
        case 0x3aa574u: goto label_3aa574;
        case 0x3aa578u: goto label_3aa578;
        case 0x3aa57cu: goto label_3aa57c;
        case 0x3aa580u: goto label_3aa580;
        case 0x3aa584u: goto label_3aa584;
        case 0x3aa588u: goto label_3aa588;
        case 0x3aa58cu: goto label_3aa58c;
        case 0x3aa590u: goto label_3aa590;
        case 0x3aa594u: goto label_3aa594;
        case 0x3aa598u: goto label_3aa598;
        case 0x3aa59cu: goto label_3aa59c;
        case 0x3aa5a0u: goto label_3aa5a0;
        case 0x3aa5a4u: goto label_3aa5a4;
        case 0x3aa5a8u: goto label_3aa5a8;
        case 0x3aa5acu: goto label_3aa5ac;
        case 0x3aa5b0u: goto label_3aa5b0;
        case 0x3aa5b4u: goto label_3aa5b4;
        case 0x3aa5b8u: goto label_3aa5b8;
        case 0x3aa5bcu: goto label_3aa5bc;
        case 0x3aa5c0u: goto label_3aa5c0;
        case 0x3aa5c4u: goto label_3aa5c4;
        case 0x3aa5c8u: goto label_3aa5c8;
        case 0x3aa5ccu: goto label_3aa5cc;
        case 0x3aa5d0u: goto label_3aa5d0;
        case 0x3aa5d4u: goto label_3aa5d4;
        case 0x3aa5d8u: goto label_3aa5d8;
        case 0x3aa5dcu: goto label_3aa5dc;
        case 0x3aa5e0u: goto label_3aa5e0;
        case 0x3aa5e4u: goto label_3aa5e4;
        case 0x3aa5e8u: goto label_3aa5e8;
        case 0x3aa5ecu: goto label_3aa5ec;
        case 0x3aa5f0u: goto label_3aa5f0;
        case 0x3aa5f4u: goto label_3aa5f4;
        case 0x3aa5f8u: goto label_3aa5f8;
        case 0x3aa5fcu: goto label_3aa5fc;
        case 0x3aa600u: goto label_3aa600;
        case 0x3aa604u: goto label_3aa604;
        case 0x3aa608u: goto label_3aa608;
        case 0x3aa60cu: goto label_3aa60c;
        case 0x3aa610u: goto label_3aa610;
        case 0x3aa614u: goto label_3aa614;
        case 0x3aa618u: goto label_3aa618;
        case 0x3aa61cu: goto label_3aa61c;
        case 0x3aa620u: goto label_3aa620;
        case 0x3aa624u: goto label_3aa624;
        case 0x3aa628u: goto label_3aa628;
        case 0x3aa62cu: goto label_3aa62c;
        case 0x3aa630u: goto label_3aa630;
        case 0x3aa634u: goto label_3aa634;
        case 0x3aa638u: goto label_3aa638;
        case 0x3aa63cu: goto label_3aa63c;
        case 0x3aa640u: goto label_3aa640;
        case 0x3aa644u: goto label_3aa644;
        case 0x3aa648u: goto label_3aa648;
        case 0x3aa64cu: goto label_3aa64c;
        case 0x3aa650u: goto label_3aa650;
        case 0x3aa654u: goto label_3aa654;
        case 0x3aa658u: goto label_3aa658;
        case 0x3aa65cu: goto label_3aa65c;
        case 0x3aa660u: goto label_3aa660;
        case 0x3aa664u: goto label_3aa664;
        case 0x3aa668u: goto label_3aa668;
        case 0x3aa66cu: goto label_3aa66c;
        case 0x3aa670u: goto label_3aa670;
        case 0x3aa674u: goto label_3aa674;
        case 0x3aa678u: goto label_3aa678;
        case 0x3aa67cu: goto label_3aa67c;
        case 0x3aa680u: goto label_3aa680;
        case 0x3aa684u: goto label_3aa684;
        case 0x3aa688u: goto label_3aa688;
        case 0x3aa68cu: goto label_3aa68c;
        case 0x3aa690u: goto label_3aa690;
        case 0x3aa694u: goto label_3aa694;
        case 0x3aa698u: goto label_3aa698;
        case 0x3aa69cu: goto label_3aa69c;
        case 0x3aa6a0u: goto label_3aa6a0;
        case 0x3aa6a4u: goto label_3aa6a4;
        case 0x3aa6a8u: goto label_3aa6a8;
        case 0x3aa6acu: goto label_3aa6ac;
        case 0x3aa6b0u: goto label_3aa6b0;
        case 0x3aa6b4u: goto label_3aa6b4;
        case 0x3aa6b8u: goto label_3aa6b8;
        case 0x3aa6bcu: goto label_3aa6bc;
        case 0x3aa6c0u: goto label_3aa6c0;
        case 0x3aa6c4u: goto label_3aa6c4;
        case 0x3aa6c8u: goto label_3aa6c8;
        case 0x3aa6ccu: goto label_3aa6cc;
        case 0x3aa6d0u: goto label_3aa6d0;
        case 0x3aa6d4u: goto label_3aa6d4;
        case 0x3aa6d8u: goto label_3aa6d8;
        case 0x3aa6dcu: goto label_3aa6dc;
        case 0x3aa6e0u: goto label_3aa6e0;
        case 0x3aa6e4u: goto label_3aa6e4;
        case 0x3aa6e8u: goto label_3aa6e8;
        case 0x3aa6ecu: goto label_3aa6ec;
        case 0x3aa6f0u: goto label_3aa6f0;
        case 0x3aa6f4u: goto label_3aa6f4;
        case 0x3aa6f8u: goto label_3aa6f8;
        case 0x3aa6fcu: goto label_3aa6fc;
        case 0x3aa700u: goto label_3aa700;
        case 0x3aa704u: goto label_3aa704;
        case 0x3aa708u: goto label_3aa708;
        case 0x3aa70cu: goto label_3aa70c;
        case 0x3aa710u: goto label_3aa710;
        case 0x3aa714u: goto label_3aa714;
        case 0x3aa718u: goto label_3aa718;
        case 0x3aa71cu: goto label_3aa71c;
        case 0x3aa720u: goto label_3aa720;
        case 0x3aa724u: goto label_3aa724;
        case 0x3aa728u: goto label_3aa728;
        case 0x3aa72cu: goto label_3aa72c;
        case 0x3aa730u: goto label_3aa730;
        case 0x3aa734u: goto label_3aa734;
        case 0x3aa738u: goto label_3aa738;
        case 0x3aa73cu: goto label_3aa73c;
        case 0x3aa740u: goto label_3aa740;
        case 0x3aa744u: goto label_3aa744;
        case 0x3aa748u: goto label_3aa748;
        case 0x3aa74cu: goto label_3aa74c;
        case 0x3aa750u: goto label_3aa750;
        case 0x3aa754u: goto label_3aa754;
        case 0x3aa758u: goto label_3aa758;
        case 0x3aa75cu: goto label_3aa75c;
        case 0x3aa760u: goto label_3aa760;
        case 0x3aa764u: goto label_3aa764;
        case 0x3aa768u: goto label_3aa768;
        case 0x3aa76cu: goto label_3aa76c;
        case 0x3aa770u: goto label_3aa770;
        case 0x3aa774u: goto label_3aa774;
        case 0x3aa778u: goto label_3aa778;
        case 0x3aa77cu: goto label_3aa77c;
        case 0x3aa780u: goto label_3aa780;
        case 0x3aa784u: goto label_3aa784;
        case 0x3aa788u: goto label_3aa788;
        case 0x3aa78cu: goto label_3aa78c;
        case 0x3aa790u: goto label_3aa790;
        case 0x3aa794u: goto label_3aa794;
        case 0x3aa798u: goto label_3aa798;
        case 0x3aa79cu: goto label_3aa79c;
        case 0x3aa7a0u: goto label_3aa7a0;
        case 0x3aa7a4u: goto label_3aa7a4;
        case 0x3aa7a8u: goto label_3aa7a8;
        case 0x3aa7acu: goto label_3aa7ac;
        case 0x3aa7b0u: goto label_3aa7b0;
        case 0x3aa7b4u: goto label_3aa7b4;
        case 0x3aa7b8u: goto label_3aa7b8;
        case 0x3aa7bcu: goto label_3aa7bc;
        case 0x3aa7c0u: goto label_3aa7c0;
        case 0x3aa7c4u: goto label_3aa7c4;
        case 0x3aa7c8u: goto label_3aa7c8;
        case 0x3aa7ccu: goto label_3aa7cc;
        case 0x3aa7d0u: goto label_3aa7d0;
        case 0x3aa7d4u: goto label_3aa7d4;
        case 0x3aa7d8u: goto label_3aa7d8;
        case 0x3aa7dcu: goto label_3aa7dc;
        case 0x3aa7e0u: goto label_3aa7e0;
        case 0x3aa7e4u: goto label_3aa7e4;
        case 0x3aa7e8u: goto label_3aa7e8;
        case 0x3aa7ecu: goto label_3aa7ec;
        case 0x3aa7f0u: goto label_3aa7f0;
        case 0x3aa7f4u: goto label_3aa7f4;
        case 0x3aa7f8u: goto label_3aa7f8;
        case 0x3aa7fcu: goto label_3aa7fc;
        case 0x3aa800u: goto label_3aa800;
        case 0x3aa804u: goto label_3aa804;
        case 0x3aa808u: goto label_3aa808;
        case 0x3aa80cu: goto label_3aa80c;
        case 0x3aa810u: goto label_3aa810;
        case 0x3aa814u: goto label_3aa814;
        case 0x3aa818u: goto label_3aa818;
        case 0x3aa81cu: goto label_3aa81c;
        case 0x3aa820u: goto label_3aa820;
        case 0x3aa824u: goto label_3aa824;
        case 0x3aa828u: goto label_3aa828;
        case 0x3aa82cu: goto label_3aa82c;
        case 0x3aa830u: goto label_3aa830;
        case 0x3aa834u: goto label_3aa834;
        case 0x3aa838u: goto label_3aa838;
        case 0x3aa83cu: goto label_3aa83c;
        case 0x3aa840u: goto label_3aa840;
        case 0x3aa844u: goto label_3aa844;
        case 0x3aa848u: goto label_3aa848;
        case 0x3aa84cu: goto label_3aa84c;
        case 0x3aa850u: goto label_3aa850;
        case 0x3aa854u: goto label_3aa854;
        case 0x3aa858u: goto label_3aa858;
        case 0x3aa85cu: goto label_3aa85c;
        case 0x3aa860u: goto label_3aa860;
        case 0x3aa864u: goto label_3aa864;
        case 0x3aa868u: goto label_3aa868;
        case 0x3aa86cu: goto label_3aa86c;
        case 0x3aa870u: goto label_3aa870;
        case 0x3aa874u: goto label_3aa874;
        case 0x3aa878u: goto label_3aa878;
        case 0x3aa87cu: goto label_3aa87c;
        case 0x3aa880u: goto label_3aa880;
        case 0x3aa884u: goto label_3aa884;
        case 0x3aa888u: goto label_3aa888;
        case 0x3aa88cu: goto label_3aa88c;
        case 0x3aa890u: goto label_3aa890;
        case 0x3aa894u: goto label_3aa894;
        case 0x3aa898u: goto label_3aa898;
        case 0x3aa89cu: goto label_3aa89c;
        case 0x3aa8a0u: goto label_3aa8a0;
        case 0x3aa8a4u: goto label_3aa8a4;
        case 0x3aa8a8u: goto label_3aa8a8;
        case 0x3aa8acu: goto label_3aa8ac;
        case 0x3aa8b0u: goto label_3aa8b0;
        case 0x3aa8b4u: goto label_3aa8b4;
        case 0x3aa8b8u: goto label_3aa8b8;
        case 0x3aa8bcu: goto label_3aa8bc;
        case 0x3aa8c0u: goto label_3aa8c0;
        case 0x3aa8c4u: goto label_3aa8c4;
        case 0x3aa8c8u: goto label_3aa8c8;
        case 0x3aa8ccu: goto label_3aa8cc;
        case 0x3aa8d0u: goto label_3aa8d0;
        case 0x3aa8d4u: goto label_3aa8d4;
        case 0x3aa8d8u: goto label_3aa8d8;
        case 0x3aa8dcu: goto label_3aa8dc;
        case 0x3aa8e0u: goto label_3aa8e0;
        case 0x3aa8e4u: goto label_3aa8e4;
        case 0x3aa8e8u: goto label_3aa8e8;
        case 0x3aa8ecu: goto label_3aa8ec;
        case 0x3aa8f0u: goto label_3aa8f0;
        case 0x3aa8f4u: goto label_3aa8f4;
        case 0x3aa8f8u: goto label_3aa8f8;
        case 0x3aa8fcu: goto label_3aa8fc;
        case 0x3aa900u: goto label_3aa900;
        case 0x3aa904u: goto label_3aa904;
        case 0x3aa908u: goto label_3aa908;
        case 0x3aa90cu: goto label_3aa90c;
        case 0x3aa910u: goto label_3aa910;
        case 0x3aa914u: goto label_3aa914;
        case 0x3aa918u: goto label_3aa918;
        case 0x3aa91cu: goto label_3aa91c;
        case 0x3aa920u: goto label_3aa920;
        case 0x3aa924u: goto label_3aa924;
        case 0x3aa928u: goto label_3aa928;
        case 0x3aa92cu: goto label_3aa92c;
        case 0x3aa930u: goto label_3aa930;
        case 0x3aa934u: goto label_3aa934;
        case 0x3aa938u: goto label_3aa938;
        case 0x3aa93cu: goto label_3aa93c;
        case 0x3aa940u: goto label_3aa940;
        case 0x3aa944u: goto label_3aa944;
        case 0x3aa948u: goto label_3aa948;
        case 0x3aa94cu: goto label_3aa94c;
        case 0x3aa950u: goto label_3aa950;
        case 0x3aa954u: goto label_3aa954;
        case 0x3aa958u: goto label_3aa958;
        case 0x3aa95cu: goto label_3aa95c;
        case 0x3aa960u: goto label_3aa960;
        case 0x3aa964u: goto label_3aa964;
        case 0x3aa968u: goto label_3aa968;
        case 0x3aa96cu: goto label_3aa96c;
        case 0x3aa970u: goto label_3aa970;
        case 0x3aa974u: goto label_3aa974;
        case 0x3aa978u: goto label_3aa978;
        case 0x3aa97cu: goto label_3aa97c;
        case 0x3aa980u: goto label_3aa980;
        case 0x3aa984u: goto label_3aa984;
        case 0x3aa988u: goto label_3aa988;
        case 0x3aa98cu: goto label_3aa98c;
        case 0x3aa990u: goto label_3aa990;
        case 0x3aa994u: goto label_3aa994;
        case 0x3aa998u: goto label_3aa998;
        case 0x3aa99cu: goto label_3aa99c;
        case 0x3aa9a0u: goto label_3aa9a0;
        case 0x3aa9a4u: goto label_3aa9a4;
        case 0x3aa9a8u: goto label_3aa9a8;
        case 0x3aa9acu: goto label_3aa9ac;
        case 0x3aa9b0u: goto label_3aa9b0;
        case 0x3aa9b4u: goto label_3aa9b4;
        case 0x3aa9b8u: goto label_3aa9b8;
        case 0x3aa9bcu: goto label_3aa9bc;
        case 0x3aa9c0u: goto label_3aa9c0;
        case 0x3aa9c4u: goto label_3aa9c4;
        case 0x3aa9c8u: goto label_3aa9c8;
        case 0x3aa9ccu: goto label_3aa9cc;
        case 0x3aa9d0u: goto label_3aa9d0;
        case 0x3aa9d4u: goto label_3aa9d4;
        case 0x3aa9d8u: goto label_3aa9d8;
        case 0x3aa9dcu: goto label_3aa9dc;
        case 0x3aa9e0u: goto label_3aa9e0;
        case 0x3aa9e4u: goto label_3aa9e4;
        case 0x3aa9e8u: goto label_3aa9e8;
        case 0x3aa9ecu: goto label_3aa9ec;
        case 0x3aa9f0u: goto label_3aa9f0;
        case 0x3aa9f4u: goto label_3aa9f4;
        case 0x3aa9f8u: goto label_3aa9f8;
        case 0x3aa9fcu: goto label_3aa9fc;
        case 0x3aaa00u: goto label_3aaa00;
        case 0x3aaa04u: goto label_3aaa04;
        case 0x3aaa08u: goto label_3aaa08;
        case 0x3aaa0cu: goto label_3aaa0c;
        case 0x3aaa10u: goto label_3aaa10;
        case 0x3aaa14u: goto label_3aaa14;
        case 0x3aaa18u: goto label_3aaa18;
        case 0x3aaa1cu: goto label_3aaa1c;
        case 0x3aaa20u: goto label_3aaa20;
        case 0x3aaa24u: goto label_3aaa24;
        case 0x3aaa28u: goto label_3aaa28;
        case 0x3aaa2cu: goto label_3aaa2c;
        case 0x3aaa30u: goto label_3aaa30;
        case 0x3aaa34u: goto label_3aaa34;
        case 0x3aaa38u: goto label_3aaa38;
        case 0x3aaa3cu: goto label_3aaa3c;
        case 0x3aaa40u: goto label_3aaa40;
        case 0x3aaa44u: goto label_3aaa44;
        case 0x3aaa48u: goto label_3aaa48;
        case 0x3aaa4cu: goto label_3aaa4c;
        case 0x3aaa50u: goto label_3aaa50;
        case 0x3aaa54u: goto label_3aaa54;
        case 0x3aaa58u: goto label_3aaa58;
        case 0x3aaa5cu: goto label_3aaa5c;
        case 0x3aaa60u: goto label_3aaa60;
        case 0x3aaa64u: goto label_3aaa64;
        case 0x3aaa68u: goto label_3aaa68;
        case 0x3aaa6cu: goto label_3aaa6c;
        case 0x3aaa70u: goto label_3aaa70;
        case 0x3aaa74u: goto label_3aaa74;
        case 0x3aaa78u: goto label_3aaa78;
        case 0x3aaa7cu: goto label_3aaa7c;
        case 0x3aaa80u: goto label_3aaa80;
        case 0x3aaa84u: goto label_3aaa84;
        case 0x3aaa88u: goto label_3aaa88;
        case 0x3aaa8cu: goto label_3aaa8c;
        case 0x3aaa90u: goto label_3aaa90;
        case 0x3aaa94u: goto label_3aaa94;
        case 0x3aaa98u: goto label_3aaa98;
        case 0x3aaa9cu: goto label_3aaa9c;
        case 0x3aaaa0u: goto label_3aaaa0;
        case 0x3aaaa4u: goto label_3aaaa4;
        case 0x3aaaa8u: goto label_3aaaa8;
        case 0x3aaaacu: goto label_3aaaac;
        case 0x3aaab0u: goto label_3aaab0;
        case 0x3aaab4u: goto label_3aaab4;
        case 0x3aaab8u: goto label_3aaab8;
        case 0x3aaabcu: goto label_3aaabc;
        case 0x3aaac0u: goto label_3aaac0;
        case 0x3aaac4u: goto label_3aaac4;
        case 0x3aaac8u: goto label_3aaac8;
        case 0x3aaaccu: goto label_3aaacc;
        case 0x3aaad0u: goto label_3aaad0;
        case 0x3aaad4u: goto label_3aaad4;
        case 0x3aaad8u: goto label_3aaad8;
        case 0x3aaadcu: goto label_3aaadc;
        case 0x3aaae0u: goto label_3aaae0;
        case 0x3aaae4u: goto label_3aaae4;
        case 0x3aaae8u: goto label_3aaae8;
        case 0x3aaaecu: goto label_3aaaec;
        case 0x3aaaf0u: goto label_3aaaf0;
        case 0x3aaaf4u: goto label_3aaaf4;
        case 0x3aaaf8u: goto label_3aaaf8;
        case 0x3aaafcu: goto label_3aaafc;
        case 0x3aab00u: goto label_3aab00;
        case 0x3aab04u: goto label_3aab04;
        case 0x3aab08u: goto label_3aab08;
        case 0x3aab0cu: goto label_3aab0c;
        case 0x3aab10u: goto label_3aab10;
        case 0x3aab14u: goto label_3aab14;
        case 0x3aab18u: goto label_3aab18;
        case 0x3aab1cu: goto label_3aab1c;
        case 0x3aab20u: goto label_3aab20;
        case 0x3aab24u: goto label_3aab24;
        case 0x3aab28u: goto label_3aab28;
        case 0x3aab2cu: goto label_3aab2c;
        case 0x3aab30u: goto label_3aab30;
        case 0x3aab34u: goto label_3aab34;
        case 0x3aab38u: goto label_3aab38;
        case 0x3aab3cu: goto label_3aab3c;
        case 0x3aab40u: goto label_3aab40;
        case 0x3aab44u: goto label_3aab44;
        case 0x3aab48u: goto label_3aab48;
        case 0x3aab4cu: goto label_3aab4c;
        case 0x3aab50u: goto label_3aab50;
        case 0x3aab54u: goto label_3aab54;
        case 0x3aab58u: goto label_3aab58;
        case 0x3aab5cu: goto label_3aab5c;
        case 0x3aab60u: goto label_3aab60;
        case 0x3aab64u: goto label_3aab64;
        case 0x3aab68u: goto label_3aab68;
        case 0x3aab6cu: goto label_3aab6c;
        case 0x3aab70u: goto label_3aab70;
        case 0x3aab74u: goto label_3aab74;
        case 0x3aab78u: goto label_3aab78;
        case 0x3aab7cu: goto label_3aab7c;
        case 0x3aab80u: goto label_3aab80;
        case 0x3aab84u: goto label_3aab84;
        case 0x3aab88u: goto label_3aab88;
        case 0x3aab8cu: goto label_3aab8c;
        case 0x3aab90u: goto label_3aab90;
        case 0x3aab94u: goto label_3aab94;
        case 0x3aab98u: goto label_3aab98;
        case 0x3aab9cu: goto label_3aab9c;
        case 0x3aaba0u: goto label_3aaba0;
        case 0x3aaba4u: goto label_3aaba4;
        case 0x3aaba8u: goto label_3aaba8;
        case 0x3aabacu: goto label_3aabac;
        case 0x3aabb0u: goto label_3aabb0;
        case 0x3aabb4u: goto label_3aabb4;
        case 0x3aabb8u: goto label_3aabb8;
        case 0x3aabbcu: goto label_3aabbc;
        case 0x3aabc0u: goto label_3aabc0;
        case 0x3aabc4u: goto label_3aabc4;
        case 0x3aabc8u: goto label_3aabc8;
        case 0x3aabccu: goto label_3aabcc;
        case 0x3aabd0u: goto label_3aabd0;
        case 0x3aabd4u: goto label_3aabd4;
        case 0x3aabd8u: goto label_3aabd8;
        case 0x3aabdcu: goto label_3aabdc;
        case 0x3aabe0u: goto label_3aabe0;
        case 0x3aabe4u: goto label_3aabe4;
        case 0x3aabe8u: goto label_3aabe8;
        case 0x3aabecu: goto label_3aabec;
        case 0x3aabf0u: goto label_3aabf0;
        case 0x3aabf4u: goto label_3aabf4;
        case 0x3aabf8u: goto label_3aabf8;
        case 0x3aabfcu: goto label_3aabfc;
        case 0x3aac00u: goto label_3aac00;
        case 0x3aac04u: goto label_3aac04;
        case 0x3aac08u: goto label_3aac08;
        case 0x3aac0cu: goto label_3aac0c;
        case 0x3aac10u: goto label_3aac10;
        case 0x3aac14u: goto label_3aac14;
        case 0x3aac18u: goto label_3aac18;
        case 0x3aac1cu: goto label_3aac1c;
        case 0x3aac20u: goto label_3aac20;
        case 0x3aac24u: goto label_3aac24;
        case 0x3aac28u: goto label_3aac28;
        case 0x3aac2cu: goto label_3aac2c;
        case 0x3aac30u: goto label_3aac30;
        case 0x3aac34u: goto label_3aac34;
        case 0x3aac38u: goto label_3aac38;
        case 0x3aac3cu: goto label_3aac3c;
        case 0x3aac40u: goto label_3aac40;
        case 0x3aac44u: goto label_3aac44;
        case 0x3aac48u: goto label_3aac48;
        case 0x3aac4cu: goto label_3aac4c;
        case 0x3aac50u: goto label_3aac50;
        case 0x3aac54u: goto label_3aac54;
        case 0x3aac58u: goto label_3aac58;
        case 0x3aac5cu: goto label_3aac5c;
        case 0x3aac60u: goto label_3aac60;
        case 0x3aac64u: goto label_3aac64;
        case 0x3aac68u: goto label_3aac68;
        case 0x3aac6cu: goto label_3aac6c;
        case 0x3aac70u: goto label_3aac70;
        case 0x3aac74u: goto label_3aac74;
        case 0x3aac78u: goto label_3aac78;
        case 0x3aac7cu: goto label_3aac7c;
        case 0x3aac80u: goto label_3aac80;
        case 0x3aac84u: goto label_3aac84;
        case 0x3aac88u: goto label_3aac88;
        case 0x3aac8cu: goto label_3aac8c;
        case 0x3aac90u: goto label_3aac90;
        case 0x3aac94u: goto label_3aac94;
        default: break;
    }

    ctx->pc = 0x3aa2e0u;

label_3aa2e0:
    // 0x3aa2e0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3aa2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3aa2e4:
    // 0x3aa2e4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3aa2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_3aa2e8:
    // 0x3aa2e8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3aa2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_3aa2ec:
    // 0x3aa2ec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3aa2ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3aa2f0:
    // 0x3aa2f0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3aa2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_3aa2f4:
    // 0x3aa2f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3aa2f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa2f8:
    // 0x3aa2f8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3aa2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_3aa2fc:
    // 0x3aa2fc: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3aa2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_3aa300:
    // 0x3aa300: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x3aa300u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_3aa304:
    // 0x3aa304: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3aa304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_3aa308:
    // 0x3aa308: 0x2630ce80  addiu       $s0, $s1, -0x3180
    ctx->pc = 0x3aa308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954624));
label_3aa30c:
    // 0x3aa30c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3aa30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_3aa310:
    // 0x3aa310: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3aa310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa314:
    // 0x3aa314: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3aa314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_3aa318:
    // 0x3aa318: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3aa318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_3aa31c:
    // 0x3aa31c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3aa31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3aa320:
    // 0x3aa320: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3aa320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3aa324:
    // 0x3aa324: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3aa324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3aa328:
    // 0x3aa328: 0xe7bc0150  swc1        $f28, 0x150($sp)
    ctx->pc = 0x3aa328u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3aa32c:
    // 0x3aa32c: 0xe7bb0148  swc1        $f27, 0x148($sp)
    ctx->pc = 0x3aa32cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3aa330:
    // 0x3aa330: 0xe7ba0140  swc1        $f26, 0x140($sp)
    ctx->pc = 0x3aa330u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3aa334:
    // 0x3aa334: 0xe7b90138  swc1        $f25, 0x138($sp)
    ctx->pc = 0x3aa334u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3aa338:
    // 0x3aa338: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x3aa338u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3aa33c:
    // 0x3aa33c: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x3aa33cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3aa340:
    // 0x3aa340: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x3aa340u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3aa344:
    // 0x3aa344: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x3aa344u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3aa348:
    // 0x3aa348: 0xc1082ca  jal         func_420B28
label_3aa34c:
    if (ctx->pc == 0x3AA34Cu) {
        ctx->pc = 0x3AA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA348u;
        // 0x3aa34c: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA350u;
        goto label_3aa350;
    }
    ctx->pc = 0x3AA348u;
    SET_GPR_U32(ctx, 31, 0x3AA350u);
    ctx->pc = 0x3AA34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA348u;
    // 0x3aa34c: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x3AA348u, 0x3AA350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA350u;
label_3aa350:
    // 0x3aa350: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3aa350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_3aa354:
    // 0x3aa354: 0x8e040520  lw          $a0, 0x520($s0)
    ctx->pc = 0x3aa354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
label_3aa358:
    // 0x3aa358: 0xafb6003c  sw          $s6, 0x3C($sp)
    ctx->pc = 0x3aa358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 22));
label_3aa35c:
    // 0x3aa35c: 0xc1082d0  jal         func_420B40
label_3aa360:
    if (ctx->pc == 0x3AA360u) {
        ctx->pc = 0x3AA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA35Cu;
        // 0x3aa360: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA364u;
        goto label_3aa364;
    }
    ctx->pc = 0x3AA35Cu;
    SET_GPR_U32(ctx, 31, 0x3AA364u);
    ctx->pc = 0x3AA360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA35Cu;
    // 0x3aa360: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3AA35Cu, 0x3AA364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA364u;
label_3aa364:
    // 0x3aa364: 0x8fb6003c  lw          $s6, 0x3C($sp)
    ctx->pc = 0x3aa364u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3aa368:
    // 0x3aa368: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3aa368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3aa36c:
    // 0x3aa36c: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3aa36cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
label_3aa370:
    // 0x3aa370: 0x26c20024  addiu       $v0, $s6, 0x24
    ctx->pc = 0x3aa370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
label_3aa374:
    // 0x3aa374: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3aa374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3aa378:
    // 0x3aa378: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3aa378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3aa37c:
    // 0x3aa37c: 0x8ec30130  lw          $v1, 0x130($s6)
    ctx->pc = 0x3aa37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_3aa380:
    // 0x3aa380: 0x8ec40134  lw          $a0, 0x134($s6)
    ctx->pc = 0x3aa380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
label_3aa384:
    // 0x3aa384: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x3aa384u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_3aa388:
    // 0x3aa388: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3aa388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_3aa38c:
    // 0x3aa38c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x3aa38cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_3aa390:
    // 0x3aa390: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x3aa390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_3aa394:
    // 0x3aa394: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x3aa394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3aa398:
    // 0x3aa398: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x3aa398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
label_3aa39c:
    // 0x3aa39c: 0xc103722  jal         func_40DC88
label_3aa3a0:
    if (ctx->pc == 0x3AA3A0u) {
        ctx->pc = 0x3AA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA39Cu;
        // 0x3aa3a0: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3A4u;
        goto label_3aa3a4;
    }
    ctx->pc = 0x3AA39Cu;
    SET_GPR_U32(ctx, 31, 0x3AA3A4u);
    ctx->pc = 0x3AA3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA39Cu;
    // 0x3aa3a0: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3AA39Cu, 0x3AA3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3A4u;
label_3aa3a4:
    // 0x3aa3a4: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3aa3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3aa3a8:
    // 0x3aa3a8: 0x8ca40134  lw          $a0, 0x134($a1)
    ctx->pc = 0x3aa3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_3aa3ac:
    // 0x3aa3ac: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3aa3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3aa3b0:
    // 0x3aa3b0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3aa3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3aa3b4:
    // 0x3aa3b4: 0xc1036d2  jal         func_40DB48
label_3aa3b8:
    if (ctx->pc == 0x3AA3B8u) {
        ctx->pc = 0x3AA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3B4u;
        // 0x3aa3b8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3BCu;
        goto label_3aa3bc;
    }
    ctx->pc = 0x3AA3B4u;
    SET_GPR_U32(ctx, 31, 0x3AA3BCu);
    ctx->pc = 0x3AA3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3B4u;
    // 0x3aa3b8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AA3B4u, 0x3AA3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3BCu;
label_3aa3bc:
    // 0x3aa3bc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3aa3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3aa3c0:
    // 0x3aa3c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aa3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa3c4:
    // 0x3aa3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3aa3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa3c8:
    // 0x3aa3c8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x3aa3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3aa3cc:
    // 0x3aa3cc: 0xc0bb7e6  jal         func_2EDF98
label_3aa3d0:
    if (ctx->pc == 0x3AA3D0u) {
        ctx->pc = 0x3AA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3CCu;
        // 0x3aa3d0: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3D4u;
        goto label_3aa3d4;
    }
    ctx->pc = 0x3AA3CCu;
    SET_GPR_U32(ctx, 31, 0x3AA3D4u);
    ctx->pc = 0x3AA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3CCu;
    // 0x3aa3d0: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AA3CCu, 0x3AA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3D4u;
label_3aa3d4:
    // 0x3aa3d4: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_3aa3d8:
    if (ctx->pc == 0x3AA3D8u) {
        ctx->pc = 0x3AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3D4u;
        // 0x3aa3d8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3DCu;
        goto label_3aa3dc;
    }
    ctx->pc = 0x3AA3D4u;
    {
        const bool branch_taken_0x3aa3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3D4u;
        // 0x3aa3d8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3d4) {
            ctx->pc = 0x3AAB7Cu;
            goto label_3aab7c;
        }
    }
    ctx->pc = 0x3AA3DCu;
label_3aa3dc:
    // 0x3aa3dc: 0x0  nop
    ctx->pc = 0x3aa3dcu;
    // NOP
label_3aa3e0:
    // 0x3aa3e0: 0x2462ce80  addiu       $v0, $v1, -0x3180
    ctx->pc = 0x3aa3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3aa3e4:
    // 0x3aa3e4: 0xc107156  jal         func_41C558
label_3aa3e8:
    if (ctx->pc == 0x3AA3E8u) {
        ctx->pc = 0x3AA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3E4u;
        // 0x3aa3e8: 0x8c44050c  lw          $a0, 0x50C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3ECu;
        goto label_3aa3ec;
    }
    ctx->pc = 0x3AA3E4u;
    SET_GPR_U32(ctx, 31, 0x3AA3ECu);
    ctx->pc = 0x3AA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3E4u;
    // 0x3aa3e8: 0x8c44050c  lw          $a0, 0x50C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x3AA3E4u, 0x3AA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3ECu;
label_3aa3ec:
    // 0x3aa3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3aa3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aa3f0:
    // 0x3aa3f0: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_3aa3f4:
    if (ctx->pc == 0x3AA3F4u) {
        ctx->pc = 0x3AA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3F0u;
        // 0x3aa3f4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3F8u;
        goto label_3aa3f8;
    }
    ctx->pc = 0x3AA3F0u;
    {
        const bool branch_taken_0x3aa3f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3F0u;
        // 0x3aa3f4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3f0) {
            ctx->pc = 0x3AA400u;
            goto label_3aa400;
        }
    }
    ctx->pc = 0x3AA3F8u;
label_3aa3f8:
    // 0x3aa3f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3aa3fc:
    if (ctx->pc == 0x3AA3FCu) {
        ctx->pc = 0x3AA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3F8u;
        // 0x3aa3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA400u;
        goto label_3aa400;
    }
    ctx->pc = 0x3AA3F8u;
    {
        const bool branch_taken_0x3aa3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3F8u;
        // 0x3aa3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3f8) {
            ctx->pc = 0x3AA408u;
            goto label_3aa408;
        }
    }
    ctx->pc = 0x3AA400u;
label_3aa400:
    // 0x3aa400: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3aa400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3aa404:
    // 0x3aa404: 0x24a5dba4  addiu       $a1, $a1, -0x245C
    ctx->pc = 0x3aa404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957988));
label_3aa408:
    // 0x3aa408: 0xc107fa4  jal         func_41FE90
label_3aa40c:
    if (ctx->pc == 0x3AA40Cu) {
        ctx->pc = 0x3AA410u;
        goto label_3aa410;
    }
    ctx->pc = 0x3AA408u;
    SET_GPR_U32(ctx, 31, 0x3AA410u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x3AA408u, 0x3AA410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA410u;
label_3aa410:
    // 0x3aa410: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x3aa410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_3aa414:
    // 0x3aa414: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x3aa414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3aa418:
    // 0x3aa418: 0x108001d4  beqz        $a0, . + 4 + (0x1D4 << 2)
label_3aa41c:
    if (ctx->pc == 0x3AA41Cu) {
        ctx->pc = 0x3AA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA418u;
        // 0x3aa41c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA420u;
        goto label_3aa420;
    }
    ctx->pc = 0x3AA418u;
    {
        const bool branch_taken_0x3aa418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA418u;
        // 0x3aa41c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa418) {
            ctx->pc = 0x3AAB6Cu;
            goto label_3aab6c;
        }
    }
    ctx->pc = 0x3AA420u;
label_3aa420:
    // 0x3aa420: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3aa420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3aa424:
    // 0x3aa424: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3aa424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3aa428:
    // 0x3aa428: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3aa428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3aa42c:
    // 0x3aa42c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3aa42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_3aa430:
    // 0x3aa430: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x3aa430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3aa434:
    // 0x3aa434: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3aa434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3aa438:
    // 0x3aa438: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3aa438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3aa43c:
    // 0x3aa43c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x3aa43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_3aa440:
    // 0x3aa440: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x3aa440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_3aa444:
    // 0x3aa444: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3aa444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3aa448:
    // 0x3aa448: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3aa44c:
    if (ctx->pc == 0x3AA44Cu) {
        ctx->pc = 0x3AA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA448u;
        // 0x3aa44c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA450u;
        goto label_3aa450;
    }
    ctx->pc = 0x3AA448u;
    {
        const bool branch_taken_0x3aa448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA448u;
        // 0x3aa44c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa448) {
            ctx->pc = 0x3AA480u;
            goto label_3aa480;
        }
    }
    ctx->pc = 0x3AA450u;
label_3aa450:
    // 0x3aa450: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_3aa454:
    if (ctx->pc == 0x3AA454u) {
        ctx->pc = 0x3AA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA450u;
        // 0x3aa454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA458u;
        goto label_3aa458;
    }
    ctx->pc = 0x3AA450u;
    {
        const bool branch_taken_0x3aa450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA450u;
        // 0x3aa454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa450) {
            ctx->pc = 0x3AA468u;
            goto label_3aa468;
        }
    }
    ctx->pc = 0x3AA458u;
label_3aa458:
    // 0x3aa458: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3aa458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3aa45c:
    // 0x3aa45c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x3aa45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3aa460:
    // 0x3aa460: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_3aa464:
    if (ctx->pc == 0x3AA464u) {
        ctx->pc = 0x3AA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA460u;
        // 0x3aa464: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA468u;
        goto label_3aa468;
    }
    ctx->pc = 0x3AA460u;
    {
        const bool branch_taken_0x3aa460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA460u;
        // 0x3aa464: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa460) {
            ctx->pc = 0x3AA474u;
            goto label_3aa474;
        }
    }
    ctx->pc = 0x3AA468u;
label_3aa468:
    // 0x3aa468: 0xc10705c  jal         func_41C170
label_3aa46c:
    if (ctx->pc == 0x3AA46Cu) {
        ctx->pc = 0x3AA470u;
        goto label_3aa470;
    }
    ctx->pc = 0x3AA468u;
    SET_GPR_U32(ctx, 31, 0x3AA470u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3AA468u, 0x3AA470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA470u;
label_3aa470:
    // 0x3aa470: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3aa470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3aa474:
    // 0x3aa474: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3aa474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3aa478:
    // 0x3aa478: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3aa47c:
    if (ctx->pc == 0x3AA47Cu) {
        ctx->pc = 0x3AA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA478u;
        // 0x3aa47c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA480u;
        goto label_3aa480;
    }
    ctx->pc = 0x3AA478u;
    {
        const bool branch_taken_0x3aa478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA478u;
        // 0x3aa47c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa478) {
            ctx->pc = 0x3AA4A0u;
            goto label_3aa4a0;
        }
    }
    ctx->pc = 0x3AA480u;
label_3aa480:
    // 0x3aa480: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3aa480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3aa484:
    // 0x3aa484: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3aa484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3aa488:
    // 0x3aa488: 0xc107034  jal         func_41C0D0
label_3aa48c:
    if (ctx->pc == 0x3AA48Cu) {
        ctx->pc = 0x3AA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA488u;
        // 0x3aa48c: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA490u;
        goto label_3aa490;
    }
    ctx->pc = 0x3AA488u;
    SET_GPR_U32(ctx, 31, 0x3AA490u);
    ctx->pc = 0x3AA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA488u;
    // 0x3aa48c: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3AA488u, 0x3AA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA490u;
label_3aa490:
    // 0x3aa490: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3aa490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3aa494:
    // 0x3aa494: 0xc107078  jal         func_41C1E0
label_3aa498:
    if (ctx->pc == 0x3AA498u) {
        ctx->pc = 0x3AA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA494u;
        // 0x3aa498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA49Cu;
        goto label_3aa49c;
    }
    ctx->pc = 0x3AA494u;
    SET_GPR_U32(ctx, 31, 0x3AA49Cu);
    ctx->pc = 0x3AA498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA494u;
    // 0x3aa498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3AA494u, 0x3AA49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA49Cu;
label_3aa49c:
    // 0x3aa49c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3aa49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3aa4a0:
    // 0x3aa4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aa4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa4a4:
    // 0x3aa4a4: 0xc1073a8  jal         func_41CEA0
label_3aa4a8:
    if (ctx->pc == 0x3AA4A8u) {
        ctx->pc = 0x3AA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4A4u;
        // 0x3aa4a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA4ACu;
        goto label_3aa4ac;
    }
    ctx->pc = 0x3AA4A4u;
    SET_GPR_U32(ctx, 31, 0x3AA4ACu);
    ctx->pc = 0x3AA4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA4A4u;
    // 0x3aa4a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3AA4A4u, 0x3AA4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA4ACu;
label_3aa4ac:
    // 0x3aa4ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3aa4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3aa4b0:
    // 0x3aa4b0: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x3aa4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3aa4b4:
    // 0x3aa4b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3aa4b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3aa4b8:
    // 0x3aa4b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aa4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aa4bc:
    // 0x3aa4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aa4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa4c0:
    // 0x3aa4c0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3aa4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3aa4c4:
    // 0x3aa4c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3aa4c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aa4c8:
    // 0x3aa4c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3aa4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3aa4cc:
    // 0x3aa4cc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x3aa4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3aa4d0:
    // 0x3aa4d0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3aa4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_3aa4d4:
    // 0x3aa4d4: 0x46020603  div.s       $f24, $f0, $f2
    ctx->pc = 0x3aa4d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_3aa4d8:
    // 0x3aa4d8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3aa4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3aa4dc:
    // 0x3aa4dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aa4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aa4e0:
    // 0x3aa4e0: 0x46010643  div.s       $f25, $f0, $f1
    ctx->pc = 0x3aa4e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3aa4e4:
    // 0x3aa4e4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3aa4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3aa4e8:
    // 0x3aa4e8: 0xc0f0a5a  jal         func_3C2968
label_3aa4ec:
    if (ctx->pc == 0x3AA4ECu) {
        ctx->pc = 0x3AA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4E8u;
        // 0x3aa4ec: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA4F0u;
        goto label_3aa4f0;
    }
    ctx->pc = 0x3AA4E8u;
    SET_GPR_U32(ctx, 31, 0x3AA4F0u);
    ctx->pc = 0x3AA4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA4E8u;
    // 0x3aa4ec: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3AA4E8u, 0x3AA4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA4F0u;
label_3aa4f0:
    // 0x3aa4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3aa4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aa4f4:
    // 0x3aa4f4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3aa4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3aa4f8:
    // 0x3aa4f8: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3aa4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_3aa4fc:
    // 0x3aa4fc: 0x24a59a48  addiu       $a1, $a1, -0x65B8
    ctx->pc = 0x3aa4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941256));
label_3aa500:
    // 0x3aa500: 0x2643e880  addiu       $v1, $s2, -0x1780
    ctx->pc = 0x3aa500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_3aa504:
    // 0x3aa504: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aa504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aa508:
    // 0x3aa508: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x3aa508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_3aa50c:
    // 0x3aa50c: 0x40f809  jalr        $v0
label_3aa510:
    if (ctx->pc == 0x3AA510u) {
        ctx->pc = 0x3AA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA50Cu;
        // 0x3aa510: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA514u;
        goto label_3aa514;
    }
    ctx->pc = 0x3AA50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA514u);
        ctx->pc = 0x3AA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA50Cu;
        // 0x3aa510: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA50Cu, 0x3AA514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA514u;
label_3aa514:
    // 0x3aa514: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3aa514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3aa518:
    // 0x3aa518: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x3aa518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3aa51c:
    // 0x3aa51c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x3aa51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3aa520:
    // 0x3aa520: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x3aa520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_3aa524:
    // 0x3aa524: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3aa524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3aa528:
    // 0x3aa528: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3aa528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_3aa52c:
    // 0x3aa52c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3aa530:
    if (ctx->pc == 0x3AA530u) {
        ctx->pc = 0x3AA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA52Cu;
        // 0x3aa530: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA534u;
        goto label_3aa534;
    }
    ctx->pc = 0x3AA52Cu;
    {
        const bool branch_taken_0x3aa52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA52Cu;
        // 0x3aa530: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa52c) {
            ctx->pc = 0x3AA544u;
            goto label_3aa544;
        }
    }
    ctx->pc = 0x3AA534u;
label_3aa534:
    // 0x3aa534: 0x0  nop
    ctx->pc = 0x3aa534u;
    // NOP
label_3aa538:
    // 0x3aa538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3aa538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3aa53c:
    // 0x3aa53c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aa53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3aa540:
    // 0x3aa540: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3aa540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_3aa544:
    // 0x3aa544: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3aa544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3aa548:
    // 0x3aa548: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3aa548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3aa54c:
    // 0x3aa54c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3aa54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3aa550:
    // 0x3aa550: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3aa554:
    if (ctx->pc == 0x3AA554u) {
        ctx->pc = 0x3AA554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA550u;
        // 0x3aa554: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA558u;
        goto label_3aa558;
    }
    ctx->pc = 0x3AA550u;
    {
        const bool branch_taken_0x3aa550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA550u;
        // 0x3aa554: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa550) {
            ctx->pc = 0x3AA580u;
            goto label_3aa580;
        }
    }
    ctx->pc = 0x3AA558u;
label_3aa558:
    // 0x3aa558: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x3aa558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3aa55c:
    // 0x3aa55c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x3aa55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3aa560:
    // 0x3aa560: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3aa560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa564:
    // 0x3aa564: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x3aa564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3aa568:
    // 0x3aa568: 0x400013  mtlo        $v0
    ctx->pc = 0x3aa568u;
    ctx->lo = GPR_U64(ctx, 2);
label_3aa56c:
    // 0x3aa56c: 0xc0bb752  jal         func_2EDD48
label_3aa570:
    if (ctx->pc == 0x3AA570u) {
        ctx->pc = 0x3AA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA56Cu;
        // 0x3aa570: 0x70a32800  madd        $a1, $a1, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA574u;
        goto label_3aa574;
    }
    ctx->pc = 0x3AA56Cu;
    SET_GPR_U32(ctx, 31, 0x3AA574u);
    ctx->pc = 0x3AA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA56Cu;
    // 0x3aa570: 0x70a32800  madd        $a1, $a1, $v1 (Delay Slot)
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3AA56Cu, 0x3AA574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA574u;
label_3aa574:
    // 0x3aa574: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3aa578:
    if (ctx->pc == 0x3AA578u) {
        ctx->pc = 0x3AA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA574u;
        // 0x3aa578: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA57Cu;
        goto label_3aa57c;
    }
    ctx->pc = 0x3AA574u;
    {
        const bool branch_taken_0x3aa574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA574u;
        // 0x3aa578: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa574) {
            ctx->pc = 0x3AA538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa538;
        }
    }
    ctx->pc = 0x3AA57Cu;
label_3aa57c:
    // 0x3aa57c: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x3aa57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
label_3aa580:
    // 0x3aa580: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x3aa580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3aa584:
    // 0x3aa584: 0x18600175  blez        $v1, . + 4 + (0x175 << 2)
label_3aa588:
    if (ctx->pc == 0x3AA588u) {
        ctx->pc = 0x3AA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA584u;
        // 0x3aa588: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA58Cu;
        goto label_3aa58c;
    }
    ctx->pc = 0x3AA584u;
    {
        const bool branch_taken_0x3aa584 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3AA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA584u;
        // 0x3aa588: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa584) {
            ctx->pc = 0x3AAB5Cu;
            goto label_3aab5c;
        }
    }
    ctx->pc = 0x3AA58Cu;
label_3aa58c:
    // 0x3aa58c: 0x4483e000  mtc1        $v1, $f28
    ctx->pc = 0x3aa58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_3aa590:
    // 0x3aa590: 0x4680e720  cvt.s.w     $f28, $f28
    ctx->pc = 0x3aa590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[28], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
label_3aa594:
    // 0x3aa594: 0x18800163  blez        $a0, . + 4 + (0x163 << 2)
label_3aa598:
    if (ctx->pc == 0x3AA598u) {
        ctx->pc = 0x3AA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA594u;
        // 0x3aa598: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA59Cu;
        goto label_3aa59c;
    }
    ctx->pc = 0x3AA594u;
    {
        const bool branch_taken_0x3aa594 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3AA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA594u;
        // 0x3aa598: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa594) {
            ctx->pc = 0x3AAB24u;
            goto label_3aab24;
        }
    }
    ctx->pc = 0x3AA59Cu;
label_3aa59c:
    // 0x3aa59c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3aa59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3aa5a0:
    // 0x3aa5a0: 0x14b60160  bne         $a1, $s6, . + 4 + (0x160 << 2)
label_3aa5a4:
    if (ctx->pc == 0x3AA5A4u) {
        ctx->pc = 0x3AA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5A0u;
        // 0x3aa5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5A8u;
        goto label_3aa5a8;
    }
    ctx->pc = 0x3AA5A0u;
    {
        const bool branch_taken_0x3aa5a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        ctx->pc = 0x3AA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5A0u;
        // 0x3aa5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5a0) {
            ctx->pc = 0x3AAB24u;
            goto label_3aab24;
        }
    }
    ctx->pc = 0x3AA5A8u;
label_3aa5a8:
    // 0x3aa5a8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3aa5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3aa5ac:
    // 0x3aa5ac: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3aa5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3aa5b0:
    // 0x3aa5b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3aa5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3aa5b4:
    // 0x3aa5b4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3aa5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3aa5b8:
    // 0x3aa5b8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3aa5b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa5bc:
    // 0x3aa5bc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3aa5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_3aa5c0:
    // 0x3aa5c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3aa5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3aa5c4:
    // 0x3aa5c4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3aa5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3aa5c8:
    // 0x3aa5c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aa5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3aa5cc:
    // 0x3aa5cc: 0x10000134  b           . + 4 + (0x134 << 2)
label_3aa5d0:
    if (ctx->pc == 0x3AA5D0u) {
        ctx->pc = 0x3AA5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5CCu;
        // 0x3aa5d0: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5D4u;
        goto label_3aa5d4;
    }
    ctx->pc = 0x3AA5CCu;
    {
        const bool branch_taken_0x3aa5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5CCu;
        // 0x3aa5d0: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5cc) {
            ctx->pc = 0x3AAAA0u;
            goto label_3aaaa0;
        }
    }
    ctx->pc = 0x3AA5D4u;
label_3aa5d4:
    // 0x3aa5d4: 0x0  nop
    ctx->pc = 0x3aa5d4u;
    // NOP
label_3aa5d8:
    // 0x3aa5d8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3aa5dc:
    if (ctx->pc == 0x3AA5DCu) {
        ctx->pc = 0x3AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5D8u;
        // 0x3aa5dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5E0u;
        goto label_3aa5e0;
    }
    ctx->pc = 0x3AA5D8u;
    {
        const bool branch_taken_0x3aa5d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5D8u;
        // 0x3aa5dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5d8) {
            ctx->pc = 0x3AA5F4u;
            goto label_3aa5f4;
        }
    }
    ctx->pc = 0x3AA5E0u;
label_3aa5e0:
    // 0x3aa5e0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3aa5e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3aa5e4:
    // 0x3aa5e4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
label_3aa5e8:
    if (ctx->pc == 0x3AA5E8u) {
        ctx->pc = 0x3AA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5E4u;
        // 0x3aa5e8: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5ECu;
        goto label_3aa5ec;
    }
    ctx->pc = 0x3AA5E4u;
    {
        const bool branch_taken_0x3aa5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3AA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5E4u;
        // 0x3aa5e8: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5e4) {
            ctx->pc = 0x3AA5F8u;
            goto label_3aa5f8;
        }
    }
    ctx->pc = 0x3AA5ECu;
label_3aa5ec:
    // 0x3aa5ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3aa5f0:
    if (ctx->pc == 0x3AA5F0u) {
        ctx->pc = 0x3AA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5ECu;
        // 0x3aa5f0: 0x2751023  subu        $v0, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5F4u;
        goto label_3aa5f4;
    }
    ctx->pc = 0x3AA5ECu;
    {
        const bool branch_taken_0x3aa5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5ECu;
        // 0x3aa5f0: 0x2751023  subu        $v0, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5ec) {
            ctx->pc = 0x3AA610u;
            goto label_3aa610;
        }
    }
    ctx->pc = 0x3AA5F4u;
label_3aa5f4:
    // 0x3aa5f4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3aa5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3aa5f8:
    // 0x3aa5f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aa5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aa5fc:
    // 0x3aa5fc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3aa5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3aa600:
    // 0x3aa600: 0xc0f0a5a  jal         func_3C2968
label_3aa604:
    if (ctx->pc == 0x3AA604u) {
        ctx->pc = 0x3AA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA600u;
        // 0x3aa604: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA608u;
        goto label_3aa608;
    }
    ctx->pc = 0x3AA600u;
    SET_GPR_U32(ctx, 31, 0x3AA608u);
    ctx->pc = 0x3AA604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA600u;
    // 0x3aa604: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3AA600u, 0x3AA608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA608u;
label_3aa608:
    // 0x3aa608: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3aa60c:
    if (ctx->pc == 0x3AA60Cu) {
        ctx->pc = 0x3AA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA608u;
        // 0x3aa60c: 0x82630000  lb          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA610u;
        goto label_3aa610;
    }
    ctx->pc = 0x3AA608u;
    {
        const bool branch_taken_0x3aa608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA608u;
        // 0x3aa60c: 0x82630000  lb          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa608) {
            ctx->pc = 0x3AA688u;
            goto label_3aa688;
        }
    }
    ctx->pc = 0x3AA610u;
label_3aa610:
    // 0x3aa610: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x3aa610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_3aa614:
    // 0x3aa614: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_3aa618:
    if (ctx->pc == 0x3AA618u) {
        ctx->pc = 0x3AA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA614u;
        // 0x3aa618: 0x82630000  lb          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA61Cu;
        goto label_3aa61c;
    }
    ctx->pc = 0x3AA614u;
    {
        const bool branch_taken_0x3aa614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa614) {
            ctx->pc = 0x3AA618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA614u;
            // 0x3aa618: 0x82630000  lb          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA688u;
            goto label_3aa688;
        }
    }
    ctx->pc = 0x3AA61Cu;
label_3aa61c:
    // 0x3aa61c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3aa61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3aa620:
    // 0x3aa620: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3aa620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3aa624:
    // 0x3aa624: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3aa624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3aa628:
    // 0x3aa628: 0x40f809  jalr        $v0
label_3aa62c:
    if (ctx->pc == 0x3AA62Cu) {
        ctx->pc = 0x3AA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA628u;
        // 0x3aa62c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA630u;
        goto label_3aa630;
    }
    ctx->pc = 0x3AA628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA630u);
        ctx->pc = 0x3AA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA628u;
        // 0x3aa62c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA628u, 0x3AA630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA630u;
label_3aa630:
    // 0x3aa630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aa630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa634:
    // 0x3aa634: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3aa634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3aa638:
    // 0x3aa638: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3aa638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3aa63c:
    // 0x3aa63c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x3aa63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3aa640:
    // 0x3aa640: 0x54440011  bnel        $v0, $a0, . + 4 + (0x11 << 2)
label_3aa644:
    if (ctx->pc == 0x3AA644u) {
        ctx->pc = 0x3AA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA640u;
        // 0x3aa644: 0x82630000  lb          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA648u;
        goto label_3aa648;
    }
    ctx->pc = 0x3AA640u;
    {
        const bool branch_taken_0x3aa640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3aa640) {
            ctx->pc = 0x3AA644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA640u;
            // 0x3aa644: 0x82630000  lb          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA688u;
            goto label_3aa688;
        }
    }
    ctx->pc = 0x3AA648u;
label_3aa648:
    // 0x3aa648: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3aa648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aa64c:
    // 0x3aa64c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x3aa64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3aa650:
    // 0x3aa650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aa650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aa654:
    // 0x3aa654: 0xc0bb778  jal         func_2EDDE0
label_3aa658:
    if (ctx->pc == 0x3AA658u) {
        ctx->pc = 0x3AA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA654u;
        // 0x3aa658: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA65Cu;
        goto label_3aa65c;
    }
    ctx->pc = 0x3AA654u;
    SET_GPR_U32(ctx, 31, 0x3AA65Cu);
    ctx->pc = 0x3AA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA654u;
    // 0x3aa658: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3AA654u, 0x3AA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA65Cu;
label_3aa65c:
    // 0x3aa65c: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x3aa65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_3aa660:
    // 0x3aa660: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x3aa660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3aa664:
    // 0x3aa664: 0x8062ffff  lb          $v0, -0x1($v1)
    ctx->pc = 0x3aa664u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_3aa668:
    // 0x3aa668: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3aa668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3aa66c:
    // 0x3aa66c: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x3aa66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_3aa670:
    // 0x3aa670: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x3aa670u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_3aa674:
    // 0x3aa674: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3aa674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3aa678:
    // 0x3aa678: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x3aa678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_3aa67c:
    // 0x3aa67c: 0xc0f0a5a  jal         func_3C2968
label_3aa680:
    if (ctx->pc == 0x3AA680u) {
        ctx->pc = 0x3AA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA67Cu;
        // 0x3aa680: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA684u;
        goto label_3aa684;
    }
    ctx->pc = 0x3AA67Cu;
    SET_GPR_U32(ctx, 31, 0x3AA684u);
    ctx->pc = 0x3AA680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA67Cu;
    // 0x3aa680: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3AA67Cu, 0x3AA684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA684u;
label_3aa684:
    // 0x3aa684: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x3aa684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3aa688:
    // 0x3aa688: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3aa688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_3aa68c:
    // 0x3aa68c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3aa690:
    if (ctx->pc == 0x3AA690u) {
        ctx->pc = 0x3AA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA68Cu;
        // 0x3aa690: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA694u;
        goto label_3aa694;
    }
    ctx->pc = 0x3AA68Cu;
    {
        const bool branch_taken_0x3aa68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA68Cu;
        // 0x3aa690: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa68c) {
            ctx->pc = 0x3AA6A0u;
            goto label_3aa6a0;
        }
    }
    ctx->pc = 0x3AA694u;
label_3aa694:
    // 0x3aa694: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x3aa694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3aa698:
    // 0x3aa698: 0x1000005b  b           . + 4 + (0x5B << 2)
label_3aa69c:
    if (ctx->pc == 0x3AA69Cu) {
        ctx->pc = 0x3AA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA698u;
        // 0x3aa69c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6A0u;
        goto label_3aa6a0;
    }
    ctx->pc = 0x3AA698u;
    {
        const bool branch_taken_0x3aa698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA698u;
        // 0x3aa69c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa698) {
            ctx->pc = 0x3AA808u;
            goto label_3aa808;
        }
    }
    ctx->pc = 0x3AA6A0u;
label_3aa6a0:
    // 0x3aa6a0: 0x306200e0  andi        $v0, $v1, 0xE0
    ctx->pc = 0x3aa6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)224);
label_3aa6a4:
    // 0x3aa6a4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x3aa6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_3aa6a8:
    // 0x3aa6a8: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_3aa6ac:
    if (ctx->pc == 0x3AA6ACu) {
        ctx->pc = 0x3AA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6A8u;
        // 0x3aa6ac: 0x306200f0  andi        $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6B0u;
        goto label_3aa6b0;
    }
    ctx->pc = 0x3AA6A8u;
    {
        const bool branch_taken_0x3aa6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6A8u;
        // 0x3aa6ac: 0x306200f0  andi        $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6a8) {
            ctx->pc = 0x3AA6CCu;
            goto label_3aa6cc;
        }
    }
    ctx->pc = 0x3AA6B0u;
label_3aa6b0:
    // 0x3aa6b0: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x3aa6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3aa6b4:
    // 0x3aa6b4: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x3aa6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_3aa6b8:
    // 0x3aa6b8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3aa6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3aa6bc:
    // 0x3aa6bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3aa6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aa6c0:
    // 0x3aa6c0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aa6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aa6c4:
    // 0x3aa6c4: 0x10000050  b           . + 4 + (0x50 << 2)
label_3aa6c8:
    if (ctx->pc == 0x3AA6C8u) {
        ctx->pc = 0x3AA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6C4u;
        // 0x3aa6c8: 0x43a025  or          $s4, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6CCu;
        goto label_3aa6cc;
    }
    ctx->pc = 0x3AA6C4u;
    {
        const bool branch_taken_0x3aa6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6C4u;
        // 0x3aa6c8: 0x43a025  or          $s4, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6c4) {
            ctx->pc = 0x3AA808u;
            goto label_3aa808;
        }
    }
    ctx->pc = 0x3AA6CCu;
label_3aa6cc:
    // 0x3aa6cc: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x3aa6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_3aa6d0:
    // 0x3aa6d0: 0x1445000c  bne         $v0, $a1, . + 4 + (0xC << 2)
label_3aa6d4:
    if (ctx->pc == 0x3AA6D4u) {
        ctx->pc = 0x3AA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6D0u;
        // 0x3aa6d4: 0x306200f8  andi        $v0, $v1, 0xF8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6D8u;
        goto label_3aa6d8;
    }
    ctx->pc = 0x3AA6D0u;
    {
        const bool branch_taken_0x3aa6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6D0u;
        // 0x3aa6d4: 0x306200f8  andi        $v0, $v1, 0xF8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6d0) {
            ctx->pc = 0x3AA704u;
            goto label_3aa704;
        }
    }
    ctx->pc = 0x3AA6D8u;
label_3aa6d8:
    // 0x3aa6d8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x3aa6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3aa6dc:
    // 0x3aa6dc: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x3aa6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_3aa6e0:
    // 0x3aa6e0: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x3aa6e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3aa6e4:
    // 0x3aa6e4: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3aa6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_3aa6e8:
    // 0x3aa6e8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3aa6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_3aa6ec:
    // 0x3aa6ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3aa6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3aa6f0:
    // 0x3aa6f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3aa6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3aa6f4:
    // 0x3aa6f4: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3aa6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3aa6f8:
    // 0x3aa6f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aa6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3aa6fc:
    // 0x3aa6fc: 0x10000042  b           . + 4 + (0x42 << 2)
label_3aa700:
    if (ctx->pc == 0x3AA700u) {
        ctx->pc = 0x3AA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6FCu;
        // 0x3aa700: 0x64a025  or          $s4, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA704u;
        goto label_3aa704;
    }
    ctx->pc = 0x3AA6FCu;
    {
        const bool branch_taken_0x3aa6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6FCu;
        // 0x3aa700: 0x64a025  or          $s4, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6fc) {
            ctx->pc = 0x3AA808u;
            goto label_3aa808;
        }
    }
    ctx->pc = 0x3AA704u;
label_3aa704:
    // 0x3aa704: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3aa704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3aa708:
    // 0x3aa708: 0x14450010  bne         $v0, $a1, . + 4 + (0x10 << 2)
label_3aa70c:
    if (ctx->pc == 0x3AA70Cu) {
        ctx->pc = 0x3AA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA708u;
        // 0x3aa70c: 0x306200fc  andi        $v0, $v1, 0xFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA710u;
        goto label_3aa710;
    }
    ctx->pc = 0x3AA708u;
    {
        const bool branch_taken_0x3aa708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA708u;
        // 0x3aa70c: 0x306200fc  andi        $v0, $v1, 0xFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa708) {
            ctx->pc = 0x3AA74Cu;
            goto label_3aa74c;
        }
    }
    ctx->pc = 0x3AA710u;
label_3aa710:
    // 0x3aa710: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x3aa710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_3aa714:
    // 0x3aa714: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x3aa714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3aa718:
    // 0x3aa718: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x3aa718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3aa71c:
    // 0x3aa71c: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x3aa71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
label_3aa720:
    // 0x3aa720: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aa720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aa724:
    // 0x3aa724: 0x92650003  lbu         $a1, 0x3($s3)
    ctx->pc = 0x3aa724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_3aa728:
    // 0x3aa728: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3aa728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_3aa72c:
    // 0x3aa72c: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3aa72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3aa730:
    // 0x3aa730: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3aa730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3aa734:
    // 0x3aa734: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x3aa734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_3aa738:
    // 0x3aa738: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x3aa738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_3aa73c:
    // 0x3aa73c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3aa73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3aa740:
    // 0x3aa740: 0x45a025  or          $s4, $v0, $a1
    ctx->pc = 0x3aa740u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3aa744:
    // 0x3aa744: 0x10000030  b           . + 4 + (0x30 << 2)
label_3aa748:
    if (ctx->pc == 0x3AA748u) {
        ctx->pc = 0x3AA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA744u;
        // 0x3aa748: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA74Cu;
        goto label_3aa74c;
    }
    ctx->pc = 0x3AA744u;
    {
        const bool branch_taken_0x3aa744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA744u;
        // 0x3aa748: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa744) {
            ctx->pc = 0x3AA808u;
            goto label_3aa808;
        }
    }
    ctx->pc = 0x3AA74Cu;
label_3aa74c:
    // 0x3aa74c: 0x240500f8  addiu       $a1, $zero, 0xF8
    ctx->pc = 0x3aa74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_3aa750:
    // 0x3aa750: 0x14450014  bne         $v0, $a1, . + 4 + (0x14 << 2)
label_3aa754:
    if (ctx->pc == 0x3AA754u) {
        ctx->pc = 0x3AA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA750u;
        // 0x3aa754: 0x306200fe  andi        $v0, $v1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA758u;
        goto label_3aa758;
    }
    ctx->pc = 0x3AA750u;
    {
        const bool branch_taken_0x3aa750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA750u;
        // 0x3aa754: 0x306200fe  andi        $v0, $v1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa750) {
            ctx->pc = 0x3AA7A4u;
            goto label_3aa7a4;
        }
    }
    ctx->pc = 0x3AA758u;
label_3aa758:
    // 0x3aa758: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x3aa758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3aa75c:
    // 0x3aa75c: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x3aa75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_3aa760:
    // 0x3aa760: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x3aa760u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3aa764:
    // 0x3aa764: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3aa764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3aa768:
    // 0x3aa768: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aa768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aa76c:
    // 0x3aa76c: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x3aa76cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_3aa770:
    // 0x3aa770: 0x31c80  sll         $v1, $v1, 18
    ctx->pc = 0x3aa770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_3aa774:
    // 0x3aa774: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x3aa774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_3aa778:
    // 0x3aa778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3aa778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3aa77c:
    // 0x3aa77c: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x3aa77cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
label_3aa780:
    // 0x3aa780: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3aa780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3aa784:
    // 0x3aa784: 0x92630004  lbu         $v1, 0x4($s3)
    ctx->pc = 0x3aa784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_3aa788:
    // 0x3aa788: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3aa788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3aa78c:
    // 0x3aa78c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x3aa78cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_3aa790:
    // 0x3aa790: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3aa790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3aa794:
    // 0x3aa794: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aa794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aa798:
    // 0x3aa798: 0x43a025  or          $s4, $v0, $v1
    ctx->pc = 0x3aa798u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3aa79c:
    // 0x3aa79c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3aa7a0:
    if (ctx->pc == 0x3AA7A0u) {
        ctx->pc = 0x3AA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA79Cu;
        // 0x3aa7a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7A4u;
        goto label_3aa7a4;
    }
    ctx->pc = 0x3AA79Cu;
    {
        const bool branch_taken_0x3aa79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA79Cu;
        // 0x3aa7a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa79c) {
            ctx->pc = 0x3AA808u;
            goto label_3aa808;
        }
    }
    ctx->pc = 0x3AA7A4u;
label_3aa7a4:
    // 0x3aa7a4: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x3aa7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_3aa7a8:
    // 0x3aa7a8: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
label_3aa7ac:
    if (ctx->pc == 0x3AA7ACu) {
        ctx->pc = 0x3AA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7A8u;
        // 0x3aa7ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7B0u;
        goto label_3aa7b0;
    }
    ctx->pc = 0x3AA7A8u;
    {
        const bool branch_taken_0x3aa7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3aa7a8) {
            ctx->pc = 0x3AA7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA7A8u;
            // 0x3aa7ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA808u;
            goto label_3aa808;
        }
    }
    ctx->pc = 0x3AA7B0u;
label_3aa7b0:
    // 0x3aa7b0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3aa7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3aa7b4:
    // 0x3aa7b4: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x3aa7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3aa7b8:
    // 0x3aa7b8: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x3aa7b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3aa7bc:
    // 0x3aa7bc: 0x31f80  sll         $v1, $v1, 30
    ctx->pc = 0x3aa7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 30));
label_3aa7c0:
    // 0x3aa7c0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3aa7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_3aa7c4:
    // 0x3aa7c4: 0x92660003  lbu         $a2, 0x3($s3)
    ctx->pc = 0x3aa7c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_3aa7c8:
    // 0x3aa7c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3aa7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3aa7cc:
    // 0x3aa7cc: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3aa7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3aa7d0:
    // 0x3aa7d0: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x3aa7d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_3aa7d4:
    // 0x3aa7d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aa7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3aa7d8:
    // 0x3aa7d8: 0x42480  sll         $a0, $a0, 18
    ctx->pc = 0x3aa7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 18));
label_3aa7dc:
    // 0x3aa7dc: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x3aa7dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_3aa7e0:
    // 0x3aa7e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3aa7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3aa7e4:
    // 0x3aa7e4: 0x63300  sll         $a2, $a2, 12
    ctx->pc = 0x3aa7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
label_3aa7e8:
    // 0x3aa7e8: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x3aa7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_3aa7ec:
    // 0x3aa7ec: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x3aa7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_3aa7f0:
    // 0x3aa7f0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x3aa7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_3aa7f4:
    // 0x3aa7f4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3aa7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_3aa7f8:
    // 0x3aa7f8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3aa7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3aa7fc:
    // 0x3aa7fc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3aa7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_3aa800:
    // 0x3aa800: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x3aa800u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3aa804:
    // 0x3aa804: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3aa804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3aa808:
    // 0x3aa808: 0x18a0009e  blez        $a1, . + 4 + (0x9E << 2)
label_3aa80c:
    if (ctx->pc == 0x3AA80Cu) {
        ctx->pc = 0x3AA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA808u;
        // 0x3aa80c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA810u;
        goto label_3aa810;
    }
    ctx->pc = 0x3AA808u;
    {
        const bool branch_taken_0x3aa808 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3AA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA808u;
        // 0x3aa80c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa808) {
            ctx->pc = 0x3AAA84u;
            goto label_3aaa84;
        }
    }
    ctx->pc = 0x3AA810u;
label_3aa810:
    // 0x3aa810: 0x94102a  slt         $v0, $a0, $s4
    ctx->pc = 0x3aa810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3aa814:
    // 0x3aa814: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
label_3aa818:
    if (ctx->pc == 0x3AA818u) {
        ctx->pc = 0x3AA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA814u;
        // 0x3aa818: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA81Cu;
        goto label_3aa81c;
    }
    ctx->pc = 0x3AA814u;
    {
        const bool branch_taken_0x3aa814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA814u;
        // 0x3aa818: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa814) {
            ctx->pc = 0x3AAA88u;
            goto label_3aaa88;
        }
    }
    ctx->pc = 0x3AA81Cu;
label_3aa81c:
    // 0x3aa81c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3aa81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3aa820:
    // 0x3aa820: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x3aa820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_3aa824:
    // 0x3aa824: 0x2452ce80  addiu       $s2, $v0, -0x3180
    ctx->pc = 0x3aa824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3aa828:
    // 0x3aa828: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3aa828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3aa82c:
    // 0x3aa82c: 0x8e440d78  lw          $a0, 0xD78($s2)
    ctx->pc = 0x3aa82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
label_3aa830:
    // 0x3aa830: 0x4497a800  mtc1        $s7, $f21
    ctx->pc = 0x3aa830u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3aa834:
    // 0x3aa834: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x3aa834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3aa838:
    // 0x3aa838: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3aa838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3aa83c:
    // 0x3aa83c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3aa83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3aa840:
    // 0x3aa840: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x3aa840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_3aa844:
    // 0x3aa844: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x3aa844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3aa848:
    // 0x3aa848: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3aa848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3aa84c:
    // 0x3aa84c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x3aa84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3aa850:
    // 0x3aa850: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x3aa850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3aa854:
    // 0x3aa854: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3aa854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3aa858:
    // 0x3aa858: 0xc7b60044  lwc1        $f22, 0x44($sp)
    ctx->pc = 0x3aa858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3aa85c:
    // 0x3aa85c: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x3aa85cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3aa860:
    // 0x3aa860: 0xc7b7005c  lwc1        $f23, 0x5C($sp)
    ctx->pc = 0x3aa860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3aa864:
    // 0x3aa864: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x3aa864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_3aa868:
    // 0x3aa868: 0x65b823  subu        $s7, $v1, $a1
    ctx->pc = 0x3aa868u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3aa86c:
    // 0x3aa86c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3aa86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3aa870:
    // 0x3aa870: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_3aa874:
    if (ctx->pc == 0x3AA874u) {
        ctx->pc = 0x3AA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA870u;
        // 0x3aa874: 0x247e0001  addiu       $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA878u;
        goto label_3aa878;
    }
    ctx->pc = 0x3AA870u;
    {
        const bool branch_taken_0x3aa870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA870u;
        // 0x3aa874: 0x247e0001  addiu       $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa870) {
            ctx->pc = 0x3AA970u;
            goto label_3aa970;
        }
    }
    ctx->pc = 0x3AA878u;
label_3aa878:
    // 0x3aa878: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x3aa878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3aa87c:
    // 0x3aa87c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3aa87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3aa880:
    // 0x3aa880: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3aa880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3aa884:
    // 0x3aa884: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3aa884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_3aa888:
    // 0x3aa888: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x3aa888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3aa88c:
    // 0x3aa88c: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x3aa88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_3aa890:
    // 0x3aa890: 0x40f809  jalr        $v0
label_3aa894:
    if (ctx->pc == 0x3AA894u) {
        ctx->pc = 0x3AA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA890u;
        // 0x3aa894: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA898u;
        goto label_3aa898;
    }
    ctx->pc = 0x3AA890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA898u);
        ctx->pc = 0x3AA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA890u;
        // 0x3aa894: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA890u, 0x3AA898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA898u;
label_3aa898:
    // 0x3aa898: 0x8e460d78  lw          $a2, 0xD78($s2)
    ctx->pc = 0x3aa898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
label_3aa89c:
    // 0x3aa89c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3aa89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa8a0:
    // 0x3aa8a0: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x3aa8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3aa8a4:
    // 0x3aa8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa8a8:
    // 0x3aa8a8: 0xc0bb778  jal         func_2EDDE0
label_3aa8ac:
    if (ctx->pc == 0x3AA8ACu) {
        ctx->pc = 0x3AA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8A8u;
        // 0x3aa8ac: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8B0u;
        goto label_3aa8b0;
    }
    ctx->pc = 0x3AA8A8u;
    SET_GPR_U32(ctx, 31, 0x3AA8B0u);
    ctx->pc = 0x3AA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA8A8u;
    // 0x3aa8ac: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3AA8A8u, 0x3AA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA8B0u;
label_3aa8b0:
    // 0x3aa8b0: 0x8e450d78  lw          $a1, 0xD78($s2)
    ctx->pc = 0x3aa8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
label_3aa8b4:
    // 0x3aa8b4: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x3aa8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3aa8b8:
    // 0x3aa8b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3aa8bc:
    if (ctx->pc == 0x3AA8BCu) {
        ctx->pc = 0x3AA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8B8u;
        // 0x3aa8bc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8C0u;
        goto label_3aa8c0;
    }
    ctx->pc = 0x3AA8B8u;
    {
        const bool branch_taken_0x3aa8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8B8u;
        // 0x3aa8bc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8b8) {
            ctx->pc = 0x3AA93Cu;
            goto label_3aa93c;
        }
    }
    ctx->pc = 0x3AA8C0u;
label_3aa8c0:
    // 0x3aa8c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3aa8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aa8c4:
    // 0x3aa8c4: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x3aa8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3aa8c8:
    // 0x3aa8c8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3aa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3aa8cc:
    // 0x3aa8cc: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3aa8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_3aa8d0:
    // 0x3aa8d0: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3aa8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3aa8d4:
    // 0x3aa8d4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_3aa8d8:
    if (ctx->pc == 0x3AA8D8u) {
        ctx->pc = 0x3AA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8D4u;
        // 0x3aa8d8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8DCu;
        goto label_3aa8dc;
    }
    ctx->pc = 0x3AA8D4u;
    {
        const bool branch_taken_0x3aa8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8D4u;
        // 0x3aa8d8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8d4) {
            ctx->pc = 0x3AA918u;
            goto label_3aa918;
        }
    }
    ctx->pc = 0x3AA8DCu;
label_3aa8dc:
    // 0x3aa8dc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3aa8dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3aa8e0:
    // 0x3aa8e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3aa8e4:
    if (ctx->pc == 0x3AA8E4u) {
        ctx->pc = 0x3AA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8E0u;
        // 0x3aa8e4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8E8u;
        goto label_3aa8e8;
    }
    ctx->pc = 0x3AA8E0u;
    {
        const bool branch_taken_0x3aa8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8E0u;
        // 0x3aa8e4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8e0) {
            ctx->pc = 0x3AA908u;
            goto label_3aa908;
        }
    }
    ctx->pc = 0x3AA8E8u;
label_3aa8e8:
    // 0x3aa8e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3aa8ec:
    if (ctx->pc == 0x3AA8ECu) {
        ctx->pc = 0x3AA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8E8u;
        // 0x3aa8ec: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8F0u;
        goto label_3aa8f0;
    }
    ctx->pc = 0x3AA8E8u;
    {
        const bool branch_taken_0x3aa8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa8e8) {
            ctx->pc = 0x3AA8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA8E8u;
            // 0x3aa8ec: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA900u;
            goto label_3aa900;
        }
    }
    ctx->pc = 0x3AA8F0u;
label_3aa8f0:
    // 0x3aa8f0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3aa8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_3aa8f4:
    // 0x3aa8f4: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x3aa8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3aa8f8:
    // 0x3aa8f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3aa8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3aa8fc:
    // 0x3aa8fc: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x3aa8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_3aa900:
    // 0x3aa900: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3aa900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3aa904:
    // 0x3aa904: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3aa904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3aa908:
    // 0x3aa908: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x3aa908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_3aa90c:
    // 0x3aa90c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3aa90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3aa910:
    // 0x3aa910: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3aa914:
    if (ctx->pc == 0x3AA914u) {
        ctx->pc = 0x3AA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA910u;
        // 0x3aa914: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA918u;
        goto label_3aa918;
    }
    ctx->pc = 0x3AA910u;
    {
        const bool branch_taken_0x3aa910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA910u;
        // 0x3aa914: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa910) {
            ctx->pc = 0x3AA93Cu;
            goto label_3aa93c;
        }
    }
    ctx->pc = 0x3AA918u;
label_3aa918:
    // 0x3aa918: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3aa918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3aa91c:
    // 0x3aa91c: 0x0  nop
    ctx->pc = 0x3aa91cu;
    // NOP
label_3aa920:
    // 0x3aa920: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3aa920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_3aa924:
    // 0x3aa924: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3aa924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_3aa928:
    // 0x3aa928: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x3aa928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_3aa92c:
    // 0x3aa92c: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x3aa92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_3aa930:
    // 0x3aa930: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x3aa930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_3aa934:
    // 0x3aa934: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_3aa938:
    if (ctx->pc == 0x3AA938u) {
        ctx->pc = 0x3AA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA934u;
        // 0x3aa938: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA93Cu;
        goto label_3aa93c;
    }
    ctx->pc = 0x3AA934u;
    {
        const bool branch_taken_0x3aa934 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA934u;
        // 0x3aa938: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa934) {
            ctx->pc = 0x3AA920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa920;
        }
    }
    ctx->pc = 0x3AA93Cu;
label_3aa93c:
    // 0x3aa93c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x3aa93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3aa940:
    // 0x3aa940: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3aa944:
    if (ctx->pc == 0x3AA944u) {
        ctx->pc = 0x3AA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA940u;
        // 0x3aa944: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA948u;
        goto label_3aa948;
    }
    ctx->pc = 0x3AA940u;
    {
        const bool branch_taken_0x3aa940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA940u;
        // 0x3aa944: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa940) {
            ctx->pc = 0x3AA958u;
            goto label_3aa958;
        }
    }
    ctx->pc = 0x3AA948u;
label_3aa948:
    // 0x3aa948: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3aa948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3aa94c:
    // 0x3aa94c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3aa94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3aa950:
    // 0x3aa950: 0x40f809  jalr        $v0
label_3aa954:
    if (ctx->pc == 0x3AA954u) {
        ctx->pc = 0x3AA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA950u;
        // 0x3aa954: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA958u;
        goto label_3aa958;
    }
    ctx->pc = 0x3AA950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA958u);
        ctx->pc = 0x3AA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA950u;
        // 0x3aa954: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA950u, 0x3AA958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA958u;
label_3aa958:
    // 0x3aa958: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3aa958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3aa95c:
    // 0x3aa95c: 0xafb1002c  sw          $s1, 0x2C($sp)
    ctx->pc = 0x3aa95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 17));
label_3aa960:
    // 0x3aa960: 0x2484ce80  addiu       $a0, $a0, -0x3180
    ctx->pc = 0x3aa960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
label_3aa964:
    // 0x3aa964: 0xac900d78  sw          $s0, 0xD78($a0)
    ctx->pc = 0x3aa964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3448), GPR_U32(ctx, 16));
label_3aa968:
    // 0x3aa968: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x3aa968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3aa96c:
    // 0x3aa96c: 0xac850d74  sw          $a1, 0xD74($a0)
    ctx->pc = 0x3aa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3444), GPR_U32(ctx, 5));
label_3aa970:
    // 0x3aa970: 0x2a820080  slti        $v0, $s4, 0x80
    ctx->pc = 0x3aa970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)128) ? 1 : 0);
label_3aa974:
    // 0x3aa974: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3aa978:
    if (ctx->pc == 0x3AA978u) {
        ctx->pc = 0x3AA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA974u;
        // 0x3aa978: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA97Cu;
        goto label_3aa97c;
    }
    ctx->pc = 0x3AA974u;
    {
        const bool branch_taken_0x3aa974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA974u;
        // 0x3aa978: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa974) {
            ctx->pc = 0x3AA9A0u;
            goto label_3aa9a0;
        }
    }
    ctx->pc = 0x3AA97Cu;
label_3aa97c:
    // 0x3aa97c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x3aa97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3aa980:
    // 0x3aa980: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3aa980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3aa984:
    // 0x3aa984: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x3aa984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3aa988:
    // 0x3aa988: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3aa988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3aa98c:
    // 0x3aa98c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3aa98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3aa990:
    // 0x3aa990: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x3aa990u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
label_3aa994:
    // 0x3aa994: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3aa994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3aa998:
    // 0x3aa998: 0x10000005  b           . + 4 + (0x5 << 2)
label_3aa99c:
    if (ctx->pc == 0x3AA99Cu) {
        ctx->pc = 0x3AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA998u;
        // 0x3aa99c: 0xac740000  sw          $s4, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA9A0u;
        goto label_3aa9a0;
    }
    ctx->pc = 0x3AA998u;
    {
        const bool branch_taken_0x3aa998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA998u;
        // 0x3aa99c: 0xac740000  sw          $s4, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa998) {
            ctx->pc = 0x3AA9B0u;
            goto label_3aa9b0;
        }
    }
    ctx->pc = 0x3AA9A0u;
label_3aa9a0:
    // 0x3aa9a0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x3aa9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_3aa9a4:
    // 0x3aa9a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3aa9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3aa9a8:
    // 0x3aa9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aa9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aa9ac:
    // 0x3aa9ac: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x3aa9acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_3aa9b0:
    // 0x3aa9b0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x3aa9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3aa9b4:
    // 0x3aa9b4: 0x26e4fffd  addiu       $a0, $s7, -0x3
    ctx->pc = 0x3aa9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967293));
label_3aa9b8:
    // 0x3aa9b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aa9b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa9bc:
    // 0x3aa9bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa9bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3aa9c0:
    // 0x3aa9c0: 0xafbe0028  sw          $fp, 0x28($sp)
    ctx->pc = 0x3aa9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
label_3aa9c4:
    // 0x3aa9c4: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x3aa9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
label_3aa9c8:
    // 0x3aa9c8: 0x461ba8c0  add.s       $f3, $f21, $f27
    ctx->pc = 0x3aa9c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[27]);
label_3aa9cc:
    // 0x3aa9cc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3aa9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3aa9d0:
    // 0x3aa9d0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3aa9d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3aa9d4:
    // 0x3aa9d4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3aa9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3aa9d8:
    // 0x3aa9d8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3aa9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3aa9dc:
    // 0x3aa9dc: 0x461ba080  add.s       $f2, $f20, $f27
    ctx->pc = 0x3aa9dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[27]);
label_3aa9e0:
    // 0x3aa9e0: 0x461ab841  sub.s       $f1, $f23, $f26
    ctx->pc = 0x3aa9e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[26]);
label_3aa9e4:
    // 0x3aa9e4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x3aa9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3aa9e8:
    // 0x3aa9e8: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x3aa9e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_3aa9ec:
    // 0x3aa9ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3aa9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa9f0:
    // 0x3aa9f0: 0x461ab001  sub.s       $f0, $f22, $f26
    ctx->pc = 0x3aa9f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[26]);
label_3aa9f4:
    // 0x3aa9f4: 0x461918c2  mul.s       $f3, $f3, $f25
    ctx->pc = 0x3aa9f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
label_3aa9f8:
    // 0x3aa9f8: 0xa062001c  sb          $v0, 0x1C($v1)
    ctx->pc = 0x3aa9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 2));
label_3aa9fc:
    // 0x3aa9fc: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x3aa9fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
label_3aaa00:
    // 0x3aaa00: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x3aaa00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_3aaa04:
    // 0x3aaa04: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x3aaa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3aaa08:
    // 0x3aaa08: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x3aaa08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_3aaa0c:
    // 0x3aaa0c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3aaa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3aaa10:
    // 0x3aaa10: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3aaa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3aaa14:
    // 0x3aaa14: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3aaa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3aaa18:
    // 0x3aaa18: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3aaa18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3aaa1c:
    // 0x3aaa1c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x3aaa1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3aaa20:
    // 0x3aaa20: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3aaa20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3aaa24:
    // 0x3aaa24: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3aaa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_3aaa28:
    // 0x3aaa28: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x3aaa28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_3aaa2c:
    // 0x3aaa2c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3aaa30:
    if (ctx->pc == 0x3AAA30u) {
        ctx->pc = 0x3AAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA2Cu;
        // 0x3aaa30: 0xe4640000  swc1        $f4, 0x0($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAA34u;
        goto label_3aaa34;
    }
    ctx->pc = 0x3AAA2Cu;
    {
        const bool branch_taken_0x3aaa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA2Cu;
        // 0x3aaa30: 0xe4640000  swc1        $f4, 0x0($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa2c) {
            ctx->pc = 0x3AAA90u;
            goto label_3aaa90;
        }
    }
    ctx->pc = 0x3AAA34u;
label_3aaa34:
    // 0x3aaa34: 0x8ec40134  lw          $a0, 0x134($s6)
    ctx->pc = 0x3aaa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
label_3aaa38:
    // 0x3aaa38: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3aaa38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3aaa3c:
    // 0x3aaa3c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3aaa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3aaa40:
    // 0x3aaa40: 0xc103722  jal         func_40DC88
label_3aaa44:
    if (ctx->pc == 0x3AAA44u) {
        ctx->pc = 0x3AAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA40u;
        // 0x3aaa44: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAA48u;
        goto label_3aaa48;
    }
    ctx->pc = 0x3AAA40u;
    SET_GPR_U32(ctx, 31, 0x3AAA48u);
    ctx->pc = 0x3AAA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA40u;
    // 0x3aaa44: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3AAA40u, 0x3AAA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA48u;
label_3aaa48:
    // 0x3aaa48: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x3aaa48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3aaa4c:
    // 0x3aaa4c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3aaa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_3aaa50:
    // 0x3aaa50: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x3aaa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
label_3aaa54:
    // 0x3aaa54: 0xc1036d2  jal         func_40DB48
label_3aaa58:
    if (ctx->pc == 0x3AAA58u) {
        ctx->pc = 0x3AAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA54u;
        // 0x3aaa58: 0x8ec40134  lw          $a0, 0x134($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAA5Cu;
        goto label_3aaa5c;
    }
    ctx->pc = 0x3AAA54u;
    SET_GPR_U32(ctx, 31, 0x3AAA5Cu);
    ctx->pc = 0x3AAA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA54u;
    // 0x3aaa58: 0x8ec40134  lw          $a0, 0x134($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AAA54u, 0x3AAA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA5Cu;
label_3aaa5c:
    // 0x3aaa5c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3aaa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3aaa60:
    // 0x3aaa60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aaa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aaa64:
    // 0x3aaa64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3aaa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3aaa68:
    // 0x3aaa68: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x3aaa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3aaa6c:
    // 0x3aaa6c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3aaa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3aaa70:
    // 0x3aaa70: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x3aaa70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3aaa74:
    // 0x3aaa74: 0xc0bb7e6  jal         func_2EDF98
label_3aaa78:
    if (ctx->pc == 0x3AAA78u) {
        ctx->pc = 0x3AAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA74u;
        // 0x3aaa78: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAA7Cu;
        goto label_3aaa7c;
    }
    ctx->pc = 0x3AAA74u;
    SET_GPR_U32(ctx, 31, 0x3AAA7Cu);
    ctx->pc = 0x3AAA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA74u;
    // 0x3aaa78: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AAA74u, 0x3AAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA7Cu;
label_3aaa7c:
    // 0x3aaa7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3aaa80:
    if (ctx->pc == 0x3AAA80u) {
        ctx->pc = 0x3AAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA7Cu;
        // 0x3aaa80: 0x8fb70044  lw          $s7, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAA84u;
        goto label_3aaa84;
    }
    ctx->pc = 0x3AAA7Cu;
    {
        const bool branch_taken_0x3aaa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA7Cu;
        // 0x3aaa80: 0x8fb70044  lw          $s7, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa7c) {
            ctx->pc = 0x3AAA94u;
            goto label_3aaa94;
        }
    }
    ctx->pc = 0x3AAA84u;
label_3aaa84:
    // 0x3aaa84: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3aaa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3aaa88:
    // 0x3aaa88: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3aaa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3aaa8c:
    // 0x3aaa8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x3aaa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_3aaa90:
    // 0x3aaa90: 0x8fb70044  lw          $s7, 0x44($sp)
    ctx->pc = 0x3aaa90u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3aaa94:
    // 0x3aaa94: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x3aaa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3aaa98:
    // 0x3aaa98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3aaa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3aaa9c:
    // 0x3aaa9c: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x3aaa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
label_3aaaa0:
    // 0x3aaaa0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3aaaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3aaaa4:
    // 0x3aaaa4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3aaaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3aaaa8:
    // 0x3aaaa8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3aaaa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3aaaac:
    // 0x3aaaac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3aaab0:
    if (ctx->pc == 0x3AAAB0u) {
        ctx->pc = 0x3AAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAACu;
        // 0x3aaab0: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAAB4u;
        goto label_3aaab4;
    }
    ctx->pc = 0x3AAAACu;
    {
        const bool branch_taken_0x3aaaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAACu;
        // 0x3aaab0: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaaac) {
            ctx->pc = 0x3AAB04u;
            goto label_3aab04;
        }
    }
    ctx->pc = 0x3AAAB4u;
label_3aaab4:
    // 0x3aaab4: 0x14b60013  bne         $a1, $s6, . + 4 + (0x13 << 2)
label_3aaab8:
    if (ctx->pc == 0x3AAAB8u) {
        ctx->pc = 0x3AAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAB4u;
        // 0x3aaab8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAABCu;
        goto label_3aaabc;
    }
    ctx->pc = 0x3AAAB4u;
    {
        const bool branch_taken_0x3aaab4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        ctx->pc = 0x3AAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAB4u;
        // 0x3aaab8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaab4) {
            ctx->pc = 0x3AAB04u;
            goto label_3aab04;
        }
    }
    ctx->pc = 0x3AAABCu;
label_3aaabc:
    // 0x3aaabc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x3aaabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3aaac0:
    // 0x3aaac0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x3aaac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3aaac4:
    // 0x3aaac4: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x3aaac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3aaac8:
    // 0x3aaac8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x3aaac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3aaacc:
    // 0x3aaacc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x3aaaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3aaad0:
    // 0x3aaad0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3aaad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aaad4:
    // 0x3aaad4: 0x600013  mtlo        $v1
    ctx->pc = 0x3aaad4u;
    ctx->lo = GPR_U64(ctx, 3);
label_3aaad8:
    // 0x3aaad8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3aaad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3aaadc:
    // 0x3aaadc: 0x70a32800  madd        $a1, $a1, $v1
    ctx->pc = 0x3aaadcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3aaae0:
    // 0x3aaae0: 0xc0bb752  jal         func_2EDD48
label_3aaae4:
    if (ctx->pc == 0x3AAAE4u) {
        ctx->pc = 0x3AAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAE0u;
        // 0x3aaae4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAAE8u;
        goto label_3aaae8;
    }
    ctx->pc = 0x3AAAE0u;
    SET_GPR_U32(ctx, 31, 0x3AAAE8u);
    ctx->pc = 0x3AAAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAAE0u;
    // 0x3aaae4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3AAAE0u, 0x3AAAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAAE8u;
label_3aaae8:
    // 0x3aaae8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3aaaec:
    if (ctx->pc == 0x3AAAECu) {
        ctx->pc = 0x3AAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAE8u;
        // 0x3aaaec: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAAF0u;
        goto label_3aaaf0;
    }
    ctx->pc = 0x3AAAE8u;
    {
        const bool branch_taken_0x3aaae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAE8u;
        // 0x3aaaec: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaae8) {
            ctx->pc = 0x3AAA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aaa98;
        }
    }
    ctx->pc = 0x3AAAF0u;
label_3aaaf0:
    // 0x3aaaf0: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3aaaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3aaaf4:
    // 0x3aaaf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3aaaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aaaf8:
    // 0x3aaaf8: 0x971023  subu        $v0, $a0, $s7
    ctx->pc = 0x3aaaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_3aaafc:
    // 0x3aaafc: 0x1445feb6  bne         $v0, $a1, . + 4 + (-0x14A << 2)
label_3aab00:
    if (ctx->pc == 0x3AAB00u) {
        ctx->pc = 0x3AAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAFCu;
        // 0x3aab00: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB04u;
        goto label_3aab04;
    }
    ctx->pc = 0x3AAAFCu;
    {
        const bool branch_taken_0x3aaafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAFCu;
        // 0x3aab00: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaafc) {
            ctx->pc = 0x3AA5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa5d8;
        }
    }
    ctx->pc = 0x3AAB04u;
label_3aab04:
    // 0x3aab04: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x3aab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3aab08:
    // 0x3aab08: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3aab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3aab0c:
    // 0x3aab0c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3aab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_3aab10:
    // 0x3aab10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3aab10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3aab14:
    // 0x3aab14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3aab18:
    if (ctx->pc == 0x3AAB18u) {
        ctx->pc = 0x3AAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB14u;
        // 0x3aab18: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB1Cu;
        goto label_3aab1c;
    }
    ctx->pc = 0x3AAB14u;
    {
        const bool branch_taken_0x3aab14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB14u;
        // 0x3aab18: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab14) {
            ctx->pc = 0x3AAB24u;
            goto label_3aab24;
        }
    }
    ctx->pc = 0x3AAB1Cu;
label_3aab1c:
    // 0x3aab1c: 0x1096fea6  beq         $a0, $s6, . + 4 + (-0x15A << 2)
label_3aab20:
    if (ctx->pc == 0x3AAB20u) {
        ctx->pc = 0x3AAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB1Cu;
        // 0x3aab20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB24u;
        goto label_3aab24;
    }
    ctx->pc = 0x3AAB1Cu;
    {
        const bool branch_taken_0x3aab1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x3AAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB1Cu;
        // 0x3aab20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab1c) {
            ctx->pc = 0x3AA5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa5b8;
        }
    }
    ctx->pc = 0x3AAB24u;
label_3aab24:
    // 0x3aab24: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3aab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3aab28:
    // 0x3aab28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aab28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aab2c:
    // 0x3aab2c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3aab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3aab30:
    // 0x3aab30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3aab30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3aab34:
    // 0x3aab34: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x3aab34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
label_3aab38:
    // 0x3aab38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3aab38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aab3c:
    // 0x3aab3c: 0x4600e001  sub.s       $f0, $f28, $f0
    ctx->pc = 0x3aab3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[28], ctx->f[0]);
label_3aab40:
    // 0x3aab40: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3aab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3aab44:
    // 0x3aab44: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3aab44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3aab48:
    // 0x3aab48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3aab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3aab4c:
    // 0x3aab4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3aab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_3aab50:
    // 0x3aab50: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x3aab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_3aab54:
    // 0x3aab54: 0x10000008  b           . + 4 + (0x8 << 2)
label_3aab58:
    if (ctx->pc == 0x3AAB58u) {
        ctx->pc = 0x3AAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB54u;
        // 0x3aab58: 0xe6c10008  swc1        $f1, 0x8($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB5Cu;
        goto label_3aab5c;
    }
    ctx->pc = 0x3AAB54u;
    {
        const bool branch_taken_0x3aab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB54u;
        // 0x3aab58: 0xe6c10008  swc1        $f1, 0x8($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab54) {
            ctx->pc = 0x3AAB78u;
            goto label_3aab78;
        }
    }
    ctx->pc = 0x3AAB5Cu;
label_3aab5c:
    // 0x3aab5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3aab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3aab60:
    // 0x3aab60: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3aab60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3aab64:
    // 0x3aab64: 0x10000004  b           . + 4 + (0x4 << 2)
label_3aab68:
    if (ctx->pc == 0x3AAB68u) {
        ctx->pc = 0x3AAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB64u;
        // 0x3aab68: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB6Cu;
        goto label_3aab6c;
    }
    ctx->pc = 0x3AAB64u;
    {
        const bool branch_taken_0x3aab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB64u;
        // 0x3aab68: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab64) {
            ctx->pc = 0x3AAB78u;
            goto label_3aab78;
        }
    }
    ctx->pc = 0x3AAB6Cu;
label_3aab6c:
    // 0x3aab6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3aab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3aab70:
    // 0x3aab70: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3aab70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3aab74:
    // 0x3aab74: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3aab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_3aab78:
    // 0x3aab78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3aab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3aab7c:
    // 0x3aab7c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x3aab7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3aab80:
    // 0x3aab80: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3aab84:
    if (ctx->pc == 0x3AAB84u) {
        ctx->pc = 0x3AAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB80u;
        // 0x3aab84: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB88u;
        goto label_3aab88;
    }
    ctx->pc = 0x3AAB80u;
    {
        const bool branch_taken_0x3aab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB80u;
        // 0x3aab84: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab80) {
            ctx->pc = 0x3AABDCu;
            goto label_3aabdc;
        }
    }
    ctx->pc = 0x3AAB88u;
label_3aab88:
    // 0x3aab88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aab8c:
    // 0x3aab8c: 0xc0f0a5a  jal         func_3C2968
label_3aab90:
    if (ctx->pc == 0x3AAB90u) {
        ctx->pc = 0x3AAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB8Cu;
        // 0x3aab90: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB94u;
        goto label_3aab94;
    }
    ctx->pc = 0x3AAB8Cu;
    SET_GPR_U32(ctx, 31, 0x3AAB94u);
    ctx->pc = 0x3AAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAB8Cu;
    // 0x3aab90: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3AAB8Cu, 0x3AAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAB94u;
label_3aab94:
    // 0x3aab94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3aab98:
    if (ctx->pc == 0x3AAB98u) {
        ctx->pc = 0x3AAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB94u;
        // 0x3aab98: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB9Cu;
        goto label_3aab9c;
    }
    ctx->pc = 0x3AAB94u;
    {
        const bool branch_taken_0x3aab94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB94u;
        // 0x3aab98: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab94) {
            ctx->pc = 0x3AABDCu;
            goto label_3aabdc;
        }
    }
    ctx->pc = 0x3AAB9Cu;
label_3aab9c:
    // 0x3aab9c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3aab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3aaba0:
    // 0x3aaba0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x3aaba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3aaba4:
    // 0x3aaba4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3aaba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3aaba8:
    // 0x3aaba8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3aaba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3aabac:
    // 0x3aabac: 0x24a59a30  addiu       $a1, $a1, -0x65D0
    ctx->pc = 0x3aabacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941232));
label_3aabb0:
    // 0x3aabb0: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x3aabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_3aabb4:
    // 0x3aabb4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3aabb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3aabb8:
    // 0x3aabb8: 0x24e7dba4  addiu       $a3, $a3, -0x245C
    ctx->pc = 0x3aabb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957988));
label_3aabbc:
    // 0x3aabbc: 0x40f809  jalr        $v0
label_3aabc0:
    if (ctx->pc == 0x3AABC0u) {
        ctx->pc = 0x3AABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABBCu;
        // 0x3aabc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABC4u;
        goto label_3aabc4;
    }
    ctx->pc = 0x3AABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AABC4u);
        ctx->pc = 0x3AABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABBCu;
        // 0x3aabc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AABBCu, 0x3AABC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AABC4u;
label_3aabc4:
    // 0x3aabc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aabc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aabc8:
    // 0x3aabc8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3aabcc:
    if (ctx->pc == 0x3AABCCu) {
        ctx->pc = 0x3AABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABC8u;
        // 0x3aabcc: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABD0u;
        goto label_3aabd0;
    }
    ctx->pc = 0x3AABC8u;
    {
        const bool branch_taken_0x3aabc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABC8u;
        // 0x3aabcc: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabc8) {
            ctx->pc = 0x3AABDCu;
            goto label_3aabdc;
        }
    }
    ctx->pc = 0x3AABD0u;
label_3aabd0:
    // 0x3aabd0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3aabd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3aabd4:
    // 0x3aabd4: 0x1440fe02  bnez        $v0, . + 4 + (-0x1FE << 2)
label_3aabd8:
    if (ctx->pc == 0x3AABD8u) {
        ctx->pc = 0x3AABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABD4u;
        // 0x3aabd8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABDCu;
        goto label_3aabdc;
    }
    ctx->pc = 0x3AABD4u;
    {
        const bool branch_taken_0x3aabd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABD4u;
        // 0x3aabd8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabd4) {
            ctx->pc = 0x3AA3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa3e0;
        }
    }
    ctx->pc = 0x3AABDCu;
label_3aabdc:
    // 0x3aabdc: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x3aabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3aabe0:
    // 0x3aabe0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3aabe4:
    if (ctx->pc == 0x3AABE4u) {
        ctx->pc = 0x3AABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABE0u;
        // 0x3aabe4: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABE8u;
        goto label_3aabe8;
    }
    ctx->pc = 0x3AABE0u;
    {
        const bool branch_taken_0x3aabe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABE0u;
        // 0x3aabe4: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabe0) {
            ctx->pc = 0x3AABF4u;
            goto label_3aabf4;
        }
    }
    ctx->pc = 0x3AABE8u;
label_3aabe8:
    // 0x3aabe8: 0xc10705c  jal         func_41C170
label_3aabec:
    if (ctx->pc == 0x3AABECu) {
        ctx->pc = 0x3AABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABE8u;
        // 0x3aabec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABF0u;
        goto label_3aabf0;
    }
    ctx->pc = 0x3AABE8u;
    SET_GPR_U32(ctx, 31, 0x3AABF0u);
    ctx->pc = 0x3AABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AABE8u;
    // 0x3aabec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3AABE8u, 0x3AABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AABF0u;
label_3aabf0:
    // 0x3aabf0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x3aabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3aabf4:
    // 0x3aabf4: 0x14560010  bne         $v0, $s6, . + 4 + (0x10 << 2)
label_3aabf8:
    if (ctx->pc == 0x3AABF8u) {
        ctx->pc = 0x3AABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABF4u;
        // 0x3aabf8: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABFCu;
        goto label_3aabfc;
    }
    ctx->pc = 0x3AABF4u;
    {
        const bool branch_taken_0x3aabf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x3AABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABF4u;
        // 0x3aabf8: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabf4) {
            ctx->pc = 0x3AAC38u;
            goto label_3aac38;
        }
    }
    ctx->pc = 0x3AABFCu;
label_3aabfc:
    // 0x3aabfc: 0xac430130  sw          $v1, 0x130($v0)
    ctx->pc = 0x3aabfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 3));
label_3aac00:
    // 0x3aac00: 0xc0ea696  jal         func_3A9A58
label_3aac04:
    if (ctx->pc == 0x3AAC04u) {
        ctx->pc = 0x3AAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC00u;
        // 0x3aac04: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC08u;
        goto label_3aac08;
    }
    ctx->pc = 0x3AAC00u;
    SET_GPR_U32(ctx, 31, 0x3AAC08u);
    ctx->pc = 0x3AAC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC00u;
    // 0x3aac04: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9A58u, 0x3AAC00u, 0x3AAC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC08u;
label_3aac08:
    // 0x3aac08: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3aac08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3aac0c:
    // 0x3aac0c: 0x2482ce80  addiu       $v0, $a0, -0x3180
    ctx->pc = 0x3aac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
label_3aac10:
    // 0x3aac10: 0x8c440d74  lw          $a0, 0xD74($v0)
    ctx->pc = 0x3aac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3444)));
label_3aac14:
    // 0x3aac14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3aac18:
    if (ctx->pc == 0x3AAC18u) {
        ctx->pc = 0x3AAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC14u;
        // 0x3aac18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC1Cu;
        goto label_3aac1c;
    }
    ctx->pc = 0x3AAC14u;
    {
        const bool branch_taken_0x3aac14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC14u;
        // 0x3aac18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac14) {
            ctx->pc = 0x3AAC28u;
            goto label_3aac28;
        }
    }
    ctx->pc = 0x3AAC1Cu;
label_3aac1c:
    // 0x3aac1c: 0x8c460d78  lw          $a2, 0xD78($v0)
    ctx->pc = 0x3aac1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
label_3aac20:
    // 0x3aac20: 0xc0bb7e6  jal         func_2EDF98
label_3aac24:
    if (ctx->pc == 0x3AAC24u) {
        ctx->pc = 0x3AAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC20u;
        // 0x3aac24: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC28u;
        goto label_3aac28;
    }
    ctx->pc = 0x3AAC20u;
    SET_GPR_U32(ctx, 31, 0x3AAC28u);
    ctx->pc = 0x3AAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC20u;
    // 0x3aac24: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AAC20u, 0x3AAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC28u;
label_3aac28:
    // 0x3aac28: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x3aac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_3aac2c:
    // 0x3aac2c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3aac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3aac30:
    // 0x3aac30: 0x2442c538  addiu       $v0, $v0, -0x3AC8
    ctx->pc = 0x3aac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952248));
label_3aac34:
    // 0x3aac34: 0xaca20138  sw          $v0, 0x138($a1)
    ctx->pc = 0x3aac34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 2));
label_3aac38:
    // 0x3aac38: 0xc1082d0  jal         func_420B40
label_3aac3c:
    if (ctx->pc == 0x3AAC3Cu) {
        ctx->pc = 0x3AAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC38u;
        // 0x3aac3c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC40u;
        goto label_3aac40;
    }
    ctx->pc = 0x3AAC38u;
    SET_GPR_U32(ctx, 31, 0x3AAC40u);
    ctx->pc = 0x3AAC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC38u;
    // 0x3aac3c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3AAC38u, 0x3AAC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC40u;
label_3aac40:
    // 0x3aac40: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x3aac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3aac44:
    // 0x3aac44: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3aac44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3aac48:
    // 0x3aac48: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3aac48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3aac4c:
    // 0x3aac4c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3aac4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3aac50:
    // 0x3aac50: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3aac50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3aac54:
    // 0x3aac54: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3aac54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3aac58:
    // 0x3aac58: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3aac58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3aac5c:
    // 0x3aac5c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3aac5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3aac60:
    // 0x3aac60: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3aac60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3aac64:
    // 0x3aac64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3aac64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3aac68:
    // 0x3aac68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3aac68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3aac6c:
    // 0x3aac6c: 0xc7bc0150  lwc1        $f28, 0x150($sp)
    ctx->pc = 0x3aac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3aac70:
    // 0x3aac70: 0xc7bb0148  lwc1        $f27, 0x148($sp)
    ctx->pc = 0x3aac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3aac74:
    // 0x3aac74: 0xc7ba0140  lwc1        $f26, 0x140($sp)
    ctx->pc = 0x3aac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3aac78:
    // 0x3aac78: 0xc7b90138  lwc1        $f25, 0x138($sp)
    ctx->pc = 0x3aac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3aac7c:
    // 0x3aac7c: 0xc7b80130  lwc1        $f24, 0x130($sp)
    ctx->pc = 0x3aac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3aac80:
    // 0x3aac80: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x3aac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3aac84:
    // 0x3aac84: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x3aac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3aac88:
    // 0x3aac88: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x3aac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3aac8c:
    // 0x3aac8c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x3aac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3aac90:
    // 0x3aac90: 0x3e00008  jr          $ra
label_3aac94:
    if (ctx->pc == 0x3AAC94u) {
        ctx->pc = 0x3AAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC90u;
        // 0x3aac94: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC98u;
        goto label_fallthrough_0x3aac90;
    }
    ctx->pc = 0x3AAC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC90u;
        // 0x3aac94: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aac90:
    ctx->pc = 0x3AAC98u;
}
