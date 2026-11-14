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

// Function: sub_0018D320
// Address: 0x18d320 - 0x18df10
void sub_0018D320_0x18d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D320_0x18d320");
#endif

    switch (ctx->pc) {
        case 0x18d320u: goto label_18d320;
        case 0x18d324u: goto label_18d324;
        case 0x18d328u: goto label_18d328;
        case 0x18d32cu: goto label_18d32c;
        case 0x18d330u: goto label_18d330;
        case 0x18d334u: goto label_18d334;
        case 0x18d338u: goto label_18d338;
        case 0x18d33cu: goto label_18d33c;
        case 0x18d340u: goto label_18d340;
        case 0x18d344u: goto label_18d344;
        case 0x18d348u: goto label_18d348;
        case 0x18d34cu: goto label_18d34c;
        case 0x18d350u: goto label_18d350;
        case 0x18d354u: goto label_18d354;
        case 0x18d358u: goto label_18d358;
        case 0x18d35cu: goto label_18d35c;
        case 0x18d360u: goto label_18d360;
        case 0x18d364u: goto label_18d364;
        case 0x18d368u: goto label_18d368;
        case 0x18d36cu: goto label_18d36c;
        case 0x18d370u: goto label_18d370;
        case 0x18d374u: goto label_18d374;
        case 0x18d378u: goto label_18d378;
        case 0x18d37cu: goto label_18d37c;
        case 0x18d380u: goto label_18d380;
        case 0x18d384u: goto label_18d384;
        case 0x18d388u: goto label_18d388;
        case 0x18d38cu: goto label_18d38c;
        case 0x18d390u: goto label_18d390;
        case 0x18d394u: goto label_18d394;
        case 0x18d398u: goto label_18d398;
        case 0x18d39cu: goto label_18d39c;
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d450u: goto label_18d450;
        case 0x18d454u: goto label_18d454;
        case 0x18d458u: goto label_18d458;
        case 0x18d45cu: goto label_18d45c;
        case 0x18d460u: goto label_18d460;
        case 0x18d464u: goto label_18d464;
        case 0x18d468u: goto label_18d468;
        case 0x18d46cu: goto label_18d46c;
        case 0x18d470u: goto label_18d470;
        case 0x18d474u: goto label_18d474;
        case 0x18d478u: goto label_18d478;
        case 0x18d47cu: goto label_18d47c;
        case 0x18d480u: goto label_18d480;
        case 0x18d484u: goto label_18d484;
        case 0x18d488u: goto label_18d488;
        case 0x18d48cu: goto label_18d48c;
        case 0x18d490u: goto label_18d490;
        case 0x18d494u: goto label_18d494;
        case 0x18d498u: goto label_18d498;
        case 0x18d49cu: goto label_18d49c;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4a4u: goto label_18d4a4;
        case 0x18d4a8u: goto label_18d4a8;
        case 0x18d4acu: goto label_18d4ac;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4b4u: goto label_18d4b4;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4c4u: goto label_18d4c4;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4d4u: goto label_18d4d4;
        case 0x18d4d8u: goto label_18d4d8;
        case 0x18d4dcu: goto label_18d4dc;
        case 0x18d4e0u: goto label_18d4e0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4e8u: goto label_18d4e8;
        case 0x18d4ecu: goto label_18d4ec;
        case 0x18d4f0u: goto label_18d4f0;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d4f8u: goto label_18d4f8;
        case 0x18d4fcu: goto label_18d4fc;
        case 0x18d500u: goto label_18d500;
        case 0x18d504u: goto label_18d504;
        case 0x18d508u: goto label_18d508;
        case 0x18d50cu: goto label_18d50c;
        case 0x18d510u: goto label_18d510;
        case 0x18d514u: goto label_18d514;
        case 0x18d518u: goto label_18d518;
        case 0x18d51cu: goto label_18d51c;
        case 0x18d520u: goto label_18d520;
        case 0x18d524u: goto label_18d524;
        case 0x18d528u: goto label_18d528;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d530u: goto label_18d530;
        case 0x18d534u: goto label_18d534;
        case 0x18d538u: goto label_18d538;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d540u: goto label_18d540;
        case 0x18d544u: goto label_18d544;
        case 0x18d548u: goto label_18d548;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d550u: goto label_18d550;
        case 0x18d554u: goto label_18d554;
        case 0x18d558u: goto label_18d558;
        case 0x18d55cu: goto label_18d55c;
        case 0x18d560u: goto label_18d560;
        case 0x18d564u: goto label_18d564;
        case 0x18d568u: goto label_18d568;
        case 0x18d56cu: goto label_18d56c;
        case 0x18d570u: goto label_18d570;
        case 0x18d574u: goto label_18d574;
        case 0x18d578u: goto label_18d578;
        case 0x18d57cu: goto label_18d57c;
        case 0x18d580u: goto label_18d580;
        case 0x18d584u: goto label_18d584;
        case 0x18d588u: goto label_18d588;
        case 0x18d58cu: goto label_18d58c;
        case 0x18d590u: goto label_18d590;
        case 0x18d594u: goto label_18d594;
        case 0x18d598u: goto label_18d598;
        case 0x18d59cu: goto label_18d59c;
        case 0x18d5a0u: goto label_18d5a0;
        case 0x18d5a4u: goto label_18d5a4;
        case 0x18d5a8u: goto label_18d5a8;
        case 0x18d5acu: goto label_18d5ac;
        case 0x18d5b0u: goto label_18d5b0;
        case 0x18d5b4u: goto label_18d5b4;
        case 0x18d5b8u: goto label_18d5b8;
        case 0x18d5bcu: goto label_18d5bc;
        case 0x18d5c0u: goto label_18d5c0;
        case 0x18d5c4u: goto label_18d5c4;
        case 0x18d5c8u: goto label_18d5c8;
        case 0x18d5ccu: goto label_18d5cc;
        case 0x18d5d0u: goto label_18d5d0;
        case 0x18d5d4u: goto label_18d5d4;
        case 0x18d5d8u: goto label_18d5d8;
        case 0x18d5dcu: goto label_18d5dc;
        case 0x18d5e0u: goto label_18d5e0;
        case 0x18d5e4u: goto label_18d5e4;
        case 0x18d5e8u: goto label_18d5e8;
        case 0x18d5ecu: goto label_18d5ec;
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d5f4u: goto label_18d5f4;
        case 0x18d5f8u: goto label_18d5f8;
        case 0x18d5fcu: goto label_18d5fc;
        case 0x18d600u: goto label_18d600;
        case 0x18d604u: goto label_18d604;
        case 0x18d608u: goto label_18d608;
        case 0x18d60cu: goto label_18d60c;
        case 0x18d610u: goto label_18d610;
        case 0x18d614u: goto label_18d614;
        case 0x18d618u: goto label_18d618;
        case 0x18d61cu: goto label_18d61c;
        case 0x18d620u: goto label_18d620;
        case 0x18d624u: goto label_18d624;
        case 0x18d628u: goto label_18d628;
        case 0x18d62cu: goto label_18d62c;
        case 0x18d630u: goto label_18d630;
        case 0x18d634u: goto label_18d634;
        case 0x18d638u: goto label_18d638;
        case 0x18d63cu: goto label_18d63c;
        case 0x18d640u: goto label_18d640;
        case 0x18d644u: goto label_18d644;
        case 0x18d648u: goto label_18d648;
        case 0x18d64cu: goto label_18d64c;
        case 0x18d650u: goto label_18d650;
        case 0x18d654u: goto label_18d654;
        case 0x18d658u: goto label_18d658;
        case 0x18d65cu: goto label_18d65c;
        case 0x18d660u: goto label_18d660;
        case 0x18d664u: goto label_18d664;
        case 0x18d668u: goto label_18d668;
        case 0x18d66cu: goto label_18d66c;
        case 0x18d670u: goto label_18d670;
        case 0x18d674u: goto label_18d674;
        case 0x18d678u: goto label_18d678;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d680u: goto label_18d680;
        case 0x18d684u: goto label_18d684;
        case 0x18d688u: goto label_18d688;
        case 0x18d68cu: goto label_18d68c;
        case 0x18d690u: goto label_18d690;
        case 0x18d694u: goto label_18d694;
        case 0x18d698u: goto label_18d698;
        case 0x18d69cu: goto label_18d69c;
        case 0x18d6a0u: goto label_18d6a0;
        case 0x18d6a4u: goto label_18d6a4;
        case 0x18d6a8u: goto label_18d6a8;
        case 0x18d6acu: goto label_18d6ac;
        case 0x18d6b0u: goto label_18d6b0;
        case 0x18d6b4u: goto label_18d6b4;
        case 0x18d6b8u: goto label_18d6b8;
        case 0x18d6bcu: goto label_18d6bc;
        case 0x18d6c0u: goto label_18d6c0;
        case 0x18d6c4u: goto label_18d6c4;
        case 0x18d6c8u: goto label_18d6c8;
        case 0x18d6ccu: goto label_18d6cc;
        case 0x18d6d0u: goto label_18d6d0;
        case 0x18d6d4u: goto label_18d6d4;
        case 0x18d6d8u: goto label_18d6d8;
        case 0x18d6dcu: goto label_18d6dc;
        case 0x18d6e0u: goto label_18d6e0;
        case 0x18d6e4u: goto label_18d6e4;
        case 0x18d6e8u: goto label_18d6e8;
        case 0x18d6ecu: goto label_18d6ec;
        case 0x18d6f0u: goto label_18d6f0;
        case 0x18d6f4u: goto label_18d6f4;
        case 0x18d6f8u: goto label_18d6f8;
        case 0x18d6fcu: goto label_18d6fc;
        case 0x18d700u: goto label_18d700;
        case 0x18d704u: goto label_18d704;
        case 0x18d708u: goto label_18d708;
        case 0x18d70cu: goto label_18d70c;
        case 0x18d710u: goto label_18d710;
        case 0x18d714u: goto label_18d714;
        case 0x18d718u: goto label_18d718;
        case 0x18d71cu: goto label_18d71c;
        case 0x18d720u: goto label_18d720;
        case 0x18d724u: goto label_18d724;
        case 0x18d728u: goto label_18d728;
        case 0x18d72cu: goto label_18d72c;
        case 0x18d730u: goto label_18d730;
        case 0x18d734u: goto label_18d734;
        case 0x18d738u: goto label_18d738;
        case 0x18d73cu: goto label_18d73c;
        case 0x18d740u: goto label_18d740;
        case 0x18d744u: goto label_18d744;
        case 0x18d748u: goto label_18d748;
        case 0x18d74cu: goto label_18d74c;
        case 0x18d750u: goto label_18d750;
        case 0x18d754u: goto label_18d754;
        case 0x18d758u: goto label_18d758;
        case 0x18d75cu: goto label_18d75c;
        case 0x18d760u: goto label_18d760;
        case 0x18d764u: goto label_18d764;
        case 0x18d768u: goto label_18d768;
        case 0x18d76cu: goto label_18d76c;
        case 0x18d770u: goto label_18d770;
        case 0x18d774u: goto label_18d774;
        case 0x18d778u: goto label_18d778;
        case 0x18d77cu: goto label_18d77c;
        case 0x18d780u: goto label_18d780;
        case 0x18d784u: goto label_18d784;
        case 0x18d788u: goto label_18d788;
        case 0x18d78cu: goto label_18d78c;
        case 0x18d790u: goto label_18d790;
        case 0x18d794u: goto label_18d794;
        case 0x18d798u: goto label_18d798;
        case 0x18d79cu: goto label_18d79c;
        case 0x18d7a0u: goto label_18d7a0;
        case 0x18d7a4u: goto label_18d7a4;
        case 0x18d7a8u: goto label_18d7a8;
        case 0x18d7acu: goto label_18d7ac;
        case 0x18d7b0u: goto label_18d7b0;
        case 0x18d7b4u: goto label_18d7b4;
        case 0x18d7b8u: goto label_18d7b8;
        case 0x18d7bcu: goto label_18d7bc;
        case 0x18d7c0u: goto label_18d7c0;
        case 0x18d7c4u: goto label_18d7c4;
        case 0x18d7c8u: goto label_18d7c8;
        case 0x18d7ccu: goto label_18d7cc;
        case 0x18d7d0u: goto label_18d7d0;
        case 0x18d7d4u: goto label_18d7d4;
        case 0x18d7d8u: goto label_18d7d8;
        case 0x18d7dcu: goto label_18d7dc;
        case 0x18d7e0u: goto label_18d7e0;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d7e8u: goto label_18d7e8;
        case 0x18d7ecu: goto label_18d7ec;
        case 0x18d7f0u: goto label_18d7f0;
        case 0x18d7f4u: goto label_18d7f4;
        case 0x18d7f8u: goto label_18d7f8;
        case 0x18d7fcu: goto label_18d7fc;
        case 0x18d800u: goto label_18d800;
        case 0x18d804u: goto label_18d804;
        case 0x18d808u: goto label_18d808;
        case 0x18d80cu: goto label_18d80c;
        case 0x18d810u: goto label_18d810;
        case 0x18d814u: goto label_18d814;
        case 0x18d818u: goto label_18d818;
        case 0x18d81cu: goto label_18d81c;
        case 0x18d820u: goto label_18d820;
        case 0x18d824u: goto label_18d824;
        case 0x18d828u: goto label_18d828;
        case 0x18d82cu: goto label_18d82c;
        case 0x18d830u: goto label_18d830;
        case 0x18d834u: goto label_18d834;
        case 0x18d838u: goto label_18d838;
        case 0x18d83cu: goto label_18d83c;
        case 0x18d840u: goto label_18d840;
        case 0x18d844u: goto label_18d844;
        case 0x18d848u: goto label_18d848;
        case 0x18d84cu: goto label_18d84c;
        case 0x18d850u: goto label_18d850;
        case 0x18d854u: goto label_18d854;
        case 0x18d858u: goto label_18d858;
        case 0x18d85cu: goto label_18d85c;
        case 0x18d860u: goto label_18d860;
        case 0x18d864u: goto label_18d864;
        case 0x18d868u: goto label_18d868;
        case 0x18d86cu: goto label_18d86c;
        case 0x18d870u: goto label_18d870;
        case 0x18d874u: goto label_18d874;
        case 0x18d878u: goto label_18d878;
        case 0x18d87cu: goto label_18d87c;
        case 0x18d880u: goto label_18d880;
        case 0x18d884u: goto label_18d884;
        case 0x18d888u: goto label_18d888;
        case 0x18d88cu: goto label_18d88c;
        case 0x18d890u: goto label_18d890;
        case 0x18d894u: goto label_18d894;
        case 0x18d898u: goto label_18d898;
        case 0x18d89cu: goto label_18d89c;
        case 0x18d8a0u: goto label_18d8a0;
        case 0x18d8a4u: goto label_18d8a4;
        case 0x18d8a8u: goto label_18d8a8;
        case 0x18d8acu: goto label_18d8ac;
        case 0x18d8b0u: goto label_18d8b0;
        case 0x18d8b4u: goto label_18d8b4;
        case 0x18d8b8u: goto label_18d8b8;
        case 0x18d8bcu: goto label_18d8bc;
        case 0x18d8c0u: goto label_18d8c0;
        case 0x18d8c4u: goto label_18d8c4;
        case 0x18d8c8u: goto label_18d8c8;
        case 0x18d8ccu: goto label_18d8cc;
        case 0x18d8d0u: goto label_18d8d0;
        case 0x18d8d4u: goto label_18d8d4;
        case 0x18d8d8u: goto label_18d8d8;
        case 0x18d8dcu: goto label_18d8dc;
        case 0x18d8e0u: goto label_18d8e0;
        case 0x18d8e4u: goto label_18d8e4;
        case 0x18d8e8u: goto label_18d8e8;
        case 0x18d8ecu: goto label_18d8ec;
        case 0x18d8f0u: goto label_18d8f0;
        case 0x18d8f4u: goto label_18d8f4;
        case 0x18d8f8u: goto label_18d8f8;
        case 0x18d8fcu: goto label_18d8fc;
        case 0x18d900u: goto label_18d900;
        case 0x18d904u: goto label_18d904;
        case 0x18d908u: goto label_18d908;
        case 0x18d90cu: goto label_18d90c;
        case 0x18d910u: goto label_18d910;
        case 0x18d914u: goto label_18d914;
        case 0x18d918u: goto label_18d918;
        case 0x18d91cu: goto label_18d91c;
        case 0x18d920u: goto label_18d920;
        case 0x18d924u: goto label_18d924;
        case 0x18d928u: goto label_18d928;
        case 0x18d92cu: goto label_18d92c;
        case 0x18d930u: goto label_18d930;
        case 0x18d934u: goto label_18d934;
        case 0x18d938u: goto label_18d938;
        case 0x18d93cu: goto label_18d93c;
        case 0x18d940u: goto label_18d940;
        case 0x18d944u: goto label_18d944;
        case 0x18d948u: goto label_18d948;
        case 0x18d94cu: goto label_18d94c;
        case 0x18d950u: goto label_18d950;
        case 0x18d954u: goto label_18d954;
        case 0x18d958u: goto label_18d958;
        case 0x18d95cu: goto label_18d95c;
        case 0x18d960u: goto label_18d960;
        case 0x18d964u: goto label_18d964;
        case 0x18d968u: goto label_18d968;
        case 0x18d96cu: goto label_18d96c;
        case 0x18d970u: goto label_18d970;
        case 0x18d974u: goto label_18d974;
        case 0x18d978u: goto label_18d978;
        case 0x18d97cu: goto label_18d97c;
        case 0x18d980u: goto label_18d980;
        case 0x18d984u: goto label_18d984;
        case 0x18d988u: goto label_18d988;
        case 0x18d98cu: goto label_18d98c;
        case 0x18d990u: goto label_18d990;
        case 0x18d994u: goto label_18d994;
        case 0x18d998u: goto label_18d998;
        case 0x18d99cu: goto label_18d99c;
        case 0x18d9a0u: goto label_18d9a0;
        case 0x18d9a4u: goto label_18d9a4;
        case 0x18d9a8u: goto label_18d9a8;
        case 0x18d9acu: goto label_18d9ac;
        case 0x18d9b0u: goto label_18d9b0;
        case 0x18d9b4u: goto label_18d9b4;
        case 0x18d9b8u: goto label_18d9b8;
        case 0x18d9bcu: goto label_18d9bc;
        case 0x18d9c0u: goto label_18d9c0;
        case 0x18d9c4u: goto label_18d9c4;
        case 0x18d9c8u: goto label_18d9c8;
        case 0x18d9ccu: goto label_18d9cc;
        case 0x18d9d0u: goto label_18d9d0;
        case 0x18d9d4u: goto label_18d9d4;
        case 0x18d9d8u: goto label_18d9d8;
        case 0x18d9dcu: goto label_18d9dc;
        case 0x18d9e0u: goto label_18d9e0;
        case 0x18d9e4u: goto label_18d9e4;
        case 0x18d9e8u: goto label_18d9e8;
        case 0x18d9ecu: goto label_18d9ec;
        case 0x18d9f0u: goto label_18d9f0;
        case 0x18d9f4u: goto label_18d9f4;
        case 0x18d9f8u: goto label_18d9f8;
        case 0x18d9fcu: goto label_18d9fc;
        case 0x18da00u: goto label_18da00;
        case 0x18da04u: goto label_18da04;
        case 0x18da08u: goto label_18da08;
        case 0x18da0cu: goto label_18da0c;
        case 0x18da10u: goto label_18da10;
        case 0x18da14u: goto label_18da14;
        case 0x18da18u: goto label_18da18;
        case 0x18da1cu: goto label_18da1c;
        case 0x18da20u: goto label_18da20;
        case 0x18da24u: goto label_18da24;
        case 0x18da28u: goto label_18da28;
        case 0x18da2cu: goto label_18da2c;
        case 0x18da30u: goto label_18da30;
        case 0x18da34u: goto label_18da34;
        case 0x18da38u: goto label_18da38;
        case 0x18da3cu: goto label_18da3c;
        case 0x18da40u: goto label_18da40;
        case 0x18da44u: goto label_18da44;
        case 0x18da48u: goto label_18da48;
        case 0x18da4cu: goto label_18da4c;
        case 0x18da50u: goto label_18da50;
        case 0x18da54u: goto label_18da54;
        case 0x18da58u: goto label_18da58;
        case 0x18da5cu: goto label_18da5c;
        case 0x18da60u: goto label_18da60;
        case 0x18da64u: goto label_18da64;
        case 0x18da68u: goto label_18da68;
        case 0x18da6cu: goto label_18da6c;
        case 0x18da70u: goto label_18da70;
        case 0x18da74u: goto label_18da74;
        case 0x18da78u: goto label_18da78;
        case 0x18da7cu: goto label_18da7c;
        case 0x18da80u: goto label_18da80;
        case 0x18da84u: goto label_18da84;
        case 0x18da88u: goto label_18da88;
        case 0x18da8cu: goto label_18da8c;
        case 0x18da90u: goto label_18da90;
        case 0x18da94u: goto label_18da94;
        case 0x18da98u: goto label_18da98;
        case 0x18da9cu: goto label_18da9c;
        case 0x18daa0u: goto label_18daa0;
        case 0x18daa4u: goto label_18daa4;
        case 0x18daa8u: goto label_18daa8;
        case 0x18daacu: goto label_18daac;
        case 0x18dab0u: goto label_18dab0;
        case 0x18dab4u: goto label_18dab4;
        case 0x18dab8u: goto label_18dab8;
        case 0x18dabcu: goto label_18dabc;
        case 0x18dac0u: goto label_18dac0;
        case 0x18dac4u: goto label_18dac4;
        case 0x18dac8u: goto label_18dac8;
        case 0x18daccu: goto label_18dacc;
        case 0x18dad0u: goto label_18dad0;
        case 0x18dad4u: goto label_18dad4;
        case 0x18dad8u: goto label_18dad8;
        case 0x18dadcu: goto label_18dadc;
        case 0x18dae0u: goto label_18dae0;
        case 0x18dae4u: goto label_18dae4;
        case 0x18dae8u: goto label_18dae8;
        case 0x18daecu: goto label_18daec;
        case 0x18daf0u: goto label_18daf0;
        case 0x18daf4u: goto label_18daf4;
        case 0x18daf8u: goto label_18daf8;
        case 0x18dafcu: goto label_18dafc;
        case 0x18db00u: goto label_18db00;
        case 0x18db04u: goto label_18db04;
        case 0x18db08u: goto label_18db08;
        case 0x18db0cu: goto label_18db0c;
        case 0x18db10u: goto label_18db10;
        case 0x18db14u: goto label_18db14;
        case 0x18db18u: goto label_18db18;
        case 0x18db1cu: goto label_18db1c;
        case 0x18db20u: goto label_18db20;
        case 0x18db24u: goto label_18db24;
        case 0x18db28u: goto label_18db28;
        case 0x18db2cu: goto label_18db2c;
        case 0x18db30u: goto label_18db30;
        case 0x18db34u: goto label_18db34;
        case 0x18db38u: goto label_18db38;
        case 0x18db3cu: goto label_18db3c;
        case 0x18db40u: goto label_18db40;
        case 0x18db44u: goto label_18db44;
        case 0x18db48u: goto label_18db48;
        case 0x18db4cu: goto label_18db4c;
        case 0x18db50u: goto label_18db50;
        case 0x18db54u: goto label_18db54;
        case 0x18db58u: goto label_18db58;
        case 0x18db5cu: goto label_18db5c;
        case 0x18db60u: goto label_18db60;
        case 0x18db64u: goto label_18db64;
        case 0x18db68u: goto label_18db68;
        case 0x18db6cu: goto label_18db6c;
        case 0x18db70u: goto label_18db70;
        case 0x18db74u: goto label_18db74;
        case 0x18db78u: goto label_18db78;
        case 0x18db7cu: goto label_18db7c;
        case 0x18db80u: goto label_18db80;
        case 0x18db84u: goto label_18db84;
        case 0x18db88u: goto label_18db88;
        case 0x18db8cu: goto label_18db8c;
        case 0x18db90u: goto label_18db90;
        case 0x18db94u: goto label_18db94;
        case 0x18db98u: goto label_18db98;
        case 0x18db9cu: goto label_18db9c;
        case 0x18dba0u: goto label_18dba0;
        case 0x18dba4u: goto label_18dba4;
        case 0x18dba8u: goto label_18dba8;
        case 0x18dbacu: goto label_18dbac;
        case 0x18dbb0u: goto label_18dbb0;
        case 0x18dbb4u: goto label_18dbb4;
        case 0x18dbb8u: goto label_18dbb8;
        case 0x18dbbcu: goto label_18dbbc;
        case 0x18dbc0u: goto label_18dbc0;
        case 0x18dbc4u: goto label_18dbc4;
        case 0x18dbc8u: goto label_18dbc8;
        case 0x18dbccu: goto label_18dbcc;
        case 0x18dbd0u: goto label_18dbd0;
        case 0x18dbd4u: goto label_18dbd4;
        case 0x18dbd8u: goto label_18dbd8;
        case 0x18dbdcu: goto label_18dbdc;
        case 0x18dbe0u: goto label_18dbe0;
        case 0x18dbe4u: goto label_18dbe4;
        case 0x18dbe8u: goto label_18dbe8;
        case 0x18dbecu: goto label_18dbec;
        case 0x18dbf0u: goto label_18dbf0;
        case 0x18dbf4u: goto label_18dbf4;
        case 0x18dbf8u: goto label_18dbf8;
        case 0x18dbfcu: goto label_18dbfc;
        case 0x18dc00u: goto label_18dc00;
        case 0x18dc04u: goto label_18dc04;
        case 0x18dc08u: goto label_18dc08;
        case 0x18dc0cu: goto label_18dc0c;
        case 0x18dc10u: goto label_18dc10;
        case 0x18dc14u: goto label_18dc14;
        case 0x18dc18u: goto label_18dc18;
        case 0x18dc1cu: goto label_18dc1c;
        case 0x18dc20u: goto label_18dc20;
        case 0x18dc24u: goto label_18dc24;
        case 0x18dc28u: goto label_18dc28;
        case 0x18dc2cu: goto label_18dc2c;
        case 0x18dc30u: goto label_18dc30;
        case 0x18dc34u: goto label_18dc34;
        case 0x18dc38u: goto label_18dc38;
        case 0x18dc3cu: goto label_18dc3c;
        case 0x18dc40u: goto label_18dc40;
        case 0x18dc44u: goto label_18dc44;
        case 0x18dc48u: goto label_18dc48;
        case 0x18dc4cu: goto label_18dc4c;
        case 0x18dc50u: goto label_18dc50;
        case 0x18dc54u: goto label_18dc54;
        case 0x18dc58u: goto label_18dc58;
        case 0x18dc5cu: goto label_18dc5c;
        case 0x18dc60u: goto label_18dc60;
        case 0x18dc64u: goto label_18dc64;
        case 0x18dc68u: goto label_18dc68;
        case 0x18dc6cu: goto label_18dc6c;
        case 0x18dc70u: goto label_18dc70;
        case 0x18dc74u: goto label_18dc74;
        case 0x18dc78u: goto label_18dc78;
        case 0x18dc7cu: goto label_18dc7c;
        case 0x18dc80u: goto label_18dc80;
        case 0x18dc84u: goto label_18dc84;
        case 0x18dc88u: goto label_18dc88;
        case 0x18dc8cu: goto label_18dc8c;
        case 0x18dc90u: goto label_18dc90;
        case 0x18dc94u: goto label_18dc94;
        case 0x18dc98u: goto label_18dc98;
        case 0x18dc9cu: goto label_18dc9c;
        case 0x18dca0u: goto label_18dca0;
        case 0x18dca4u: goto label_18dca4;
        case 0x18dca8u: goto label_18dca8;
        case 0x18dcacu: goto label_18dcac;
        case 0x18dcb0u: goto label_18dcb0;
        case 0x18dcb4u: goto label_18dcb4;
        case 0x18dcb8u: goto label_18dcb8;
        case 0x18dcbcu: goto label_18dcbc;
        case 0x18dcc0u: goto label_18dcc0;
        case 0x18dcc4u: goto label_18dcc4;
        case 0x18dcc8u: goto label_18dcc8;
        case 0x18dcccu: goto label_18dccc;
        case 0x18dcd0u: goto label_18dcd0;
        case 0x18dcd4u: goto label_18dcd4;
        case 0x18dcd8u: goto label_18dcd8;
        case 0x18dcdcu: goto label_18dcdc;
        case 0x18dce0u: goto label_18dce0;
        case 0x18dce4u: goto label_18dce4;
        case 0x18dce8u: goto label_18dce8;
        case 0x18dcecu: goto label_18dcec;
        case 0x18dcf0u: goto label_18dcf0;
        case 0x18dcf4u: goto label_18dcf4;
        case 0x18dcf8u: goto label_18dcf8;
        case 0x18dcfcu: goto label_18dcfc;
        case 0x18dd00u: goto label_18dd00;
        case 0x18dd04u: goto label_18dd04;
        case 0x18dd08u: goto label_18dd08;
        case 0x18dd0cu: goto label_18dd0c;
        case 0x18dd10u: goto label_18dd10;
        case 0x18dd14u: goto label_18dd14;
        case 0x18dd18u: goto label_18dd18;
        case 0x18dd1cu: goto label_18dd1c;
        case 0x18dd20u: goto label_18dd20;
        case 0x18dd24u: goto label_18dd24;
        case 0x18dd28u: goto label_18dd28;
        case 0x18dd2cu: goto label_18dd2c;
        case 0x18dd30u: goto label_18dd30;
        case 0x18dd34u: goto label_18dd34;
        case 0x18dd38u: goto label_18dd38;
        case 0x18dd3cu: goto label_18dd3c;
        case 0x18dd40u: goto label_18dd40;
        case 0x18dd44u: goto label_18dd44;
        case 0x18dd48u: goto label_18dd48;
        case 0x18dd4cu: goto label_18dd4c;
        case 0x18dd50u: goto label_18dd50;
        case 0x18dd54u: goto label_18dd54;
        case 0x18dd58u: goto label_18dd58;
        case 0x18dd5cu: goto label_18dd5c;
        case 0x18dd60u: goto label_18dd60;
        case 0x18dd64u: goto label_18dd64;
        case 0x18dd68u: goto label_18dd68;
        case 0x18dd6cu: goto label_18dd6c;
        case 0x18dd70u: goto label_18dd70;
        case 0x18dd74u: goto label_18dd74;
        case 0x18dd78u: goto label_18dd78;
        case 0x18dd7cu: goto label_18dd7c;
        case 0x18dd80u: goto label_18dd80;
        case 0x18dd84u: goto label_18dd84;
        case 0x18dd88u: goto label_18dd88;
        case 0x18dd8cu: goto label_18dd8c;
        case 0x18dd90u: goto label_18dd90;
        case 0x18dd94u: goto label_18dd94;
        case 0x18dd98u: goto label_18dd98;
        case 0x18dd9cu: goto label_18dd9c;
        case 0x18dda0u: goto label_18dda0;
        case 0x18dda4u: goto label_18dda4;
        case 0x18dda8u: goto label_18dda8;
        case 0x18ddacu: goto label_18ddac;
        case 0x18ddb0u: goto label_18ddb0;
        case 0x18ddb4u: goto label_18ddb4;
        case 0x18ddb8u: goto label_18ddb8;
        case 0x18ddbcu: goto label_18ddbc;
        case 0x18ddc0u: goto label_18ddc0;
        case 0x18ddc4u: goto label_18ddc4;
        case 0x18ddc8u: goto label_18ddc8;
        case 0x18ddccu: goto label_18ddcc;
        case 0x18ddd0u: goto label_18ddd0;
        case 0x18ddd4u: goto label_18ddd4;
        case 0x18ddd8u: goto label_18ddd8;
        case 0x18dddcu: goto label_18dddc;
        case 0x18dde0u: goto label_18dde0;
        case 0x18dde4u: goto label_18dde4;
        case 0x18dde8u: goto label_18dde8;
        case 0x18ddecu: goto label_18ddec;
        case 0x18ddf0u: goto label_18ddf0;
        case 0x18ddf4u: goto label_18ddf4;
        case 0x18ddf8u: goto label_18ddf8;
        case 0x18ddfcu: goto label_18ddfc;
        case 0x18de00u: goto label_18de00;
        case 0x18de04u: goto label_18de04;
        case 0x18de08u: goto label_18de08;
        case 0x18de0cu: goto label_18de0c;
        case 0x18de10u: goto label_18de10;
        case 0x18de14u: goto label_18de14;
        case 0x18de18u: goto label_18de18;
        case 0x18de1cu: goto label_18de1c;
        case 0x18de20u: goto label_18de20;
        case 0x18de24u: goto label_18de24;
        case 0x18de28u: goto label_18de28;
        case 0x18de2cu: goto label_18de2c;
        case 0x18de30u: goto label_18de30;
        case 0x18de34u: goto label_18de34;
        case 0x18de38u: goto label_18de38;
        case 0x18de3cu: goto label_18de3c;
        case 0x18de40u: goto label_18de40;
        case 0x18de44u: goto label_18de44;
        case 0x18de48u: goto label_18de48;
        case 0x18de4cu: goto label_18de4c;
        case 0x18de50u: goto label_18de50;
        case 0x18de54u: goto label_18de54;
        case 0x18de58u: goto label_18de58;
        case 0x18de5cu: goto label_18de5c;
        case 0x18de60u: goto label_18de60;
        case 0x18de64u: goto label_18de64;
        case 0x18de68u: goto label_18de68;
        case 0x18de6cu: goto label_18de6c;
        case 0x18de70u: goto label_18de70;
        case 0x18de74u: goto label_18de74;
        case 0x18de78u: goto label_18de78;
        case 0x18de7cu: goto label_18de7c;
        case 0x18de80u: goto label_18de80;
        case 0x18de84u: goto label_18de84;
        case 0x18de88u: goto label_18de88;
        case 0x18de8cu: goto label_18de8c;
        case 0x18de90u: goto label_18de90;
        case 0x18de94u: goto label_18de94;
        case 0x18de98u: goto label_18de98;
        case 0x18de9cu: goto label_18de9c;
        case 0x18dea0u: goto label_18dea0;
        case 0x18dea4u: goto label_18dea4;
        case 0x18dea8u: goto label_18dea8;
        case 0x18deacu: goto label_18deac;
        case 0x18deb0u: goto label_18deb0;
        case 0x18deb4u: goto label_18deb4;
        case 0x18deb8u: goto label_18deb8;
        case 0x18debcu: goto label_18debc;
        case 0x18dec0u: goto label_18dec0;
        case 0x18dec4u: goto label_18dec4;
        case 0x18dec8u: goto label_18dec8;
        case 0x18deccu: goto label_18decc;
        case 0x18ded0u: goto label_18ded0;
        case 0x18ded4u: goto label_18ded4;
        case 0x18ded8u: goto label_18ded8;
        case 0x18dedcu: goto label_18dedc;
        case 0x18dee0u: goto label_18dee0;
        case 0x18dee4u: goto label_18dee4;
        case 0x18dee8u: goto label_18dee8;
        case 0x18deecu: goto label_18deec;
        case 0x18def0u: goto label_18def0;
        case 0x18def4u: goto label_18def4;
        case 0x18def8u: goto label_18def8;
        case 0x18defcu: goto label_18defc;
        case 0x18df00u: goto label_18df00;
        case 0x18df04u: goto label_18df04;
        case 0x18df08u: goto label_18df08;
        case 0x18df0cu: goto label_18df0c;
        default: break;
    }

    ctx->pc = 0x18d320u;

label_18d320:
    // 0x18d320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18d324:
    // 0x18d324: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18d324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_18d328:
    // 0x18d328: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18d32c:
    // 0x18d32c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18d330:
    // 0x18d330: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18d334:
    // 0x18d334: 0x3e00008  jr          $ra
label_18d338:
    if (ctx->pc == 0x18D338u) {
        ctx->pc = 0x18D33Cu;
        goto label_18d33c;
    }
    ctx->pc = 0x18D334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D33Cu;
label_18d33c:
    // 0x18d33c: 0x0  nop
    ctx->pc = 0x18d33cu;
    // NOP
label_18d340:
    // 0x18d340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18d344:
    // 0x18d344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18d348:
    // 0x18d348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18d34c:
    // 0x18d34c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_18d350:
    // 0x18d350: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_18d354:
    // 0x18d354: 0xc0559ac  jal         func_1566B0
label_18d358:
    if (ctx->pc == 0x18D358u) {
        ctx->pc = 0x18D35Cu;
        goto label_18d35c;
    }
    ctx->pc = 0x18D354u;
    SET_GPR_U32(ctx, 31, 0x18D35Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x18D354u, 0x18D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D35Cu;
label_18d35c:
    // 0x18d35c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x18d35cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18d360:
    // 0x18d360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18d360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d364:
    // 0x18d364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d368:
    // 0x18d368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18d36c:
    // 0x18d36c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18d36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18d370:
    // 0x18d370: 0x3e00008  jr          $ra
label_18d374:
    if (ctx->pc == 0x18D374u) {
        ctx->pc = 0x18D378u;
        goto label_18d378;
    }
    ctx->pc = 0x18D370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D378u;
label_18d378:
    // 0x18d378: 0x0  nop
    ctx->pc = 0x18d378u;
    // NOP
label_18d37c:
    // 0x18d37c: 0x0  nop
    ctx->pc = 0x18d37cu;
    // NOP
label_18d380:
    // 0x18d380: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x18d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
label_18d384:
    // 0x18d384: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18d384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_18d388:
    // 0x18d388: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_18d38c:
    // 0x18d38c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18d38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_18d390:
    // 0x18d390: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18d394:
    // 0x18d394: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18d394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18d398:
    // 0x18d398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18d39c:
    // 0x18d39c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18d3a0:
    // 0x18d3a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18d3a4:
    // 0x18d3a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18d3a8:
    // 0x18d3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18d3ac:
    // 0x18d3ac: 0xafa403b0  sw          $a0, 0x3B0($sp)
    ctx->pc = 0x18d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 4));
label_18d3b0:
    // 0x18d3b0: 0xa3a503c0  sb          $a1, 0x3C0($sp)
    ctx->pc = 0x18d3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 960), (uint8_t)GPR_U32(ctx, 5));
label_18d3b4:
    // 0x18d3b4: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d3b8:
    // 0x18d3b8: 0x93a503c0  lbu         $a1, 0x3C0($sp)
    ctx->pc = 0x18d3b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 960)));
label_18d3bc:
    // 0x18d3bc: 0xc055a78  jal         func_1569E0
label_18d3c0:
    if (ctx->pc == 0x18D3C0u) {
        ctx->pc = 0x18D3C4u;
        goto label_18d3c4;
    }
    ctx->pc = 0x18D3BCu;
    SET_GPR_U32(ctx, 31, 0x18D3C4u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x18D3BCu, 0x18D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D3C4u;
label_18d3c4:
    // 0x18d3c4: 0x8fb703b0  lw          $s7, 0x3B0($sp)
    ctx->pc = 0x18d3c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d3c8:
    // 0x18d3c8: 0x26e40060  addiu       $a0, $s7, 0x60
    ctx->pc = 0x18d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 96));
label_18d3cc:
    // 0x18d3cc: 0xc063988  jal         func_18E620
label_18d3d0:
    if (ctx->pc == 0x18D3D0u) {
        ctx->pc = 0x18D3D4u;
        goto label_18d3d4;
    }
    ctx->pc = 0x18D3CCu;
    SET_GPR_U32(ctx, 31, 0x18D3D4u);
    ctx->pc = 0x18E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E620u, 0x18D3CCu, 0x18D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D3D4u;
label_18d3d4:
    // 0x18d3d4: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d3d8:
    // 0x18d3d8: 0xa0400074  sb          $zero, 0x74($v0)
    ctx->pc = 0x18d3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 116), (uint8_t)GPR_U32(ctx, 0));
label_18d3dc:
    // 0x18d3dc: 0x93a203c0  lbu         $v0, 0x3C0($sp)
    ctx->pc = 0x18d3dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 960)));
label_18d3e0:
    // 0x18d3e0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18d3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18d3e4:
    // 0x18d3e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d3e8:
    // 0x18d3e8: 0x14850285  bne         $a0, $a1, . + 4 + (0x285 << 2)
label_18d3ec:
    if (ctx->pc == 0x18D3ECu) {
        ctx->pc = 0x18D3F0u;
        goto label_18d3f0;
    }
    ctx->pc = 0x18D3E8u;
    {
        const bool branch_taken_0x18d3e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x18d3e8) {
            ctx->pc = 0x18DE00u;
            goto label_18de00;
        }
    }
    ctx->pc = 0x18D3F0u;
label_18d3f0:
    // 0x18d3f0: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d3f4:
    // 0x18d3f4: 0xa0400084  sb          $zero, 0x84($v0)
    ctx->pc = 0x18d3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 0));
label_18d3f8:
    // 0x18d3f8: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d3fc:
    // 0x18d3fc: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_18d400:
    // 0x18d400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d404:
    // 0x18d404: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
label_18d408:
    if (ctx->pc == 0x18D408u) {
        ctx->pc = 0x18D40Cu;
        goto label_18d40c;
    }
    ctx->pc = 0x18D404u;
    {
        const bool branch_taken_0x18d404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d404) {
            ctx->pc = 0x18D508u;
            goto label_18d508;
        }
    }
    ctx->pc = 0x18D40Cu;
label_18d40c:
    // 0x18d40c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18d410:
    if (ctx->pc == 0x18D410u) {
        ctx->pc = 0x18D414u;
        goto label_18d414;
    }
    ctx->pc = 0x18D40Cu;
    {
        const bool branch_taken_0x18d40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d40c) {
            ctx->pc = 0x18D41Cu;
            goto label_18d41c;
        }
    }
    ctx->pc = 0x18D414u;
label_18d414:
    // 0x18d414: 0x1000004d  b           . + 4 + (0x4D << 2)
label_18d418:
    if (ctx->pc == 0x18D418u) {
        ctx->pc = 0x18D41Cu;
        goto label_18d41c;
    }
    ctx->pc = 0x18D414u;
    {
        const bool branch_taken_0x18d414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d414) {
            ctx->pc = 0x18D54Cu;
            goto label_18d54c;
        }
    }
    ctx->pc = 0x18D41Cu;
label_18d41c:
    // 0x18d41c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x18d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_18d420:
    // 0x18d420: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x18d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18d424:
    // 0x18d424: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18d424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18d428:
    // 0x18d428: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d42c:
    // 0x18d42c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18d42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18d430:
    // 0x18d430: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_18d434:
    // 0x18d434: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_18d438:
    // 0x18d438: 0x278691e0  addiu       $a2, $gp, -0x6E20
    ctx->pc = 0x18d438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939104));
label_18d43c:
    // 0x18d43c: 0xc78e8288  lwc1        $f14, -0x7D78($gp)
    ctx->pc = 0x18d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_18d440:
    // 0x18d440: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_18d444:
    // 0x18d444: 0x24e758f0  addiu       $a3, $a3, 0x58F0
    ctx->pc = 0x18d444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22768));
label_18d448:
    // 0x18d448: 0xc063960  jal         func_18E580
label_18d44c:
    if (ctx->pc == 0x18D44Cu) {
        ctx->pc = 0x18D450u;
        goto label_18d450;
    }
    ctx->pc = 0x18D448u;
    SET_GPR_U32(ctx, 31, 0x18D450u);
    ctx->pc = 0x18E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E580u, 0x18D448u, 0x18D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D450u;
label_18d450:
    // 0x18d450: 0x8fa503b0  lw          $a1, 0x3B0($sp)
    ctx->pc = 0x18d450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d454:
    // 0x18d454: 0x24a40060  addiu       $a0, $a1, 0x60
    ctx->pc = 0x18d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_18d458:
    // 0x18d458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18d458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d45c:
    // 0x18d45c: 0xc063820  jal         func_18E080
label_18d460:
    if (ctx->pc == 0x18D460u) {
        ctx->pc = 0x18D464u;
        goto label_18d464;
    }
    ctx->pc = 0x18D45Cu;
    SET_GPR_U32(ctx, 31, 0x18D464u);
    ctx->pc = 0x18E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E080u, 0x18D45Cu, 0x18D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D464u;
label_18d464:
    // 0x18d464: 0x8f96bbb4  lw          $s6, -0x444C($gp)
    ctx->pc = 0x18d464u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_18d468:
    // 0x18d468: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x18d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_18d46c:
    // 0x18d46c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18d46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18d470:
    // 0x18d470: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d474:
    // 0x18d474: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18d474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18d478:
    // 0x18d478: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x18d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_18d47c:
    // 0x18d47c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d480:
    // 0x18d480: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x18d480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_18d484:
    // 0x18d484: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_18d488:
    // 0x18d488: 0x24c65900  addiu       $a2, $a2, 0x5900
    ctx->pc = 0x18d488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22784));
label_18d48c:
    // 0x18d48c: 0xc78e8288  lwc1        $f14, -0x7D78($gp)
    ctx->pc = 0x18d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_18d490:
    // 0x18d490: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x18d490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_18d494:
    // 0x18d494: 0x24e75910  addiu       $a3, $a3, 0x5910
    ctx->pc = 0x18d494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22800));
label_18d498:
    // 0x18d498: 0xc063960  jal         func_18E580
label_18d49c:
    if (ctx->pc == 0x18D49Cu) {
        ctx->pc = 0x18D4A0u;
        goto label_18d4a0;
    }
    ctx->pc = 0x18D498u;
    SET_GPR_U32(ctx, 31, 0x18D4A0u);
    ctx->pc = 0x18E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E580u, 0x18D498u, 0x18D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4A0u;
label_18d4a0:
    // 0x18d4a0: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d4a4:
    // 0x18d4a4: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x18d4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_18d4a8:
    // 0x18d4a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18d4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d4ac:
    // 0x18d4ac: 0xc063820  jal         func_18E080
label_18d4b0:
    if (ctx->pc == 0x18D4B0u) {
        ctx->pc = 0x18D4B4u;
        goto label_18d4b4;
    }
    ctx->pc = 0x18D4ACu;
    SET_GPR_U32(ctx, 31, 0x18D4B4u);
    ctx->pc = 0x18E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E080u, 0x18D4ACu, 0x18D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4B4u;
label_18d4b4:
    // 0x18d4b4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x18d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_18d4b8:
    // 0x18d4b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18d4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18d4bc:
    // 0x18d4bc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x18d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_18d4c0:
    // 0x18d4c0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x18d4c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18d4c4:
    // 0x18d4c4: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x18d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_18d4c8:
    // 0x18d4c8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18d4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18d4cc:
    // 0x18d4cc: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x18d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18d4d0:
    // 0x18d4d0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x18d4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_18d4d4:
    // 0x18d4d4: 0x24c65928  addiu       $a2, $a2, 0x5928
    ctx->pc = 0x18d4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22824));
label_18d4d8:
    // 0x18d4d8: 0xc78e8288  lwc1        $f14, -0x7D78($gp)
    ctx->pc = 0x18d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_18d4dc:
    // 0x18d4dc: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x18d4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_18d4e0:
    // 0x18d4e0: 0x24e75940  addiu       $a3, $a3, 0x5940
    ctx->pc = 0x18d4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22848));
label_18d4e4:
    // 0x18d4e4: 0xc063960  jal         func_18E580
label_18d4e8:
    if (ctx->pc == 0x18D4E8u) {
        ctx->pc = 0x18D4ECu;
        goto label_18d4ec;
    }
    ctx->pc = 0x18D4E4u;
    SET_GPR_U32(ctx, 31, 0x18D4ECu);
    ctx->pc = 0x18E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E580u, 0x18D4E4u, 0x18D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4ECu;
label_18d4ec:
    // 0x18d4ec: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d4f0:
    // 0x18d4f0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x18d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_18d4f4:
    // 0x18d4f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18d4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d4f8:
    // 0x18d4f8: 0xc063820  jal         func_18E080
label_18d4fc:
    if (ctx->pc == 0x18D4FCu) {
        ctx->pc = 0x18D500u;
        goto label_18d500;
    }
    ctx->pc = 0x18D4F8u;
    SET_GPR_U32(ctx, 31, 0x18D500u);
    ctx->pc = 0x18E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E080u, 0x18D4F8u, 0x18D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D500u;
label_18d500:
    // 0x18d500: 0x10000018  b           . + 4 + (0x18 << 2)
label_18d504:
    if (ctx->pc == 0x18D504u) {
        ctx->pc = 0x18D508u;
        goto label_18d508;
    }
    ctx->pc = 0x18D500u;
    {
        const bool branch_taken_0x18d500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d500) {
            ctx->pc = 0x18D564u;
            goto label_18d564;
        }
    }
    ctx->pc = 0x18D508u;
label_18d508:
    // 0x18d508: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x18d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_18d50c:
    // 0x18d50c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x18d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18d510:
    // 0x18d510: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18d514:
    // 0x18d514: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x18d514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_18d518:
    // 0x18d518: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x18d518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_18d51c:
    // 0x18d51c: 0x24c65958  addiu       $a2, $a2, 0x5958
    ctx->pc = 0x18d51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22872));
label_18d520:
    // 0x18d520: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x18d520u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_18d524:
    // 0x18d524: 0x24e75970  addiu       $a3, $a3, 0x5970
    ctx->pc = 0x18d524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22896));
label_18d528:
    // 0x18d528: 0xc063800  jal         func_18E000
label_18d52c:
    if (ctx->pc == 0x18D52Cu) {
        ctx->pc = 0x18D530u;
        goto label_18d530;
    }
    ctx->pc = 0x18D528u;
    SET_GPR_U32(ctx, 31, 0x18D530u);
    ctx->pc = 0x18E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E000u, 0x18D528u, 0x18D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D530u;
label_18d530:
    // 0x18d530: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x18d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d534:
    // 0x18d534: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x18d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_18d538:
    // 0x18d538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18d538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d53c:
    // 0x18d53c: 0xc063820  jal         func_18E080
label_18d540:
    if (ctx->pc == 0x18D540u) {
        ctx->pc = 0x18D544u;
        goto label_18d544;
    }
    ctx->pc = 0x18D53Cu;
    SET_GPR_U32(ctx, 31, 0x18D544u);
    ctx->pc = 0x18E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E080u, 0x18D53Cu, 0x18D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D544u;
label_18d544:
    // 0x18d544: 0x10000007  b           . + 4 + (0x7 << 2)
label_18d548:
    if (ctx->pc == 0x18D548u) {
        ctx->pc = 0x18D54Cu;
        goto label_18d54c;
    }
    ctx->pc = 0x18D544u;
    {
        const bool branch_taken_0x18d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d544) {
            ctx->pc = 0x18D564u;
            goto label_18d564;
        }
    }
    ctx->pc = 0x18D54Cu;
label_18d54c:
    // 0x18d54c: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d550:
    // 0x18d550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d554:
    // 0x18d554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18d554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18d558:
    // 0x18d558: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18d55c:
    // 0x18d55c: 0x320f809  jalr        $t9
label_18d560:
    if (ctx->pc == 0x18D560u) {
        ctx->pc = 0x18D564u;
        goto label_18d564;
    }
    ctx->pc = 0x18D55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18D564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D55Cu, 0x18D564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D564u;
label_18d564:
    // 0x18d564: 0x27a30388  addiu       $v1, $sp, 0x388
    ctx->pc = 0x18d564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_18d568:
    // 0x18d568: 0xdf8291d8  ld          $v0, -0x6E28($gp)
    ctx->pc = 0x18d568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_18d56c:
    // 0x18d56c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18d56cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_18d570:
    // 0x18d570: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d574:
    // 0x18d574: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18d574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18d578:
    // 0x18d578: 0xc0637f0  jal         func_18DFC0
label_18d57c:
    if (ctx->pc == 0x18D57Cu) {
        ctx->pc = 0x18D580u;
        goto label_18d580;
    }
    ctx->pc = 0x18D578u;
    SET_GPR_U32(ctx, 31, 0x18D580u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18D578u, 0x18D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D580u;
label_18d580:
    // 0x18d580: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x18d580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18d584:
    // 0x18d584: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18d588:
    if (ctx->pc == 0x18D588u) {
        ctx->pc = 0x18D58Cu;
        goto label_18d58c;
    }
    ctx->pc = 0x18D584u;
    {
        const bool branch_taken_0x18d584 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18d584) {
            ctx->pc = 0x18D5A0u;
            goto label_18d5a0;
        }
    }
    ctx->pc = 0x18D58Cu;
label_18d58c:
    // 0x18d58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d590:
    // 0x18d590: 0x0  nop
    ctx->pc = 0x18d590u;
    // NOP
label_18d594:
    // 0x18d594: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x18d594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_18d598:
    // 0x18d598: 0x10000008  b           . + 4 + (0x8 << 2)
label_18d59c:
    if (ctx->pc == 0x18D59Cu) {
        ctx->pc = 0x18D5A0u;
        goto label_18d5a0;
    }
    ctx->pc = 0x18D598u;
    {
        const bool branch_taken_0x18d598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d598) {
            ctx->pc = 0x18D5BCu;
            goto label_18d5bc;
        }
    }
    ctx->pc = 0x18D5A0u;
label_18d5a0:
    // 0x18d5a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18d5a4:
    // 0x18d5a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d5a8:
    // 0x18d5a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18d5ac:
    // 0x18d5ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d5b0:
    // 0x18d5b0: 0x0  nop
    ctx->pc = 0x18d5b0u;
    // NOP
label_18d5b4:
    // 0x18d5b4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x18d5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_18d5b8:
    // 0x18d5b8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x18d5b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_18d5bc:
    // 0x18d5bc: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x18d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_18d5c0:
    // 0x18d5c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18d5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18d5c4:
    // 0x18d5c4: 0xc7a1038c  lwc1        $f1, 0x38C($sp)
    ctx->pc = 0x18d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d5c8:
    // 0x18d5c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d5cc:
    // 0x18d5cc: 0x0  nop
    ctx->pc = 0x18d5ccu;
    // NOP
label_18d5d0:
    // 0x18d5d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x18d5d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_18d5d4:
    // 0x18d5d4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x18d5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_18d5d8:
    // 0x18d5d8: 0xe7a0038c  swc1        $f0, 0x38C($sp)
    ctx->pc = 0x18d5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
label_18d5dc:
    // 0x18d5dc: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d5e0:
    // 0x18d5e0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18d5e4:
    // 0x18d5e4: 0xc0637f0  jal         func_18DFC0
label_18d5e8:
    if (ctx->pc == 0x18D5E8u) {
        ctx->pc = 0x18D5ECu;
        goto label_18d5ec;
    }
    ctx->pc = 0x18D5E4u;
    SET_GPR_U32(ctx, 31, 0x18D5ECu);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18D5E4u, 0x18D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5ECu;
label_18d5ec:
    // 0x18d5ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d5f0:
    // 0x18d5f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d5f4:
    // 0x18d5f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18d5f8:
    if (ctx->pc == 0x18D5F8u) {
        ctx->pc = 0x18D5FCu;
        goto label_18d5fc;
    }
    ctx->pc = 0x18D5F4u;
    {
        const bool branch_taken_0x18d5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d5f4) {
            ctx->pc = 0x18D614u;
            goto label_18d614;
        }
    }
    ctx->pc = 0x18D5FCu;
label_18d5fc:
    // 0x18d5fc: 0xc7a1038c  lwc1        $f1, 0x38C($sp)
    ctx->pc = 0x18d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d600:
    // 0x18d600: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x18d600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_18d604:
    // 0x18d604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d608:
    // 0x18d608: 0x0  nop
    ctx->pc = 0x18d608u;
    // NOP
label_18d60c:
    // 0x18d60c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18d610:
    // 0x18d610: 0xe7a0038c  swc1        $f0, 0x38C($sp)
    ctx->pc = 0x18d610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
label_18d614:
    // 0x18d614: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18d614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d618:
    // 0x18d618: 0x1000008a  b           . + 4 + (0x8A << 2)
label_18d61c:
    if (ctx->pc == 0x18D61Cu) {
        ctx->pc = 0x18D620u;
        goto label_18d620;
    }
    ctx->pc = 0x18D618u;
    {
        const bool branch_taken_0x18d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d618) {
            ctx->pc = 0x18D844u;
            goto label_18d844;
        }
    }
    ctx->pc = 0x18D620u;
label_18d620:
    // 0x18d620: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d624:
    // 0x18d624: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x18d624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_18d628:
    // 0x18d628: 0xc0633d0  jal         func_18CF40
label_18d62c:
    if (ctx->pc == 0x18D62Cu) {
        ctx->pc = 0x18D630u;
        goto label_18d630;
    }
    ctx->pc = 0x18D628u;
    SET_GPR_U32(ctx, 31, 0x18D630u);
    ctx->pc = 0x18CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF40u, 0x18D628u, 0x18D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D630u;
label_18d630:
    // 0x18d630: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x18d630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18d634:
    // 0x18d634: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
label_18d638:
    if (ctx->pc == 0x18D638u) {
        ctx->pc = 0x18D63Cu;
        goto label_18d63c;
    }
    ctx->pc = 0x18D634u;
    {
        const bool branch_taken_0x18d634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d634) {
            ctx->pc = 0x18D840u;
            goto label_18d840;
        }
    }
    ctx->pc = 0x18D63Cu;
label_18d63c:
    // 0x18d63c: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d640:
    // 0x18d640: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_18d644:
    // 0x18d644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d648:
    // 0x18d648: 0xc0637e0  jal         func_18DF80
label_18d64c:
    if (ctx->pc == 0x18D64Cu) {
        ctx->pc = 0x18D650u;
        goto label_18d650;
    }
    ctx->pc = 0x18D648u;
    SET_GPR_U32(ctx, 31, 0x18D650u);
    ctx->pc = 0x18DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF80u, 0x18D648u, 0x18D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D650u;
label_18d650:
    // 0x18d650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d654:
    // 0x18d654: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d658:
    // 0x18d658: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18d658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18d65c:
    // 0x18d65c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18d65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18d660:
    // 0x18d660: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18d660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d664:
    // 0x18d664: 0xc08c8dc  jal         func_232370
label_18d668:
    if (ctx->pc == 0x18D668u) {
        ctx->pc = 0x18D66Cu;
        goto label_18d66c;
    }
    ctx->pc = 0x18D664u;
    SET_GPR_U32(ctx, 31, 0x18D66Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18D664u, 0x18D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D66Cu;
label_18d66c:
    // 0x18d66c: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d670:
    // 0x18d670: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x18d670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18d674:
    // 0x18d674: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18d678:
    // 0x18d678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d67c:
    // 0x18d67c: 0xc08c8dc  jal         func_232370
label_18d680:
    if (ctx->pc == 0x18D680u) {
        ctx->pc = 0x18D684u;
        goto label_18d684;
    }
    ctx->pc = 0x18D67Cu;
    SET_GPR_U32(ctx, 31, 0x18D684u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18D67Cu, 0x18D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D684u;
label_18d684:
    // 0x18d684: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d688:
    // 0x18d688: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18d68c:
    // 0x18d68c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d690:
    // 0x18d690: 0xc0637c4  jal         func_18DF10
label_18d694:
    if (ctx->pc == 0x18D694u) {
        ctx->pc = 0x18D698u;
        goto label_18d698;
    }
    ctx->pc = 0x18D690u;
    SET_GPR_U32(ctx, 31, 0x18D698u);
    ctx->pc = 0x18DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF10u, 0x18D690u, 0x18D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D698u;
label_18d698:
    // 0x18d698: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x18d698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_18d69c:
    // 0x18d69c: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x18d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_18d6a0:
    // 0x18d6a0: 0xc08e57c  jal         func_2395F0
label_18d6a4:
    if (ctx->pc == 0x18D6A4u) {
        ctx->pc = 0x18D6A8u;
        goto label_18d6a8;
    }
    ctx->pc = 0x18D6A0u;
    SET_GPR_U32(ctx, 31, 0x18D6A8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x18D6A0u, 0x18D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6A8u;
label_18d6a8:
    // 0x18d6a8: 0x27a40378  addiu       $a0, $sp, 0x378
    ctx->pc = 0x18d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
label_18d6ac:
    // 0x18d6ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18d6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d6b0:
    // 0x18d6b0: 0xc0406d0  jal         func_101B40
label_18d6b4:
    if (ctx->pc == 0x18D6B4u) {
        ctx->pc = 0x18D6B8u;
        goto label_18d6b8;
    }
    ctx->pc = 0x18D6B0u;
    SET_GPR_U32(ctx, 31, 0x18D6B8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x18D6B0u, 0x18D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6B8u;
label_18d6b8:
    // 0x18d6b8: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d6bc:
    // 0x18d6bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18d6c0:
    // 0x18d6c0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18d6c4:
    // 0x18d6c4: 0x27a60378  addiu       $a2, $sp, 0x378
    ctx->pc = 0x18d6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
label_18d6c8:
    // 0x18d6c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d6cc:
    // 0x18d6cc: 0xc08c378  jal         func_230DE0
label_18d6d0:
    if (ctx->pc == 0x18D6D0u) {
        ctx->pc = 0x18D6D4u;
        goto label_18d6d4;
    }
    ctx->pc = 0x18D6CCu;
    SET_GPR_U32(ctx, 31, 0x18D6D4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x18D6CCu, 0x18D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6D4u;
label_18d6d4:
    // 0x18d6d4: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d6d8:
    // 0x18d6d8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18d6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18d6dc:
    // 0x18d6dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d6e0:
    // 0x18d6e0: 0xc0637c4  jal         func_18DF10
label_18d6e4:
    if (ctx->pc == 0x18D6E4u) {
        ctx->pc = 0x18D6E8u;
        goto label_18d6e8;
    }
    ctx->pc = 0x18D6E0u;
    SET_GPR_U32(ctx, 31, 0x18D6E8u);
    ctx->pc = 0x18DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF10u, 0x18D6E0u, 0x18D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6E8u;
label_18d6e8:
    // 0x18d6e8: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d6ec:
    // 0x18d6ec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x18d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18d6f0:
    // 0x18d6f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18d6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d6f4:
    // 0x18d6f4: 0xc063b08  jal         func_18EC20
label_18d6f8:
    if (ctx->pc == 0x18D6F8u) {
        ctx->pc = 0x18D6FCu;
        goto label_18d6fc;
    }
    ctx->pc = 0x18D6F4u;
    SET_GPR_U32(ctx, 31, 0x18D6FCu);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18D6F4u, 0x18D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6FCu;
label_18d6fc:
    // 0x18d6fc: 0x27a20388  addiu       $v0, $sp, 0x388
    ctx->pc = 0x18d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_18d700:
    // 0x18d700: 0x27a30370  addiu       $v1, $sp, 0x370
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_18d704:
    // 0x18d704: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18d704u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_18d708:
    // 0x18d708: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18d708u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_18d70c:
    // 0x18d70c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x18d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_18d710:
    // 0x18d710: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18d714:
    // 0x18d714: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18d718:
    if (ctx->pc == 0x18D718u) {
        ctx->pc = 0x18D71Cu;
        goto label_18d71c;
    }
    ctx->pc = 0x18D714u;
    {
        const bool branch_taken_0x18d714 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18d714) {
            ctx->pc = 0x18D730u;
            goto label_18d730;
        }
    }
    ctx->pc = 0x18D71Cu;
label_18d71c:
    // 0x18d71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d720:
    // 0x18d720: 0x0  nop
    ctx->pc = 0x18d720u;
    // NOP
label_18d724:
    // 0x18d724: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18d724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d728:
    // 0x18d728: 0x10000008  b           . + 4 + (0x8 << 2)
label_18d72c:
    if (ctx->pc == 0x18D72Cu) {
        ctx->pc = 0x18D730u;
        goto label_18d730;
    }
    ctx->pc = 0x18D728u;
    {
        const bool branch_taken_0x18d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d728) {
            ctx->pc = 0x18D74Cu;
            goto label_18d74c;
        }
    }
    ctx->pc = 0x18D730u;
label_18d730:
    // 0x18d730: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18d734:
    // 0x18d734: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d738:
    // 0x18d738: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18d73c:
    // 0x18d73c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d73cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d740:
    // 0x18d740: 0x0  nop
    ctx->pc = 0x18d740u;
    // NOP
label_18d744:
    // 0x18d744: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18d744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d748:
    // 0x18d748: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18d748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18d74c:
    // 0x18d74c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x18d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_18d750:
    // 0x18d750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d754:
    // 0x18d754: 0x0  nop
    ctx->pc = 0x18d754u;
    // NOP
label_18d758:
    // 0x18d758: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18d758u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18d75c:
    // 0x18d75c: 0xc7a00370  lwc1        $f0, 0x370($sp)
    ctx->pc = 0x18d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d760:
    // 0x18d760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d764:
    // 0x18d764: 0xe7a00370  swc1        $f0, 0x370($sp)
    ctx->pc = 0x18d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_18d768:
    // 0x18d768: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x18d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_18d76c:
    // 0x18d76c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18d770:
    // 0x18d770: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18d774:
    if (ctx->pc == 0x18D774u) {
        ctx->pc = 0x18D778u;
        goto label_18d778;
    }
    ctx->pc = 0x18D770u;
    {
        const bool branch_taken_0x18d770 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18d770) {
            ctx->pc = 0x18D78Cu;
            goto label_18d78c;
        }
    }
    ctx->pc = 0x18D778u;
label_18d778:
    // 0x18d778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d77c:
    // 0x18d77c: 0x0  nop
    ctx->pc = 0x18d77cu;
    // NOP
label_18d780:
    // 0x18d780: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18d780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d784:
    // 0x18d784: 0x10000008  b           . + 4 + (0x8 << 2)
label_18d788:
    if (ctx->pc == 0x18D788u) {
        ctx->pc = 0x18D78Cu;
        goto label_18d78c;
    }
    ctx->pc = 0x18D784u;
    {
        const bool branch_taken_0x18d784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d784) {
            ctx->pc = 0x18D7A8u;
            goto label_18d7a8;
        }
    }
    ctx->pc = 0x18D78Cu;
label_18d78c:
    // 0x18d78c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18d790:
    // 0x18d790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d794:
    // 0x18d794: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18d798:
    // 0x18d798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d79c:
    // 0x18d79c: 0x0  nop
    ctx->pc = 0x18d79cu;
    // NOP
label_18d7a0:
    // 0x18d7a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18d7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d7a4:
    // 0x18d7a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18d7a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18d7a8:
    // 0x18d7a8: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x18d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_18d7ac:
    // 0x18d7ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d7b0:
    // 0x18d7b0: 0x0  nop
    ctx->pc = 0x18d7b0u;
    // NOP
label_18d7b4:
    // 0x18d7b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18d7b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18d7b8:
    // 0x18d7b8: 0xc7a00374  lwc1        $f0, 0x374($sp)
    ctx->pc = 0x18d7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d7bc:
    // 0x18d7bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d7c0:
    // 0x18d7c0: 0xe7a00374  swc1        $f0, 0x374($sp)
    ctx->pc = 0x18d7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
label_18d7c4:
    // 0x18d7c4: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d7c8:
    // 0x18d7c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18d7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18d7cc:
    // 0x18d7cc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18d7d0:
    // 0x18d7d0: 0xc7ac0370  lwc1        $f12, 0x370($sp)
    ctx->pc = 0x18d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d7d4:
    // 0x18d7d4: 0xc7ad0374  lwc1        $f13, 0x374($sp)
    ctx->pc = 0x18d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d7d8:
    // 0x18d7d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d7dc:
    // 0x18d7dc: 0xc08c208  jal         func_230820
label_18d7e0:
    if (ctx->pc == 0x18D7E0u) {
        ctx->pc = 0x18D7E4u;
        goto label_18d7e4;
    }
    ctx->pc = 0x18D7DCu;
    SET_GPR_U32(ctx, 31, 0x18D7E4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x18D7DCu, 0x18D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7E4u;
label_18d7e4:
    // 0x18d7e4: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d7e8:
    // 0x18d7e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x18d7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18d7ec:
    // 0x18d7ec: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18d7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18d7f0:
    // 0x18d7f0: 0xc7ac0370  lwc1        $f12, 0x370($sp)
    ctx->pc = 0x18d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d7f4:
    // 0x18d7f4: 0xc7ad0374  lwc1        $f13, 0x374($sp)
    ctx->pc = 0x18d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d7f8:
    // 0x18d7f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d7fc:
    // 0x18d7fc: 0xc08c208  jal         func_230820
label_18d800:
    if (ctx->pc == 0x18D800u) {
        ctx->pc = 0x18D804u;
        goto label_18d804;
    }
    ctx->pc = 0x18D7FCu;
    SET_GPR_U32(ctx, 31, 0x18D804u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x18D7FCu, 0x18D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D804u;
label_18d804:
    // 0x18d804: 0xc7a1038c  lwc1        $f1, 0x38C($sp)
    ctx->pc = 0x18d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d808:
    // 0x18d808: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x18d808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_18d80c:
    // 0x18d80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d810:
    // 0x18d810: 0x0  nop
    ctx->pc = 0x18d810u;
    // NOP
label_18d814:
    // 0x18d814: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18d818:
    // 0x18d818: 0xe7a0038c  swc1        $f0, 0x38C($sp)
    ctx->pc = 0x18d818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
label_18d81c:
    // 0x18d81c: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d820:
    // 0x18d820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d824:
    // 0x18d824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d828:
    // 0x18d828: 0xc063be0  jal         func_18EF80
label_18d82c:
    if (ctx->pc == 0x18D82Cu) {
        ctx->pc = 0x18D830u;
        goto label_18d830;
    }
    ctx->pc = 0x18D828u;
    SET_GPR_U32(ctx, 31, 0x18D830u);
    ctx->pc = 0x18EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF80u, 0x18D828u, 0x18D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D830u;
label_18d830:
    // 0x18d830: 0x27a40378  addiu       $a0, $sp, 0x378
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
label_18d834:
    // 0x18d834: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18d834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d838:
    // 0x18d838: 0xc0406a0  jal         func_101A80
label_18d83c:
    if (ctx->pc == 0x18D83Cu) {
        ctx->pc = 0x18D840u;
        goto label_18d840;
    }
    ctx->pc = 0x18D838u;
    SET_GPR_U32(ctx, 31, 0x18D840u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x18D838u, 0x18D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D840u;
label_18d840:
    // 0x18d840: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18d844:
    // 0x18d844: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d848:
    // 0x18d848: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18d84c:
    // 0x18d84c: 0xc0637f0  jal         func_18DFC0
label_18d850:
    if (ctx->pc == 0x18D850u) {
        ctx->pc = 0x18D854u;
        goto label_18d854;
    }
    ctx->pc = 0x18D84Cu;
    SET_GPR_U32(ctx, 31, 0x18D854u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18D84Cu, 0x18D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D854u;
label_18d854:
    // 0x18d854: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x18d854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18d858:
    // 0x18d858: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
label_18d85c:
    if (ctx->pc == 0x18D85Cu) {
        ctx->pc = 0x18D860u;
        goto label_18d860;
    }
    ctx->pc = 0x18D858u;
    {
        const bool branch_taken_0x18d858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d858) {
            ctx->pc = 0x18D620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D860u;
label_18d860:
    // 0x18d860: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d864:
    // 0x18d864: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18d864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18d868:
    // 0x18d868: 0xc0637f0  jal         func_18DFC0
label_18d86c:
    if (ctx->pc == 0x18D86Cu) {
        ctx->pc = 0x18D870u;
        goto label_18d870;
    }
    ctx->pc = 0x18D868u;
    SET_GPR_U32(ctx, 31, 0x18D870u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18D868u, 0x18D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D870u;
label_18d870:
    // 0x18d870: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18d874:
    if (ctx->pc == 0x18D874u) {
        ctx->pc = 0x18D878u;
        goto label_18d878;
    }
    ctx->pc = 0x18D870u;
    {
        const bool branch_taken_0x18d870 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18d870) {
            ctx->pc = 0x18D88Cu;
            goto label_18d88c;
        }
    }
    ctx->pc = 0x18D878u;
label_18d878:
    // 0x18d878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d87c:
    // 0x18d87c: 0x0  nop
    ctx->pc = 0x18d87cu;
    // NOP
label_18d880:
    // 0x18d880: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18d880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d884:
    // 0x18d884: 0x10000008  b           . + 4 + (0x8 << 2)
label_18d888:
    if (ctx->pc == 0x18D888u) {
        ctx->pc = 0x18D88Cu;
        goto label_18d88c;
    }
    ctx->pc = 0x18D884u;
    {
        const bool branch_taken_0x18d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d884) {
            ctx->pc = 0x18D8A8u;
            goto label_18d8a8;
        }
    }
    ctx->pc = 0x18D88Cu;
label_18d88c:
    // 0x18d88c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18d890:
    // 0x18d890: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d894:
    // 0x18d894: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18d898:
    // 0x18d898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d89c:
    // 0x18d89c: 0x0  nop
    ctx->pc = 0x18d89cu;
    // NOP
label_18d8a0:
    // 0x18d8a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18d8a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d8a4:
    // 0x18d8a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18d8a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18d8a8:
    // 0x18d8a8: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_18d8ac:
    // 0x18d8ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d8b0:
    // 0x18d8b0: 0x0  nop
    ctx->pc = 0x18d8b0u;
    // NOP
label_18d8b4:
    // 0x18d8b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d8b8:
    // 0x18d8b8: 0xe7a003ac  swc1        $f0, 0x3AC($sp)
    ctx->pc = 0x18d8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 940), bits); }
label_18d8bc:
    // 0x18d8bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_18d8c0:
    // 0x18d8c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d8c4:
    // 0x18d8c4: 0xc7a003ac  lwc1        $f0, 0x3AC($sp)
    ctx->pc = 0x18d8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d8c8:
    // 0x18d8c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18d8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18d8cc:
    // 0x18d8cc: 0xe7a003a8  swc1        $f0, 0x3A8($sp)
    ctx->pc = 0x18d8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
label_18d8d0:
    // 0x18d8d0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x18d8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_18d8d4:
    // 0x18d8d4: 0x24c657d0  addiu       $a2, $a2, 0x57D0
    ctx->pc = 0x18d8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22480));
label_18d8d8:
    // 0x18d8d8: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x18d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_18d8dc:
    // 0x18d8dc: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x18d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_18d8e0:
    // 0x18d8e0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x18d8e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_18d8e4:
    // 0x18d8e4: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x18d8e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_18d8e8:
    // 0x18d8e8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x18d8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_18d8ec:
    // 0x18d8ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18d8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_18d8f0:
    // 0x18d8f0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x18d8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_18d8f4:
    // 0x18d8f4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x18d8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_18d8f8:
    // 0x18d8f8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x18d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_18d8fc:
    // 0x18d8fc: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_18d900:
    if (ctx->pc == 0x18D900u) {
        ctx->pc = 0x18D904u;
        goto label_18d904;
    }
    ctx->pc = 0x18D8FCu;
    {
        const bool branch_taken_0x18d8fc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x18d8fc) {
            ctx->pc = 0x18D8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d8e0;
        }
    }
    ctx->pc = 0x18D904u;
label_18d904:
    // 0x18d904: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18d904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d908:
    // 0x18d908: 0x10000064  b           . + 4 + (0x64 << 2)
label_18d90c:
    if (ctx->pc == 0x18D90Cu) {
        ctx->pc = 0x18D910u;
        goto label_18d910;
    }
    ctx->pc = 0x18D908u;
    {
        const bool branch_taken_0x18d908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d908) {
            ctx->pc = 0x18DA9Cu;
            goto label_18da9c;
        }
    }
    ctx->pc = 0x18D910u;
label_18d910:
    // 0x18d910: 0x141140  sll         $v0, $s4, 5
    ctx->pc = 0x18d910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
label_18d914:
    // 0x18d914: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18d914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_18d918:
    // 0x18d918: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18d918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d91c:
    // 0x18d91c: 0x24450220  addiu       $a1, $v0, 0x220
    ctx->pc = 0x18d91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_18d920:
    // 0x18d920: 0xc05621c  jal         func_158870
label_18d924:
    if (ctx->pc == 0x18D924u) {
        ctx->pc = 0x18D928u;
        goto label_18d928;
    }
    ctx->pc = 0x18D920u;
    SET_GPR_U32(ctx, 31, 0x18D928u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18D920u, 0x18D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D928u;
label_18d928:
    // 0x18d928: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18d928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d92c:
    // 0x18d92c: 0x1260005a  beqz        $s3, . + 4 + (0x5A << 2)
label_18d930:
    if (ctx->pc == 0x18D930u) {
        ctx->pc = 0x18D934u;
        goto label_18d934;
    }
    ctx->pc = 0x18D92Cu;
    {
        const bool branch_taken_0x18d92c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d92c) {
            ctx->pc = 0x18DA98u;
            goto label_18da98;
        }
    }
    ctx->pc = 0x18D934u;
label_18d934:
    // 0x18d934: 0x27a40368  addiu       $a0, $sp, 0x368
    ctx->pc = 0x18d934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
label_18d938:
    // 0x18d938: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18d93c:
    // 0x18d93c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_18d940:
    if (ctx->pc == 0x18D940u) {
        ctx->pc = 0x18D944u;
        goto label_18d944;
    }
    ctx->pc = 0x18D93Cu;
    {
        const bool branch_taken_0x18d93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d93c) {
            ctx->pc = 0x18D964u;
            goto label_18d964;
        }
    }
    ctx->pc = 0x18D944u;
label_18d944:
    // 0x18d944: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_18d948:
    // 0x18d948: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x18d948u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_18d94c:
    // 0x18d94c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_18d950:
    // 0x18d950: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18d950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18d954:
    // 0x18d954: 0x0  nop
    ctx->pc = 0x18d954u;
    // NOP
label_18d958:
    // 0x18d958: 0x0  nop
    ctx->pc = 0x18d958u;
    // NOP
label_18d95c:
    // 0x18d95c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_18d960:
    if (ctx->pc == 0x18D960u) {
        ctx->pc = 0x18D964u;
        goto label_18d964;
    }
    ctx->pc = 0x18D95Cu;
    {
        const bool branch_taken_0x18d95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d95c) {
            ctx->pc = 0x18D948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d948;
        }
    }
    ctx->pc = 0x18D964u;
label_18d964:
    // 0x18d964: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x18d964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_18d968:
    // 0x18d968: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d96c:
    // 0x18d96c: 0xc7a003a8  lwc1        $f0, 0x3A8($sp)
    ctx->pc = 0x18d96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d970:
    // 0x18d970: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d970u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18d974:
    // 0x18d974: 0xe7a0036c  swc1        $f0, 0x36C($sp)
    ctx->pc = 0x18d974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 876), bits); }
label_18d978:
    // 0x18d978: 0xe7a0039c  swc1        $f0, 0x39C($sp)
    ctx->pc = 0x18d978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
label_18d97c:
    // 0x18d97c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x18d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_18d980:
    // 0x18d980: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18d984:
    // 0x18d984: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18d988:
    if (ctx->pc == 0x18D988u) {
        ctx->pc = 0x18D98Cu;
        goto label_18d98c;
    }
    ctx->pc = 0x18D984u;
    {
        const bool branch_taken_0x18d984 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18d984) {
            ctx->pc = 0x18D9A0u;
            goto label_18d9a0;
        }
    }
    ctx->pc = 0x18D98Cu;
label_18d98c:
    // 0x18d98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d990:
    // 0x18d990: 0x0  nop
    ctx->pc = 0x18d990u;
    // NOP
label_18d994:
    // 0x18d994: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18d994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d998:
    // 0x18d998: 0x10000008  b           . + 4 + (0x8 << 2)
label_18d99c:
    if (ctx->pc == 0x18D99Cu) {
        ctx->pc = 0x18D9A0u;
        goto label_18d9a0;
    }
    ctx->pc = 0x18D998u;
    {
        const bool branch_taken_0x18d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d998) {
            ctx->pc = 0x18D9BCu;
            goto label_18d9bc;
        }
    }
    ctx->pc = 0x18D9A0u;
label_18d9a0:
    // 0x18d9a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18d9a4:
    // 0x18d9a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d9a8:
    // 0x18d9a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18d9ac:
    // 0x18d9ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d9acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d9b0:
    // 0x18d9b0: 0x0  nop
    ctx->pc = 0x18d9b0u;
    // NOP
label_18d9b4:
    // 0x18d9b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18d9b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d9b8:
    // 0x18d9b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18d9b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18d9bc:
    // 0x18d9bc: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x18d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_18d9c0:
    // 0x18d9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d9c4:
    // 0x18d9c4: 0x0  nop
    ctx->pc = 0x18d9c4u;
    // NOP
label_18d9c8:
    // 0x18d9c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18d9c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18d9cc:
    // 0x18d9cc: 0xc7a0036c  lwc1        $f0, 0x36C($sp)
    ctx->pc = 0x18d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d9d0:
    // 0x18d9d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d9d4:
    // 0x18d9d4: 0xe7a0036c  swc1        $f0, 0x36C($sp)
    ctx->pc = 0x18d9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 876), bits); }
label_18d9d8:
    // 0x18d9d8: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18d9dc:
    // 0x18d9dc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18d9e0:
    // 0x18d9e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d9e4:
    // 0x18d9e4: 0xc7ac0368  lwc1        $f12, 0x368($sp)
    ctx->pc = 0x18d9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d9e8:
    // 0x18d9e8: 0xc7ad036c  lwc1        $f13, 0x36C($sp)
    ctx->pc = 0x18d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d9ec:
    // 0x18d9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d9f0:
    // 0x18d9f0: 0xc08c208  jal         func_230820
label_18d9f4:
    if (ctx->pc == 0x18D9F4u) {
        ctx->pc = 0x18D9F8u;
        goto label_18d9f8;
    }
    ctx->pc = 0x18D9F0u;
    SET_GPR_U32(ctx, 31, 0x18D9F8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x18D9F0u, 0x18D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9F8u;
label_18d9f8:
    // 0x18d9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d9fc:
    // 0x18d9fc: 0x16820026  bne         $s4, $v0, . + 4 + (0x26 << 2)
label_18da00:
    if (ctx->pc == 0x18DA00u) {
        ctx->pc = 0x18DA04u;
        goto label_18da04;
    }
    ctx->pc = 0x18D9FCu;
    {
        const bool branch_taken_0x18d9fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d9fc) {
            ctx->pc = 0x18DA98u;
            goto label_18da98;
        }
    }
    ctx->pc = 0x18DA04u;
label_18da04:
    // 0x18da04: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18da04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18da08:
    // 0x18da08: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18da08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18da0c:
    // 0x18da0c: 0x24a55988  addiu       $a1, $a1, 0x5988
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22920));
label_18da10:
    // 0x18da10: 0xc05621c  jal         func_158870
label_18da14:
    if (ctx->pc == 0x18DA14u) {
        ctx->pc = 0x18DA18u;
        goto label_18da18;
    }
    ctx->pc = 0x18DA10u;
    SET_GPR_U32(ctx, 31, 0x18DA18u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18DA10u, 0x18DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA18u;
label_18da18:
    // 0x18da18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18da18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18da1c:
    // 0x18da1c: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
label_18da20:
    if (ctx->pc == 0x18DA20u) {
        ctx->pc = 0x18DA24u;
        goto label_18da24;
    }
    ctx->pc = 0x18DA1Cu;
    {
        const bool branch_taken_0x18da1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da1c) {
            ctx->pc = 0x18DA98u;
            goto label_18da98;
        }
    }
    ctx->pc = 0x18DA24u;
label_18da24:
    // 0x18da24: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x18da24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18da28:
    // 0x18da28: 0xe7a00360  swc1        $f0, 0x360($sp)
    ctx->pc = 0x18da28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_18da2c:
    // 0x18da2c: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x18da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18da30:
    // 0x18da30: 0xe7a00364  swc1        $f0, 0x364($sp)
    ctx->pc = 0x18da30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
label_18da34:
    // 0x18da34: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x18da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18da38:
    // 0x18da38: 0xe7a00358  swc1        $f0, 0x358($sp)
    ctx->pc = 0x18da38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 856), bits); }
label_18da3c:
    // 0x18da3c: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x18da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18da40:
    // 0x18da40: 0xe7a0035c  swc1        $f0, 0x35C($sp)
    ctx->pc = 0x18da40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 860), bits); }
label_18da44:
    // 0x18da44: 0x93a203c0  lbu         $v0, 0x3C0($sp)
    ctx->pc = 0x18da44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 960)));
label_18da48:
    // 0x18da48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18da4c:
    if (ctx->pc == 0x18DA4Cu) {
        ctx->pc = 0x18DA50u;
        goto label_18da50;
    }
    ctx->pc = 0x18DA48u;
    {
        const bool branch_taken_0x18da48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da48) {
            ctx->pc = 0x18DA78u;
            goto label_18da78;
        }
    }
    ctx->pc = 0x18DA50u;
label_18da50:
    // 0x18da50: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18da54:
    // 0x18da54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18da54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18da58:
    // 0x18da58: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18da5c:
    // 0x18da5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18da5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18da60:
    // 0x18da60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18da60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18da64:
    // 0x18da64: 0x27a70360  addiu       $a3, $sp, 0x360
    ctx->pc = 0x18da64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_18da68:
    // 0x18da68: 0x27a80358  addiu       $t0, $sp, 0x358
    ctx->pc = 0x18da68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
label_18da6c:
    // 0x18da6c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x18da6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18da70:
    // 0x18da70: 0xc08bbf4  jal         func_22EFD0
label_18da74:
    if (ctx->pc == 0x18DA74u) {
        ctx->pc = 0x18DA78u;
        goto label_18da78;
    }
    ctx->pc = 0x18DA70u;
    SET_GPR_U32(ctx, 31, 0x18DA78u);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x18DA70u, 0x18DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA78u;
label_18da78:
    // 0x18da78: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18da7c:
    // 0x18da7c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18da80:
    // 0x18da80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18da80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18da84:
    // 0x18da84: 0xc7ac0368  lwc1        $f12, 0x368($sp)
    ctx->pc = 0x18da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18da88:
    // 0x18da88: 0xc7ad036c  lwc1        $f13, 0x36C($sp)
    ctx->pc = 0x18da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18da8c:
    // 0x18da8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18da8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18da90:
    // 0x18da90: 0xc08c208  jal         func_230820
label_18da94:
    if (ctx->pc == 0x18DA94u) {
        ctx->pc = 0x18DA98u;
        goto label_18da98;
    }
    ctx->pc = 0x18DA90u;
    SET_GPR_U32(ctx, 31, 0x18DA98u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x18DA90u, 0x18DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA98u;
label_18da98:
    // 0x18da98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18da98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_18da9c:
    // 0x18da9c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x18da9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_18daa0:
    // 0x18daa0: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
label_18daa4:
    if (ctx->pc == 0x18DAA4u) {
        ctx->pc = 0x18DAA8u;
        goto label_18daa8;
    }
    ctx->pc = 0x18DAA0u;
    {
        const bool branch_taken_0x18daa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18daa0) {
            ctx->pc = 0x18D910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d910;
        }
    }
    ctx->pc = 0x18DAA8u;
label_18daa8:
    // 0x18daa8: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x18daa8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18daac:
    // 0x18daac: 0x1000007e  b           . + 4 + (0x7E << 2)
label_18dab0:
    if (ctx->pc == 0x18DAB0u) {
        ctx->pc = 0x18DAB4u;
        goto label_18dab4;
    }
    ctx->pc = 0x18DAACu;
    {
        const bool branch_taken_0x18daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18daac) {
            ctx->pc = 0x18DCA8u;
            goto label_18dca8;
        }
    }
    ctx->pc = 0x18DAB4u;
label_18dab4:
    // 0x18dab4: 0x171140  sll         $v0, $s7, 5
    ctx->pc = 0x18dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_18dab8:
    // 0x18dab8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_18dabc:
    // 0x18dabc: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18dac0:
    // 0x18dac0: 0x24450220  addiu       $a1, $v0, 0x220
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_18dac4:
    // 0x18dac4: 0xc05621c  jal         func_158870
label_18dac8:
    if (ctx->pc == 0x18DAC8u) {
        ctx->pc = 0x18DACCu;
        goto label_18dacc;
    }
    ctx->pc = 0x18DAC4u;
    SET_GPR_U32(ctx, 31, 0x18DACCu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18DAC4u, 0x18DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DACCu;
label_18dacc:
    // 0x18dacc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18daccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dad0:
    // 0x18dad0: 0x12400074  beqz        $s2, . + 4 + (0x74 << 2)
label_18dad4:
    if (ctx->pc == 0x18DAD4u) {
        ctx->pc = 0x18DAD8u;
        goto label_18dad8;
    }
    ctx->pc = 0x18DAD0u;
    {
        const bool branch_taken_0x18dad0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dad0) {
            ctx->pc = 0x18DCA4u;
            goto label_18dca4;
        }
    }
    ctx->pc = 0x18DAD8u;
label_18dad8:
    // 0x18dad8: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18dadc:
    // 0x18dadc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18dae0:
    // 0x18dae0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18dae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18dae4:
    // 0x18dae4: 0x27a60350  addiu       $a2, $sp, 0x350
    ctx->pc = 0x18dae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_18dae8:
    // 0x18dae8: 0xc08c6c8  jal         func_231B20
label_18daec:
    if (ctx->pc == 0x18DAECu) {
        ctx->pc = 0x18DAF0u;
        goto label_18daf0;
    }
    ctx->pc = 0x18DAE8u;
    SET_GPR_U32(ctx, 31, 0x18DAF0u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x18DAE8u, 0x18DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAF0u;
label_18daf0:
    // 0x18daf0: 0x27a40348  addiu       $a0, $sp, 0x348
    ctx->pc = 0x18daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_18daf4:
    // 0x18daf4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18daf8:
    // 0x18daf8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_18dafc:
    if (ctx->pc == 0x18DAFCu) {
        ctx->pc = 0x18DB00u;
        goto label_18db00;
    }
    ctx->pc = 0x18DAF8u;
    {
        const bool branch_taken_0x18daf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18daf8) {
            ctx->pc = 0x18DB20u;
            goto label_18db20;
        }
    }
    ctx->pc = 0x18DB00u;
label_18db00:
    // 0x18db00: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x18db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_18db04:
    // 0x18db04: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x18db04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_18db08:
    // 0x18db08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18db08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_18db0c:
    // 0x18db0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18db10:
    // 0x18db10: 0x0  nop
    ctx->pc = 0x18db10u;
    // NOP
label_18db14:
    // 0x18db14: 0x0  nop
    ctx->pc = 0x18db14u;
    // NOP
label_18db18:
    // 0x18db18: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_18db1c:
    if (ctx->pc == 0x18DB1Cu) {
        ctx->pc = 0x18DB20u;
        goto label_18db20;
    }
    ctx->pc = 0x18DB18u;
    {
        const bool branch_taken_0x18db18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18db18) {
            ctx->pc = 0x18DB04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18db04;
        }
    }
    ctx->pc = 0x18DB20u;
label_18db20:
    // 0x18db20: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x18db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_18db24:
    // 0x18db24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18db24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18db28:
    // 0x18db28: 0xc7a003a8  lwc1        $f0, 0x3A8($sp)
    ctx->pc = 0x18db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18db2c:
    // 0x18db2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18db2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18db30:
    // 0x18db30: 0xe7a0034c  swc1        $f0, 0x34C($sp)
    ctx->pc = 0x18db30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
label_18db34:
    // 0x18db34: 0xe7a00398  swc1        $f0, 0x398($sp)
    ctx->pc = 0x18db34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_18db38:
    // 0x18db38: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x18db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_18db3c:
    // 0x18db3c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18db40:
    // 0x18db40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18db44:
    if (ctx->pc == 0x18DB44u) {
        ctx->pc = 0x18DB48u;
        goto label_18db48;
    }
    ctx->pc = 0x18DB40u;
    {
        const bool branch_taken_0x18db40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18db40) {
            ctx->pc = 0x18DB5Cu;
            goto label_18db5c;
        }
    }
    ctx->pc = 0x18DB48u;
label_18db48:
    // 0x18db48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18db48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18db4c:
    // 0x18db4c: 0x0  nop
    ctx->pc = 0x18db4cu;
    // NOP
label_18db50:
    // 0x18db50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18db50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18db54:
    // 0x18db54: 0x10000008  b           . + 4 + (0x8 << 2)
label_18db58:
    if (ctx->pc == 0x18DB58u) {
        ctx->pc = 0x18DB5Cu;
        goto label_18db5c;
    }
    ctx->pc = 0x18DB54u;
    {
        const bool branch_taken_0x18db54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db54) {
            ctx->pc = 0x18DB78u;
            goto label_18db78;
        }
    }
    ctx->pc = 0x18DB5Cu;
label_18db5c:
    // 0x18db5c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18db60:
    // 0x18db60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18db64:
    // 0x18db64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18db68:
    // 0x18db68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18db68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18db6c:
    // 0x18db6c: 0x0  nop
    ctx->pc = 0x18db6cu;
    // NOP
label_18db70:
    // 0x18db70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18db70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18db74:
    // 0x18db74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18db74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18db78:
    // 0x18db78: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x18db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_18db7c:
    // 0x18db7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18db7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18db80:
    // 0x18db80: 0x0  nop
    ctx->pc = 0x18db80u;
    // NOP
label_18db84:
    // 0x18db84: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18db84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18db88:
    // 0x18db88: 0xc7a0034c  lwc1        $f0, 0x34C($sp)
    ctx->pc = 0x18db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18db8c:
    // 0x18db8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18db8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18db90:
    // 0x18db90: 0xe7a0034c  swc1        $f0, 0x34C($sp)
    ctx->pc = 0x18db90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
label_18db94:
    // 0x18db94: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18db98:
    // 0x18db98: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18db9c:
    // 0x18db9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18dba0:
    // 0x18dba0: 0xc7ac0348  lwc1        $f12, 0x348($sp)
    ctx->pc = 0x18dba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18dba4:
    // 0x18dba4: 0xc7ad034c  lwc1        $f13, 0x34C($sp)
    ctx->pc = 0x18dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18dba8:
    // 0x18dba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18dba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dbac:
    // 0x18dbac: 0xc08c208  jal         func_230820
label_18dbb0:
    if (ctx->pc == 0x18DBB0u) {
        ctx->pc = 0x18DBB4u;
        goto label_18dbb4;
    }
    ctx->pc = 0x18DBACu;
    SET_GPR_U32(ctx, 31, 0x18DBB4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x18DBACu, 0x18DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBB4u;
label_18dbb4:
    // 0x18dbb4: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18dbb8:
    // 0x18dbb8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18dbbc:
    // 0x18dbbc: 0xc0637f0  jal         func_18DFC0
label_18dbc0:
    if (ctx->pc == 0x18DBC0u) {
        ctx->pc = 0x18DBC4u;
        goto label_18dbc4;
    }
    ctx->pc = 0x18DBBCu;
    SET_GPR_U32(ctx, 31, 0x18DBC4u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18DBBCu, 0x18DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBC4u;
label_18dbc4:
    // 0x18dbc4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_18dbc8:
    if (ctx->pc == 0x18DBC8u) {
        ctx->pc = 0x18DBCCu;
        goto label_18dbcc;
    }
    ctx->pc = 0x18DBC4u;
    {
        const bool branch_taken_0x18dbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbc4) {
            ctx->pc = 0x18DC88u;
            goto label_18dc88;
        }
    }
    ctx->pc = 0x18DBCCu;
label_18dbcc:
    // 0x18dbcc: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18dbd0:
    // 0x18dbd0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18dbd4:
    // 0x18dbd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18dbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18dbd8:
    // 0x18dbd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dbdc:
    // 0x18dbdc: 0xc08c8dc  jal         func_232370
label_18dbe0:
    if (ctx->pc == 0x18DBE0u) {
        ctx->pc = 0x18DBE4u;
        goto label_18dbe4;
    }
    ctx->pc = 0x18DBDCu;
    SET_GPR_U32(ctx, 31, 0x18DBE4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18DBDCu, 0x18DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBE4u;
label_18dbe4:
    // 0x18dbe4: 0xc7a003ac  lwc1        $f0, 0x3AC($sp)
    ctx->pc = 0x18dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dbe8:
    // 0x18dbe8: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x18dbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
label_18dbec:
    // 0x18dbec: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x18dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_18dbf0:
    // 0x18dbf0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18dbf4:
    // 0x18dbf4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18dbf8:
    if (ctx->pc == 0x18DBF8u) {
        ctx->pc = 0x18DBFCu;
        goto label_18dbfc;
    }
    ctx->pc = 0x18DBF4u;
    {
        const bool branch_taken_0x18dbf4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18dbf4) {
            ctx->pc = 0x18DC10u;
            goto label_18dc10;
        }
    }
    ctx->pc = 0x18DBFCu;
label_18dbfc:
    // 0x18dbfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dc00:
    // 0x18dc00: 0x0  nop
    ctx->pc = 0x18dc00u;
    // NOP
label_18dc04:
    // 0x18dc04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18dc04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18dc08:
    // 0x18dc08: 0x10000008  b           . + 4 + (0x8 << 2)
label_18dc0c:
    if (ctx->pc == 0x18DC0Cu) {
        ctx->pc = 0x18DC10u;
        goto label_18dc10;
    }
    ctx->pc = 0x18DC08u;
    {
        const bool branch_taken_0x18dc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc08) {
            ctx->pc = 0x18DC2Cu;
            goto label_18dc2c;
        }
    }
    ctx->pc = 0x18DC10u;
label_18dc10:
    // 0x18dc10: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_18dc14:
    // 0x18dc14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18dc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18dc18:
    // 0x18dc18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18dc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18dc1c:
    // 0x18dc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18dc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dc20:
    // 0x18dc20: 0x0  nop
    ctx->pc = 0x18dc20u;
    // NOP
label_18dc24:
    // 0x18dc24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18dc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18dc28:
    // 0x18dc28: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18dc28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18dc2c:
    // 0x18dc2c: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x18dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_18dc30:
    // 0x18dc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dc34:
    // 0x18dc34: 0x0  nop
    ctx->pc = 0x18dc34u;
    // NOP
label_18dc38:
    // 0x18dc38: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18dc38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18dc3c:
    // 0x18dc3c: 0xc7a003a4  lwc1        $f0, 0x3A4($sp)
    ctx->pc = 0x18dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dc40:
    // 0x18dc40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18dc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18dc44:
    // 0x18dc44: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x18dc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
label_18dc48:
    // 0x18dc48: 0xc7a103a4  lwc1        $f1, 0x3A4($sp)
    ctx->pc = 0x18dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dc4c:
    // 0x18dc4c: 0xc7a00354  lwc1        $f0, 0x354($sp)
    ctx->pc = 0x18dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dc50:
    // 0x18dc50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18dc50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18dc54:
    // 0x18dc54: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x18dc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
label_18dc58:
    // 0x18dc58: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x18dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18dc5c:
    // 0x18dc5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18dc60:
    // 0x18dc60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18dc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18dc64:
    // 0x18dc64: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18dc68:
    // 0x18dc68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18dc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18dc6c:
    // 0x18dc6c: 0xc7ad03a4  lwc1        $f13, 0x3A4($sp)
    ctx->pc = 0x18dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18dc70:
    // 0x18dc70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dc74:
    // 0x18dc74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18dc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dc78:
    // 0x18dc78: 0xc08c544  jal         func_231510
label_18dc7c:
    if (ctx->pc == 0x18DC7Cu) {
        ctx->pc = 0x18DC80u;
        goto label_18dc80;
    }
    ctx->pc = 0x18DC78u;
    SET_GPR_U32(ctx, 31, 0x18DC80u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x18DC78u, 0x18DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC80u;
label_18dc80:
    // 0x18dc80: 0x10000008  b           . + 4 + (0x8 << 2)
label_18dc84:
    if (ctx->pc == 0x18DC84u) {
        ctx->pc = 0x18DC88u;
        goto label_18dc88;
    }
    ctx->pc = 0x18DC80u;
    {
        const bool branch_taken_0x18dc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc80) {
            ctx->pc = 0x18DCA4u;
            goto label_18dca4;
        }
    }
    ctx->pc = 0x18DC88u;
label_18dc88:
    // 0x18dc88: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18dc8c:
    // 0x18dc8c: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x18dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_18dc90:
    // 0x18dc90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18dc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18dc94:
    // 0x18dc94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18dc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18dc98:
    // 0x18dc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18dc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dc9c:
    // 0x18dc9c: 0xc08c8dc  jal         func_232370
label_18dca0:
    if (ctx->pc == 0x18DCA0u) {
        ctx->pc = 0x18DCA4u;
        goto label_18dca4;
    }
    ctx->pc = 0x18DC9Cu;
    SET_GPR_U32(ctx, 31, 0x18DCA4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18DC9Cu, 0x18DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCA4u;
label_18dca4:
    // 0x18dca4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x18dca4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_18dca8:
    // 0x18dca8: 0x2ae40006  slti        $a0, $s7, 0x6
    ctx->pc = 0x18dca8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)6) ? 1 : 0);
label_18dcac:
    // 0x18dcac: 0x1480ff81  bnez        $a0, . + 4 + (-0x7F << 2)
label_18dcb0:
    if (ctx->pc == 0x18DCB0u) {
        ctx->pc = 0x18DCB4u;
        goto label_18dcb4;
    }
    ctx->pc = 0x18DCACu;
    {
        const bool branch_taken_0x18dcac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dcac) {
            ctx->pc = 0x18DAB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dab4;
        }
    }
    ctx->pc = 0x18DCB4u;
label_18dcb4:
    // 0x18dcb4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18dcb8:
    // 0x18dcb8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18dcb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dcbc:
    // 0x18dcbc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_18dcc0:
    if (ctx->pc == 0x18DCC0u) {
        ctx->pc = 0x18DCC4u;
        goto label_18dcc4;
    }
    ctx->pc = 0x18DCBCu;
    {
        const bool branch_taken_0x18dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dcbc) {
            ctx->pc = 0x18DDB4u;
            goto label_18ddb4;
        }
    }
    ctx->pc = 0x18DCC4u;
label_18dcc4:
    // 0x18dcc4: 0x161140  sll         $v0, $s6, 5
    ctx->pc = 0x18dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_18dcc8:
    // 0x18dcc8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_18dccc:
    // 0x18dccc: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18dcd0:
    // 0x18dcd0: 0x24450220  addiu       $a1, $v0, 0x220
    ctx->pc = 0x18dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_18dcd4:
    // 0x18dcd4: 0xc05621c  jal         func_158870
label_18dcd8:
    if (ctx->pc == 0x18DCD8u) {
        ctx->pc = 0x18DCDCu;
        goto label_18dcdc;
    }
    ctx->pc = 0x18DCD4u;
    SET_GPR_U32(ctx, 31, 0x18DCDCu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18DCD4u, 0x18DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCDCu;
label_18dcdc:
    // 0x18dcdc: 0xafa203a0  sw          $v0, 0x3A0($sp)
    ctx->pc = 0x18dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
label_18dce0:
    // 0x18dce0: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x18dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_18dce4:
    // 0x18dce4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_18dce8:
    if (ctx->pc == 0x18DCE8u) {
        ctx->pc = 0x18DCECu;
        goto label_18dcec;
    }
    ctx->pc = 0x18DCE4u;
    {
        const bool branch_taken_0x18dce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dce4) {
            ctx->pc = 0x18DDB0u;
            goto label_18ddb0;
        }
    }
    ctx->pc = 0x18DCECu;
label_18dcec:
    // 0x18dcec: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x18dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_18dcf0:
    // 0x18dcf0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18dcf4:
    // 0x18dcf4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_18dcf8:
    if (ctx->pc == 0x18DCF8u) {
        ctx->pc = 0x18DCFCu;
        goto label_18dcfc;
    }
    ctx->pc = 0x18DCF4u;
    {
        const bool branch_taken_0x18dcf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dcf4) {
            ctx->pc = 0x18DD1Cu;
            goto label_18dd1c;
        }
    }
    ctx->pc = 0x18DCFCu;
label_18dcfc:
    // 0x18dcfc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x18dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_18dd00:
    // 0x18dd00: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x18dd00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_18dd04:
    // 0x18dd04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_18dd08:
    // 0x18dd08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18dd0c:
    // 0x18dd0c: 0x0  nop
    ctx->pc = 0x18dd0cu;
    // NOP
label_18dd10:
    // 0x18dd10: 0x0  nop
    ctx->pc = 0x18dd10u;
    // NOP
label_18dd14:
    // 0x18dd14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_18dd18:
    if (ctx->pc == 0x18DD18u) {
        ctx->pc = 0x18DD1Cu;
        goto label_18dd1c;
    }
    ctx->pc = 0x18DD14u;
    {
        const bool branch_taken_0x18dd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dd14) {
            ctx->pc = 0x18DD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dd00;
        }
    }
    ctx->pc = 0x18DD1Cu;
label_18dd1c:
    // 0x18dd1c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x18dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_18dd20:
    // 0x18dd20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18dd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18dd24:
    // 0x18dd24: 0xc7a003a8  lwc1        $f0, 0x3A8($sp)
    ctx->pc = 0x18dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dd28:
    // 0x18dd28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18dd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18dd2c:
    // 0x18dd2c: 0xe7a00344  swc1        $f0, 0x344($sp)
    ctx->pc = 0x18dd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
label_18dd30:
    // 0x18dd30: 0xe7a00394  swc1        $f0, 0x394($sp)
    ctx->pc = 0x18dd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
label_18dd34:
    // 0x18dd34: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x18dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_18dd38:
    // 0x18dd38: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x18dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18dd3c:
    // 0x18dd3c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_18dd40:
    if (ctx->pc == 0x18DD40u) {
        ctx->pc = 0x18DD44u;
        goto label_18dd44;
    }
    ctx->pc = 0x18DD3Cu;
    {
        const bool branch_taken_0x18dd3c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18dd3c) {
            ctx->pc = 0x18DD58u;
            goto label_18dd58;
        }
    }
    ctx->pc = 0x18DD44u;
label_18dd44:
    // 0x18dd44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18dd44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dd48:
    // 0x18dd48: 0x0  nop
    ctx->pc = 0x18dd48u;
    // NOP
label_18dd4c:
    // 0x18dd4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18dd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18dd50:
    // 0x18dd50: 0x10000008  b           . + 4 + (0x8 << 2)
label_18dd54:
    if (ctx->pc == 0x18DD54u) {
        ctx->pc = 0x18DD58u;
        goto label_18dd58;
    }
    ctx->pc = 0x18DD50u;
    {
        const bool branch_taken_0x18dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd50) {
            ctx->pc = 0x18DD74u;
            goto label_18dd74;
        }
    }
    ctx->pc = 0x18DD58u;
label_18dd58:
    // 0x18dd58: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x18dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_18dd5c:
    // 0x18dd5c: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x18dd5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_18dd60:
    // 0x18dd60: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x18dd60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_18dd64:
    // 0x18dd64: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18dd64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dd68:
    // 0x18dd68: 0x0  nop
    ctx->pc = 0x18dd68u;
    // NOP
label_18dd6c:
    // 0x18dd6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18dd6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18dd70:
    // 0x18dd70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18dd70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18dd74:
    // 0x18dd74: 0x3c0743e0  lui         $a3, 0x43E0
    ctx->pc = 0x18dd74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17376 << 16));
label_18dd78:
    // 0x18dd78: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18dd78u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dd7c:
    // 0x18dd7c: 0x0  nop
    ctx->pc = 0x18dd7cu;
    // NOP
label_18dd80:
    // 0x18dd80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18dd80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18dd84:
    // 0x18dd84: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x18dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dd88:
    // 0x18dd88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18dd88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18dd8c:
    // 0x18dd8c: 0xe7a00344  swc1        $f0, 0x344($sp)
    ctx->pc = 0x18dd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
label_18dd90:
    // 0x18dd90: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18dd94:
    // 0x18dd94: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x18dd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_18dd98:
    // 0x18dd98: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18dd9c:
    // 0x18dd9c: 0xc7ac0340  lwc1        $f12, 0x340($sp)
    ctx->pc = 0x18dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18dda0:
    // 0x18dda0: 0xc7ad0344  lwc1        $f13, 0x344($sp)
    ctx->pc = 0x18dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18dda4:
    // 0x18dda4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18dda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dda8:
    // 0x18dda8: 0xc08c208  jal         func_230820
label_18ddac:
    if (ctx->pc == 0x18DDACu) {
        ctx->pc = 0x18DDB0u;
        goto label_18ddb0;
    }
    ctx->pc = 0x18DDA8u;
    SET_GPR_U32(ctx, 31, 0x18DDB0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x18DDA8u, 0x18DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDB0u;
label_18ddb0:
    // 0x18ddb0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18ddb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18ddb4:
    // 0x18ddb4: 0x2ac30009  slti        $v1, $s6, 0x9
    ctx->pc = 0x18ddb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
label_18ddb8:
    // 0x18ddb8: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_18ddbc:
    if (ctx->pc == 0x18DDBCu) {
        ctx->pc = 0x18DDC0u;
        goto label_18ddc0;
    }
    ctx->pc = 0x18DDB8u;
    {
        const bool branch_taken_0x18ddb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ddb8) {
            ctx->pc = 0x18DCC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dcc4;
        }
    }
    ctx->pc = 0x18DDC0u;
label_18ddc0:
    // 0x18ddc0: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18ddc4:
    // 0x18ddc4: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x18ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_18ddc8:
    // 0x18ddc8: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18ddcc:
    // 0x18ddcc: 0x8fa503b0  lw          $a1, 0x3B0($sp)
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18ddd0:
    // 0x18ddd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18ddd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18ddd4:
    // 0x18ddd4: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x18ddd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18ddd8:
    // 0x18ddd8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18ddd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18dddc:
    // 0x18dddc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18dddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dde0:
    // 0x18dde0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18dde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18dde4:
    // 0x18dde4: 0xc063be0  jal         func_18EF80
label_18dde8:
    if (ctx->pc == 0x18DDE8u) {
        ctx->pc = 0x18DDECu;
        goto label_18ddec;
    }
    ctx->pc = 0x18DDE4u;
    SET_GPR_U32(ctx, 31, 0x18DDECu);
    ctx->pc = 0x18EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF80u, 0x18DDE4u, 0x18DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDECu;
label_18ddec:
    // 0x18ddec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ddecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ddf0:
    // 0x18ddf0: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x18ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18ddf4:
    // 0x18ddf4: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x18ddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_18ddf8:
    // 0x18ddf8: 0x10000035  b           . + 4 + (0x35 << 2)
label_18ddfc:
    if (ctx->pc == 0x18DDFCu) {
        ctx->pc = 0x18DE00u;
        goto label_18de00;
    }
    ctx->pc = 0x18DDF8u;
    {
        const bool branch_taken_0x18ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ddf8) {
            ctx->pc = 0x18DED0u;
            goto label_18ded0;
        }
    }
    ctx->pc = 0x18DE00u;
label_18de00:
    // 0x18de00: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18de00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18de04:
    // 0x18de04: 0x1000001b  b           . + 4 + (0x1B << 2)
label_18de08:
    if (ctx->pc == 0x18DE08u) {
        ctx->pc = 0x18DE0Cu;
        goto label_18de0c;
    }
    ctx->pc = 0x18DE04u;
    {
        const bool branch_taken_0x18de04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de04) {
            ctx->pc = 0x18DE74u;
            goto label_18de74;
        }
    }
    ctx->pc = 0x18DE0Cu;
label_18de0c:
    // 0x18de0c: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18de10:
    // 0x18de10: 0x24820054  addiu       $v0, $a0, 0x54
    ctx->pc = 0x18de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_18de14:
    // 0x18de14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18de14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de18:
    // 0x18de18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18de18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18de1c:
    // 0x18de1c: 0xc0637e0  jal         func_18DF80
label_18de20:
    if (ctx->pc == 0x18DE20u) {
        ctx->pc = 0x18DE24u;
        goto label_18de24;
    }
    ctx->pc = 0x18DE1Cu;
    SET_GPR_U32(ctx, 31, 0x18DE24u);
    ctx->pc = 0x18DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF80u, 0x18DE1Cu, 0x18DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE24u;
label_18de24:
    // 0x18de24: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x18de24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de28:
    // 0x18de28: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x18de28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18de2c:
    // 0x18de2c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x18de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_18de30:
    // 0x18de30: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x18de30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_18de34:
    // 0x18de34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18de34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18de38:
    // 0x18de38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18de38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18de3c:
    // 0x18de3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18de3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18de40:
    // 0x18de40: 0xc08c8dc  jal         func_232370
label_18de44:
    if (ctx->pc == 0x18DE44u) {
        ctx->pc = 0x18DE48u;
        goto label_18de48;
    }
    ctx->pc = 0x18DE40u;
    SET_GPR_U32(ctx, 31, 0x18DE48u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18DE40u, 0x18DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE48u;
label_18de48:
    // 0x18de48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18de48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de4c:
    // 0x18de4c: 0x8fa703b0  lw          $a3, 0x3B0($sp)
    ctx->pc = 0x18de4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18de50:
    // 0x18de50: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x18de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_18de54:
    // 0x18de54: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x18de54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_18de58:
    // 0x18de58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18de58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de5c:
    // 0x18de5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18de5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18de60:
    // 0x18de60: 0xc08c8dc  jal         func_232370
label_18de64:
    if (ctx->pc == 0x18DE64u) {
        ctx->pc = 0x18DE68u;
        goto label_18de68;
    }
    ctx->pc = 0x18DE60u;
    SET_GPR_U32(ctx, 31, 0x18DE68u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18DE60u, 0x18DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE68u;
label_18de68:
    // 0x18de68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18de68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de6c:
    // 0x18de6c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x18de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_18de70:
    // 0x18de70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18de70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de74:
    // 0x18de74: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x18de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18de78:
    // 0x18de78: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_18de7c:
    // 0x18de7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de80:
    // 0x18de80: 0xc0633d0  jal         func_18CF40
label_18de84:
    if (ctx->pc == 0x18DE84u) {
        ctx->pc = 0x18DE88u;
        goto label_18de88;
    }
    ctx->pc = 0x18DE80u;
    SET_GPR_U32(ctx, 31, 0x18DE88u);
    ctx->pc = 0x18CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF40u, 0x18DE80u, 0x18DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE88u;
label_18de88:
    // 0x18de88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de8c:
    // 0x18de8c: 0x2a4282a  slt         $a1, $s5, $a0
    ctx->pc = 0x18de8cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_18de90:
    // 0x18de90: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
label_18de94:
    if (ctx->pc == 0x18DE94u) {
        ctx->pc = 0x18DE98u;
        goto label_18de98;
    }
    ctx->pc = 0x18DE90u;
    {
        const bool branch_taken_0x18de90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18de90) {
            ctx->pc = 0x18DE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18de0c;
        }
    }
    ctx->pc = 0x18DE98u;
label_18de98:
    // 0x18de98: 0x8fa603b0  lw          $a2, 0x3B0($sp)
    ctx->pc = 0x18de98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18de9c:
    // 0x18de9c: 0xc4c10070  lwc1        $f1, 0x70($a2)
    ctx->pc = 0x18de9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dea0:
    // 0x18dea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18dea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dea4:
    // 0x18dea4: 0x0  nop
    ctx->pc = 0x18dea4u;
    // NOP
label_18dea8:
    // 0x18dea8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18dea8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18deac:
    // 0x18deac: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_18deb0:
    if (ctx->pc == 0x18DEB0u) {
        ctx->pc = 0x18DEB4u;
        goto label_18deb4;
    }
    ctx->pc = 0x18DEACu;
    {
        const bool branch_taken_0x18deac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18deac) {
            ctx->pc = 0x18DED0u;
            goto label_18ded0;
        }
    }
    ctx->pc = 0x18DEB4u;
label_18deb4:
    // 0x18deb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18deb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18deb8:
    // 0x18deb8: 0x8fa703b0  lw          $a3, 0x3B0($sp)
    ctx->pc = 0x18deb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_18debc:
    // 0x18debc: 0xe4e00070  swc1        $f0, 0x70($a3)
    ctx->pc = 0x18debcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
label_18dec0:
    // 0x18dec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18dec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dec4:
    // 0x18dec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18dec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dec8:
    // 0x18dec8: 0xc125d14  jal         func_497450
label_18decc:
    if (ctx->pc == 0x18DECCu) {
        ctx->pc = 0x18DED0u;
        goto label_18ded0;
    }
    ctx->pc = 0x18DEC8u;
    SET_GPR_U32(ctx, 31, 0x18DED0u);
    ctx->pc = 0x497450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497450u, 0x18DEC8u, 0x18DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DED0u;
label_18ded0:
    // 0x18ded0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18ded0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_18ded4:
    // 0x18ded4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18ded4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18ded8:
    // 0x18ded8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18ded8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18dedc:
    // 0x18dedc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18dedcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18dee0:
    // 0x18dee0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18dee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18dee4:
    // 0x18dee4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18dee4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18dee8:
    // 0x18dee8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18dee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18deec:
    // 0x18deec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18deecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18def0:
    // 0x18def0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18def0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18def4:
    // 0x18def4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18def4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18def8:
    // 0x18def8: 0x27bd03d0  addiu       $sp, $sp, 0x3D0
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_18defc:
    // 0x18defc: 0x3e00008  jr          $ra
label_18df00:
    if (ctx->pc == 0x18DF00u) {
        ctx->pc = 0x18DF04u;
        goto label_18df04;
    }
    ctx->pc = 0x18DEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DF04u;
label_18df04:
    // 0x18df04: 0x0  nop
    ctx->pc = 0x18df04u;
    // NOP
label_18df08:
    // 0x18df08: 0x0  nop
    ctx->pc = 0x18df08u;
    // NOP
label_18df0c:
    // 0x18df0c: 0x0  nop
    ctx->pc = 0x18df0cu;
    // NOP
    ctx->pc = 0x18df10u;
}
