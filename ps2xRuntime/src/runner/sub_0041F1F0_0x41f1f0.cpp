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

// Function: sub_0041F1F0
// Address: 0x41f1f0 - 0x41f8d0
void sub_0041F1F0_0x41f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F1F0_0x41f1f0");
#endif

    switch (ctx->pc) {
        case 0x41f1f0u: goto label_41f1f0;
        case 0x41f1f4u: goto label_41f1f4;
        case 0x41f1f8u: goto label_41f1f8;
        case 0x41f1fcu: goto label_41f1fc;
        case 0x41f200u: goto label_41f200;
        case 0x41f204u: goto label_41f204;
        case 0x41f208u: goto label_41f208;
        case 0x41f20cu: goto label_41f20c;
        case 0x41f210u: goto label_41f210;
        case 0x41f214u: goto label_41f214;
        case 0x41f218u: goto label_41f218;
        case 0x41f21cu: goto label_41f21c;
        case 0x41f220u: goto label_41f220;
        case 0x41f224u: goto label_41f224;
        case 0x41f228u: goto label_41f228;
        case 0x41f22cu: goto label_41f22c;
        case 0x41f230u: goto label_41f230;
        case 0x41f234u: goto label_41f234;
        case 0x41f238u: goto label_41f238;
        case 0x41f23cu: goto label_41f23c;
        case 0x41f240u: goto label_41f240;
        case 0x41f244u: goto label_41f244;
        case 0x41f248u: goto label_41f248;
        case 0x41f24cu: goto label_41f24c;
        case 0x41f250u: goto label_41f250;
        case 0x41f254u: goto label_41f254;
        case 0x41f258u: goto label_41f258;
        case 0x41f25cu: goto label_41f25c;
        case 0x41f260u: goto label_41f260;
        case 0x41f264u: goto label_41f264;
        case 0x41f268u: goto label_41f268;
        case 0x41f26cu: goto label_41f26c;
        case 0x41f270u: goto label_41f270;
        case 0x41f274u: goto label_41f274;
        case 0x41f278u: goto label_41f278;
        case 0x41f27cu: goto label_41f27c;
        case 0x41f280u: goto label_41f280;
        case 0x41f284u: goto label_41f284;
        case 0x41f288u: goto label_41f288;
        case 0x41f28cu: goto label_41f28c;
        case 0x41f290u: goto label_41f290;
        case 0x41f294u: goto label_41f294;
        case 0x41f298u: goto label_41f298;
        case 0x41f29cu: goto label_41f29c;
        case 0x41f2a0u: goto label_41f2a0;
        case 0x41f2a4u: goto label_41f2a4;
        case 0x41f2a8u: goto label_41f2a8;
        case 0x41f2acu: goto label_41f2ac;
        case 0x41f2b0u: goto label_41f2b0;
        case 0x41f2b4u: goto label_41f2b4;
        case 0x41f2b8u: goto label_41f2b8;
        case 0x41f2bcu: goto label_41f2bc;
        case 0x41f2c0u: goto label_41f2c0;
        case 0x41f2c4u: goto label_41f2c4;
        case 0x41f2c8u: goto label_41f2c8;
        case 0x41f2ccu: goto label_41f2cc;
        case 0x41f2d0u: goto label_41f2d0;
        case 0x41f2d4u: goto label_41f2d4;
        case 0x41f2d8u: goto label_41f2d8;
        case 0x41f2dcu: goto label_41f2dc;
        case 0x41f2e0u: goto label_41f2e0;
        case 0x41f2e4u: goto label_41f2e4;
        case 0x41f2e8u: goto label_41f2e8;
        case 0x41f2ecu: goto label_41f2ec;
        case 0x41f2f0u: goto label_41f2f0;
        case 0x41f2f4u: goto label_41f2f4;
        case 0x41f2f8u: goto label_41f2f8;
        case 0x41f2fcu: goto label_41f2fc;
        case 0x41f300u: goto label_41f300;
        case 0x41f304u: goto label_41f304;
        case 0x41f308u: goto label_41f308;
        case 0x41f30cu: goto label_41f30c;
        case 0x41f310u: goto label_41f310;
        case 0x41f314u: goto label_41f314;
        case 0x41f318u: goto label_41f318;
        case 0x41f31cu: goto label_41f31c;
        case 0x41f320u: goto label_41f320;
        case 0x41f324u: goto label_41f324;
        case 0x41f328u: goto label_41f328;
        case 0x41f32cu: goto label_41f32c;
        case 0x41f330u: goto label_41f330;
        case 0x41f334u: goto label_41f334;
        case 0x41f338u: goto label_41f338;
        case 0x41f33cu: goto label_41f33c;
        case 0x41f340u: goto label_41f340;
        case 0x41f344u: goto label_41f344;
        case 0x41f348u: goto label_41f348;
        case 0x41f34cu: goto label_41f34c;
        case 0x41f350u: goto label_41f350;
        case 0x41f354u: goto label_41f354;
        case 0x41f358u: goto label_41f358;
        case 0x41f35cu: goto label_41f35c;
        case 0x41f360u: goto label_41f360;
        case 0x41f364u: goto label_41f364;
        case 0x41f368u: goto label_41f368;
        case 0x41f36cu: goto label_41f36c;
        case 0x41f370u: goto label_41f370;
        case 0x41f374u: goto label_41f374;
        case 0x41f378u: goto label_41f378;
        case 0x41f37cu: goto label_41f37c;
        case 0x41f380u: goto label_41f380;
        case 0x41f384u: goto label_41f384;
        case 0x41f388u: goto label_41f388;
        case 0x41f38cu: goto label_41f38c;
        case 0x41f390u: goto label_41f390;
        case 0x41f394u: goto label_41f394;
        case 0x41f398u: goto label_41f398;
        case 0x41f39cu: goto label_41f39c;
        case 0x41f3a0u: goto label_41f3a0;
        case 0x41f3a4u: goto label_41f3a4;
        case 0x41f3a8u: goto label_41f3a8;
        case 0x41f3acu: goto label_41f3ac;
        case 0x41f3b0u: goto label_41f3b0;
        case 0x41f3b4u: goto label_41f3b4;
        case 0x41f3b8u: goto label_41f3b8;
        case 0x41f3bcu: goto label_41f3bc;
        case 0x41f3c0u: goto label_41f3c0;
        case 0x41f3c4u: goto label_41f3c4;
        case 0x41f3c8u: goto label_41f3c8;
        case 0x41f3ccu: goto label_41f3cc;
        case 0x41f3d0u: goto label_41f3d0;
        case 0x41f3d4u: goto label_41f3d4;
        case 0x41f3d8u: goto label_41f3d8;
        case 0x41f3dcu: goto label_41f3dc;
        case 0x41f3e0u: goto label_41f3e0;
        case 0x41f3e4u: goto label_41f3e4;
        case 0x41f3e8u: goto label_41f3e8;
        case 0x41f3ecu: goto label_41f3ec;
        case 0x41f3f0u: goto label_41f3f0;
        case 0x41f3f4u: goto label_41f3f4;
        case 0x41f3f8u: goto label_41f3f8;
        case 0x41f3fcu: goto label_41f3fc;
        case 0x41f400u: goto label_41f400;
        case 0x41f404u: goto label_41f404;
        case 0x41f408u: goto label_41f408;
        case 0x41f40cu: goto label_41f40c;
        case 0x41f410u: goto label_41f410;
        case 0x41f414u: goto label_41f414;
        case 0x41f418u: goto label_41f418;
        case 0x41f41cu: goto label_41f41c;
        case 0x41f420u: goto label_41f420;
        case 0x41f424u: goto label_41f424;
        case 0x41f428u: goto label_41f428;
        case 0x41f42cu: goto label_41f42c;
        case 0x41f430u: goto label_41f430;
        case 0x41f434u: goto label_41f434;
        case 0x41f438u: goto label_41f438;
        case 0x41f43cu: goto label_41f43c;
        case 0x41f440u: goto label_41f440;
        case 0x41f444u: goto label_41f444;
        case 0x41f448u: goto label_41f448;
        case 0x41f44cu: goto label_41f44c;
        case 0x41f450u: goto label_41f450;
        case 0x41f454u: goto label_41f454;
        case 0x41f458u: goto label_41f458;
        case 0x41f45cu: goto label_41f45c;
        case 0x41f460u: goto label_41f460;
        case 0x41f464u: goto label_41f464;
        case 0x41f468u: goto label_41f468;
        case 0x41f46cu: goto label_41f46c;
        case 0x41f470u: goto label_41f470;
        case 0x41f474u: goto label_41f474;
        case 0x41f478u: goto label_41f478;
        case 0x41f47cu: goto label_41f47c;
        case 0x41f480u: goto label_41f480;
        case 0x41f484u: goto label_41f484;
        case 0x41f488u: goto label_41f488;
        case 0x41f48cu: goto label_41f48c;
        case 0x41f490u: goto label_41f490;
        case 0x41f494u: goto label_41f494;
        case 0x41f498u: goto label_41f498;
        case 0x41f49cu: goto label_41f49c;
        case 0x41f4a0u: goto label_41f4a0;
        case 0x41f4a4u: goto label_41f4a4;
        case 0x41f4a8u: goto label_41f4a8;
        case 0x41f4acu: goto label_41f4ac;
        case 0x41f4b0u: goto label_41f4b0;
        case 0x41f4b4u: goto label_41f4b4;
        case 0x41f4b8u: goto label_41f4b8;
        case 0x41f4bcu: goto label_41f4bc;
        case 0x41f4c0u: goto label_41f4c0;
        case 0x41f4c4u: goto label_41f4c4;
        case 0x41f4c8u: goto label_41f4c8;
        case 0x41f4ccu: goto label_41f4cc;
        case 0x41f4d0u: goto label_41f4d0;
        case 0x41f4d4u: goto label_41f4d4;
        case 0x41f4d8u: goto label_41f4d8;
        case 0x41f4dcu: goto label_41f4dc;
        case 0x41f4e0u: goto label_41f4e0;
        case 0x41f4e4u: goto label_41f4e4;
        case 0x41f4e8u: goto label_41f4e8;
        case 0x41f4ecu: goto label_41f4ec;
        case 0x41f4f0u: goto label_41f4f0;
        case 0x41f4f4u: goto label_41f4f4;
        case 0x41f4f8u: goto label_41f4f8;
        case 0x41f4fcu: goto label_41f4fc;
        case 0x41f500u: goto label_41f500;
        case 0x41f504u: goto label_41f504;
        case 0x41f508u: goto label_41f508;
        case 0x41f50cu: goto label_41f50c;
        case 0x41f510u: goto label_41f510;
        case 0x41f514u: goto label_41f514;
        case 0x41f518u: goto label_41f518;
        case 0x41f51cu: goto label_41f51c;
        case 0x41f520u: goto label_41f520;
        case 0x41f524u: goto label_41f524;
        case 0x41f528u: goto label_41f528;
        case 0x41f52cu: goto label_41f52c;
        case 0x41f530u: goto label_41f530;
        case 0x41f534u: goto label_41f534;
        case 0x41f538u: goto label_41f538;
        case 0x41f53cu: goto label_41f53c;
        case 0x41f540u: goto label_41f540;
        case 0x41f544u: goto label_41f544;
        case 0x41f548u: goto label_41f548;
        case 0x41f54cu: goto label_41f54c;
        case 0x41f550u: goto label_41f550;
        case 0x41f554u: goto label_41f554;
        case 0x41f558u: goto label_41f558;
        case 0x41f55cu: goto label_41f55c;
        case 0x41f560u: goto label_41f560;
        case 0x41f564u: goto label_41f564;
        case 0x41f568u: goto label_41f568;
        case 0x41f56cu: goto label_41f56c;
        case 0x41f570u: goto label_41f570;
        case 0x41f574u: goto label_41f574;
        case 0x41f578u: goto label_41f578;
        case 0x41f57cu: goto label_41f57c;
        case 0x41f580u: goto label_41f580;
        case 0x41f584u: goto label_41f584;
        case 0x41f588u: goto label_41f588;
        case 0x41f58cu: goto label_41f58c;
        case 0x41f590u: goto label_41f590;
        case 0x41f594u: goto label_41f594;
        case 0x41f598u: goto label_41f598;
        case 0x41f59cu: goto label_41f59c;
        case 0x41f5a0u: goto label_41f5a0;
        case 0x41f5a4u: goto label_41f5a4;
        case 0x41f5a8u: goto label_41f5a8;
        case 0x41f5acu: goto label_41f5ac;
        case 0x41f5b0u: goto label_41f5b0;
        case 0x41f5b4u: goto label_41f5b4;
        case 0x41f5b8u: goto label_41f5b8;
        case 0x41f5bcu: goto label_41f5bc;
        case 0x41f5c0u: goto label_41f5c0;
        case 0x41f5c4u: goto label_41f5c4;
        case 0x41f5c8u: goto label_41f5c8;
        case 0x41f5ccu: goto label_41f5cc;
        case 0x41f5d0u: goto label_41f5d0;
        case 0x41f5d4u: goto label_41f5d4;
        case 0x41f5d8u: goto label_41f5d8;
        case 0x41f5dcu: goto label_41f5dc;
        case 0x41f5e0u: goto label_41f5e0;
        case 0x41f5e4u: goto label_41f5e4;
        case 0x41f5e8u: goto label_41f5e8;
        case 0x41f5ecu: goto label_41f5ec;
        case 0x41f5f0u: goto label_41f5f0;
        case 0x41f5f4u: goto label_41f5f4;
        case 0x41f5f8u: goto label_41f5f8;
        case 0x41f5fcu: goto label_41f5fc;
        case 0x41f600u: goto label_41f600;
        case 0x41f604u: goto label_41f604;
        case 0x41f608u: goto label_41f608;
        case 0x41f60cu: goto label_41f60c;
        case 0x41f610u: goto label_41f610;
        case 0x41f614u: goto label_41f614;
        case 0x41f618u: goto label_41f618;
        case 0x41f61cu: goto label_41f61c;
        case 0x41f620u: goto label_41f620;
        case 0x41f624u: goto label_41f624;
        case 0x41f628u: goto label_41f628;
        case 0x41f62cu: goto label_41f62c;
        case 0x41f630u: goto label_41f630;
        case 0x41f634u: goto label_41f634;
        case 0x41f638u: goto label_41f638;
        case 0x41f63cu: goto label_41f63c;
        case 0x41f640u: goto label_41f640;
        case 0x41f644u: goto label_41f644;
        case 0x41f648u: goto label_41f648;
        case 0x41f64cu: goto label_41f64c;
        case 0x41f650u: goto label_41f650;
        case 0x41f654u: goto label_41f654;
        case 0x41f658u: goto label_41f658;
        case 0x41f65cu: goto label_41f65c;
        case 0x41f660u: goto label_41f660;
        case 0x41f664u: goto label_41f664;
        case 0x41f668u: goto label_41f668;
        case 0x41f66cu: goto label_41f66c;
        case 0x41f670u: goto label_41f670;
        case 0x41f674u: goto label_41f674;
        case 0x41f678u: goto label_41f678;
        case 0x41f67cu: goto label_41f67c;
        case 0x41f680u: goto label_41f680;
        case 0x41f684u: goto label_41f684;
        case 0x41f688u: goto label_41f688;
        case 0x41f68cu: goto label_41f68c;
        case 0x41f690u: goto label_41f690;
        case 0x41f694u: goto label_41f694;
        case 0x41f698u: goto label_41f698;
        case 0x41f69cu: goto label_41f69c;
        case 0x41f6a0u: goto label_41f6a0;
        case 0x41f6a4u: goto label_41f6a4;
        case 0x41f6a8u: goto label_41f6a8;
        case 0x41f6acu: goto label_41f6ac;
        case 0x41f6b0u: goto label_41f6b0;
        case 0x41f6b4u: goto label_41f6b4;
        case 0x41f6b8u: goto label_41f6b8;
        case 0x41f6bcu: goto label_41f6bc;
        case 0x41f6c0u: goto label_41f6c0;
        case 0x41f6c4u: goto label_41f6c4;
        case 0x41f6c8u: goto label_41f6c8;
        case 0x41f6ccu: goto label_41f6cc;
        case 0x41f6d0u: goto label_41f6d0;
        case 0x41f6d4u: goto label_41f6d4;
        case 0x41f6d8u: goto label_41f6d8;
        case 0x41f6dcu: goto label_41f6dc;
        case 0x41f6e0u: goto label_41f6e0;
        case 0x41f6e4u: goto label_41f6e4;
        case 0x41f6e8u: goto label_41f6e8;
        case 0x41f6ecu: goto label_41f6ec;
        case 0x41f6f0u: goto label_41f6f0;
        case 0x41f6f4u: goto label_41f6f4;
        case 0x41f6f8u: goto label_41f6f8;
        case 0x41f6fcu: goto label_41f6fc;
        case 0x41f700u: goto label_41f700;
        case 0x41f704u: goto label_41f704;
        case 0x41f708u: goto label_41f708;
        case 0x41f70cu: goto label_41f70c;
        case 0x41f710u: goto label_41f710;
        case 0x41f714u: goto label_41f714;
        case 0x41f718u: goto label_41f718;
        case 0x41f71cu: goto label_41f71c;
        case 0x41f720u: goto label_41f720;
        case 0x41f724u: goto label_41f724;
        case 0x41f728u: goto label_41f728;
        case 0x41f72cu: goto label_41f72c;
        case 0x41f730u: goto label_41f730;
        case 0x41f734u: goto label_41f734;
        case 0x41f738u: goto label_41f738;
        case 0x41f73cu: goto label_41f73c;
        case 0x41f740u: goto label_41f740;
        case 0x41f744u: goto label_41f744;
        case 0x41f748u: goto label_41f748;
        case 0x41f74cu: goto label_41f74c;
        case 0x41f750u: goto label_41f750;
        case 0x41f754u: goto label_41f754;
        case 0x41f758u: goto label_41f758;
        case 0x41f75cu: goto label_41f75c;
        case 0x41f760u: goto label_41f760;
        case 0x41f764u: goto label_41f764;
        case 0x41f768u: goto label_41f768;
        case 0x41f76cu: goto label_41f76c;
        case 0x41f770u: goto label_41f770;
        case 0x41f774u: goto label_41f774;
        case 0x41f778u: goto label_41f778;
        case 0x41f77cu: goto label_41f77c;
        case 0x41f780u: goto label_41f780;
        case 0x41f784u: goto label_41f784;
        case 0x41f788u: goto label_41f788;
        case 0x41f78cu: goto label_41f78c;
        case 0x41f790u: goto label_41f790;
        case 0x41f794u: goto label_41f794;
        case 0x41f798u: goto label_41f798;
        case 0x41f79cu: goto label_41f79c;
        case 0x41f7a0u: goto label_41f7a0;
        case 0x41f7a4u: goto label_41f7a4;
        case 0x41f7a8u: goto label_41f7a8;
        case 0x41f7acu: goto label_41f7ac;
        case 0x41f7b0u: goto label_41f7b0;
        case 0x41f7b4u: goto label_41f7b4;
        case 0x41f7b8u: goto label_41f7b8;
        case 0x41f7bcu: goto label_41f7bc;
        case 0x41f7c0u: goto label_41f7c0;
        case 0x41f7c4u: goto label_41f7c4;
        case 0x41f7c8u: goto label_41f7c8;
        case 0x41f7ccu: goto label_41f7cc;
        case 0x41f7d0u: goto label_41f7d0;
        case 0x41f7d4u: goto label_41f7d4;
        case 0x41f7d8u: goto label_41f7d8;
        case 0x41f7dcu: goto label_41f7dc;
        case 0x41f7e0u: goto label_41f7e0;
        case 0x41f7e4u: goto label_41f7e4;
        case 0x41f7e8u: goto label_41f7e8;
        case 0x41f7ecu: goto label_41f7ec;
        case 0x41f7f0u: goto label_41f7f0;
        case 0x41f7f4u: goto label_41f7f4;
        case 0x41f7f8u: goto label_41f7f8;
        case 0x41f7fcu: goto label_41f7fc;
        case 0x41f800u: goto label_41f800;
        case 0x41f804u: goto label_41f804;
        case 0x41f808u: goto label_41f808;
        case 0x41f80cu: goto label_41f80c;
        case 0x41f810u: goto label_41f810;
        case 0x41f814u: goto label_41f814;
        case 0x41f818u: goto label_41f818;
        case 0x41f81cu: goto label_41f81c;
        case 0x41f820u: goto label_41f820;
        case 0x41f824u: goto label_41f824;
        case 0x41f828u: goto label_41f828;
        case 0x41f82cu: goto label_41f82c;
        case 0x41f830u: goto label_41f830;
        case 0x41f834u: goto label_41f834;
        case 0x41f838u: goto label_41f838;
        case 0x41f83cu: goto label_41f83c;
        case 0x41f840u: goto label_41f840;
        case 0x41f844u: goto label_41f844;
        case 0x41f848u: goto label_41f848;
        case 0x41f84cu: goto label_41f84c;
        case 0x41f850u: goto label_41f850;
        case 0x41f854u: goto label_41f854;
        case 0x41f858u: goto label_41f858;
        case 0x41f85cu: goto label_41f85c;
        case 0x41f860u: goto label_41f860;
        case 0x41f864u: goto label_41f864;
        case 0x41f868u: goto label_41f868;
        case 0x41f86cu: goto label_41f86c;
        case 0x41f870u: goto label_41f870;
        case 0x41f874u: goto label_41f874;
        case 0x41f878u: goto label_41f878;
        case 0x41f87cu: goto label_41f87c;
        case 0x41f880u: goto label_41f880;
        case 0x41f884u: goto label_41f884;
        case 0x41f888u: goto label_41f888;
        case 0x41f88cu: goto label_41f88c;
        case 0x41f890u: goto label_41f890;
        case 0x41f894u: goto label_41f894;
        case 0x41f898u: goto label_41f898;
        case 0x41f89cu: goto label_41f89c;
        case 0x41f8a0u: goto label_41f8a0;
        case 0x41f8a4u: goto label_41f8a4;
        case 0x41f8a8u: goto label_41f8a8;
        case 0x41f8acu: goto label_41f8ac;
        case 0x41f8b0u: goto label_41f8b0;
        case 0x41f8b4u: goto label_41f8b4;
        case 0x41f8b8u: goto label_41f8b8;
        case 0x41f8bcu: goto label_41f8bc;
        case 0x41f8c0u: goto label_41f8c0;
        case 0x41f8c4u: goto label_41f8c4;
        case 0x41f8c8u: goto label_41f8c8;
        case 0x41f8ccu: goto label_41f8cc;
        default: break;
    }

    ctx->pc = 0x41f1f0u;

label_41f1f0:
    // 0x41f1f0: 0x27bdf8c0  addiu       $sp, $sp, -0x740
    ctx->pc = 0x41f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965440));
label_41f1f4:
    // 0x41f1f4: 0x7fb10720  sq          $s1, 0x720($sp)
    ctx->pc = 0x41f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1824), GPR_VEC(ctx, 17));
label_41f1f8:
    // 0x41f1f8: 0x7fb506e0  sq          $s5, 0x6E0($sp)
    ctx->pc = 0x41f1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), GPR_VEC(ctx, 21));
label_41f1fc:
    // 0x41f1fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41f1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41f200:
    // 0x41f200: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x41f200u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41f204:
    // 0x41f204: 0x7fb00730  sq          $s0, 0x730($sp)
    ctx->pc = 0x41f204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), GPR_VEC(ctx, 16));
label_41f208:
    // 0x41f208: 0x7fb20710  sq          $s2, 0x710($sp)
    ctx->pc = 0x41f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1808), GPR_VEC(ctx, 18));
label_41f20c:
    // 0x41f20c: 0x7fb30700  sq          $s3, 0x700($sp)
    ctx->pc = 0x41f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), GPR_VEC(ctx, 19));
label_41f210:
    // 0x41f210: 0x7fb406f0  sq          $s4, 0x6F0($sp)
    ctx->pc = 0x41f210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 20));
label_41f214:
    // 0x41f214: 0x7fb606d0  sq          $s6, 0x6D0($sp)
    ctx->pc = 0x41f214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 22));
label_41f218:
    // 0x41f218: 0x7fb706c0  sq          $s7, 0x6C0($sp)
    ctx->pc = 0x41f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 23));
label_41f21c:
    // 0x41f21c: 0x7fbe06b0  sq          $fp, 0x6B0($sp)
    ctx->pc = 0x41f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 30));
label_41f220:
    // 0x41f220: 0xffbf06a0  sd          $ra, 0x6A0($sp)
    ctx->pc = 0x41f220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 31));
label_41f224:
    // 0x41f224: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41f224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41f228:
    // 0x41f228: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x41f228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41f22c:
    // 0x41f22c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x41f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_41f230:
    // 0x41f230: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x41f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_41f234:
    // 0x41f234: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x41f234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41f238:
    // 0x41f238: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41f238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41f23c:
    // 0x41f23c: 0x40f809  jalr        $v0
label_41f240:
    if (ctx->pc == 0x41F240u) {
        ctx->pc = 0x41F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F23Cu;
        // 0x41f240: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F244u;
        goto label_41f244;
    }
    ctx->pc = 0x41F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F244u);
        ctx->pc = 0x41F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F23Cu;
        // 0x41f240: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F23Cu, 0x41F244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F244u;
label_41f244:
    // 0x41f244: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x41f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_41f248:
    // 0x41f248: 0x40f809  jalr        $v0
label_41f24c:
    if (ctx->pc == 0x41F24Cu) {
        ctx->pc = 0x41F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F248u;
        // 0x41f24c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F250u;
        goto label_41f250;
    }
    ctx->pc = 0x41F248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F250u);
        ctx->pc = 0x41F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F248u;
        // 0x41f24c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F248u, 0x41F250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F250u;
label_41f250:
    // 0x41f250: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x41f250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_41f254:
    // 0x41f254: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_41f258:
    if (ctx->pc == 0x41F258u) {
        ctx->pc = 0x41F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F254u;
        // 0x41f258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F25Cu;
        goto label_41f25c;
    }
    ctx->pc = 0x41F254u;
    {
        const bool branch_taken_0x41f254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F254u;
        // 0x41f258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f254) {
            ctx->pc = 0x41F290u;
            goto label_41f290;
        }
    }
    ctx->pc = 0x41F25Cu;
label_41f25c:
    // 0x41f25c: 0x82a800ff  lb          $t0, 0xFF($s5)
    ctx->pc = 0x41f25cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 255)));
label_41f260:
    // 0x41f260: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41f260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41f264:
    // 0x41f264: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x41f264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_41f268:
    // 0x41f268: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x41f268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41f26c:
    // 0x41f26c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41f270:
    // 0x41f270: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x41f270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_41f274:
    // 0x41f274: 0xc1035f6  jal         func_40D7D8
label_41f278:
    if (ctx->pc == 0x41F278u) {
        ctx->pc = 0x41F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F274u;
        // 0x41f278: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F27Cu;
        goto label_41f27c;
    }
    ctx->pc = 0x41F274u;
    SET_GPR_U32(ctx, 31, 0x41F27Cu);
    ctx->pc = 0x41F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F274u;
    // 0x41f278: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41F274u, 0x41F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F27Cu;
label_41f27c:
    // 0x41f27c: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x41f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_41f280:
    // 0x41f280: 0xc103628  jal         func_40D8A0
label_41f284:
    if (ctx->pc == 0x41F284u) {
        ctx->pc = 0x41F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F280u;
        // 0x41f284: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F288u;
        goto label_41f288;
    }
    ctx->pc = 0x41F280u;
    SET_GPR_U32(ctx, 31, 0x41F288u);
    ctx->pc = 0x41F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F280u;
    // 0x41f284: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41F280u, 0x41F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F288u;
label_41f288:
    // 0x41f288: 0xa3a0053f  sb          $zero, 0x53F($sp)
    ctx->pc = 0x41f288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1343), (uint8_t)GPR_U32(ctx, 0));
label_41f28c:
    // 0x41f28c: 0x0  nop
    ctx->pc = 0x41f28cu;
    // NOP
label_41f290:
    // 0x41f290: 0xa3a00540  sb          $zero, 0x540($sp)
    ctx->pc = 0x41f290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
label_41f294:
    // 0x41f294: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_41f298:
    if (ctx->pc == 0x41F298u) {
        ctx->pc = 0x41F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F294u;
        // 0x41f298: 0x27b60540  addiu       $s6, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F29Cu;
        goto label_41f29c;
    }
    ctx->pc = 0x41F294u;
    {
        const bool branch_taken_0x41f294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F294u;
        // 0x41f298: 0x27b60540  addiu       $s6, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f294) {
            ctx->pc = 0x41F300u;
            goto label_41f300;
        }
    }
    ctx->pc = 0x41F29Cu;
label_41f29c:
    // 0x41f29c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x41f29cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_41f2a0:
    // 0x41f2a0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_41f2a4:
    if (ctx->pc == 0x41F2A4u) {
        ctx->pc = 0x41F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2A0u;
        // 0x41f2a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F2A8u;
        goto label_41f2a8;
    }
    ctx->pc = 0x41F2A0u;
    {
        const bool branch_taken_0x41f2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2A0u;
        // 0x41f2a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f2a0) {
            ctx->pc = 0x41F300u;
            goto label_41f300;
        }
    }
    ctx->pc = 0x41F2A8u;
label_41f2a8:
    // 0x41f2a8: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x41f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_41f2ac:
    // 0x41f2ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41f2b0:
    // 0x41f2b0: 0x40f809  jalr        $v0
label_41f2b4:
    if (ctx->pc == 0x41F2B4u) {
        ctx->pc = 0x41F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2B0u;
        // 0x41f2b4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F2B8u;
        goto label_41f2b8;
    }
    ctx->pc = 0x41F2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F2B8u);
        ctx->pc = 0x41F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2B0u;
        // 0x41f2b4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F2B0u, 0x41F2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F2B8u;
label_41f2b8:
    // 0x41f2b8: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x41f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_41f2bc:
    // 0x41f2bc: 0x40f809  jalr        $v0
label_41f2c0:
    if (ctx->pc == 0x41F2C0u) {
        ctx->pc = 0x41F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2BCu;
        // 0x41f2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F2C4u;
        goto label_41f2c4;
    }
    ctx->pc = 0x41F2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F2C4u);
        ctx->pc = 0x41F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2BCu;
        // 0x41f2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F2BCu, 0x41F2C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F2C4u;
label_41f2c4:
    // 0x41f2c4: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x41f2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_41f2c8:
    // 0x41f2c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_41f2cc:
    if (ctx->pc == 0x41F2CCu) {
        ctx->pc = 0x41F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2C8u;
        // 0x41f2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F2D0u;
        goto label_41f2d0;
    }
    ctx->pc = 0x41F2C8u;
    {
        const bool branch_taken_0x41f2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2C8u;
        // 0x41f2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f2c8) {
            ctx->pc = 0x41F300u;
            goto label_41f300;
        }
    }
    ctx->pc = 0x41F2D0u;
label_41f2d0:
    // 0x41f2d0: 0x822800ff  lb          $t0, 0xFF($s1)
    ctx->pc = 0x41f2d0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 255)));
label_41f2d4:
    // 0x41f2d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41f2d8:
    // 0x41f2d8: 0xafa20650  sw          $v0, 0x650($sp)
    ctx->pc = 0x41f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 2));
label_41f2dc:
    // 0x41f2dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41f2e0:
    // 0x41f2e0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41f2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41f2e4:
    // 0x41f2e4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x41f2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_41f2e8:
    // 0x41f2e8: 0xc1035f6  jal         func_40D7D8
label_41f2ec:
    if (ctx->pc == 0x41F2ECu) {
        ctx->pc = 0x41F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2E8u;
        // 0x41f2ec: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F2F0u;
        goto label_41f2f0;
    }
    ctx->pc = 0x41F2E8u;
    SET_GPR_U32(ctx, 31, 0x41F2F0u);
    ctx->pc = 0x41F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F2E8u;
    // 0x41f2ec: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41F2E8u, 0x41F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F2F0u;
label_41f2f0:
    // 0x41f2f0: 0xafa20654  sw          $v0, 0x654($sp)
    ctx->pc = 0x41f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 2));
label_41f2f4:
    // 0x41f2f4: 0xc103628  jal         func_40D8A0
label_41f2f8:
    if (ctx->pc == 0x41F2F8u) {
        ctx->pc = 0x41F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2F4u;
        // 0x41f2f8: 0x27a40650  addiu       $a0, $sp, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F2FCu;
        goto label_41f2fc;
    }
    ctx->pc = 0x41F2F4u;
    SET_GPR_U32(ctx, 31, 0x41F2FCu);
    ctx->pc = 0x41F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F2F4u;
    // 0x41f2f8: 0x27a40650  addiu       $a0, $sp, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41F2F4u, 0x41F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F2FCu;
label_41f2fc:
    // 0x41f2fc: 0xa3a0063f  sb          $zero, 0x63F($sp)
    ctx->pc = 0x41f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1599), (uint8_t)GPR_U32(ctx, 0));
label_41f300:
    // 0x41f300: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x41f300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_41f304:
    // 0x41f304: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41f308:
    // 0x41f308: 0x2650e880  addiu       $s0, $s2, -0x1780
    ctx->pc = 0x41f308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_41f30c:
    // 0x41f30c: 0xafa20690  sw          $v0, 0x690($sp)
    ctx->pc = 0x41f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 2));
label_41f310:
    // 0x41f310: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41f310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41f314:
    // 0x41f314: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x41f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_41f318:
    // 0x41f318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_41f31c:
    if (ctx->pc == 0x41F31Cu) {
        ctx->pc = 0x41F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F318u;
        // 0x41f31c: 0x34048004  ori         $a0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F320u;
        goto label_41f320;
    }
    ctx->pc = 0x41F318u;
    {
        const bool branch_taken_0x41f318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F318u;
        // 0x41f31c: 0x34048004  ori         $a0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f318) {
            ctx->pc = 0x41F330u;
            goto label_41f330;
        }
    }
    ctx->pc = 0x41F320u;
label_41f320:
    // 0x41f320: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x41f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_41f324:
    // 0x41f324: 0x34029004  ori         $v0, $zero, 0x9004
    ctx->pc = 0x41f324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36868);
label_41f328:
    // 0x41f328: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x41f328u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_41f32c:
    // 0x41f32c: 0xafa40690  sw          $a0, 0x690($sp)
    ctx->pc = 0x41f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 4));
label_41f330:
    // 0x41f330: 0x8fa70690  lw          $a3, 0x690($sp)
    ctx->pc = 0x41f330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_41f334:
    // 0x41f334: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x41f334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_41f338:
    // 0x41f338: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x41f338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41f33c:
    // 0x41f33c: 0xc108114  jal         func_420450
label_41f340:
    if (ctx->pc == 0x41F340u) {
        ctx->pc = 0x41F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F33Cu;
        // 0x41f340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F344u;
        goto label_41f344;
    }
    ctx->pc = 0x41F33Cu;
    SET_GPR_U32(ctx, 31, 0x41F344u);
    ctx->pc = 0x41F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F33Cu;
    // 0x41f340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420450u, 0x41F33Cu, 0x41F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F344u;
label_41f344:
    // 0x41f344: 0x8fa60690  lw          $a2, 0x690($sp)
    ctx->pc = 0x41f344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_41f348:
    // 0x41f348: 0x27a70680  addiu       $a3, $sp, 0x680
    ctx->pc = 0x41f348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_41f34c:
    // 0x41f34c: 0x27a80684  addiu       $t0, $sp, 0x684
    ctx->pc = 0x41f34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1668));
label_41f350:
    // 0x41f350: 0x27a90688  addiu       $t1, $sp, 0x688
    ctx->pc = 0x41f350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1672));
label_41f354:
    // 0x41f354: 0x27aa068c  addiu       $t2, $sp, 0x68C
    ctx->pc = 0x41f354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1676));
label_41f358:
    // 0x41f358: 0xafa00680  sw          $zero, 0x680($sp)
    ctx->pc = 0x41f358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1664), GPR_U32(ctx, 0));
label_41f35c:
    // 0x41f35c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x41f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_41f360:
    // 0x41f360: 0xafa00684  sw          $zero, 0x684($sp)
    ctx->pc = 0x41f360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1668), GPR_U32(ctx, 0));
label_41f364:
    // 0x41f364: 0xc107ace  jal         func_41EB38
label_41f368:
    if (ctx->pc == 0x41F368u) {
        ctx->pc = 0x41F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F364u;
        // 0x41f368: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F36Cu;
        goto label_41f36c;
    }
    ctx->pc = 0x41F364u;
    SET_GPR_U32(ctx, 31, 0x41F36Cu);
    ctx->pc = 0x41F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F364u;
    // 0x41f368: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EB38u, 0x41F364u, 0x41F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F36Cu;
label_41f36c:
    // 0x41f36c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41f370:
    if (ctx->pc == 0x41F370u) {
        ctx->pc = 0x41F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F36Cu;
        // 0x41f370: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F374u;
        goto label_41f374;
    }
    ctx->pc = 0x41F36Cu;
    {
        const bool branch_taken_0x41f36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F36Cu;
        // 0x41f370: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f36c) {
            ctx->pc = 0x41F37Cu;
            goto label_41f37c;
        }
    }
    ctx->pc = 0x41F374u;
label_41f374:
    // 0x41f374: 0x1000014a  b           . + 4 + (0x14A << 2)
label_41f378:
    if (ctx->pc == 0x41F378u) {
        ctx->pc = 0x41F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F374u;
        // 0x41f378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F37Cu;
        goto label_41f37c;
    }
    ctx->pc = 0x41F374u;
    {
        const bool branch_taken_0x41f374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F374u;
        // 0x41f378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f374) {
            ctx->pc = 0x41F8A0u;
            goto label_41f8a0;
        }
    }
    ctx->pc = 0x41F37Cu;
label_41f37c:
    // 0x41f37c: 0x8fa40680  lw          $a0, 0x680($sp)
    ctx->pc = 0x41f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1664)));
label_41f380:
    // 0x41f380: 0x8fa50684  lw          $a1, 0x684($sp)
    ctx->pc = 0x41f380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1668)));
label_41f384:
    // 0x41f384: 0x8fa60688  lw          $a2, 0x688($sp)
    ctx->pc = 0x41f384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1672)));
label_41f388:
    // 0x41f388: 0xc10746c  jal         func_41D1B0
label_41f38c:
    if (ctx->pc == 0x41F38Cu) {
        ctx->pc = 0x41F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F388u;
        // 0x41f38c: 0x8fa7068c  lw          $a3, 0x68C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F390u;
        goto label_41f390;
    }
    ctx->pc = 0x41F388u;
    SET_GPR_U32(ctx, 31, 0x41F390u);
    ctx->pc = 0x41F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F388u;
    // 0x41f38c: 0x8fa7068c  lw          $a3, 0x68C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x41F388u, 0x41F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F390u;
label_41f390:
    // 0x41f390: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41f390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41f394:
    // 0x41f394: 0x12600126  beqz        $s3, . + 4 + (0x126 << 2)
label_41f398:
    if (ctx->pc == 0x41F398u) {
        ctx->pc = 0x41F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F394u;
        // 0x41f398: 0x8fa3068c  lw          $v1, 0x68C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F39Cu;
        goto label_41f39c;
    }
    ctx->pc = 0x41F394u;
    {
        const bool branch_taken_0x41f394 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F394u;
        // 0x41f398: 0x8fa3068c  lw          $v1, 0x68C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f394) {
            ctx->pc = 0x41F830u;
            goto label_41f830;
        }
    }
    ctx->pc = 0x41F39Cu;
label_41f39c:
    // 0x41f39c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x41f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_41f3a0:
    // 0x41f3a0: 0x1040011a  beqz        $v0, . + 4 + (0x11A << 2)
label_41f3a4:
    if (ctx->pc == 0x41F3A4u) {
        ctx->pc = 0x41F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3A0u;
        // 0x41f3a4: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F3A8u;
        goto label_41f3a8;
    }
    ctx->pc = 0x41F3A0u;
    {
        const bool branch_taken_0x41f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3A0u;
        // 0x41f3a4: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f3a0) {
            ctx->pc = 0x41F80Cu;
            goto label_41f80c;
        }
    }
    ctx->pc = 0x41F3A8u;
label_41f3a8:
    // 0x41f3a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_41f3ac:
    if (ctx->pc == 0x41F3ACu) {
        ctx->pc = 0x41F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3A8u;
        // 0x41f3ac: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F3B0u;
        goto label_41f3b0;
    }
    ctx->pc = 0x41F3A8u;
    {
        const bool branch_taken_0x41f3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3A8u;
        // 0x41f3ac: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f3a8) {
            ctx->pc = 0x41F3D0u;
            goto label_41f3d0;
        }
    }
    ctx->pc = 0x41F3B0u;
label_41f3b0:
    // 0x41f3b0: 0xc1073c2  jal         func_41CF08
label_41f3b4:
    if (ctx->pc == 0x41F3B4u) {
        ctx->pc = 0x41F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3B0u;
        // 0x41f3b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F3B8u;
        goto label_41f3b8;
    }
    ctx->pc = 0x41F3B0u;
    SET_GPR_U32(ctx, 31, 0x41F3B8u);
    ctx->pc = 0x41F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F3B0u;
    // 0x41f3b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41F3B0u, 0x41F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F3B8u;
label_41f3b8:
    // 0x41f3b8: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
label_41f3bc:
    if (ctx->pc == 0x41F3BCu) {
        ctx->pc = 0x41F3C0u;
        goto label_41f3c0;
    }
    ctx->pc = 0x41F3B8u;
    {
        const bool branch_taken_0x41f3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f3b8) {
            ctx->pc = 0x41F828u;
            goto label_41f828;
        }
    }
    ctx->pc = 0x41F3C0u;
label_41f3c0:
    // 0x41f3c0: 0xc10705c  jal         func_41C170
label_41f3c4:
    if (ctx->pc == 0x41F3C4u) {
        ctx->pc = 0x41F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3C0u;
        // 0x41f3c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F3C8u;
        goto label_41f3c8;
    }
    ctx->pc = 0x41F3C0u;
    SET_GPR_U32(ctx, 31, 0x41F3C8u);
    ctx->pc = 0x41F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F3C0u;
    // 0x41f3c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F3C0u, 0x41F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F3C8u;
label_41f3c8:
    // 0x41f3c8: 0x1000011f  b           . + 4 + (0x11F << 2)
label_41f3cc:
    if (ctx->pc == 0x41F3CCu) {
        ctx->pc = 0x41F3D0u;
        goto label_41f3d0;
    }
    ctx->pc = 0x41F3C8u;
    {
        const bool branch_taken_0x41f3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f3c8) {
            ctx->pc = 0x41F848u;
            goto label_41f848;
        }
    }
    ctx->pc = 0x41F3D0u;
label_41f3d0:
    // 0x41f3d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41f3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41f3d4:
    // 0x41f3d4: 0xc1074ce  jal         func_41D338
label_41f3d8:
    if (ctx->pc == 0x41F3D8u) {
        ctx->pc = 0x41F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3D4u;
        // 0x41f3d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F3DCu;
        goto label_41f3dc;
    }
    ctx->pc = 0x41F3D4u;
    SET_GPR_U32(ctx, 31, 0x41F3DCu);
    ctx->pc = 0x41F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F3D4u;
    // 0x41f3d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x41F3D4u, 0x41F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F3DCu;
label_41f3dc:
    // 0x41f3dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x41f3dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41f3e0:
    // 0x41f3e0: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x41f3e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_41f3e4:
    // 0x41f3e4: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_41f3e8:
    if (ctx->pc == 0x41F3E8u) {
        ctx->pc = 0x41F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3E4u;
        // 0x41f3e8: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F3ECu;
        goto label_41f3ec;
    }
    ctx->pc = 0x41F3E4u;
    {
        const bool branch_taken_0x41f3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3E4u;
        // 0x41f3e8: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f3e4) {
            ctx->pc = 0x41F614u;
            goto label_41f614;
        }
    }
    ctx->pc = 0x41F3ECu;
label_41f3ec:
    // 0x41f3ec: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x41f3ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f3f0:
    // 0x41f3f0: 0xafa20694  sw          $v0, 0x694($sp)
    ctx->pc = 0x41f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 2));
label_41f3f4:
    // 0x41f3f4: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x41f3f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41f3f8:
    // 0x41f3f8: 0x8ee200d0  lw          $v0, 0xD0($s7)
    ctx->pc = 0x41f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
label_41f3fc:
    // 0x41f3fc: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x41f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_41f400:
    // 0x41f400: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x41f400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41f404:
    // 0x41f404: 0x40f809  jalr        $v0
label_41f408:
    if (ctx->pc == 0x41F408u) {
        ctx->pc = 0x41F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F404u;
        // 0x41f408: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F40Cu;
        goto label_41f40c;
    }
    ctx->pc = 0x41F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F40Cu);
        ctx->pc = 0x41F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F404u;
        // 0x41f408: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F404u, 0x41F40Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F40Cu;
label_41f40c:
    // 0x41f40c: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x41f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
label_41f410:
    // 0x41f410: 0x40f809  jalr        $v0
label_41f414:
    if (ctx->pc == 0x41F414u) {
        ctx->pc = 0x41F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F410u;
        // 0x41f414: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F418u;
        goto label_41f418;
    }
    ctx->pc = 0x41F410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F418u);
        ctx->pc = 0x41F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F410u;
        // 0x41f414: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F410u, 0x41F418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F418u;
label_41f418:
    // 0x41f418: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x41f418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_41f41c:
    // 0x41f41c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_41f420:
    if (ctx->pc == 0x41F420u) {
        ctx->pc = 0x41F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F41Cu;
        // 0x41f420: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F424u;
        goto label_41f424;
    }
    ctx->pc = 0x41F41Cu;
    {
        const bool branch_taken_0x41f41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F41Cu;
        // 0x41f420: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f41c) {
            ctx->pc = 0x41F458u;
            goto label_41f458;
        }
    }
    ctx->pc = 0x41F424u;
label_41f424:
    // 0x41f424: 0x82a800ff  lb          $t0, 0xFF($s5)
    ctx->pc = 0x41f424u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 255)));
label_41f428:
    // 0x41f428: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41f428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41f42c:
    // 0x41f42c: 0xafa30660  sw          $v1, 0x660($sp)
    ctx->pc = 0x41f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1632), GPR_U32(ctx, 3));
label_41f430:
    // 0x41f430: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x41f430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41f434:
    // 0x41f434: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41f434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41f438:
    // 0x41f438: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x41f438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_41f43c:
    // 0x41f43c: 0xc1035f6  jal         func_40D7D8
label_41f440:
    if (ctx->pc == 0x41F440u) {
        ctx->pc = 0x41F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F43Cu;
        // 0x41f440: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F444u;
        goto label_41f444;
    }
    ctx->pc = 0x41F43Cu;
    SET_GPR_U32(ctx, 31, 0x41F444u);
    ctx->pc = 0x41F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F43Cu;
    // 0x41f440: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41F43Cu, 0x41F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F444u;
label_41f444:
    // 0x41f444: 0xafa20664  sw          $v0, 0x664($sp)
    ctx->pc = 0x41f444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1636), GPR_U32(ctx, 2));
label_41f448:
    // 0x41f448: 0xc103628  jal         func_40D8A0
label_41f44c:
    if (ctx->pc == 0x41F44Cu) {
        ctx->pc = 0x41F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F448u;
        // 0x41f44c: 0x27a40660  addiu       $a0, $sp, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F450u;
        goto label_41f450;
    }
    ctx->pc = 0x41F448u;
    SET_GPR_U32(ctx, 31, 0x41F450u);
    ctx->pc = 0x41F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F448u;
    // 0x41f44c: 0x27a40660  addiu       $a0, $sp, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41F448u, 0x41F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F450u;
label_41f450:
    // 0x41f450: 0xa3a0053f  sb          $zero, 0x53F($sp)
    ctx->pc = 0x41f450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1343), (uint8_t)GPR_U32(ctx, 0));
label_41f454:
    // 0x41f454: 0x0  nop
    ctx->pc = 0x41f454u;
    // NOP
label_41f458:
    // 0x41f458: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_41f45c:
    if (ctx->pc == 0x41F45Cu) {
        ctx->pc = 0x41F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F458u;
        // 0x41f45c: 0xa3a00540  sb          $zero, 0x540($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F460u;
        goto label_41f460;
    }
    ctx->pc = 0x41F458u;
    {
        const bool branch_taken_0x41f458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F458u;
        // 0x41f45c: 0xa3a00540  sb          $zero, 0x540($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f458) {
            ctx->pc = 0x41F4C8u;
            goto label_41f4c8;
        }
    }
    ctx->pc = 0x41F460u;
label_41f460:
    // 0x41f460: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x41f460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_41f464:
    // 0x41f464: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_41f468:
    if (ctx->pc == 0x41F468u) {
        ctx->pc = 0x41F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F464u;
        // 0x41f468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F46Cu;
        goto label_41f46c;
    }
    ctx->pc = 0x41F464u;
    {
        const bool branch_taken_0x41f464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F464u;
        // 0x41f468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f464) {
            ctx->pc = 0x41F4C8u;
            goto label_41f4c8;
        }
    }
    ctx->pc = 0x41F46Cu;
label_41f46c:
    // 0x41f46c: 0x8ee200d0  lw          $v0, 0xD0($s7)
    ctx->pc = 0x41f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
label_41f470:
    // 0x41f470: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x41f470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41f474:
    // 0x41f474: 0x40f809  jalr        $v0
label_41f478:
    if (ctx->pc == 0x41F478u) {
        ctx->pc = 0x41F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F474u;
        // 0x41f478: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F47Cu;
        goto label_41f47c;
    }
    ctx->pc = 0x41F474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F47Cu);
        ctx->pc = 0x41F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F474u;
        // 0x41f478: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F474u, 0x41F47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F47Cu;
label_41f47c:
    // 0x41f47c: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x41f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
label_41f480:
    // 0x41f480: 0x40f809  jalr        $v0
label_41f484:
    if (ctx->pc == 0x41F484u) {
        ctx->pc = 0x41F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F480u;
        // 0x41f484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F488u;
        goto label_41f488;
    }
    ctx->pc = 0x41F480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F488u);
        ctx->pc = 0x41F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F480u;
        // 0x41f484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F480u, 0x41F488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F488u;
label_41f488:
    // 0x41f488: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x41f488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_41f48c:
    // 0x41f48c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_41f490:
    if (ctx->pc == 0x41F490u) {
        ctx->pc = 0x41F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F48Cu;
        // 0x41f490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F494u;
        goto label_41f494;
    }
    ctx->pc = 0x41F48Cu;
    {
        const bool branch_taken_0x41f48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F48Cu;
        // 0x41f490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f48c) {
            ctx->pc = 0x41F4C8u;
            goto label_41f4c8;
        }
    }
    ctx->pc = 0x41F494u;
label_41f494:
    // 0x41f494: 0x822800ff  lb          $t0, 0xFF($s1)
    ctx->pc = 0x41f494u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 255)));
label_41f498:
    // 0x41f498: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41f498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41f49c:
    // 0x41f49c: 0xafa20670  sw          $v0, 0x670($sp)
    ctx->pc = 0x41f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1648), GPR_U32(ctx, 2));
label_41f4a0:
    // 0x41f4a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41f4a4:
    // 0x41f4a4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41f4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41f4a8:
    // 0x41f4a8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x41f4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_41f4ac:
    // 0x41f4ac: 0xc1035f6  jal         func_40D7D8
label_41f4b0:
    if (ctx->pc == 0x41F4B0u) {
        ctx->pc = 0x41F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F4ACu;
        // 0x41f4b0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F4B4u;
        goto label_41f4b4;
    }
    ctx->pc = 0x41F4ACu;
    SET_GPR_U32(ctx, 31, 0x41F4B4u);
    ctx->pc = 0x41F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F4ACu;
    // 0x41f4b0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41F4ACu, 0x41F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F4B4u;
label_41f4b4:
    // 0x41f4b4: 0xafa20674  sw          $v0, 0x674($sp)
    ctx->pc = 0x41f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1652), GPR_U32(ctx, 2));
label_41f4b8:
    // 0x41f4b8: 0xc103628  jal         func_40D8A0
label_41f4bc:
    if (ctx->pc == 0x41F4BCu) {
        ctx->pc = 0x41F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F4B8u;
        // 0x41f4bc: 0x27a40670  addiu       $a0, $sp, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F4C0u;
        goto label_41f4c0;
    }
    ctx->pc = 0x41F4B8u;
    SET_GPR_U32(ctx, 31, 0x41F4C0u);
    ctx->pc = 0x41F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F4B8u;
    // 0x41f4bc: 0x27a40670  addiu       $a0, $sp, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41F4B8u, 0x41F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F4C0u;
label_41f4c0:
    // 0x41f4c0: 0xa3a0063f  sb          $zero, 0x63F($sp)
    ctx->pc = 0x41f4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1599), (uint8_t)GPR_U32(ctx, 0));
label_41f4c4:
    // 0x41f4c4: 0x0  nop
    ctx->pc = 0x41f4c4u;
    // NOP
label_41f4c8:
    // 0x41f4c8: 0x8fa70690  lw          $a3, 0x690($sp)
    ctx->pc = 0x41f4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_41f4cc:
    // 0x41f4cc: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x41f4ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_41f4d0:
    // 0x41f4d0: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x41f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_41f4d4:
    // 0x41f4d4: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x41f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_41f4d8:
    // 0x41f4d8: 0xc108114  jal         func_420450
label_41f4dc:
    if (ctx->pc == 0x41F4DCu) {
        ctx->pc = 0x41F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F4D8u;
        // 0x41f4dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F4E0u;
        goto label_41f4e0;
    }
    ctx->pc = 0x41F4D8u;
    SET_GPR_U32(ctx, 31, 0x41F4E0u);
    ctx->pc = 0x41F4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F4D8u;
    // 0x41f4dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420450u, 0x41F4D8u, 0x41F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F4E0u;
label_41f4e0:
    // 0x41f4e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41f4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f4e4:
    // 0x41f4e4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x41f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_41f4e8:
    // 0x41f4e8: 0xc1075c0  jal         func_41D700
label_41f4ec:
    if (ctx->pc == 0x41F4ECu) {
        ctx->pc = 0x41F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F4E8u;
        // 0x41f4ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F4F0u;
        goto label_41f4f0;
    }
    ctx->pc = 0x41F4E8u;
    SET_GPR_U32(ctx, 31, 0x41F4F0u);
    ctx->pc = 0x41F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F4E8u;
    // 0x41f4ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41F4E8u, 0x41F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F4F0u;
label_41f4f0:
    // 0x41f4f0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x41f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_41f4f4:
    // 0x41f4f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41f4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41f4f8:
    // 0x41f4f8: 0xafa30680  sw          $v1, 0x680($sp)
    ctx->pc = 0x41f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1664), GPR_U32(ctx, 3));
label_41f4fc:
    // 0x41f4fc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x41f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_41f500:
    // 0x41f500: 0xafa20684  sw          $v0, 0x684($sp)
    ctx->pc = 0x41f500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1668), GPR_U32(ctx, 2));
label_41f504:
    // 0x41f504: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x41f504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_41f508:
    // 0x41f508: 0xafa30688  sw          $v1, 0x688($sp)
    ctx->pc = 0x41f508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1672), GPR_U32(ctx, 3));
label_41f50c:
    // 0x41f50c: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x41f50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_41f510:
    // 0x41f510: 0x92630020  lbu         $v1, 0x20($s3)
    ctx->pc = 0x41f510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_41f514:
    // 0x41f514: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x41f514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_41f518:
    // 0x41f518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x41f518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_41f51c:
    // 0x41f51c: 0xc1075d0  jal         func_41D740
label_41f520:
    if (ctx->pc == 0x41F520u) {
        ctx->pc = 0x41F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F51Cu;
        // 0x41f520: 0xafa2068c  sw          $v0, 0x68C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F524u;
        goto label_41f524;
    }
    ctx->pc = 0x41F51Cu;
    SET_GPR_U32(ctx, 31, 0x41F524u);
    ctx->pc = 0x41F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F51Cu;
    // 0x41f520: 0xafa2068c  sw          $v0, 0x68C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41F51Cu, 0x41F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F524u;
label_41f524:
    // 0x41f524: 0x8fa60690  lw          $a2, 0x690($sp)
    ctx->pc = 0x41f524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_41f528:
    // 0x41f528: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x41f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_41f52c:
    // 0x41f52c: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x41f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_41f530:
    // 0x41f530: 0x27a70680  addiu       $a3, $sp, 0x680
    ctx->pc = 0x41f530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_41f534:
    // 0x41f534: 0x27a80684  addiu       $t0, $sp, 0x684
    ctx->pc = 0x41f534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1668));
label_41f538:
    // 0x41f538: 0x27a90688  addiu       $t1, $sp, 0x688
    ctx->pc = 0x41f538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1672));
label_41f53c:
    // 0x41f53c: 0xc107ace  jal         func_41EB38
label_41f540:
    if (ctx->pc == 0x41F540u) {
        ctx->pc = 0x41F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F53Cu;
        // 0x41f540: 0x27aa068c  addiu       $t2, $sp, 0x68C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1676));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F544u;
        goto label_41f544;
    }
    ctx->pc = 0x41F53Cu;
    SET_GPR_U32(ctx, 31, 0x41F544u);
    ctx->pc = 0x41F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F53Cu;
    // 0x41f540: 0x27aa068c  addiu       $t2, $sp, 0x68C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EB38u, 0x41F53Cu, 0x41F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F544u;
label_41f544:
    // 0x41f544: 0x8fa30694  lw          $v1, 0x694($sp)
    ctx->pc = 0x41f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
label_41f548:
    // 0x41f548: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_41f54c:
    if (ctx->pc == 0x41F54Cu) {
        ctx->pc = 0x41F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F548u;
        // 0x41f54c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F550u;
        goto label_41f550;
    }
    ctx->pc = 0x41F548u;
    {
        const bool branch_taken_0x41f548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F548u;
        // 0x41f54c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f548) {
            ctx->pc = 0x41F5F8u;
            goto label_41f5f8;
        }
    }
    ctx->pc = 0x41F550u;
label_41f550:
    // 0x41f550: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x41f550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_41f554:
    // 0x41f554: 0x64000c1  bltz        $s2, . + 4 + (0xC1 << 2)
label_41f558:
    if (ctx->pc == 0x41F558u) {
        ctx->pc = 0x41F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F554u;
        // 0x41f558: 0x27defffc  addiu       $fp, $fp, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F55Cu;
        goto label_41f55c;
    }
    ctx->pc = 0x41F554u;
    {
        const bool branch_taken_0x41f554 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x41F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F554u;
        // 0x41f558: 0x27defffc  addiu       $fp, $fp, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f554) {
            ctx->pc = 0x41F85Cu;
            goto label_41f85c;
        }
    }
    ctx->pc = 0x41F55Cu;
label_41f55c:
    // 0x41f55c: 0x3dd8821  addu        $s1, $fp, $sp
    ctx->pc = 0x41f55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
label_41f560:
    // 0x41f560: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x41f560u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
label_41f564:
    // 0x41f564: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41f564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_41f568:
    // 0x41f568: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_41f56c:
    if (ctx->pc == 0x41F56Cu) {
        ctx->pc = 0x41F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F568u;
        // 0x41f56c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F570u;
        goto label_41f570;
    }
    ctx->pc = 0x41F568u;
    {
        const bool branch_taken_0x41f568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F568u;
        // 0x41f56c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f568) {
            ctx->pc = 0x41F5C0u;
            goto label_41f5c0;
        }
    }
    ctx->pc = 0x41F570u;
label_41f570:
    // 0x41f570: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41f570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_41f574:
    // 0x41f574: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_41f578:
    if (ctx->pc == 0x41F578u) {
        ctx->pc = 0x41F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F574u;
        // 0x41f578: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F57Cu;
        goto label_41f57c;
    }
    ctx->pc = 0x41F574u;
    {
        const bool branch_taken_0x41f574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F574u;
        // 0x41f578: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f574) {
            ctx->pc = 0x41F5A4u;
            goto label_41f5a4;
        }
    }
    ctx->pc = 0x41F57Cu;
label_41f57c:
    // 0x41f57c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_41f580:
    if (ctx->pc == 0x41F580u) {
        ctx->pc = 0x41F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F57Cu;
        // 0x41f580: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F584u;
        goto label_41f584;
    }
    ctx->pc = 0x41F57Cu;
    {
        const bool branch_taken_0x41f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f57c) {
            ctx->pc = 0x41F580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F57Cu;
            // 0x41f580: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F598u;
            goto label_41f598;
        }
    }
    ctx->pc = 0x41F584u;
label_41f584:
    // 0x41f584: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x41f584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41f588:
    // 0x41f588: 0x2630fffc  addiu       $s0, $s1, -0x4
    ctx->pc = 0x41f588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_41f58c:
    // 0x41f58c: 0xc10705c  jal         func_41C170
label_41f590:
    if (ctx->pc == 0x41F590u) {
        ctx->pc = 0x41F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F58Cu;
        // 0x41f590: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F594u;
        goto label_41f594;
    }
    ctx->pc = 0x41F58Cu;
    SET_GPR_U32(ctx, 31, 0x41F594u);
    ctx->pc = 0x41F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F58Cu;
    // 0x41f590: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F58Cu, 0x41F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F594u;
label_41f594:
    // 0x41f594: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f598:
    // 0x41f598: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x41f598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_41f59c:
    // 0x41f59c: 0xc10705c  jal         func_41C170
label_41f5a0:
    if (ctx->pc == 0x41F5A0u) {
        ctx->pc = 0x41F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F59Cu;
        // 0x41f5a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F5A4u;
        goto label_41f5a4;
    }
    ctx->pc = 0x41F59Cu;
    SET_GPR_U32(ctx, 31, 0x41F5A4u);
    ctx->pc = 0x41F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F59Cu;
    // 0x41f5a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F59Cu, 0x41F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F5A4u;
label_41f5a4:
    // 0x41f5a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f5a8:
    // 0x41f5a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x41f5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_41f5ac:
    // 0x41f5ac: 0xc10705c  jal         func_41C170
label_41f5b0:
    if (ctx->pc == 0x41F5B0u) {
        ctx->pc = 0x41F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F5ACu;
        // 0x41f5b0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F5B4u;
        goto label_41f5b4;
    }
    ctx->pc = 0x41F5ACu;
    SET_GPR_U32(ctx, 31, 0x41F5B4u);
    ctx->pc = 0x41F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F5ACu;
    // 0x41f5b0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F5ACu, 0x41F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F5B4u;
label_41f5b4:
    // 0x41f5b4: 0x64000a9  bltz        $s2, . + 4 + (0xA9 << 2)
label_41f5b8:
    if (ctx->pc == 0x41F5B8u) {
        ctx->pc = 0x41F5BCu;
        goto label_41f5bc;
    }
    ctx->pc = 0x41F5B4u;
    {
        const bool branch_taken_0x41f5b4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x41f5b4) {
            ctx->pc = 0x41F85Cu;
            goto label_41f85c;
        }
    }
    ctx->pc = 0x41F5BCu;
label_41f5bc:
    // 0x41f5bc: 0x0  nop
    ctx->pc = 0x41f5bcu;
    // NOP
label_41f5c0:
    // 0x41f5c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f5c4:
    // 0x41f5c4: 0xc10705c  jal         func_41C170
label_41f5c8:
    if (ctx->pc == 0x41F5C8u) {
        ctx->pc = 0x41F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F5C4u;
        // 0x41f5c8: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F5CCu;
        goto label_41f5cc;
    }
    ctx->pc = 0x41F5C4u;
    SET_GPR_U32(ctx, 31, 0x41F5CCu);
    ctx->pc = 0x41F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F5C4u;
    // 0x41f5c8: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F5C4u, 0x41F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F5CCu;
label_41f5cc:
    // 0x41f5cc: 0xc10705c  jal         func_41C170
label_41f5d0:
    if (ctx->pc == 0x41F5D0u) {
        ctx->pc = 0x41F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F5CCu;
        // 0x41f5d0: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F5D4u;
        goto label_41f5d4;
    }
    ctx->pc = 0x41F5CCu;
    SET_GPR_U32(ctx, 31, 0x41F5D4u);
    ctx->pc = 0x41F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F5CCu;
    // 0x41f5d0: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F5CCu, 0x41F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F5D4u;
label_41f5d4:
    // 0x41f5d4: 0xc10705c  jal         func_41C170
label_41f5d8:
    if (ctx->pc == 0x41F5D8u) {
        ctx->pc = 0x41F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F5D4u;
        // 0x41f5d8: 0x8e04fff8  lw          $a0, -0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F5DCu;
        goto label_41f5dc;
    }
    ctx->pc = 0x41F5D4u;
    SET_GPR_U32(ctx, 31, 0x41F5DCu);
    ctx->pc = 0x41F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F5D4u;
    // 0x41f5d8: 0x8e04fff8  lw          $a0, -0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F5D4u, 0x41F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F5DCu;
label_41f5dc:
    // 0x41f5dc: 0x8e04fff4  lw          $a0, -0xC($s0)
    ctx->pc = 0x41f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
label_41f5e0:
    // 0x41f5e0: 0xc10705c  jal         func_41C170
label_41f5e4:
    if (ctx->pc == 0x41F5E4u) {
        ctx->pc = 0x41F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F5E0u;
        // 0x41f5e4: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F5E8u;
        goto label_41f5e8;
    }
    ctx->pc = 0x41F5E0u;
    SET_GPR_U32(ctx, 31, 0x41F5E8u);
    ctx->pc = 0x41F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F5E0u;
    // 0x41f5e4: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F5E0u, 0x41F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F5E8u;
label_41f5e8:
    // 0x41f5e8: 0x643fff6  bgezl       $s2, . + 4 + (-0xA << 2)
label_41f5ec:
    if (ctx->pc == 0x41F5ECu) {
        ctx->pc = 0x41F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F5E8u;
        // 0x41f5ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F5F0u;
        goto label_41f5f0;
    }
    ctx->pc = 0x41F5E8u;
    {
        const bool branch_taken_0x41f5e8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x41f5e8) {
            ctx->pc = 0x41F5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F5E8u;
            // 0x41f5ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f5c4;
        }
    }
    ctx->pc = 0x41F5F0u;
label_41f5f0:
    // 0x41f5f0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_41f5f4:
    if (ctx->pc == 0x41F5F4u) {
        ctx->pc = 0x41F5F8u;
        goto label_41f5f8;
    }
    ctx->pc = 0x41F5F0u;
    {
        const bool branch_taken_0x41f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f5f0) {
            ctx->pc = 0x41F85Cu;
            goto label_41f85c;
        }
    }
    ctx->pc = 0x41F5F8u;
label_41f5f8:
    // 0x41f5f8: 0x8fa40694  lw          $a0, 0x694($sp)
    ctx->pc = 0x41f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
label_41f5fc:
    // 0x41f5fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x41f5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_41f600:
    // 0x41f600: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x41f600u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_41f604:
    // 0x41f604: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x41f604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_41f608:
    // 0x41f608: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x41f608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_41f60c:
    // 0x41f60c: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
label_41f610:
    if (ctx->pc == 0x41F610u) {
        ctx->pc = 0x41F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F60Cu;
        // 0x41f610: 0xafa40694  sw          $a0, 0x694($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F614u;
        goto label_41f614;
    }
    ctx->pc = 0x41F60Cu;
    {
        const bool branch_taken_0x41f60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F60Cu;
        // 0x41f610: 0xafa40694  sw          $a0, 0x694($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f60c) {
            ctx->pc = 0x41F3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f3f8;
        }
    }
    ctx->pc = 0x41F614u;
label_41f614:
    // 0x41f614: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x41f614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_41f618:
    // 0x41f618: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x41f618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_41f61c:
    // 0x41f61c: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x41f61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_41f620:
    // 0x41f620: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_41f624:
    if (ctx->pc == 0x41F624u) {
        ctx->pc = 0x41F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F620u;
        // 0x41f624: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F628u;
        goto label_41f628;
    }
    ctx->pc = 0x41F620u;
    {
        const bool branch_taken_0x41f620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F620u;
        // 0x41f624: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f620) {
            ctx->pc = 0x41F670u;
            goto label_41f670;
        }
    }
    ctx->pc = 0x41F628u;
label_41f628:
    // 0x41f628: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41f62c:
    if (ctx->pc == 0x41F62Cu) {
        ctx->pc = 0x41F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F628u;
        // 0x41f62c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F630u;
        goto label_41f630;
    }
    ctx->pc = 0x41F628u;
    {
        const bool branch_taken_0x41f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F628u;
        // 0x41f62c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f628) {
            ctx->pc = 0x41F64Cu;
            goto label_41f64c;
        }
    }
    ctx->pc = 0x41F630u;
label_41f630:
    // 0x41f630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41f630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41f634:
    // 0x41f634: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x41f634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41f638:
    // 0x41f638: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x41f638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41f63c:
    // 0x41f63c: 0xc1079ea  jal         func_41E7A8
label_41f640:
    if (ctx->pc == 0x41F640u) {
        ctx->pc = 0x41F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F63Cu;
        // 0x41f640: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F644u;
        goto label_41f644;
    }
    ctx->pc = 0x41F63Cu;
    SET_GPR_U32(ctx, 31, 0x41F644u);
    ctx->pc = 0x41F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F63Cu;
    // 0x41f640: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E7A8u, 0x41F63Cu, 0x41F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F644u;
label_41f644:
    // 0x41f644: 0x10000006  b           . + 4 + (0x6 << 2)
label_41f648:
    if (ctx->pc == 0x41F648u) {
        ctx->pc = 0x41F64Cu;
        goto label_41f64c;
    }
    ctx->pc = 0x41F644u;
    {
        const bool branch_taken_0x41f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f644) {
            ctx->pc = 0x41F660u;
            goto label_41f660;
        }
    }
    ctx->pc = 0x41F64Cu;
label_41f64c:
    // 0x41f64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41f64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41f650:
    // 0x41f650: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x41f650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41f654:
    // 0x41f654: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x41f654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41f658:
    // 0x41f658: 0xc1079ea  jal         func_41E7A8
label_41f65c:
    if (ctx->pc == 0x41F65Cu) {
        ctx->pc = 0x41F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F658u;
        // 0x41f65c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F660u;
        goto label_41f660;
    }
    ctx->pc = 0x41F658u;
    SET_GPR_U32(ctx, 31, 0x41F660u);
    ctx->pc = 0x41F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F658u;
    // 0x41f65c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E7A8u, 0x41F658u, 0x41F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F660u;
label_41f660:
    // 0x41f660: 0xc106faa  jal         func_41BEA8
label_41f664:
    if (ctx->pc == 0x41F664u) {
        ctx->pc = 0x41F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F660u;
        // 0x41f664: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F668u;
        goto label_41f668;
    }
    ctx->pc = 0x41F660u;
    SET_GPR_U32(ctx, 31, 0x41F668u);
    ctx->pc = 0x41F664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F660u;
    // 0x41f664: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F660u, 0x41F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F668u;
label_41f668:
    // 0x41f668: 0x10000026  b           . + 4 + (0x26 << 2)
label_41f66c:
    if (ctx->pc == 0x41F66Cu) {
        ctx->pc = 0x41F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F668u;
        // 0x41f66c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F670u;
        goto label_41f670;
    }
    ctx->pc = 0x41F668u;
    {
        const bool branch_taken_0x41f668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F668u;
        // 0x41f66c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f668) {
            ctx->pc = 0x41F704u;
            goto label_41f704;
        }
    }
    ctx->pc = 0x41F670u;
label_41f670:
    // 0x41f670: 0x1a800023  blez        $s4, . + 4 + (0x23 << 2)
label_41f674:
    if (ctx->pc == 0x41F674u) {
        ctx->pc = 0x41F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F670u;
        // 0x41f674: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F678u;
        goto label_41f678;
    }
    ctx->pc = 0x41F670u;
    {
        const bool branch_taken_0x41f670 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x41F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F670u;
        // 0x41f674: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f670) {
            ctx->pc = 0x41F700u;
            goto label_41f700;
        }
    }
    ctx->pc = 0x41F678u;
label_41f678:
    // 0x41f678: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x41f678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41f67c:
    // 0x41f67c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41f67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_41f680:
    // 0x41f680: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_41f684:
    if (ctx->pc == 0x41F684u) {
        ctx->pc = 0x41F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F680u;
        // 0x41f684: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F688u;
        goto label_41f688;
    }
    ctx->pc = 0x41F680u;
    {
        const bool branch_taken_0x41f680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F680u;
        // 0x41f684: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f680) {
            ctx->pc = 0x41F6D0u;
            goto label_41f6d0;
        }
    }
    ctx->pc = 0x41F688u;
label_41f688:
    // 0x41f688: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41f688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_41f68c:
    // 0x41f68c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_41f690:
    if (ctx->pc == 0x41F690u) {
        ctx->pc = 0x41F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F68Cu;
        // 0x41f690: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F694u;
        goto label_41f694;
    }
    ctx->pc = 0x41F68Cu;
    {
        const bool branch_taken_0x41f68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F68Cu;
        // 0x41f690: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f68c) {
            ctx->pc = 0x41F6B8u;
            goto label_41f6b8;
        }
    }
    ctx->pc = 0x41F694u;
label_41f694:
    // 0x41f694: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41f698:
    if (ctx->pc == 0x41F698u) {
        ctx->pc = 0x41F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F694u;
        // 0x41f698: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F69Cu;
        goto label_41f69c;
    }
    ctx->pc = 0x41F694u;
    {
        const bool branch_taken_0x41f694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F694u;
        // 0x41f698: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f694) {
            ctx->pc = 0x41F6A8u;
            goto label_41f6a8;
        }
    }
    ctx->pc = 0x41F69Cu;
label_41f69c:
    // 0x41f69c: 0xc106faa  jal         func_41BEA8
label_41f6a0:
    if (ctx->pc == 0x41F6A0u) {
        ctx->pc = 0x41F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F69Cu;
        // 0x41f6a0: 0x2692ffff  addiu       $s2, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F6A4u;
        goto label_41f6a4;
    }
    ctx->pc = 0x41F69Cu;
    SET_GPR_U32(ctx, 31, 0x41F6A4u);
    ctx->pc = 0x41F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F69Cu;
    // 0x41f6a0: 0x2692ffff  addiu       $s2, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F69Cu, 0x41F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6A4u;
label_41f6a4:
    // 0x41f6a4: 0x37b00004  ori         $s0, $sp, 0x4
    ctx->pc = 0x41f6a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_41f6a8:
    // 0x41f6a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f6ac:
    // 0x41f6ac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x41f6acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_41f6b0:
    // 0x41f6b0: 0xc106faa  jal         func_41BEA8
label_41f6b4:
    if (ctx->pc == 0x41F6B4u) {
        ctx->pc = 0x41F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6B0u;
        // 0x41f6b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F6B8u;
        goto label_41f6b8;
    }
    ctx->pc = 0x41F6B0u;
    SET_GPR_U32(ctx, 31, 0x41F6B8u);
    ctx->pc = 0x41F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F6B0u;
    // 0x41f6b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F6B0u, 0x41F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6B8u;
label_41f6b8:
    // 0x41f6b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f6bc:
    // 0x41f6bc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x41f6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_41f6c0:
    // 0x41f6c0: 0xc106faa  jal         func_41BEA8
label_41f6c4:
    if (ctx->pc == 0x41F6C4u) {
        ctx->pc = 0x41F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6C0u;
        // 0x41f6c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F6C8u;
        goto label_41f6c8;
    }
    ctx->pc = 0x41F6C0u;
    SET_GPR_U32(ctx, 31, 0x41F6C8u);
    ctx->pc = 0x41F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F6C0u;
    // 0x41f6c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F6C0u, 0x41F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6C8u;
label_41f6c8:
    // 0x41f6c8: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
label_41f6cc:
    if (ctx->pc == 0x41F6CCu) {
        ctx->pc = 0x41F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6C8u;
        // 0x41f6cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F6D0u;
        goto label_41f6d0;
    }
    ctx->pc = 0x41F6C8u;
    {
        const bool branch_taken_0x41f6c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f6c8) {
            ctx->pc = 0x41F6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F6C8u;
            // 0x41f6cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F704u;
            goto label_41f704;
        }
    }
    ctx->pc = 0x41F6D0u;
label_41f6d0:
    // 0x41f6d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f6d4:
    // 0x41f6d4: 0xc106faa  jal         func_41BEA8
label_41f6d8:
    if (ctx->pc == 0x41F6D8u) {
        ctx->pc = 0x41F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6D4u;
        // 0x41f6d8: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F6DCu;
        goto label_41f6dc;
    }
    ctx->pc = 0x41F6D4u;
    SET_GPR_U32(ctx, 31, 0x41F6DCu);
    ctx->pc = 0x41F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F6D4u;
    // 0x41f6d8: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F6D4u, 0x41F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6DCu;
label_41f6dc:
    // 0x41f6dc: 0xc106faa  jal         func_41BEA8
label_41f6e0:
    if (ctx->pc == 0x41F6E0u) {
        ctx->pc = 0x41F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6DCu;
        // 0x41f6e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F6E4u;
        goto label_41f6e4;
    }
    ctx->pc = 0x41F6DCu;
    SET_GPR_U32(ctx, 31, 0x41F6E4u);
    ctx->pc = 0x41F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F6DCu;
    // 0x41f6e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F6DCu, 0x41F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6E4u;
label_41f6e4:
    // 0x41f6e4: 0xc106faa  jal         func_41BEA8
label_41f6e8:
    if (ctx->pc == 0x41F6E8u) {
        ctx->pc = 0x41F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6E4u;
        // 0x41f6e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F6ECu;
        goto label_41f6ec;
    }
    ctx->pc = 0x41F6E4u;
    SET_GPR_U32(ctx, 31, 0x41F6ECu);
    ctx->pc = 0x41F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F6E4u;
    // 0x41f6e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F6E4u, 0x41F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6ECu;
label_41f6ec:
    // 0x41f6ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x41f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41f6f0:
    // 0x41f6f0: 0xc106faa  jal         func_41BEA8
label_41f6f4:
    if (ctx->pc == 0x41F6F4u) {
        ctx->pc = 0x41F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6F0u;
        // 0x41f6f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F6F8u;
        goto label_41f6f8;
    }
    ctx->pc = 0x41F6F0u;
    SET_GPR_U32(ctx, 31, 0x41F6F8u);
    ctx->pc = 0x41F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F6F0u;
    // 0x41f6f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F6F0u, 0x41F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6F8u;
label_41f6f8:
    // 0x41f6f8: 0x5640fff6  bnel        $s2, $zero, . + 4 + (-0xA << 2)
label_41f6fc:
    if (ctx->pc == 0x41F6FCu) {
        ctx->pc = 0x41F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6F8u;
        // 0x41f6fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F700u;
        goto label_41f700;
    }
    ctx->pc = 0x41F6F8u;
    {
        const bool branch_taken_0x41f6f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f6f8) {
            ctx->pc = 0x41F6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F6F8u;
            // 0x41f6fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F6D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f6d4;
        }
    }
    ctx->pc = 0x41F700u;
label_41f700:
    // 0x41f700: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41f700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41f704:
    // 0x41f704: 0x1a800050  blez        $s4, . + 4 + (0x50 << 2)
label_41f708:
    if (ctx->pc == 0x41F708u) {
        ctx->pc = 0x41F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F704u;
        // 0x41f708: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F70Cu;
        goto label_41f70c;
    }
    ctx->pc = 0x41F704u;
    {
        const bool branch_taken_0x41f704 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x41F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F704u;
        // 0x41f708: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f704) {
            ctx->pc = 0x41F848u;
            goto label_41f848;
        }
    }
    ctx->pc = 0x41F70Cu;
label_41f70c:
    // 0x41f70c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41f70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41f710:
    // 0x41f710: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x41f710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_41f714:
    // 0x41f714: 0xc1075c0  jal         func_41D700
label_41f718:
    if (ctx->pc == 0x41F718u) {
        ctx->pc = 0x41F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F714u;
        // 0x41f718: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F71Cu;
        goto label_41f71c;
    }
    ctx->pc = 0x41F714u;
    SET_GPR_U32(ctx, 31, 0x41F71Cu);
    ctx->pc = 0x41F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F714u;
    // 0x41f718: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41F714u, 0x41F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F71Cu;
label_41f71c:
    // 0x41f71c: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_41f720:
    if (ctx->pc == 0x41F720u) {
        ctx->pc = 0x41F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F71Cu;
        // 0x41f720: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F724u;
        goto label_41f724;
    }
    ctx->pc = 0x41F71Cu;
    {
        const bool branch_taken_0x41f71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f71c) {
            ctx->pc = 0x41F720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F71Cu;
            // 0x41f720: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F7ECu;
            goto label_41f7ec;
        }
    }
    ctx->pc = 0x41F724u;
label_41f724:
    // 0x41f724: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41f724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f728:
    // 0x41f728: 0xc1073c2  jal         func_41CF08
label_41f72c:
    if (ctx->pc == 0x41F72Cu) {
        ctx->pc = 0x41F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F728u;
        // 0x41f72c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F730u;
        goto label_41f730;
    }
    ctx->pc = 0x41F728u;
    SET_GPR_U32(ctx, 31, 0x41F730u);
    ctx->pc = 0x41F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F728u;
    // 0x41f72c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41F728u, 0x41F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F730u;
label_41f730:
    // 0x41f730: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_41f734:
    if (ctx->pc == 0x41F734u) {
        ctx->pc = 0x41F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F730u;
        // 0x41f734: 0x254102a  slt         $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F738u;
        goto label_41f738;
    }
    ctx->pc = 0x41F730u;
    {
        const bool branch_taken_0x41f730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F730u;
        // 0x41f734: 0x254102a  slt         $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f730) {
            ctx->pc = 0x41F7E0u;
            goto label_41f7e0;
        }
    }
    ctx->pc = 0x41F738u;
label_41f738:
    // 0x41f738: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_41f73c:
    if (ctx->pc == 0x41F73Cu) {
        ctx->pc = 0x41F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F738u;
        // 0x41f73c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F740u;
        goto label_41f740;
    }
    ctx->pc = 0x41F738u;
    {
        const bool branch_taken_0x41f738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F738u;
        // 0x41f73c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f738) {
            ctx->pc = 0x41F85Cu;
            goto label_41f85c;
        }
    }
    ctx->pc = 0x41F740u;
label_41f740:
    // 0x41f740: 0x2929023  subu        $s2, $s4, $s2
    ctx->pc = 0x41f740u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_41f744:
    // 0x41f744: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x41f744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_41f748:
    // 0x41f748: 0x121823  negu        $v1, $s2
    ctx->pc = 0x41f748u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_41f74c:
    // 0x41f74c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x41f74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_41f750:
    // 0x41f750: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_41f754:
    if (ctx->pc == 0x41F754u) {
        ctx->pc = 0x41F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F750u;
        // 0x41f754: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F758u;
        goto label_41f758;
    }
    ctx->pc = 0x41F750u;
    {
        const bool branch_taken_0x41f750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F750u;
        // 0x41f754: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f750) {
            ctx->pc = 0x41F7A8u;
            goto label_41f7a8;
        }
    }
    ctx->pc = 0x41F758u;
label_41f758:
    // 0x41f758: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41f758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_41f75c:
    // 0x41f75c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_41f760:
    if (ctx->pc == 0x41F760u) {
        ctx->pc = 0x41F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F75Cu;
        // 0x41f760: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F764u;
        goto label_41f764;
    }
    ctx->pc = 0x41F75Cu;
    {
        const bool branch_taken_0x41f75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F75Cu;
        // 0x41f760: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f75c) {
            ctx->pc = 0x41F78Cu;
            goto label_41f78c;
        }
    }
    ctx->pc = 0x41F764u;
label_41f764:
    // 0x41f764: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_41f768:
    if (ctx->pc == 0x41F768u) {
        ctx->pc = 0x41F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F764u;
        // 0x41f768: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F76Cu;
        goto label_41f76c;
    }
    ctx->pc = 0x41F764u;
    {
        const bool branch_taken_0x41f764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f764) {
            ctx->pc = 0x41F768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F764u;
            // 0x41f768: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F780u;
            goto label_41f780;
        }
    }
    ctx->pc = 0x41F76Cu;
label_41f76c:
    // 0x41f76c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x41f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41f770:
    // 0x41f770: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x41f770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_41f774:
    // 0x41f774: 0xc10705c  jal         func_41C170
label_41f778:
    if (ctx->pc == 0x41F778u) {
        ctx->pc = 0x41F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F774u;
        // 0x41f778: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F77Cu;
        goto label_41f77c;
    }
    ctx->pc = 0x41F774u;
    SET_GPR_U32(ctx, 31, 0x41F77Cu);
    ctx->pc = 0x41F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F774u;
    // 0x41f778: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F774u, 0x41F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F77Cu;
label_41f77c:
    // 0x41f77c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f780:
    // 0x41f780: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x41f780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_41f784:
    // 0x41f784: 0xc10705c  jal         func_41C170
label_41f788:
    if (ctx->pc == 0x41F788u) {
        ctx->pc = 0x41F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F784u;
        // 0x41f788: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F78Cu;
        goto label_41f78c;
    }
    ctx->pc = 0x41F784u;
    SET_GPR_U32(ctx, 31, 0x41F78Cu);
    ctx->pc = 0x41F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F784u;
    // 0x41f788: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F784u, 0x41F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F78Cu;
label_41f78c:
    // 0x41f78c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f790:
    // 0x41f790: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x41f790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_41f794:
    // 0x41f794: 0xc10705c  jal         func_41C170
label_41f798:
    if (ctx->pc == 0x41F798u) {
        ctx->pc = 0x41F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F794u;
        // 0x41f798: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F79Cu;
        goto label_41f79c;
    }
    ctx->pc = 0x41F794u;
    SET_GPR_U32(ctx, 31, 0x41F79Cu);
    ctx->pc = 0x41F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F794u;
    // 0x41f798: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F794u, 0x41F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F79Cu;
label_41f79c:
    // 0x41f79c: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
label_41f7a0:
    if (ctx->pc == 0x41F7A0u) {
        ctx->pc = 0x41F7A4u;
        goto label_41f7a4;
    }
    ctx->pc = 0x41F79Cu;
    {
        const bool branch_taken_0x41f79c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f79c) {
            ctx->pc = 0x41F85Cu;
            goto label_41f85c;
        }
    }
    ctx->pc = 0x41F7A4u;
label_41f7a4:
    // 0x41f7a4: 0x0  nop
    ctx->pc = 0x41f7a4u;
    // NOP
label_41f7a8:
    // 0x41f7a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f7ac:
    // 0x41f7ac: 0xc10705c  jal         func_41C170
label_41f7b0:
    if (ctx->pc == 0x41F7B0u) {
        ctx->pc = 0x41F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7ACu;
        // 0x41f7b0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F7B4u;
        goto label_41f7b4;
    }
    ctx->pc = 0x41F7ACu;
    SET_GPR_U32(ctx, 31, 0x41F7B4u);
    ctx->pc = 0x41F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F7ACu;
    // 0x41f7b0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F7ACu, 0x41F7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F7B4u;
label_41f7b4:
    // 0x41f7b4: 0xc10705c  jal         func_41C170
label_41f7b8:
    if (ctx->pc == 0x41F7B8u) {
        ctx->pc = 0x41F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7B4u;
        // 0x41f7b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F7BCu;
        goto label_41f7bc;
    }
    ctx->pc = 0x41F7B4u;
    SET_GPR_U32(ctx, 31, 0x41F7BCu);
    ctx->pc = 0x41F7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F7B4u;
    // 0x41f7b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F7B4u, 0x41F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F7BCu;
label_41f7bc:
    // 0x41f7bc: 0xc10705c  jal         func_41C170
label_41f7c0:
    if (ctx->pc == 0x41F7C0u) {
        ctx->pc = 0x41F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7BCu;
        // 0x41f7c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F7C4u;
        goto label_41f7c4;
    }
    ctx->pc = 0x41F7BCu;
    SET_GPR_U32(ctx, 31, 0x41F7C4u);
    ctx->pc = 0x41F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F7BCu;
    // 0x41f7c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F7BCu, 0x41F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F7C4u;
label_41f7c4:
    // 0x41f7c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x41f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41f7c8:
    // 0x41f7c8: 0xc10705c  jal         func_41C170
label_41f7cc:
    if (ctx->pc == 0x41F7CCu) {
        ctx->pc = 0x41F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7C8u;
        // 0x41f7cc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F7D0u;
        goto label_41f7d0;
    }
    ctx->pc = 0x41F7C8u;
    SET_GPR_U32(ctx, 31, 0x41F7D0u);
    ctx->pc = 0x41F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F7C8u;
    // 0x41f7cc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F7C8u, 0x41F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F7D0u;
label_41f7d0:
    // 0x41f7d0: 0x5640fff6  bnel        $s2, $zero, . + 4 + (-0xA << 2)
label_41f7d4:
    if (ctx->pc == 0x41F7D4u) {
        ctx->pc = 0x41F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7D0u;
        // 0x41f7d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F7D8u;
        goto label_41f7d8;
    }
    ctx->pc = 0x41F7D0u;
    {
        const bool branch_taken_0x41f7d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f7d0) {
            ctx->pc = 0x41F7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F7D0u;
            // 0x41f7d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F7ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f7ac;
        }
    }
    ctx->pc = 0x41F7D8u;
label_41f7d8:
    // 0x41f7d8: 0x10000020  b           . + 4 + (0x20 << 2)
label_41f7dc:
    if (ctx->pc == 0x41F7DCu) {
        ctx->pc = 0x41F7E0u;
        goto label_41f7e0;
    }
    ctx->pc = 0x41F7D8u;
    {
        const bool branch_taken_0x41f7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f7d8) {
            ctx->pc = 0x41F85Cu;
            goto label_41f85c;
        }
    }
    ctx->pc = 0x41F7E0u;
label_41f7e0:
    // 0x41f7e0: 0xc1075d0  jal         func_41D740
label_41f7e4:
    if (ctx->pc == 0x41F7E4u) {
        ctx->pc = 0x41F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7E0u;
        // 0x41f7e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F7E8u;
        goto label_41f7e8;
    }
    ctx->pc = 0x41F7E0u;
    SET_GPR_U32(ctx, 31, 0x41F7E8u);
    ctx->pc = 0x41F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F7E0u;
    // 0x41f7e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41F7E0u, 0x41F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F7E8u;
label_41f7e8:
    // 0x41f7e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f7ec:
    // 0x41f7ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x41f7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_41f7f0:
    // 0x41f7f0: 0xc10705c  jal         func_41C170
label_41f7f4:
    if (ctx->pc == 0x41F7F4u) {
        ctx->pc = 0x41F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7F0u;
        // 0x41f7f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F7F8u;
        goto label_41f7f8;
    }
    ctx->pc = 0x41F7F0u;
    SET_GPR_U32(ctx, 31, 0x41F7F8u);
    ctx->pc = 0x41F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F7F0u;
    // 0x41f7f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F7F0u, 0x41F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F7F8u;
label_41f7f8:
    // 0x41f7f8: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x41f7f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_41f7fc:
    // 0x41f7fc: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_41f800:
    if (ctx->pc == 0x41F800u) {
        ctx->pc = 0x41F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7FCu;
        // 0x41f800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F804u;
        goto label_41f804;
    }
    ctx->pc = 0x41F7FCu;
    {
        const bool branch_taken_0x41f7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F7FCu;
        // 0x41f800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f7fc) {
            ctx->pc = 0x41F710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f710;
        }
    }
    ctx->pc = 0x41F804u;
label_41f804:
    // 0x41f804: 0x10000010  b           . + 4 + (0x10 << 2)
label_41f808:
    if (ctx->pc == 0x41F808u) {
        ctx->pc = 0x41F80Cu;
        goto label_41f80c;
    }
    ctx->pc = 0x41F804u;
    {
        const bool branch_taken_0x41f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f804) {
            ctx->pc = 0x41F848u;
            goto label_41f848;
        }
    }
    ctx->pc = 0x41F80Cu;
label_41f80c:
    // 0x41f80c: 0xc106faa  jal         func_41BEA8
label_41f810:
    if (ctx->pc == 0x41F810u) {
        ctx->pc = 0x41F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F80Cu;
        // 0x41f810: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F814u;
        goto label_41f814;
    }
    ctx->pc = 0x41F80Cu;
    SET_GPR_U32(ctx, 31, 0x41F814u);
    ctx->pc = 0x41F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F80Cu;
    // 0x41f810: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F80Cu, 0x41F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F814u;
label_41f814:
    // 0x41f814: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x41f814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_41f818:
    // 0x41f818: 0xc1073c2  jal         func_41CF08
label_41f81c:
    if (ctx->pc == 0x41F81Cu) {
        ctx->pc = 0x41F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F818u;
        // 0x41f81c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F820u;
        goto label_41f820;
    }
    ctx->pc = 0x41F818u;
    SET_GPR_U32(ctx, 31, 0x41F820u);
    ctx->pc = 0x41F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F818u;
    // 0x41f81c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41F818u, 0x41F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F820u;
label_41f820:
    // 0x41f820: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_41f824:
    if (ctx->pc == 0x41F824u) {
        ctx->pc = 0x41F828u;
        goto label_41f828;
    }
    ctx->pc = 0x41F820u;
    {
        const bool branch_taken_0x41f820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f820) {
            ctx->pc = 0x41F840u;
            goto label_41f840;
        }
    }
    ctx->pc = 0x41F828u;
label_41f828:
    // 0x41f828: 0xc1074ac  jal         func_41D2B0
label_41f82c:
    if (ctx->pc == 0x41F82Cu) {
        ctx->pc = 0x41F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F828u;
        // 0x41f82c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F830u;
        goto label_41f830;
    }
    ctx->pc = 0x41F828u;
    SET_GPR_U32(ctx, 31, 0x41F830u);
    ctx->pc = 0x41F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F828u;
    // 0x41f82c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x41F828u, 0x41F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F830u;
label_41f830:
    // 0x41f830: 0xc10705c  jal         func_41C170
label_41f834:
    if (ctx->pc == 0x41F834u) {
        ctx->pc = 0x41F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F830u;
        // 0x41f834: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F838u;
        goto label_41f838;
    }
    ctx->pc = 0x41F830u;
    SET_GPR_U32(ctx, 31, 0x41F838u);
    ctx->pc = 0x41F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F830u;
    // 0x41f834: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F830u, 0x41F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F838u;
label_41f838:
    // 0x41f838: 0x10000019  b           . + 4 + (0x19 << 2)
label_41f83c:
    if (ctx->pc == 0x41F83Cu) {
        ctx->pc = 0x41F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F838u;
        // 0x41f83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F840u;
        goto label_41f840;
    }
    ctx->pc = 0x41F838u;
    {
        const bool branch_taken_0x41f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F838u;
        // 0x41f83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f838) {
            ctx->pc = 0x41F8A0u;
            goto label_41f8a0;
        }
    }
    ctx->pc = 0x41F840u;
label_41f840:
    // 0x41f840: 0xc10705c  jal         func_41C170
label_41f844:
    if (ctx->pc == 0x41F844u) {
        ctx->pc = 0x41F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F840u;
        // 0x41f844: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F848u;
        goto label_41f848;
    }
    ctx->pc = 0x41F840u;
    SET_GPR_U32(ctx, 31, 0x41F848u);
    ctx->pc = 0x41F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F840u;
    // 0x41f844: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F840u, 0x41F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F848u;
label_41f848:
    // 0x41f848: 0xc10820a  jal         func_420828
label_41f84c:
    if (ctx->pc == 0x41F84Cu) {
        ctx->pc = 0x41F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F848u;
        // 0x41f84c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F850u;
        goto label_41f850;
    }
    ctx->pc = 0x41F848u;
    SET_GPR_U32(ctx, 31, 0x41F850u);
    ctx->pc = 0x41F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F848u;
    // 0x41f84c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x41F848u, 0x41F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F850u;
label_41f850:
    // 0x41f850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41f850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41f854:
    // 0x41f854: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_41f858:
    if (ctx->pc == 0x41F858u) {
        ctx->pc = 0x41F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F854u;
        // 0x41f858: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F85Cu;
        goto label_41f85c;
    }
    ctx->pc = 0x41F854u;
    {
        const bool branch_taken_0x41f854 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F854u;
        // 0x41f858: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f854) {
            ctx->pc = 0x41F86Cu;
            goto label_41f86c;
        }
    }
    ctx->pc = 0x41F85Cu;
label_41f85c:
    // 0x41f85c: 0xc1074ac  jal         func_41D2B0
label_41f860:
    if (ctx->pc == 0x41F860u) {
        ctx->pc = 0x41F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F85Cu;
        // 0x41f860: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F864u;
        goto label_41f864;
    }
    ctx->pc = 0x41F85Cu;
    SET_GPR_U32(ctx, 31, 0x41F864u);
    ctx->pc = 0x41F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F85Cu;
    // 0x41f860: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x41F85Cu, 0x41F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F864u;
label_41f864:
    // 0x41f864: 0x1000000e  b           . + 4 + (0xE << 2)
label_41f868:
    if (ctx->pc == 0x41F868u) {
        ctx->pc = 0x41F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F864u;
        // 0x41f868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F86Cu;
        goto label_41f86c;
    }
    ctx->pc = 0x41F864u;
    {
        const bool branch_taken_0x41f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F864u;
        // 0x41f868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f864) {
            ctx->pc = 0x41F8A0u;
            goto label_41f8a0;
        }
    }
    ctx->pc = 0x41F86Cu;
label_41f86c:
    // 0x41f86c: 0xc10815c  jal         func_420570
label_41f870:
    if (ctx->pc == 0x41F870u) {
        ctx->pc = 0x41F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F86Cu;
        // 0x41f870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F874u;
        goto label_41f874;
    }
    ctx->pc = 0x41F86Cu;
    SET_GPR_U32(ctx, 31, 0x41F874u);
    ctx->pc = 0x41F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F86Cu;
    // 0x41f870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420570u, 0x41F86Cu, 0x41F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F874u;
label_41f874:
    // 0x41f874: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_41f878:
    if (ctx->pc == 0x41F878u) {
        ctx->pc = 0x41F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F874u;
        // 0x41f878: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F87Cu;
        goto label_41f87c;
    }
    ctx->pc = 0x41F874u;
    {
        const bool branch_taken_0x41f874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F874u;
        // 0x41f878: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f874) {
            ctx->pc = 0x41F890u;
            goto label_41f890;
        }
    }
    ctx->pc = 0x41F87Cu;
label_41f87c:
    // 0x41f87c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41f880:
    // 0x41f880: 0xc108184  jal         func_420610
label_41f884:
    if (ctx->pc == 0x41F884u) {
        ctx->pc = 0x41F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F880u;
        // 0x41f884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F888u;
        goto label_41f888;
    }
    ctx->pc = 0x41F880u;
    SET_GPR_U32(ctx, 31, 0x41F888u);
    ctx->pc = 0x41F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F880u;
    // 0x41f884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420610u, 0x41F880u, 0x41F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F888u;
label_41f888:
    // 0x41f888: 0x10000005  b           . + 4 + (0x5 << 2)
label_41f88c:
    if (ctx->pc == 0x41F88Cu) {
        ctx->pc = 0x41F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F888u;
        // 0x41f88c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F890u;
        goto label_41f890;
    }
    ctx->pc = 0x41F888u;
    {
        const bool branch_taken_0x41f888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F888u;
        // 0x41f88c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f888) {
            ctx->pc = 0x41F8A0u;
            goto label_41f8a0;
        }
    }
    ctx->pc = 0x41F890u;
label_41f890:
    // 0x41f890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f894:
    // 0x41f894: 0xc108184  jal         func_420610
label_41f898:
    if (ctx->pc == 0x41F898u) {
        ctx->pc = 0x41F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F894u;
        // 0x41f898: 0x24a59d20  addiu       $a1, $a1, -0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F89Cu;
        goto label_41f89c;
    }
    ctx->pc = 0x41F894u;
    SET_GPR_U32(ctx, 31, 0x41F89Cu);
    ctx->pc = 0x41F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F894u;
    // 0x41f898: 0x24a59d20  addiu       $a1, $a1, -0x62E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420610u, 0x41F894u, 0x41F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F89Cu;
label_41f89c:
    // 0x41f89c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41f89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f8a0:
    // 0x41f8a0: 0x7bb00730  lq          $s0, 0x730($sp)
    ctx->pc = 0x41f8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1840)));
label_41f8a4:
    // 0x41f8a4: 0x7bb10720  lq          $s1, 0x720($sp)
    ctx->pc = 0x41f8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1824)));
label_41f8a8:
    // 0x41f8a8: 0x7bb20710  lq          $s2, 0x710($sp)
    ctx->pc = 0x41f8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1808)));
label_41f8ac:
    // 0x41f8ac: 0x7bb30700  lq          $s3, 0x700($sp)
    ctx->pc = 0x41f8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
label_41f8b0:
    // 0x41f8b0: 0x7bb406f0  lq          $s4, 0x6F0($sp)
    ctx->pc = 0x41f8b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
label_41f8b4:
    // 0x41f8b4: 0x7bb506e0  lq          $s5, 0x6E0($sp)
    ctx->pc = 0x41f8b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1760)));
label_41f8b8:
    // 0x41f8b8: 0x7bb606d0  lq          $s6, 0x6D0($sp)
    ctx->pc = 0x41f8b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
label_41f8bc:
    // 0x41f8bc: 0x7bb706c0  lq          $s7, 0x6C0($sp)
    ctx->pc = 0x41f8bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1728)));
label_41f8c0:
    // 0x41f8c0: 0x7bbe06b0  lq          $fp, 0x6B0($sp)
    ctx->pc = 0x41f8c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1712)));
label_41f8c4:
    // 0x41f8c4: 0xdfbf06a0  ld          $ra, 0x6A0($sp)
    ctx->pc = 0x41f8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1696)));
label_41f8c8:
    // 0x41f8c8: 0x3e00008  jr          $ra
label_41f8cc:
    if (ctx->pc == 0x41F8CCu) {
        ctx->pc = 0x41F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F8C8u;
        // 0x41f8cc: 0x27bd0740  addiu       $sp, $sp, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F8D0u;
        goto label_fallthrough_0x41f8c8;
    }
    ctx->pc = 0x41F8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F8C8u;
        // 0x41f8cc: 0x27bd0740  addiu       $sp, $sp, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41f8c8:
    ctx->pc = 0x41F8D0u;
}
