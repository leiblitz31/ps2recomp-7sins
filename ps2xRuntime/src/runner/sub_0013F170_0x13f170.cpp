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

// Function: sub_0013F170
// Address: 0x13f170 - 0x13f880
void sub_0013F170_0x13f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F170_0x13f170");
#endif

    switch (ctx->pc) {
        case 0x13f170u: goto label_13f170;
        case 0x13f174u: goto label_13f174;
        case 0x13f178u: goto label_13f178;
        case 0x13f17cu: goto label_13f17c;
        case 0x13f180u: goto label_13f180;
        case 0x13f184u: goto label_13f184;
        case 0x13f188u: goto label_13f188;
        case 0x13f18cu: goto label_13f18c;
        case 0x13f190u: goto label_13f190;
        case 0x13f194u: goto label_13f194;
        case 0x13f198u: goto label_13f198;
        case 0x13f19cu: goto label_13f19c;
        case 0x13f1a0u: goto label_13f1a0;
        case 0x13f1a4u: goto label_13f1a4;
        case 0x13f1a8u: goto label_13f1a8;
        case 0x13f1acu: goto label_13f1ac;
        case 0x13f1b0u: goto label_13f1b0;
        case 0x13f1b4u: goto label_13f1b4;
        case 0x13f1b8u: goto label_13f1b8;
        case 0x13f1bcu: goto label_13f1bc;
        case 0x13f1c0u: goto label_13f1c0;
        case 0x13f1c4u: goto label_13f1c4;
        case 0x13f1c8u: goto label_13f1c8;
        case 0x13f1ccu: goto label_13f1cc;
        case 0x13f1d0u: goto label_13f1d0;
        case 0x13f1d4u: goto label_13f1d4;
        case 0x13f1d8u: goto label_13f1d8;
        case 0x13f1dcu: goto label_13f1dc;
        case 0x13f1e0u: goto label_13f1e0;
        case 0x13f1e4u: goto label_13f1e4;
        case 0x13f1e8u: goto label_13f1e8;
        case 0x13f1ecu: goto label_13f1ec;
        case 0x13f1f0u: goto label_13f1f0;
        case 0x13f1f4u: goto label_13f1f4;
        case 0x13f1f8u: goto label_13f1f8;
        case 0x13f1fcu: goto label_13f1fc;
        case 0x13f200u: goto label_13f200;
        case 0x13f204u: goto label_13f204;
        case 0x13f208u: goto label_13f208;
        case 0x13f20cu: goto label_13f20c;
        case 0x13f210u: goto label_13f210;
        case 0x13f214u: goto label_13f214;
        case 0x13f218u: goto label_13f218;
        case 0x13f21cu: goto label_13f21c;
        case 0x13f220u: goto label_13f220;
        case 0x13f224u: goto label_13f224;
        case 0x13f228u: goto label_13f228;
        case 0x13f22cu: goto label_13f22c;
        case 0x13f230u: goto label_13f230;
        case 0x13f234u: goto label_13f234;
        case 0x13f238u: goto label_13f238;
        case 0x13f23cu: goto label_13f23c;
        case 0x13f240u: goto label_13f240;
        case 0x13f244u: goto label_13f244;
        case 0x13f248u: goto label_13f248;
        case 0x13f24cu: goto label_13f24c;
        case 0x13f250u: goto label_13f250;
        case 0x13f254u: goto label_13f254;
        case 0x13f258u: goto label_13f258;
        case 0x13f25cu: goto label_13f25c;
        case 0x13f260u: goto label_13f260;
        case 0x13f264u: goto label_13f264;
        case 0x13f268u: goto label_13f268;
        case 0x13f26cu: goto label_13f26c;
        case 0x13f270u: goto label_13f270;
        case 0x13f274u: goto label_13f274;
        case 0x13f278u: goto label_13f278;
        case 0x13f27cu: goto label_13f27c;
        case 0x13f280u: goto label_13f280;
        case 0x13f284u: goto label_13f284;
        case 0x13f288u: goto label_13f288;
        case 0x13f28cu: goto label_13f28c;
        case 0x13f290u: goto label_13f290;
        case 0x13f294u: goto label_13f294;
        case 0x13f298u: goto label_13f298;
        case 0x13f29cu: goto label_13f29c;
        case 0x13f2a0u: goto label_13f2a0;
        case 0x13f2a4u: goto label_13f2a4;
        case 0x13f2a8u: goto label_13f2a8;
        case 0x13f2acu: goto label_13f2ac;
        case 0x13f2b0u: goto label_13f2b0;
        case 0x13f2b4u: goto label_13f2b4;
        case 0x13f2b8u: goto label_13f2b8;
        case 0x13f2bcu: goto label_13f2bc;
        case 0x13f2c0u: goto label_13f2c0;
        case 0x13f2c4u: goto label_13f2c4;
        case 0x13f2c8u: goto label_13f2c8;
        case 0x13f2ccu: goto label_13f2cc;
        case 0x13f2d0u: goto label_13f2d0;
        case 0x13f2d4u: goto label_13f2d4;
        case 0x13f2d8u: goto label_13f2d8;
        case 0x13f2dcu: goto label_13f2dc;
        case 0x13f2e0u: goto label_13f2e0;
        case 0x13f2e4u: goto label_13f2e4;
        case 0x13f2e8u: goto label_13f2e8;
        case 0x13f2ecu: goto label_13f2ec;
        case 0x13f2f0u: goto label_13f2f0;
        case 0x13f2f4u: goto label_13f2f4;
        case 0x13f2f8u: goto label_13f2f8;
        case 0x13f2fcu: goto label_13f2fc;
        case 0x13f300u: goto label_13f300;
        case 0x13f304u: goto label_13f304;
        case 0x13f308u: goto label_13f308;
        case 0x13f30cu: goto label_13f30c;
        case 0x13f310u: goto label_13f310;
        case 0x13f314u: goto label_13f314;
        case 0x13f318u: goto label_13f318;
        case 0x13f31cu: goto label_13f31c;
        case 0x13f320u: goto label_13f320;
        case 0x13f324u: goto label_13f324;
        case 0x13f328u: goto label_13f328;
        case 0x13f32cu: goto label_13f32c;
        case 0x13f330u: goto label_13f330;
        case 0x13f334u: goto label_13f334;
        case 0x13f338u: goto label_13f338;
        case 0x13f33cu: goto label_13f33c;
        case 0x13f340u: goto label_13f340;
        case 0x13f344u: goto label_13f344;
        case 0x13f348u: goto label_13f348;
        case 0x13f34cu: goto label_13f34c;
        case 0x13f350u: goto label_13f350;
        case 0x13f354u: goto label_13f354;
        case 0x13f358u: goto label_13f358;
        case 0x13f35cu: goto label_13f35c;
        case 0x13f360u: goto label_13f360;
        case 0x13f364u: goto label_13f364;
        case 0x13f368u: goto label_13f368;
        case 0x13f36cu: goto label_13f36c;
        case 0x13f370u: goto label_13f370;
        case 0x13f374u: goto label_13f374;
        case 0x13f378u: goto label_13f378;
        case 0x13f37cu: goto label_13f37c;
        case 0x13f380u: goto label_13f380;
        case 0x13f384u: goto label_13f384;
        case 0x13f388u: goto label_13f388;
        case 0x13f38cu: goto label_13f38c;
        case 0x13f390u: goto label_13f390;
        case 0x13f394u: goto label_13f394;
        case 0x13f398u: goto label_13f398;
        case 0x13f39cu: goto label_13f39c;
        case 0x13f3a0u: goto label_13f3a0;
        case 0x13f3a4u: goto label_13f3a4;
        case 0x13f3a8u: goto label_13f3a8;
        case 0x13f3acu: goto label_13f3ac;
        case 0x13f3b0u: goto label_13f3b0;
        case 0x13f3b4u: goto label_13f3b4;
        case 0x13f3b8u: goto label_13f3b8;
        case 0x13f3bcu: goto label_13f3bc;
        case 0x13f3c0u: goto label_13f3c0;
        case 0x13f3c4u: goto label_13f3c4;
        case 0x13f3c8u: goto label_13f3c8;
        case 0x13f3ccu: goto label_13f3cc;
        case 0x13f3d0u: goto label_13f3d0;
        case 0x13f3d4u: goto label_13f3d4;
        case 0x13f3d8u: goto label_13f3d8;
        case 0x13f3dcu: goto label_13f3dc;
        case 0x13f3e0u: goto label_13f3e0;
        case 0x13f3e4u: goto label_13f3e4;
        case 0x13f3e8u: goto label_13f3e8;
        case 0x13f3ecu: goto label_13f3ec;
        case 0x13f3f0u: goto label_13f3f0;
        case 0x13f3f4u: goto label_13f3f4;
        case 0x13f3f8u: goto label_13f3f8;
        case 0x13f3fcu: goto label_13f3fc;
        case 0x13f400u: goto label_13f400;
        case 0x13f404u: goto label_13f404;
        case 0x13f408u: goto label_13f408;
        case 0x13f40cu: goto label_13f40c;
        case 0x13f410u: goto label_13f410;
        case 0x13f414u: goto label_13f414;
        case 0x13f418u: goto label_13f418;
        case 0x13f41cu: goto label_13f41c;
        case 0x13f420u: goto label_13f420;
        case 0x13f424u: goto label_13f424;
        case 0x13f428u: goto label_13f428;
        case 0x13f42cu: goto label_13f42c;
        case 0x13f430u: goto label_13f430;
        case 0x13f434u: goto label_13f434;
        case 0x13f438u: goto label_13f438;
        case 0x13f43cu: goto label_13f43c;
        case 0x13f440u: goto label_13f440;
        case 0x13f444u: goto label_13f444;
        case 0x13f448u: goto label_13f448;
        case 0x13f44cu: goto label_13f44c;
        case 0x13f450u: goto label_13f450;
        case 0x13f454u: goto label_13f454;
        case 0x13f458u: goto label_13f458;
        case 0x13f45cu: goto label_13f45c;
        case 0x13f460u: goto label_13f460;
        case 0x13f464u: goto label_13f464;
        case 0x13f468u: goto label_13f468;
        case 0x13f46cu: goto label_13f46c;
        case 0x13f470u: goto label_13f470;
        case 0x13f474u: goto label_13f474;
        case 0x13f478u: goto label_13f478;
        case 0x13f47cu: goto label_13f47c;
        case 0x13f480u: goto label_13f480;
        case 0x13f484u: goto label_13f484;
        case 0x13f488u: goto label_13f488;
        case 0x13f48cu: goto label_13f48c;
        case 0x13f490u: goto label_13f490;
        case 0x13f494u: goto label_13f494;
        case 0x13f498u: goto label_13f498;
        case 0x13f49cu: goto label_13f49c;
        case 0x13f4a0u: goto label_13f4a0;
        case 0x13f4a4u: goto label_13f4a4;
        case 0x13f4a8u: goto label_13f4a8;
        case 0x13f4acu: goto label_13f4ac;
        case 0x13f4b0u: goto label_13f4b0;
        case 0x13f4b4u: goto label_13f4b4;
        case 0x13f4b8u: goto label_13f4b8;
        case 0x13f4bcu: goto label_13f4bc;
        case 0x13f4c0u: goto label_13f4c0;
        case 0x13f4c4u: goto label_13f4c4;
        case 0x13f4c8u: goto label_13f4c8;
        case 0x13f4ccu: goto label_13f4cc;
        case 0x13f4d0u: goto label_13f4d0;
        case 0x13f4d4u: goto label_13f4d4;
        case 0x13f4d8u: goto label_13f4d8;
        case 0x13f4dcu: goto label_13f4dc;
        case 0x13f4e0u: goto label_13f4e0;
        case 0x13f4e4u: goto label_13f4e4;
        case 0x13f4e8u: goto label_13f4e8;
        case 0x13f4ecu: goto label_13f4ec;
        case 0x13f4f0u: goto label_13f4f0;
        case 0x13f4f4u: goto label_13f4f4;
        case 0x13f4f8u: goto label_13f4f8;
        case 0x13f4fcu: goto label_13f4fc;
        case 0x13f500u: goto label_13f500;
        case 0x13f504u: goto label_13f504;
        case 0x13f508u: goto label_13f508;
        case 0x13f50cu: goto label_13f50c;
        case 0x13f510u: goto label_13f510;
        case 0x13f514u: goto label_13f514;
        case 0x13f518u: goto label_13f518;
        case 0x13f51cu: goto label_13f51c;
        case 0x13f520u: goto label_13f520;
        case 0x13f524u: goto label_13f524;
        case 0x13f528u: goto label_13f528;
        case 0x13f52cu: goto label_13f52c;
        case 0x13f530u: goto label_13f530;
        case 0x13f534u: goto label_13f534;
        case 0x13f538u: goto label_13f538;
        case 0x13f53cu: goto label_13f53c;
        case 0x13f540u: goto label_13f540;
        case 0x13f544u: goto label_13f544;
        case 0x13f548u: goto label_13f548;
        case 0x13f54cu: goto label_13f54c;
        case 0x13f550u: goto label_13f550;
        case 0x13f554u: goto label_13f554;
        case 0x13f558u: goto label_13f558;
        case 0x13f55cu: goto label_13f55c;
        case 0x13f560u: goto label_13f560;
        case 0x13f564u: goto label_13f564;
        case 0x13f568u: goto label_13f568;
        case 0x13f56cu: goto label_13f56c;
        case 0x13f570u: goto label_13f570;
        case 0x13f574u: goto label_13f574;
        case 0x13f578u: goto label_13f578;
        case 0x13f57cu: goto label_13f57c;
        case 0x13f580u: goto label_13f580;
        case 0x13f584u: goto label_13f584;
        case 0x13f588u: goto label_13f588;
        case 0x13f58cu: goto label_13f58c;
        case 0x13f590u: goto label_13f590;
        case 0x13f594u: goto label_13f594;
        case 0x13f598u: goto label_13f598;
        case 0x13f59cu: goto label_13f59c;
        case 0x13f5a0u: goto label_13f5a0;
        case 0x13f5a4u: goto label_13f5a4;
        case 0x13f5a8u: goto label_13f5a8;
        case 0x13f5acu: goto label_13f5ac;
        case 0x13f5b0u: goto label_13f5b0;
        case 0x13f5b4u: goto label_13f5b4;
        case 0x13f5b8u: goto label_13f5b8;
        case 0x13f5bcu: goto label_13f5bc;
        case 0x13f5c0u: goto label_13f5c0;
        case 0x13f5c4u: goto label_13f5c4;
        case 0x13f5c8u: goto label_13f5c8;
        case 0x13f5ccu: goto label_13f5cc;
        case 0x13f5d0u: goto label_13f5d0;
        case 0x13f5d4u: goto label_13f5d4;
        case 0x13f5d8u: goto label_13f5d8;
        case 0x13f5dcu: goto label_13f5dc;
        case 0x13f5e0u: goto label_13f5e0;
        case 0x13f5e4u: goto label_13f5e4;
        case 0x13f5e8u: goto label_13f5e8;
        case 0x13f5ecu: goto label_13f5ec;
        case 0x13f5f0u: goto label_13f5f0;
        case 0x13f5f4u: goto label_13f5f4;
        case 0x13f5f8u: goto label_13f5f8;
        case 0x13f5fcu: goto label_13f5fc;
        case 0x13f600u: goto label_13f600;
        case 0x13f604u: goto label_13f604;
        case 0x13f608u: goto label_13f608;
        case 0x13f60cu: goto label_13f60c;
        case 0x13f610u: goto label_13f610;
        case 0x13f614u: goto label_13f614;
        case 0x13f618u: goto label_13f618;
        case 0x13f61cu: goto label_13f61c;
        case 0x13f620u: goto label_13f620;
        case 0x13f624u: goto label_13f624;
        case 0x13f628u: goto label_13f628;
        case 0x13f62cu: goto label_13f62c;
        case 0x13f630u: goto label_13f630;
        case 0x13f634u: goto label_13f634;
        case 0x13f638u: goto label_13f638;
        case 0x13f63cu: goto label_13f63c;
        case 0x13f640u: goto label_13f640;
        case 0x13f644u: goto label_13f644;
        case 0x13f648u: goto label_13f648;
        case 0x13f64cu: goto label_13f64c;
        case 0x13f650u: goto label_13f650;
        case 0x13f654u: goto label_13f654;
        case 0x13f658u: goto label_13f658;
        case 0x13f65cu: goto label_13f65c;
        case 0x13f660u: goto label_13f660;
        case 0x13f664u: goto label_13f664;
        case 0x13f668u: goto label_13f668;
        case 0x13f66cu: goto label_13f66c;
        case 0x13f670u: goto label_13f670;
        case 0x13f674u: goto label_13f674;
        case 0x13f678u: goto label_13f678;
        case 0x13f67cu: goto label_13f67c;
        case 0x13f680u: goto label_13f680;
        case 0x13f684u: goto label_13f684;
        case 0x13f688u: goto label_13f688;
        case 0x13f68cu: goto label_13f68c;
        case 0x13f690u: goto label_13f690;
        case 0x13f694u: goto label_13f694;
        case 0x13f698u: goto label_13f698;
        case 0x13f69cu: goto label_13f69c;
        case 0x13f6a0u: goto label_13f6a0;
        case 0x13f6a4u: goto label_13f6a4;
        case 0x13f6a8u: goto label_13f6a8;
        case 0x13f6acu: goto label_13f6ac;
        case 0x13f6b0u: goto label_13f6b0;
        case 0x13f6b4u: goto label_13f6b4;
        case 0x13f6b8u: goto label_13f6b8;
        case 0x13f6bcu: goto label_13f6bc;
        case 0x13f6c0u: goto label_13f6c0;
        case 0x13f6c4u: goto label_13f6c4;
        case 0x13f6c8u: goto label_13f6c8;
        case 0x13f6ccu: goto label_13f6cc;
        case 0x13f6d0u: goto label_13f6d0;
        case 0x13f6d4u: goto label_13f6d4;
        case 0x13f6d8u: goto label_13f6d8;
        case 0x13f6dcu: goto label_13f6dc;
        case 0x13f6e0u: goto label_13f6e0;
        case 0x13f6e4u: goto label_13f6e4;
        case 0x13f6e8u: goto label_13f6e8;
        case 0x13f6ecu: goto label_13f6ec;
        case 0x13f6f0u: goto label_13f6f0;
        case 0x13f6f4u: goto label_13f6f4;
        case 0x13f6f8u: goto label_13f6f8;
        case 0x13f6fcu: goto label_13f6fc;
        case 0x13f700u: goto label_13f700;
        case 0x13f704u: goto label_13f704;
        case 0x13f708u: goto label_13f708;
        case 0x13f70cu: goto label_13f70c;
        case 0x13f710u: goto label_13f710;
        case 0x13f714u: goto label_13f714;
        case 0x13f718u: goto label_13f718;
        case 0x13f71cu: goto label_13f71c;
        case 0x13f720u: goto label_13f720;
        case 0x13f724u: goto label_13f724;
        case 0x13f728u: goto label_13f728;
        case 0x13f72cu: goto label_13f72c;
        case 0x13f730u: goto label_13f730;
        case 0x13f734u: goto label_13f734;
        case 0x13f738u: goto label_13f738;
        case 0x13f73cu: goto label_13f73c;
        case 0x13f740u: goto label_13f740;
        case 0x13f744u: goto label_13f744;
        case 0x13f748u: goto label_13f748;
        case 0x13f74cu: goto label_13f74c;
        case 0x13f750u: goto label_13f750;
        case 0x13f754u: goto label_13f754;
        case 0x13f758u: goto label_13f758;
        case 0x13f75cu: goto label_13f75c;
        case 0x13f760u: goto label_13f760;
        case 0x13f764u: goto label_13f764;
        case 0x13f768u: goto label_13f768;
        case 0x13f76cu: goto label_13f76c;
        case 0x13f770u: goto label_13f770;
        case 0x13f774u: goto label_13f774;
        case 0x13f778u: goto label_13f778;
        case 0x13f77cu: goto label_13f77c;
        case 0x13f780u: goto label_13f780;
        case 0x13f784u: goto label_13f784;
        case 0x13f788u: goto label_13f788;
        case 0x13f78cu: goto label_13f78c;
        case 0x13f790u: goto label_13f790;
        case 0x13f794u: goto label_13f794;
        case 0x13f798u: goto label_13f798;
        case 0x13f79cu: goto label_13f79c;
        case 0x13f7a0u: goto label_13f7a0;
        case 0x13f7a4u: goto label_13f7a4;
        case 0x13f7a8u: goto label_13f7a8;
        case 0x13f7acu: goto label_13f7ac;
        case 0x13f7b0u: goto label_13f7b0;
        case 0x13f7b4u: goto label_13f7b4;
        case 0x13f7b8u: goto label_13f7b8;
        case 0x13f7bcu: goto label_13f7bc;
        case 0x13f7c0u: goto label_13f7c0;
        case 0x13f7c4u: goto label_13f7c4;
        case 0x13f7c8u: goto label_13f7c8;
        case 0x13f7ccu: goto label_13f7cc;
        case 0x13f7d0u: goto label_13f7d0;
        case 0x13f7d4u: goto label_13f7d4;
        case 0x13f7d8u: goto label_13f7d8;
        case 0x13f7dcu: goto label_13f7dc;
        case 0x13f7e0u: goto label_13f7e0;
        case 0x13f7e4u: goto label_13f7e4;
        case 0x13f7e8u: goto label_13f7e8;
        case 0x13f7ecu: goto label_13f7ec;
        case 0x13f7f0u: goto label_13f7f0;
        case 0x13f7f4u: goto label_13f7f4;
        case 0x13f7f8u: goto label_13f7f8;
        case 0x13f7fcu: goto label_13f7fc;
        case 0x13f800u: goto label_13f800;
        case 0x13f804u: goto label_13f804;
        case 0x13f808u: goto label_13f808;
        case 0x13f80cu: goto label_13f80c;
        case 0x13f810u: goto label_13f810;
        case 0x13f814u: goto label_13f814;
        case 0x13f818u: goto label_13f818;
        case 0x13f81cu: goto label_13f81c;
        case 0x13f820u: goto label_13f820;
        case 0x13f824u: goto label_13f824;
        case 0x13f828u: goto label_13f828;
        case 0x13f82cu: goto label_13f82c;
        case 0x13f830u: goto label_13f830;
        case 0x13f834u: goto label_13f834;
        case 0x13f838u: goto label_13f838;
        case 0x13f83cu: goto label_13f83c;
        case 0x13f840u: goto label_13f840;
        case 0x13f844u: goto label_13f844;
        case 0x13f848u: goto label_13f848;
        case 0x13f84cu: goto label_13f84c;
        case 0x13f850u: goto label_13f850;
        case 0x13f854u: goto label_13f854;
        case 0x13f858u: goto label_13f858;
        case 0x13f85cu: goto label_13f85c;
        case 0x13f860u: goto label_13f860;
        case 0x13f864u: goto label_13f864;
        case 0x13f868u: goto label_13f868;
        case 0x13f86cu: goto label_13f86c;
        case 0x13f870u: goto label_13f870;
        case 0x13f874u: goto label_13f874;
        case 0x13f878u: goto label_13f878;
        case 0x13f87cu: goto label_13f87c;
        default: break;
    }

    ctx->pc = 0x13f170u;

label_13f170:
    // 0x13f170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13f174:
    // 0x13f174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f178:
    // 0x13f178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13f178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13f17c:
    // 0x13f17c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f180:
    // 0x13f180: 0xc0ad664  jal         func_2B5990
label_13f184:
    if (ctx->pc == 0x13F184u) {
        ctx->pc = 0x13F188u;
        goto label_13f188;
    }
    ctx->pc = 0x13F180u;
    SET_GPR_U32(ctx, 31, 0x13F188u);
    ctx->pc = 0x2B5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5990u, 0x13F180u, 0x13F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F188u;
label_13f188:
    // 0x13f188: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13f188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_13f18c:
    // 0x13f18c: 0x24633810  addiu       $v1, $v1, 0x3810
    ctx->pc = 0x13f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14352));
label_13f190:
    // 0x13f190: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f194:
    // 0x13f194: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13f194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_13f198:
    // 0x13f198: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x13f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_13f19c:
    // 0x13f19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f1a0:
    // 0x13f1a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f1a4:
    // 0x13f1a4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x13f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_13f1a8:
    // 0x13f1a8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_13f1ac:
    // 0x13f1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f1b0:
    // 0x13f1b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f1b4:
    // 0x13f1b4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x13f1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_13f1b8:
    // 0x13f1b8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x13f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_13f1bc:
    // 0x13f1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f1c0:
    // 0x13f1c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f1c4:
    // 0x13f1c4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x13f1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_13f1c8:
    // 0x13f1c8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x13f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
label_13f1cc:
    // 0x13f1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f1d0:
    // 0x13f1d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f1d4:
    // 0x13f1d4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x13f1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_13f1d8:
    // 0x13f1d8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x13f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_13f1dc:
    // 0x13f1dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f1e0:
    // 0x13f1e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f1e4:
    // 0x13f1e4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x13f1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_13f1e8:
    // 0x13f1e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f1ec:
    // 0x13f1ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f1f0:
    // 0x13f1f0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x13f1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_13f1f4:
    // 0x13f1f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f1f8:
    // 0x13f1f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f1fc:
    // 0x13f1fc: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x13f1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_13f200:
    // 0x13f200: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_13f204:
    // 0x13f204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f208:
    // 0x13f208: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f20c:
    // 0x13f20c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x13f20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_13f210:
    // 0x13f210: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x13f210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_13f214:
    // 0x13f214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f218:
    // 0x13f218: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f21c:
    // 0x13f21c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x13f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_13f220:
    // 0x13f220: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x13f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_13f224:
    // 0x13f224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f228:
    // 0x13f228: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f22c:
    // 0x13f22c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x13f22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_13f230:
    // 0x13f230: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x13f230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_13f234:
    // 0x13f234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f238:
    // 0x13f238: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f23c:
    // 0x13f23c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x13f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_13f240:
    // 0x13f240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f244:
    // 0x13f244: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f248:
    // 0x13f248: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x13f248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_13f24c:
    // 0x13f24c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x13f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_13f250:
    // 0x13f250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f254:
    // 0x13f254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f258:
    // 0x13f258: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x13f258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_13f25c:
    // 0x13f25c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f260:
    // 0x13f260: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x13f260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
label_13f264:
    // 0x13f264: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f268:
    // 0x13f268: 0xa0400061  sb          $zero, 0x61($v0)
    ctx->pc = 0x13f268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 0));
label_13f26c:
    // 0x13f26c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f270:
    // 0x13f270: 0xa0400062  sb          $zero, 0x62($v0)
    ctx->pc = 0x13f270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 98), (uint8_t)GPR_U32(ctx, 0));
label_13f274:
    // 0x13f274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f278:
    // 0x13f278: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f27c:
    // 0x13f27c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x13f27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
label_13f280:
    // 0x13f280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f284:
    // 0x13f284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f288:
    // 0x13f288: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x13f288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_13f28c:
    // 0x13f28c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f290:
    // 0x13f290: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_13f294:
    // 0x13f294: 0xc042230  jal         func_1088C0
label_13f298:
    if (ctx->pc == 0x13F298u) {
        ctx->pc = 0x13F29Cu;
        goto label_13f29c;
    }
    ctx->pc = 0x13F294u;
    SET_GPR_U32(ctx, 31, 0x13F29Cu);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x13F294u, 0x13F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F29Cu;
label_13f29c:
    // 0x13f29c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f2a0:
    // 0x13f2a0: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x13f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
label_13f2a4:
    // 0x13f2a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f2a8:
    // 0x13f2a8: 0xaf82ba80  sw          $v0, -0x4580($gp)
    ctx->pc = 0x13f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949504), GPR_U32(ctx, 2));
label_13f2ac:
    // 0x13f2ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f2b0:
    // 0x13f2b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f2b4:
    // 0x13f2b4: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13f2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_13f2b8:
    // 0x13f2b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f2bc:
    // 0x13f2bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f2c0:
    // 0x13f2c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13f2c4:
    // 0x13f2c4: 0x3e00008  jr          $ra
label_13f2c8:
    if (ctx->pc == 0x13F2C8u) {
        ctx->pc = 0x13F2CCu;
        goto label_13f2cc;
    }
    ctx->pc = 0x13F2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F2CCu;
label_13f2cc:
    // 0x13f2cc: 0x0  nop
    ctx->pc = 0x13f2ccu;
    // NOP
label_13f2d0:
    // 0x13f2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f2d4:
    // 0x13f2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f2d8:
    // 0x13f2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13f2dc:
    // 0x13f2dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13f2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_13f2e0:
    // 0x13f2e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f2e4:
    // 0x13f2e4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_13f2e8:
    if (ctx->pc == 0x13F2E8u) {
        ctx->pc = 0x13F2ECu;
        goto label_13f2ec;
    }
    ctx->pc = 0x13F2E4u;
    {
        const bool branch_taken_0x13f2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f2e4) {
            ctx->pc = 0x13F344u;
            goto label_13f344;
        }
    }
    ctx->pc = 0x13F2ECu;
label_13f2ec:
    // 0x13f2ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_13f2f0:
    // 0x13f2f0: 0x24633810  addiu       $v1, $v1, 0x3810
    ctx->pc = 0x13f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14352));
label_13f2f4:
    // 0x13f2f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f2f8:
    // 0x13f2f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_13f2fc:
    // 0x13f2fc: 0xaf80ba80  sw          $zero, -0x4580($gp)
    ctx->pc = 0x13f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949504), GPR_U32(ctx, 0));
label_13f300:
    // 0x13f300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f304:
    // 0x13f304: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_13f308:
    // 0x13f308: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13f308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13f30c:
    // 0x13f30c: 0xc0420a0  jal         func_108280
label_13f310:
    if (ctx->pc == 0x13F310u) {
        ctx->pc = 0x13F314u;
        goto label_13f314;
    }
    ctx->pc = 0x13F30Cu;
    SET_GPR_U32(ctx, 31, 0x13F314u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x13F30Cu, 0x13F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F314u;
label_13f314:
    // 0x13f314: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f318:
    // 0x13f318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f31c:
    // 0x13f31c: 0xc0ad678  jal         func_2B59E0
label_13f320:
    if (ctx->pc == 0x13F320u) {
        ctx->pc = 0x13F324u;
        goto label_13f324;
    }
    ctx->pc = 0x13F31Cu;
    SET_GPR_U32(ctx, 31, 0x13F324u);
    ctx->pc = 0x2B59E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B59E0u, 0x13F31Cu, 0x13F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F324u;
label_13f324:
    // 0x13f324: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x13f324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_13f328:
    // 0x13f328: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x13f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_13f32c:
    // 0x13f32c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13f32cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_13f330:
    // 0x13f330: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_13f334:
    if (ctx->pc == 0x13F334u) {
        ctx->pc = 0x13F338u;
        goto label_13f338;
    }
    ctx->pc = 0x13F330u;
    {
        const bool branch_taken_0x13f330 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13f330) {
            ctx->pc = 0x13F344u;
            goto label_13f344;
        }
    }
    ctx->pc = 0x13F338u;
label_13f338:
    // 0x13f338: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13f338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f33c:
    // 0x13f33c: 0xc0ba070  jal         func_2E81C0
label_13f340:
    if (ctx->pc == 0x13F340u) {
        ctx->pc = 0x13F344u;
        goto label_13f344;
    }
    ctx->pc = 0x13F33Cu;
    SET_GPR_U32(ctx, 31, 0x13F344u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x13F33Cu, 0x13F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F344u;
label_13f344:
    // 0x13f344: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13f348:
    // 0x13f348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f34c:
    // 0x13f34c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13f34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13f350:
    // 0x13f350: 0x3e00008  jr          $ra
label_13f354:
    if (ctx->pc == 0x13F354u) {
        ctx->pc = 0x13F358u;
        goto label_13f358;
    }
    ctx->pc = 0x13F350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F358u;
label_13f358:
    // 0x13f358: 0x0  nop
    ctx->pc = 0x13f358u;
    // NOP
label_13f35c:
    // 0x13f35c: 0x0  nop
    ctx->pc = 0x13f35cu;
    // NOP
label_13f360:
    // 0x13f360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f364:
    // 0x13f364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13f368:
    // 0x13f368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f36c:
    // 0x13f36c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_13f370:
    // 0x13f370: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f374:
    // 0x13f374: 0xc08ec3c  jal         func_23B0F0
label_13f378:
    if (ctx->pc == 0x13F378u) {
        ctx->pc = 0x13F37Cu;
        goto label_13f37c;
    }
    ctx->pc = 0x13F374u;
    SET_GPR_U32(ctx, 31, 0x13F37Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x13F374u, 0x13F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F37Cu;
label_13f37c:
    // 0x13f37c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13f37cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13f380:
    // 0x13f380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f384:
    // 0x13f384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f388:
    // 0x13f388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f38c:
    // 0x13f38c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13f38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13f390:
    // 0x13f390: 0x3e00008  jr          $ra
label_13f394:
    if (ctx->pc == 0x13F394u) {
        ctx->pc = 0x13F398u;
        goto label_13f398;
    }
    ctx->pc = 0x13F390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F398u;
label_13f398:
    // 0x13f398: 0x0  nop
    ctx->pc = 0x13f398u;
    // NOP
label_13f39c:
    // 0x13f39c: 0x0  nop
    ctx->pc = 0x13f39cu;
    // NOP
label_13f3a0:
    // 0x13f3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f3a4:
    // 0x13f3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13f3a8:
    // 0x13f3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f3ac:
    // 0x13f3ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_13f3b0:
    // 0x13f3b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f3b4:
    // 0x13f3b4: 0xc08ec48  jal         func_23B120
label_13f3b8:
    if (ctx->pc == 0x13F3B8u) {
        ctx->pc = 0x13F3BCu;
        goto label_13f3bc;
    }
    ctx->pc = 0x13F3B4u;
    SET_GPR_U32(ctx, 31, 0x13F3BCu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x13F3B4u, 0x13F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3BCu;
label_13f3bc:
    // 0x13f3bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13f3bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13f3c0:
    // 0x13f3c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f3c4:
    // 0x13f3c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f3c8:
    // 0x13f3c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f3cc:
    // 0x13f3cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13f3d0:
    // 0x13f3d0: 0x3e00008  jr          $ra
label_13f3d4:
    if (ctx->pc == 0x13F3D4u) {
        ctx->pc = 0x13F3D8u;
        goto label_13f3d8;
    }
    ctx->pc = 0x13F3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F3D8u;
label_13f3d8:
    // 0x13f3d8: 0x0  nop
    ctx->pc = 0x13f3d8u;
    // NOP
label_13f3dc:
    // 0x13f3dc: 0x0  nop
    ctx->pc = 0x13f3dcu;
    // NOP
label_13f3e0:
    // 0x13f3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f3e4:
    // 0x13f3e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13f3e8:
    // 0x13f3e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f3ec:
    // 0x13f3ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_13f3f0:
    // 0x13f3f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f3f4:
    // 0x13f3f4: 0xc08ec5c  jal         func_23B170
label_13f3f8:
    if (ctx->pc == 0x13F3F8u) {
        ctx->pc = 0x13F3FCu;
        goto label_13f3fc;
    }
    ctx->pc = 0x13F3F4u;
    SET_GPR_U32(ctx, 31, 0x13F3FCu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x13F3F4u, 0x13F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3FCu;
label_13f3fc:
    // 0x13f3fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13f3fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13f400:
    // 0x13f400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f404:
    // 0x13f404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f408:
    // 0x13f408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f40c:
    // 0x13f40c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13f40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13f410:
    // 0x13f410: 0x3e00008  jr          $ra
label_13f414:
    if (ctx->pc == 0x13F414u) {
        ctx->pc = 0x13F418u;
        goto label_13f418;
    }
    ctx->pc = 0x13F410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F418u;
label_13f418:
    // 0x13f418: 0x0  nop
    ctx->pc = 0x13f418u;
    // NOP
label_13f41c:
    // 0x13f41c: 0x0  nop
    ctx->pc = 0x13f41cu;
    // NOP
label_13f420:
    // 0x13f420: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x13f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_13f424:
    // 0x13f424: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_13f428:
    // 0x13f428: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_13f42c:
    // 0x13f42c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13f430:
    // 0x13f430: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13f430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13f434:
    // 0x13f434: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13f438:
    // 0x13f438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13f43c:
    // 0x13f43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f440:
    // 0x13f440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f444:
    // 0x13f444: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x13f444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_13f448:
    // 0x13f448: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f44c:
    // 0x13f44c: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x13f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_13f450:
    // 0x13f450: 0x100300fe  beq         $zero, $v1, . + 4 + (0xFE << 2)
label_13f454:
    if (ctx->pc == 0x13F454u) {
        ctx->pc = 0x13F458u;
        goto label_13f458;
    }
    ctx->pc = 0x13F450u;
    {
        const bool branch_taken_0x13f450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x13f450) {
            ctx->pc = 0x13F84Cu;
            goto label_13f84c;
        }
    }
    ctx->pc = 0x13F458u;
label_13f458:
    // 0x13f458: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f45c:
    // 0x13f45c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x13f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_13f460:
    // 0x13f460: 0x100300fa  beq         $zero, $v1, . + 4 + (0xFA << 2)
label_13f464:
    if (ctx->pc == 0x13F464u) {
        ctx->pc = 0x13F468u;
        goto label_13f468;
    }
    ctx->pc = 0x13F460u;
    {
        const bool branch_taken_0x13f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x13f460) {
            ctx->pc = 0x13F84Cu;
            goto label_13f84c;
        }
    }
    ctx->pc = 0x13F468u;
label_13f468:
    // 0x13f468: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f46c:
    // 0x13f46c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13f470:
    // 0x13f470: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f474:
    // 0x13f474: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13f474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13f478:
    // 0x13f478: 0x320f809  jalr        $t9
label_13f47c:
    if (ctx->pc == 0x13F47Cu) {
        ctx->pc = 0x13F480u;
        goto label_13f480;
    }
    ctx->pc = 0x13F478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F480u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F478u, 0x13F480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F480u;
label_13f480:
    // 0x13f480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f484:
    // 0x13f484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f488:
    // 0x13f488: 0x27858c80  addiu       $a1, $gp, -0x7380
    ctx->pc = 0x13f488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
label_13f48c:
    // 0x13f48c: 0xc124f70  jal         func_493DC0
label_13f490:
    if (ctx->pc == 0x13F490u) {
        ctx->pc = 0x13F494u;
        goto label_13f494;
    }
    ctx->pc = 0x13F48Cu;
    SET_GPR_U32(ctx, 31, 0x13F494u);
    ctx->pc = 0x493DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493DC0u, 0x13F48Cu, 0x13F494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F494u;
label_13f494:
    // 0x13f494: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13f494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f498:
    // 0x13f498: 0x12c0001e  beqz        $s6, . + 4 + (0x1E << 2)
label_13f49c:
    if (ctx->pc == 0x13F49Cu) {
        ctx->pc = 0x13F4A0u;
        goto label_13f4a0;
    }
    ctx->pc = 0x13F498u;
    {
        const bool branch_taken_0x13f498 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f498) {
            ctx->pc = 0x13F514u;
            goto label_13f514;
        }
    }
    ctx->pc = 0x13F4A0u;
label_13f4a0:
    // 0x13f4a0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f4a4:
    // 0x13f4a4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13f4a8:
    // 0x13f4a8: 0xc04fe20  jal         func_13F880
label_13f4ac:
    if (ctx->pc == 0x13F4ACu) {
        ctx->pc = 0x13F4B0u;
        goto label_13f4b0;
    }
    ctx->pc = 0x13F4A8u;
    SET_GPR_U32(ctx, 31, 0x13F4B0u);
    ctx->pc = 0x13F880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F880u, 0x13F4A8u, 0x13F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4B0u;
label_13f4b0:
    // 0x13f4b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_13f4b4:
    if (ctx->pc == 0x13F4B4u) {
        ctx->pc = 0x13F4B8u;
        goto label_13f4b8;
    }
    ctx->pc = 0x13F4B0u;
    {
        const bool branch_taken_0x13f4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f4b0) {
            ctx->pc = 0x13F528u;
            goto label_13f528;
        }
    }
    ctx->pc = 0x13F4B8u;
label_13f4b8:
    // 0x13f4b8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f4bc:
    // 0x13f4bc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13f4c0:
    // 0x13f4c0: 0xc0acb38  jal         func_2B2CE0
label_13f4c4:
    if (ctx->pc == 0x13F4C4u) {
        ctx->pc = 0x13F4C8u;
        goto label_13f4c8;
    }
    ctx->pc = 0x13F4C0u;
    SET_GPR_U32(ctx, 31, 0x13F4C8u);
    ctx->pc = 0x2B2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2CE0u, 0x13F4C0u, 0x13F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4C8u;
label_13f4c8:
    // 0x13f4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f4cc:
    // 0x13f4cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13f4d0:
    // 0x13f4d0: 0xc085538  jal         func_2154E0
label_13f4d4:
    if (ctx->pc == 0x13F4D4u) {
        ctx->pc = 0x13F4D8u;
        goto label_13f4d8;
    }
    ctx->pc = 0x13F4D0u;
    SET_GPR_U32(ctx, 31, 0x13F4D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13F4D0u, 0x13F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4D8u;
label_13f4d8:
    // 0x13f4d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13f4d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f4dc:
    // 0x13f4dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13f4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f4e0:
    // 0x13f4e0: 0xc0a82cc  jal         func_2A0B30
label_13f4e4:
    if (ctx->pc == 0x13F4E4u) {
        ctx->pc = 0x13F4E8u;
        goto label_13f4e8;
    }
    ctx->pc = 0x13F4E0u;
    SET_GPR_U32(ctx, 31, 0x13F4E8u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x13F4E0u, 0x13F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4E8u;
label_13f4e8:
    // 0x13f4e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13f4e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f4ec:
    // 0x13f4ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13f4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f4f0:
    // 0x13f4f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13f4f4:
    // 0x13f4f4: 0xc121e84  jal         func_487A10
label_13f4f8:
    if (ctx->pc == 0x13F4F8u) {
        ctx->pc = 0x13F4FCu;
        goto label_13f4fc;
    }
    ctx->pc = 0x13F4F4u;
    SET_GPR_U32(ctx, 31, 0x13F4FCu);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x13F4F4u, 0x13F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4FCu;
label_13f4fc:
    // 0x13f4fc: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_13f500:
    // 0x13f500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f504:
    // 0x13f504: 0xc041d58  jal         func_107560
label_13f508:
    if (ctx->pc == 0x13F508u) {
        ctx->pc = 0x13F50Cu;
        goto label_13f50c;
    }
    ctx->pc = 0x13F504u;
    SET_GPR_U32(ctx, 31, 0x13F50Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x13F504u, 0x13F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F50Cu;
label_13f50c:
    // 0x13f50c: 0x10000006  b           . + 4 + (0x6 << 2)
label_13f510:
    if (ctx->pc == 0x13F510u) {
        ctx->pc = 0x13F514u;
        goto label_13f514;
    }
    ctx->pc = 0x13F50Cu;
    {
        const bool branch_taken_0x13f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f50c) {
            ctx->pc = 0x13F528u;
            goto label_13f528;
        }
    }
    ctx->pc = 0x13F514u;
label_13f514:
    // 0x13f514: 0x26150010  addiu       $s5, $s0, 0x10
    ctx->pc = 0x13f514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_13f518:
    // 0x13f518: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x13f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_13f51c:
    // 0x13f51c: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x13f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_13f520:
    // 0x13f520: 0xc041d58  jal         func_107560
label_13f524:
    if (ctx->pc == 0x13F524u) {
        ctx->pc = 0x13F528u;
        goto label_13f528;
    }
    ctx->pc = 0x13F520u;
    SET_GPR_U32(ctx, 31, 0x13F528u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x13F520u, 0x13F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F528u;
label_13f528:
    // 0x13f528: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f52c:
    // 0x13f52c: 0x90420062  lbu         $v0, 0x62($v0)
    ctx->pc = 0x13f52cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 98)));
label_13f530:
    // 0x13f530: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_13f534:
    if (ctx->pc == 0x13F534u) {
        ctx->pc = 0x13F538u;
        goto label_13f538;
    }
    ctx->pc = 0x13F530u;
    {
        const bool branch_taken_0x13f530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f530) {
            ctx->pc = 0x13F54Cu;
            goto label_13f54c;
        }
    }
    ctx->pc = 0x13F538u;
label_13f538:
    // 0x13f538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f53c:
    // 0x13f53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f540:
    // 0x13f540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f544:
    // 0x13f544: 0xc050134  jal         func_1404D0
label_13f548:
    if (ctx->pc == 0x13F548u) {
        ctx->pc = 0x13F54Cu;
        goto label_13f54c;
    }
    ctx->pc = 0x13F544u;
    SET_GPR_U32(ctx, 31, 0x13F54Cu);
    ctx->pc = 0x1404D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1404D0u, 0x13F544u, 0x13F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F54Cu;
label_13f54c:
    // 0x13f54c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f550:
    // 0x13f550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f554:
    // 0x13f554: 0xc050504  jal         func_141410
label_13f558:
    if (ctx->pc == 0x13F558u) {
        ctx->pc = 0x13F55Cu;
        goto label_13f55c;
    }
    ctx->pc = 0x13F554u;
    SET_GPR_U32(ctx, 31, 0x13F55Cu);
    ctx->pc = 0x141410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141410u, 0x13F554u, 0x13F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F55Cu;
label_13f55c:
    // 0x13f55c: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x13f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_13f560:
    // 0x13f560: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f564:
    // 0x13f564: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13f564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13f568:
    // 0x13f568: 0xc097444  jal         func_25D110
label_13f56c:
    if (ctx->pc == 0x13F56Cu) {
        ctx->pc = 0x13F570u;
        goto label_13f570;
    }
    ctx->pc = 0x13F568u;
    SET_GPR_U32(ctx, 31, 0x13F570u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13F568u, 0x13F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F570u;
label_13f570:
    // 0x13f570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f574:
    // 0x13f574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13f574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f578:
    // 0x13f578: 0xc089af0  jal         func_226BC0
label_13f57c:
    if (ctx->pc == 0x13F57Cu) {
        ctx->pc = 0x13F580u;
        goto label_13f580;
    }
    ctx->pc = 0x13F578u;
    SET_GPR_U32(ctx, 31, 0x13F580u);
    ctx->pc = 0x226BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226BC0u, 0x13F578u, 0x13F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F580u;
label_13f580:
    // 0x13f580: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x13f580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_13f584:
    // 0x13f584: 0xc7ac0188  lwc1        $f12, 0x188($sp)
    ctx->pc = 0x13f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13f588:
    // 0x13f588: 0xc0503e4  jal         func_140F90
label_13f58c:
    if (ctx->pc == 0x13F58Cu) {
        ctx->pc = 0x13F590u;
        goto label_13f590;
    }
    ctx->pc = 0x13F588u;
    SET_GPR_U32(ctx, 31, 0x13F590u);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x13F588u, 0x13F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F590u;
label_13f590:
    // 0x13f590: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x13f590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_13f594:
    // 0x13f594: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x13f594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f598:
    // 0x13f598: 0xc7ac0188  lwc1        $f12, 0x188($sp)
    ctx->pc = 0x13f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13f59c:
    // 0x13f59c: 0xc7ad018c  lwc1        $f13, 0x18C($sp)
    ctx->pc = 0x13f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_13f5a0:
    // 0x13f5a0: 0xc05044c  jal         func_141130
label_13f5a4:
    if (ctx->pc == 0x13F5A4u) {
        ctx->pc = 0x13F5A8u;
        goto label_13f5a8;
    }
    ctx->pc = 0x13F5A0u;
    SET_GPR_U32(ctx, 31, 0x13F5A8u);
    ctx->pc = 0x141130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141130u, 0x13F5A0u, 0x13F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5A8u;
label_13f5a8:
    // 0x13f5a8: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_13f5ac:
    // 0x13f5ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13f5b0:
    // 0x13f5b0: 0xc04fbd0  jal         func_13EF40
label_13f5b4:
    if (ctx->pc == 0x13F5B4u) {
        ctx->pc = 0x13F5B8u;
        goto label_13f5b8;
    }
    ctx->pc = 0x13F5B0u;
    SET_GPR_U32(ctx, 31, 0x13F5B8u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x13F5B0u, 0x13F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5B8u;
label_13f5b8:
    // 0x13f5b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13f5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f5bc:
    // 0x13f5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f5c0:
    // 0x13f5c0: 0xc04d0fc  jal         func_1343F0
label_13f5c4:
    if (ctx->pc == 0x13F5C4u) {
        ctx->pc = 0x13F5C8u;
        goto label_13f5c8;
    }
    ctx->pc = 0x13F5C0u;
    SET_GPR_U32(ctx, 31, 0x13F5C8u);
    ctx->pc = 0x1343F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1343F0u, 0x13F5C0u, 0x13F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5C8u;
label_13f5c8:
    // 0x13f5c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13f5cc:
    if (ctx->pc == 0x13F5CCu) {
        ctx->pc = 0x13F5D0u;
        goto label_13f5d0;
    }
    ctx->pc = 0x13F5C8u;
    {
        const bool branch_taken_0x13f5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5c8) {
            ctx->pc = 0x13F5ECu;
            goto label_13f5ec;
        }
    }
    ctx->pc = 0x13F5D0u;
label_13f5d0:
    // 0x13f5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f5d4:
    // 0x13f5d4: 0xc04d104  jal         func_134410
label_13f5d8:
    if (ctx->pc == 0x13F5D8u) {
        ctx->pc = 0x13F5DCu;
        goto label_13f5dc;
    }
    ctx->pc = 0x13F5D4u;
    SET_GPR_U32(ctx, 31, 0x13F5DCu);
    ctx->pc = 0x134410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134410u, 0x13F5D4u, 0x13F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5DCu;
label_13f5dc:
    // 0x13f5dc: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_13f5e0:
    // 0x13f5e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f5e4:
    // 0x13f5e4: 0xc041d58  jal         func_107560
label_13f5e8:
    if (ctx->pc == 0x13F5E8u) {
        ctx->pc = 0x13F5ECu;
        goto label_13f5ec;
    }
    ctx->pc = 0x13F5E4u;
    SET_GPR_U32(ctx, 31, 0x13F5ECu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x13F5E4u, 0x13F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5ECu;
label_13f5ec:
    // 0x13f5ec: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f5f0:
    // 0x13f5f0: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x13f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13f5f4:
    // 0x13f5f4: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x13f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f5f8:
    // 0x13f5f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13f5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13f5fc:
    // 0x13f5fc: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x13f5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_13f600:
    // 0x13f600: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f604:
    // 0x13f604: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13f604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13f608:
    // 0x13f608: 0xc097444  jal         func_25D110
label_13f60c:
    if (ctx->pc == 0x13F60Cu) {
        ctx->pc = 0x13F610u;
        goto label_13f610;
    }
    ctx->pc = 0x13F608u;
    SET_GPR_U32(ctx, 31, 0x13F610u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13F608u, 0x13F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F610u;
label_13f610:
    // 0x13f610: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f614:
    // 0x13f614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f618:
    // 0x13f618: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x13f618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_13f61c:
    // 0x13f61c: 0x90660062  lbu         $a2, 0x62($v1)
    ctx->pc = 0x13f61cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 98)));
label_13f620:
    // 0x13f620: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f624:
    // 0x13f624: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13f624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13f628:
    // 0x13f628: 0x320f809  jalr        $t9
label_13f62c:
    if (ctx->pc == 0x13F62Cu) {
        ctx->pc = 0x13F630u;
        goto label_13f630;
    }
    ctx->pc = 0x13F628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F630u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F628u, 0x13F630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F630u;
label_13f630:
    // 0x13f630: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x13f630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_13f634:
    // 0x13f634: 0x24842870  addiu       $a0, $a0, 0x2870
    ctx->pc = 0x13f634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10352));
label_13f638:
    // 0x13f638: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x13f638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_13f63c:
    // 0x13f63c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x13f63cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_13f640:
    // 0x13f640: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x13f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f644:
    // 0x13f644: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x13f644u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_13f648:
    // 0x13f648: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13f648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_13f64c:
    // 0x13f64c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f650:
    // 0x13f650: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13f650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13f654:
    // 0x13f654: 0xc097444  jal         func_25D110
label_13f658:
    if (ctx->pc == 0x13F658u) {
        ctx->pc = 0x13F65Cu;
        goto label_13f65c;
    }
    ctx->pc = 0x13F654u;
    SET_GPR_U32(ctx, 31, 0x13F65Cu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13F654u, 0x13F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F65Cu;
label_13f65c:
    // 0x13f65c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f660:
    // 0x13f660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13f660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13f664:
    // 0x13f664: 0xc089a88  jal         func_226A20
label_13f668:
    if (ctx->pc == 0x13F668u) {
        ctx->pc = 0x13F66Cu;
        goto label_13f66c;
    }
    ctx->pc = 0x13F664u;
    SET_GPR_U32(ctx, 31, 0x13F66Cu);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x13F664u, 0x13F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F66Cu;
label_13f66c:
    // 0x13f66c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f670:
    // 0x13f670: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x13f670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_13f674:
    // 0x13f674: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13f674u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13f678:
    // 0x13f678: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_13f67c:
    // 0x13f67c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_13f680:
    // 0x13f680: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x13f680u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_13f684:
    // 0x13f684: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13f684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_13f688:
    // 0x13f688: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
label_13f68c:
    if (ctx->pc == 0x13F68Cu) {
        ctx->pc = 0x13F690u;
        goto label_13f690;
    }
    ctx->pc = 0x13F688u;
    {
        const bool branch_taken_0x13f688 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x13f688) {
            ctx->pc = 0x13F674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f674;
        }
    }
    ctx->pc = 0x13F690u;
label_13f690:
    // 0x13f690: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f694:
    // 0x13f694: 0xc106638  jal         func_4198E0
label_13f698:
    if (ctx->pc == 0x13F698u) {
        ctx->pc = 0x13F69Cu;
        goto label_13f69c;
    }
    ctx->pc = 0x13F694u;
    SET_GPR_U32(ctx, 31, 0x13F69Cu);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x13F694u, 0x13F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F69Cu;
label_13f69c:
    // 0x13f69c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f6a0:
    // 0x13f6a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f6a4:
    // 0x13f6a4: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x13f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_13f6a8:
    // 0x13f6a8: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x13f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13f6ac:
    // 0x13f6ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f6b0:
    // 0x13f6b0: 0xc1065b8  jal         func_4196E0
label_13f6b4:
    if (ctx->pc == 0x13F6B4u) {
        ctx->pc = 0x13F6B8u;
        goto label_13f6b8;
    }
    ctx->pc = 0x13F6B0u;
    SET_GPR_U32(ctx, 31, 0x13F6B8u);
    ctx->pc = 0x4196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4196E0u, 0x13F6B0u, 0x13F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6B8u;
label_13f6b8:
    // 0x13f6b8: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x13f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_13f6bc:
    // 0x13f6bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f6c0:
    // 0x13f6c0: 0xc041d58  jal         func_107560
label_13f6c4:
    if (ctx->pc == 0x13F6C4u) {
        ctx->pc = 0x13F6C8u;
        goto label_13f6c8;
    }
    ctx->pc = 0x13F6C0u;
    SET_GPR_U32(ctx, 31, 0x13F6C8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x13F6C0u, 0x13F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6C8u;
label_13f6c8:
    // 0x13f6c8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f6cc:
    // 0x13f6cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f6d0:
    // 0x13f6d0: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x13f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_13f6d4:
    // 0x13f6d4: 0xc44c0054  lwc1        $f12, 0x54($v0)
    ctx->pc = 0x13f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13f6d8:
    // 0x13f6d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f6dc:
    // 0x13f6dc: 0xc1065b8  jal         func_4196E0
label_13f6e0:
    if (ctx->pc == 0x13F6E0u) {
        ctx->pc = 0x13F6E4u;
        goto label_13f6e4;
    }
    ctx->pc = 0x13F6DCu;
    SET_GPR_U32(ctx, 31, 0x13F6E4u);
    ctx->pc = 0x4196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4196E0u, 0x13F6DCu, 0x13F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6E4u;
label_13f6e4:
    // 0x13f6e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f6e8:
    // 0x13f6e8: 0x0  nop
    ctx->pc = 0x13f6e8u;
    // NOP
label_13f6ec:
    // 0x13f6ec: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x13f6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_13f6f0:
    // 0x13f6f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f6f4:
    // 0x13f6f4: 0x0  nop
    ctx->pc = 0x13f6f4u;
    // NOP
label_13f6f8:
    // 0x13f6f8: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x13f6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_13f6fc:
    // 0x13f6fc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f700:
    // 0x13f700: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x13f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f704:
    // 0x13f704: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13f704u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_13f708:
    // 0x13f708: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x13f708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_13f70c:
    // 0x13f70c: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x13f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_13f710:
    // 0x13f710: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x13f710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_13f714:
    // 0x13f714: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x13f714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f718:
    // 0x13f718: 0xc104d64  jal         func_413590
label_13f71c:
    if (ctx->pc == 0x13F71Cu) {
        ctx->pc = 0x13F720u;
        goto label_13f720;
    }
    ctx->pc = 0x13F718u;
    SET_GPR_U32(ctx, 31, 0x13F720u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x13F718u, 0x13F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F720u;
label_13f720:
    // 0x13f720: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f724:
    // 0x13f724: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x13f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_13f728:
    // 0x13f728: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13f728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f72c:
    // 0x13f72c: 0xc106598  jal         func_419660
label_13f730:
    if (ctx->pc == 0x13F730u) {
        ctx->pc = 0x13F734u;
        goto label_13f734;
    }
    ctx->pc = 0x13F72Cu;
    SET_GPR_U32(ctx, 31, 0x13F734u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x13F72Cu, 0x13F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F734u;
label_13f734:
    // 0x13f734: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f738:
    // 0x13f738: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x13f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_13f73c:
    // 0x13f73c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f740:
    // 0x13f740: 0xc106598  jal         func_419660
label_13f744:
    if (ctx->pc == 0x13F744u) {
        ctx->pc = 0x13F748u;
        goto label_13f748;
    }
    ctx->pc = 0x13F740u;
    SET_GPR_U32(ctx, 31, 0x13F748u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x13F740u, 0x13F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F748u;
label_13f748:
    // 0x13f748: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x13f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_13f74c:
    // 0x13f74c: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_13f750:
    // 0x13f750: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x13f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13f754:
    // 0x13f754: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x13f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13f758:
    // 0x13f758: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x13f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f75c:
    // 0x13f75c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x13f75cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_13f760:
    // 0x13f760: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x13f760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_13f764:
    // 0x13f764: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x13f764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13f768:
    // 0x13f768: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f76c:
    // 0x13f76c: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13f770:
    // 0x13f770: 0xc097444  jal         func_25D110
label_13f774:
    if (ctx->pc == 0x13F774u) {
        ctx->pc = 0x13F778u;
        goto label_13f778;
    }
    ctx->pc = 0x13F770u;
    SET_GPR_U32(ctx, 31, 0x13F778u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13F770u, 0x13F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F778u;
label_13f778:
    // 0x13f778: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f77c:
    // 0x13f77c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f780:
    // 0x13f780: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x13f780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_13f784:
    // 0x13f784: 0x90660062  lbu         $a2, 0x62($v1)
    ctx->pc = 0x13f784u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 98)));
label_13f788:
    // 0x13f788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f78c:
    // 0x13f78c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x13f78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_13f790:
    // 0x13f790: 0x320f809  jalr        $t9
label_13f794:
    if (ctx->pc == 0x13F794u) {
        ctx->pc = 0x13F798u;
        goto label_13f798;
    }
    ctx->pc = 0x13F790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F790u, 0x13F798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F798u;
label_13f798:
    // 0x13f798: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f79c:
    // 0x13f79c: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13f7a0:
    // 0x13f7a0: 0xc097444  jal         func_25D110
label_13f7a4:
    if (ctx->pc == 0x13F7A4u) {
        ctx->pc = 0x13F7A8u;
        goto label_13f7a8;
    }
    ctx->pc = 0x13F7A0u;
    SET_GPR_U32(ctx, 31, 0x13F7A8u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13F7A0u, 0x13F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7A8u;
label_13f7a8:
    // 0x13f7a8: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x13f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f7ac:
    // 0x13f7ac: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f7b0:
    // 0x13f7b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f7b4:
    // 0x13f7b4: 0xc4ac005c  lwc1        $f12, 0x5C($a1)
    ctx->pc = 0x13f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13f7b8:
    // 0x13f7b8: 0x90650062  lbu         $a1, 0x62($v1)
    ctx->pc = 0x13f7b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 98)));
label_13f7bc:
    // 0x13f7bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f7c0:
    // 0x13f7c0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x13f7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_13f7c4:
    // 0x13f7c4: 0x320f809  jalr        $t9
label_13f7c8:
    if (ctx->pc == 0x13F7C8u) {
        ctx->pc = 0x13F7CCu;
        goto label_13f7cc;
    }
    ctx->pc = 0x13F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F7CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F7C4u, 0x13F7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F7CCu;
label_13f7cc:
    // 0x13f7cc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f7d0:
    // 0x13f7d0: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13f7d4:
    // 0x13f7d4: 0xc097444  jal         func_25D110
label_13f7d8:
    if (ctx->pc == 0x13F7D8u) {
        ctx->pc = 0x13F7DCu;
        goto label_13f7dc;
    }
    ctx->pc = 0x13F7D4u;
    SET_GPR_U32(ctx, 31, 0x13F7DCu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13F7D4u, 0x13F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7DCu;
label_13f7dc:
    // 0x13f7dc: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x13f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_13f7e0:
    // 0x13f7e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f7e4:
    // 0x13f7e4: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x13f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13f7e8:
    // 0x13f7e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f7ec:
    // 0x13f7ec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x13f7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_13f7f0:
    // 0x13f7f0: 0x320f809  jalr        $t9
label_13f7f4:
    if (ctx->pc == 0x13F7F4u) {
        ctx->pc = 0x13F7F8u;
        goto label_13f7f8;
    }
    ctx->pc = 0x13F7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F7F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F7F0u, 0x13F7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F7F8u;
label_13f7f8:
    // 0x13f7f8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x13f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f7fc:
    // 0x13f7fc: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13f800:
    // 0x13f800: 0xc097444  jal         func_25D110
label_13f804:
    if (ctx->pc == 0x13F804u) {
        ctx->pc = 0x13F808u;
        goto label_13f808;
    }
    ctx->pc = 0x13F800u;
    SET_GPR_U32(ctx, 31, 0x13F808u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13F800u, 0x13F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F808u;
label_13f808:
    // 0x13f808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f80c:
    // 0x13f80c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f810:
    // 0x13f810: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x13f810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_13f814:
    // 0x13f814: 0x320f809  jalr        $t9
label_13f818:
    if (ctx->pc == 0x13F818u) {
        ctx->pc = 0x13F81Cu;
        goto label_13f81c;
    }
    ctx->pc = 0x13F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F81Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F814u, 0x13F81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F81Cu;
label_13f81c:
    // 0x13f81c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f820:
    // 0x13f820: 0xa0600062  sb          $zero, 0x62($v1)
    ctx->pc = 0x13f820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 98), (uint8_t)GPR_U32(ctx, 0));
label_13f824:
    // 0x13f824: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f828:
    // 0x13f828: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x13f828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
label_13f82c:
    // 0x13f82c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f830:
    // 0x13f830: 0xa0600061  sb          $zero, 0x61($v1)
    ctx->pc = 0x13f830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 97), (uint8_t)GPR_U32(ctx, 0));
label_13f834:
    // 0x13f834: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x13f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f838:
    // 0x13f838: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f83c:
    // 0x13f83c: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x13f83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
label_13f840:
    // 0x13f840: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x13f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f844:
    // 0x13f844: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x13f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_13f848:
    // 0x13f848: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x13f848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_13f84c:
    // 0x13f84c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13f84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_13f850:
    // 0x13f850: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13f850u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13f854:
    // 0x13f854: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13f854u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13f858:
    // 0x13f858: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13f858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13f85c:
    // 0x13f85c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13f85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13f860:
    // 0x13f860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f864:
    // 0x13f864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f868:
    // 0x13f868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f86c:
    // 0x13f86c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x13f86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_13f870:
    // 0x13f870: 0x3e00008  jr          $ra
label_13f874:
    if (ctx->pc == 0x13F874u) {
        ctx->pc = 0x13F878u;
        goto label_13f878;
    }
    ctx->pc = 0x13F870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F878u;
label_13f878:
    // 0x13f878: 0x0  nop
    ctx->pc = 0x13f878u;
    // NOP
label_13f87c:
    // 0x13f87c: 0x0  nop
    ctx->pc = 0x13f87cu;
    // NOP
    ctx->pc = 0x13f880u;
}
