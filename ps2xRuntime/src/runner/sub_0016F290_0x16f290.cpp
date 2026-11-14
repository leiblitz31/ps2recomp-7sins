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

// Function: sub_0016F290
// Address: 0x16f290 - 0x16fc30
void sub_0016F290_0x16f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F290_0x16f290");
#endif

    switch (ctx->pc) {
        case 0x16f290u: goto label_16f290;
        case 0x16f294u: goto label_16f294;
        case 0x16f298u: goto label_16f298;
        case 0x16f29cu: goto label_16f29c;
        case 0x16f2a0u: goto label_16f2a0;
        case 0x16f2a4u: goto label_16f2a4;
        case 0x16f2a8u: goto label_16f2a8;
        case 0x16f2acu: goto label_16f2ac;
        case 0x16f2b0u: goto label_16f2b0;
        case 0x16f2b4u: goto label_16f2b4;
        case 0x16f2b8u: goto label_16f2b8;
        case 0x16f2bcu: goto label_16f2bc;
        case 0x16f2c0u: goto label_16f2c0;
        case 0x16f2c4u: goto label_16f2c4;
        case 0x16f2c8u: goto label_16f2c8;
        case 0x16f2ccu: goto label_16f2cc;
        case 0x16f2d0u: goto label_16f2d0;
        case 0x16f2d4u: goto label_16f2d4;
        case 0x16f2d8u: goto label_16f2d8;
        case 0x16f2dcu: goto label_16f2dc;
        case 0x16f2e0u: goto label_16f2e0;
        case 0x16f2e4u: goto label_16f2e4;
        case 0x16f2e8u: goto label_16f2e8;
        case 0x16f2ecu: goto label_16f2ec;
        case 0x16f2f0u: goto label_16f2f0;
        case 0x16f2f4u: goto label_16f2f4;
        case 0x16f2f8u: goto label_16f2f8;
        case 0x16f2fcu: goto label_16f2fc;
        case 0x16f300u: goto label_16f300;
        case 0x16f304u: goto label_16f304;
        case 0x16f308u: goto label_16f308;
        case 0x16f30cu: goto label_16f30c;
        case 0x16f310u: goto label_16f310;
        case 0x16f314u: goto label_16f314;
        case 0x16f318u: goto label_16f318;
        case 0x16f31cu: goto label_16f31c;
        case 0x16f320u: goto label_16f320;
        case 0x16f324u: goto label_16f324;
        case 0x16f328u: goto label_16f328;
        case 0x16f32cu: goto label_16f32c;
        case 0x16f330u: goto label_16f330;
        case 0x16f334u: goto label_16f334;
        case 0x16f338u: goto label_16f338;
        case 0x16f33cu: goto label_16f33c;
        case 0x16f340u: goto label_16f340;
        case 0x16f344u: goto label_16f344;
        case 0x16f348u: goto label_16f348;
        case 0x16f34cu: goto label_16f34c;
        case 0x16f350u: goto label_16f350;
        case 0x16f354u: goto label_16f354;
        case 0x16f358u: goto label_16f358;
        case 0x16f35cu: goto label_16f35c;
        case 0x16f360u: goto label_16f360;
        case 0x16f364u: goto label_16f364;
        case 0x16f368u: goto label_16f368;
        case 0x16f36cu: goto label_16f36c;
        case 0x16f370u: goto label_16f370;
        case 0x16f374u: goto label_16f374;
        case 0x16f378u: goto label_16f378;
        case 0x16f37cu: goto label_16f37c;
        case 0x16f380u: goto label_16f380;
        case 0x16f384u: goto label_16f384;
        case 0x16f388u: goto label_16f388;
        case 0x16f38cu: goto label_16f38c;
        case 0x16f390u: goto label_16f390;
        case 0x16f394u: goto label_16f394;
        case 0x16f398u: goto label_16f398;
        case 0x16f39cu: goto label_16f39c;
        case 0x16f3a0u: goto label_16f3a0;
        case 0x16f3a4u: goto label_16f3a4;
        case 0x16f3a8u: goto label_16f3a8;
        case 0x16f3acu: goto label_16f3ac;
        case 0x16f3b0u: goto label_16f3b0;
        case 0x16f3b4u: goto label_16f3b4;
        case 0x16f3b8u: goto label_16f3b8;
        case 0x16f3bcu: goto label_16f3bc;
        case 0x16f3c0u: goto label_16f3c0;
        case 0x16f3c4u: goto label_16f3c4;
        case 0x16f3c8u: goto label_16f3c8;
        case 0x16f3ccu: goto label_16f3cc;
        case 0x16f3d0u: goto label_16f3d0;
        case 0x16f3d4u: goto label_16f3d4;
        case 0x16f3d8u: goto label_16f3d8;
        case 0x16f3dcu: goto label_16f3dc;
        case 0x16f3e0u: goto label_16f3e0;
        case 0x16f3e4u: goto label_16f3e4;
        case 0x16f3e8u: goto label_16f3e8;
        case 0x16f3ecu: goto label_16f3ec;
        case 0x16f3f0u: goto label_16f3f0;
        case 0x16f3f4u: goto label_16f3f4;
        case 0x16f3f8u: goto label_16f3f8;
        case 0x16f3fcu: goto label_16f3fc;
        case 0x16f400u: goto label_16f400;
        case 0x16f404u: goto label_16f404;
        case 0x16f408u: goto label_16f408;
        case 0x16f40cu: goto label_16f40c;
        case 0x16f410u: goto label_16f410;
        case 0x16f414u: goto label_16f414;
        case 0x16f418u: goto label_16f418;
        case 0x16f41cu: goto label_16f41c;
        case 0x16f420u: goto label_16f420;
        case 0x16f424u: goto label_16f424;
        case 0x16f428u: goto label_16f428;
        case 0x16f42cu: goto label_16f42c;
        case 0x16f430u: goto label_16f430;
        case 0x16f434u: goto label_16f434;
        case 0x16f438u: goto label_16f438;
        case 0x16f43cu: goto label_16f43c;
        case 0x16f440u: goto label_16f440;
        case 0x16f444u: goto label_16f444;
        case 0x16f448u: goto label_16f448;
        case 0x16f44cu: goto label_16f44c;
        case 0x16f450u: goto label_16f450;
        case 0x16f454u: goto label_16f454;
        case 0x16f458u: goto label_16f458;
        case 0x16f45cu: goto label_16f45c;
        case 0x16f460u: goto label_16f460;
        case 0x16f464u: goto label_16f464;
        case 0x16f468u: goto label_16f468;
        case 0x16f46cu: goto label_16f46c;
        case 0x16f470u: goto label_16f470;
        case 0x16f474u: goto label_16f474;
        case 0x16f478u: goto label_16f478;
        case 0x16f47cu: goto label_16f47c;
        case 0x16f480u: goto label_16f480;
        case 0x16f484u: goto label_16f484;
        case 0x16f488u: goto label_16f488;
        case 0x16f48cu: goto label_16f48c;
        case 0x16f490u: goto label_16f490;
        case 0x16f494u: goto label_16f494;
        case 0x16f498u: goto label_16f498;
        case 0x16f49cu: goto label_16f49c;
        case 0x16f4a0u: goto label_16f4a0;
        case 0x16f4a4u: goto label_16f4a4;
        case 0x16f4a8u: goto label_16f4a8;
        case 0x16f4acu: goto label_16f4ac;
        case 0x16f4b0u: goto label_16f4b0;
        case 0x16f4b4u: goto label_16f4b4;
        case 0x16f4b8u: goto label_16f4b8;
        case 0x16f4bcu: goto label_16f4bc;
        case 0x16f4c0u: goto label_16f4c0;
        case 0x16f4c4u: goto label_16f4c4;
        case 0x16f4c8u: goto label_16f4c8;
        case 0x16f4ccu: goto label_16f4cc;
        case 0x16f4d0u: goto label_16f4d0;
        case 0x16f4d4u: goto label_16f4d4;
        case 0x16f4d8u: goto label_16f4d8;
        case 0x16f4dcu: goto label_16f4dc;
        case 0x16f4e0u: goto label_16f4e0;
        case 0x16f4e4u: goto label_16f4e4;
        case 0x16f4e8u: goto label_16f4e8;
        case 0x16f4ecu: goto label_16f4ec;
        case 0x16f4f0u: goto label_16f4f0;
        case 0x16f4f4u: goto label_16f4f4;
        case 0x16f4f8u: goto label_16f4f8;
        case 0x16f4fcu: goto label_16f4fc;
        case 0x16f500u: goto label_16f500;
        case 0x16f504u: goto label_16f504;
        case 0x16f508u: goto label_16f508;
        case 0x16f50cu: goto label_16f50c;
        case 0x16f510u: goto label_16f510;
        case 0x16f514u: goto label_16f514;
        case 0x16f518u: goto label_16f518;
        case 0x16f51cu: goto label_16f51c;
        case 0x16f520u: goto label_16f520;
        case 0x16f524u: goto label_16f524;
        case 0x16f528u: goto label_16f528;
        case 0x16f52cu: goto label_16f52c;
        case 0x16f530u: goto label_16f530;
        case 0x16f534u: goto label_16f534;
        case 0x16f538u: goto label_16f538;
        case 0x16f53cu: goto label_16f53c;
        case 0x16f540u: goto label_16f540;
        case 0x16f544u: goto label_16f544;
        case 0x16f548u: goto label_16f548;
        case 0x16f54cu: goto label_16f54c;
        case 0x16f550u: goto label_16f550;
        case 0x16f554u: goto label_16f554;
        case 0x16f558u: goto label_16f558;
        case 0x16f55cu: goto label_16f55c;
        case 0x16f560u: goto label_16f560;
        case 0x16f564u: goto label_16f564;
        case 0x16f568u: goto label_16f568;
        case 0x16f56cu: goto label_16f56c;
        case 0x16f570u: goto label_16f570;
        case 0x16f574u: goto label_16f574;
        case 0x16f578u: goto label_16f578;
        case 0x16f57cu: goto label_16f57c;
        case 0x16f580u: goto label_16f580;
        case 0x16f584u: goto label_16f584;
        case 0x16f588u: goto label_16f588;
        case 0x16f58cu: goto label_16f58c;
        case 0x16f590u: goto label_16f590;
        case 0x16f594u: goto label_16f594;
        case 0x16f598u: goto label_16f598;
        case 0x16f59cu: goto label_16f59c;
        case 0x16f5a0u: goto label_16f5a0;
        case 0x16f5a4u: goto label_16f5a4;
        case 0x16f5a8u: goto label_16f5a8;
        case 0x16f5acu: goto label_16f5ac;
        case 0x16f5b0u: goto label_16f5b0;
        case 0x16f5b4u: goto label_16f5b4;
        case 0x16f5b8u: goto label_16f5b8;
        case 0x16f5bcu: goto label_16f5bc;
        case 0x16f5c0u: goto label_16f5c0;
        case 0x16f5c4u: goto label_16f5c4;
        case 0x16f5c8u: goto label_16f5c8;
        case 0x16f5ccu: goto label_16f5cc;
        case 0x16f5d0u: goto label_16f5d0;
        case 0x16f5d4u: goto label_16f5d4;
        case 0x16f5d8u: goto label_16f5d8;
        case 0x16f5dcu: goto label_16f5dc;
        case 0x16f5e0u: goto label_16f5e0;
        case 0x16f5e4u: goto label_16f5e4;
        case 0x16f5e8u: goto label_16f5e8;
        case 0x16f5ecu: goto label_16f5ec;
        case 0x16f5f0u: goto label_16f5f0;
        case 0x16f5f4u: goto label_16f5f4;
        case 0x16f5f8u: goto label_16f5f8;
        case 0x16f5fcu: goto label_16f5fc;
        case 0x16f600u: goto label_16f600;
        case 0x16f604u: goto label_16f604;
        case 0x16f608u: goto label_16f608;
        case 0x16f60cu: goto label_16f60c;
        case 0x16f610u: goto label_16f610;
        case 0x16f614u: goto label_16f614;
        case 0x16f618u: goto label_16f618;
        case 0x16f61cu: goto label_16f61c;
        case 0x16f620u: goto label_16f620;
        case 0x16f624u: goto label_16f624;
        case 0x16f628u: goto label_16f628;
        case 0x16f62cu: goto label_16f62c;
        case 0x16f630u: goto label_16f630;
        case 0x16f634u: goto label_16f634;
        case 0x16f638u: goto label_16f638;
        case 0x16f63cu: goto label_16f63c;
        case 0x16f640u: goto label_16f640;
        case 0x16f644u: goto label_16f644;
        case 0x16f648u: goto label_16f648;
        case 0x16f64cu: goto label_16f64c;
        case 0x16f650u: goto label_16f650;
        case 0x16f654u: goto label_16f654;
        case 0x16f658u: goto label_16f658;
        case 0x16f65cu: goto label_16f65c;
        case 0x16f660u: goto label_16f660;
        case 0x16f664u: goto label_16f664;
        case 0x16f668u: goto label_16f668;
        case 0x16f66cu: goto label_16f66c;
        case 0x16f670u: goto label_16f670;
        case 0x16f674u: goto label_16f674;
        case 0x16f678u: goto label_16f678;
        case 0x16f67cu: goto label_16f67c;
        case 0x16f680u: goto label_16f680;
        case 0x16f684u: goto label_16f684;
        case 0x16f688u: goto label_16f688;
        case 0x16f68cu: goto label_16f68c;
        case 0x16f690u: goto label_16f690;
        case 0x16f694u: goto label_16f694;
        case 0x16f698u: goto label_16f698;
        case 0x16f69cu: goto label_16f69c;
        case 0x16f6a0u: goto label_16f6a0;
        case 0x16f6a4u: goto label_16f6a4;
        case 0x16f6a8u: goto label_16f6a8;
        case 0x16f6acu: goto label_16f6ac;
        case 0x16f6b0u: goto label_16f6b0;
        case 0x16f6b4u: goto label_16f6b4;
        case 0x16f6b8u: goto label_16f6b8;
        case 0x16f6bcu: goto label_16f6bc;
        case 0x16f6c0u: goto label_16f6c0;
        case 0x16f6c4u: goto label_16f6c4;
        case 0x16f6c8u: goto label_16f6c8;
        case 0x16f6ccu: goto label_16f6cc;
        case 0x16f6d0u: goto label_16f6d0;
        case 0x16f6d4u: goto label_16f6d4;
        case 0x16f6d8u: goto label_16f6d8;
        case 0x16f6dcu: goto label_16f6dc;
        case 0x16f6e0u: goto label_16f6e0;
        case 0x16f6e4u: goto label_16f6e4;
        case 0x16f6e8u: goto label_16f6e8;
        case 0x16f6ecu: goto label_16f6ec;
        case 0x16f6f0u: goto label_16f6f0;
        case 0x16f6f4u: goto label_16f6f4;
        case 0x16f6f8u: goto label_16f6f8;
        case 0x16f6fcu: goto label_16f6fc;
        case 0x16f700u: goto label_16f700;
        case 0x16f704u: goto label_16f704;
        case 0x16f708u: goto label_16f708;
        case 0x16f70cu: goto label_16f70c;
        case 0x16f710u: goto label_16f710;
        case 0x16f714u: goto label_16f714;
        case 0x16f718u: goto label_16f718;
        case 0x16f71cu: goto label_16f71c;
        case 0x16f720u: goto label_16f720;
        case 0x16f724u: goto label_16f724;
        case 0x16f728u: goto label_16f728;
        case 0x16f72cu: goto label_16f72c;
        case 0x16f730u: goto label_16f730;
        case 0x16f734u: goto label_16f734;
        case 0x16f738u: goto label_16f738;
        case 0x16f73cu: goto label_16f73c;
        case 0x16f740u: goto label_16f740;
        case 0x16f744u: goto label_16f744;
        case 0x16f748u: goto label_16f748;
        case 0x16f74cu: goto label_16f74c;
        case 0x16f750u: goto label_16f750;
        case 0x16f754u: goto label_16f754;
        case 0x16f758u: goto label_16f758;
        case 0x16f75cu: goto label_16f75c;
        case 0x16f760u: goto label_16f760;
        case 0x16f764u: goto label_16f764;
        case 0x16f768u: goto label_16f768;
        case 0x16f76cu: goto label_16f76c;
        case 0x16f770u: goto label_16f770;
        case 0x16f774u: goto label_16f774;
        case 0x16f778u: goto label_16f778;
        case 0x16f77cu: goto label_16f77c;
        case 0x16f780u: goto label_16f780;
        case 0x16f784u: goto label_16f784;
        case 0x16f788u: goto label_16f788;
        case 0x16f78cu: goto label_16f78c;
        case 0x16f790u: goto label_16f790;
        case 0x16f794u: goto label_16f794;
        case 0x16f798u: goto label_16f798;
        case 0x16f79cu: goto label_16f79c;
        case 0x16f7a0u: goto label_16f7a0;
        case 0x16f7a4u: goto label_16f7a4;
        case 0x16f7a8u: goto label_16f7a8;
        case 0x16f7acu: goto label_16f7ac;
        case 0x16f7b0u: goto label_16f7b0;
        case 0x16f7b4u: goto label_16f7b4;
        case 0x16f7b8u: goto label_16f7b8;
        case 0x16f7bcu: goto label_16f7bc;
        case 0x16f7c0u: goto label_16f7c0;
        case 0x16f7c4u: goto label_16f7c4;
        case 0x16f7c8u: goto label_16f7c8;
        case 0x16f7ccu: goto label_16f7cc;
        case 0x16f7d0u: goto label_16f7d0;
        case 0x16f7d4u: goto label_16f7d4;
        case 0x16f7d8u: goto label_16f7d8;
        case 0x16f7dcu: goto label_16f7dc;
        case 0x16f7e0u: goto label_16f7e0;
        case 0x16f7e4u: goto label_16f7e4;
        case 0x16f7e8u: goto label_16f7e8;
        case 0x16f7ecu: goto label_16f7ec;
        case 0x16f7f0u: goto label_16f7f0;
        case 0x16f7f4u: goto label_16f7f4;
        case 0x16f7f8u: goto label_16f7f8;
        case 0x16f7fcu: goto label_16f7fc;
        case 0x16f800u: goto label_16f800;
        case 0x16f804u: goto label_16f804;
        case 0x16f808u: goto label_16f808;
        case 0x16f80cu: goto label_16f80c;
        case 0x16f810u: goto label_16f810;
        case 0x16f814u: goto label_16f814;
        case 0x16f818u: goto label_16f818;
        case 0x16f81cu: goto label_16f81c;
        case 0x16f820u: goto label_16f820;
        case 0x16f824u: goto label_16f824;
        case 0x16f828u: goto label_16f828;
        case 0x16f82cu: goto label_16f82c;
        case 0x16f830u: goto label_16f830;
        case 0x16f834u: goto label_16f834;
        case 0x16f838u: goto label_16f838;
        case 0x16f83cu: goto label_16f83c;
        case 0x16f840u: goto label_16f840;
        case 0x16f844u: goto label_16f844;
        case 0x16f848u: goto label_16f848;
        case 0x16f84cu: goto label_16f84c;
        case 0x16f850u: goto label_16f850;
        case 0x16f854u: goto label_16f854;
        case 0x16f858u: goto label_16f858;
        case 0x16f85cu: goto label_16f85c;
        case 0x16f860u: goto label_16f860;
        case 0x16f864u: goto label_16f864;
        case 0x16f868u: goto label_16f868;
        case 0x16f86cu: goto label_16f86c;
        case 0x16f870u: goto label_16f870;
        case 0x16f874u: goto label_16f874;
        case 0x16f878u: goto label_16f878;
        case 0x16f87cu: goto label_16f87c;
        case 0x16f880u: goto label_16f880;
        case 0x16f884u: goto label_16f884;
        case 0x16f888u: goto label_16f888;
        case 0x16f88cu: goto label_16f88c;
        case 0x16f890u: goto label_16f890;
        case 0x16f894u: goto label_16f894;
        case 0x16f898u: goto label_16f898;
        case 0x16f89cu: goto label_16f89c;
        case 0x16f8a0u: goto label_16f8a0;
        case 0x16f8a4u: goto label_16f8a4;
        case 0x16f8a8u: goto label_16f8a8;
        case 0x16f8acu: goto label_16f8ac;
        case 0x16f8b0u: goto label_16f8b0;
        case 0x16f8b4u: goto label_16f8b4;
        case 0x16f8b8u: goto label_16f8b8;
        case 0x16f8bcu: goto label_16f8bc;
        case 0x16f8c0u: goto label_16f8c0;
        case 0x16f8c4u: goto label_16f8c4;
        case 0x16f8c8u: goto label_16f8c8;
        case 0x16f8ccu: goto label_16f8cc;
        case 0x16f8d0u: goto label_16f8d0;
        case 0x16f8d4u: goto label_16f8d4;
        case 0x16f8d8u: goto label_16f8d8;
        case 0x16f8dcu: goto label_16f8dc;
        case 0x16f8e0u: goto label_16f8e0;
        case 0x16f8e4u: goto label_16f8e4;
        case 0x16f8e8u: goto label_16f8e8;
        case 0x16f8ecu: goto label_16f8ec;
        case 0x16f8f0u: goto label_16f8f0;
        case 0x16f8f4u: goto label_16f8f4;
        case 0x16f8f8u: goto label_16f8f8;
        case 0x16f8fcu: goto label_16f8fc;
        case 0x16f900u: goto label_16f900;
        case 0x16f904u: goto label_16f904;
        case 0x16f908u: goto label_16f908;
        case 0x16f90cu: goto label_16f90c;
        case 0x16f910u: goto label_16f910;
        case 0x16f914u: goto label_16f914;
        case 0x16f918u: goto label_16f918;
        case 0x16f91cu: goto label_16f91c;
        case 0x16f920u: goto label_16f920;
        case 0x16f924u: goto label_16f924;
        case 0x16f928u: goto label_16f928;
        case 0x16f92cu: goto label_16f92c;
        case 0x16f930u: goto label_16f930;
        case 0x16f934u: goto label_16f934;
        case 0x16f938u: goto label_16f938;
        case 0x16f93cu: goto label_16f93c;
        case 0x16f940u: goto label_16f940;
        case 0x16f944u: goto label_16f944;
        case 0x16f948u: goto label_16f948;
        case 0x16f94cu: goto label_16f94c;
        case 0x16f950u: goto label_16f950;
        case 0x16f954u: goto label_16f954;
        case 0x16f958u: goto label_16f958;
        case 0x16f95cu: goto label_16f95c;
        case 0x16f960u: goto label_16f960;
        case 0x16f964u: goto label_16f964;
        case 0x16f968u: goto label_16f968;
        case 0x16f96cu: goto label_16f96c;
        case 0x16f970u: goto label_16f970;
        case 0x16f974u: goto label_16f974;
        case 0x16f978u: goto label_16f978;
        case 0x16f97cu: goto label_16f97c;
        case 0x16f980u: goto label_16f980;
        case 0x16f984u: goto label_16f984;
        case 0x16f988u: goto label_16f988;
        case 0x16f98cu: goto label_16f98c;
        case 0x16f990u: goto label_16f990;
        case 0x16f994u: goto label_16f994;
        case 0x16f998u: goto label_16f998;
        case 0x16f99cu: goto label_16f99c;
        case 0x16f9a0u: goto label_16f9a0;
        case 0x16f9a4u: goto label_16f9a4;
        case 0x16f9a8u: goto label_16f9a8;
        case 0x16f9acu: goto label_16f9ac;
        case 0x16f9b0u: goto label_16f9b0;
        case 0x16f9b4u: goto label_16f9b4;
        case 0x16f9b8u: goto label_16f9b8;
        case 0x16f9bcu: goto label_16f9bc;
        case 0x16f9c0u: goto label_16f9c0;
        case 0x16f9c4u: goto label_16f9c4;
        case 0x16f9c8u: goto label_16f9c8;
        case 0x16f9ccu: goto label_16f9cc;
        case 0x16f9d0u: goto label_16f9d0;
        case 0x16f9d4u: goto label_16f9d4;
        case 0x16f9d8u: goto label_16f9d8;
        case 0x16f9dcu: goto label_16f9dc;
        case 0x16f9e0u: goto label_16f9e0;
        case 0x16f9e4u: goto label_16f9e4;
        case 0x16f9e8u: goto label_16f9e8;
        case 0x16f9ecu: goto label_16f9ec;
        case 0x16f9f0u: goto label_16f9f0;
        case 0x16f9f4u: goto label_16f9f4;
        case 0x16f9f8u: goto label_16f9f8;
        case 0x16f9fcu: goto label_16f9fc;
        case 0x16fa00u: goto label_16fa00;
        case 0x16fa04u: goto label_16fa04;
        case 0x16fa08u: goto label_16fa08;
        case 0x16fa0cu: goto label_16fa0c;
        case 0x16fa10u: goto label_16fa10;
        case 0x16fa14u: goto label_16fa14;
        case 0x16fa18u: goto label_16fa18;
        case 0x16fa1cu: goto label_16fa1c;
        case 0x16fa20u: goto label_16fa20;
        case 0x16fa24u: goto label_16fa24;
        case 0x16fa28u: goto label_16fa28;
        case 0x16fa2cu: goto label_16fa2c;
        case 0x16fa30u: goto label_16fa30;
        case 0x16fa34u: goto label_16fa34;
        case 0x16fa38u: goto label_16fa38;
        case 0x16fa3cu: goto label_16fa3c;
        case 0x16fa40u: goto label_16fa40;
        case 0x16fa44u: goto label_16fa44;
        case 0x16fa48u: goto label_16fa48;
        case 0x16fa4cu: goto label_16fa4c;
        case 0x16fa50u: goto label_16fa50;
        case 0x16fa54u: goto label_16fa54;
        case 0x16fa58u: goto label_16fa58;
        case 0x16fa5cu: goto label_16fa5c;
        case 0x16fa60u: goto label_16fa60;
        case 0x16fa64u: goto label_16fa64;
        case 0x16fa68u: goto label_16fa68;
        case 0x16fa6cu: goto label_16fa6c;
        case 0x16fa70u: goto label_16fa70;
        case 0x16fa74u: goto label_16fa74;
        case 0x16fa78u: goto label_16fa78;
        case 0x16fa7cu: goto label_16fa7c;
        case 0x16fa80u: goto label_16fa80;
        case 0x16fa84u: goto label_16fa84;
        case 0x16fa88u: goto label_16fa88;
        case 0x16fa8cu: goto label_16fa8c;
        case 0x16fa90u: goto label_16fa90;
        case 0x16fa94u: goto label_16fa94;
        case 0x16fa98u: goto label_16fa98;
        case 0x16fa9cu: goto label_16fa9c;
        case 0x16faa0u: goto label_16faa0;
        case 0x16faa4u: goto label_16faa4;
        case 0x16faa8u: goto label_16faa8;
        case 0x16faacu: goto label_16faac;
        case 0x16fab0u: goto label_16fab0;
        case 0x16fab4u: goto label_16fab4;
        case 0x16fab8u: goto label_16fab8;
        case 0x16fabcu: goto label_16fabc;
        case 0x16fac0u: goto label_16fac0;
        case 0x16fac4u: goto label_16fac4;
        case 0x16fac8u: goto label_16fac8;
        case 0x16faccu: goto label_16facc;
        case 0x16fad0u: goto label_16fad0;
        case 0x16fad4u: goto label_16fad4;
        case 0x16fad8u: goto label_16fad8;
        case 0x16fadcu: goto label_16fadc;
        case 0x16fae0u: goto label_16fae0;
        case 0x16fae4u: goto label_16fae4;
        case 0x16fae8u: goto label_16fae8;
        case 0x16faecu: goto label_16faec;
        case 0x16faf0u: goto label_16faf0;
        case 0x16faf4u: goto label_16faf4;
        case 0x16faf8u: goto label_16faf8;
        case 0x16fafcu: goto label_16fafc;
        case 0x16fb00u: goto label_16fb00;
        case 0x16fb04u: goto label_16fb04;
        case 0x16fb08u: goto label_16fb08;
        case 0x16fb0cu: goto label_16fb0c;
        case 0x16fb10u: goto label_16fb10;
        case 0x16fb14u: goto label_16fb14;
        case 0x16fb18u: goto label_16fb18;
        case 0x16fb1cu: goto label_16fb1c;
        case 0x16fb20u: goto label_16fb20;
        case 0x16fb24u: goto label_16fb24;
        case 0x16fb28u: goto label_16fb28;
        case 0x16fb2cu: goto label_16fb2c;
        case 0x16fb30u: goto label_16fb30;
        case 0x16fb34u: goto label_16fb34;
        case 0x16fb38u: goto label_16fb38;
        case 0x16fb3cu: goto label_16fb3c;
        case 0x16fb40u: goto label_16fb40;
        case 0x16fb44u: goto label_16fb44;
        case 0x16fb48u: goto label_16fb48;
        case 0x16fb4cu: goto label_16fb4c;
        case 0x16fb50u: goto label_16fb50;
        case 0x16fb54u: goto label_16fb54;
        case 0x16fb58u: goto label_16fb58;
        case 0x16fb5cu: goto label_16fb5c;
        case 0x16fb60u: goto label_16fb60;
        case 0x16fb64u: goto label_16fb64;
        case 0x16fb68u: goto label_16fb68;
        case 0x16fb6cu: goto label_16fb6c;
        case 0x16fb70u: goto label_16fb70;
        case 0x16fb74u: goto label_16fb74;
        case 0x16fb78u: goto label_16fb78;
        case 0x16fb7cu: goto label_16fb7c;
        case 0x16fb80u: goto label_16fb80;
        case 0x16fb84u: goto label_16fb84;
        case 0x16fb88u: goto label_16fb88;
        case 0x16fb8cu: goto label_16fb8c;
        case 0x16fb90u: goto label_16fb90;
        case 0x16fb94u: goto label_16fb94;
        case 0x16fb98u: goto label_16fb98;
        case 0x16fb9cu: goto label_16fb9c;
        case 0x16fba0u: goto label_16fba0;
        case 0x16fba4u: goto label_16fba4;
        case 0x16fba8u: goto label_16fba8;
        case 0x16fbacu: goto label_16fbac;
        case 0x16fbb0u: goto label_16fbb0;
        case 0x16fbb4u: goto label_16fbb4;
        case 0x16fbb8u: goto label_16fbb8;
        case 0x16fbbcu: goto label_16fbbc;
        case 0x16fbc0u: goto label_16fbc0;
        case 0x16fbc4u: goto label_16fbc4;
        case 0x16fbc8u: goto label_16fbc8;
        case 0x16fbccu: goto label_16fbcc;
        case 0x16fbd0u: goto label_16fbd0;
        case 0x16fbd4u: goto label_16fbd4;
        case 0x16fbd8u: goto label_16fbd8;
        case 0x16fbdcu: goto label_16fbdc;
        case 0x16fbe0u: goto label_16fbe0;
        case 0x16fbe4u: goto label_16fbe4;
        case 0x16fbe8u: goto label_16fbe8;
        case 0x16fbecu: goto label_16fbec;
        case 0x16fbf0u: goto label_16fbf0;
        case 0x16fbf4u: goto label_16fbf4;
        case 0x16fbf8u: goto label_16fbf8;
        case 0x16fbfcu: goto label_16fbfc;
        case 0x16fc00u: goto label_16fc00;
        case 0x16fc04u: goto label_16fc04;
        case 0x16fc08u: goto label_16fc08;
        case 0x16fc0cu: goto label_16fc0c;
        case 0x16fc10u: goto label_16fc10;
        case 0x16fc14u: goto label_16fc14;
        case 0x16fc18u: goto label_16fc18;
        case 0x16fc1cu: goto label_16fc1c;
        case 0x16fc20u: goto label_16fc20;
        case 0x16fc24u: goto label_16fc24;
        case 0x16fc28u: goto label_16fc28;
        case 0x16fc2cu: goto label_16fc2c;
        default: break;
    }

    ctx->pc = 0x16f290u;

label_16f290:
    // 0x16f290: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
label_16f294:
    // 0x16f294: 0x3e00008  jr          $ra
label_16f298:
    if (ctx->pc == 0x16F298u) {
        ctx->pc = 0x16F29Cu;
        goto label_16f29c;
    }
    ctx->pc = 0x16F294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F29Cu;
label_16f29c:
    // 0x16f29c: 0x0  nop
    ctx->pc = 0x16f29cu;
    // NOP
label_16f2a0:
    // 0x16f2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16f2a4:
    // 0x16f2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16f2a8:
    // 0x16f2a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16f2ac:
    // 0x16f2ac: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x16f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f2b0:
    // 0x16f2b0: 0x10030041  beq         $zero, $v1, . + 4 + (0x41 << 2)
label_16f2b4:
    if (ctx->pc == 0x16F2B4u) {
        ctx->pc = 0x16F2B8u;
        goto label_16f2b8;
    }
    ctx->pc = 0x16F2B0u;
    {
        const bool branch_taken_0x16f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f2b0) {
            ctx->pc = 0x16F3B8u;
            goto label_16f3b8;
        }
    }
    ctx->pc = 0x16F2B8u;
label_16f2b8:
    // 0x16f2b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16f2bc:
    // 0x16f2bc: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x16f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_16f2c0:
    // 0x16f2c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16f2c4:
    // 0x16f2c4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_16f2c8:
    if (ctx->pc == 0x16F2C8u) {
        ctx->pc = 0x16F2CCu;
        goto label_16f2cc;
    }
    ctx->pc = 0x16F2C4u;
    {
        const bool branch_taken_0x16f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f2c4) {
            ctx->pc = 0x16F2ECu;
            goto label_16f2ec;
        }
    }
    ctx->pc = 0x16F2CCu;
label_16f2cc:
    // 0x16f2cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16f2d0:
    // 0x16f2d0: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_16f2d4:
    // 0x16f2d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f2d8:
    // 0x16f2d8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16f2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16f2dc:
    // 0x16f2dc: 0x320f809  jalr        $t9
label_16f2e0:
    if (ctx->pc == 0x16F2E0u) {
        ctx->pc = 0x16F2E4u;
        goto label_16f2e4;
    }
    ctx->pc = 0x16F2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F2E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F2DCu, 0x16F2E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F2E4u;
label_16f2e4:
    // 0x16f2e4: 0x10000034  b           . + 4 + (0x34 << 2)
label_16f2e8:
    if (ctx->pc == 0x16F2E8u) {
        ctx->pc = 0x16F2ECu;
        goto label_16f2ec;
    }
    ctx->pc = 0x16F2E4u;
    {
        const bool branch_taken_0x16f2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2e4) {
            ctx->pc = 0x16F3B8u;
            goto label_16f3b8;
        }
    }
    ctx->pc = 0x16F2ECu;
label_16f2ec:
    // 0x16f2ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16f2f0:
    // 0x16f2f0: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x16f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_16f2f4:
    // 0x16f2f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x16f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_16f2f8:
    // 0x16f2f8: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x16f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_16f2fc:
    // 0x16f2fc: 0x40f809  jalr        $v0
label_16f300:
    if (ctx->pc == 0x16F300u) {
        ctx->pc = 0x16F304u;
        goto label_16f304;
    }
    ctx->pc = 0x16F2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F304u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F2FCu, 0x16F304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F304u;
label_16f304:
    // 0x16f304: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x16f304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_16f308:
    // 0x16f308: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x16f308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_16f30c:
    // 0x16f30c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x16f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_16f310:
    // 0x16f310: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x16f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_16f314:
    // 0x16f314: 0x40f809  jalr        $v0
label_16f318:
    if (ctx->pc == 0x16F318u) {
        ctx->pc = 0x16F31Cu;
        goto label_16f31c;
    }
    ctx->pc = 0x16F314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F31Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F314u, 0x16F31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F31Cu;
label_16f31c:
    // 0x16f31c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f320:
    // 0x16f320: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f324:
    // 0x16f324: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x16f324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_16f328:
    // 0x16f328: 0x320f809  jalr        $t9
label_16f32c:
    if (ctx->pc == 0x16F32Cu) {
        ctx->pc = 0x16F330u;
        goto label_16f330;
    }
    ctx->pc = 0x16F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F330u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F328u, 0x16F330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F330u;
label_16f330:
    // 0x16f330: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16f334:
    // 0x16f334: 0xc055a84  jal         func_156A10
label_16f338:
    if (ctx->pc == 0x16F338u) {
        ctx->pc = 0x16F33Cu;
        goto label_16f33c;
    }
    ctx->pc = 0x16F334u;
    SET_GPR_U32(ctx, 31, 0x16F33Cu);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x16F334u, 0x16F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F33Cu;
label_16f33c:
    // 0x16f33c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f340:
    // 0x16f340: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f344:
    // 0x16f344: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x16f344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_16f348:
    // 0x16f348: 0x320f809  jalr        $t9
label_16f34c:
    if (ctx->pc == 0x16F34Cu) {
        ctx->pc = 0x16F350u;
        goto label_16f350;
    }
    ctx->pc = 0x16F348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F350u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F348u, 0x16F350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F350u;
label_16f350:
    // 0x16f350: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16f354:
    // 0x16f354: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16f354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f358:
    // 0x16f358: 0xc0413bc  jal         func_104EF0
label_16f35c:
    if (ctx->pc == 0x16F35Cu) {
        ctx->pc = 0x16F360u;
        goto label_16f360;
    }
    ctx->pc = 0x16F358u;
    SET_GPR_U32(ctx, 31, 0x16F360u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x16F358u, 0x16F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F360u;
label_16f360:
    // 0x16f360: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16f364:
    // 0x16f364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f368:
    // 0x16f368: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_16f36c:
    if (ctx->pc == 0x16F36Cu) {
        ctx->pc = 0x16F370u;
        goto label_16f370;
    }
    ctx->pc = 0x16F368u;
    {
        const bool branch_taken_0x16f368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f368) {
            ctx->pc = 0x16F388u;
            goto label_16f388;
        }
    }
    ctx->pc = 0x16F370u;
label_16f370:
    // 0x16f370: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16f374:
    // 0x16f374: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16f374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f378:
    // 0x16f378: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f37c:
    // 0x16f37c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16f37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16f380:
    // 0x16f380: 0x320f809  jalr        $t9
label_16f384:
    if (ctx->pc == 0x16F384u) {
        ctx->pc = 0x16F388u;
        goto label_16f388;
    }
    ctx->pc = 0x16F380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F388u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F380u, 0x16F388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F388u;
label_16f388:
    // 0x16f388: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16f388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16f38c:
    // 0x16f38c: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x16f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_16f390:
    // 0x16f390: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x16f390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_16f394:
    // 0x16f394: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x16f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_16f398:
    // 0x16f398: 0x40f809  jalr        $v0
label_16f39c:
    if (ctx->pc == 0x16F39Cu) {
        ctx->pc = 0x16F3A0u;
        goto label_16f3a0;
    }
    ctx->pc = 0x16F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F3A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F398u, 0x16F3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F3A0u;
label_16f3a0:
    // 0x16f3a0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x16f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_16f3a4:
    // 0x16f3a4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x16f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_16f3a8:
    // 0x16f3a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x16f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_16f3ac:
    // 0x16f3ac: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x16f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_16f3b0:
    // 0x16f3b0: 0x40f809  jalr        $v0
label_16f3b4:
    if (ctx->pc == 0x16F3B4u) {
        ctx->pc = 0x16F3B8u;
        goto label_16f3b8;
    }
    ctx->pc = 0x16F3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F3B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F3B0u, 0x16F3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F3B8u;
label_16f3b8:
    // 0x16f3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f3bc:
    // 0x16f3bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16f3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16f3c0:
    // 0x16f3c0: 0x3e00008  jr          $ra
label_16f3c4:
    if (ctx->pc == 0x16F3C4u) {
        ctx->pc = 0x16F3C8u;
        goto label_16f3c8;
    }
    ctx->pc = 0x16F3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F3C8u;
label_16f3c8:
    // 0x16f3c8: 0x0  nop
    ctx->pc = 0x16f3c8u;
    // NOP
label_16f3cc:
    // 0x16f3cc: 0x0  nop
    ctx->pc = 0x16f3ccu;
    // NOP
label_16f3d0:
    // 0x16f3d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16f3d4:
    // 0x16f3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16f3d8:
    // 0x16f3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16f3dc:
    // 0x16f3dc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x16f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_16f3e0:
    // 0x16f3e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f3e4:
    // 0x16f3e4: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x16f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_16f3e8:
    // 0x16f3e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16f3ec:
    // 0x16f3ec: 0x1083020b  beq         $a0, $v1, . + 4 + (0x20B << 2)
label_16f3f0:
    if (ctx->pc == 0x16F3F0u) {
        ctx->pc = 0x16F3F4u;
        goto label_16f3f4;
    }
    ctx->pc = 0x16F3ECu;
    {
        const bool branch_taken_0x16f3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f3ec) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F3F4u;
label_16f3f4:
    // 0x16f3f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f3f8:
    // 0x16f3f8: 0xc055b3c  jal         func_156CF0
label_16f3fc:
    if (ctx->pc == 0x16F3FCu) {
        ctx->pc = 0x16F400u;
        goto label_16f400;
    }
    ctx->pc = 0x16F3F8u;
    SET_GPR_U32(ctx, 31, 0x16F400u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x16F3F8u, 0x16F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F400u;
label_16f400:
    // 0x16f400: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x16f400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16f404:
    // 0x16f404: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x16f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f408:
    // 0x16f408: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f40c:
    // 0x16f40c: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x16f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f410:
    // 0x16f410: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16f410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16f414:
    // 0x16f414: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x16f414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
label_16f418:
    // 0x16f418: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x16f418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f41c:
    // 0x16f41c: 0x8ca60070  lw          $a2, 0x70($a1)
    ctx->pc = 0x16f41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_16f420:
    // 0x16f420: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16f424:
    // 0x16f424: 0x10c301ba  beq         $a2, $v1, . + 4 + (0x1BA << 2)
label_16f428:
    if (ctx->pc == 0x16F428u) {
        ctx->pc = 0x16F42Cu;
        goto label_16f42c;
    }
    ctx->pc = 0x16F424u;
    {
        const bool branch_taken_0x16f424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f424) {
            ctx->pc = 0x16FB10u;
            goto label_16fb10;
        }
    }
    ctx->pc = 0x16F42Cu;
label_16f42c:
    // 0x16f42c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16f430:
    // 0x16f430: 0x10c40135  beq         $a2, $a0, . + 4 + (0x135 << 2)
label_16f434:
    if (ctx->pc == 0x16F434u) {
        ctx->pc = 0x16F438u;
        goto label_16f438;
    }
    ctx->pc = 0x16F430u;
    {
        const bool branch_taken_0x16f430 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x16f430) {
            ctx->pc = 0x16F908u;
            goto label_16f908;
        }
    }
    ctx->pc = 0x16F438u;
label_16f438:
    // 0x16f438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f43c:
    // 0x16f43c: 0x10c5011a  beq         $a2, $a1, . + 4 + (0x11A << 2)
label_16f440:
    if (ctx->pc == 0x16F440u) {
        ctx->pc = 0x16F444u;
        goto label_16f444;
    }
    ctx->pc = 0x16F43Cu;
    {
        const bool branch_taken_0x16f43c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x16f43c) {
            ctx->pc = 0x16F8A8u;
            goto label_16f8a8;
        }
    }
    ctx->pc = 0x16F444u;
label_16f444:
    // 0x16f444: 0x10c00053  beqz        $a2, . + 4 + (0x53 << 2)
label_16f448:
    if (ctx->pc == 0x16F448u) {
        ctx->pc = 0x16F44Cu;
        goto label_16f44c;
    }
    ctx->pc = 0x16F444u;
    {
        const bool branch_taken_0x16f444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f444) {
            ctx->pc = 0x16F594u;
            goto label_16f594;
        }
    }
    ctx->pc = 0x16F44Cu;
label_16f44c:
    // 0x16f44c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16f450:
    // 0x16f450: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_16f454:
    if (ctx->pc == 0x16F454u) {
        ctx->pc = 0x16F458u;
        goto label_16f458;
    }
    ctx->pc = 0x16F450u;
    {
        const bool branch_taken_0x16f450 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f450) {
            ctx->pc = 0x16F460u;
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F458u;
label_16f458:
    // 0x16f458: 0x100001f0  b           . + 4 + (0x1F0 << 2)
label_16f45c:
    if (ctx->pc == 0x16F45Cu) {
        ctx->pc = 0x16F460u;
        goto label_16f460;
    }
    ctx->pc = 0x16F458u;
    {
        const bool branch_taken_0x16f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f458) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F460u;
label_16f460:
    // 0x16f460: 0xa380bc5c  sb          $zero, -0x43A4($gp)
    ctx->pc = 0x16f460u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949980), (uint8_t)GPR_U32(ctx, 0));
label_16f464:
    // 0x16f464: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f468:
    // 0x16f468: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f46c:
    // 0x16f46c: 0xc0413bc  jal         func_104EF0
label_16f470:
    if (ctx->pc == 0x16F470u) {
        ctx->pc = 0x16F474u;
        goto label_16f474;
    }
    ctx->pc = 0x16F46Cu;
    SET_GPR_U32(ctx, 31, 0x16F474u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x16F46Cu, 0x16F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F474u;
label_16f474:
    // 0x16f474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16f478:
    // 0x16f478: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_16f47c:
    if (ctx->pc == 0x16F47Cu) {
        ctx->pc = 0x16F480u;
        goto label_16f480;
    }
    ctx->pc = 0x16F478u;
    {
        const bool branch_taken_0x16f478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f478) {
            ctx->pc = 0x16F558u;
            goto label_16f558;
        }
    }
    ctx->pc = 0x16F480u;
label_16f480:
    // 0x16f480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16f484:
    // 0x16f484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f488:
    // 0x16f488: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f48c:
    // 0x16f48c: 0x27858f80  addiu       $a1, $gp, -0x7080
    ctx->pc = 0x16f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938496));
label_16f490:
    // 0x16f490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f494:
    // 0x16f494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f498:
    // 0x16f498: 0xc08f6a0  jal         func_23DA80
label_16f49c:
    if (ctx->pc == 0x16F49Cu) {
        ctx->pc = 0x16F4A0u;
        goto label_16f4a0;
    }
    ctx->pc = 0x16F498u;
    SET_GPR_U32(ctx, 31, 0x16F4A0u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F498u, 0x16F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F4A0u;
label_16f4a0:
    // 0x16f4a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f4a4:
    // 0x16f4a4: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f4a8:
    // 0x16f4a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f4ac:
    // 0x16f4ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16f4acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16f4b0:
    // 0x16f4b0: 0x320f809  jalr        $t9
label_16f4b4:
    if (ctx->pc == 0x16F4B4u) {
        ctx->pc = 0x16F4B8u;
        goto label_16f4b8;
    }
    ctx->pc = 0x16F4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F4B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F4B0u, 0x16F4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F4B8u;
label_16f4b8:
    // 0x16f4b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f4bc:
    // 0x16f4bc: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f4c0:
    // 0x16f4c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f4c4:
    // 0x16f4c4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16f4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16f4c8:
    // 0x16f4c8: 0x320f809  jalr        $t9
label_16f4cc:
    if (ctx->pc == 0x16F4CCu) {
        ctx->pc = 0x16F4D0u;
        goto label_16f4d0;
    }
    ctx->pc = 0x16F4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F4D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F4C8u, 0x16F4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F4D0u;
label_16f4d0:
    // 0x16f4d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f4d4:
    // 0x16f4d4: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f4d8:
    // 0x16f4d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16f4dc:
    // 0x16f4dc: 0x24a544e0  addiu       $a1, $a1, 0x44E0
    ctx->pc = 0x16f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17632));
label_16f4e0:
    // 0x16f4e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f4e4:
    // 0x16f4e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x16f4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_16f4e8:
    // 0x16f4e8: 0x320f809  jalr        $t9
label_16f4ec:
    if (ctx->pc == 0x16F4ECu) {
        ctx->pc = 0x16F4F0u;
        goto label_16f4f0;
    }
    ctx->pc = 0x16F4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F4F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F4E8u, 0x16F4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F4F0u;
label_16f4f0:
    // 0x16f4f0: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f4f4:
    // 0x16f4f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f4f8:
    // 0x16f4f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f4fc:
    // 0x16f4fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f500:
    // 0x16f500: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x16f500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_16f504:
    // 0x16f504: 0x320f809  jalr        $t9
label_16f508:
    if (ctx->pc == 0x16F508u) {
        ctx->pc = 0x16F50Cu;
        goto label_16f50c;
    }
    ctx->pc = 0x16F504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F50Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F504u, 0x16F50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F50Cu;
label_16f50c:
    // 0x16f50c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f510:
    // 0x16f510: 0xc05c048  jal         func_170120
label_16f514:
    if (ctx->pc == 0x16F514u) {
        ctx->pc = 0x16F518u;
        goto label_16f518;
    }
    ctx->pc = 0x16F510u;
    SET_GPR_U32(ctx, 31, 0x16F518u);
    ctx->pc = 0x170120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170120u, 0x16F510u, 0x16F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F518u;
label_16f518:
    // 0x16f518: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f51c:
    // 0x16f51c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f520:
    // 0x16f520: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f524:
    // 0x16f524: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f528:
    // 0x16f528: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16f528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16f52c:
    // 0x16f52c: 0x320f809  jalr        $t9
label_16f530:
    if (ctx->pc == 0x16F530u) {
        ctx->pc = 0x16F534u;
        goto label_16f534;
    }
    ctx->pc = 0x16F52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F534u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F52Cu, 0x16F534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F534u;
label_16f534:
    // 0x16f534: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x16f534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_16f538:
    // 0x16f538: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16f538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16f53c:
    // 0x16f53c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f540:
    // 0x16f540: 0xc04fbf8  jal         func_13EFE0
label_16f544:
    if (ctx->pc == 0x16F544u) {
        ctx->pc = 0x16F548u;
        goto label_16f548;
    }
    ctx->pc = 0x16F540u;
    SET_GPR_U32(ctx, 31, 0x16F548u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x16F540u, 0x16F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F548u;
label_16f548:
    // 0x16f548: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x16f548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
label_16f54c:
    // 0x16f54c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16f54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16f550:
    // 0x16f550: 0xc04c608  jal         func_131820
label_16f554:
    if (ctx->pc == 0x16F554u) {
        ctx->pc = 0x16F558u;
        goto label_16f558;
    }
    ctx->pc = 0x16F550u;
    SET_GPR_U32(ctx, 31, 0x16F558u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x16F550u, 0x16F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F558u;
label_16f558:
    // 0x16f558: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f55c:
    // 0x16f55c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f560:
    // 0x16f560: 0x8c4500c4  lw          $a1, 0xC4($v0)
    ctx->pc = 0x16f560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f564:
    // 0x16f564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f568:
    // 0x16f568: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x16f568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_16f56c:
    // 0x16f56c: 0x320f809  jalr        $t9
label_16f570:
    if (ctx->pc == 0x16F570u) {
        ctx->pc = 0x16F574u;
        goto label_16f574;
    }
    ctx->pc = 0x16F56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F574u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F56Cu, 0x16F574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F574u;
label_16f574:
    // 0x16f574: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f578:
    // 0x16f578: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16f578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f57c:
    // 0x16f57c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f580:
    // 0x16f580: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x16f580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_16f584:
    // 0x16f584: 0x320f809  jalr        $t9
label_16f588:
    if (ctx->pc == 0x16F588u) {
        ctx->pc = 0x16F58Cu;
        goto label_16f58c;
    }
    ctx->pc = 0x16F584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F58Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F584u, 0x16F58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F58Cu;
label_16f58c:
    // 0x16f58c: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_16f590:
    if (ctx->pc == 0x16F590u) {
        ctx->pc = 0x16F594u;
        goto label_16f594;
    }
    ctx->pc = 0x16F58Cu;
    {
        const bool branch_taken_0x16f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f58c) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F594u;
label_16f594:
    // 0x16f594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f598:
    // 0x16f598: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f59c:
    // 0x16f59c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x16f59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_16f5a0:
    // 0x16f5a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f5a4:
    // 0x16f5a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f5a8:
    // 0x16f5a8: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x16f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
label_16f5ac:
    // 0x16f5ac: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f5b0:
    // 0x16f5b0: 0x27858f88  addiu       $a1, $gp, -0x7078
    ctx->pc = 0x16f5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938504));
label_16f5b4:
    // 0x16f5b4: 0xc064d48  jal         func_193520
label_16f5b8:
    if (ctx->pc == 0x16F5B8u) {
        ctx->pc = 0x16F5BCu;
        goto label_16f5bc;
    }
    ctx->pc = 0x16F5B4u;
    SET_GPR_U32(ctx, 31, 0x16F5BCu);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x16F5B4u, 0x16F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5BCu;
label_16f5bc:
    // 0x16f5bc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x16f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16f5c0:
    // 0x16f5c0: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x16f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16f5c4:
    // 0x16f5c4: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x16f5c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_16f5c8:
    // 0x16f5c8: 0x102000b0  beqz        $at, . + 4 + (0xB0 << 2)
label_16f5cc:
    if (ctx->pc == 0x16F5CCu) {
        ctx->pc = 0x16F5D0u;
        goto label_16f5d0;
    }
    ctx->pc = 0x16F5C8u;
    {
        const bool branch_taken_0x16f5c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f5c8) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F5D0u;
label_16f5d0:
    // 0x16f5d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_16f5d4:
    // 0x16f5d4: 0x246385b0  addiu       $v1, $v1, -0x7A50
    ctx->pc = 0x16f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935984));
label_16f5d8:
    // 0x16f5d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16f5dc:
    // 0x16f5dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16f5e0:
    // 0x16f5e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16f5e4:
    // 0x16f5e4: 0x400008  jr          $v0
label_16f5e8:
    if (ctx->pc == 0x16F5E8u) {
        ctx->pc = 0x16F5ECu;
        goto label_16f5ec;
    }
    ctx->pc = 0x16F5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F5ECu: goto label_16f5ec;
            case 0x16F614u: goto label_16f614;
            case 0x16F63Cu: goto label_16f63c;
            case 0x16F664u: goto label_16f664;
            case 0x16F68Cu: goto label_16f68c;
            case 0x16F6B4u: goto label_16f6b4;
            case 0x16F6DCu: goto label_16f6dc;
            case 0x16F704u: goto label_16f704;
            case 0x16F72Cu: goto label_16f72c;
            case 0x16F754u: goto label_16f754;
            case 0x16F77Cu: goto label_16f77c;
            case 0x16F7A4u: goto label_16f7a4;
            case 0x16F7CCu: goto label_16f7cc;
            case 0x16F7F4u: goto label_16f7f4;
            case 0x16F81Cu: goto label_16f81c;
            case 0x16F844u: goto label_16f844;
            case 0x16F86Cu: goto label_16f86c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F5E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16F5ECu;
label_16f5ec:
    // 0x16f5ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f5f0:
    // 0x16f5f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f5f4:
    // 0x16f5f4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f5f8:
    // 0x16f5f8: 0x27858f90  addiu       $a1, $gp, -0x7070
    ctx->pc = 0x16f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938512));
label_16f5fc:
    // 0x16f5fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f600:
    // 0x16f600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f604:
    // 0x16f604: 0xc08f6a0  jal         func_23DA80
label_16f608:
    if (ctx->pc == 0x16F608u) {
        ctx->pc = 0x16F60Cu;
        goto label_16f60c;
    }
    ctx->pc = 0x16F604u;
    SET_GPR_U32(ctx, 31, 0x16F60Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F604u, 0x16F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F60Cu;
label_16f60c:
    // 0x16f60c: 0x1000009f  b           . + 4 + (0x9F << 2)
label_16f610:
    if (ctx->pc == 0x16F610u) {
        ctx->pc = 0x16F614u;
        goto label_16f614;
    }
    ctx->pc = 0x16F60Cu;
    {
        const bool branch_taken_0x16f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f60c) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F614u;
label_16f614:
    // 0x16f614: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f618:
    // 0x16f618: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f61c:
    // 0x16f61c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f620:
    // 0x16f620: 0x27858f98  addiu       $a1, $gp, -0x7068
    ctx->pc = 0x16f620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938520));
label_16f624:
    // 0x16f624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f628:
    // 0x16f628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f62c:
    // 0x16f62c: 0xc08f6a0  jal         func_23DA80
label_16f630:
    if (ctx->pc == 0x16F630u) {
        ctx->pc = 0x16F634u;
        goto label_16f634;
    }
    ctx->pc = 0x16F62Cu;
    SET_GPR_U32(ctx, 31, 0x16F634u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F62Cu, 0x16F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F634u;
label_16f634:
    // 0x16f634: 0x10000095  b           . + 4 + (0x95 << 2)
label_16f638:
    if (ctx->pc == 0x16F638u) {
        ctx->pc = 0x16F63Cu;
        goto label_16f63c;
    }
    ctx->pc = 0x16F634u;
    {
        const bool branch_taken_0x16f634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f634) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F63Cu;
label_16f63c:
    // 0x16f63c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f640:
    // 0x16f640: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f644:
    // 0x16f644: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f648:
    // 0x16f648: 0x27858fa0  addiu       $a1, $gp, -0x7060
    ctx->pc = 0x16f648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938528));
label_16f64c:
    // 0x16f64c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f650:
    // 0x16f650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f654:
    // 0x16f654: 0xc08f6a0  jal         func_23DA80
label_16f658:
    if (ctx->pc == 0x16F658u) {
        ctx->pc = 0x16F65Cu;
        goto label_16f65c;
    }
    ctx->pc = 0x16F654u;
    SET_GPR_U32(ctx, 31, 0x16F65Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F654u, 0x16F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F65Cu;
label_16f65c:
    // 0x16f65c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_16f660:
    if (ctx->pc == 0x16F660u) {
        ctx->pc = 0x16F664u;
        goto label_16f664;
    }
    ctx->pc = 0x16F65Cu;
    {
        const bool branch_taken_0x16f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f65c) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F664u;
label_16f664:
    // 0x16f664: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f668:
    // 0x16f668: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f66c:
    // 0x16f66c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f670:
    // 0x16f670: 0x27858fa8  addiu       $a1, $gp, -0x7058
    ctx->pc = 0x16f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938536));
label_16f674:
    // 0x16f674: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f678:
    // 0x16f678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f67c:
    // 0x16f67c: 0xc08f6a0  jal         func_23DA80
label_16f680:
    if (ctx->pc == 0x16F680u) {
        ctx->pc = 0x16F684u;
        goto label_16f684;
    }
    ctx->pc = 0x16F67Cu;
    SET_GPR_U32(ctx, 31, 0x16F684u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F67Cu, 0x16F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F684u;
label_16f684:
    // 0x16f684: 0x10000081  b           . + 4 + (0x81 << 2)
label_16f688:
    if (ctx->pc == 0x16F688u) {
        ctx->pc = 0x16F68Cu;
        goto label_16f68c;
    }
    ctx->pc = 0x16F684u;
    {
        const bool branch_taken_0x16f684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f684) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F68Cu;
label_16f68c:
    // 0x16f68c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f690:
    // 0x16f690: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f694:
    // 0x16f694: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f698:
    // 0x16f698: 0x27858fb0  addiu       $a1, $gp, -0x7050
    ctx->pc = 0x16f698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938544));
label_16f69c:
    // 0x16f69c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f6a0:
    // 0x16f6a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f6a4:
    // 0x16f6a4: 0xc08f6a0  jal         func_23DA80
label_16f6a8:
    if (ctx->pc == 0x16F6A8u) {
        ctx->pc = 0x16F6ACu;
        goto label_16f6ac;
    }
    ctx->pc = 0x16F6A4u;
    SET_GPR_U32(ctx, 31, 0x16F6ACu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F6A4u, 0x16F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6ACu;
label_16f6ac:
    // 0x16f6ac: 0x10000077  b           . + 4 + (0x77 << 2)
label_16f6b0:
    if (ctx->pc == 0x16F6B0u) {
        ctx->pc = 0x16F6B4u;
        goto label_16f6b4;
    }
    ctx->pc = 0x16F6ACu;
    {
        const bool branch_taken_0x16f6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f6ac) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F6B4u;
label_16f6b4:
    // 0x16f6b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f6b8:
    // 0x16f6b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f6bc:
    // 0x16f6bc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f6c0:
    // 0x16f6c0: 0x27858fb8  addiu       $a1, $gp, -0x7048
    ctx->pc = 0x16f6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938552));
label_16f6c4:
    // 0x16f6c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f6c8:
    // 0x16f6c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f6cc:
    // 0x16f6cc: 0xc08f6a0  jal         func_23DA80
label_16f6d0:
    if (ctx->pc == 0x16F6D0u) {
        ctx->pc = 0x16F6D4u;
        goto label_16f6d4;
    }
    ctx->pc = 0x16F6CCu;
    SET_GPR_U32(ctx, 31, 0x16F6D4u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F6CCu, 0x16F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6D4u;
label_16f6d4:
    // 0x16f6d4: 0x1000006d  b           . + 4 + (0x6D << 2)
label_16f6d8:
    if (ctx->pc == 0x16F6D8u) {
        ctx->pc = 0x16F6DCu;
        goto label_16f6dc;
    }
    ctx->pc = 0x16F6D4u;
    {
        const bool branch_taken_0x16f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f6d4) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F6DCu;
label_16f6dc:
    // 0x16f6dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f6e0:
    // 0x16f6e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f6e4:
    // 0x16f6e4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f6e8:
    // 0x16f6e8: 0x27858fc0  addiu       $a1, $gp, -0x7040
    ctx->pc = 0x16f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938560));
label_16f6ec:
    // 0x16f6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f6f0:
    // 0x16f6f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f6f4:
    // 0x16f6f4: 0xc08f6a0  jal         func_23DA80
label_16f6f8:
    if (ctx->pc == 0x16F6F8u) {
        ctx->pc = 0x16F6FCu;
        goto label_16f6fc;
    }
    ctx->pc = 0x16F6F4u;
    SET_GPR_U32(ctx, 31, 0x16F6FCu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F6F4u, 0x16F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6FCu;
label_16f6fc:
    // 0x16f6fc: 0x10000063  b           . + 4 + (0x63 << 2)
label_16f700:
    if (ctx->pc == 0x16F700u) {
        ctx->pc = 0x16F704u;
        goto label_16f704;
    }
    ctx->pc = 0x16F6FCu;
    {
        const bool branch_taken_0x16f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f6fc) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F704u;
label_16f704:
    // 0x16f704: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f708:
    // 0x16f708: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f70c:
    // 0x16f70c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f710:
    // 0x16f710: 0x27858fc8  addiu       $a1, $gp, -0x7038
    ctx->pc = 0x16f710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938568));
label_16f714:
    // 0x16f714: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f718:
    // 0x16f718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f71c:
    // 0x16f71c: 0xc08f6a0  jal         func_23DA80
label_16f720:
    if (ctx->pc == 0x16F720u) {
        ctx->pc = 0x16F724u;
        goto label_16f724;
    }
    ctx->pc = 0x16F71Cu;
    SET_GPR_U32(ctx, 31, 0x16F724u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F71Cu, 0x16F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F724u;
label_16f724:
    // 0x16f724: 0x10000059  b           . + 4 + (0x59 << 2)
label_16f728:
    if (ctx->pc == 0x16F728u) {
        ctx->pc = 0x16F72Cu;
        goto label_16f72c;
    }
    ctx->pc = 0x16F724u;
    {
        const bool branch_taken_0x16f724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f724) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F72Cu;
label_16f72c:
    // 0x16f72c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f730:
    // 0x16f730: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f734:
    // 0x16f734: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f738:
    // 0x16f738: 0x27858fd0  addiu       $a1, $gp, -0x7030
    ctx->pc = 0x16f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938576));
label_16f73c:
    // 0x16f73c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f740:
    // 0x16f740: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f744:
    // 0x16f744: 0xc08f6a0  jal         func_23DA80
label_16f748:
    if (ctx->pc == 0x16F748u) {
        ctx->pc = 0x16F74Cu;
        goto label_16f74c;
    }
    ctx->pc = 0x16F744u;
    SET_GPR_U32(ctx, 31, 0x16F74Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F744u, 0x16F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F74Cu;
label_16f74c:
    // 0x16f74c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_16f750:
    if (ctx->pc == 0x16F750u) {
        ctx->pc = 0x16F754u;
        goto label_16f754;
    }
    ctx->pc = 0x16F74Cu;
    {
        const bool branch_taken_0x16f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f74c) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F754u;
label_16f754:
    // 0x16f754: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f758:
    // 0x16f758: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f75c:
    // 0x16f75c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f760:
    // 0x16f760: 0x27858fd8  addiu       $a1, $gp, -0x7028
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938584));
label_16f764:
    // 0x16f764: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f768:
    // 0x16f768: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f76c:
    // 0x16f76c: 0xc08f6a0  jal         func_23DA80
label_16f770:
    if (ctx->pc == 0x16F770u) {
        ctx->pc = 0x16F774u;
        goto label_16f774;
    }
    ctx->pc = 0x16F76Cu;
    SET_GPR_U32(ctx, 31, 0x16F774u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F76Cu, 0x16F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F774u;
label_16f774:
    // 0x16f774: 0x10000045  b           . + 4 + (0x45 << 2)
label_16f778:
    if (ctx->pc == 0x16F778u) {
        ctx->pc = 0x16F77Cu;
        goto label_16f77c;
    }
    ctx->pc = 0x16F774u;
    {
        const bool branch_taken_0x16f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f774) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F77Cu;
label_16f77c:
    // 0x16f77c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f780:
    // 0x16f780: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f784:
    // 0x16f784: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f788:
    // 0x16f788: 0x27858fe0  addiu       $a1, $gp, -0x7020
    ctx->pc = 0x16f788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938592));
label_16f78c:
    // 0x16f78c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f790:
    // 0x16f790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f794:
    // 0x16f794: 0xc08f6a0  jal         func_23DA80
label_16f798:
    if (ctx->pc == 0x16F798u) {
        ctx->pc = 0x16F79Cu;
        goto label_16f79c;
    }
    ctx->pc = 0x16F794u;
    SET_GPR_U32(ctx, 31, 0x16F79Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F794u, 0x16F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F79Cu;
label_16f79c:
    // 0x16f79c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_16f7a0:
    if (ctx->pc == 0x16F7A0u) {
        ctx->pc = 0x16F7A4u;
        goto label_16f7a4;
    }
    ctx->pc = 0x16F79Cu;
    {
        const bool branch_taken_0x16f79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f79c) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F7A4u;
label_16f7a4:
    // 0x16f7a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f7a8:
    // 0x16f7a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f7ac:
    // 0x16f7ac: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f7b0:
    // 0x16f7b0: 0x27858fe8  addiu       $a1, $gp, -0x7018
    ctx->pc = 0x16f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938600));
label_16f7b4:
    // 0x16f7b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f7b8:
    // 0x16f7b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f7bc:
    // 0x16f7bc: 0xc08f6a0  jal         func_23DA80
label_16f7c0:
    if (ctx->pc == 0x16F7C0u) {
        ctx->pc = 0x16F7C4u;
        goto label_16f7c4;
    }
    ctx->pc = 0x16F7BCu;
    SET_GPR_U32(ctx, 31, 0x16F7C4u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F7BCu, 0x16F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7C4u;
label_16f7c4:
    // 0x16f7c4: 0x10000031  b           . + 4 + (0x31 << 2)
label_16f7c8:
    if (ctx->pc == 0x16F7C8u) {
        ctx->pc = 0x16F7CCu;
        goto label_16f7cc;
    }
    ctx->pc = 0x16F7C4u;
    {
        const bool branch_taken_0x16f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f7c4) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F7CCu;
label_16f7cc:
    // 0x16f7cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f7d0:
    // 0x16f7d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f7d4:
    // 0x16f7d4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f7d8:
    // 0x16f7d8: 0x27858ff0  addiu       $a1, $gp, -0x7010
    ctx->pc = 0x16f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938608));
label_16f7dc:
    // 0x16f7dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f7e0:
    // 0x16f7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f7e4:
    // 0x16f7e4: 0xc08f6a0  jal         func_23DA80
label_16f7e8:
    if (ctx->pc == 0x16F7E8u) {
        ctx->pc = 0x16F7ECu;
        goto label_16f7ec;
    }
    ctx->pc = 0x16F7E4u;
    SET_GPR_U32(ctx, 31, 0x16F7ECu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F7E4u, 0x16F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7ECu;
label_16f7ec:
    // 0x16f7ec: 0x10000027  b           . + 4 + (0x27 << 2)
label_16f7f0:
    if (ctx->pc == 0x16F7F0u) {
        ctx->pc = 0x16F7F4u;
        goto label_16f7f4;
    }
    ctx->pc = 0x16F7ECu;
    {
        const bool branch_taken_0x16f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f7ec) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F7F4u;
label_16f7f4:
    // 0x16f7f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f7f8:
    // 0x16f7f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f7fc:
    // 0x16f7fc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f800:
    // 0x16f800: 0x27858ff8  addiu       $a1, $gp, -0x7008
    ctx->pc = 0x16f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938616));
label_16f804:
    // 0x16f804: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f808:
    // 0x16f808: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f80c:
    // 0x16f80c: 0xc08f6a0  jal         func_23DA80
label_16f810:
    if (ctx->pc == 0x16F810u) {
        ctx->pc = 0x16F814u;
        goto label_16f814;
    }
    ctx->pc = 0x16F80Cu;
    SET_GPR_U32(ctx, 31, 0x16F814u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F80Cu, 0x16F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F814u;
label_16f814:
    // 0x16f814: 0x1000001d  b           . + 4 + (0x1D << 2)
label_16f818:
    if (ctx->pc == 0x16F818u) {
        ctx->pc = 0x16F81Cu;
        goto label_16f81c;
    }
    ctx->pc = 0x16F814u;
    {
        const bool branch_taken_0x16f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f814) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F81Cu;
label_16f81c:
    // 0x16f81c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f820:
    // 0x16f820: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f824:
    // 0x16f824: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f828:
    // 0x16f828: 0x27859000  addiu       $a1, $gp, -0x7000
    ctx->pc = 0x16f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
label_16f82c:
    // 0x16f82c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f830:
    // 0x16f830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f834:
    // 0x16f834: 0xc08f6a0  jal         func_23DA80
label_16f838:
    if (ctx->pc == 0x16F838u) {
        ctx->pc = 0x16F83Cu;
        goto label_16f83c;
    }
    ctx->pc = 0x16F834u;
    SET_GPR_U32(ctx, 31, 0x16F83Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F834u, 0x16F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F83Cu;
label_16f83c:
    // 0x16f83c: 0x10000013  b           . + 4 + (0x13 << 2)
label_16f840:
    if (ctx->pc == 0x16F840u) {
        ctx->pc = 0x16F844u;
        goto label_16f844;
    }
    ctx->pc = 0x16F83Cu;
    {
        const bool branch_taken_0x16f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f83c) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F844u;
label_16f844:
    // 0x16f844: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f848:
    // 0x16f848: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f84c:
    // 0x16f84c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f850:
    // 0x16f850: 0x27859008  addiu       $a1, $gp, -0x6FF8
    ctx->pc = 0x16f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938632));
label_16f854:
    // 0x16f854: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f858:
    // 0x16f858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f85c:
    // 0x16f85c: 0xc08f6a0  jal         func_23DA80
label_16f860:
    if (ctx->pc == 0x16F860u) {
        ctx->pc = 0x16F864u;
        goto label_16f864;
    }
    ctx->pc = 0x16F85Cu;
    SET_GPR_U32(ctx, 31, 0x16F864u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F85Cu, 0x16F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F864u;
label_16f864:
    // 0x16f864: 0x10000009  b           . + 4 + (0x9 << 2)
label_16f868:
    if (ctx->pc == 0x16F868u) {
        ctx->pc = 0x16F86Cu;
        goto label_16f86c;
    }
    ctx->pc = 0x16F864u;
    {
        const bool branch_taken_0x16f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f864) {
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F86Cu;
label_16f86c:
    // 0x16f86c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16f870:
    // 0x16f870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f874:
    // 0x16f874: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16f874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16f878:
    // 0x16f878: 0x27859010  addiu       $a1, $gp, -0x6FF0
    ctx->pc = 0x16f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938640));
label_16f87c:
    // 0x16f87c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f880:
    // 0x16f880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f884:
    // 0x16f884: 0xc08f6a0  jal         func_23DA80
label_16f888:
    if (ctx->pc == 0x16F888u) {
        ctx->pc = 0x16F88Cu;
        goto label_16f88c;
    }
    ctx->pc = 0x16F884u;
    SET_GPR_U32(ctx, 31, 0x16F88Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16F884u, 0x16F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F88Cu;
label_16f88c:
    // 0x16f88c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f890:
    // 0x16f890: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f894:
    // 0x16f894: 0x8f3900a8  lw          $t9, 0xA8($t9)
    ctx->pc = 0x16f894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 168)));
label_16f898:
    // 0x16f898: 0x320f809  jalr        $t9
label_16f89c:
    if (ctx->pc == 0x16F89Cu) {
        ctx->pc = 0x16F8A0u;
        goto label_16f8a0;
    }
    ctx->pc = 0x16F898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F8A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F898u, 0x16F8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F8A0u;
label_16f8a0:
    // 0x16f8a0: 0x100000de  b           . + 4 + (0xDE << 2)
label_16f8a4:
    if (ctx->pc == 0x16F8A4u) {
        ctx->pc = 0x16F8A8u;
        goto label_16f8a8;
    }
    ctx->pc = 0x16F8A0u;
    {
        const bool branch_taken_0x16f8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f8a0) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F8A8u;
label_16f8a8:
    // 0x16f8a8: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f8ac:
    // 0x16f8ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f8b0:
    // 0x16f8b0: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x16f8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_16f8b4:
    // 0x16f8b4: 0x320f809  jalr        $t9
label_16f8b8:
    if (ctx->pc == 0x16F8B8u) {
        ctx->pc = 0x16F8BCu;
        goto label_16f8bc;
    }
    ctx->pc = 0x16F8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F8BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F8B4u, 0x16F8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F8BCu;
label_16f8bc:
    // 0x16f8bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16f8c0:
    // 0x16f8c0: 0x146000d6  bnez        $v1, . + 4 + (0xD6 << 2)
label_16f8c4:
    if (ctx->pc == 0x16F8C4u) {
        ctx->pc = 0x16F8C8u;
        goto label_16f8c8;
    }
    ctx->pc = 0x16F8C0u;
    {
        const bool branch_taken_0x16f8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f8c0) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F8C8u;
label_16f8c8:
    // 0x16f8c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f8cc:
    // 0x16f8cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f8d0:
    // 0x16f8d0: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x16f8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_16f8d4:
    // 0x16f8d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16f8d8:
    // 0x16f8d8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f8dc:
    // 0x16f8dc: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x16f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
label_16f8e0:
    // 0x16f8e0: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f8e4:
    // 0x16f8e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16f8e8:
    // 0x16f8e8: 0x24a54510  addiu       $a1, $a1, 0x4510
    ctx->pc = 0x16f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17680));
label_16f8ec:
    // 0x16f8ec: 0xc064d48  jal         func_193520
label_16f8f0:
    if (ctx->pc == 0x16F8F0u) {
        ctx->pc = 0x16F8F4u;
        goto label_16f8f4;
    }
    ctx->pc = 0x16F8ECu;
    SET_GPR_U32(ctx, 31, 0x16F8F4u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x16F8ECu, 0x16F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8F4u;
label_16f8f4:
    // 0x16f8f4: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f8f8:
    // 0x16f8f8: 0xc064e00  jal         func_193800
label_16f8fc:
    if (ctx->pc == 0x16F8FCu) {
        ctx->pc = 0x16F900u;
        goto label_16f900;
    }
    ctx->pc = 0x16F8F8u;
    SET_GPR_U32(ctx, 31, 0x16F900u);
    ctx->pc = 0x193800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193800u, 0x16F8F8u, 0x16F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F900u;
label_16f900:
    // 0x16f900: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_16f904:
    if (ctx->pc == 0x16F904u) {
        ctx->pc = 0x16F908u;
        goto label_16f908;
    }
    ctx->pc = 0x16F900u;
    {
        const bool branch_taken_0x16f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f900) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F908u;
label_16f908:
    // 0x16f908: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f90c:
    // 0x16f90c: 0xc064d5c  jal         func_193570
label_16f910:
    if (ctx->pc == 0x16F910u) {
        ctx->pc = 0x16F914u;
        goto label_16f914;
    }
    ctx->pc = 0x16F90Cu;
    SET_GPR_U32(ctx, 31, 0x16F914u);
    ctx->pc = 0x193570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193570u, 0x16F90Cu, 0x16F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F914u;
label_16f914:
    // 0x16f914: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x16f914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f918:
    // 0x16f918: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x16f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f91c:
    // 0x16f91c: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x16f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f920:
    // 0x16f920: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x16f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f924:
    // 0x16f924: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16f924u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f928:
    // 0x16f928: 0x450000bc  bc1f        . + 4 + (0xBC << 2)
label_16f92c:
    if (ctx->pc == 0x16F92Cu) {
        ctx->pc = 0x16F930u;
        goto label_16f930;
    }
    ctx->pc = 0x16F928u;
    {
        const bool branch_taken_0x16f928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f928) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F930u;
label_16f930:
    // 0x16f930: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16f930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f934:
    // 0x16f934: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x16f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f938:
    // 0x16f938: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16f938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16f93c:
    // 0x16f93c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16f93cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f940:
    // 0x16f940: 0x0  nop
    ctx->pc = 0x16f940u;
    // NOP
label_16f944:
    // 0x16f944: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f948:
    // 0x16f948: 0x450000b4  bc1f        . + 4 + (0xB4 << 2)
label_16f94c:
    if (ctx->pc == 0x16F94Cu) {
        ctx->pc = 0x16F950u;
        goto label_16f950;
    }
    ctx->pc = 0x16F948u;
    {
        const bool branch_taken_0x16f948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f948) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F950u;
label_16f950:
    // 0x16f950: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x16f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f954:
    // 0x16f954: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x16f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f958:
    // 0x16f958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f95c:
    // 0x16f95c: 0x0  nop
    ctx->pc = 0x16f95cu;
    // NOP
label_16f960:
    // 0x16f960: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f964:
    // 0x16f964: 0x450100ad  bc1t        . + 4 + (0xAD << 2)
label_16f968:
    if (ctx->pc == 0x16F968u) {
        ctx->pc = 0x16F96Cu;
        goto label_16f96c;
    }
    ctx->pc = 0x16F964u;
    {
        const bool branch_taken_0x16f964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f964) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F96Cu;
label_16f96c:
    // 0x16f96c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16f970:
    // 0x16f970: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f974:
    // 0x16f974: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x16f974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
label_16f978:
    // 0x16f978: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f97c:
    // 0x16f97c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f980:
    // 0x16f980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f984:
    // 0x16f984: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f988:
    // 0x16f988: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x16f988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_16f98c:
    // 0x16f98c: 0x320f809  jalr        $t9
label_16f990:
    if (ctx->pc == 0x16F990u) {
        ctx->pc = 0x16F994u;
        goto label_16f994;
    }
    ctx->pc = 0x16F98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F994u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F98Cu, 0x16F994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F994u;
label_16f994:
    // 0x16f994: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16f994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16f998:
    // 0x16f998: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16f998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16f99c:
    // 0x16f99c: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x16f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
label_16f9a0:
    // 0x16f9a0: 0x8f83bad4  lw          $v1, -0x452C($gp)
    ctx->pc = 0x16f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f9a4:
    // 0x16f9a4: 0x1003009d  beq         $zero, $v1, . + 4 + (0x9D << 2)
label_16f9a8:
    if (ctx->pc == 0x16F9A8u) {
        ctx->pc = 0x16F9ACu;
        goto label_16f9ac;
    }
    ctx->pc = 0x16F9A4u;
    {
        const bool branch_taken_0x16f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f9a4) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16F9ACu;
label_16f9ac:
    // 0x16f9ac: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x16f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_16f9b0:
    // 0x16f9b0: 0xc050ed8  jal         func_143B60
label_16f9b4:
    if (ctx->pc == 0x16F9B4u) {
        ctx->pc = 0x16F9B8u;
        goto label_16f9b8;
    }
    ctx->pc = 0x16F9B0u;
    SET_GPR_U32(ctx, 31, 0x16F9B8u);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x16F9B0u, 0x16F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9B8u;
label_16f9b8:
    // 0x16f9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f9bc:
    // 0x16f9bc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x16f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16f9c0:
    // 0x16f9c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16f9c4:
    // 0x16f9c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16f9c8:
    // 0x16f9c8: 0x24a54520  addiu       $a1, $a1, 0x4520
    ctx->pc = 0x16f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17696));
label_16f9cc:
    // 0x16f9cc: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x16f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16f9d0:
    // 0x16f9d0: 0xc0bc3e2  jal         func_2F0F88
label_16f9d4:
    if (ctx->pc == 0x16F9D4u) {
        ctx->pc = 0x16F9D8u;
        goto label_16f9d8;
    }
    ctx->pc = 0x16F9D0u;
    SET_GPR_U32(ctx, 31, 0x16F9D8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16F9D0u, 0x16F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9D8u;
label_16f9d8:
    // 0x16f9d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16f9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f9dc:
    // 0x16f9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f9e0:
    // 0x16f9e0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16f9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16f9e4:
    // 0x16f9e4: 0xc049b6c  jal         func_126DB0
label_16f9e8:
    if (ctx->pc == 0x16F9E8u) {
        ctx->pc = 0x16F9ECu;
        goto label_16f9ec;
    }
    ctx->pc = 0x16F9E4u;
    SET_GPR_U32(ctx, 31, 0x16F9ECu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x16F9E4u, 0x16F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9ECu;
label_16f9ec:
    // 0x16f9ec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x16f9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_16f9f0:
    // 0x16f9f0: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16f9f4:
    // 0x16f9f4: 0xc064e68  jal         func_1939A0
label_16f9f8:
    if (ctx->pc == 0x16F9F8u) {
        ctx->pc = 0x16F9FCu;
        goto label_16f9fc;
    }
    ctx->pc = 0x16F9F4u;
    SET_GPR_U32(ctx, 31, 0x16F9FCu);
    ctx->pc = 0x1939A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1939A0u, 0x16F9F4u, 0x16F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9FCu;
label_16f9fc:
    // 0x16f9fc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x16f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16fa00:
    // 0x16fa00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16fa00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fa04:
    // 0x16fa04: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_16fa08:
    if (ctx->pc == 0x16FA08u) {
        ctx->pc = 0x16FA0Cu;
        goto label_16fa0c;
    }
    ctx->pc = 0x16FA04u;
    {
        const bool branch_taken_0x16fa04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fa04) {
            ctx->pc = 0x16FA2Cu;
            goto label_16fa2c;
        }
    }
    ctx->pc = 0x16FA0Cu;
label_16fa0c:
    // 0x16fa0c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fa10:
    // 0x16fa10: 0xc064e68  jal         func_1939A0
label_16fa14:
    if (ctx->pc == 0x16FA14u) {
        ctx->pc = 0x16FA18u;
        goto label_16fa18;
    }
    ctx->pc = 0x16FA10u;
    SET_GPR_U32(ctx, 31, 0x16FA18u);
    ctx->pc = 0x1939A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1939A0u, 0x16FA10u, 0x16FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA18u;
label_16fa18:
    // 0x16fa18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16fa1c:
    // 0x16fa1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16fa20:
    // 0x16fa20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x16fa20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_16fa24:
    // 0x16fa24: 0xc051414  jal         func_145050
label_16fa28:
    if (ctx->pc == 0x16FA28u) {
        ctx->pc = 0x16FA2Cu;
        goto label_16fa2c;
    }
    ctx->pc = 0x16FA24u;
    SET_GPR_U32(ctx, 31, 0x16FA2Cu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x16FA24u, 0x16FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA2Cu;
label_16fa2c:
    // 0x16fa2c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fa30:
    // 0x16fa30: 0xc064e68  jal         func_1939A0
label_16fa34:
    if (ctx->pc == 0x16FA34u) {
        ctx->pc = 0x16FA38u;
        goto label_16fa38;
    }
    ctx->pc = 0x16FA30u;
    SET_GPR_U32(ctx, 31, 0x16FA38u);
    ctx->pc = 0x1939A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1939A0u, 0x16FA30u, 0x16FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA38u;
label_16fa38:
    // 0x16fa38: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x16fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_16fa3c:
    // 0x16fa3c: 0xc441008c  lwc1        $f1, 0x8C($v0)
    ctx->pc = 0x16fa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16fa40:
    // 0x16fa40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fa40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fa44:
    // 0x16fa44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_16fa48:
    if (ctx->pc == 0x16FA48u) {
        ctx->pc = 0x16FA4Cu;
        goto label_16fa4c;
    }
    ctx->pc = 0x16FA44u;
    {
        const bool branch_taken_0x16fa44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fa44) {
            ctx->pc = 0x16FA5Cu;
            goto label_16fa5c;
        }
    }
    ctx->pc = 0x16FA4Cu;
label_16fa4c:
    // 0x16fa4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fa50:
    // 0x16fa50: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x16fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_16fa54:
    // 0x16fa54: 0x10000004  b           . + 4 + (0x4 << 2)
label_16fa58:
    if (ctx->pc == 0x16FA58u) {
        ctx->pc = 0x16FA5Cu;
        goto label_16fa5c;
    }
    ctx->pc = 0x16FA54u;
    {
        const bool branch_taken_0x16fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fa54) {
            ctx->pc = 0x16FA68u;
            goto label_16fa68;
        }
    }
    ctx->pc = 0x16FA5Cu;
label_16fa5c:
    // 0x16fa5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16fa60:
    // 0x16fa60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fa64:
    // 0x16fa64: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x16fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_16fa68:
    // 0x16fa68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fa6c:
    // 0x16fa6c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fa70:
    // 0x16fa70: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x16fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_16fa74:
    // 0x16fa74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fa74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fa78:
    // 0x16fa78: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x16fa78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_16fa7c:
    // 0x16fa7c: 0x320f809  jalr        $t9
label_16fa80:
    if (ctx->pc == 0x16FA80u) {
        ctx->pc = 0x16FA84u;
        goto label_16fa84;
    }
    ctx->pc = 0x16FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FA84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FA7Cu, 0x16FA84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FA84u;
label_16fa84:
    // 0x16fa84: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fa88:
    // 0x16fa88: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x16fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_16fa8c:
    // 0x16fa8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16fa90:
    // 0x16fa90: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_16fa94:
    if (ctx->pc == 0x16FA94u) {
        ctx->pc = 0x16FA98u;
        goto label_16fa98;
    }
    ctx->pc = 0x16FA90u;
    {
        const bool branch_taken_0x16fa90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16fa90) {
            ctx->pc = 0x16FAE8u;
            goto label_16fae8;
        }
    }
    ctx->pc = 0x16FA98u;
label_16fa98:
    // 0x16fa98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fa9c:
    // 0x16fa9c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_16faa0:
    if (ctx->pc == 0x16FAA0u) {
        ctx->pc = 0x16FAA4u;
        goto label_16faa4;
    }
    ctx->pc = 0x16FA9Cu;
    {
        const bool branch_taken_0x16fa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16fa9c) {
            ctx->pc = 0x16FAC0u;
            goto label_16fac0;
        }
    }
    ctx->pc = 0x16FAA4u;
label_16faa4:
    // 0x16faa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16faa8:
    // 0x16faa8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_16faac:
    if (ctx->pc == 0x16FAACu) {
        ctx->pc = 0x16FAB0u;
        goto label_16fab0;
    }
    ctx->pc = 0x16FAA8u;
    {
        const bool branch_taken_0x16faa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16faa8) {
            ctx->pc = 0x16FAC0u;
            goto label_16fac0;
        }
    }
    ctx->pc = 0x16FAB0u;
label_16fab0:
    // 0x16fab0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_16fab4:
    if (ctx->pc == 0x16FAB4u) {
        ctx->pc = 0x16FAB8u;
        goto label_16fab8;
    }
    ctx->pc = 0x16FAB0u;
    {
        const bool branch_taken_0x16fab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fab0) {
            ctx->pc = 0x16FAC0u;
            goto label_16fac0;
        }
    }
    ctx->pc = 0x16FAB8u;
label_16fab8:
    // 0x16fab8: 0x10000058  b           . + 4 + (0x58 << 2)
label_16fabc:
    if (ctx->pc == 0x16FABCu) {
        ctx->pc = 0x16FAC0u;
        goto label_16fac0;
    }
    ctx->pc = 0x16FAB8u;
    {
        const bool branch_taken_0x16fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fab8) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16FAC0u;
label_16fac0:
    // 0x16fac0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16fac4:
    // 0x16fac4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16fac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16fac8:
    // 0x16fac8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16facc:
    // 0x16facc: 0x27859018  addiu       $a1, $gp, -0x6FE8
    ctx->pc = 0x16faccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938648));
label_16fad0:
    // 0x16fad0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fad4:
    // 0x16fad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16fad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fad8:
    // 0x16fad8: 0xc08f6a0  jal         func_23DA80
label_16fadc:
    if (ctx->pc == 0x16FADCu) {
        ctx->pc = 0x16FAE0u;
        goto label_16fae0;
    }
    ctx->pc = 0x16FAD8u;
    SET_GPR_U32(ctx, 31, 0x16FAE0u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16FAD8u, 0x16FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FAE0u;
label_16fae0:
    // 0x16fae0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_16fae4:
    if (ctx->pc == 0x16FAE4u) {
        ctx->pc = 0x16FAE8u;
        goto label_16fae8;
    }
    ctx->pc = 0x16FAE0u;
    {
        const bool branch_taken_0x16fae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fae0) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16FAE8u;
label_16fae8:
    // 0x16fae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16faec:
    // 0x16faec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16faecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16faf0:
    // 0x16faf0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16faf4:
    // 0x16faf4: 0x27859020  addiu       $a1, $gp, -0x6FE0
    ctx->pc = 0x16faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
label_16faf8:
    // 0x16faf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fafc:
    // 0x16fafc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16fafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fb00:
    // 0x16fb00: 0xc08f6a0  jal         func_23DA80
label_16fb04:
    if (ctx->pc == 0x16FB04u) {
        ctx->pc = 0x16FB08u;
        goto label_16fb08;
    }
    ctx->pc = 0x16FB00u;
    SET_GPR_U32(ctx, 31, 0x16FB08u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x16FB00u, 0x16FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB08u;
label_16fb08:
    // 0x16fb08: 0x10000044  b           . + 4 + (0x44 << 2)
label_16fb0c:
    if (ctx->pc == 0x16FB0Cu) {
        ctx->pc = 0x16FB10u;
        goto label_16fb10;
    }
    ctx->pc = 0x16FB08u;
    {
        const bool branch_taken_0x16fb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb08) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16FB10u;
label_16fb10:
    // 0x16fb10: 0xa380bc5c  sb          $zero, -0x43A4($gp)
    ctx->pc = 0x16fb10u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949980), (uint8_t)GPR_U32(ctx, 0));
label_16fb14:
    // 0x16fb14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fb18:
    // 0x16fb18: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16fb1c:
    // 0x16fb1c: 0xc0413bc  jal         func_104EF0
label_16fb20:
    if (ctx->pc == 0x16FB20u) {
        ctx->pc = 0x16FB24u;
        goto label_16fb24;
    }
    ctx->pc = 0x16FB1Cu;
    SET_GPR_U32(ctx, 31, 0x16FB24u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x16FB1Cu, 0x16FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB24u;
label_16fb24:
    // 0x16fb24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16fb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16fb28:
    // 0x16fb28: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_16fb2c:
    if (ctx->pc == 0x16FB2Cu) {
        ctx->pc = 0x16FB30u;
        goto label_16fb30;
    }
    ctx->pc = 0x16FB28u;
    {
        const bool branch_taken_0x16fb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fb28) {
            ctx->pc = 0x16FBE0u;
            goto label_16fbe0;
        }
    }
    ctx->pc = 0x16FB30u;
label_16fb30:
    // 0x16fb30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fb34:
    // 0x16fb34: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16fb38:
    // 0x16fb38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fb38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fb3c:
    // 0x16fb3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16fb3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16fb40:
    // 0x16fb40: 0x320f809  jalr        $t9
label_16fb44:
    if (ctx->pc == 0x16FB44u) {
        ctx->pc = 0x16FB48u;
        goto label_16fb48;
    }
    ctx->pc = 0x16FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FB48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FB40u, 0x16FB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FB48u;
label_16fb48:
    // 0x16fb48: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fb4c:
    // 0x16fb4c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16fb50:
    // 0x16fb50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fb54:
    // 0x16fb54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16fb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16fb58:
    // 0x16fb58: 0x320f809  jalr        $t9
label_16fb5c:
    if (ctx->pc == 0x16FB5Cu) {
        ctx->pc = 0x16FB60u;
        goto label_16fb60;
    }
    ctx->pc = 0x16FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FB60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FB58u, 0x16FB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FB60u;
label_16fb60:
    // 0x16fb60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fb64:
    // 0x16fb64: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16fb68:
    // 0x16fb68: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16fb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16fb6c:
    // 0x16fb6c: 0x24a54540  addiu       $a1, $a1, 0x4540
    ctx->pc = 0x16fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17728));
label_16fb70:
    // 0x16fb70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fb70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fb74:
    // 0x16fb74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x16fb74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_16fb78:
    // 0x16fb78: 0x320f809  jalr        $t9
label_16fb7c:
    if (ctx->pc == 0x16FB7Cu) {
        ctx->pc = 0x16FB80u;
        goto label_16fb80;
    }
    ctx->pc = 0x16FB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FB80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FB78u, 0x16FB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FB80u;
label_16fb80:
    // 0x16fb80: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fb84:
    // 0x16fb84: 0xc05c2cc  jal         func_170B30
label_16fb88:
    if (ctx->pc == 0x16FB88u) {
        ctx->pc = 0x16FB8Cu;
        goto label_16fb8c;
    }
    ctx->pc = 0x16FB84u;
    SET_GPR_U32(ctx, 31, 0x16FB8Cu);
    ctx->pc = 0x170B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B30u, 0x16FB84u, 0x16FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB8Cu;
label_16fb8c:
    // 0x16fb8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16fb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fb90:
    // 0x16fb90: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fb94:
    // 0x16fb94: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x16fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_16fb98:
    // 0x16fb98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fb9c:
    // 0x16fb9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16fb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fba0:
    // 0x16fba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fba4:
    // 0x16fba4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16fba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16fba8:
    // 0x16fba8: 0x320f809  jalr        $t9
label_16fbac:
    if (ctx->pc == 0x16FBACu) {
        ctx->pc = 0x16FBB0u;
        goto label_16fbb0;
    }
    ctx->pc = 0x16FBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FBB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FBA8u, 0x16FBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FBB0u;
label_16fbb0:
    // 0x16fbb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16fbb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fbb4:
    // 0x16fbb4: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x16fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_16fbb8:
    // 0x16fbb8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16fbbc:
    // 0x16fbbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fbc0:
    // 0x16fbc0: 0xc04fbf8  jal         func_13EFE0
label_16fbc4:
    if (ctx->pc == 0x16FBC4u) {
        ctx->pc = 0x16FBC8u;
        goto label_16fbc8;
    }
    ctx->pc = 0x16FBC0u;
    SET_GPR_U32(ctx, 31, 0x16FBC8u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x16FBC0u, 0x16FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FBC8u;
label_16fbc8:
    // 0x16fbc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16fbc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fbcc:
    // 0x16fbcc: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x16fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
label_16fbd0:
    // 0x16fbd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16fbd4:
    // 0x16fbd4: 0xc04c608  jal         func_131820
label_16fbd8:
    if (ctx->pc == 0x16FBD8u) {
        ctx->pc = 0x16FBDCu;
        goto label_16fbdc;
    }
    ctx->pc = 0x16FBD4u;
    SET_GPR_U32(ctx, 31, 0x16FBDCu);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x16FBD4u, 0x16FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FBDCu;
label_16fbdc:
    // 0x16fbdc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16fbdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fbe0:
    // 0x16fbe0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fbe4:
    // 0x16fbe4: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fbe8:
    // 0x16fbe8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x16fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16fbec:
    // 0x16fbec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16fbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fbf0:
    // 0x16fbf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fbf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fbf4:
    // 0x16fbf4: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x16fbf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_16fbf8:
    // 0x16fbf8: 0x320f809  jalr        $t9
label_16fbfc:
    if (ctx->pc == 0x16FBFCu) {
        ctx->pc = 0x16FC00u;
        goto label_16fc00;
    }
    ctx->pc = 0x16FBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FC00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FBF8u, 0x16FC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FC00u;
label_16fc00:
    // 0x16fc00: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16fc04:
    // 0x16fc04: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16fc08:
    // 0x16fc08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fc08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fc0c:
    // 0x16fc0c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x16fc0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_16fc10:
    // 0x16fc10: 0x320f809  jalr        $t9
label_16fc14:
    if (ctx->pc == 0x16FC14u) {
        ctx->pc = 0x16FC18u;
        goto label_16fc18;
    }
    ctx->pc = 0x16FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FC18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC10u, 0x16FC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FC18u;
label_16fc18:
    // 0x16fc18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16fc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fc1c:
    // 0x16fc1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16fc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16fc20:
    // 0x16fc20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16fc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16fc24:
    // 0x16fc24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x16fc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16fc28:
    // 0x16fc28: 0x3e00008  jr          $ra
label_16fc2c:
    if (ctx->pc == 0x16FC2Cu) {
        ctx->pc = 0x16FC30u;
        goto label_fallthrough_0x16fc28;
    }
    ctx->pc = 0x16FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16fc28:
    ctx->pc = 0x16FC30u;
}
