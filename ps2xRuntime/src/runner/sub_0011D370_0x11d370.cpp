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

// Function: sub_0011D370
// Address: 0x11d370 - 0x11df60
void sub_0011D370_0x11d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D370_0x11d370");
#endif

    switch (ctx->pc) {
        case 0x11d370u: goto label_11d370;
        case 0x11d374u: goto label_11d374;
        case 0x11d378u: goto label_11d378;
        case 0x11d37cu: goto label_11d37c;
        case 0x11d380u: goto label_11d380;
        case 0x11d384u: goto label_11d384;
        case 0x11d388u: goto label_11d388;
        case 0x11d38cu: goto label_11d38c;
        case 0x11d390u: goto label_11d390;
        case 0x11d394u: goto label_11d394;
        case 0x11d398u: goto label_11d398;
        case 0x11d39cu: goto label_11d39c;
        case 0x11d3a0u: goto label_11d3a0;
        case 0x11d3a4u: goto label_11d3a4;
        case 0x11d3a8u: goto label_11d3a8;
        case 0x11d3acu: goto label_11d3ac;
        case 0x11d3b0u: goto label_11d3b0;
        case 0x11d3b4u: goto label_11d3b4;
        case 0x11d3b8u: goto label_11d3b8;
        case 0x11d3bcu: goto label_11d3bc;
        case 0x11d3c0u: goto label_11d3c0;
        case 0x11d3c4u: goto label_11d3c4;
        case 0x11d3c8u: goto label_11d3c8;
        case 0x11d3ccu: goto label_11d3cc;
        case 0x11d3d0u: goto label_11d3d0;
        case 0x11d3d4u: goto label_11d3d4;
        case 0x11d3d8u: goto label_11d3d8;
        case 0x11d3dcu: goto label_11d3dc;
        case 0x11d3e0u: goto label_11d3e0;
        case 0x11d3e4u: goto label_11d3e4;
        case 0x11d3e8u: goto label_11d3e8;
        case 0x11d3ecu: goto label_11d3ec;
        case 0x11d3f0u: goto label_11d3f0;
        case 0x11d3f4u: goto label_11d3f4;
        case 0x11d3f8u: goto label_11d3f8;
        case 0x11d3fcu: goto label_11d3fc;
        case 0x11d400u: goto label_11d400;
        case 0x11d404u: goto label_11d404;
        case 0x11d408u: goto label_11d408;
        case 0x11d40cu: goto label_11d40c;
        case 0x11d410u: goto label_11d410;
        case 0x11d414u: goto label_11d414;
        case 0x11d418u: goto label_11d418;
        case 0x11d41cu: goto label_11d41c;
        case 0x11d420u: goto label_11d420;
        case 0x11d424u: goto label_11d424;
        case 0x11d428u: goto label_11d428;
        case 0x11d42cu: goto label_11d42c;
        case 0x11d430u: goto label_11d430;
        case 0x11d434u: goto label_11d434;
        case 0x11d438u: goto label_11d438;
        case 0x11d43cu: goto label_11d43c;
        case 0x11d440u: goto label_11d440;
        case 0x11d444u: goto label_11d444;
        case 0x11d448u: goto label_11d448;
        case 0x11d44cu: goto label_11d44c;
        case 0x11d450u: goto label_11d450;
        case 0x11d454u: goto label_11d454;
        case 0x11d458u: goto label_11d458;
        case 0x11d45cu: goto label_11d45c;
        case 0x11d460u: goto label_11d460;
        case 0x11d464u: goto label_11d464;
        case 0x11d468u: goto label_11d468;
        case 0x11d46cu: goto label_11d46c;
        case 0x11d470u: goto label_11d470;
        case 0x11d474u: goto label_11d474;
        case 0x11d478u: goto label_11d478;
        case 0x11d47cu: goto label_11d47c;
        case 0x11d480u: goto label_11d480;
        case 0x11d484u: goto label_11d484;
        case 0x11d488u: goto label_11d488;
        case 0x11d48cu: goto label_11d48c;
        case 0x11d490u: goto label_11d490;
        case 0x11d494u: goto label_11d494;
        case 0x11d498u: goto label_11d498;
        case 0x11d49cu: goto label_11d49c;
        case 0x11d4a0u: goto label_11d4a0;
        case 0x11d4a4u: goto label_11d4a4;
        case 0x11d4a8u: goto label_11d4a8;
        case 0x11d4acu: goto label_11d4ac;
        case 0x11d4b0u: goto label_11d4b0;
        case 0x11d4b4u: goto label_11d4b4;
        case 0x11d4b8u: goto label_11d4b8;
        case 0x11d4bcu: goto label_11d4bc;
        case 0x11d4c0u: goto label_11d4c0;
        case 0x11d4c4u: goto label_11d4c4;
        case 0x11d4c8u: goto label_11d4c8;
        case 0x11d4ccu: goto label_11d4cc;
        case 0x11d4d0u: goto label_11d4d0;
        case 0x11d4d4u: goto label_11d4d4;
        case 0x11d4d8u: goto label_11d4d8;
        case 0x11d4dcu: goto label_11d4dc;
        case 0x11d4e0u: goto label_11d4e0;
        case 0x11d4e4u: goto label_11d4e4;
        case 0x11d4e8u: goto label_11d4e8;
        case 0x11d4ecu: goto label_11d4ec;
        case 0x11d4f0u: goto label_11d4f0;
        case 0x11d4f4u: goto label_11d4f4;
        case 0x11d4f8u: goto label_11d4f8;
        case 0x11d4fcu: goto label_11d4fc;
        case 0x11d500u: goto label_11d500;
        case 0x11d504u: goto label_11d504;
        case 0x11d508u: goto label_11d508;
        case 0x11d50cu: goto label_11d50c;
        case 0x11d510u: goto label_11d510;
        case 0x11d514u: goto label_11d514;
        case 0x11d518u: goto label_11d518;
        case 0x11d51cu: goto label_11d51c;
        case 0x11d520u: goto label_11d520;
        case 0x11d524u: goto label_11d524;
        case 0x11d528u: goto label_11d528;
        case 0x11d52cu: goto label_11d52c;
        case 0x11d530u: goto label_11d530;
        case 0x11d534u: goto label_11d534;
        case 0x11d538u: goto label_11d538;
        case 0x11d53cu: goto label_11d53c;
        case 0x11d540u: goto label_11d540;
        case 0x11d544u: goto label_11d544;
        case 0x11d548u: goto label_11d548;
        case 0x11d54cu: goto label_11d54c;
        case 0x11d550u: goto label_11d550;
        case 0x11d554u: goto label_11d554;
        case 0x11d558u: goto label_11d558;
        case 0x11d55cu: goto label_11d55c;
        case 0x11d560u: goto label_11d560;
        case 0x11d564u: goto label_11d564;
        case 0x11d568u: goto label_11d568;
        case 0x11d56cu: goto label_11d56c;
        case 0x11d570u: goto label_11d570;
        case 0x11d574u: goto label_11d574;
        case 0x11d578u: goto label_11d578;
        case 0x11d57cu: goto label_11d57c;
        case 0x11d580u: goto label_11d580;
        case 0x11d584u: goto label_11d584;
        case 0x11d588u: goto label_11d588;
        case 0x11d58cu: goto label_11d58c;
        case 0x11d590u: goto label_11d590;
        case 0x11d594u: goto label_11d594;
        case 0x11d598u: goto label_11d598;
        case 0x11d59cu: goto label_11d59c;
        case 0x11d5a0u: goto label_11d5a0;
        case 0x11d5a4u: goto label_11d5a4;
        case 0x11d5a8u: goto label_11d5a8;
        case 0x11d5acu: goto label_11d5ac;
        case 0x11d5b0u: goto label_11d5b0;
        case 0x11d5b4u: goto label_11d5b4;
        case 0x11d5b8u: goto label_11d5b8;
        case 0x11d5bcu: goto label_11d5bc;
        case 0x11d5c0u: goto label_11d5c0;
        case 0x11d5c4u: goto label_11d5c4;
        case 0x11d5c8u: goto label_11d5c8;
        case 0x11d5ccu: goto label_11d5cc;
        case 0x11d5d0u: goto label_11d5d0;
        case 0x11d5d4u: goto label_11d5d4;
        case 0x11d5d8u: goto label_11d5d8;
        case 0x11d5dcu: goto label_11d5dc;
        case 0x11d5e0u: goto label_11d5e0;
        case 0x11d5e4u: goto label_11d5e4;
        case 0x11d5e8u: goto label_11d5e8;
        case 0x11d5ecu: goto label_11d5ec;
        case 0x11d5f0u: goto label_11d5f0;
        case 0x11d5f4u: goto label_11d5f4;
        case 0x11d5f8u: goto label_11d5f8;
        case 0x11d5fcu: goto label_11d5fc;
        case 0x11d600u: goto label_11d600;
        case 0x11d604u: goto label_11d604;
        case 0x11d608u: goto label_11d608;
        case 0x11d60cu: goto label_11d60c;
        case 0x11d610u: goto label_11d610;
        case 0x11d614u: goto label_11d614;
        case 0x11d618u: goto label_11d618;
        case 0x11d61cu: goto label_11d61c;
        case 0x11d620u: goto label_11d620;
        case 0x11d624u: goto label_11d624;
        case 0x11d628u: goto label_11d628;
        case 0x11d62cu: goto label_11d62c;
        case 0x11d630u: goto label_11d630;
        case 0x11d634u: goto label_11d634;
        case 0x11d638u: goto label_11d638;
        case 0x11d63cu: goto label_11d63c;
        case 0x11d640u: goto label_11d640;
        case 0x11d644u: goto label_11d644;
        case 0x11d648u: goto label_11d648;
        case 0x11d64cu: goto label_11d64c;
        case 0x11d650u: goto label_11d650;
        case 0x11d654u: goto label_11d654;
        case 0x11d658u: goto label_11d658;
        case 0x11d65cu: goto label_11d65c;
        case 0x11d660u: goto label_11d660;
        case 0x11d664u: goto label_11d664;
        case 0x11d668u: goto label_11d668;
        case 0x11d66cu: goto label_11d66c;
        case 0x11d670u: goto label_11d670;
        case 0x11d674u: goto label_11d674;
        case 0x11d678u: goto label_11d678;
        case 0x11d67cu: goto label_11d67c;
        case 0x11d680u: goto label_11d680;
        case 0x11d684u: goto label_11d684;
        case 0x11d688u: goto label_11d688;
        case 0x11d68cu: goto label_11d68c;
        case 0x11d690u: goto label_11d690;
        case 0x11d694u: goto label_11d694;
        case 0x11d698u: goto label_11d698;
        case 0x11d69cu: goto label_11d69c;
        case 0x11d6a0u: goto label_11d6a0;
        case 0x11d6a4u: goto label_11d6a4;
        case 0x11d6a8u: goto label_11d6a8;
        case 0x11d6acu: goto label_11d6ac;
        case 0x11d6b0u: goto label_11d6b0;
        case 0x11d6b4u: goto label_11d6b4;
        case 0x11d6b8u: goto label_11d6b8;
        case 0x11d6bcu: goto label_11d6bc;
        case 0x11d6c0u: goto label_11d6c0;
        case 0x11d6c4u: goto label_11d6c4;
        case 0x11d6c8u: goto label_11d6c8;
        case 0x11d6ccu: goto label_11d6cc;
        case 0x11d6d0u: goto label_11d6d0;
        case 0x11d6d4u: goto label_11d6d4;
        case 0x11d6d8u: goto label_11d6d8;
        case 0x11d6dcu: goto label_11d6dc;
        case 0x11d6e0u: goto label_11d6e0;
        case 0x11d6e4u: goto label_11d6e4;
        case 0x11d6e8u: goto label_11d6e8;
        case 0x11d6ecu: goto label_11d6ec;
        case 0x11d6f0u: goto label_11d6f0;
        case 0x11d6f4u: goto label_11d6f4;
        case 0x11d6f8u: goto label_11d6f8;
        case 0x11d6fcu: goto label_11d6fc;
        case 0x11d700u: goto label_11d700;
        case 0x11d704u: goto label_11d704;
        case 0x11d708u: goto label_11d708;
        case 0x11d70cu: goto label_11d70c;
        case 0x11d710u: goto label_11d710;
        case 0x11d714u: goto label_11d714;
        case 0x11d718u: goto label_11d718;
        case 0x11d71cu: goto label_11d71c;
        case 0x11d720u: goto label_11d720;
        case 0x11d724u: goto label_11d724;
        case 0x11d728u: goto label_11d728;
        case 0x11d72cu: goto label_11d72c;
        case 0x11d730u: goto label_11d730;
        case 0x11d734u: goto label_11d734;
        case 0x11d738u: goto label_11d738;
        case 0x11d73cu: goto label_11d73c;
        case 0x11d740u: goto label_11d740;
        case 0x11d744u: goto label_11d744;
        case 0x11d748u: goto label_11d748;
        case 0x11d74cu: goto label_11d74c;
        case 0x11d750u: goto label_11d750;
        case 0x11d754u: goto label_11d754;
        case 0x11d758u: goto label_11d758;
        case 0x11d75cu: goto label_11d75c;
        case 0x11d760u: goto label_11d760;
        case 0x11d764u: goto label_11d764;
        case 0x11d768u: goto label_11d768;
        case 0x11d76cu: goto label_11d76c;
        case 0x11d770u: goto label_11d770;
        case 0x11d774u: goto label_11d774;
        case 0x11d778u: goto label_11d778;
        case 0x11d77cu: goto label_11d77c;
        case 0x11d780u: goto label_11d780;
        case 0x11d784u: goto label_11d784;
        case 0x11d788u: goto label_11d788;
        case 0x11d78cu: goto label_11d78c;
        case 0x11d790u: goto label_11d790;
        case 0x11d794u: goto label_11d794;
        case 0x11d798u: goto label_11d798;
        case 0x11d79cu: goto label_11d79c;
        case 0x11d7a0u: goto label_11d7a0;
        case 0x11d7a4u: goto label_11d7a4;
        case 0x11d7a8u: goto label_11d7a8;
        case 0x11d7acu: goto label_11d7ac;
        case 0x11d7b0u: goto label_11d7b0;
        case 0x11d7b4u: goto label_11d7b4;
        case 0x11d7b8u: goto label_11d7b8;
        case 0x11d7bcu: goto label_11d7bc;
        case 0x11d7c0u: goto label_11d7c0;
        case 0x11d7c4u: goto label_11d7c4;
        case 0x11d7c8u: goto label_11d7c8;
        case 0x11d7ccu: goto label_11d7cc;
        case 0x11d7d0u: goto label_11d7d0;
        case 0x11d7d4u: goto label_11d7d4;
        case 0x11d7d8u: goto label_11d7d8;
        case 0x11d7dcu: goto label_11d7dc;
        case 0x11d7e0u: goto label_11d7e0;
        case 0x11d7e4u: goto label_11d7e4;
        case 0x11d7e8u: goto label_11d7e8;
        case 0x11d7ecu: goto label_11d7ec;
        case 0x11d7f0u: goto label_11d7f0;
        case 0x11d7f4u: goto label_11d7f4;
        case 0x11d7f8u: goto label_11d7f8;
        case 0x11d7fcu: goto label_11d7fc;
        case 0x11d800u: goto label_11d800;
        case 0x11d804u: goto label_11d804;
        case 0x11d808u: goto label_11d808;
        case 0x11d80cu: goto label_11d80c;
        case 0x11d810u: goto label_11d810;
        case 0x11d814u: goto label_11d814;
        case 0x11d818u: goto label_11d818;
        case 0x11d81cu: goto label_11d81c;
        case 0x11d820u: goto label_11d820;
        case 0x11d824u: goto label_11d824;
        case 0x11d828u: goto label_11d828;
        case 0x11d82cu: goto label_11d82c;
        case 0x11d830u: goto label_11d830;
        case 0x11d834u: goto label_11d834;
        case 0x11d838u: goto label_11d838;
        case 0x11d83cu: goto label_11d83c;
        case 0x11d840u: goto label_11d840;
        case 0x11d844u: goto label_11d844;
        case 0x11d848u: goto label_11d848;
        case 0x11d84cu: goto label_11d84c;
        case 0x11d850u: goto label_11d850;
        case 0x11d854u: goto label_11d854;
        case 0x11d858u: goto label_11d858;
        case 0x11d85cu: goto label_11d85c;
        case 0x11d860u: goto label_11d860;
        case 0x11d864u: goto label_11d864;
        case 0x11d868u: goto label_11d868;
        case 0x11d86cu: goto label_11d86c;
        case 0x11d870u: goto label_11d870;
        case 0x11d874u: goto label_11d874;
        case 0x11d878u: goto label_11d878;
        case 0x11d87cu: goto label_11d87c;
        case 0x11d880u: goto label_11d880;
        case 0x11d884u: goto label_11d884;
        case 0x11d888u: goto label_11d888;
        case 0x11d88cu: goto label_11d88c;
        case 0x11d890u: goto label_11d890;
        case 0x11d894u: goto label_11d894;
        case 0x11d898u: goto label_11d898;
        case 0x11d89cu: goto label_11d89c;
        case 0x11d8a0u: goto label_11d8a0;
        case 0x11d8a4u: goto label_11d8a4;
        case 0x11d8a8u: goto label_11d8a8;
        case 0x11d8acu: goto label_11d8ac;
        case 0x11d8b0u: goto label_11d8b0;
        case 0x11d8b4u: goto label_11d8b4;
        case 0x11d8b8u: goto label_11d8b8;
        case 0x11d8bcu: goto label_11d8bc;
        case 0x11d8c0u: goto label_11d8c0;
        case 0x11d8c4u: goto label_11d8c4;
        case 0x11d8c8u: goto label_11d8c8;
        case 0x11d8ccu: goto label_11d8cc;
        case 0x11d8d0u: goto label_11d8d0;
        case 0x11d8d4u: goto label_11d8d4;
        case 0x11d8d8u: goto label_11d8d8;
        case 0x11d8dcu: goto label_11d8dc;
        case 0x11d8e0u: goto label_11d8e0;
        case 0x11d8e4u: goto label_11d8e4;
        case 0x11d8e8u: goto label_11d8e8;
        case 0x11d8ecu: goto label_11d8ec;
        case 0x11d8f0u: goto label_11d8f0;
        case 0x11d8f4u: goto label_11d8f4;
        case 0x11d8f8u: goto label_11d8f8;
        case 0x11d8fcu: goto label_11d8fc;
        case 0x11d900u: goto label_11d900;
        case 0x11d904u: goto label_11d904;
        case 0x11d908u: goto label_11d908;
        case 0x11d90cu: goto label_11d90c;
        case 0x11d910u: goto label_11d910;
        case 0x11d914u: goto label_11d914;
        case 0x11d918u: goto label_11d918;
        case 0x11d91cu: goto label_11d91c;
        case 0x11d920u: goto label_11d920;
        case 0x11d924u: goto label_11d924;
        case 0x11d928u: goto label_11d928;
        case 0x11d92cu: goto label_11d92c;
        case 0x11d930u: goto label_11d930;
        case 0x11d934u: goto label_11d934;
        case 0x11d938u: goto label_11d938;
        case 0x11d93cu: goto label_11d93c;
        case 0x11d940u: goto label_11d940;
        case 0x11d944u: goto label_11d944;
        case 0x11d948u: goto label_11d948;
        case 0x11d94cu: goto label_11d94c;
        case 0x11d950u: goto label_11d950;
        case 0x11d954u: goto label_11d954;
        case 0x11d958u: goto label_11d958;
        case 0x11d95cu: goto label_11d95c;
        case 0x11d960u: goto label_11d960;
        case 0x11d964u: goto label_11d964;
        case 0x11d968u: goto label_11d968;
        case 0x11d96cu: goto label_11d96c;
        case 0x11d970u: goto label_11d970;
        case 0x11d974u: goto label_11d974;
        case 0x11d978u: goto label_11d978;
        case 0x11d97cu: goto label_11d97c;
        case 0x11d980u: goto label_11d980;
        case 0x11d984u: goto label_11d984;
        case 0x11d988u: goto label_11d988;
        case 0x11d98cu: goto label_11d98c;
        case 0x11d990u: goto label_11d990;
        case 0x11d994u: goto label_11d994;
        case 0x11d998u: goto label_11d998;
        case 0x11d99cu: goto label_11d99c;
        case 0x11d9a0u: goto label_11d9a0;
        case 0x11d9a4u: goto label_11d9a4;
        case 0x11d9a8u: goto label_11d9a8;
        case 0x11d9acu: goto label_11d9ac;
        case 0x11d9b0u: goto label_11d9b0;
        case 0x11d9b4u: goto label_11d9b4;
        case 0x11d9b8u: goto label_11d9b8;
        case 0x11d9bcu: goto label_11d9bc;
        case 0x11d9c0u: goto label_11d9c0;
        case 0x11d9c4u: goto label_11d9c4;
        case 0x11d9c8u: goto label_11d9c8;
        case 0x11d9ccu: goto label_11d9cc;
        case 0x11d9d0u: goto label_11d9d0;
        case 0x11d9d4u: goto label_11d9d4;
        case 0x11d9d8u: goto label_11d9d8;
        case 0x11d9dcu: goto label_11d9dc;
        case 0x11d9e0u: goto label_11d9e0;
        case 0x11d9e4u: goto label_11d9e4;
        case 0x11d9e8u: goto label_11d9e8;
        case 0x11d9ecu: goto label_11d9ec;
        case 0x11d9f0u: goto label_11d9f0;
        case 0x11d9f4u: goto label_11d9f4;
        case 0x11d9f8u: goto label_11d9f8;
        case 0x11d9fcu: goto label_11d9fc;
        case 0x11da00u: goto label_11da00;
        case 0x11da04u: goto label_11da04;
        case 0x11da08u: goto label_11da08;
        case 0x11da0cu: goto label_11da0c;
        case 0x11da10u: goto label_11da10;
        case 0x11da14u: goto label_11da14;
        case 0x11da18u: goto label_11da18;
        case 0x11da1cu: goto label_11da1c;
        case 0x11da20u: goto label_11da20;
        case 0x11da24u: goto label_11da24;
        case 0x11da28u: goto label_11da28;
        case 0x11da2cu: goto label_11da2c;
        case 0x11da30u: goto label_11da30;
        case 0x11da34u: goto label_11da34;
        case 0x11da38u: goto label_11da38;
        case 0x11da3cu: goto label_11da3c;
        case 0x11da40u: goto label_11da40;
        case 0x11da44u: goto label_11da44;
        case 0x11da48u: goto label_11da48;
        case 0x11da4cu: goto label_11da4c;
        case 0x11da50u: goto label_11da50;
        case 0x11da54u: goto label_11da54;
        case 0x11da58u: goto label_11da58;
        case 0x11da5cu: goto label_11da5c;
        case 0x11da60u: goto label_11da60;
        case 0x11da64u: goto label_11da64;
        case 0x11da68u: goto label_11da68;
        case 0x11da6cu: goto label_11da6c;
        case 0x11da70u: goto label_11da70;
        case 0x11da74u: goto label_11da74;
        case 0x11da78u: goto label_11da78;
        case 0x11da7cu: goto label_11da7c;
        case 0x11da80u: goto label_11da80;
        case 0x11da84u: goto label_11da84;
        case 0x11da88u: goto label_11da88;
        case 0x11da8cu: goto label_11da8c;
        case 0x11da90u: goto label_11da90;
        case 0x11da94u: goto label_11da94;
        case 0x11da98u: goto label_11da98;
        case 0x11da9cu: goto label_11da9c;
        case 0x11daa0u: goto label_11daa0;
        case 0x11daa4u: goto label_11daa4;
        case 0x11daa8u: goto label_11daa8;
        case 0x11daacu: goto label_11daac;
        case 0x11dab0u: goto label_11dab0;
        case 0x11dab4u: goto label_11dab4;
        case 0x11dab8u: goto label_11dab8;
        case 0x11dabcu: goto label_11dabc;
        case 0x11dac0u: goto label_11dac0;
        case 0x11dac4u: goto label_11dac4;
        case 0x11dac8u: goto label_11dac8;
        case 0x11daccu: goto label_11dacc;
        case 0x11dad0u: goto label_11dad0;
        case 0x11dad4u: goto label_11dad4;
        case 0x11dad8u: goto label_11dad8;
        case 0x11dadcu: goto label_11dadc;
        case 0x11dae0u: goto label_11dae0;
        case 0x11dae4u: goto label_11dae4;
        case 0x11dae8u: goto label_11dae8;
        case 0x11daecu: goto label_11daec;
        case 0x11daf0u: goto label_11daf0;
        case 0x11daf4u: goto label_11daf4;
        case 0x11daf8u: goto label_11daf8;
        case 0x11dafcu: goto label_11dafc;
        case 0x11db00u: goto label_11db00;
        case 0x11db04u: goto label_11db04;
        case 0x11db08u: goto label_11db08;
        case 0x11db0cu: goto label_11db0c;
        case 0x11db10u: goto label_11db10;
        case 0x11db14u: goto label_11db14;
        case 0x11db18u: goto label_11db18;
        case 0x11db1cu: goto label_11db1c;
        case 0x11db20u: goto label_11db20;
        case 0x11db24u: goto label_11db24;
        case 0x11db28u: goto label_11db28;
        case 0x11db2cu: goto label_11db2c;
        case 0x11db30u: goto label_11db30;
        case 0x11db34u: goto label_11db34;
        case 0x11db38u: goto label_11db38;
        case 0x11db3cu: goto label_11db3c;
        case 0x11db40u: goto label_11db40;
        case 0x11db44u: goto label_11db44;
        case 0x11db48u: goto label_11db48;
        case 0x11db4cu: goto label_11db4c;
        case 0x11db50u: goto label_11db50;
        case 0x11db54u: goto label_11db54;
        case 0x11db58u: goto label_11db58;
        case 0x11db5cu: goto label_11db5c;
        case 0x11db60u: goto label_11db60;
        case 0x11db64u: goto label_11db64;
        case 0x11db68u: goto label_11db68;
        case 0x11db6cu: goto label_11db6c;
        case 0x11db70u: goto label_11db70;
        case 0x11db74u: goto label_11db74;
        case 0x11db78u: goto label_11db78;
        case 0x11db7cu: goto label_11db7c;
        case 0x11db80u: goto label_11db80;
        case 0x11db84u: goto label_11db84;
        case 0x11db88u: goto label_11db88;
        case 0x11db8cu: goto label_11db8c;
        case 0x11db90u: goto label_11db90;
        case 0x11db94u: goto label_11db94;
        case 0x11db98u: goto label_11db98;
        case 0x11db9cu: goto label_11db9c;
        case 0x11dba0u: goto label_11dba0;
        case 0x11dba4u: goto label_11dba4;
        case 0x11dba8u: goto label_11dba8;
        case 0x11dbacu: goto label_11dbac;
        case 0x11dbb0u: goto label_11dbb0;
        case 0x11dbb4u: goto label_11dbb4;
        case 0x11dbb8u: goto label_11dbb8;
        case 0x11dbbcu: goto label_11dbbc;
        case 0x11dbc0u: goto label_11dbc0;
        case 0x11dbc4u: goto label_11dbc4;
        case 0x11dbc8u: goto label_11dbc8;
        case 0x11dbccu: goto label_11dbcc;
        case 0x11dbd0u: goto label_11dbd0;
        case 0x11dbd4u: goto label_11dbd4;
        case 0x11dbd8u: goto label_11dbd8;
        case 0x11dbdcu: goto label_11dbdc;
        case 0x11dbe0u: goto label_11dbe0;
        case 0x11dbe4u: goto label_11dbe4;
        case 0x11dbe8u: goto label_11dbe8;
        case 0x11dbecu: goto label_11dbec;
        case 0x11dbf0u: goto label_11dbf0;
        case 0x11dbf4u: goto label_11dbf4;
        case 0x11dbf8u: goto label_11dbf8;
        case 0x11dbfcu: goto label_11dbfc;
        case 0x11dc00u: goto label_11dc00;
        case 0x11dc04u: goto label_11dc04;
        case 0x11dc08u: goto label_11dc08;
        case 0x11dc0cu: goto label_11dc0c;
        case 0x11dc10u: goto label_11dc10;
        case 0x11dc14u: goto label_11dc14;
        case 0x11dc18u: goto label_11dc18;
        case 0x11dc1cu: goto label_11dc1c;
        case 0x11dc20u: goto label_11dc20;
        case 0x11dc24u: goto label_11dc24;
        case 0x11dc28u: goto label_11dc28;
        case 0x11dc2cu: goto label_11dc2c;
        case 0x11dc30u: goto label_11dc30;
        case 0x11dc34u: goto label_11dc34;
        case 0x11dc38u: goto label_11dc38;
        case 0x11dc3cu: goto label_11dc3c;
        case 0x11dc40u: goto label_11dc40;
        case 0x11dc44u: goto label_11dc44;
        case 0x11dc48u: goto label_11dc48;
        case 0x11dc4cu: goto label_11dc4c;
        case 0x11dc50u: goto label_11dc50;
        case 0x11dc54u: goto label_11dc54;
        case 0x11dc58u: goto label_11dc58;
        case 0x11dc5cu: goto label_11dc5c;
        case 0x11dc60u: goto label_11dc60;
        case 0x11dc64u: goto label_11dc64;
        case 0x11dc68u: goto label_11dc68;
        case 0x11dc6cu: goto label_11dc6c;
        case 0x11dc70u: goto label_11dc70;
        case 0x11dc74u: goto label_11dc74;
        case 0x11dc78u: goto label_11dc78;
        case 0x11dc7cu: goto label_11dc7c;
        case 0x11dc80u: goto label_11dc80;
        case 0x11dc84u: goto label_11dc84;
        case 0x11dc88u: goto label_11dc88;
        case 0x11dc8cu: goto label_11dc8c;
        case 0x11dc90u: goto label_11dc90;
        case 0x11dc94u: goto label_11dc94;
        case 0x11dc98u: goto label_11dc98;
        case 0x11dc9cu: goto label_11dc9c;
        case 0x11dca0u: goto label_11dca0;
        case 0x11dca4u: goto label_11dca4;
        case 0x11dca8u: goto label_11dca8;
        case 0x11dcacu: goto label_11dcac;
        case 0x11dcb0u: goto label_11dcb0;
        case 0x11dcb4u: goto label_11dcb4;
        case 0x11dcb8u: goto label_11dcb8;
        case 0x11dcbcu: goto label_11dcbc;
        case 0x11dcc0u: goto label_11dcc0;
        case 0x11dcc4u: goto label_11dcc4;
        case 0x11dcc8u: goto label_11dcc8;
        case 0x11dcccu: goto label_11dccc;
        case 0x11dcd0u: goto label_11dcd0;
        case 0x11dcd4u: goto label_11dcd4;
        case 0x11dcd8u: goto label_11dcd8;
        case 0x11dcdcu: goto label_11dcdc;
        case 0x11dce0u: goto label_11dce0;
        case 0x11dce4u: goto label_11dce4;
        case 0x11dce8u: goto label_11dce8;
        case 0x11dcecu: goto label_11dcec;
        case 0x11dcf0u: goto label_11dcf0;
        case 0x11dcf4u: goto label_11dcf4;
        case 0x11dcf8u: goto label_11dcf8;
        case 0x11dcfcu: goto label_11dcfc;
        case 0x11dd00u: goto label_11dd00;
        case 0x11dd04u: goto label_11dd04;
        case 0x11dd08u: goto label_11dd08;
        case 0x11dd0cu: goto label_11dd0c;
        case 0x11dd10u: goto label_11dd10;
        case 0x11dd14u: goto label_11dd14;
        case 0x11dd18u: goto label_11dd18;
        case 0x11dd1cu: goto label_11dd1c;
        case 0x11dd20u: goto label_11dd20;
        case 0x11dd24u: goto label_11dd24;
        case 0x11dd28u: goto label_11dd28;
        case 0x11dd2cu: goto label_11dd2c;
        case 0x11dd30u: goto label_11dd30;
        case 0x11dd34u: goto label_11dd34;
        case 0x11dd38u: goto label_11dd38;
        case 0x11dd3cu: goto label_11dd3c;
        case 0x11dd40u: goto label_11dd40;
        case 0x11dd44u: goto label_11dd44;
        case 0x11dd48u: goto label_11dd48;
        case 0x11dd4cu: goto label_11dd4c;
        case 0x11dd50u: goto label_11dd50;
        case 0x11dd54u: goto label_11dd54;
        case 0x11dd58u: goto label_11dd58;
        case 0x11dd5cu: goto label_11dd5c;
        case 0x11dd60u: goto label_11dd60;
        case 0x11dd64u: goto label_11dd64;
        case 0x11dd68u: goto label_11dd68;
        case 0x11dd6cu: goto label_11dd6c;
        case 0x11dd70u: goto label_11dd70;
        case 0x11dd74u: goto label_11dd74;
        case 0x11dd78u: goto label_11dd78;
        case 0x11dd7cu: goto label_11dd7c;
        case 0x11dd80u: goto label_11dd80;
        case 0x11dd84u: goto label_11dd84;
        case 0x11dd88u: goto label_11dd88;
        case 0x11dd8cu: goto label_11dd8c;
        case 0x11dd90u: goto label_11dd90;
        case 0x11dd94u: goto label_11dd94;
        case 0x11dd98u: goto label_11dd98;
        case 0x11dd9cu: goto label_11dd9c;
        case 0x11dda0u: goto label_11dda0;
        case 0x11dda4u: goto label_11dda4;
        case 0x11dda8u: goto label_11dda8;
        case 0x11ddacu: goto label_11ddac;
        case 0x11ddb0u: goto label_11ddb0;
        case 0x11ddb4u: goto label_11ddb4;
        case 0x11ddb8u: goto label_11ddb8;
        case 0x11ddbcu: goto label_11ddbc;
        case 0x11ddc0u: goto label_11ddc0;
        case 0x11ddc4u: goto label_11ddc4;
        case 0x11ddc8u: goto label_11ddc8;
        case 0x11ddccu: goto label_11ddcc;
        case 0x11ddd0u: goto label_11ddd0;
        case 0x11ddd4u: goto label_11ddd4;
        case 0x11ddd8u: goto label_11ddd8;
        case 0x11dddcu: goto label_11dddc;
        case 0x11dde0u: goto label_11dde0;
        case 0x11dde4u: goto label_11dde4;
        case 0x11dde8u: goto label_11dde8;
        case 0x11ddecu: goto label_11ddec;
        case 0x11ddf0u: goto label_11ddf0;
        case 0x11ddf4u: goto label_11ddf4;
        case 0x11ddf8u: goto label_11ddf8;
        case 0x11ddfcu: goto label_11ddfc;
        case 0x11de00u: goto label_11de00;
        case 0x11de04u: goto label_11de04;
        case 0x11de08u: goto label_11de08;
        case 0x11de0cu: goto label_11de0c;
        case 0x11de10u: goto label_11de10;
        case 0x11de14u: goto label_11de14;
        case 0x11de18u: goto label_11de18;
        case 0x11de1cu: goto label_11de1c;
        case 0x11de20u: goto label_11de20;
        case 0x11de24u: goto label_11de24;
        case 0x11de28u: goto label_11de28;
        case 0x11de2cu: goto label_11de2c;
        case 0x11de30u: goto label_11de30;
        case 0x11de34u: goto label_11de34;
        case 0x11de38u: goto label_11de38;
        case 0x11de3cu: goto label_11de3c;
        case 0x11de40u: goto label_11de40;
        case 0x11de44u: goto label_11de44;
        case 0x11de48u: goto label_11de48;
        case 0x11de4cu: goto label_11de4c;
        case 0x11de50u: goto label_11de50;
        case 0x11de54u: goto label_11de54;
        case 0x11de58u: goto label_11de58;
        case 0x11de5cu: goto label_11de5c;
        case 0x11de60u: goto label_11de60;
        case 0x11de64u: goto label_11de64;
        case 0x11de68u: goto label_11de68;
        case 0x11de6cu: goto label_11de6c;
        case 0x11de70u: goto label_11de70;
        case 0x11de74u: goto label_11de74;
        case 0x11de78u: goto label_11de78;
        case 0x11de7cu: goto label_11de7c;
        case 0x11de80u: goto label_11de80;
        case 0x11de84u: goto label_11de84;
        case 0x11de88u: goto label_11de88;
        case 0x11de8cu: goto label_11de8c;
        case 0x11de90u: goto label_11de90;
        case 0x11de94u: goto label_11de94;
        case 0x11de98u: goto label_11de98;
        case 0x11de9cu: goto label_11de9c;
        case 0x11dea0u: goto label_11dea0;
        case 0x11dea4u: goto label_11dea4;
        case 0x11dea8u: goto label_11dea8;
        case 0x11deacu: goto label_11deac;
        case 0x11deb0u: goto label_11deb0;
        case 0x11deb4u: goto label_11deb4;
        case 0x11deb8u: goto label_11deb8;
        case 0x11debcu: goto label_11debc;
        case 0x11dec0u: goto label_11dec0;
        case 0x11dec4u: goto label_11dec4;
        case 0x11dec8u: goto label_11dec8;
        case 0x11deccu: goto label_11decc;
        case 0x11ded0u: goto label_11ded0;
        case 0x11ded4u: goto label_11ded4;
        case 0x11ded8u: goto label_11ded8;
        case 0x11dedcu: goto label_11dedc;
        case 0x11dee0u: goto label_11dee0;
        case 0x11dee4u: goto label_11dee4;
        case 0x11dee8u: goto label_11dee8;
        case 0x11deecu: goto label_11deec;
        case 0x11def0u: goto label_11def0;
        case 0x11def4u: goto label_11def4;
        case 0x11def8u: goto label_11def8;
        case 0x11defcu: goto label_11defc;
        case 0x11df00u: goto label_11df00;
        case 0x11df04u: goto label_11df04;
        case 0x11df08u: goto label_11df08;
        case 0x11df0cu: goto label_11df0c;
        case 0x11df10u: goto label_11df10;
        case 0x11df14u: goto label_11df14;
        case 0x11df18u: goto label_11df18;
        case 0x11df1cu: goto label_11df1c;
        case 0x11df20u: goto label_11df20;
        case 0x11df24u: goto label_11df24;
        case 0x11df28u: goto label_11df28;
        case 0x11df2cu: goto label_11df2c;
        case 0x11df30u: goto label_11df30;
        case 0x11df34u: goto label_11df34;
        case 0x11df38u: goto label_11df38;
        case 0x11df3cu: goto label_11df3c;
        case 0x11df40u: goto label_11df40;
        case 0x11df44u: goto label_11df44;
        case 0x11df48u: goto label_11df48;
        case 0x11df4cu: goto label_11df4c;
        case 0x11df50u: goto label_11df50;
        case 0x11df54u: goto label_11df54;
        case 0x11df58u: goto label_11df58;
        case 0x11df5cu: goto label_11df5c;
        default: break;
    }

    ctx->pc = 0x11d370u;

label_11d370:
    // 0x11d370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11d374:
    // 0x11d374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11d378:
    // 0x11d378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11d378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11d37c:
    // 0x11d37c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d380:
    // 0x11d380: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11d380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11d384:
    // 0x11d384: 0xc047074  jal         func_11C1D0
label_11d388:
    if (ctx->pc == 0x11D388u) {
        ctx->pc = 0x11D38Cu;
        goto label_11d38c;
    }
    ctx->pc = 0x11D384u;
    SET_GPR_U32(ctx, 31, 0x11D38Cu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11D384u, 0x11D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D38Cu;
label_11d38c:
    // 0x11d38c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11d390:
    // 0x11d390: 0x246334a0  addiu       $v1, $v1, 0x34A0
    ctx->pc = 0x11d390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13472));
label_11d394:
    // 0x11d394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d398:
    // 0x11d398: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11d398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11d39c:
    // 0x11d39c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d3a0:
    // 0x11d3a0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x11d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_11d3a4:
    // 0x11d3a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d3a8:
    // 0x11d3a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d3ac:
    // 0x11d3ac: 0x24a51d28  addiu       $a1, $a1, 0x1D28
    ctx->pc = 0x11d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7464));
label_11d3b0:
    // 0x11d3b0: 0xc04322c  jal         func_10C8B0
label_11d3b4:
    if (ctx->pc == 0x11D3B4u) {
        ctx->pc = 0x11D3B8u;
        goto label_11d3b8;
    }
    ctx->pc = 0x11D3B0u;
    SET_GPR_U32(ctx, 31, 0x11D3B8u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x11D3B0u, 0x11D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3B8u;
label_11d3b8:
    // 0x11d3b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d3bc:
    // 0x11d3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d3c0:
    // 0x11d3c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11d3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11d3c4:
    // 0x11d3c4: 0x3e00008  jr          $ra
label_11d3c8:
    if (ctx->pc == 0x11D3C8u) {
        ctx->pc = 0x11D3CCu;
        goto label_11d3cc;
    }
    ctx->pc = 0x11D3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D3CCu;
label_11d3cc:
    // 0x11d3cc: 0x0  nop
    ctx->pc = 0x11d3ccu;
    // NOP
label_11d3d0:
    // 0x11d3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11d3d4:
    // 0x11d3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11d3d8:
    // 0x11d3d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11d3dc:
    // 0x11d3dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11d3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_11d3e0:
    // 0x11d3e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d3e4:
    // 0x11d3e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_11d3e8:
    if (ctx->pc == 0x11D3E8u) {
        ctx->pc = 0x11D3ECu;
        goto label_11d3ec;
    }
    ctx->pc = 0x11D3E4u;
    {
        const bool branch_taken_0x11d3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3e4) {
            ctx->pc = 0x11D42Cu;
            goto label_11d42c;
        }
    }
    ctx->pc = 0x11D3ECu;
label_11d3ec:
    // 0x11d3ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11d3f0:
    // 0x11d3f0: 0x246334a0  addiu       $v1, $v1, 0x34A0
    ctx->pc = 0x11d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13472));
label_11d3f4:
    // 0x11d3f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d3f8:
    // 0x11d3f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11d3fc:
    // 0x11d3fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d400:
    // 0x11d400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d404:
    // 0x11d404: 0xc047088  jal         func_11C220
label_11d408:
    if (ctx->pc == 0x11D408u) {
        ctx->pc = 0x11D40Cu;
        goto label_11d40c;
    }
    ctx->pc = 0x11D404u;
    SET_GPR_U32(ctx, 31, 0x11D40Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x11D404u, 0x11D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D40Cu;
label_11d40c:
    // 0x11d40c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11d40cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_11d410:
    // 0x11d410: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11d410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_11d414:
    // 0x11d414: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11d414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_11d418:
    // 0x11d418: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11d41c:
    if (ctx->pc == 0x11D41Cu) {
        ctx->pc = 0x11D420u;
        goto label_11d420;
    }
    ctx->pc = 0x11D418u;
    {
        const bool branch_taken_0x11d418 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11d418) {
            ctx->pc = 0x11D42Cu;
            goto label_11d42c;
        }
    }
    ctx->pc = 0x11D420u;
label_11d420:
    // 0x11d420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d424:
    // 0x11d424: 0xc0ba070  jal         func_2E81C0
label_11d428:
    if (ctx->pc == 0x11D428u) {
        ctx->pc = 0x11D42Cu;
        goto label_11d42c;
    }
    ctx->pc = 0x11D424u;
    SET_GPR_U32(ctx, 31, 0x11D42Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11D424u, 0x11D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D42Cu;
label_11d42c:
    // 0x11d42c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11d430:
    // 0x11d430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d434:
    // 0x11d434: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11d434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11d438:
    // 0x11d438: 0x3e00008  jr          $ra
label_11d43c:
    if (ctx->pc == 0x11D43Cu) {
        ctx->pc = 0x11D440u;
        goto label_11d440;
    }
    ctx->pc = 0x11D438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D440u;
label_11d440:
    // 0x11d440: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11d444:
    // 0x11d444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_11d448:
    // 0x11d448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11d44c:
    // 0x11d44c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11d44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11d450:
    // 0x11d450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11d450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11d454:
    // 0x11d454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11d454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11d458:
    // 0x11d458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11d45c:
    // 0x11d45c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x11d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_11d460:
    // 0x11d460: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x11d460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
label_11d464:
    // 0x11d464: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x11d464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11d468:
    // 0x11d468: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11d46c:
    if (ctx->pc == 0x11D46Cu) {
        ctx->pc = 0x11D470u;
        goto label_11d470;
    }
    ctx->pc = 0x11D468u;
    {
        const bool branch_taken_0x11d468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d468) {
            ctx->pc = 0x11D498u;
            goto label_11d498;
        }
    }
    ctx->pc = 0x11D470u;
label_11d470:
    // 0x11d470: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11d470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11d474:
    // 0x11d474: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d478:
    // 0x11d478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d47c:
    // 0x11d47c: 0xc08f740  jal         func_23DD00
label_11d480:
    if (ctx->pc == 0x11D480u) {
        ctx->pc = 0x11D484u;
        goto label_11d484;
    }
    ctx->pc = 0x11D47Cu;
    SET_GPR_U32(ctx, 31, 0x11D484u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x11D47Cu, 0x11D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D484u;
label_11d484:
    // 0x11d484: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11d484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11d488:
    // 0x11d488: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11d488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11d48c:
    // 0x11d48c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d490:
    // 0x11d490: 0xc08f71c  jal         func_23DC70
label_11d494:
    if (ctx->pc == 0x11D494u) {
        ctx->pc = 0x11D498u;
        goto label_11d498;
    }
    ctx->pc = 0x11D490u;
    SET_GPR_U32(ctx, 31, 0x11D498u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x11D490u, 0x11D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D498u;
label_11d498:
    // 0x11d498: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x11d498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11d49c:
    // 0x11d49c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11d4a0:
    // 0x11d4a0: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x11d4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_11d4a4:
    // 0x11d4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d4a8:
    // 0x11d4a8: 0xc040ab0  jal         func_102AC0
label_11d4ac:
    if (ctx->pc == 0x11D4ACu) {
        ctx->pc = 0x11D4B0u;
        goto label_11d4b0;
    }
    ctx->pc = 0x11D4A8u;
    SET_GPR_U32(ctx, 31, 0x11D4B0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x11D4A8u, 0x11D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4B0u;
label_11d4b0:
    // 0x11d4b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d4b4:
    // 0x11d4b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x11d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11d4b8:
    // 0x11d4b8: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x11d4b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11d4bc:
    // 0x11d4bc: 0xc08edb0  jal         func_23B6C0
label_11d4c0:
    if (ctx->pc == 0x11D4C0u) {
        ctx->pc = 0x11D4C4u;
        goto label_11d4c4;
    }
    ctx->pc = 0x11D4BCu;
    SET_GPR_U32(ctx, 31, 0x11D4C4u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x11D4BCu, 0x11D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4C4u;
label_11d4c4:
    // 0x11d4c4: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11d4c8:
    // 0x11d4c8: 0xc050b24  jal         func_142C90
label_11d4cc:
    if (ctx->pc == 0x11D4CCu) {
        ctx->pc = 0x11D4D0u;
        goto label_11d4d0;
    }
    ctx->pc = 0x11D4C8u;
    SET_GPR_U32(ctx, 31, 0x11D4D0u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x11D4C8u, 0x11D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4D0u;
label_11d4d0:
    // 0x11d4d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d4d4:
    // 0x11d4d4: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x11d4d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11d4d8:
    // 0x11d4d8: 0xc0422c0  jal         func_108B00
label_11d4dc:
    if (ctx->pc == 0x11D4DCu) {
        ctx->pc = 0x11D4E0u;
        goto label_11d4e0;
    }
    ctx->pc = 0x11D4D8u;
    SET_GPR_U32(ctx, 31, 0x11D4E0u);
    ctx->pc = 0x108B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B00u, 0x11D4D8u, 0x11D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4E0u;
label_11d4e0:
    // 0x11d4e0: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x11d4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11d4e4:
    // 0x11d4e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11d4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11d4e8:
    // 0x11d4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d4ec:
    // 0x11d4ec: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
label_11d4f0:
    if (ctx->pc == 0x11D4F0u) {
        ctx->pc = 0x11D4F4u;
        goto label_11d4f4;
    }
    ctx->pc = 0x11D4ECu;
    {
        const bool branch_taken_0x11d4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11d4ec) {
            ctx->pc = 0x11D6B0u;
            goto label_11d6b0;
        }
    }
    ctx->pc = 0x11D4F4u;
label_11d4f4:
    // 0x11d4f4: 0xc05548c  jal         func_155230
label_11d4f8:
    if (ctx->pc == 0x11D4F8u) {
        ctx->pc = 0x11D4FCu;
        goto label_11d4fc;
    }
    ctx->pc = 0x11D4F4u;
    SET_GPR_U32(ctx, 31, 0x11D4FCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x11D4F4u, 0x11D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4FCu;
label_11d4fc:
    // 0x11d4fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d500:
    // 0x11d500: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11d500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11d504:
    // 0x11d504: 0xc0553d4  jal         func_154F50
label_11d508:
    if (ctx->pc == 0x11D508u) {
        ctx->pc = 0x11D50Cu;
        goto label_11d50c;
    }
    ctx->pc = 0x11D504u;
    SET_GPR_U32(ctx, 31, 0x11D50Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11D504u, 0x11D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D50Cu;
label_11d50c:
    // 0x11d50c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d510:
    // 0x11d510: 0x10120005  beq         $zero, $s2, . + 4 + (0x5 << 2)
label_11d514:
    if (ctx->pc == 0x11D514u) {
        ctx->pc = 0x11D518u;
        goto label_11d518;
    }
    ctx->pc = 0x11D510u;
    {
        const bool branch_taken_0x11d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x11d510) {
            ctx->pc = 0x11D528u;
            goto label_11d528;
        }
    }
    ctx->pc = 0x11D518u;
label_11d518:
    // 0x11d518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11d51c:
    // 0x11d51c: 0x278589c8  addiu       $a1, $gp, -0x7638
    ctx->pc = 0x11d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937032));
label_11d520:
    // 0x11d520: 0xc05a2f0  jal         func_168BC0
label_11d524:
    if (ctx->pc == 0x11D524u) {
        ctx->pc = 0x11D528u;
        goto label_11d528;
    }
    ctx->pc = 0x11D520u;
    SET_GPR_U32(ctx, 31, 0x11D528u);
    ctx->pc = 0x168BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168BC0u, 0x11D520u, 0x11D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D528u;
label_11d528:
    // 0x11d528: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11d528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11d52c:
    // 0x11d52c: 0xc050c64  jal         func_143190
label_11d530:
    if (ctx->pc == 0x11D530u) {
        ctx->pc = 0x11D534u;
        goto label_11d534;
    }
    ctx->pc = 0x11D52Cu;
    SET_GPR_U32(ctx, 31, 0x11D534u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x11D52Cu, 0x11D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D534u;
label_11d534:
    // 0x11d534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d538:
    // 0x11d538: 0xc04738c  jal         func_11CE30
label_11d53c:
    if (ctx->pc == 0x11D53Cu) {
        ctx->pc = 0x11D540u;
        goto label_11d540;
    }
    ctx->pc = 0x11D538u;
    SET_GPR_U32(ctx, 31, 0x11D540u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x11D538u, 0x11D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D540u;
label_11d540:
    // 0x11d540: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11d540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d544:
    // 0x11d544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11d548:
    // 0x11d548: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11d54c:
    // 0x11d54c: 0xc04c608  jal         func_131820
label_11d550:
    if (ctx->pc == 0x11D550u) {
        ctx->pc = 0x11D554u;
        goto label_11d554;
    }
    ctx->pc = 0x11D54Cu;
    SET_GPR_U32(ctx, 31, 0x11D554u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x11D54Cu, 0x11D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D554u;
label_11d554:
    // 0x11d554: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x11d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11d558:
    // 0x11d558: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x11d558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_11d55c:
    // 0x11d55c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11d560:
    // 0x11d560: 0x1283005d  beq         $s4, $v1, . + 4 + (0x5D << 2)
label_11d564:
    if (ctx->pc == 0x11D564u) {
        ctx->pc = 0x11D568u;
        goto label_11d568;
    }
    ctx->pc = 0x11D560u;
    {
        const bool branch_taken_0x11d560 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x11d560) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D568u;
label_11d568:
    // 0x11d568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d56c:
    // 0x11d56c: 0x1283005a  beq         $s4, $v1, . + 4 + (0x5A << 2)
label_11d570:
    if (ctx->pc == 0x11D570u) {
        ctx->pc = 0x11D574u;
        goto label_11d574;
    }
    ctx->pc = 0x11D56Cu;
    {
        const bool branch_taken_0x11d56c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x11d56c) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D574u;
label_11d574:
    // 0x11d574: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11d574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11d578:
    // 0x11d578: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
label_11d57c:
    if (ctx->pc == 0x11D57Cu) {
        ctx->pc = 0x11D580u;
        goto label_11d580;
    }
    ctx->pc = 0x11D578u;
    {
        const bool branch_taken_0x11d578 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x11d578) {
            ctx->pc = 0x11D588u;
            goto label_11d588;
        }
    }
    ctx->pc = 0x11D580u;
label_11d580:
    // 0x11d580: 0x10000055  b           . + 4 + (0x55 << 2)
label_11d584:
    if (ctx->pc == 0x11D584u) {
        ctx->pc = 0x11D588u;
        goto label_11d588;
    }
    ctx->pc = 0x11D580u;
    {
        const bool branch_taken_0x11d580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d580) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D588u;
label_11d588:
    // 0x11d588: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x11d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11d58c:
    // 0x11d58c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11d590:
    // 0x11d590: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d594:
    // 0x11d594: 0x24a51d38  addiu       $a1, $a1, 0x1D38
    ctx->pc = 0x11d594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7480));
label_11d598:
    // 0x11d598: 0x278689c8  addiu       $a2, $gp, -0x7638
    ctx->pc = 0x11d598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937032));
label_11d59c:
    // 0x11d59c: 0xc04206c  jal         func_1081B0
label_11d5a0:
    if (ctx->pc == 0x11D5A0u) {
        ctx->pc = 0x11D5A4u;
        goto label_11d5a4;
    }
    ctx->pc = 0x11D59Cu;
    SET_GPR_U32(ctx, 31, 0x11D5A4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x11D59Cu, 0x11D5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5A4u;
label_11d5a4:
    // 0x11d5a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d5a8:
    // 0x11d5a8: 0x8f828c90  lw          $v0, -0x7370($gp)
    ctx->pc = 0x11d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937744)));
label_11d5ac:
    // 0x11d5ac: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x11d5acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_11d5b0:
    // 0x11d5b0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_11d5b4:
    if (ctx->pc == 0x11D5B4u) {
        ctx->pc = 0x11D5B8u;
        goto label_11d5b8;
    }
    ctx->pc = 0x11D5B0u;
    {
        const bool branch_taken_0x11d5b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d5b0) {
            ctx->pc = 0x11D618u;
            goto label_11d618;
        }
    }
    ctx->pc = 0x11D5B8u;
label_11d5b8:
    // 0x11d5b8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x11d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_11d5bc:
    // 0x11d5bc: 0x24841d50  addiu       $a0, $a0, 0x1D50
    ctx->pc = 0x11d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7504));
label_11d5c0:
    // 0x11d5c0: 0xc0bc60c  jal         func_2F1830
label_11d5c4:
    if (ctx->pc == 0x11D5C4u) {
        ctx->pc = 0x11D5C8u;
        goto label_11d5c8;
    }
    ctx->pc = 0x11D5C0u;
    SET_GPR_U32(ctx, 31, 0x11D5C8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x11D5C0u, 0x11D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5C8u;
label_11d5c8:
    // 0x11d5c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11d5cc:
    // 0x11d5cc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d5d0:
    // 0x11d5d0: 0x24a51d50  addiu       $a1, $a1, 0x1D50
    ctx->pc = 0x11d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7504));
label_11d5d4:
    // 0x11d5d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11d5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d5d8:
    // 0x11d5d8: 0xc0bc66e  jal         func_2F19B8
label_11d5dc:
    if (ctx->pc == 0x11D5DCu) {
        ctx->pc = 0x11D5E0u;
        goto label_11d5e0;
    }
    ctx->pc = 0x11D5D8u;
    SET_GPR_U32(ctx, 31, 0x11D5E0u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x11D5D8u, 0x11D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5E0u;
label_11d5e0:
    // 0x11d5e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_11d5e4:
    if (ctx->pc == 0x11D5E4u) {
        ctx->pc = 0x11D5E8u;
        goto label_11d5e8;
    }
    ctx->pc = 0x11D5E0u;
    {
        const bool branch_taken_0x11d5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d5e0) {
            ctx->pc = 0x11D618u;
            goto label_11d618;
        }
    }
    ctx->pc = 0x11D5E8u;
label_11d5e8:
    // 0x11d5e8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x11d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_11d5ec:
    // 0x11d5ec: 0x24841d70  addiu       $a0, $a0, 0x1D70
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7536));
label_11d5f0:
    // 0x11d5f0: 0xc0bc60c  jal         func_2F1830
label_11d5f4:
    if (ctx->pc == 0x11D5F4u) {
        ctx->pc = 0x11D5F8u;
        goto label_11d5f8;
    }
    ctx->pc = 0x11D5F0u;
    SET_GPR_U32(ctx, 31, 0x11D5F8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x11D5F0u, 0x11D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5F8u;
label_11d5f8:
    // 0x11d5f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11d5fc:
    // 0x11d5fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d600:
    // 0x11d600: 0x24a51d70  addiu       $a1, $a1, 0x1D70
    ctx->pc = 0x11d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7536));
label_11d604:
    // 0x11d604: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11d604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d608:
    // 0x11d608: 0xc0bc66e  jal         func_2F19B8
label_11d60c:
    if (ctx->pc == 0x11D60Cu) {
        ctx->pc = 0x11D610u;
        goto label_11d610;
    }
    ctx->pc = 0x11D608u;
    SET_GPR_U32(ctx, 31, 0x11D610u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x11D608u, 0x11D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D610u;
label_11d610:
    // 0x11d610: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_11d614:
    if (ctx->pc == 0x11D614u) {
        ctx->pc = 0x11D618u;
        goto label_11d618;
    }
    ctx->pc = 0x11D610u;
    {
        const bool branch_taken_0x11d610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d610) {
            ctx->pc = 0x11D678u;
            goto label_11d678;
        }
    }
    ctx->pc = 0x11D618u;
label_11d618:
    // 0x11d618: 0xc0b06cc  jal         func_2C1B30
label_11d61c:
    if (ctx->pc == 0x11D61Cu) {
        ctx->pc = 0x11D620u;
        goto label_11d620;
    }
    ctx->pc = 0x11D618u;
    SET_GPR_U32(ctx, 31, 0x11D620u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x11D618u, 0x11D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D620u;
label_11d620:
    // 0x11d620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d624:
    // 0x11d624: 0xc0b06c4  jal         func_2C1B10
label_11d628:
    if (ctx->pc == 0x11D628u) {
        ctx->pc = 0x11D62Cu;
        goto label_11d62c;
    }
    ctx->pc = 0x11D624u;
    SET_GPR_U32(ctx, 31, 0x11D62Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x11D624u, 0x11D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D62Cu;
label_11d62c:
    // 0x11d62c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x11d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_11d630:
    // 0x11d630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d634:
    // 0x11d634: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x11d634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11d638:
    // 0x11d638: 0xc0b4d8c  jal         func_2D3630
label_11d63c:
    if (ctx->pc == 0x11D63Cu) {
        ctx->pc = 0x11D640u;
        goto label_11d640;
    }
    ctx->pc = 0x11D638u;
    SET_GPR_U32(ctx, 31, 0x11D640u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x11D638u, 0x11D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D640u;
label_11d640:
    // 0x11d640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d644:
    // 0x11d644: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_11d648:
    if (ctx->pc == 0x11D648u) {
        ctx->pc = 0x11D64Cu;
        goto label_11d64c;
    }
    ctx->pc = 0x11D644u;
    {
        const bool branch_taken_0x11d644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d644) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D64Cu;
label_11d64c:
    // 0x11d64c: 0xc0b06cc  jal         func_2C1B30
label_11d650:
    if (ctx->pc == 0x11D650u) {
        ctx->pc = 0x11D654u;
        goto label_11d654;
    }
    ctx->pc = 0x11D64Cu;
    SET_GPR_U32(ctx, 31, 0x11D654u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x11D64Cu, 0x11D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D654u;
label_11d654:
    // 0x11d654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d658:
    // 0x11d658: 0xc0b06c4  jal         func_2C1B10
label_11d65c:
    if (ctx->pc == 0x11D65Cu) {
        ctx->pc = 0x11D660u;
        goto label_11d660;
    }
    ctx->pc = 0x11D658u;
    SET_GPR_U32(ctx, 31, 0x11D660u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x11D658u, 0x11D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D660u;
label_11d660:
    // 0x11d660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d664:
    // 0x11d664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d668:
    // 0x11d668: 0xc0b4a64  jal         func_2D2990
label_11d66c:
    if (ctx->pc == 0x11D66Cu) {
        ctx->pc = 0x11D670u;
        goto label_11d670;
    }
    ctx->pc = 0x11D668u;
    SET_GPR_U32(ctx, 31, 0x11D670u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x11D668u, 0x11D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D670u;
label_11d670:
    // 0x11d670: 0x10000019  b           . + 4 + (0x19 << 2)
label_11d674:
    if (ctx->pc == 0x11D674u) {
        ctx->pc = 0x11D678u;
        goto label_11d678;
    }
    ctx->pc = 0x11D670u;
    {
        const bool branch_taken_0x11d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d670) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D678u;
label_11d678:
    // 0x11d678: 0xc0b06cc  jal         func_2C1B30
label_11d67c:
    if (ctx->pc == 0x11D67Cu) {
        ctx->pc = 0x11D680u;
        goto label_11d680;
    }
    ctx->pc = 0x11D678u;
    SET_GPR_U32(ctx, 31, 0x11D680u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x11D678u, 0x11D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D680u;
label_11d680:
    // 0x11d680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d684:
    // 0x11d684: 0xc0b2638  jal         func_2C98E0
label_11d688:
    if (ctx->pc == 0x11D688u) {
        ctx->pc = 0x11D68Cu;
        goto label_11d68c;
    }
    ctx->pc = 0x11D684u;
    SET_GPR_U32(ctx, 31, 0x11D68Cu);
    ctx->pc = 0x2C98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C98E0u, 0x11D684u, 0x11D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D68Cu;
label_11d68c:
    // 0x11d68c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x11d68cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11d690:
    // 0x11d690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d694:
    // 0x11d694: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_11d698:
    if (ctx->pc == 0x11D698u) {
        ctx->pc = 0x11D69Cu;
        goto label_11d69c;
    }
    ctx->pc = 0x11D694u;
    {
        const bool branch_taken_0x11d694 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d694) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D69Cu;
label_11d69c:
    // 0x11d69c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d6a0:
    // 0x11d6a0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x11d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11d6a4:
    // 0x11d6a4: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x11d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
label_11d6a8:
    // 0x11d6a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_11d6ac:
    if (ctx->pc == 0x11D6ACu) {
        ctx->pc = 0x11D6B0u;
        goto label_11d6b0;
    }
    ctx->pc = 0x11D6A8u;
    {
        const bool branch_taken_0x11d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d6a8) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D6B0u;
label_11d6b0:
    // 0x11d6b0: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11d6b4:
    // 0x11d6b4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11d6b8:
    // 0x11d6b8: 0xc0553d4  jal         func_154F50
label_11d6bc:
    if (ctx->pc == 0x11D6BCu) {
        ctx->pc = 0x11D6C0u;
        goto label_11d6c0;
    }
    ctx->pc = 0x11D6B8u;
    SET_GPR_U32(ctx, 31, 0x11D6C0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11D6B8u, 0x11D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6C0u;
label_11d6c0:
    // 0x11d6c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d6c4:
    // 0x11d6c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d6c8:
    // 0x11d6c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11d6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11d6cc:
    // 0x11d6cc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11d6ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11d6d0:
    // 0x11d6d0: 0x320f809  jalr        $t9
label_11d6d4:
    if (ctx->pc == 0x11D6D4u) {
        ctx->pc = 0x11D6D8u;
        goto label_11d6d8;
    }
    ctx->pc = 0x11D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11D6D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D6D0u, 0x11D6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D6D8u;
label_11d6d8:
    // 0x11d6d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11d6dc:
    // 0x11d6dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11d6dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11d6e0:
    // 0x11d6e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11d6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11d6e4:
    // 0x11d6e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11d6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11d6e8:
    // 0x11d6e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11d6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11d6ec:
    // 0x11d6ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11d6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11d6f0:
    // 0x11d6f0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_11d6f4:
    // 0x11d6f4: 0x3e00008  jr          $ra
label_11d6f8:
    if (ctx->pc == 0x11D6F8u) {
        ctx->pc = 0x11D6FCu;
        goto label_11d6fc;
    }
    ctx->pc = 0x11D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D6FCu;
label_11d6fc:
    // 0x11d6fc: 0x0  nop
    ctx->pc = 0x11d6fcu;
    // NOP
label_11d700:
    // 0x11d700: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x11d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_11d704:
    // 0x11d704: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11d708:
    // 0x11d708: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x11d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_11d70c:
    // 0x11d70c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_11d710:
    // 0x11d710: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_11d714:
    // 0x11d714: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_11d718:
    // 0x11d718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11d71c:
    // 0x11d71c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11d71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11d720:
    // 0x11d720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11d724:
    // 0x11d724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11d724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11d728:
    // 0x11d728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11d72c:
    // 0x11d72c: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x11d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_11d730:
    // 0x11d730: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x11d730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11d734:
    // 0x11d734: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11d734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11d738:
    // 0x11d738: 0xc047800  jal         func_11E000
label_11d73c:
    if (ctx->pc == 0x11D73Cu) {
        ctx->pc = 0x11D740u;
        goto label_11d740;
    }
    ctx->pc = 0x11D738u;
    SET_GPR_U32(ctx, 31, 0x11D740u);
    ctx->pc = 0x11E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E000u, 0x11D738u, 0x11D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D740u;
label_11d740:
    // 0x11d740: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x11d740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11d744:
    // 0x11d744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d748:
    // 0x11d748: 0x148301f8  bne         $a0, $v1, . + 4 + (0x1F8 << 2)
label_11d74c:
    if (ctx->pc == 0x11D74Cu) {
        ctx->pc = 0x11D750u;
        goto label_11d750;
    }
    ctx->pc = 0x11D748u;
    {
        const bool branch_taken_0x11d748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d748) {
            ctx->pc = 0x11DF2Cu;
            goto label_11df2c;
        }
    }
    ctx->pc = 0x11D750u;
label_11d750:
    // 0x11d750: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11d750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11d754:
    // 0x11d754: 0xc050b24  jal         func_142C90
label_11d758:
    if (ctx->pc == 0x11D758u) {
        ctx->pc = 0x11D75Cu;
        goto label_11d75c;
    }
    ctx->pc = 0x11D754u;
    SET_GPR_U32(ctx, 31, 0x11D75Cu);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x11D754u, 0x11D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D75Cu;
label_11d75c:
    // 0x11d75c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d760:
    // 0x11d760: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11d764:
    // 0x11d764: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11d764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11d768:
    // 0x11d768: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x11d768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_11d76c:
    // 0x11d76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d770:
    // 0x11d770: 0xc040ab0  jal         func_102AC0
label_11d774:
    if (ctx->pc == 0x11D774u) {
        ctx->pc = 0x11D778u;
        goto label_11d778;
    }
    ctx->pc = 0x11D770u;
    SET_GPR_U32(ctx, 31, 0x11D778u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x11D770u, 0x11D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D778u;
label_11d778:
    // 0x11d778: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x11d778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_11d77c:
    // 0x11d77c: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x11d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_11d780:
    // 0x11d780: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11d784:
    // 0x11d784: 0x10830157  beq         $a0, $v1, . + 4 + (0x157 << 2)
label_11d788:
    if (ctx->pc == 0x11D788u) {
        ctx->pc = 0x11D78Cu;
        goto label_11d78c;
    }
    ctx->pc = 0x11D784u;
    {
        const bool branch_taken_0x11d784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11d784) {
            ctx->pc = 0x11DCE4u;
            goto label_11dce4;
        }
    }
    ctx->pc = 0x11D78Cu;
label_11d78c:
    // 0x11d78c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d790:
    // 0x11d790: 0x10830141  beq         $a0, $v1, . + 4 + (0x141 << 2)
label_11d794:
    if (ctx->pc == 0x11D794u) {
        ctx->pc = 0x11D798u;
        goto label_11d798;
    }
    ctx->pc = 0x11D790u;
    {
        const bool branch_taken_0x11d790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11d790) {
            ctx->pc = 0x11DC98u;
            goto label_11dc98;
        }
    }
    ctx->pc = 0x11D798u;
label_11d798:
    // 0x11d798: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11d798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11d79c:
    // 0x11d79c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_11d7a0:
    if (ctx->pc == 0x11D7A0u) {
        ctx->pc = 0x11D7A4u;
        goto label_11d7a4;
    }
    ctx->pc = 0x11D79Cu;
    {
        const bool branch_taken_0x11d79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11d79c) {
            ctx->pc = 0x11D7ACu;
            goto label_11d7ac;
        }
    }
    ctx->pc = 0x11D7A4u;
label_11d7a4:
    // 0x11d7a4: 0x100001e1  b           . + 4 + (0x1E1 << 2)
label_11d7a8:
    if (ctx->pc == 0x11D7A8u) {
        ctx->pc = 0x11D7ACu;
        goto label_11d7ac;
    }
    ctx->pc = 0x11D7A4u;
    {
        const bool branch_taken_0x11d7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d7a4) {
            ctx->pc = 0x11DF2Cu;
            goto label_11df2c;
        }
    }
    ctx->pc = 0x11D7ACu;
label_11d7ac:
    // 0x11d7ac: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11d7b0:
    // 0x11d7b0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_11d7b4:
    // 0x11d7b4: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_11d7b8:
    if (ctx->pc == 0x11D7B8u) {
        ctx->pc = 0x11D7BCu;
        goto label_11d7bc;
    }
    ctx->pc = 0x11D7B4u;
    {
        const bool branch_taken_0x11d7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d7b4) {
            ctx->pc = 0x11D9E8u;
            goto label_11d9e8;
        }
    }
    ctx->pc = 0x11D7BCu;
label_11d7bc:
    // 0x11d7bc: 0xc05548c  jal         func_155230
label_11d7c0:
    if (ctx->pc == 0x11D7C0u) {
        ctx->pc = 0x11D7C4u;
        goto label_11d7c4;
    }
    ctx->pc = 0x11D7BCu;
    SET_GPR_U32(ctx, 31, 0x11D7C4u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x11D7BCu, 0x11D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7C4u;
label_11d7c4:
    // 0x11d7c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d7c8:
    // 0x11d7c8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x11d7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_11d7cc:
    // 0x11d7cc: 0xc0553d4  jal         func_154F50
label_11d7d0:
    if (ctx->pc == 0x11D7D0u) {
        ctx->pc = 0x11D7D4u;
        goto label_11d7d4;
    }
    ctx->pc = 0x11D7CCu;
    SET_GPR_U32(ctx, 31, 0x11D7D4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11D7CCu, 0x11D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7D4u;
label_11d7d4:
    // 0x11d7d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d7d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d7d8:
    // 0x11d7d8: 0x101401d4  beq         $zero, $s4, . + 4 + (0x1D4 << 2)
label_11d7dc:
    if (ctx->pc == 0x11D7DCu) {
        ctx->pc = 0x11D7E0u;
        goto label_11d7e0;
    }
    ctx->pc = 0x11D7D8u;
    {
        const bool branch_taken_0x11d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x11d7d8) {
            ctx->pc = 0x11DF2Cu;
            goto label_11df2c;
        }
    }
    ctx->pc = 0x11D7E0u;
label_11d7e0:
    // 0x11d7e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11d7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11d7e4:
    // 0x11d7e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11d7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11d7e8:
    // 0x11d7e8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x11d7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_11d7ec:
    // 0x11d7ec: 0x320f809  jalr        $t9
label_11d7f0:
    if (ctx->pc == 0x11D7F0u) {
        ctx->pc = 0x11D7F4u;
        goto label_11d7f4;
    }
    ctx->pc = 0x11D7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11D7F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D7ECu, 0x11D7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D7F4u;
label_11d7f4:
    // 0x11d7f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11d7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11d7f8:
    // 0x11d7f8: 0x146001cc  bnez        $v1, . + 4 + (0x1CC << 2)
label_11d7fc:
    if (ctx->pc == 0x11D7FCu) {
        ctx->pc = 0x11D800u;
        goto label_11d800;
    }
    ctx->pc = 0x11D7F8u;
    {
        const bool branch_taken_0x11d7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d7f8) {
            ctx->pc = 0x11DF2Cu;
            goto label_11df2c;
        }
    }
    ctx->pc = 0x11D800u;
label_11d800:
    // 0x11d800: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x11d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_11d804:
    // 0x11d804: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d808:
    // 0x11d808: 0x24a51d90  addiu       $a1, $a1, 0x1D90
    ctx->pc = 0x11d808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7568));
label_11d80c:
    // 0x11d80c: 0xc08e57c  jal         func_2395F0
label_11d810:
    if (ctx->pc == 0x11D810u) {
        ctx->pc = 0x11D814u;
        goto label_11d814;
    }
    ctx->pc = 0x11D80Cu;
    SET_GPR_U32(ctx, 31, 0x11D814u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x11D80Cu, 0x11D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D814u;
label_11d814:
    // 0x11d814: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11d814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_11d818:
    // 0x11d818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d81c:
    // 0x11d81c: 0xc0406d0  jal         func_101B40
label_11d820:
    if (ctx->pc == 0x11D820u) {
        ctx->pc = 0x11D824u;
        goto label_11d824;
    }
    ctx->pc = 0x11D81Cu;
    SET_GPR_U32(ctx, 31, 0x11D824u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x11D81Cu, 0x11D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D824u;
label_11d824:
    // 0x11d824: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x11d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_11d828:
    // 0x11d828: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d82c:
    // 0x11d82c: 0x24a51da0  addiu       $a1, $a1, 0x1DA0
    ctx->pc = 0x11d82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7584));
label_11d830:
    // 0x11d830: 0xc08e57c  jal         func_2395F0
label_11d834:
    if (ctx->pc == 0x11D834u) {
        ctx->pc = 0x11D838u;
        goto label_11d838;
    }
    ctx->pc = 0x11D830u;
    SET_GPR_U32(ctx, 31, 0x11D838u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x11D830u, 0x11D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D838u;
label_11d838:
    // 0x11d838: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x11d838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_11d83c:
    // 0x11d83c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d840:
    // 0x11d840: 0xc0406d0  jal         func_101B40
label_11d844:
    if (ctx->pc == 0x11D844u) {
        ctx->pc = 0x11D848u;
        goto label_11d848;
    }
    ctx->pc = 0x11D840u;
    SET_GPR_U32(ctx, 31, 0x11D848u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x11D840u, 0x11D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D848u;
label_11d848:
    // 0x11d848: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_11d84c:
    // 0x11d84c: 0x34420302  ori         $v0, $v0, 0x302
    ctx->pc = 0x11d84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)770);
label_11d850:
    // 0x11d850: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x11d850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_11d854:
    // 0x11d854: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11d858:
    // 0x11d858: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x11d858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_11d85c:
    // 0x11d85c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_11d860:
    if (ctx->pc == 0x11D860u) {
        ctx->pc = 0x11D864u;
        goto label_11d864;
    }
    ctx->pc = 0x11D85Cu;
    {
        const bool branch_taken_0x11d85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d85c) {
            ctx->pc = 0x11D970u;
            goto label_11d970;
        }
    }
    ctx->pc = 0x11D864u;
label_11d864:
    // 0x11d864: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11d864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11d868:
    // 0x11d868: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_11d86c:
    if (ctx->pc == 0x11D86Cu) {
        ctx->pc = 0x11D870u;
        goto label_11d870;
    }
    ctx->pc = 0x11D868u;
    {
        const bool branch_taken_0x11d868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11d868) {
            ctx->pc = 0x11D970u;
            goto label_11d970;
        }
    }
    ctx->pc = 0x11D870u;
label_11d870:
    // 0x11d870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d874:
    // 0x11d874: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_11d878:
    if (ctx->pc == 0x11D878u) {
        ctx->pc = 0x11D87Cu;
        goto label_11d87c;
    }
    ctx->pc = 0x11D874u;
    {
        const bool branch_taken_0x11d874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11d874) {
            ctx->pc = 0x11D884u;
            goto label_11d884;
        }
    }
    ctx->pc = 0x11D87Cu;
label_11d87c:
    // 0x11d87c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_11d880:
    if (ctx->pc == 0x11D880u) {
        ctx->pc = 0x11D884u;
        goto label_11d884;
    }
    ctx->pc = 0x11D87Cu;
    {
        const bool branch_taken_0x11d87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d87c) {
            ctx->pc = 0x11D970u;
            goto label_11d970;
        }
    }
    ctx->pc = 0x11D884u;
label_11d884:
    // 0x11d884: 0xc0b06cc  jal         func_2C1B30
label_11d888:
    if (ctx->pc == 0x11D888u) {
        ctx->pc = 0x11D88Cu;
        goto label_11d88c;
    }
    ctx->pc = 0x11D884u;
    SET_GPR_U32(ctx, 31, 0x11D88Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x11D884u, 0x11D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D88Cu;
label_11d88c:
    // 0x11d88c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d890:
    // 0x11d890: 0xc0b06c4  jal         func_2C1B10
label_11d894:
    if (ctx->pc == 0x11D894u) {
        ctx->pc = 0x11D898u;
        goto label_11d898;
    }
    ctx->pc = 0x11D890u;
    SET_GPR_U32(ctx, 31, 0x11D898u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x11D890u, 0x11D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D898u;
label_11d898:
    // 0x11d898: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x11d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_11d89c:
    // 0x11d89c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d8a0:
    // 0x11d8a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x11d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11d8a4:
    // 0x11d8a4: 0xc0b4d8c  jal         func_2D3630
label_11d8a8:
    if (ctx->pc == 0x11D8A8u) {
        ctx->pc = 0x11D8ACu;
        goto label_11d8ac;
    }
    ctx->pc = 0x11D8A4u;
    SET_GPR_U32(ctx, 31, 0x11D8ACu);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x11D8A4u, 0x11D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8ACu;
label_11d8ac:
    // 0x11d8ac: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x11d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_11d8b0:
    // 0x11d8b0: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x11d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_11d8b4:
    // 0x11d8b4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11d8b8:
    // 0x11d8b8: 0xc085538  jal         func_2154E0
label_11d8bc:
    if (ctx->pc == 0x11D8BCu) {
        ctx->pc = 0x11D8C0u;
        goto label_11d8c0;
    }
    ctx->pc = 0x11D8B8u;
    SET_GPR_U32(ctx, 31, 0x11D8C0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11D8B8u, 0x11D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8C0u;
label_11d8c0:
    // 0x11d8c0: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x11d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_11d8c4:
    // 0x11d8c4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x11d8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_11d8c8:
    // 0x11d8c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d8cc:
    // 0x11d8cc: 0x24a51db0  addiu       $a1, $a1, 0x1DB0
    ctx->pc = 0x11d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7600));
label_11d8d0:
    // 0x11d8d0: 0xc08e57c  jal         func_2395F0
label_11d8d4:
    if (ctx->pc == 0x11D8D4u) {
        ctx->pc = 0x11D8D8u;
        goto label_11d8d8;
    }
    ctx->pc = 0x11D8D0u;
    SET_GPR_U32(ctx, 31, 0x11D8D8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x11D8D0u, 0x11D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8D8u;
label_11d8d8:
    // 0x11d8d8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x11d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_11d8dc:
    // 0x11d8dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d8e0:
    // 0x11d8e0: 0xc0477e8  jal         func_11DFA0
label_11d8e4:
    if (ctx->pc == 0x11D8E4u) {
        ctx->pc = 0x11D8E8u;
        goto label_11d8e8;
    }
    ctx->pc = 0x11D8E0u;
    SET_GPR_U32(ctx, 31, 0x11D8E8u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x11D8E0u, 0x11D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8E8u;
label_11d8e8:
    // 0x11d8e8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x11d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_11d8ec:
    // 0x11d8ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d8f0:
    // 0x11d8f0: 0x24a51dc8  addiu       $a1, $a1, 0x1DC8
    ctx->pc = 0x11d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7624));
label_11d8f4:
    // 0x11d8f4: 0xc040304  jal         func_100C10
label_11d8f8:
    if (ctx->pc == 0x11D8F8u) {
        ctx->pc = 0x11D8FCu;
        goto label_11d8fc;
    }
    ctx->pc = 0x11D8F4u;
    SET_GPR_U32(ctx, 31, 0x11D8FCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x11D8F4u, 0x11D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8FCu;
label_11d8fc:
    // 0x11d8fc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x11d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_11d900:
    // 0x11d900: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x11d900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_11d904:
    // 0x11d904: 0xc119568  jal         func_4655A0
label_11d908:
    if (ctx->pc == 0x11D908u) {
        ctx->pc = 0x11D90Cu;
        goto label_11d90c;
    }
    ctx->pc = 0x11D904u;
    SET_GPR_U32(ctx, 31, 0x11D90Cu);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x11D904u, 0x11D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D90Cu;
label_11d90c:
    // 0x11d90c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x11d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_11d910:
    // 0x11d910: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11d910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11d914:
    // 0x11d914: 0xc0402d4  jal         func_100B50
label_11d918:
    if (ctx->pc == 0x11D918u) {
        ctx->pc = 0x11D91Cu;
        goto label_11d91c;
    }
    ctx->pc = 0x11D914u;
    SET_GPR_U32(ctx, 31, 0x11D91Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x11D914u, 0x11D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D91Cu;
label_11d91c:
    // 0x11d91c: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x11d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_11d920:
    // 0x11d920: 0xc096958  jal         func_25A560
label_11d924:
    if (ctx->pc == 0x11D924u) {
        ctx->pc = 0x11D928u;
        goto label_11d928;
    }
    ctx->pc = 0x11D920u;
    SET_GPR_U32(ctx, 31, 0x11D928u);
    ctx->pc = 0x25A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A560u, 0x11D920u, 0x11D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D928u;
label_11d928:
    // 0x11d928: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x11d928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_11d92c:
    // 0x11d92c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d930:
    // 0x11d930: 0xc0406d0  jal         func_101B40
label_11d934:
    if (ctx->pc == 0x11D934u) {
        ctx->pc = 0x11D938u;
        goto label_11d938;
    }
    ctx->pc = 0x11D930u;
    SET_GPR_U32(ctx, 31, 0x11D938u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x11D930u, 0x11D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D938u;
label_11d938:
    // 0x11d938: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x11d938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_11d93c:
    // 0x11d93c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x11d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_11d940:
    // 0x11d940: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x11d940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_11d944:
    // 0x11d944: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x11d944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_11d948:
    // 0x11d948: 0xc08e608  jal         func_239820
label_11d94c:
    if (ctx->pc == 0x11D94Cu) {
        ctx->pc = 0x11D950u;
        goto label_11d950;
    }
    ctx->pc = 0x11D948u;
    SET_GPR_U32(ctx, 31, 0x11D950u);
    ctx->pc = 0x239820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239820u, 0x11D948u, 0x11D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D950u;
label_11d950:
    // 0x11d950: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x11d950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_11d954:
    // 0x11d954: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11d954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11d958:
    // 0x11d958: 0xc0406a0  jal         func_101A80
label_11d95c:
    if (ctx->pc == 0x11D95Cu) {
        ctx->pc = 0x11D960u;
        goto label_11d960;
    }
    ctx->pc = 0x11D958u;
    SET_GPR_U32(ctx, 31, 0x11D960u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x11D958u, 0x11D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D960u;
label_11d960:
    // 0x11d960: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x11d960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_11d964:
    // 0x11d964: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11d964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11d968:
    // 0x11d968: 0xc0406a0  jal         func_101A80
label_11d96c:
    if (ctx->pc == 0x11D96Cu) {
        ctx->pc = 0x11D970u;
        goto label_11d970;
    }
    ctx->pc = 0x11D968u;
    SET_GPR_U32(ctx, 31, 0x11D970u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x11D968u, 0x11D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D970u;
label_11d970:
    // 0x11d970: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11d970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11d974:
    // 0x11d974: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x11d974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_11d978:
    // 0x11d978: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x11d978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_11d97c:
    // 0x11d97c: 0x8fa701c4  lw          $a3, 0x1C4($sp)
    ctx->pc = 0x11d97cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_11d980:
    // 0x11d980: 0x3c080012  lui         $t0, 0x12
    ctx->pc = 0x11d980u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18 << 16));
label_11d984:
    // 0x11d984: 0x2508e020  addiu       $t0, $t0, -0x1FE0
    ctx->pc = 0x11d984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959136));
label_11d988:
    // 0x11d988: 0x8fa901d0  lw          $t1, 0x1D0($sp)
    ctx->pc = 0x11d988u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11d98c:
    // 0x11d98c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11d990:
    // 0x11d990: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x11d990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_11d994:
    // 0x11d994: 0x320f809  jalr        $t9
label_11d998:
    if (ctx->pc == 0x11D998u) {
        ctx->pc = 0x11D99Cu;
        goto label_11d99c;
    }
    ctx->pc = 0x11D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11D99Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D994u, 0x11D99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D99Cu;
label_11d99c:
    // 0x11d99c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11d99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11d9a0:
    // 0x11d9a0: 0xc050c5c  jal         func_143170
label_11d9a4:
    if (ctx->pc == 0x11D9A4u) {
        ctx->pc = 0x11D9A8u;
        goto label_11d9a8;
    }
    ctx->pc = 0x11D9A0u;
    SET_GPR_U32(ctx, 31, 0x11D9A8u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x11D9A0u, 0x11D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9A8u;
label_11d9a8:
    // 0x11d9a8: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x11d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_11d9ac:
    // 0x11d9ac: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x11d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_11d9b0:
    // 0x11d9b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11d9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11d9b4:
    // 0x11d9b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d9b8:
    // 0x11d9b8: 0xc04fbf8  jal         func_13EFE0
label_11d9bc:
    if (ctx->pc == 0x11D9BCu) {
        ctx->pc = 0x11D9C0u;
        goto label_11d9c0;
    }
    ctx->pc = 0x11D9B8u;
    SET_GPR_U32(ctx, 31, 0x11D9C0u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x11D9B8u, 0x11D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9C0u;
label_11d9c0:
    // 0x11d9c0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x11d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_11d9c4:
    // 0x11d9c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11d9c8:
    // 0x11d9c8: 0xc0406a0  jal         func_101A80
label_11d9cc:
    if (ctx->pc == 0x11D9CCu) {
        ctx->pc = 0x11D9D0u;
        goto label_11d9d0;
    }
    ctx->pc = 0x11D9C8u;
    SET_GPR_U32(ctx, 31, 0x11D9D0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x11D9C8u, 0x11D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9D0u;
label_11d9d0:
    // 0x11d9d0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_11d9d4:
    // 0x11d9d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11d9d8:
    // 0x11d9d8: 0xc0406a0  jal         func_101A80
label_11d9dc:
    if (ctx->pc == 0x11D9DCu) {
        ctx->pc = 0x11D9E0u;
        goto label_11d9e0;
    }
    ctx->pc = 0x11D9D8u;
    SET_GPR_U32(ctx, 31, 0x11D9E0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x11D9D8u, 0x11D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9E0u;
label_11d9e0:
    // 0x11d9e0: 0x10000152  b           . + 4 + (0x152 << 2)
label_11d9e4:
    if (ctx->pc == 0x11D9E4u) {
        ctx->pc = 0x11D9E8u;
        goto label_11d9e8;
    }
    ctx->pc = 0x11D9E0u;
    {
        const bool branch_taken_0x11d9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d9e0) {
            ctx->pc = 0x11DF2Cu;
            goto label_11df2c;
        }
    }
    ctx->pc = 0x11D9E8u;
label_11d9e8:
    // 0x11d9e8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11d9ec:
    // 0x11d9ec: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11d9f0:
    // 0x11d9f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11d9f4:
    // 0x11d9f4: 0x24a51d38  addiu       $a1, $a1, 0x1D38
    ctx->pc = 0x11d9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7480));
label_11d9f8:
    // 0x11d9f8: 0x278689c8  addiu       $a2, $gp, -0x7638
    ctx->pc = 0x11d9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937032));
label_11d9fc:
    // 0x11d9fc: 0xc04206c  jal         func_1081B0
label_11da00:
    if (ctx->pc == 0x11DA00u) {
        ctx->pc = 0x11DA04u;
        goto label_11da04;
    }
    ctx->pc = 0x11D9FCu;
    SET_GPR_U32(ctx, 31, 0x11DA04u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x11D9FCu, 0x11DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA04u;
label_11da04:
    // 0x11da04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x11da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11da08:
    // 0x11da08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11da08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11da0c:
    // 0x11da0c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x11da0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_11da10:
    // 0x11da10: 0xc0bc77e  jal         func_2F1DF8
label_11da14:
    if (ctx->pc == 0x11DA14u) {
        ctx->pc = 0x11DA18u;
        goto label_11da18;
    }
    ctx->pc = 0x11DA10u;
    SET_GPR_U32(ctx, 31, 0x11DA18u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x11DA10u, 0x11DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA18u;
label_11da18:
    // 0x11da18: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x11da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11da1c:
    // 0x11da1c: 0xc0bc65a  jal         func_2F1968
label_11da20:
    if (ctx->pc == 0x11DA20u) {
        ctx->pc = 0x11DA24u;
        goto label_11da24;
    }
    ctx->pc = 0x11DA1Cu;
    SET_GPR_U32(ctx, 31, 0x11DA24u);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x11DA1Cu, 0x11DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA24u;
label_11da24:
    // 0x11da24: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x11da24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_11da28:
    // 0x11da28: 0x24841d50  addiu       $a0, $a0, 0x1D50
    ctx->pc = 0x11da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7504));
label_11da2c:
    // 0x11da2c: 0xc0bc60c  jal         func_2F1830
label_11da30:
    if (ctx->pc == 0x11DA30u) {
        ctx->pc = 0x11DA34u;
        goto label_11da34;
    }
    ctx->pc = 0x11DA2Cu;
    SET_GPR_U32(ctx, 31, 0x11DA34u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x11DA2Cu, 0x11DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA34u;
label_11da34:
    // 0x11da34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x11da34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11da38:
    // 0x11da38: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11da38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11da3c:
    // 0x11da3c: 0x24a51d50  addiu       $a1, $a1, 0x1D50
    ctx->pc = 0x11da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7504));
label_11da40:
    // 0x11da40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11da40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11da44:
    // 0x11da44: 0xc0bc66e  jal         func_2F19B8
label_11da48:
    if (ctx->pc == 0x11DA48u) {
        ctx->pc = 0x11DA4Cu;
        goto label_11da4c;
    }
    ctx->pc = 0x11DA44u;
    SET_GPR_U32(ctx, 31, 0x11DA4Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x11DA44u, 0x11DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA4Cu;
label_11da4c:
    // 0x11da4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_11da50:
    if (ctx->pc == 0x11DA50u) {
        ctx->pc = 0x11DA54u;
        goto label_11da54;
    }
    ctx->pc = 0x11DA4Cu;
    {
        const bool branch_taken_0x11da4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11da4c) {
            ctx->pc = 0x11DA68u;
            goto label_11da68;
        }
    }
    ctx->pc = 0x11DA54u;
label_11da54:
    // 0x11da54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11da54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11da58:
    // 0x11da58: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11da5c:
    // 0x11da5c: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x11da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
label_11da60:
    // 0x11da60: 0x10000021  b           . + 4 + (0x21 << 2)
label_11da64:
    if (ctx->pc == 0x11DA64u) {
        ctx->pc = 0x11DA68u;
        goto label_11da68;
    }
    ctx->pc = 0x11DA60u;
    {
        const bool branch_taken_0x11da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da60) {
            ctx->pc = 0x11DAE8u;
            goto label_11dae8;
        }
    }
    ctx->pc = 0x11DA68u;
label_11da68:
    // 0x11da68: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x11da68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_11da6c:
    // 0x11da6c: 0x24841d70  addiu       $a0, $a0, 0x1D70
    ctx->pc = 0x11da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7536));
label_11da70:
    // 0x11da70: 0xc0bc60c  jal         func_2F1830
label_11da74:
    if (ctx->pc == 0x11DA74u) {
        ctx->pc = 0x11DA78u;
        goto label_11da78;
    }
    ctx->pc = 0x11DA70u;
    SET_GPR_U32(ctx, 31, 0x11DA78u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x11DA70u, 0x11DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA78u;
label_11da78:
    // 0x11da78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x11da78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11da7c:
    // 0x11da7c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11da80:
    // 0x11da80: 0x24a51d70  addiu       $a1, $a1, 0x1D70
    ctx->pc = 0x11da80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7536));
label_11da84:
    // 0x11da84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11da84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11da88:
    // 0x11da88: 0xc0bc66e  jal         func_2F19B8
label_11da8c:
    if (ctx->pc == 0x11DA8Cu) {
        ctx->pc = 0x11DA90u;
        goto label_11da90;
    }
    ctx->pc = 0x11DA88u;
    SET_GPR_U32(ctx, 31, 0x11DA90u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x11DA88u, 0x11DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA90u;
label_11da90:
    // 0x11da90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_11da94:
    if (ctx->pc == 0x11DA94u) {
        ctx->pc = 0x11DA98u;
        goto label_11da98;
    }
    ctx->pc = 0x11DA90u;
    {
        const bool branch_taken_0x11da90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11da90) {
            ctx->pc = 0x11DAACu;
            goto label_11daac;
        }
    }
    ctx->pc = 0x11DA98u;
label_11da98:
    // 0x11da98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11da98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11da9c:
    // 0x11da9c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11daa0:
    // 0x11daa0: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x11daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
label_11daa4:
    // 0x11daa4: 0x10000010  b           . + 4 + (0x10 << 2)
label_11daa8:
    if (ctx->pc == 0x11DAA8u) {
        ctx->pc = 0x11DAACu;
        goto label_11daac;
    }
    ctx->pc = 0x11DAA4u;
    {
        const bool branch_taken_0x11daa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11daa4) {
            ctx->pc = 0x11DAE8u;
            goto label_11dae8;
        }
    }
    ctx->pc = 0x11DAACu;
label_11daac:
    // 0x11daac: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x11daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_11dab0:
    // 0x11dab0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x11dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11dab4:
    // 0x11dab4: 0xc040304  jal         func_100C10
label_11dab8:
    if (ctx->pc == 0x11DAB8u) {
        ctx->pc = 0x11DABCu;
        goto label_11dabc;
    }
    ctx->pc = 0x11DAB4u;
    SET_GPR_U32(ctx, 31, 0x11DABCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x11DAB4u, 0x11DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DABCu;
label_11dabc:
    // 0x11dabc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11dac0:
    // 0x11dac0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x11dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_11dac4:
    // 0x11dac4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x11dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_11dac8:
    // 0x11dac8: 0xc1190f4  jal         func_4643D0
label_11dacc:
    if (ctx->pc == 0x11DACCu) {
        ctx->pc = 0x11DAD0u;
        goto label_11dad0;
    }
    ctx->pc = 0x11DAC8u;
    SET_GPR_U32(ctx, 31, 0x11DAD0u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x11DAC8u, 0x11DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAD0u;
label_11dad0:
    // 0x11dad0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x11dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_11dad4:
    // 0x11dad4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11dad8:
    // 0x11dad8: 0xc0402d4  jal         func_100B50
label_11dadc:
    if (ctx->pc == 0x11DADCu) {
        ctx->pc = 0x11DAE0u;
        goto label_11dae0;
    }
    ctx->pc = 0x11DAD8u;
    SET_GPR_U32(ctx, 31, 0x11DAE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x11DAD8u, 0x11DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAE0u;
label_11dae0:
    // 0x11dae0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11dae4:
    // 0x11dae4: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x11dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_11dae8:
    // 0x11dae8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x11dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11daec:
    // 0x11daec: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x11daecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_11daf0:
    // 0x11daf0: 0xc0bc810  jal         func_2F2040
label_11daf4:
    if (ctx->pc == 0x11DAF4u) {
        ctx->pc = 0x11DAF8u;
        goto label_11daf8;
    }
    ctx->pc = 0x11DAF0u;
    SET_GPR_U32(ctx, 31, 0x11DAF8u);
    ctx->pc = 0x2F2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2040u, 0x11DAF0u, 0x11DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAF8u;
label_11daf8:
    // 0x11daf8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x11daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_11dafc:
    // 0x11dafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11dafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11db00:
    // 0x11db00: 0xc040304  jal         func_100C10
label_11db04:
    if (ctx->pc == 0x11DB04u) {
        ctx->pc = 0x11DB08u;
        goto label_11db08;
    }
    ctx->pc = 0x11DB00u;
    SET_GPR_U32(ctx, 31, 0x11DB08u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x11DB00u, 0x11DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB08u;
label_11db08:
    // 0x11db08: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x11db08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_11db0c:
    // 0x11db0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11db0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11db10:
    // 0x11db10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11db10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11db14:
    // 0x11db14: 0xc047848  jal         func_11E120
label_11db18:
    if (ctx->pc == 0x11DB18u) {
        ctx->pc = 0x11DB1Cu;
        goto label_11db1c;
    }
    ctx->pc = 0x11DB14u;
    SET_GPR_U32(ctx, 31, 0x11DB1Cu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x11DB14u, 0x11DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB1Cu;
label_11db1c:
    // 0x11db1c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x11db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_11db20:
    // 0x11db20: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x11db20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_11db24:
    // 0x11db24: 0xc047874  jal         func_11E1D0
label_11db28:
    if (ctx->pc == 0x11DB28u) {
        ctx->pc = 0x11DB2Cu;
        goto label_11db2c;
    }
    ctx->pc = 0x11DB24u;
    SET_GPR_U32(ctx, 31, 0x11DB2Cu);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x11DB24u, 0x11DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB2Cu;
label_11db2c:
    // 0x11db2c: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x11db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_11db30:
    // 0x11db30: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x11db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_11db34:
    // 0x11db34: 0x8fa501b4  lw          $a1, 0x1B4($sp)
    ctx->pc = 0x11db34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_11db38:
    // 0x11db38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x11db38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11db3c:
    // 0x11db3c: 0xc047848  jal         func_11E120
label_11db40:
    if (ctx->pc == 0x11DB40u) {
        ctx->pc = 0x11DB44u;
        goto label_11db44;
    }
    ctx->pc = 0x11DB3Cu;
    SET_GPR_U32(ctx, 31, 0x11DB44u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x11DB3Cu, 0x11DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB44u;
label_11db44:
    // 0x11db44: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x11db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_11db48:
    // 0x11db48: 0xc041874  jal         func_1061D0
label_11db4c:
    if (ctx->pc == 0x11DB4Cu) {
        ctx->pc = 0x11DB50u;
        goto label_11db50;
    }
    ctx->pc = 0x11DB48u;
    SET_GPR_U32(ctx, 31, 0x11DB50u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x11DB48u, 0x11DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB50u;
label_11db50:
    // 0x11db50: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11db54:
    // 0x11db54: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x11db54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11db58:
    // 0x11db58: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x11db58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
label_11db5c:
    // 0x11db5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11db5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11db60:
    // 0x11db60: 0xc0433dc  jal         func_10CF70
label_11db64:
    if (ctx->pc == 0x11DB64u) {
        ctx->pc = 0x11DB68u;
        goto label_11db68;
    }
    ctx->pc = 0x11DB60u;
    SET_GPR_U32(ctx, 31, 0x11DB68u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x11DB60u, 0x11DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB68u;
label_11db68:
    // 0x11db68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11db6c:
    // 0x11db6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11db6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11db70:
    // 0x11db70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x11db70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_11db74:
    // 0x11db74: 0x320f809  jalr        $t9
label_11db78:
    if (ctx->pc == 0x11DB78u) {
        ctx->pc = 0x11DB7Cu;
        goto label_11db7c;
    }
    ctx->pc = 0x11DB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11DB7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DB74u, 0x11DB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DB7Cu;
label_11db7c:
    // 0x11db7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11db7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11db80:
    // 0x11db80: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x11db80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_11db84:
    // 0x11db84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11db84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_11db88:
    // 0x11db88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11db8c:
    if (ctx->pc == 0x11DB8Cu) {
        ctx->pc = 0x11DB90u;
        goto label_11db90;
    }
    ctx->pc = 0x11DB88u;
    {
        const bool branch_taken_0x11db88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11db88) {
            ctx->pc = 0x11DBA4u;
            goto label_11dba4;
        }
    }
    ctx->pc = 0x11DB90u;
label_11db90:
    // 0x11db90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11db90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11db94:
    // 0x11db94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11db94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11db98:
    // 0x11db98: 0xc041c7c  jal         func_1071F0
label_11db9c:
    if (ctx->pc == 0x11DB9Cu) {
        ctx->pc = 0x11DBA0u;
        goto label_11dba0;
    }
    ctx->pc = 0x11DB98u;
    SET_GPR_U32(ctx, 31, 0x11DBA0u);
    ctx->pc = 0x1071F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1071F0u, 0x11DB98u, 0x11DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBA0u;
label_11dba0:
    // 0x11dba0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11dba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dba4:
    // 0x11dba4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x11dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11dba8:
    // 0x11dba8: 0x278589d0  addiu       $a1, $gp, -0x7630
    ctx->pc = 0x11dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937040));
label_11dbac:
    // 0x11dbac: 0xc0bc824  jal         func_2F2090
label_11dbb0:
    if (ctx->pc == 0x11DBB0u) {
        ctx->pc = 0x11DBB4u;
        goto label_11dbb4;
    }
    ctx->pc = 0x11DBACu;
    SET_GPR_U32(ctx, 31, 0x11DBB4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x11DBACu, 0x11DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBB4u;
label_11dbb4:
    // 0x11dbb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11dbb8:
    if (ctx->pc == 0x11DBB8u) {
        ctx->pc = 0x11DBBCu;
        goto label_11dbbc;
    }
    ctx->pc = 0x11DBB4u;
    {
        const bool branch_taken_0x11dbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dbb4) {
            ctx->pc = 0x11DBCCu;
            goto label_11dbcc;
        }
    }
    ctx->pc = 0x11DBBCu;
label_11dbbc:
    // 0x11dbbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11dbc0:
    // 0x11dbc0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x11dbc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11dbc4:
    // 0x11dbc4: 0x1000000f  b           . + 4 + (0xF << 2)
label_11dbc8:
    if (ctx->pc == 0x11DBC8u) {
        ctx->pc = 0x11DBCCu;
        goto label_11dbcc;
    }
    ctx->pc = 0x11DBC4u;
    {
        const bool branch_taken_0x11dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dbc4) {
            ctx->pc = 0x11DC04u;
            goto label_11dc04;
        }
    }
    ctx->pc = 0x11DBCCu;
label_11dbcc:
    // 0x11dbcc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x11dbccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dbd0:
    // 0x11dbd0: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11dbd4:
    // 0x11dbd4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x11dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_11dbd8:
    // 0x11dbd8: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x11dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
label_11dbdc:
    // 0x11dbdc: 0x278689c8  addiu       $a2, $gp, -0x7638
    ctx->pc = 0x11dbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937032));
label_11dbe0:
    // 0x11dbe0: 0xc041a50  jal         func_106940
label_11dbe4:
    if (ctx->pc == 0x11DBE4u) {
        ctx->pc = 0x11DBE8u;
        goto label_11dbe8;
    }
    ctx->pc = 0x11DBE0u;
    SET_GPR_U32(ctx, 31, 0x11DBE8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x11DBE0u, 0x11DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBE8u;
label_11dbe8:
    // 0x11dbe8: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x11dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11dbec:
    // 0x11dbec: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x11dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11dbf0:
    // 0x11dbf0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11dbf4:
    // 0x11dbf4: 0x24a51de0  addiu       $a1, $a1, 0x1DE0
    ctx->pc = 0x11dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7648));
label_11dbf8:
    // 0x11dbf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11dbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dbfc:
    // 0x11dbfc: 0xc041b90  jal         func_106E40
label_11dc00:
    if (ctx->pc == 0x11DC00u) {
        ctx->pc = 0x11DC04u;
        goto label_11dc04;
    }
    ctx->pc = 0x11DBFCu;
    SET_GPR_U32(ctx, 31, 0x11DC04u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x11DBFCu, 0x11DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC04u;
label_11dc04:
    // 0x11dc04: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11dc08:
    // 0x11dc08: 0xa0560028  sb          $s6, 0x28($v0)
    ctx->pc = 0x11dc08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 22));
label_11dc0c:
    // 0x11dc0c: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11dc10:
    // 0x11dc10: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11dc14:
    // 0x11dc14: 0xc0553d4  jal         func_154F50
label_11dc18:
    if (ctx->pc == 0x11DC18u) {
        ctx->pc = 0x11DC1Cu;
        goto label_11dc1c;
    }
    ctx->pc = 0x11DC14u;
    SET_GPR_U32(ctx, 31, 0x11DC1Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11DC14u, 0x11DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC1Cu;
label_11dc1c:
    // 0x11dc1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11dc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dc20:
    // 0x11dc20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11dc24:
    // 0x11dc24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11dc24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11dc28:
    // 0x11dc28: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11dc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11dc2c:
    // 0x11dc2c: 0x320f809  jalr        $t9
label_11dc30:
    if (ctx->pc == 0x11DC30u) {
        ctx->pc = 0x11DC34u;
        goto label_11dc34;
    }
    ctx->pc = 0x11DC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11DC34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DC2Cu, 0x11DC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DC34u;
label_11dc34:
    // 0x11dc34: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11dc38:
    // 0x11dc38: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11dc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11dc3c:
    // 0x11dc3c: 0xc0553d4  jal         func_154F50
label_11dc40:
    if (ctx->pc == 0x11DC40u) {
        ctx->pc = 0x11DC44u;
        goto label_11dc44;
    }
    ctx->pc = 0x11DC3Cu;
    SET_GPR_U32(ctx, 31, 0x11DC44u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11DC3Cu, 0x11DC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC44u;
label_11dc44:
    // 0x11dc44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dc48:
    // 0x11dc48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11dc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dc4c:
    // 0x11dc4c: 0xc055ad0  jal         func_156B40
label_11dc50:
    if (ctx->pc == 0x11DC50u) {
        ctx->pc = 0x11DC54u;
        goto label_11dc54;
    }
    ctx->pc = 0x11DC4Cu;
    SET_GPR_U32(ctx, 31, 0x11DC54u);
    ctx->pc = 0x156B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B40u, 0x11DC4Cu, 0x11DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC54u;
label_11dc54:
    // 0x11dc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11dc58:
    // 0x11dc58: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x11dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11dc5c:
    // 0x11dc5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11dc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dc60:
    // 0x11dc60: 0xc041484  jal         func_105210
label_11dc64:
    if (ctx->pc == 0x11DC64u) {
        ctx->pc = 0x11DC68u;
        goto label_11dc68;
    }
    ctx->pc = 0x11DC60u;
    SET_GPR_U32(ctx, 31, 0x11DC68u);
    ctx->pc = 0x105210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105210u, 0x11DC60u, 0x11DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC68u;
label_11dc68:
    // 0x11dc68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11dc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dc6c:
    // 0x11dc6c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11dc70:
    // 0x11dc70: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x11dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11dc74:
    // 0x11dc74: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x11dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11dc78:
    // 0x11dc78: 0xc08ef28  jal         func_23BCA0
label_11dc7c:
    if (ctx->pc == 0x11DC7Cu) {
        ctx->pc = 0x11DC80u;
        goto label_11dc80;
    }
    ctx->pc = 0x11DC78u;
    SET_GPR_U32(ctx, 31, 0x11DC80u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x11DC78u, 0x11DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC80u;
label_11dc80:
    // 0x11dc80: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x11dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_11dc84:
    // 0x11dc84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11dc88:
    // 0x11dc88: 0xc0402d4  jal         func_100B50
label_11dc8c:
    if (ctx->pc == 0x11DC8Cu) {
        ctx->pc = 0x11DC90u;
        goto label_11dc90;
    }
    ctx->pc = 0x11DC88u;
    SET_GPR_U32(ctx, 31, 0x11DC90u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x11DC88u, 0x11DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC90u;
label_11dc90:
    // 0x11dc90: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_11dc94:
    if (ctx->pc == 0x11DC94u) {
        ctx->pc = 0x11DC98u;
        goto label_11dc98;
    }
    ctx->pc = 0x11DC90u;
    {
        const bool branch_taken_0x11dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc90) {
            ctx->pc = 0x11DF2Cu;
            goto label_11df2c;
        }
    }
    ctx->pc = 0x11DC98u;
label_11dc98:
    // 0x11dc98: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11dc9c:
    // 0x11dc9c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11dca0:
    // 0x11dca0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11dca4:
    // 0x11dca4: 0x24a51d38  addiu       $a1, $a1, 0x1D38
    ctx->pc = 0x11dca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7480));
label_11dca8:
    // 0x11dca8: 0x278689c8  addiu       $a2, $gp, -0x7638
    ctx->pc = 0x11dca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937032));
label_11dcac:
    // 0x11dcac: 0xc04206c  jal         func_1081B0
label_11dcb0:
    if (ctx->pc == 0x11DCB0u) {
        ctx->pc = 0x11DCB4u;
        goto label_11dcb4;
    }
    ctx->pc = 0x11DCACu;
    SET_GPR_U32(ctx, 31, 0x11DCB4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x11DCACu, 0x11DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCB4u;
label_11dcb4:
    // 0x11dcb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11dcb8:
    // 0x11dcb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11dcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dcbc:
    // 0x11dcbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11dcbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dcc0:
    // 0x11dcc0: 0xc041bd4  jal         func_106F50
label_11dcc4:
    if (ctx->pc == 0x11DCC4u) {
        ctx->pc = 0x11DCC8u;
        goto label_11dcc8;
    }
    ctx->pc = 0x11DCC0u;
    SET_GPR_U32(ctx, 31, 0x11DCC8u);
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x11DCC0u, 0x11DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCC8u;
label_11dcc8:
    // 0x11dcc8: 0xa3a201cf  sb          $v0, 0x1CF($sp)
    ctx->pc = 0x11dcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 463), (uint8_t)GPR_U32(ctx, 2));
label_11dccc:
    // 0x11dccc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x11dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_11dcd0:
    // 0x11dcd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11dcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dcd4:
    // 0x11dcd4: 0xc08ef28  jal         func_23BCA0
label_11dcd8:
    if (ctx->pc == 0x11DCD8u) {
        ctx->pc = 0x11DCDCu;
        goto label_11dcdc;
    }
    ctx->pc = 0x11DCD4u;
    SET_GPR_U32(ctx, 31, 0x11DCDCu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x11DCD4u, 0x11DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCDCu;
label_11dcdc:
    // 0x11dcdc: 0x10000093  b           . + 4 + (0x93 << 2)
label_11dce0:
    if (ctx->pc == 0x11DCE0u) {
        ctx->pc = 0x11DCE4u;
        goto label_11dce4;
    }
    ctx->pc = 0x11DCDCu;
    {
        const bool branch_taken_0x11dcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dcdc) {
            ctx->pc = 0x11DF2Cu;
            goto label_11df2c;
        }
    }
    ctx->pc = 0x11DCE4u;
label_11dce4:
    // 0x11dce4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11dce8:
    // 0x11dce8: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x11dce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
label_11dcec:
    // 0x11dcec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11dcf0:
    // 0x11dcf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11dcf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11dcf4:
    // 0x11dcf4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x11dcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_11dcf8:
    // 0x11dcf8: 0x320f809  jalr        $t9
label_11dcfc:
    if (ctx->pc == 0x11DCFCu) {
        ctx->pc = 0x11DD00u;
        goto label_11dd00;
    }
    ctx->pc = 0x11DCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11DD00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DCF8u, 0x11DD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DD00u;
label_11dd00:
    // 0x11dd00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11dd00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dd04:
    // 0x11dd04: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x11dd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_11dd08:
    // 0x11dd08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11dd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_11dd0c:
    // 0x11dd0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11dd10:
    if (ctx->pc == 0x11DD10u) {
        ctx->pc = 0x11DD14u;
        goto label_11dd14;
    }
    ctx->pc = 0x11DD0Cu;
    {
        const bool branch_taken_0x11dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dd0c) {
            ctx->pc = 0x11DD28u;
            goto label_11dd28;
        }
    }
    ctx->pc = 0x11DD14u;
label_11dd14:
    // 0x11dd14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11dd18:
    // 0x11dd18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11dd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11dd1c:
    // 0x11dd1c: 0xc041c7c  jal         func_1071F0
label_11dd20:
    if (ctx->pc == 0x11DD20u) {
        ctx->pc = 0x11DD24u;
        goto label_11dd24;
    }
    ctx->pc = 0x11DD1Cu;
    SET_GPR_U32(ctx, 31, 0x11DD24u);
    ctx->pc = 0x1071F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1071F0u, 0x11DD1Cu, 0x11DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD24u;
label_11dd24:
    // 0x11dd24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11dd24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dd28:
    // 0x11dd28: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11dd2c:
    // 0x11dd2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11dd30:
    // 0x11dd30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11dd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dd34:
    // 0x11dd34: 0x24460028  addiu       $a2, $v0, 0x28
    ctx->pc = 0x11dd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11dd38:
    // 0x11dd38: 0xc041484  jal         func_105210
label_11dd3c:
    if (ctx->pc == 0x11DD3Cu) {
        ctx->pc = 0x11DD40u;
        goto label_11dd40;
    }
    ctx->pc = 0x11DD38u;
    SET_GPR_U32(ctx, 31, 0x11DD40u);
    ctx->pc = 0x105210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105210u, 0x11DD38u, 0x11DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD40u;
label_11dd40:
    // 0x11dd40: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11dd44:
    // 0x11dd44: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11dd48:
    // 0x11dd48: 0x24050555  addiu       $a1, $zero, 0x555
    ctx->pc = 0x11dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
label_11dd4c:
    // 0x11dd4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11dd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dd50:
    // 0x11dd50: 0xc04146c  jal         func_1051B0
label_11dd54:
    if (ctx->pc == 0x11DD54u) {
        ctx->pc = 0x11DD58u;
        goto label_11dd58;
    }
    ctx->pc = 0x11DD50u;
    SET_GPR_U32(ctx, 31, 0x11DD58u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x11DD50u, 0x11DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD58u;
label_11dd58:
    // 0x11dd58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11dd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11dd5c:
    // 0x11dd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11dd60:
    // 0x11dd60: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
label_11dd64:
    if (ctx->pc == 0x11DD64u) {
        ctx->pc = 0x11DD68u;
        goto label_11dd68;
    }
    ctx->pc = 0x11DD60u;
    {
        const bool branch_taken_0x11dd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11dd60) {
            ctx->pc = 0x11DF18u;
            goto label_11df18;
        }
    }
    ctx->pc = 0x11DD68u;
label_11dd68:
    // 0x11dd68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11dd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11dd6c:
    // 0x11dd6c: 0x0  nop
    ctx->pc = 0x11dd6cu;
    // NOP
label_11dd70:
    // 0x11dd70: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x11dd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_11dd74:
    // 0x11dd74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11dd74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11dd78:
    // 0x11dd78: 0x0  nop
    ctx->pc = 0x11dd78u;
    // NOP
label_11dd7c:
    // 0x11dd7c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x11dd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_11dd80:
    // 0x11dd80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11dd80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11dd84:
    // 0x11dd84: 0x0  nop
    ctx->pc = 0x11dd84u;
    // NOP
label_11dd88:
    // 0x11dd88: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x11dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_11dd8c:
    // 0x11dd8c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x11dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_11dd90:
    // 0x11dd90: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x11dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11dd94:
    // 0x11dd94: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x11dd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_11dd98:
    // 0x11dd98: 0x24460028  addiu       $a2, $v0, 0x28
    ctx->pc = 0x11dd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11dd9c:
    // 0x11dd9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11dd9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dda0:
    // 0x11dda0: 0xc043448  jal         func_10D120
label_11dda4:
    if (ctx->pc == 0x11DDA4u) {
        ctx->pc = 0x11DDA8u;
        goto label_11dda8;
    }
    ctx->pc = 0x11DDA0u;
    SET_GPR_U32(ctx, 31, 0x11DDA8u);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x11DDA0u, 0x11DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDA8u;
label_11dda8:
    // 0x11dda8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11dda8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ddac:
    // 0x11ddac: 0x1015005a  beq         $zero, $s5, . + 4 + (0x5A << 2)
label_11ddb0:
    if (ctx->pc == 0x11DDB0u) {
        ctx->pc = 0x11DDB4u;
        goto label_11ddb4;
    }
    ctx->pc = 0x11DDACu;
    {
        const bool branch_taken_0x11ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x11ddac) {
            ctx->pc = 0x11DF18u;
            goto label_11df18;
        }
    }
    ctx->pc = 0x11DDB4u;
label_11ddb4:
    // 0x11ddb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ddb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11ddb8:
    // 0x11ddb8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_11ddbc:
    // 0x11ddbc: 0xc085538  jal         func_2154E0
label_11ddc0:
    if (ctx->pc == 0x11DDC0u) {
        ctx->pc = 0x11DDC4u;
        goto label_11ddc4;
    }
    ctx->pc = 0x11DDBCu;
    SET_GPR_U32(ctx, 31, 0x11DDC4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11DDBCu, 0x11DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDC4u;
label_11ddc4:
    // 0x11ddc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ddc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ddc8:
    // 0x11ddc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ddc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11ddcc:
    // 0x11ddcc: 0xc092d70  jal         func_24B5C0
label_11ddd0:
    if (ctx->pc == 0x11DDD0u) {
        ctx->pc = 0x11DDD4u;
        goto label_11ddd4;
    }
    ctx->pc = 0x11DDCCu;
    SET_GPR_U32(ctx, 31, 0x11DDD4u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x11DDCCu, 0x11DDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDD4u;
label_11ddd4:
    // 0x11ddd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ddd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ddd8:
    // 0x11ddd8: 0xc0477e0  jal         func_11DF80
label_11dddc:
    if (ctx->pc == 0x11DDDCu) {
        ctx->pc = 0x11DDE0u;
        goto label_11dde0;
    }
    ctx->pc = 0x11DDD8u;
    SET_GPR_U32(ctx, 31, 0x11DDE0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x11DDD8u, 0x11DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDE0u;
label_11dde0:
    // 0x11dde0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11dde0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dde4:
    // 0x11dde4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11dde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11dde8:
    // 0x11dde8: 0xc092d70  jal         func_24B5C0
label_11ddec:
    if (ctx->pc == 0x11DDECu) {
        ctx->pc = 0x11DDF0u;
        goto label_11ddf0;
    }
    ctx->pc = 0x11DDE8u;
    SET_GPR_U32(ctx, 31, 0x11DDF0u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x11DDE8u, 0x11DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDF0u;
label_11ddf0:
    // 0x11ddf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ddf4:
    // 0x11ddf4: 0xc0477d8  jal         func_11DF60
label_11ddf8:
    if (ctx->pc == 0x11DDF8u) {
        ctx->pc = 0x11DDFCu;
        goto label_11ddfc;
    }
    ctx->pc = 0x11DDF4u;
    SET_GPR_U32(ctx, 31, 0x11DDFCu);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x11DDF4u, 0x11DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDFCu;
label_11ddfc:
    // 0x11ddfc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11ddfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11de00:
    // 0x11de00: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x11de00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_11de04:
    // 0x11de04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11de08:
    // 0x11de08: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_11de0c:
    if (ctx->pc == 0x11DE0Cu) {
        ctx->pc = 0x11DE10u;
        goto label_11de10;
    }
    ctx->pc = 0x11DE08u;
    {
        const bool branch_taken_0x11de08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de08) {
            ctx->pc = 0x11DE30u;
            goto label_11de30;
        }
    }
    ctx->pc = 0x11DE10u;
label_11de10:
    // 0x11de10: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x11de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_11de14:
    // 0x11de14: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x11de14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_11de18:
    // 0x11de18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11de1c:
    // 0x11de1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_11de20:
    // 0x11de20: 0x0  nop
    ctx->pc = 0x11de20u;
    // NOP
label_11de24:
    // 0x11de24: 0x0  nop
    ctx->pc = 0x11de24u;
    // NOP
label_11de28:
    // 0x11de28: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_11de2c:
    if (ctx->pc == 0x11DE2Cu) {
        ctx->pc = 0x11DE30u;
        goto label_11de30;
    }
    ctx->pc = 0x11DE28u;
    {
        const bool branch_taken_0x11de28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11de28) {
            ctx->pc = 0x11DE14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11de14;
        }
    }
    ctx->pc = 0x11DE30u;
label_11de30:
    // 0x11de30: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x11de30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_11de34:
    // 0x11de34: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x11de34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11de38:
    // 0x11de38: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_11de3c:
    if (ctx->pc == 0x11DE3Cu) {
        ctx->pc = 0x11DE40u;
        goto label_11de40;
    }
    ctx->pc = 0x11DE38u;
    {
        const bool branch_taken_0x11de38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de38) {
            ctx->pc = 0x11DE60u;
            goto label_11de60;
        }
    }
    ctx->pc = 0x11DE40u;
label_11de40:
    // 0x11de40: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x11de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_11de44:
    // 0x11de44: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x11de44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_11de48:
    // 0x11de48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11de4c:
    // 0x11de4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_11de50:
    // 0x11de50: 0x0  nop
    ctx->pc = 0x11de50u;
    // NOP
label_11de54:
    // 0x11de54: 0x0  nop
    ctx->pc = 0x11de54u;
    // NOP
label_11de58:
    // 0x11de58: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_11de5c:
    if (ctx->pc == 0x11DE5Cu) {
        ctx->pc = 0x11DE60u;
        goto label_11de60;
    }
    ctx->pc = 0x11DE58u;
    {
        const bool branch_taken_0x11de58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11de58) {
            ctx->pc = 0x11DE44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11de44;
        }
    }
    ctx->pc = 0x11DE60u;
label_11de60:
    // 0x11de60: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x11de60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_11de64:
    // 0x11de64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11de64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11de68:
    // 0x11de68: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_11de6c:
    if (ctx->pc == 0x11DE6Cu) {
        ctx->pc = 0x11DE70u;
        goto label_11de70;
    }
    ctx->pc = 0x11DE68u;
    {
        const bool branch_taken_0x11de68 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x11de68) {
            ctx->pc = 0x11DE84u;
            goto label_11de84;
        }
    }
    ctx->pc = 0x11DE70u;
label_11de70:
    // 0x11de70: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x11de70u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11de74:
    // 0x11de74: 0x0  nop
    ctx->pc = 0x11de74u;
    // NOP
label_11de78:
    // 0x11de78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11de78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11de7c:
    // 0x11de7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_11de80:
    if (ctx->pc == 0x11DE80u) {
        ctx->pc = 0x11DE84u;
        goto label_11de84;
    }
    ctx->pc = 0x11DE7Cu;
    {
        const bool branch_taken_0x11de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de7c) {
            ctx->pc = 0x11DEA0u;
            goto label_11dea0;
        }
    }
    ctx->pc = 0x11DE84u;
label_11de84:
    // 0x11de84: 0x1e1842  srl         $v1, $fp, 1
    ctx->pc = 0x11de84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_11de88:
    // 0x11de88: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_11de8c:
    // 0x11de8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11de8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11de90:
    // 0x11de90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11de90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11de94:
    // 0x11de94: 0x0  nop
    ctx->pc = 0x11de94u;
    // NOP
label_11de98:
    // 0x11de98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11de98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11de9c:
    // 0x11de9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11de9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11dea0:
    // 0x11dea0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11dea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11dea4:
    // 0x11dea4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x11dea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_11dea8:
    // 0x11dea8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x11dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_11deac:
    // 0x11deac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11deacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11deb0:
    // 0x11deb0: 0x6e00006  bltz        $s7, . + 4 + (0x6 << 2)
label_11deb4:
    if (ctx->pc == 0x11DEB4u) {
        ctx->pc = 0x11DEB8u;
        goto label_11deb8;
    }
    ctx->pc = 0x11DEB0u;
    {
        const bool branch_taken_0x11deb0 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x11deb0) {
            ctx->pc = 0x11DECCu;
            goto label_11decc;
        }
    }
    ctx->pc = 0x11DEB8u;
label_11deb8:
    // 0x11deb8: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x11deb8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11debc:
    // 0x11debc: 0x0  nop
    ctx->pc = 0x11debcu;
    // NOP
label_11dec0:
    // 0x11dec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11dec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11dec4:
    // 0x11dec4: 0x10000008  b           . + 4 + (0x8 << 2)
label_11dec8:
    if (ctx->pc == 0x11DEC8u) {
        ctx->pc = 0x11DECCu;
        goto label_11decc;
    }
    ctx->pc = 0x11DEC4u;
    {
        const bool branch_taken_0x11dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dec4) {
            ctx->pc = 0x11DEE8u;
            goto label_11dee8;
        }
    }
    ctx->pc = 0x11DECCu;
label_11decc:
    // 0x11decc: 0x171842  srl         $v1, $s7, 1
    ctx->pc = 0x11deccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
label_11ded0:
    // 0x11ded0: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x11ded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_11ded4:
    // 0x11ded4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11ded4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11ded8:
    // 0x11ded8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11ded8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11dedc:
    // 0x11dedc: 0x0  nop
    ctx->pc = 0x11dedcu;
    // NOP
label_11dee0:
    // 0x11dee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11dee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11dee4:
    // 0x11dee4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11dee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11dee8:
    // 0x11dee8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11dee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11deec:
    // 0x11deec: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x11deecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_11def0:
    // 0x11def0: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x11def0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_11def4:
    // 0x11def4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11def8:
    // 0x11def8: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x11def8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_11defc:
    // 0x11defc: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x11defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_11df00:
    // 0x11df00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11df00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11df04:
    // 0x11df04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11df04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11df08:
    // 0x11df08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11df08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11df0c:
    // 0x11df0c: 0xc092d78  jal         func_24B5E0
label_11df10:
    if (ctx->pc == 0x11DF10u) {
        ctx->pc = 0x11DF14u;
        goto label_11df14;
    }
    ctx->pc = 0x11DF0Cu;
    SET_GPR_U32(ctx, 31, 0x11DF14u);
    ctx->pc = 0x24B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5E0u, 0x11DF0Cu, 0x11DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF14u;
label_11df14:
    // 0x11df14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11df14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11df18:
    // 0x11df18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11df1c:
    // 0x11df1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11df1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11df20:
    // 0x11df20: 0xc08ef28  jal         func_23BCA0
label_11df24:
    if (ctx->pc == 0x11DF24u) {
        ctx->pc = 0x11DF28u;
        goto label_11df28;
    }
    ctx->pc = 0x11DF20u;
    SET_GPR_U32(ctx, 31, 0x11DF28u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x11DF20u, 0x11DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF28u;
label_11df28:
    // 0x11df28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11df28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11df2c:
    // 0x11df2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11df2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11df30:
    // 0x11df30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11df30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11df34:
    // 0x11df34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11df34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11df38:
    // 0x11df38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11df38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11df3c:
    // 0x11df3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11df3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11df40:
    // 0x11df40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11df40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11df44:
    // 0x11df44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11df44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11df48:
    // 0x11df48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11df48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11df4c:
    // 0x11df4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11df4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11df50:
    // 0x11df50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11df50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11df54:
    // 0x11df54: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x11df54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_11df58:
    // 0x11df58: 0x3e00008  jr          $ra
label_11df5c:
    if (ctx->pc == 0x11DF5Cu) {
        ctx->pc = 0x11DF60u;
        goto label_fallthrough_0x11df58;
    }
    ctx->pc = 0x11DF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11df58:
    ctx->pc = 0x11DF60u;
}
